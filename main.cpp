#include "window.h"
//#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    window mainwindow(1200,800);
    mainwindow.show();
    return a.exec();
}
