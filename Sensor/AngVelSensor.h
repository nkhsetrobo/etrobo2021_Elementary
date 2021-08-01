#ifndef Ang_Vel_SENSOR_H_
#define Ang_Vel_SENSOR_H_

class AngVelSensor : public Sensor{
    public:
        float getValue();
        void update();
        void reset();
    
    private:
        float ang_vel;
}

#endif