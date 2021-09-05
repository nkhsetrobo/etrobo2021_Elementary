#include "TurnAngConditions.h"

TurnAngConditions::TurnAngConditions()
    :judgement();


//判定する
void TurnAngConditions::judge(){


}

/**
 * パラメータを設定する
 * @param TurnAng アーム角度
*/

void TurnAngConditions::setParameter(float TurnAng){
    mTurnAng = TurnAng;
}