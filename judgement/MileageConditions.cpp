#include "MileageConditions.h"

MileageConditions::MileageConditions()
    :judgement();


//判定する
void MileageConditions::judge(){
    //計測した値が越えたら終了
    if(aMiles < mMileageCondition->getValue()){
        return true;
    } else {
        return false;
    }
}

/**
 * パラメータを設定する
 * @param Miles 距離
*/

void MileageConditions::setParameter(float Miles[]){
    mMiles = Miles;
    aMiles = aMiles + mMiles;
}