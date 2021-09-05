#include "AngVelSensor.h"

AngVelSensor::AngVelSensor(ev3api::GyroSensor& gyrosensor)
    :gs(gyrosensor)
    {

}

//AngVelSensor::~AngVelSensor(){

//}

float AngVelSensor::getValue()
{
    return gs.getAnglerVelocity();
}

void AngVelSensor::update(){
    this->value = gs.getAnglerVelocity();
}



