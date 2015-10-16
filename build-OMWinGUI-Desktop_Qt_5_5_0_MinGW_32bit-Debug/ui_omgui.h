/********************************************************************************
** Form generated from reading UI file 'omgui.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OMGUI_H
#define UI_OMGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OMGUI
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *btnSelectFiles;
    QPushButton *btnSelectDir;
    QPushButton *btnLaunch;
    QLabel *labelPrompt;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *OMGUI)
    {
        if (OMGUI->objectName().isEmpty())
            OMGUI->setObjectName(QStringLiteral("OMGUI"));
        OMGUI->resize(794, 350);
        centralWidget = new QWidget(OMGUI);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 20, 221, 241));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btnSelectFiles = new QPushButton(verticalLayoutWidget);
        btnSelectFiles->setObjectName(QStringLiteral("btnSelectFiles"));

        verticalLayout->addWidget(btnSelectFiles);

        btnSelectDir = new QPushButton(verticalLayoutWidget);
        btnSelectDir->setObjectName(QStringLiteral("btnSelectDir"));

        verticalLayout->addWidget(btnSelectDir);

        btnLaunch = new QPushButton(verticalLayoutWidget);
        btnLaunch->setObjectName(QStringLiteral("btnLaunch"));

        verticalLayout->addWidget(btnLaunch);

        labelPrompt = new QLabel(centralWidget);
        labelPrompt->setObjectName(QStringLiteral("labelPrompt"));
        labelPrompt->setGeometry(QRect(250, 30, 521, 231));
        labelPrompt->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelPrompt->setMargin(10);
        OMGUI->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(OMGUI);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 794, 31));
        OMGUI->setMenuBar(menuBar);
        mainToolBar = new QToolBar(OMGUI);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        OMGUI->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(OMGUI);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        OMGUI->setStatusBar(statusBar);

        retranslateUi(OMGUI);

        QMetaObject::connectSlotsByName(OMGUI);
    } // setupUi

    void retranslateUi(QMainWindow *OMGUI)
    {
        OMGUI->setWindowTitle(QApplication::translate("OMGUI", "OniMesh Launcher", 0));
        btnSelectFiles->setText(QApplication::translate("OMGUI", "Select ONI Files", 0));
        btnSelectDir->setText(QApplication::translate("OMGUI", "Select Output Directory", 0));
        btnLaunch->setText(QApplication::translate("OMGUI", "Launch OniMesh", 0));
        labelPrompt->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OMGUI: public Ui_OMGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OMGUI_H
