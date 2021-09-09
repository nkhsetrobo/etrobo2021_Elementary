#include "StageMgmt.h"
#include "SimpleWalker.h"
#include "LineTracer.h"
#include "ScenarioCurveLineTracer.h"


extern SimpleWalker *gSimpleWalker;
extern LineTracer *gLineTracer;
extern ScenarioCurveLineTracer*gScenarioCurveLineTracer;


StageMgmt::StageMgmt() {
    
    // float walk[]={30,30};
    // float sjug[]={50};
    // mSectionRun = new SectionRun();
    // mSectionRun->Select(walk ,SectionRun::SIMPWALKER,sjug,SectionRun::MILEAGE);

    // state=0;
    }

StageMgmt::~StageMgmt() {

}

//Void StageMgmt::getTuch(){

    

void StageMgmt::Sjudge(){
        int  t=ev3_touch_sensor_is_pressed(EV3_PORT_1);
        //printf("%d\n",t);
        if(t==true){
                state=1;
             //tinit=true;
              }else{

           }
      }

bool StageMgmt::run() {
       
       switch(state){
           case  0 :
                //スイッチを押されたかどうか
                    Sjudge();
                    break;

            case 1:
                //
                LineTracer();
                    break;
     }
}
void StageMgmt::LineTracer()
{
  //printf("debug\n");
    float param[]={85,0.5,150,20,40,_EDGE};
        gLineTracer->init(param);
        gLineTracer->run();
        //LineTracer->run();
}


    //gSimpleWalker->setParameter(50,20);
    //gSimpleWalker->run();
        

  //float param[]={70,30,0,0,45};
    //gScenarioCurveLineTracer->init(param);
    //gScenarioCurveLineTracer->run();


    //return true;
