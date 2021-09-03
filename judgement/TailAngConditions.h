#ifndef TAIL_ANG_CONDITIONS
#define TAIL_ANG_CONDITIONS

#include "judgement.h"

class TailAngConditions : public judgement{
    public:
        TailAngConditions();
        ~TailAngConditions();
        bool judge();
        void setParameter(float TailAng);
    private:
        float mTailAng;
}


#endif