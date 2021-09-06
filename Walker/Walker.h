#ifndef _WALKER_H
#define _WALKER_H
#include "WheelMotorMgmt.h"
#include "BrightnessSensor.h"
#include "PID.h"
#include "SpeedSensor.h"
#include "TurnAngSensor.h"
#include "XPosition.h"
#include "YPosition.h"
#include "MileageSensor.h"
#include "ArmAngSensor.h"
#include "ArmTailMotorMgmt.h"
#include "TailAngSensor.h"
//#include "ScenarioCurveLineTracer.h"
//#include "ev3api.h"

class Walker{
    public:
    Walker(WheelMotorMgmt *gWheelMotorMgmt,
         BrightnessSensor *gBrightnessSensor,
         ArmTailMotorMgmt *gArmTailMotorMgmt,
         XPosition       *gXPosition,
          YPosition       *gYPosition,
        //SpeedSensor     *gSpeedSensor;
        MileageSensor   *gMileageSensor,
          TurnAngSensor   *gTurnAngSensor,
        ArmAngSensor   *gArmAngSensor,
        TailAngSensor  *gTailAngSensor);


     ~Walker();
        virtual void run();
         virtual void init(float param[] );


    protected:
    WheelMotorMgmt *mWheelMotorMgmt;
    BrightnessSensor *mBrightnessSensor;
    //SpeedSensor     *mSpeedSensor;
    TurnAngSensor   *mTurnAngSensor;
    ArmTailMotorMgmt   *mArmTailMotorMgmt;
    XPosition       *mXPosition;
    YPosition       *mYPosition;
    MileageSensor   *mMileageSensor;
    //ScenarioCurveLineTracer  *mScenarioCurveLineTracer;
    ArmAngSensor        *mArmAngSensor;
    TailAngSensor      *mTailAngSensor;
    PID             *mPID;
    
    
    private:
    
};

#endif