#include"SelfPosEst.h"
#include "math.h"
#define M_PI 3.14159
#define D_LEFT 9.0
#define D_RIGHT 9.0
#define TREAD 14


//自己位置計算
SelfPosEst::SelfPosEst(MileageSensor *mileagesensor,
					 XPosition *xposition,
				 	YPosition *yposition,
				 	TurnAngSensor *turnagsensor,
					 WheelMotorMgmt *wheelmotormgmt)

	:mMileageSensor(mileagesensor),
	 mXPosition(xposition),
	 mYPosition(yposition),
	 mTurnAngSensor(turnagsensor),
	 mWheelMotorMgmt(wheelmotormgmt)
	{
	

}

void SelfPosEst::SelfPosCalc(float current_rs1,float current_rs2){

float rs1 = current_rs1;
	float rs2 = current_rs2;

	float drs1=rs1-prev_rs1;
	float drs2=rs2-prev_rs2;

	float len_l = drs1*M_PI*D_LEFT/360.0;
	float len_r = drs2*M_PI*D_RIGHT/360.0;
	float dth=(len_r-len_l)/TREAD;

	
	
	x+= (len_r+len_l)/2.0*cos(th+dth/2.0); //進行方向 X軸 0度方向
	y+= (len_r+len_l)/2.0*sin(th+dth/2.0); //横	

	th+=dth; // 左旋回＋、右旋回-
	len = (len_r+len_l)/2.0;
	sumlen +=len;

	prev_rs1=current_rs1;
	prev_rs2=current_rs2;

//printf("drs1 %f drs2 %f len_l%f len_r %f dth %f\n",drs1,drs2,len_l,len_r,dth);
//printf("x %f y %f th %f len %f sumlen %f prev_rs1 %f prev_rs2 %f\n",x,y,th,len,sumlen,prev_rs1,prev_rs2);


	//update用
	mMileageSensor->update(sumlen);
	//mSpeedSensor->update(len/10);
	mTurnAngSensor->update(th);
	mXPosition->update(x);
	mYPosition->update(y);
	
}

void SelfPosEst::update()
{

	float current_rs2=mWheelMotorMgmt->getRCount();
	float current_rs1=mWheelMotorMgmt->getLCount();
		
		 SelfPosCalc(current_rs1,current_rs2);
}
