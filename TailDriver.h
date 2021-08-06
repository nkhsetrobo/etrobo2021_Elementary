#ifndef TAIL_DRIVER_H_
#define TAIL_DRIVER_H_

class TailDriver : public Walker {
    public:
        TailDriver();
        ~TailDriver();   
        void run();
        void init();
        void setParameter();

    private:
        int pwm;
        float angle;
};

#endif