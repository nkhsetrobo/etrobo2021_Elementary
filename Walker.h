#ifndef _WALKER_H
#define _WALKER_H
#include "MotorMgmt.h"

class Walker{
    public:
    Walker(MotorMgmt *motor);
    ~Walker();
    virtual void run();
    virtual void init(float param[] );


    private:
    MotorMgmt *mMotorMgmt;
    
};

#endif