#include "TailAngSensor.h"

TailAngSensor::TailAngSensor()
{

}

float TailAngSensor::getValue()
{

    return Tail;
}

void TailAngSensor::update(float Value)

{

      Tail=Value;
}