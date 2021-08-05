#ifndef TAIL_ANG_METER_H_
#define TAIL_ANG_METER_H_

class TailAngMeter : public Meter{
    public:
        TailAngMeter();
        ~TailAngMeter();
        float getValue();
        void update();
    
    private:
        float angle;
        const ev3api::GyroSensor& gr;
}

#endif