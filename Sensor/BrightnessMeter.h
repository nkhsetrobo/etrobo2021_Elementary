#ifndef BRIGHTNESS_METER_H_
#define BRIGHTNESS_METER_H_

class BrightnesMeter : public Meter{
    public:
        float getValue();
        void update();
    
    private:
        float brightness;
}

#endif