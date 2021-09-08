#ifndef STAGE_MGMT
#define STAGE_MGMT
#include "SectionRun.h"

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