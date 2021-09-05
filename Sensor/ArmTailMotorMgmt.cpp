
#include "ArmTailMotorMgmt.h"

ArmTailMotorMgmt::ArmTailMotorMgmt(ev3api::Motor& armmotor,
                                   ev3api::Motor& tailmotor,
                                   ArmAngSensor* armangsensor,
                                   TailAngSensor* tailangsensor)
    :arm(armmotor),
     tail(tailmotor),
     as(armangsensor),
     ts(tailangsensor)

    {

}

ArmTailMotorMgmt::~ArmTailMotorMgmt(){

}

void ArmTailMotorMgmt::armDriveOrder(int pwm){
    am.setPWM(pwm);
}

void ArmTailMotorMgmt::tailDriveOrder(int pwm){
    tm.setPWM(pwm);
}

void ArmTailMotorMgmt::armAngUpdate(){
    aas->update(arm.getCount());
}

void ArmTailMotorMgmt::tailAngUpdate(){
    tas->update(tail.getCount());
}