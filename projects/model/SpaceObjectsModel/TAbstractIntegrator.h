#ifndef TABSTRACTINTEGRATOR_H
#define TABSTRACTINTEGRATOR_H
#include "TDynamicModel.h"
#include "TVector.h"


class TAbstractIntegrator
{
public:
    double t0;
    double tk;
    double h;
    double tcur;
    TAbstractIntegrator(double t0, double tk, double h);
    void SetRightParts(TDynamicModel* dmodel);
    TVector MoveTo(double point, TVector vector);
    virtual TVector OneStep(TVector vector) = 0;
    TDynamicModel* RightParts;
};

#endif // TABSTRACTINTEGRATOR_H
