#ifndef SECTION_RUN
#define SECTION_RUN

#include "Walker.h"
#include "ScenarioCurveLineTracer.h"
#include "ScenarioLineTracer.h"
#include "LineTracer.h"

class SectionRun : public SectionRun{
    public:
        SectionRun();
        ~SectionRun();
        bool Run();
}

#endif