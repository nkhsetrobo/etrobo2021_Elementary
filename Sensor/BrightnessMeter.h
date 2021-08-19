#ifndef BRIGHTNESS_METER_H_
#define BRIGHTNESS_METER_H_

#include "Sensor.h"


class BrightnessMeter : public Sensor
{
    public:
        BrightnessMeter();
        ~BrightnessMeter();
        float getValue();
        void update(float val);
    
    private:
        float brightness;
};

#endif