#ifndef PID_H_
#define PID_H_

class PID : public Walker {
        public:
                PID();
                ~PID();
                float getOperationQuantity();
        
        private:
                float kp;
                float ki;
                float kd;
                float target_value;
};

#endif