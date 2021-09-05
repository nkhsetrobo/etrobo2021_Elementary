#include "MySonarSensor.h"

MySonarSensor::MySonarSensor(ev3api::SonarSensor& sonarsensor)
    :ss(sonarsensor)
    {

}

float MySonarSensor::getValue() 

{


}

void MySonarSensor::update(){
    this->value = ss.getDistance();
}