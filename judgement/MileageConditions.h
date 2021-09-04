#ifndef MILEAGE_CONDITIONS
#define MILEAGE_CONDITIONS

#include "judgement.h"
#include "MileageSensor.h"

class MileageConditions : public judgement{
    public:
        MileageConditions(MileageSensor *Mileage);
        ~MileageConditions();
        bool judge();
        void setParameter(float Miles[]);
        float getValue();

    private:
        float mMiles;
        float aMiles;
        float Sum;
        int FwardorBward;
        int mode;
}

#endif