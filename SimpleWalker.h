#ifndef SIMPLE_WALKER_H_
#define SIMPLE_WALKER_H_
#include "Walker.h"

class SimpleWalker : public Walker{

    public:
        SimpleWalker(MotorMgmt *motor);
        ~SimpleWalker();
        void run();
        void init();
        void setParameter();

    private:
        int advance_amount;
        int turning_amount;

};

#endif
