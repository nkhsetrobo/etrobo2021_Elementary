#include "Walker.h"

/**
*コンストラクタ
*@param leftWheel 左モータ
*@param rightWheel 右モータ
*/
Walker::Walker(WheelMotorMgmt *motor,
                BrightnessSensor *brightness,
                //SpeedSensor *speedsensor,
                 TurnAngSensor *turnangsensor,
                 XPosition *xposition,
                 YPosition *yposition,
                 MileageSensor *mileagesensor)
                 //ArmTailMotorMgmt   *mArmTailMotorMgmt,
                 //TailAngSensor      *mTailAngSensor, 
                  //ArmAngSensor       *mArmAngSensor);
    :mWheelMotorMgmt(motor),
        mBrightnessSensor(brightness),
        //mSpeedSensor(speedsensor),
        mTurnAngSensor(turnangsensor),
        mXPosition(xposition),
        mYPosition(yposition),
        mMileageSensor(mileagesensor)
        //ArmTailMotorMgmt(armtailmotormgmt),
        //TailAngSensor(tailangsensor,)
        //ArmAngSensor(armangsensor)
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


