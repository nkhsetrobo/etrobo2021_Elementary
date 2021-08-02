#ifndef X_POSITION_METER_H_
#define X_POSITION_METER_H_

class XPositionMeter : public Meter{
    public:
        float getValue();
        void update();
        void reset();
    
    private:
        float x_pos;
}

#endif