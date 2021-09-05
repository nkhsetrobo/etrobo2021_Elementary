#ifndef ARM_ANG_SENSOR
#define ARM_ANG_SENSOR

#include "MySensor.h"

class ArmAngSensor : public MySensor{
    public:
        ArmAngSensor();

        float getValue();
        void  update(float Value)
    
    private:
        float Armang;


};

#endif