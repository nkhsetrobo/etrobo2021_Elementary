#ifndef SIMPLE_WALKER_H_
#define SIMPLE_WALKER_H_
#include "Walker.h"
#include "MyColorSensor.h"
//#include "LineTracer.h"


class SimpleWalker : public Walker {
    public:
        SimpleWalker(WheelMotorMgmt *motor,
                BrightnessSensor *brightness,
                //SpeedSensor *speedsensor,
                 ArmTailMotorMgmt   *armtailmotormgmt,
                 XPosition          *xposition,
                 YPosition          *yposition,
                 MileageSensor      *mileagesensor,
                 TurnAngSensor      *turnangsensor, 
                 ArmAngSensor       *armangsensor,
                 TailAngSensor      *tailangsensor);
        ~SimpleWalker();
        void run();
        void init();
        void setParameter(float param[]);

    private:
        int mForward;
        int mTurn;
        MyColorSensor* cs;
        

};

#endif
