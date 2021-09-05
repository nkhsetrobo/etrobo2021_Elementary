#include "ArmAngSensor.h"

ArmAngSensor::ArmAngSensor(){

}

float ArmAngSensor::getValue(){

    return Armang;

}

void ArmAngSensor::update(float Value){

        Armang=Value;
}