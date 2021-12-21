#ifndef CONTROLLER_H
#define CONTROLLER_H

#include<modules/TAbstractIntegrator.h>
#include<modules/TDynamicModel.h>
#include<modules/TSpaceCraft.h>
#include<modules/TVector.h>
#include<modules/TEuler.h>
#include<modules/TRungeKutta.h>


class Controller
{
public:
    Controller(double t0,double tk,double h);
    TVector* AllVectors[1024];
    void newVector(TVector* newVec);
    int VecCounter;

    TEuler* euler;


};

#endif // CONTROLLER_H
