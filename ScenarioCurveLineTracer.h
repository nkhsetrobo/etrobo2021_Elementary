#ifndef SCENARIO_CURVE_LINE_TRACER_H_
#define SCENARIO_CURVE_LINE_TRACER_H_

class ScenarioCurveLineTracer : public SimpleWalker{
    public:
        void run();
        void init();

    private:
        float x;
        float y;
        float turn_half;
        float kp;
        float ki;
        float kd;

};

#endif


