#include "TailAngConditions.h"


TailAngConditions::TailAngConditions()
    :judgement()
{

}


//判定する
bool TailAngConditions::judge(){
    //上下判定
    if(UorD == 0){
        //計測した値が越えたら終了(上昇)
        if(aTailAng < mTailAngSensor->getValue()){
            return true;
        } else {
            return false;
        }
    } else {
        //計測した値が越えたら終了(下降)
        if(aTailAng < mTailAngSensor->getValue()){
            return true;
        } else {
            return false;
        }
    }
}

/**
 * パラメータを設定する
 * @param mTailAng 尻尾角度
*/

void TailAngConditions::setParameter(float TailAng[]){
    //計測器から自己位置を取得
    mTailAng = mTailAngSensor->getValue();
    //パラメータを取得
    aTailAng = TailAng[0];
    Sum = Sum + aTailAng;
    //上昇下降判定 上昇：0、下降：1
    if(mTailAng<Sum){
        UorD = 0;
    } else {
        UorD = 1;
    }
}