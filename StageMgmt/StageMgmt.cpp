#include "StageMgmt.h"
#include "SimpleWalker.h"
#include "LineTracer.h"
#include "ScenarioCurveLineTracer.h"


extern SimpleWalker *gSimpleWalker;
extern LineTracer *gLineTracer;
extern ScenarioCurveLineTracer*gScenarioCurveLineTracer;


StageMgmt::StageMgmt() {
    
    float walk[]={30,30};
    float sjug[]={50};
    mSectionRun = new SectionRun();
    mSectionRun->Select(walk ,SectionRun::SIMPWALKER,sjug,SectionRun::MILEAGE);

    }

StageMgmt::~StageMgmt() {

}

bool StageMgmt::run() {
    //gSimpleWalker->setParameter(50,20);
    //gSimpleWalker->run();
        float param[]={85,0.5,150,20,40,1};
        gLineTracer->init(param);
        gLineTracer->run();

  //float param[]={70,30,0,0,45};
    //gScenarioCurveLineTracer->init(param);
    //gScenarioCurveLineTracer->run();


    return true;
}