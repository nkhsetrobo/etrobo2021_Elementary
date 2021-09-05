#ifndef ANG_VEL_SENSOR
#define ANG_VEL_SENSOR

#include "MySensor.h"
#include "GyroSensor.h"

class AngVelSensor : public MySensor{
    public:
        AngVelSensor(ev3api::GyroSensor& gyrosensor);
        ~AngVelSensor();
        void reset();
        void update();
    private:
        ev3api::GyroSensor& gs;
};

#endif