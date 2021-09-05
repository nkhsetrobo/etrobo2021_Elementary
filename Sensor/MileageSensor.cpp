#include "MileageSensor.h"
#include "ev3api.h"

MileageSensor::MileageSensor()
    : MySensor()
{

}


float MileageSensor::getValue(){

       // printf("Mileage%f f\n",Mileage);
        return Mileage;
 
}
void MileageSensor::update(float value)
{
    Mileage=value;
}


