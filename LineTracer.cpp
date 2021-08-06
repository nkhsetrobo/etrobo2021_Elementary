#include "LineTracer.h"

LineTracer::LineTracer(MotorMgmt *motor)
:SimpleWalker(motor),
mIsInitialized(false)
{

}
//トレースする
void LineTracer::run(){
    if (mIsInitialized == false) {
        //mWalker->init();
        mIsInitialized = true;
    }

    //bool isOnLine = mLineMonitor->isOnLine();


}

//初期化
void LineTracer::init(){
    


}
