#ifndef ARM_ANG_CONDITIONS
#define ARM_ANG_CONDITIONS

#include "judgement.h"
#include "ArmAngSensor.h"

class ArmAngConditions : public judgement{
    public:
        ArmAngConditions(ArmAngSensor *Angle);
        ~ArmAngConditions();
        bool judge();
        void setParameter(float ArmAng);
        float getValue();

     private:
        float mArmAng;
        float aArmAng;
        float Sum;
        int UorD;
        int mode;
}

#endif