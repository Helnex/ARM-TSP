#include "mainwindow.h"
#include "otklik_1_dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //w.resize(800, 500);
    w.show();
    return a.exec();
}
