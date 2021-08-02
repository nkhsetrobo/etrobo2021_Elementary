#ifndef MILEAGE_METER_H_
#define MILEAGE_METER_H_

class MileageMeter : public Meter{
    public:
        float getValue();
        void update();
        void reset();
    
    private:
        float mileage;
}

#endif