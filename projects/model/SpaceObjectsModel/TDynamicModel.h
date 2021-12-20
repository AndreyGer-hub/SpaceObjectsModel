#ifndef TDYNAMICMODEL_H
#define TDYNAMICMODEL_H
#include "TVector.h"

class TDynamicModel
{
public:
    TDynamicModel();
    virtual TVector countRightParts(double dt, TVector X) = 0;
};

#endif // TDYNAMICMODEL_H
