#ifndef _Sensor_H_
#define _Sensor_H_

class Sensor {
    public:
        Sensor();
        ~Sensor();
        virtual float getValue();
        virtual void update();
};

#endif