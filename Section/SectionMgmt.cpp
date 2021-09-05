#include "SectionMgmt.h"
extern SectionParameters   *gSectionParameters;
extern SectionRun          *gSectionRun;
SectionMgmt::SectionMgmt(){
    mSectionIdx = 0;
    mLastIdx = 0;
    mSectionParameters = gSectionParameters;
    mSectionRun = gSectionRun;
}


SectionMgmt::~SectionMgmt(){

}

void SectionMgmt::addSection(){
    //未定
    //mSectionIdx = mSectionParameters->transition();
    //mSection[mSectionIdx]=Sec;
}

bool SectionMgmt::run(){
    return true;
}


void SectionMgmt::reset()
{
    for(int i=0;i<mLastIdx;i++) {
        delete mSection[i];
    }
    mSectionIdx = 0;
    mLastIdx=0;
}