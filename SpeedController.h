#ifndef SPEED_CONTROLLER_H_
#define SPEED_CONTROLLER_H_

class SpeedController : public Walker {
    public:
        SpeedController();
        ~SpeedContoller();
        int getAdvance();
    
    private:
        float target_speed;
};

#endif
