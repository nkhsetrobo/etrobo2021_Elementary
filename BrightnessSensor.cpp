#include "BrightnessSensor.h"

BrightnessSensor::BrightnessSensor()
    : brightness(0.0)
    {
}

BrightnessSensor::~BrightnessSensor() {
}

float BrightnessSensor::getValue(){
    return brightness;
}

void BrightnessSensor::update(float val) {
    brightness = val;
}