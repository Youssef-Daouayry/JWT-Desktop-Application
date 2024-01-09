#include "mainwindow.h"

#include <QApplication>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QIcon appIcon("../JWT icons/JWT_LOGO-removebg-preview.png");
    a.setWindowIcon(appIcon);
    MainWindow w;
    w.show();
    return a.exec();
}
