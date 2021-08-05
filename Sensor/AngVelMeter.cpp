#include "AngVelMeter.h"
#include "GyroSensor.h"

AngVelMeter::AngVelMeter(const ev3api::GyroSensor& gyro_sensor)
    :gr(gyro_sensor),
     ang_vel((float)gr->getAnglerVelocity)
    {
}

AngVelMeter::~AngVelMeter() {

}

float getValue() {
    return gr;
}

void update() {
    ang_vel = (float)gr->getAnglerVelocity();
}

void reset() {
    gr->reset();
}