#ifndef SECTION_MGMT
#define SECTION_MGMT

class SectionMgmt{
    public:
        SectionMgmt();
        ~SectionMgmt();
        void addSection(Section *Sec);
        void reset();
        virtual bool run();
    
    protected:
        Section *mSection[100];
        int mSectionIdx;
        int mLastIdx;
};

#endif