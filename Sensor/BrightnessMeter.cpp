#include "BrightnessMeter.h"

BrightnessMeter::BrightnessMeter()
    : brightness(0.0)
    {
}

BrightnessMeter::~BrightnessMeter() {
}

float BrightnessMeter::getValue(){
    return brightness;
}

void BrightnessMeter::update(float val) {
    brightness = val;
}