#ifndef COL_SENSOR_H_
#define COL_SENSOR_H_

#include "BrightnessMeter.h"

class ColSensor {
    public:
        ColSensor(const BrightnesMeter& brightness_meter);
        ~ColSensor();
        float brightnessCalc();
        void update();

    private:
        const BrightnesMeter& br;
};

#endif