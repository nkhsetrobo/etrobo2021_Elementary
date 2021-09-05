#include "SectionRun.h"

extern SimpleWalker               *gSimpleWalker;
//extern ScenarioLineTracer         *gScenarioLineTracer;  未実装
extern LineTracer                 *gLineTracer;
extern ScenarioCurveLineTracer    *gScenarioCurveLineTracer;
extern MileageConditions           *gMileageConditions;
extern TurnAngConditions           *gTurnAngConditions;
//extern ArmAngConditions            *gArmAngConditions;     未接続
//extern TailAngConditions           *gTalAngConditions;    未接続

SectionRun::SectionRun(){
    //mWalkMethod配列の初期化
    mWalkMethod[SIMPWALKER]     = gSimpleWalker;
    mWalkMethod[SCENARIOCURVE]  = gScenarioCurveLineTracer;
    //mWalkMethod[SCENARIOLINE] = gScenarioLineTracer;   未実装
    mWalkMethod[LINETRACER]     = gLineTracer;

    //mJudgeMethod配列の初期化
    mJudgeMethod[MILEAGE] = gMileageConditions;
    mJudgeMethod[TURNANG] = gTurnAngConditions;
    //mJudgeMethod[ARMANG] = gArmAngConditions;  未実装
    //mJudgeMethod[TAILANG] = gTailAngConditions;  未実装

}


SectionRun::~SectionRun(){
    //コメント
    delete mJudgement;
    delete mWalker;
}

bool SectionRun::Run(){


    mWalker->run();

    return false;
    
}

Walker SectionRun::witchWalker(int part){
    /*switch (part)
    {
    case SIMPWALKER:
        mWalker = (Walker*)(new SimpleWalker(gWheelMotorMgmt,gBrightnessSensor,gSpeedSensor,gTurnAngSensor,gXPosition,gYPosition,gMileageSensor,gScenarioCurveLineTracer));
        break;
    case SCENARIOCURVE:
        mWalker = (Walker*)(new ScenarioCurveLineTracer());
        break;
    case SCENARIOLINE:
        mWalker = (Walker*)(new ScenarioLineTracer());
        break;
    case LINETRACER:
        mWalker = (Walker*)(new LineTracer(gWheelMotorMgmt,gBrightnessSensor, gTurnAngSensor,gSpeedSensor,gXPosition,gYPosition,gMileageSensor));
        break;
    default:
        //コメント
        break;
    }*/

    return mWalker;
}
