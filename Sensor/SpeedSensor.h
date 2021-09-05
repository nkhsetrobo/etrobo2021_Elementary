#ifndef SPEED_METER_H_
#define SPEED_METER_H_

//#include "MySensor.h"

class SpeedSensor : public MySensor{
    public:
        SpeedSensor();
        //~SpeedSensor();
        void update(float value);
    private:
        int meas_time;
};

#endif