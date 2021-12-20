#include "window.h"


window::window(int weight, int hight): QWidget()
{

        resize(weight, hight);
        setWindowTitle("SUPER PROGRAM GOLOVESHKIN GERASIMOV MAKSIMOV VINOKUROV KASHAPOV SATELITE MODEL");
        But_plus = new QPushButton("+",this);
        But_plus->resize(100,100);
        But_plus->move(100,650);
        But_plus->show();

        connect(But_plus,&QPushButton :: clicked, this, &window :: ButtonAddSatelite);

        But_play = new QPushButton("Play",this);
        But_play->resize(100,100);
        But_play->move(250,650);
        But_play->show();

}

void window::ButtonAddSatelite(){
    CreateSateliteWindow* helpwindow = new CreateSateliteWindow();
    helpwindow->resize(500,600);
    helpwindow->show();
    helpwindow->setWindowTitle("Add Satelite");
}
