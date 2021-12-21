#ifndef TRUNGEKUTTA_H
#define TRUNGEKUTTA_H
#include "TAbstractIntegrator.h"

class TRungeKutta : public TAbstractIntegrator
{
public:
    TRungeKutta(double t0, double tk, double h);
    TVector OneStep(TVector vector);
};

#endif // TRUNGEKUTTA_H
