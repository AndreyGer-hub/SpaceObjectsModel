#ifndef WINDOW_H
#define WINDOW_H
#include <QtWidgets>
#include <createsatelitewindow.h>

class window : public QWidget
{
    Q_OBJECT

    public : window(int weight, int hight);
    private : void ButtonAddSatelite();
    private : QPushButton* But_plus;
    private : QPushButton* But_play;



};


#endif // WINDOW_H
