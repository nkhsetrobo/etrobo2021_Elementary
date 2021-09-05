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
    Walker(WheelMotorMgmt *motor,
            BrightnessSensor *brightness,
            //SpeedSensor *speedsensor,
            TurnAngSensor *turnangsensor,
            XPosition *xposition,
            YPosition *yposition,
            MileageSensor *mileagesensor);
            //ArmAngSensor  *armangsensor,
            //ArmTailMotorMgmt *ArmTailMotorMgmt,
            //TailAngSensor *tailangsensor);                    
    ~Walker();
    virtual void run();
    virtual void init(float param[] );


    protected:
    WheelMotorMgmt *mWheelMotorMgmt;
    BrightnessSensor *mBrightnessSensor;
    SpeedSensor     *mSpeedSensor;
    TurnAngSensor   *mTurnAngSensor;
    XPosition       *mXPosition;
    YPosition       *mYPosition;
    MileageSensor   *mMileageSensor;
    //ScenarioCurveLineTracer  *mScenarioCurveLineTracer;
    PID             *mPID;
   // ArmTailMotorMgmt   *mArmTailMotorMgmt;
    //ArmAngSensor        *mArmAngSensor;
    //TailAngSensor      *mTailAngSensor;

    
    private:
    
};

#endif