#ifndef Y_POSITION_H_
#define Y_POSITION_H_

#include "MySensor.h"

class YPosition: public MySensor {
    public:
        YPosition();
        void update(float y);
        float getValue();
    private:
        float mYPosition;


};

#endif