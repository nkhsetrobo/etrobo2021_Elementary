#include "TailAngSensor.h"

TailAngSensor::TailAngSensor()
     angle(0.0)
     {
}

TailAngSensor::~TailAngSensor(){

}

float TailAngSensor::getValue(){
    return angle;
}

void TailAngSensor::update(float value){
    angle = value;
}