#ifndef EV3_APP_LINETRACER_H
#define EV3_APP_LINETRACER_H
#include "SimpleWalker.h"


class LineTracer : public SimpleWalker{
    public:
        LineTracer(WheelMotorMgmt *motor,
                BrightnessSensor *brightness,
                //SpeedSensor *speedsensor,
                 ArmTailMotorMgmt   *armtailmotormgmt,
                 XPosition          *xposition,
                 YPosition          *yposition,
                 MileageSensor      *mileagesensor,
                 TurnAngSensor      *turnangsensor, 
                 ArmAngSensor       *armangsensor,
                 TailAngSensor      *tailangsensor);
        void run();
        void init(float param[]);
        float calcTurn(float val1);
    private:
        float kp;
        float ki;
        float kd;
        float mSpeed;
        float edge;
        float forward;
        float mTurn;
        float mTarget;
};

#endif