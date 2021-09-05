#include "YPosition.h"

YPosition::YPosition()
    :MySensor()
{

}

float YPosition::getValue()
{
    
        return mYPosition;
}    
 void YPosition::update(float y)
 {
        mYPosition=y;

 }
