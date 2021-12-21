#include "TAbstractIntegrator.h"
#include "math.h"

TAbstractIntegrator::TAbstractIntegrator(double t0, double tk, double h)
{
    this->t0 = t0;
    this->tk = tk;
    this->h = h;
    tcur = t0;
}

void TAbstractIntegrator::SetRightParts(TDynamicModel *dmodel)
{
    RightParts = dmodel;
}

TVector TAbstractIntegrator::MoveTo(double point, TVector vector)
{
    TVector vectorTmp = vector;
    TVector vectorRes;
    int numSteps = ceil((point-tcur)*h);

    if(numSteps<=0){
        return vector;
    }

    for(int i=0;i<numSteps;i++){
        vectorRes = OneStep(vectorTmp);
        vectorTmp = vectorRes;
        tcur+=h;
    }

    return vectorRes;

}
