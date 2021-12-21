#include "controller.h"
#include <iostream>
using namespace std;

Controller::Controller(double t0,double tk,double h)
{
    VecCounter = 0;
    cout << t0;


}

void Controller :: newVector(TVector* newVec){
    AllVectors[VecCounter++]=newVec;
}
