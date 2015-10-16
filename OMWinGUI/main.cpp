#include "omgui.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    OMGUI w;
    w.show();

    return a.exec();
}
