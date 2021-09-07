#ifndef STAGE_MGMT
#define STAGE_MGMT

class StageMgmt {
    public:
        StageMgmt();
        ~StageMgmt();
        bool run();
        //後で消去
        SectionRun  *mSectionRun;
    private:
        int state;
};

#endif