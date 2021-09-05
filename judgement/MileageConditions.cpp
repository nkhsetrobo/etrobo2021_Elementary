#include "MileageConditions.h"

MileageConditions::MileageConditions()
    :judgement();


//判定する
void MileageConditions::judge(){


}

/**
 * パラメータを設定する
 * @param Miles 距離
*/

void MileageConditions::setParameter(float Miles){
    mMiles = Miles;
}