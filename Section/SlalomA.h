#ifndef SLALOM_A
#define SLALOM_A

#include "SectionMgmt.h"

class SlalomA : public SectionMgmt{
    public:
        SlalomA();
        bool Run();
    private:
        int SCidx;
        int SClast;
};


#endif