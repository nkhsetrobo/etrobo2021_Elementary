#include "ArmAngMeter.h"
#include "Motor.h"

ArmAngMeter::ArmAngMeter(const ev3api::Motor& motor)
    :mt(motor),
     angle((float)motor->getCount())
    {
}

ArmAngMeter::~ArmAngMeter {

}

float ArmAngMeter::getValue() {
    return angle;
}

void ArmAngMeter::update() {
    angle = (float)mt->getCount();
}

void ArmAngMeter::reset() {
    mt->reset();
}