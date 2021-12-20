#include "window.h"

window::window(int weight, int hight): QWidget()
{
        this->resize(weight, hight);
        But_plus = new QPushDutton("+",this);
        But_plus->resize(100,100);
        But_plus->move(50,600);
        But_plus->show();

}
