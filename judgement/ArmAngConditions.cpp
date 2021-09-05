#include "ArmAngConditions.h"

ArmAngConditions::ArmAngConditions()
    :judgement()


//判定する
bool ArmAngConditions::judge(){
    //上下判定
    if(UorD==0){
        //計測した値が越えたら終了(上昇)
        if(aArmAng < mArmAngSensor->getValue()){
            return true;
        } else {
            return false;
        }
    } else {
        //計測した値が越えたら終了(下降)
        if(aArmAng > mArmAngSensor->getValue()){
            return true;
        } else {
            return false;
        }
    }

}

float ArmAngConditions::getValue(){
    return mArmAng;
}

/**
 * パラメータを設定する
 * @param ArmAng アーム角度
*/

void ArmAngConditions::setParameter(float ArmAng[]){
    //計測器から自己位置を取得
    mArmAng = mArmAngSensor->getValue();
    //パラメータを取得
    aArmAng = ArmAng[0];
    Sum = Sum + aArmAng;
    //上昇下降判定　上昇：0、下降：1
    if(Sum>mArmAng){
        UorD = 0;
    } else {
        UorD = 1;
    }

}