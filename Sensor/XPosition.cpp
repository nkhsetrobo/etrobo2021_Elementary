#include "XPosition.h"
#include "ev3api.h"

XPosition::XPosition()
  :MySensor()
{

}

float XPosition::getValue()

{
  //printf("mXPosition %f\n",mXPosition);
    return mXPosition;
}


void XPosition::update(float x)
{
    
    mXPosition=x;

}

   









