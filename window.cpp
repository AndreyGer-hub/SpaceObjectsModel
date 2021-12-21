#include "window.h"

window::window(int weight, int hight): QWidget()
{

    VecCounter = 0;
    QLabel* labelx = new QLabel("t0 = ",this);labelx->move(20,10);
    QLabel* labely = new QLabel("tk = ",this);labely->move(20,110);
    QLabel* labelz = new QLabel("h(step) = ",this);labelz->move(20,210);

    labelx->show();
    labely->show();
    labelz->show();

    linelx = new QLineEdit(this);linelx ->move(70,10);
    linely = new QLineEdit(this);linely ->move(70,110);
    linelz = new QLineEdit(this);linelz ->move(70,210);


    linelx->resize(400,20);
    linely->resize(400,20);
    linelz->resize(400,20);





        cntrl = new Controller(t0,tk,h);
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

        connect(But_play,&QPushButton :: clicked, this, &window :: ButtonPlay);

}

void window::ButtonAddSatelite(){
    TVector* vec = new TVector;
    cntrl->newVector(vec);
    CreateSateliteWindow* helpwindow = new CreateSateliteWindow(vec);
    helpwindow->resize(500,600);
    helpwindow->show();
    helpwindow->setWindowTitle("Add Satelite");
    newVector(vec);

    //cout<<"hui = "<<cntrl->VecCounter;

}

void window :: ButtonPlay(){

    QString buf;
    buf = linelx -> text();
    t0 = (double)buf.toFloat();
    buf = linely -> text();
    tk = (double)buf.toFloat();
    buf = linelz -> text();
    h = (double)buf.toFloat();

    TDynamicModel* dynMod = new TSpaceCraft();
    TEuler* euler = new TEuler(t0,tk,h);
    euler->SetRightParts(dynMod);

    FILE *x, *y, *z, *Vx, *Vy, *Vz, *ax, *ay, *az;
    char str[1024];

    for(int i =0 ; i<VecCounter;i++ ){
        sprintf(str,"/home/maximov/SpaceObjectsModel/data/%d_x.txt",i);
        x = fopen(str,"w");
        sprintf(str,"/home/maximov/SpaceObjectsModel/data/%d_y.txt",i);
        y = fopen(str,"w");
        sprintf(str,"/home/maximov/SpaceObjectsModel/data/%d_z.txt",i);
        z = fopen(str,"w");
        sprintf(str,"/home/maximov/SpaceObjectsModel/data/%d_Vx.txt",i);
        Vx = fopen(str,"w");
        sprintf(str,"/home/maximov/SpaceObjectsModel/data/%d_Vy.txt",i);
        Vy = fopen(str,"w");
        sprintf(str,"/home/maximov/SpaceObjectsModel/data/%d_Vz.txt",i);
        Vz = fopen(str,"w");
        sprintf(str,"/home/maximov/SpaceObjectsModel/data/%d_ax.txt",i);
        ax = fopen(str,"w");
        sprintf(str,"/home/maximov/SpaceObjectsModel/data/%d_ay.txt",i);
        ay = fopen(str,"w");
        sprintf(str,"/home/maximov/SpaceObjectsModel/data/%d_az.txt",i);
        az = fopen(str,"w");

        for(double j=t0;j<tk;j+=h){
            TVector* buf = new TVector;
            *buf = euler->OneStep(*(AllVectors[i]));
            fprintf(x,"%lf\n",buf->x);
            fprintf(y,"%lf\n",buf->y);
            fprintf(z,"%lf\n",buf->z);
            fprintf(Vx,"%lf\n",buf->Vx);
            fprintf(Vy,"%lf\n",buf->Vy);
            fprintf(Vz,"%lf\n",buf->Vz);
            fprintf(ax,"%lf\n",buf->ax);
            fprintf(ay,"%lf\n",buf->ay);
            fprintf(az,"%lf\n",buf->az);

            AllVectors[i] = buf;
        }
        fclose(x);
        fclose(y);
        fclose(z);
        fclose(Vx);
        fclose(Vy);
        fclose(Vz);
        fclose(ax);
        fclose(ay);
        fclose(az);
    }



}



void window :: newVector(TVector* newVec){
    AllVectors[VecCounter++]=newVec;
}
