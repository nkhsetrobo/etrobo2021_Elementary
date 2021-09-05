#ifndef JUDGE_H_
#define JUDGE_H_
#include "MySensor.h"

class judgement {
    public:
    judgement();
    ~judgement();
    virtual bool judge();
    virtual float getValue();
};

#endif