#include "LineTracer.h"
#include "math.h"



//const int LineTracer::LEFTEDGE=true;
//const int LineTracer::RIGHTEDGE=false;




LineTracer::LineTracer(WheelMotorMgmt *motor,
                BrightnessSensor *brightness,
                //SpeedSensor *speedsensor,
                 ArmTailMotorMgmt   *armtailmotormgmt,
                 XPosition          *xposition,
                 YPosition          *yposition,
                 MileageSensor      *mileagesensor,
                 TurnAngSensor      *turnangsensor, 
                 ArmAngSensor       *armangsensor,
                 TailAngSensor      *tailangsensor)
:SimpleWalker(motor,brightness,armtailmotormgmt,xposition,yposition,mileagesensor,turnangsensor,armangsensor,tailangsensor),
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

    float param[2];
    param[0] = 50;
    param[1] = mTurn;

    setParameter(param);
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





