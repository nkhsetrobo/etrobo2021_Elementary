#ifndef ARM_DRIVER_H_
#define ARM_DRIVER_H_

class ArmDriver : public Walker {
    public:
        ArmDriver();
        ~ArmDriver();
        void run();
        void init();
        void setParameter();

    private:
        int pwm;
        float angle;
};

#endif