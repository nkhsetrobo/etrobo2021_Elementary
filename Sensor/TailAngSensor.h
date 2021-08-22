#ifndef TAIL_ANG_SENSOR
#define TAIL_ANG_SENSOR


class TailAngSensor {
    public:
        TailAngSensor();
        ~TailAngSensor();
        float getValue();
        void update(float value);
    private:
        float angle;
}

#endif