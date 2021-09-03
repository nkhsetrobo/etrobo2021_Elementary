#include "TurnAngConditions.h"

TurnAngConditions::TurnAngConditions()
    :judgement();


//判定する
void TurnAngConditions::judge(){
    //計測した値が越えたら終了
    if(aMiles < mTurnAngConditions->getValue()){
        return true;
    } else {
        return false;
    }

}

/**
 * パラメータを設定する
 * @param TurnAng　旋回角度
*/

void TurnAngConditions::setParameter(float TurnAng[]){
    mTurnAng = TurnAng;
    aTurnAng = aTurnAng + mTurnAng;
}