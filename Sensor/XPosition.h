#ifndef X_POSITION_H_
#define X_POSITION_H_

#include "MySensor.h"

class XPosition: public MySensor {
    public:
        XPosition();
        void update(float x);
        float getValue();
    private:
        float mXPosition;
};

#endif