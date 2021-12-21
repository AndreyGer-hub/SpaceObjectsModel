#ifndef CREATESATELITEWINDOW_H
#define CREATESATELITEWINDOW_H
#include <QtWidgets>
#include <modules/TVector.h>

class CreateSateliteWindow : public QWidget
{
    Q_OBJECT

    public: CreateSateliteWindow(TVector* vec);
    TVector* satelite;
    private: void OKPushBtn();
    private:
    QLabel* labelx ;
    QLabel* labely ;
    QLabel* labelz ;
    QLabel* labelVx;
    QLabel* labelVy;
    QLabel* labelVz;

    QLineEdit* linelx ;
    QLineEdit* linely ;
    QLineEdit* linelz ;
    QLineEdit* lineVx ;
    QLineEdit* lineVy ;
    QLineEdit* lineVz ;

};

#endif // CREATESATELITEWINDOW_H
