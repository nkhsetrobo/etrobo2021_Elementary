#include "ObjDistConditions.h"


MileageConditions::MileageConditions()
    :judgement()
{

}

//判定
bool MileageConditions::judge(){

}

/**
 *パラメータを作成
 *@param ObjDistance 対物距離
*/ 

void MileageConditions::setParameter(float ObjDistance[]){
    //計測器から自己位置を取得
    //mObjDistance = ->getValue();
    //パラメータを取得  ※相対座標：Miles[0]、絶対座標：Miles[1] 予定
    //aObjDistance = ObjDistance[0]
}