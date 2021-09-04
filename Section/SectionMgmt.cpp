#include "SectionMgmt.h"

SectionMgmt::SectionMgmt(){
    mSectionIdx = 0;
    mLastIdx = 0;
}


SectionMgmt::~SectionMgmt(){

}

void SectionMgmt::addSection(Section *Sec){
    mSection[mLastIdx++]=Sec;
}

bool SectionMgmt::run(){
    return true;
}


void SectionManager::reset()
{
    for(int i=0;i<mLastIdx;i++) {
        delete mSection[i];
    }
    mSectionIdx = 0;
    mLastIdx=0;
}