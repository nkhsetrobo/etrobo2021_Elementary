#ifndef TURN_ANG_CONDITIONS
#define TURN_ANG_CONDITIONS

#include "judgement.h"
#include "TurnAngSensor.h"

class TurnAngConditions : public judgement{
    public:
        TurnAngConditions(TurnAngSensor *TurnAng);
        ~TurnAngConditions();
        bool judge();
        void setParameter(float TurnAng);
        float getValue();

     private:
        float mTurnAng;
        float aTurnAng;
        float Sum;
        int LorR;
        int mode;
}

#endif