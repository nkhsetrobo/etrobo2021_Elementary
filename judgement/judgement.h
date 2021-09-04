#ifndef JUDGE_H_
#define JUDGE_H_
#include "MySensor.h"
#include "TurnAngSensor.h"
#include "ArmAngSensor.h"
#include "TailAngSensor.h"
#include "MileageSensor.h"

class judgement {
    public:
    judgement();
    ~judgement();
    virtual bool judge();
    virtual float getValue();

    protected:
   
        MileageCondition    *mMileageCondition;
        TurnAngCondition    *mTurnAngCondition;
        ArmAngCondition     *mArmAngCondition;
        TailAngCondition    *mTailAngCondition;
        
};

#endif