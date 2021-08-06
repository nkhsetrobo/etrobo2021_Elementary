#include "TailDriver.h"
//pwm値
const int TailDriver::pwm
//角度
float int TailDriver::angle

//アームを動かす


//初期化ｘｚ
void TailDriver::init(){
    //アームをリセット
    pwm.reset();
    angle.reset();
}

//パラメータを設定する

void 