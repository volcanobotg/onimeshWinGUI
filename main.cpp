/*
* Copyright (c) 2015-, Christopher Padgett, David Andrews, Luis Henrique Fae Barboza
*
* You may use, distribute and modify this code under the terms of the BSD license.
*
* You should have received a copy of the full BSD license with this file.
* If not, please visit: https://github.com/volcanobotg/onimeshWinGUI for full license information.
*/

#include "omgui.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    OMGUI w;
    w.show();

    return a.exec();
}
