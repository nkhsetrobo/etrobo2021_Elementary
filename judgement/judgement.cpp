#include "judgement.h"
extern MileageSensor            *gMileageSensor;
extern TurnAngSensor            *gTurnAngSensor;
//extern ArmAngConditions     *gArmAngCondition;
//extern TailAngConditions    *gTailAngCondition;

judgement::judgement():
{
    mMileageSensor = gMileageSensor;
    mTurnAngSensor = gTurnAngSensor;
    //mArmAngConditions  = gArmAngConditions;
    //mTailAngConditions = gTailAngConditions;
}

judgement::~judgement(){

}

bool judgement::judge(){
    return true;
}

float judgement::getValue(){

    return 0;
}

