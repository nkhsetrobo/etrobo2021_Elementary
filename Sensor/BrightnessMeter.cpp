#include "BrightnessMeter.h"

BrightnessMeter::BrightnessMeter(const ev3api::ColorSensor& color_sensor)
    :cr(color_sensor),
     brightness((float)cr->getBrightness())
    { 
}

BrightnessMeter::~BrightnesMeter() {
}

float BrightnessMeter::getValue(){
    return brightness;
}

void BrightnessMeter::update() {
    brightness = (float)cr->getBrightness();
}