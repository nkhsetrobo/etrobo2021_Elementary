#include "SimpleWalker.h"

/**
    *コンストラクタ
    * @param lefWheel 右モータ
    * @param rightWheel 左モータ
*/
SimpleWalker::SimpleWalker(WheelMotorMgmt *motor,
                BrightnessSensor *brightness,
                //SpeedSensor *speedsensor,
                 ArmTailMotorMgmt   *armtailmotormgmt,
                 XPosition          *xposition,
                 YPosition          *yposition,
                 MileageSensor      *mileagesensor,
                 TurnAngSensor      *turnangsensor, 
                 ArmAngSensor       *armangsensor,
                 TailAngSensor      *tailangsensor)
    :Walker(motor,brightness,armtailmotormgmt,xposition,yposition,mileagesensor,turnangsensor,armangsensor,tailangsensor),
     mForward(0),
     mTurn(0)
     {
     }


//走行する
void SimpleWalker::run(){
//左右モーターに回転を指示
    int rightPWM=0;
    int leftPWM=0;
    int advance_amount=mForward;
    int  turning_amount=mTurn;
    rightPWM=(advance_amount+turning_amount);
    leftPWM=(advance_amount-turning_amount);
    mWheelMotorMgmt->walkDriveOrder(rightPWM,leftPWM);
}


/**
    *PWM?パラメータを設定する
    * @param foward 前進
    * @param turn 旋回
*/  
  void SimpleWalker::setParameter(int forward,int turn){
      mForward = forward;
      mTurn = turn;

  }




