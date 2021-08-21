#include"SelfPosEst.h"


//自己位置計算
void SelfPosEst::SelfPosCalc(){

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
	sumlen += (len_r+len_l)/2.0;

}