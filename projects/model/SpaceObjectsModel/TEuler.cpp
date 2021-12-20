#include "TEuler.h"
#include "stdio.h"

TEuler::TEuler(double t0, double tk, double h) : TAbstractIntegrator(t0,tk,h)
{

}

TVector TEuler::OneStep(TVector vector)
{
    TVector vectorDt = RightParts->countRightParts(h,vector);
    TVector vectorRes = vectorDt;

//    printf("%lf\n",vector.x);

    vectorRes.x = vector.x + h * vectorDt.Vx;
    vectorRes.y = vector.y + h * vectorDt.Vy;
    vectorRes.z = vector.z + h * vectorDt.Vz;

//    printf("%lf\n",vectorDt.Vx);
//    printf("%lf\n",vectorRes.Vy);
//    printf("%lf\n\n",vectorRes.Vz);

    return vectorRes;
}
