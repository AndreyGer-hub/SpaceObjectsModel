#ifndef TEULER_H
#define TEULER_H
#include "TAbstractIntegrator.h"

class TEuler : public TAbstractIntegrator
{
public:
    TEuler();
    void OneStep(TVector vector);
};

#endif // TEULER_H
