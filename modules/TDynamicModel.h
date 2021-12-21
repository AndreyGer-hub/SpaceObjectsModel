#ifndef TDYNAMICMODEL_H
#define TDYNAMICMODEL_H
#include "TVector.h"
#define MU_EARTH (3.98603 * 100000000000000)

class TDynamicModel
{
public:
    TDynamicModel();
    virtual TVector countRightParts(double dt, TVector X) = 0;
};

#endif // TDYNAMICMODEL_H
