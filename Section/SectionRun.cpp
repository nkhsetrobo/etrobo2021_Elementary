#include "SectionRun.h"

extern SimpleWalker               *gSimpleWalker;
//extern ScenarioLineTracer         *gScenarioLineTracer;  未実装
extern LineTracer                 *gLineTracer;
extern ScenarioCurveLineTracer    *gScenarioCurveLineTracer;
extern MileageConditions           *gMileageConditions;
extern TurnAngConditions           *gTurnAngConditions;
extern ArmAngConditions            *gArmAngConditions;    
extern TailAngConditions           *gTailAngConditions;    

SectionRun::SectionRun(){
    //mWalkMethod配列の初期化
    mWalkMethod[SIMPWALKER]     = gSimpleWalker;
    mWalkMethod[SCENARIOCURVE]  = gScenarioCurveLineTracer;
    //mWalkMethod[SCENARIOLINE] = gScenarioLineTracer;   未実装
    mWalkMethod[LINETRACER]     = gLineTracer;

    //mJudgeMethod配列の初期化
    mJudgeMethod[MILEAGE] = gMileageConditions;
    mJudgeMethod[TURNANG] = gTurnAngConditions;
    mJudgeMethod[ARMANG] = gArmAngConditions; 
    mJudgeMethod[TAILANG] = gTailAngConditions; 
    
}
//メソッド（走法、判定）初期化

SectionRun::~SectionRun(){
    //コメント
    delete mJudgement;
    //delete mWalker;
}

bool SectionRun::Run(){

    //判定のRUN　結果がFALSEならそのままかえす
    mWalker->run();
    
    return false;
    
}


// Walker SectionRun::witchWalker(int part){
//     /*switch (part)
//     {
//     case SIMPWALKER:
//         mWalker = (Walker*)(new SimpleWalker(gWheelMotorMgmt,gBrightnessSensor,gSpeedSensor,gTurnAngSensor,gXPosition,gYPosition,gMileageSensor,gScenarioCurveLineTracer));
//         break;
//     case SCENARIOCURVE:
//         mWalker = (Walker*)(new ScenarioCurveLineTracer());
//         break;
//     case SCENARIOLINE:
//         mWalker = (Walker*)(new ScenarioLineTracer());
//         break;
//     case LINETRACER:
//         mWalker = (Walker*)(new LineTracer(gWheelMotorMgmt,gBrightnessSensor, gTurnAngSensor,gSpeedSensor,gXPosition,gYPosition,gMileageSensor));
//         break;
//     default:
//         //コメント
//         break;
//     }*/

//     return mWalker;
// }
