#ifndef TEULER_H
#define TEULER_H
#include "TAbstractIntegrator.h"

class TEuler : public TAbstractIntegrator
{
public:
    TEuler(double t0, double tk, double h);
    TVector OneStep(TVector vector);
};

#endif // TEULER_H
