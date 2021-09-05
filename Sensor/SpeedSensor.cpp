#include "SpeedSensor.h"

SpeedSensor::SpeedSensor()
    :MySensor()
     meas_time(0)
{

}
float SpeedSensor::getValue(){


}


void SpeedSensor::update(float value){

            
    this->value = value;
    this->meas_time = meas_time + 10;
}



