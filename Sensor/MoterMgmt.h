#ifndef MOTER_MGMT_H_
#define MOTER_MGMT_H_

class MoterMgmt {
    public:
        void walkDriveOrder(int rpwm,int lpwm);
        void armDriveOrder(int pwm);
        void tailDriveOrder(int pwm);

    private:
        int r_current_encode_value;
        int l_current_encode_value;
        int arm_current_encode_value;
        int tail_current_encode_value;
}

#endif