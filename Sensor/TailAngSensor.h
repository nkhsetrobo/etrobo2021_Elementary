#ifndef TAIL_ANG_SENSOR
#define TAIL_ANG_SENSOR

#include "MySensor.h"

class TailAngSensor : public MySensor{
    public:
        TailAngSensor();
        float update();
        float getValue();
    private:
        float Tail;
};

#endif