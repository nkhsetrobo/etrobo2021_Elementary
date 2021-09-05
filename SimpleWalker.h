#ifndef SIMPLE_WALKER_H_
#define SIMPLE_WALKER_H_
#include "Walker.h"

class SimpleWalker : public Walker{

    public:
        SimpleWalker(WheelMotorMgmt *motor);
        ~SimpleWalker();
        void run();
        void init();
        void setParameter(int forward,int turn);

    private:
        int mForward;
        int mTurn;
        

};

#endif
