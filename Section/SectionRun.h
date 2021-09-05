#ifndef SECTION_RUN
#define SECTION_RUN

#include "Walker.h"
#include "SimpleWalker.h"
#include "ScenarioCurveLineTracer.h"
//#include "ScenarioLineTracer.h"
#include "LineTracer.h"

#include "MileageConditions.h"
#include "TurnAngConditions.h"
#include "ArmAngConditions.h"
#include "TailAngConditions.h"

class SectionRun{
    public:
        SectionRun();
        ~SectionRun();
        bool Run();
        Walker *witchWalker(int part);

        enum WALKER_PART{
            SIMPWALKER,     //0
            SCENARIOCURVE,  //1
            SCENARIOLINE,   //2
            LINETRACER      //3
        };

        enum JUGE_PART{
            MILEAGE,    //0  ※距離条件
            TURNANG,    //1　※旋回角度条件
            ARMANG,     //2　※アーム角度条件
            TAILANG     //3　※尻尾角度条件
        };

        private:
            Walker      *mWalker;
            Walker      *mWalkMethod[10];
            judgement   *mJudgement;
            judgement   *mJudgeMethod[10];
};

#endif