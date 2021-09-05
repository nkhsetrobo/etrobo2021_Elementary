#ifndef TAIL_ANG_SENSOR
#define TAIL_ANG_SENSOR

#include "MySensor.h"

class TailAngSensor : public MySensor{
    public:
        TailAngSensor();
        void update(float Value);
        float getValue();
    private:
        float Tail;
};

#endif