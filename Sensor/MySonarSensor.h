#ifndef MY_SONAR_SENSOR
#define MY_SONAR_SENSOR

#include "SonarSensor.h"

class MySonarSensor{
    public:
        MySonarSensor(const ev3api::SonarSensor& sonar_sensor);
        ~MySonarSensor();
        float getValue();
        void update();
    
    private:
        const ev3api::SonarSensor& ss;
        float length;
}

#endif