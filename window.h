#ifndef WINDOW_H
#define WINDOW_H
#include <QtWidgets>
#include <createsatelitewindow.h>
#include <controller.h>

#include<modules/TAbstractIntegrator.h>
#include<modules/TDynamicModel.h>
#include<modules/TSpaceCraft.h>
#include<modules/TVector.h>
#include<modules/TEuler.h>
#include<modules/TRungeKutta.h>

class window : public QWidget
{
    Q_OBJECT

    public : window(int weight, int hight);
    private : void ButtonAddSatelite();
    private : void ButtonPlay();
    private : QPushButton* But_plus;
    private : QPushButton* But_play;
    public : Controller* cntrl;
    \
    QLineEdit* linelx;
    QLineEdit* linely;
    QLineEdit* linelz;

    double t0;
    double tk;
    double h;

    TVector* AllVectors[1024];
    TVector* AllVectorsRes[1024];
    void newVector(TVector* newVec);
    int VecCounter;

};


#endif // WINDOW_H
