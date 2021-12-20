#ifndef TRUNGEKUTTA_H
#define TRUNGEKUTTA_H
#include "TAbstractIntegrator.h"

class TRungeKutta : public TAbstractIntegrator
{
public:
    TRungeKutta();
    void OneStep(TVector vector);
};

#endif // TRUNGEKUTTA_H
