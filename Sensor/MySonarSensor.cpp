#include "MySonarSensor.h"

MySonarSensor::MySonarSensor(ev3api::SonarSensor& sonarsensor)
    :ss(sonarsensor)
    {

}

MySonarSensor::~MySonarSensor(){

}

void MySonarSensor::update(){
    this->value = ss.getDistance();
}