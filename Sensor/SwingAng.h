#ifndef SWING_ANG_METER_H_
#define SWING_ANG_METER_H_

class SwingAngMeter : public Meter{
    public:
        float getValue();
        void update();
        void reset();
    
    private:
        float angle;
}

#endif