#ifndef _WALKER_H
#define _WALKER_H
#include "WheelMotorMgmt.h"
#include "ev3api.h"

class Walker{
    public:
    Walker(WheelMotorMgmt *motor);
    ~Walker();
    virtual void run();
    virtual void init(float param[] );


    protected:
    WheelMotorMgmt *mMotorMgmt;

    private:
    
};

#endif