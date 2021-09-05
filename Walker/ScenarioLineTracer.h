#ifndef SCENARIO_LINETRACER_H_
#define SCENARIO_LINETRACER_H_

class ScenarioLineTracer : public SimpleWalker{

    public:
            ScenarioLineTracer(WheelMotorMgmt *motor,
                                 BrightnessSensor *brightness,
                                TurnAngSensor *turnagsensor,
                                XPosition *xposition,
                                YPosition *yposition,
                                 MileageSensor *mileagesensor);
        ~ScenarioLineTracer();

        void run();
        void init(float param[]);
        float calcdistance();
        void setPosition()); 
        void init();

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