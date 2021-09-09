#ifndef STAGE_MGMT
#define STAGE_MGMT
#include "SectionRun.h"

#if defined(MAKE_RIGHT)
    #define _EDGE 1
#else
    #define _EDGE 0
#endif

class StageMgmt {
    public:
        StageMgmt();
        ~StageMgmt();
        bool run();
        void Sjudge();
        void LineTracer();
        //後で消去
       // SectionRun  *mSectionRun;
    private:
        int state;

};

#endif