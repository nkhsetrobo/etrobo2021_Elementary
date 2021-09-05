#ifndef MILEAGE_CONDITIONS
#define MILEAGE_CONDITIONS

#include "judgement.h"

class MileageConditions : public judgement{
    public:
        MileageConditions();
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
};

#endif