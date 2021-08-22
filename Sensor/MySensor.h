#ifndef _MySensor_H_
#define _MySensor_H_

class MySensor {
    public:
        MySensor();
        ~MySensor();
        virtual float getValue();
        virtual void update();
    
    private:
        virtual float value;
};

#endif