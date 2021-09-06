#include "judgement.h"
extern MileageSensor            *gMileageSensor;
extern TurnAngSensor            *gTurnAngSensor;
extern ArmAngSensor             *gArmAngSensor;
extern TailAngSensor            *gTailAngSensor;

judgement::judgement()
{
    mMileageSensor = gMileageSensor;
    mTurnAngSensor = gTurnAngSensor;
    mArmAngSensor = gArmAngSensor;
    mTailAngSensor = gTailAngSensor;
}

judgement::~judgement(){

}

bool judgement::judge(){
    return true;
}


