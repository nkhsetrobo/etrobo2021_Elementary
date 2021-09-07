#ifndef ARM_WALKER_H
#define ARM_WALKER_H

#include "ev3api.h"
#include "Motor.h"

class ArmWalker{
    public:
        ArmWalker(ev3api::Motor& motor);
        ~ArmWalker();
        void setPWM(int pwm);
        void run();
    
    private:
        ev3api::Motor& armMotor;
        int pwm;
    
};

#endif