#ifndef MILEAGE_SENSOR_H_
#define MILEAGE_SENSOR_H_

#include "MySensor.h"

class MileageSensor : public MySensor{
    public:
        MileageSensor();
        //~MileageSensor();
        float getValue();
        void update(float value);
        //void init();
    private:
        float Mileage;
        
       
};

#endif