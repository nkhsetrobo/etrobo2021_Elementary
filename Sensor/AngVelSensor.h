#ifndef ANG_VEL_SENSOR
#define ANG_VEL_SENSOR

#include "GyroSensor.h"

class AngVelSensor {
    public:
        AngVelSensor(const ev3api::GyroSensor& gyro_sensor);
        ~AngVelSensor();
        float getValue();
        void update();
        void reset();
    private:
        float ang_vel;
        const ev3api::GyroSensor& gs;
};

#endif