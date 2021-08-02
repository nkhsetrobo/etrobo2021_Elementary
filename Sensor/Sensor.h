#ifndef _METER_H_
#define _METER_H_

class Meter {
    public:
        Meter();
        ~Meter();
        virtual float getValue();
        virtual void update();
};

#endif