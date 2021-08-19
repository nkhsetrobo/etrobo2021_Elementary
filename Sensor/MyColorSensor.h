#ifndef MY_COLOR_SENSOR_H_
#define MY_COLOR_SENSOR_H_

#include "BrightnessMeter.h"
#include "ColorSensor.h"

class MyColorSensor {
    public:
        MyColorSensor(const BrightnesMeter& brightness_meter,const ev3api::ColorSensor& color_sensor);
        ~MyColorSensor();
        float brightnessCalc();
        void update();

    private:
        const BrightnesMeter& br;
        const ev3api::ColorSensor& cr;
};

#endif