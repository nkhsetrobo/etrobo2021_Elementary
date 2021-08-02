#ifndef Y_POSITION_METER_H_
#define Y_POSITION_METER_H_

class YPositionMeter : public Meter{
    public:
        float getValue();
        void update();
        void reset();
    
    private:
        float y_pos;
}

#endif