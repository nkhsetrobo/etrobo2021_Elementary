#include "LineTracer.h"
#include "math.h"



//const int LineTracer::LEFTEDGE=true;
//const int LineTracer::RIGHTEDGE=false;




LineTracer::LineTracer(WheelMotorMgmt *motor,
                        BrightnessSensor *brightness,
                        TurnAngSensor *turnangsensor,
                        //SpeedSensor *speedsensor,
                        XPosition *xposition,
                        YPosition *yposition,
                        MileageSensor *mileagesensor)
:SimpleWalker(motor,
                brightness,
               // speedsensor,
                turnangsensor,
                xposition,
                yposition,
                mileagesensor),
mSpeed(0),
mTarget(0),
//mLeftEdge(true),
kp(0),
ki(0),
kd(0),
edge(0)

{

}
//走らせる
void LineTracer::run(){

    float brightness;
    float direction;
    brightness=mBrightnessSensor->getValue();
    mTurn=calcTurn(brightness);

    setParameter((int)mSpeed,(int)mTurn);
    SimpleWalker::run();

    


}


//計算　反転させる

float LineTracer::calcTurn(float val1){


    float val1_turn=mPID->getOperation(val1);

    if(edge==1){

        edge=edge*-1;
   
    }else{

    }

   return val1_turn;


}


//初期化
void LineTracer::init(float param[]){
    
   mSpeed=param[0];
   mTarget=param[1];
   kp=param[2];
   ki=param[3];
   kd =param[4];
   edge=param[5];
   
   
    mPID->setTarget(mTarget);
    mPID->setKp(kp);
    mPID->setKi(ki);
    mPID->setKd(kd);
    
}





