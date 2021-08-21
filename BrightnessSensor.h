#ifndef BRIGHTNESS_Sensor_H_
#define BRIGHTNESS_Sensor_H_

#include "MySensor.h"


class BrightnessSensor {
    public:

        BrightnessSensor();
        ~BrightnessSensor();
        float getValue();
        void update(float val);
    
    private:
        float brightness;
};

#endif