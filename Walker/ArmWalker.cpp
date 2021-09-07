#include "ArmWalker.h"

ArmWalker::ArmWalker(ev3api::Motor motor)
    :armMotor(motor)
    {
}

ArmWalker::~ArmWalker(){

}

ArmWalker::setPWM(int pwm){
    this->pwm = pwm;
}

ArmWalker::run(){
    armMotor.setPWM(pwm);
}

