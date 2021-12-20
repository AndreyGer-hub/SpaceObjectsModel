#include <iostream>
#include "TEuler.h"
#include "TSpaceCraft.h"
#include "TVector.h"
using namespace std;

int main()
{
    TVector vector;
    TVector vector1;
    vector.x = 0;
    vector.y = 0;
    vector.z = 7150000;

    vector.Vx = 5303;
    vector.Vy = 5303;
    vector.Vz = 0;

    vector.ax = 0;
    vector.ay = 0;
    vector.az = 0;


    TDynamicModel* dynModel = new TSpaceCraft();

    TEuler euler(0,1000000,1);
    euler.SetRightParts(dynModel);

    FILE* xfile = fopen("x.txt","w");
    FILE* yfile = fopen("y.txt","w");
    FILE* zfile = fopen("z.txt","w");

    FILE* Vxfile = fopen("Vx.txt","w");
    FILE* Vyfile = fopen("Vy.txt","w");
    FILE* Vzfile = fopen("Vz.txt","w");

    FILE* axfile = fopen("ax.txt","w");
    FILE* ayfile = fopen("ay.txt","w");
    FILE* azfile = fopen("az.txt","w");


    for(int i=0;i<60000;i++){
        vector1 = euler.OneStep(vector);

//        vector1 = dynModel->countRightParts(1,vector);
        vector = vector1;

        fprintf(xfile,"%lf\n",vector.x);
        fprintf(yfile,"%lf\n",vector.y);
        fprintf(zfile,"%lf\n",vector.z);

        fprintf(Vxfile,"%lf\n",vector.Vx);
        fprintf(Vyfile,"%lf\n",vector.Vy);
        fprintf(Vzfile,"%lf\n",vector.Vz);

        fprintf(axfile,"%lf\n",vector.ax);
        fprintf(ayfile,"%lf\n",vector.ay);
        fprintf(azfile,"%lf\n",vector.az);
    }

    fclose(xfile);
    fclose(yfile);
    fclose(zfile);

    fclose(Vxfile);
    fclose(Vyfile);
    fclose(Vzfile);

    fclose(axfile);
    fclose(ayfile);
    fclose(azfile);



    return 0;
}
