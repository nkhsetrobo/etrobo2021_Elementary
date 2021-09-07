#ifndef ARM_WALKER_H
#define ARM_WALKER_H

class ArmWalker : public Walker {
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