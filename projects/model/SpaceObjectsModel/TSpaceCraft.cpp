#include "TSpaceCraft.h"
#include "math.h"
#include "stdio.h"

TSpaceCraft::TSpaceCraft()
{

}

TVector TSpaceCraft::countRightParts(double dt, TVector X)
{
    TVector vector = X;
    double r = sqrt(X.x*X.x + X.y*X.y + X.z*X.z);
    vector.ax = -(MU_EARTH * X.x)/(r*r*r);
    vector.ay = -(MU_EARTH * X.y)/(r*r*r);
    vector.az = -(MU_EARTH * X.z)/(r*r*r);
    vector.Vx += vector.ax * dt;
    vector.Vy += vector.ay * dt;
    vector.Vz += vector.az * dt;
    vector.x = X.x;
    vector.y = X.y;
    vector.z = X.z;

//    printf("MUUUUUUUU = %lf\n",MU_EARTH);

    return vector;
}
