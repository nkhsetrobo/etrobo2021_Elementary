#include "ScenarioLineTracer.h"

//コンストラクタ
ScenarioCurveLineTracer::ScenarioCurveLineTracer(WheelMotorMgmt *motor,
                        BrightnessSensor *brightness,
                        TurnAngSensor *turnangsensor,
                        XPosition *xposition,
                        YPosition *yposition,
                        MileageSensor *mileagesensor)
    :SimpleWalker(motor,
                  brightness,
                  turnangsensor,
                  xposition,
                  yposition,
                  mileagesensor),
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
void ScenarioLineTracer::run()
{


}

  
setParameter((int)Speed,(int)distance2);


SimpleWalker::run();

 
}


void ScenarioCurveLineTracer::init(float param[])
{
  
  Speed=param[0];
  kp=param[1];
  ki=param[2];
  kd=param[3];
  target=param[4];
  
    
    mPID->setKp(kp);
    mPID->setKi(ki);
    mPID->setKd(kd);
    mPID->setTarget(fabs(target));
    


}

//距離計算
float ScenarioCurveLineTracer::calcdistance()
{


}





