#ifndef _DERAILING_
#define _DERAILING_

#include "SectionMgmt.h"

class Derailing : public SectionMgmt{
    public:
        Derailing();
        bool Run();
}

#endif