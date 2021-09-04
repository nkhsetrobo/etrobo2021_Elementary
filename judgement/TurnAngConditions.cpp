#include "TurnAngConditions.h"

/**
    * コンストラクタ
    * @param LeftTurn
    * @param rightTurn
*/

TurnAngConditions::TurnAngConditions(TurnAngSensor *TurnAng)
    :judgement(){

    }


//判定する
bool TurnAngConditions::judge(){
    //左右の分岐
    if(LorR == 1 ){
        //計測した値が越えたら終了(左旋回)
        if(Sum < mTurnAngSensor->getValue()){
            return true;
        } else {
            return false;
        }

    } else {
        //計測した値が越えたら終了(右旋回)
        if(Sum > mTurnAngSensor->getValue()){
            return true;
        } else {
            return false;
        }

    }

}

float TurnAngConditions::getValue(){
    return mTurnAng;
}


/**
 * パラメータを設定する
 * @param TurnAng　旋回角度
*/

void TurnAngConditions::setParameter(float TurnAng[]){
    //計測器から自己位置を取得
    mTurnAng = mTurnAngSensor->getValue();
    //パラメータを取得  ※相対座標：TurnAng[0]、絶対座標：TurnAng[1] 予定
    aTurnAng = TurnAng[0];
    Sum = Sum + aTurnAng;
    //左右判定 左　右：0、左：1
    if(mTurnAng<Sum){
        LorR = 0; //右へ
    } else {
        LorR = 1; //左へ
    }
}