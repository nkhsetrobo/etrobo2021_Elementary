#ifndef JUDGEMENT_H_
#define JUDGEMENT_H_
#include "MySensor.h"
#include "TurnAngSensor.h"
//#include "ArmAngSensor.h"
//#include "TailAngSensor.h"
#include "MileageSensor.h"



class judgement {
    public:
    judgement();
    ~judgement();
    virtual bool judge();
    virtual float getValue();

    protected:
   
        MileageSensor            *mMileageSensor;
        TurnAngSensor            *mTurnAngSensor;
        //ArmAngConditions     *mArmAngConditions;
        //TailAngConditions    *mTailAngConditions;
        
};

#endif