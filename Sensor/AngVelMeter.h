#ifndef ANG_VEL_METER_H_
#define ANG_VEL_METER_H_

class AngVelMeter : public Meter{
    public:
        AngVelMeter(const ev3api::GyroSensor& gyro_sensor);
        ~AngVelMeter();
        float getValue();
        void update();
        void reset();
    
    private:
        float ang_vel;
        const ev3api::GyroSensor& gr; 

        
};

#endif