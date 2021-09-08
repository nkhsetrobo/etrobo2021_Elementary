#include "ScenarioCurveLineTracer.h"

//コンストラクタ
ScenarioCurveLineTracer::ScenarioCurveLineTracer(WheelMotorMgmt *motor,
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
  mx(0),   
  my(0),
  kp(0),
  ki(0),
  kd(0),
  Speed(0),
  target(0)


{

}




void ScenarioCurveLineTracer::setPosition(float x,float y)

{
  mx=mXPosition->getValue();
  my=mYPosition->getValue();
  
}


//走らせる
void ScenarioCurveLineTracer::run()
{

float x=mXPosition->getValue();
float y=mYPosition->getValue();
float turnVal=mTurnAngSensor->getValue();

//中心座標回転
float body=5;
float tg=(fabs(target));
float  cy=x-tg*sin(turnVal);
float  cx=y+tg*cos(turnVal);

//センサー
float sy=body*cos(turnVal)+x;
float sx=body*sin(turnVal)+y;

//距離
float distance=calcdistance(cx,cy,sx,sy);

float distance2=mPID->getOperation(distance);

if(target>0){

  distance2=distance2*-1;
}

  
//setParameter((int)Speed,(int)distance2);

//printf("x %f y %f turnVal %f distance %f\n",x,y,turnVal,distance);
//printf("操作量 %f\n",distance2);

SimpleWalker::run();

 
//}


// void ScenarioCurveLineTracer::init(float param[])
// {
  
//   Speed=param[0];
//   kp=param[1];
//   ki=param[2];
//   kd=param[3];
//   target=param[4];
  
    
//     mPID->setKp(kp);
//     mPID->setKi(ki);
//     mPID->setKd(kd);
//     mPID->setTarget(fabs(target));
    
//   float distance =mMileageSensor->getValue();
//   float valu = mTurnAngSensor->getValue();
//   float x=mXPosition->getValue();
//   float y=mYPosition->getValue();
//   float turnVal=mTurnAngSensor->getValue();
  


}

//距離計算
float ScenarioCurveLineTracer::calcdistance(float x1,float y1,float x2,float y2)
{
    float Ans=sqrt(pow(x1-x2,2)+pow(y1-y2,2));

    //printf("x1 %f y1 %f x2 %f y2 %f\n",x1,y1,x2,y2);

    return Ans;

}


