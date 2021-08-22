#include "AngVelSensor.h"

AngVelSensor::AngVelSensor(const ev3api::GyroSensor& gyro_sensor)
    :gs(gyro_sensor),
     ang_vel(0.0)
    {
}

AngVelSensor::~AngVelSensor(){

}

float AngVelSensor::getValue(){
    return ang_vel;
}

void AngVelSensor::update() {
    ang_vel = gs.getAnglerVelocity();
}

void AngVelSensor::reset() {
    gs.reset();
}

