#ifndef SELF_POS_EST_H_
#define SELF_POS_EST_H_
#include "WheelMotorMgmt.h"


class SelfPosEst{
    
    public:
        SelfPosEst();
        ~SelfPosEst();
        void SelfPosCalc(float current_rs1,float current_rs2);
        
    private:
        float prev_rs1;
        float prev_rs2;
        float x;
        float y;
        float th;
        float sumlen;
        /*float current_rs1;
        float current_rs2;
        float M_PI;
        float D_LEFT;
        float D_RIGHT;
        float TREAD;
        float cos;
        float sin;
        */
};

#endif