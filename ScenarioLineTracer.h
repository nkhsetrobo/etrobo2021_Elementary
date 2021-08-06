#ifndef SCENARIO_LINETRACER_H_
#define SCENARIO_LINETRACER_H_

class ScenarioLineTracer : public SimpleWalker{

    public:
        void run();
        void init();

    private:
       float kp;
       float ki;
       float kd; 
};



#endif