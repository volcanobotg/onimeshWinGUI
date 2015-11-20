#include "omgui.h"
#include "ui_omgui.h"
#include <QFileDialog>
#include <iostream>
#include <stdlib.h>
#include <QThread>
#include <QtGui>
#include <QProcess>

using namespace std;

bool fileSelected, dirSelected;
QString dirName, fileName, promptText;
QStringList fileNames;
QString fileNamesSize, fileNamesStr="";

OMGUI::OMGUI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::OMGUI)
{
    ui->setupUi(this);
}

OMGUI::~OMGUI()
{
    delete ui;
}

void OMGUI::on_btnSelectFiles_clicked()
{
    promptText = "ONI Files(s) are being selected\n";
    ui->labelPrompt->setText(promptText);
    //Creates the dialog to select different ONI files
    QFileDialog dialog(this);
    fileNames = dialog.getOpenFileNames(this, tr("Select ONI file(s)"), "", tr("ONI Files (*.oni)"));

    //creates a String with the file names and locations for the prompt to show
    QString allFiles = "";
    for (int i = 0; i< fileNames.length(); i++){
        allFiles.append("File selected:" + fileNames.at(i) + " \n");
        fileNamesStr.append(fileNames.at(i) + ",");
    }
    fileNamesStr.remove(fileNamesStr.size());
    fileNamesSize = QString::number(fileNames.size());
    ui->labelPrompt->setText(allFiles);


    fileSelected = true;

}

void OMGUI::on_btnSelectDir_clicked()
{
    promptText = "Output location is being selected\n";
    ui->labelPrompt->setText(promptText);
    //Creates the dialog to select the directory
    QFileDialog dialog;
    dialog.setFileMode(QFileDialog::Directory);
    dialog.setOption(QFileDialog::ShowDirsOnly);
    int result = dialog.exec();

    //If the result is true, the path for the directory is stored and it is shown in the prompt.
    if (result){
        dirName = dialog.selectedFiles()[0];
        promptText += "Output location has been selected\n";
        ui->labelPrompt->setText(promptText);
        dirSelected = true;
    }

}

void OMGUI::on_btnLaunch_clicked()
{
    if (fileSelected == true && dirSelected == true){
        ui->labelPrompt->setText("Launching program!!!");

        QProcess* process;
        process->startDetached("cmd.exe", QStringList() << "/k" << "onimesh" << dirName + "/" << fileNames);

        this->close();
    }

    //Tests if the ONI Files and/or the directory have been selected, and warns the user what they need to do prior to launching the program
    else{
        if (fileSelected == true){
            ui->labelPrompt->setText("Select a directory first");
        } else if (dirSelected == true){
            ui->labelPrompt->setText("Load a .ONI file first");
        } else{
            ui->labelPrompt->setText("Select a directory and load a .ONI file first");
        }

    }
}
