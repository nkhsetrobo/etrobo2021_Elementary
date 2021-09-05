#ifndef SLALOM_B
#define SLALOM_B

#include "SectionMgmt.h"

class SlalomB : public SectionMgmt{
    public:
        SlalomB();
        bool Run();
    private:
        int SCidx;
        int SClast;
};


#endif