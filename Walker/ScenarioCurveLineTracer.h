#ifndef SCENARIO_CURVE_LINE_TRACER_H_
#define SCENARIO_CURVE_LINE_TRACER_H_
#include "SimpleWalker.h"
#include "math.h"

class ScenarioCurveLineTracer : public SimpleWalker{
    public:
        ScenarioCurveLineTracer(WheelMotorMgmt *motor,
                                 BrightnessSensor *brightness,
                                TurnAngSensor *turnagsensor,
                                XPosition *xposition,
                                YPosition *yposition,
                                 MileageSensor *mileagesensor);
        ~ScenarioCurveLineTracer();

        void run();
        void init(float param[]);
        float calcdistance(float cx,float cy,float sx,float sy);
        void setPosition(float x,float y);


    private:
        float mx;
        float my;
        float kp;
        float ki;
        float kd;
        float Speed;
        float target;
        


};

#endif


