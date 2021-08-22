#ifndef BRIGHTNESS_METER_H_
#define BRIGHTNESS_METER_H_

#include "MySensor.h"


class BrightnessMeter {
    public:

        BrightnessMeter();
        ~BrightnessMeter();
        float getValue();
        void update(float val);
    
    private:
        float brightness;
};

#endif