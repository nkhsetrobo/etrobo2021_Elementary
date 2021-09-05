#ifndef ARM_ANG_SENSOR
#define ARM_ANG_SENSOR

#include "MySensor.h"

class ArmAngSensor : public MySensor{
    public:
        ArmAngSensor();
        ~ArmAngSensor();
    private:
        float Angle;
};

#endif