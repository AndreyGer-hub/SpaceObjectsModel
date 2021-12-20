#include "controller.h"

Controller::Controller()
{
    VecCounter = 0;
}

void Controller :: newVector(TVector* newVec){
    AllVectors[VecCounter++]=newVec;
}
