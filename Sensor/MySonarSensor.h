#ifndef MY_SONAR_SENSOR
#define MY_SONAR_SENSOR

#include "MySensor.h"
#include "SonarSensor.h"

class MySonarSensor : public MySensor{
    public:
        MySonarSensor(ev3api::SonarSensor& sonarsensor);
        ~MySonarSensor();
        void update();
    private:
        ev3api::SonarSensor& ss;
};

#endif