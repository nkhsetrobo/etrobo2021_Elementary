#ifndef BRIGHTNESS_METER_H_
#define BRIGHTNESS_METER_H_

#include "ColorSensor.h"

class BrightnesMeter : public Meter{
    public:
        BrightnesMeter(const ev3api::ColorSensor& color_sensor);
        ~BrightnesMeter();
        float getValue();
        void update();
    
    private:
        float brightness;
        const ev3api::ColorSensor& cr;
}

#endif