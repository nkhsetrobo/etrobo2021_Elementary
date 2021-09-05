#include "MileageConditions.h"

MileageConditions::MileageConditions()
    :judgement()
{
    
}


//判定する
bool MileageConditions::judge(){
    //前後判定
    if(FwardorBward == 0){
        //計測した値が越えたら終了(前進)
        if(aMiles < mMileageSensor->getValue()){
            return true;
        } else {
            return false;
        }
    } else {
        //計測した値が越えたら終了(後退)
        if(aMiles > mMileageSensor->getValue()){
            return true;
        } else {
            return false;
        }
    }
}

float MileageConditions::getValue(){
    return mMiles;
}

/**
 * パラメータを設定する
 * @param Miles 距離
*/

void MileageConditions::setParameter(float Miles[]){
    //計測器から自己位置を取得
    mMiles = mMileageSensor->getValue();
    //パラメータを取得  ※相対座標：Miles[0]、絶対座標：Miles[1] 予定
    aMiles = Miles[0];
    Sum = Sum + aMiles;
    //前進後退判定 前進：0、後退：1
    if(mMiles<Sum){
        FwardorBward = 0; 
    } else {
        FwardorBward = 1;
    }
}