#ifndef ARM_TAIL_MOTOR_MGMT
#define ARM_TAIL_MOTOR_MGMT

#include "Motor.h"
#include "ArmAngSensor.h"
#include "TailAngSensor.h"

class ArmTailMotorMgmt {
    public:
        ArmTailMotorMgmt(ev3api::Motor& armmotor,
                         ev3api::Motor& tailmotor,
                         ArmAngSensor* armangsensor,
                         TailAngSensor* Tailangsensor);
        ~ArmTailMotorMgmt();
        void armDriveOrder(int pwm);
        void tailDriveOrder(int pwm);
        void armAngUpdate();
        void tailAngUpdate();
    private:
        int arm_current_encoded_value;
        int tail_current_encoded_value;
        ev3api::Motor& arm;
        ev3api::Motor& tail;
        ArmAngSensor* am;
        TailAngSensor* ts;
};

#endif