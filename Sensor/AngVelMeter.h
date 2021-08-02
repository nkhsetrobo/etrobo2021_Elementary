#ifndef ANG_VEL_METER_H_
#define ANG_VEL_METER_H_

class AngVelMeter : public Meter{
    public:
        float getValue();
        void update();
        void reset();
    
    private:
        float ang_vel;
}

#endif