#include "createsatelitewindow.h"

CreateSateliteWindow::CreateSateliteWindow() : QWidget()
{
       resize(500,600);
       QLabel* labelx = new QLabel("X0 = ",this);labelx->move(20,10);
       QLabel* labely = new QLabel("Y0 = ",this);labely->move(20,110);
       QLabel* labelz = new QLabel("Z0 = ",this);labelz->move(20,210);

       QLabel* labelVx = new QLabel("Vx0 = ",this);labelVx->move(20,310);
       QLabel* labelVy = new QLabel("Vy0 = ",this);labelVy->move(20,410);
       QLabel* labelVz = new QLabel("Vz0 = ",this);labelVz->move(20,510);

       labelx->show();
       labely->show();
       labelz->show();
       labelVx->show();
       labelVy->show();
       labelVz->show();

       QLineEdit* linelx = new QLineEdit(this);linelx ->move(70,10);
       QLineEdit* linely = new QLineEdit(this);linely ->move(70,110);
       QLineEdit* linelz = new QLineEdit(this);linelz ->move(70,210);
       QLineEdit* lineVx = new QLineEdit(this);lineVx ->move(70,310);
       QLineEdit* lineVy = new QLineEdit(this);lineVy ->move(70,410);
       QLineEdit* lineVz = new QLineEdit(this);lineVz ->move(70,510);

       linelx->resize(400,20);
       linely->resize(400,20);
       linelz->resize(400,20);
       lineVx->resize(400,20);
       lineVy->resize(400,20);
       lineVz->resize(400,20);

       linelx->show();
       linely->show();
       linelz->show();
       lineVx->show();
       lineVy->show();
       lineVz->show();

       QPushButton* OKBtn = new QPushButton("CREATE",this);
       OKBtn->move(200,550);
       OKBtn->show();
       connect(OKBtn,&QPushButton :: clicked, this, &CreateSateliteWindow :: OKPushBtn);
       connect(OKBtn,&QPushButton :: clicked, this, &CreateSateliteWindow :: close);

}

void CreateSateliteWindow :: OKPushBtn(){

}
