#ifndef OBJ_DIST_CONDITIONS
#define OBJ_DIST_CONDITIONS

#include "judgement.h"

class ObjDistConditions : public judgement{
    public:
        ObjDistConditions();
        ~ObjDistConditions();
        bool judge();
        void setParameter(float []);
        float getValue();
}
#endif