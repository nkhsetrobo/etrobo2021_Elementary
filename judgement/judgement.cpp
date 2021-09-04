#include "judgement.h"
extern MileageCondition    *gMileageCondition;
extern TurnAngCondition    *gTurnAngCondition;
extern ArmAngCondition     *gArmAngCondition;
extern TailAngCondition    *gTailAngCondition;

judgement::judgement():
{
    mMileageCondition = gMileageCondition;
    mTurnAngCondition = gTurnAngCondition;
    mArmAngCondition  = gArmAngCondition;
    mTailAngCondition = gTailAngCondition;
}

judgement::~judgement(){

}

bool judgement::judge(){
    return true;
}

float judgement::getValue(){

    return 0;
}

