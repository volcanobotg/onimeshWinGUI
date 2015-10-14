#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <iostream>
#include <stdlib.h>
#include <QThread>
#include <QtGui>
#include <QProcess>

using namespace std;

bool fileSelected, dirSelected;
QString dirName, fileName;
QStringList fileNames;
QString fileNamesSize, fileNamesStr="";

class Sleeper : public QThread
{
public:
    static void msleep(unsigned long msecs){QThread::msleep(msecs);}
};

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_3_clicked()
{
    fileSelected = true;
    //fileName = QFileDialog::getOpenFileName(this, tr("Select ONI file(s)"), "", tr("ONI Files (*.oni)"));
    //ui->label->setText("File loaded: " + fileName);

    QFileDialog dialog(this);
    fileNames = dialog.getOpenFileNames(this, tr("Select ONI file(s)"), "", tr("ONI Files (*.oni)"));
    QString allFiles = "";
    for (int i = 0; i< fileNames.length(); i++){
        allFiles.append("File selected:" + fileNames.at(i) + " \n");
        fileNamesStr.append(fileNames.at(i) + ",");
    }
    fileNamesStr.remove(fileNamesStr.size());
    fileNamesSize = QString::number(fileNames.size());
    ui->label->setText(allFiles);

}

void MainWindow::on_pushButton_2_clicked()
{
    QFileDialog dialog;
    dialog.setFileMode(QFileDialog::Directory);
    dialog.setOption(QFileDialog::ShowDirsOnly);
    int result = dialog.exec();



    if (result){
        dirName = dialog.selectedFiles()[0];
        ui->label->setText("Directory selected: " + dirName);
        dirSelected = true;
    }


}

void MainWindow::on_pushButton_4_clicked()
{
    if (fileSelected == true && dirSelected == true){
        ui->label->setText("Launching program!!!");

        QProcess process;
        process.startDetached("cmd.exe", QStringList() << "/k" << "echo Directory name: "<< dirName << "Files: " << fileNamesSize << "Names: " << fileNamesStr << "\"");

        this->close();
    }
    else{
        if (fileSelected == true){
            ui->label->setText("Select a directory first");
        } else if (dirSelected == true){
            ui->label->setText("Load a .ONI file first");
        } else{
            ui->label->setText("Select a directory and load a .ONI file first");
        }

    }
}
