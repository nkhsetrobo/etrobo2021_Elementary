#ifndef TAIL_ANG_SENSOR
#define TAIL_ANG_SENSOR

#include "MySensor.h"

class TailAngSensor : public MySensor{
    public:
        TailAngSensor();
        ~TailAngSensor();
    private:
        float Angle;
};

#endif