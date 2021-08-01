#ifndef ARM_ANG__SENSOR_H_
#define ARM_ANG__SENSOR_H_

class ArmAngSensor : public Sensor{
    public:
        float getValue();
        void update();
        void reset();
    
    private:
        float angle;
}

#endif