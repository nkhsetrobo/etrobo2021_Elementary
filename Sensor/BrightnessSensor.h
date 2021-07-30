#ifndef BRIGHTNESS_SENSOR_H_
#define BRIGHTNESS_SENSOR_H_

class BrightnessSensor : public Sensor{
    public:
        float getValue();
        void update();
    
    private:
        float brightness;
}

#endif