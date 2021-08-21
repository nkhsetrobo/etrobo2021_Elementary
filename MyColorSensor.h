#ifndef MY_COLOR_SENSOR_H_
#define MY_COLOR_SENSOR_H_

#include "BrightnessSensor.h"
#include "ColorSensor.h"

class MyColorSensor {
    public:
        MyColorSensor(BrightnessSensor* brightness_sensor,const ev3api::ColorSensor& color_sensor);
        ~MyColorSensor();
        float brightnessCalc();
        void update();

    private:
        BrightnessSensor *br;
        const ev3api::ColorSensor cr;
};

#endif