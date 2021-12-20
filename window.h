#ifndef WINDOW_H
#define WINDOW_H
#include <QtWidgets>

class window : public QWidget
{
    Q_OBJECT

    public : window(int weight, int hight);
    private : QPushButton* But_plus;



};


#endif // WINDOW_H
