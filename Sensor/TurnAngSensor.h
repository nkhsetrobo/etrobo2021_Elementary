#ifndef TURN_ANG_SENSOR_H_
#define TURN_ANG_SENSOR_H_
#include "MySensor.h"

#define M_PI 3.1415

class TurnAngSensor : public MySensor{
    public:
    TurnAngSensor();
   // ~TurnAngSensor();
    //void init();
    float getValue();
    void  update(float value);
   
    private:
        float TurnAng;
        
        
        //bool   mAngleDeg

};

#endif