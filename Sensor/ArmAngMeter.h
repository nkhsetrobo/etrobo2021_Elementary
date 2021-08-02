#ifndef ARM_ANG_METER_H_
#define ARM_ANG_METER_H_

class ArmAngMeter : public Meter{
    public:
        float getValue();
        void update();
        void reset();
    
    private:
        float angle;
}

#endif