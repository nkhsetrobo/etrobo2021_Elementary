#ifndef SPEED_COURSE
#define SPEED_COURSE

#include "SectionMgmt.h"

class SpeedCourse : public SectionMgmt{
    public:
        SpeedCourse();
        bool Run();
    private:
        int SCidx;
        int SClast;

};


#endif