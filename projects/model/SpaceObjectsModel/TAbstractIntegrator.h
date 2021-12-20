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
    TAbstractIntegrator();
    void SetRightParts(TDynamicModel dmodel);
    void MoveTo(double point);
    virtual void OneStep(TVector vector) = 0;
private:
    TDynamicModel RightParts;
};

#endif // TABSTRACTINTEGRATOR_H
