#include "Walker.h"

/**
*コンストラクタ
*@param leftWheel 左モータ
*@param rightWheel 右モータ
*/
Walker::Walker(WheelMotorMgmt *motor,
                BrightnessSensor *brightness,
                //SpeedSensor *speedsensor,
                 ArmTailMotorMgmt   *armtailmotormgmt,
                 XPosition          *xposition,
                 YPosition          *yposition,
                 MileageSensor      *mileagesensor,
                 TurnAngSensor      *turnangsensor, 
                 ArmAngSensor       *armangsensor,
                 TailAngSensor      *tailangsensor)

    :mWheelMotorMgmt(motor),
     mBrightnessSensor(brightness),
        mArmTailMotorMgmt(armtailmotormgmt),
        //mSpeedSensor(speedsensor),
        mXPosition(xposition),
        mYPosition(yposition),
        mTurnAngSensor(turnangsensor),
         mMileageSensor(mileagesensor),
        mArmAngSensor(armangsensor),
        mTailAngSensor(tailangsensor)
    {
        mPID=new PID();
    }
//走行する
void Walker::run(){
//左右モーターに回転を指示
    
}

//初期化する
void Walker::init(float param[]){
//モーターをりセット

}


