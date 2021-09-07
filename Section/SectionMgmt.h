#ifndef SECTION_MGMT
#define SECTION_MGMT

#include "SectionRun.h"

class SectionMgmt{
    public:
        SectionMgmt();
        ~SectionMgmt();
        void addSection();
        void reset();
        virtual bool run();
    
    protected:
        SectionRun *mSection[100];
        int mSectionIdx;
        int mLastIdx;
        SectionRun         *mSectionRun;

        typedef struct 
        {
            float Rmethod[20];   //走法の配列
            float Jmethod[20];   //判定の配列
            int Jselect;    //判定の選択
            int Rselect;    //走法の選択
        }SecParam;
        
};

#endif