#ifndef TAIL_ANG__SENSOR_H_
#define TAIL_ANG__SENSOR_H_

class TailAngSensor : public Sensor{
    public:
        float getValue();
        void update();
    
    private:
        float angle;
}

#endif