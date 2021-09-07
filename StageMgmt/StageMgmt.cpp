#include "StageMgmt.h"
#include "SimpleWalker.h"
#include "LineTracer.h"
#include "ScenarioCurveLineTracer.h"

extern SimpleWalker *gSimpleWalker;
extern LineTracer *gLineTracer;
extern ScenarioCurveLineTracer*gScenarioCurveLineTracer;


StageMgmt::StageMgmt() {

    mSectionRun = new SectionRun();
    SectionRun->Select(float mwalk[] ,int walker,float mjug[] ,int jug);
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