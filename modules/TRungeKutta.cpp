#include "TRungeKutta.h"

TRungeKutta::TRungeKutta(double t0, double tk, double h) : TAbstractIntegrator(t0,tk,h)
{

}

TVector TRungeKutta::OneStep(TVector vector)
{
    return vector;
}
