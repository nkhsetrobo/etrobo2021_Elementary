#ifndef SECTION_PARAMETERS
#define SECTION_PARAMETERS

#include "SectionMgmt.h"

class SectionParameters : public SectionParameters{
    public:
        SectionParameters();
        int transition(int Section);
    private:
        int SecParam;

}

#endif