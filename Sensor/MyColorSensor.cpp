
#include "MyColorSensor.h"

MyColorSensor::MyColorSensor(const BrightnessMeter& brightness_meter,const ev3api::ColorSensor& color_sensor)
    :br(brightness_meter),
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
    float temp = this->brightnessCalc();
    br.update(temp);
}