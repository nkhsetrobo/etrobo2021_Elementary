#ifndef STAGE_MGMT
#define STAGE_MGMT

class StageMgmt {
    public:
        StageMgmt();
        ~StageMgmt();
        bool run();
    
    private:
        int state;
};

#endif