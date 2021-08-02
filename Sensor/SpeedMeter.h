#ifndef SPEED_METER_H_
#define SPEED_METER_H_

class SpeedMeter : public Meter{
    public:
        float getValue();
        void update();
    
    private:
        float speed;
        int meas_time;
}

#endif