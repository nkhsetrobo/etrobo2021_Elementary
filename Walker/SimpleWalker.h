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
                    TurnAngSensor *turnagsensor,
                    XPosition *xposition,
                    YPosition *yposition,
                    MileageSensor *mileagesensor);
        ~SimpleWalker();
        void run();
        void init();
        void setParameter(int forward,int turn);

    private:
        int mForward;
        int mTurn;
        MyColorSensor* cs;
        

};

#endif
