
#include "MyColorSensor.h"

MyColorSensor::MyColorSensor(BrightnessSensor* brightness_sensor,const ev3api::ColorSensor& color_sensor)
    :br(brightness_sensor),

     cr(color_sensor)
    {
}

MyColorSensor::~MyColorSensor() {

}

float MyColorSensor::brightnessCalc() {
    rgb_raw_t rgb_val;
    cr.getRawColor(rgb_val);
    return rgb_val.r*0.298912+rgb_val.g*0.586611+rgb_val.b*0.114478;
}

void MyColorSensor::update() {
    float temp = brightnessCalc();
        float maxV=100;       
        temp=temp/maxV;
    br->update(temp);
}