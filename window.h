#ifndef WINDOW_H
#define WINDOW_H
#include <QtWidgets>
#include <createsatelitewindow.h>
#include <controller.h>

class window : public QWidget
{
    Q_OBJECT

    public : window(int weight, int hight);
    private : void ButtonAddSatelite();
    private : void ButtonPlay();
    private : QPushButton* But_plus;
    private : QPushButton* But_play;
    public : Controller* cntrl;

};


#endif // WINDOW_H
