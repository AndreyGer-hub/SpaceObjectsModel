#include "window.h"

window::window(int weight, int hight): QWidget()
{
        this->resize(weight, hight);
        But_plus = new QPushButton("+",this);
        But_plus->resize(100,100);
        But_plus->move(100,650);
        But_plus->show();

        But_play = new QPushButton("Play",this);
        But_play->resize(100,100);
        But_play->move(250,650);
        But_play->show();

}
