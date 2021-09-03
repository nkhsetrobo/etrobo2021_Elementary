#include "judgement.h"
extern MileageCondition    *gMileageCondition;
extern TurnAngCondition    *gTurnAngCondition;


judgement::judgement():
{
    mMileageCondition = gMileageCondition;
    mTurnAngCondition = gTurnAngCondition;

}

judgement::~judgement(){

}

bool judgement::judge(){
    return true;
}

float judgement::getValue(){

    return 0;
}

