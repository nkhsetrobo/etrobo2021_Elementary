#include "TurnAngSensor.h"


TurnAngSensor::TurnAngSensor()
    :MySensor()
    //mAngleDeg(true)

{
//コンストラクタなので初期化しないのなら書かなくて良い
}


float TurnAngSensor::getValue(){

//return mTurnAng;
//角度で返すかラジアンで返すか
return TurnAng*180/M_PI;
}

void TurnAngSensor::update(float value)
{
        TurnAng=value;
       

}


