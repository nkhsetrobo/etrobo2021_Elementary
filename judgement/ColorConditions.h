#ifndef COLOR_CONDITIONS
#define COLOR_CONDITIONS

#include "judgement.h"

class ColorConditions : public judgement{
    public:
        ColorConditions();
        ~ColorConditions();
        bool judge();
        void setParameter(float Brightness[]);
        float getValue();
    private:
        float mBrightness;
        float aBrightness;

};

#endif