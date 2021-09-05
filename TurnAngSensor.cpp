#include "TurnAngSensor.h"



TurnAngSensor::TurnAngSensor()
    :MySensor()
    mAngleDeg(true)

{

}


void TurnAngSensor::getValue(){

//return mTurnAng;
return mAngleDeg?TurnAng*180/M_PI:TurnAng;

}

TurnAngSensor::update(float value)
{
        TurnAng=value;
       

}


