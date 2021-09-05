#include "ArmAngConditions.h"

ArmAngConditions::ArmAngConditions()
    :judgement();


//判定する
void ArmAngConditions::judge(){


}

/**
 * パラメータを設定する
 * @param ArmAng アーム角度
*/

void ArmAngConditions::setParameter(float ArmAng){
    mArmAng = ArmAng;
}