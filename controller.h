#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <TVector.h>

class Controller
{
public:
    Controller();
TVector* AllVectors[1024];
void newVector(TVector* newVec);
int VecCounter;
};

#endif // CONTROLLER_H
