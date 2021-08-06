#ifndef LineTracer_H_
#define LineTracer_H_
#include "SimpleWalker.h"
#include "MotorMgmt.h"

class LineTracer : public SimpleWalker{
    public:
        LineTracer(MotorMgmt *motor);
        void run();
        void init();

    private:
        float kp;
        float ki;
        float kd;
        bool mIsInitialized ;
};

#endif