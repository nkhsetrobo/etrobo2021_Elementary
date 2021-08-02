#ifndef TAIL_ANG_METER_H_
#define TAIL_ANG_METER_H_

class TailAngMeter : public Meter{
    public:
        float getValue();
        void update();
    
    private:
        float angle;
}

#endif