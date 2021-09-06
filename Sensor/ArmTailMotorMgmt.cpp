
#include "ArmTailMotorMgmt.h"

ArmTailMotorMgmt::ArmTailMotorMgmt(ev3api::Motor& armmotor,
                                   //ev3api::Motor& tailmotor,
                                   ArmAngSensor* armangsensor)
                                   //TailAngSensor* tailangsensor)
    :mArmMotor(armmotor),
     //tail(tailmotor),
     mArmAngSensor(armangsensor),
     //ts(tailangsensor)

    {

}

void ArmTailMotorMgmt::armDriveOrder(int pwm){
    mArmMotor.setPWM(pwm);
}

// //void ArmTailMotorMgmt::tailDriveOrder(int pwm){
//     tm.setPWM(pwm);
// }

void ArmTailMotorMgmt::armAngUpdate(){
    mArmAngSensor->update(mArmMotor.getCount());
}

// void ArmTailMotorMgmt::tailAngUpdate(){
//     tas->update(tail.getCount());
// }