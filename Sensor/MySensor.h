#ifndef _MySensor_H_
#define _MySensor_H_

class MySensor {
    public:
        MySensor();
        float getValue();
        void update();
        void update(float value);
    protected:
        float value;
};

#endif