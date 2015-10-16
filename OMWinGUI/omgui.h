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
