
ColorConditions::ColorConditions()
    :judgement()
{
    
}

bool ColorConditions::judge(){
    //青を判定？
    if(aBrightness > /*mColorSensor->getValue()*/){
        return  true;
    } else {
        return false;
    }

}


/**
 * パラメータを設定する
 * @param Brightness 輝度値
*/

void ColorConditions::setParameter(float Brightness[]){
    //計測器から自己位置を取得
    //mBrightness = mColorSensor->getValue();
    //パラメータを取得  ※相対座標：Miles[0]、絶対座標：Miles[1] 予定
    aBrightness = Brightness[0];

}