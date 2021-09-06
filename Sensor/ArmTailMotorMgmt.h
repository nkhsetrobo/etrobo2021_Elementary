#ifndef ARM_TAIL_MOTOR_MGMT
#define ARM_TAIL_MOTOR_MGMT

#include "ev3api.h"
#include "Motor.h"
#include "ArmAngSensor.h"
#include "TailAngSensor.h"


class ArmTailMotorMgmt {
    public:
        ArmTailMotorMgmt(ev3api::Motor& armmotor,
                         //ev3api::Motor& tailmotor,
                         ArmAngSensor* armangsensor);
                         //TailAngSensor* Tailangsensor);
    
        void armDriveOrder(int pwm);
        //void tailDriveOrder(int pwm);
        void armAngUpdate();
        //void tailAngUpdate();
    private:
        int arm_current_encoded_value;
        //int tail_current_encoded_value;
        ev3api::Motor& mArmMotor;
        //ev3api::Motor& tail;
        ArmAngSensor* mArmAngSensor;
        //TailAngSensor* ts;
};

#endif