#ifndef TSPACECRAFT_H
#define TSPACECRAFT_H
#include "TDynamicModel.h"

class TSpaceCraft : public TDynamicModel
{
public:
    TSpaceCraft();
    TVector countRightParts(double dt, TVector X);
};

#endif // TSPACECRAFT_H
