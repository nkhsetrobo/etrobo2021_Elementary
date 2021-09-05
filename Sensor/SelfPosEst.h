#ifndef SELF_POS_EST_H_
#define SELF_POS_EST_H_
#include "WheelMotorMgmt.h"
#include "MileageSensor.h"
#include "SpeedSensor.h"
#include "TurnAngSensor.h"
#include "XPosition.h"
#include "YPosition.h"


class SelfPosEst{
    
    public:
        SelfPosEst(MileageSensor *mileagesensor, 
                    XPosition    *xposition,
                    YPosition    *yposition,
                    TurnAngSensor *turnagsensor,
                    WheelMotorMgmt  *wheelmotorMgmt);

        ~SelfPosEst();
        void SelfPosCalc(float current_rs1,float current_rs2);
        void update();
    private:
        float prev_rs1;
        float prev_rs2;
        float x;
        float y;
        float th;
        float sumlen;
        float len;
        

        MileageSensor *mMileageSensor;
        SpeedSensor *mSpeedSensor;
        TurnAngSensor *mTurnAngSensor;
        XPosition  *mXPosition;
        YPosition  *mYPosition;
        WheelMotorMgmt *mWheelMotorMgmt;
        /*float current_rs1;
        float current_rs2;
        float M_PI;
        float D_LEFT;
        float D_RIGHT;
        float TREAD;
        float cos;
        float sin;
        */
};

#endif