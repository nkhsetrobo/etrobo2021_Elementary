#include "SimpleWalker.h"

//前進量
const int SimpleWalker::LOW=30
const int SimpleWalker::NORMAL=50
const int SimpleWalker::HIGH=70
// 旋回量
const int SimpleWalker::RIGHT=0
const int SimpleWalker::LEFT=1
/**
    *コンストラクタ
    * @param lefWheel 右モータ
    * @param rightWheel 左モータ
*/
SimpleWalker:SimpleWalker(MotorMgmt *motor)
                                                     
    :Walker(motor),
     mForward(LOW),
     mTurn(RIGHT){
     }


//走行する
void SimpleWalker::run(){
//左右モーターに回転を指示
    int rightPWM=0;
    int leftPWM=0;

    if(mTurn==RIGHT){
        rightPWM=0;
        leftPWM=mForward;
    }else if(mTurn==LEFT){
        leftPWM=0;
        rightPWM=mForward
    }else {
        rightPWM=mForward
        leftPWM=mForward
    }
        mRightWheel.setPWM(rightPWM);
        mLeftWheel.setPWM(leftPWM);
}

//初期化する
void SimpleWalker::init
void Walker:init(){
//モーターをりセット
    mRightWheel.reset();
    mLeftWheel.reset();

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




