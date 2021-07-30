#ifndef _SENSOR_H_
#define _SENSOR_H_

class Sensor {
    public:
        Sensor();
        ~Sensor();
        virtual float getValue();
        virtual void update();
}

#endif