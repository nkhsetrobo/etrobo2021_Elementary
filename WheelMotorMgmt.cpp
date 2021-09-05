#include "WheelMotorMgmt.h"

/**
 * コンストラクタ
 * @param leftWheel  左モータ
 * @param rightWheel 右モータ
 */
WheelMotorMgmt::WheelMotorMgmt(ev3api::Motor& leftWheel,
                                 ev3api::Motor& rightWheel)
    : mLeftWheel(leftWheel),
      mRightWheel(rightWheel){
}

//void WheelMotorMgmt::setPwm(int rp,int lp) {
     //rpwm = rp;
     //lpwm = lp;
void WheelMotorMgmt::init(){
//モーターをりセット
    mRightWheel.reset();
    mLeftWheel.reset();
}

void WheelMotorMgmt::walkDriveOrder(int rpwm,int lpwm){
     mRightWheel.setPWM(rpwm);
     mLeftWheel.setPWM(lpwm); 
}
