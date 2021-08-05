#ifndef ARM_ANG_METER_H_
#define ARM_ANG_METER_H_

class ArmAngMeter : public Meter{
    public:
        ArmAngMeter(const ev3api::Motor& motor);
        ~ArmAngMeter();
        float getValue();
        void update();
        void reset();
    
    private:
        float angle;
        const ev3api::Motor& mt;
};

#endif