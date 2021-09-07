#include "ArmWalker.h"

ArmWalker::ArmWalker(ev3api::Motor& motor)
    :armMotor(motor)
    {
}

ArmWalker::~ArmWalker(){

}

void ArmWalker::setPWM(int pwm){
    this->pwm = pwm;
}

void ArmWalker::run(){
    armMotor.setPWM(pwm);
}

