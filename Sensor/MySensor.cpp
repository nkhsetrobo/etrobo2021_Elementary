#include "MySensor.h"

MySensor::MySensor()

{

}

float MySensor::getValue(){
    return value;
}


void MySensor::update(float value){
    this->value = value;
}