#ifndef TURN_ANG_CONDITIONS
#define TURN_ANG_CONDITIONS

#include "judgement.h"

class TurnAngConditions : public judgement{
    public:
        TurnAngConditions();
        ~TurnAngConditions();
        bool judge();
        void setParameter(float TurnAng[]);
        float getValue();

     private:
        float mTurnAng;
        float aTurnAng;
        float Sum;
        int LorR;
        int mode;
};
#endif