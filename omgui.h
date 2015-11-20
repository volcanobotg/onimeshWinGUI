/*
* Copyright (c) 2015-, Christopher Padgett, David Andrews, Luis Henrique Fae Barboza
*
* You may use, distribute and modify this code under the terms of the BSD license.
*
* You should have received a copy of the full BSD license with this file.
* If not, please visit: https://github.com/volcanobotg/onimesh for full license information.
*/

#ifndef OMGUI_H
#define OMGUI_H

#include <QMainWindow>

namespace Ui {
class OMGUI;
}

class OMGUI : public QMainWindow
{
    Q_OBJECT

public:
    explicit OMGUI(QWidget *parent = 0);
    ~OMGUI();

private slots:
    void on_btnSelectFiles_clicked();

    void on_btnSelectDir_clicked();

    void on_btnLaunch_clicked();

private:
    Ui::OMGUI *ui;
};

#endif // OMGUI_H
