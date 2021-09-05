#include "TailAngConditions.h"

TailAngConditions::TailAngConditions()
    :judgement();

//判定する
void TailAngConditions::judge(){

}

/**
 * パラメータを設定する
 * @param mTailAng 尻尾角度
*/

void TailAngConditions::setParameter(float TailAng){
    mTailAng = TailAng;
}