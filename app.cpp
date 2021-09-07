/******************************************************************************
 *  app.cpp (for LEGO Mindstorms EV3)
 *  Created on: 2015/01/25
 *  Implementation of the Task main_task
 *  Author: Kazuhiro.Kawachi
 *  Copyright (c) 2015 Embedded Technology Software Design Robot Contest
 *****************************************************************************/

#include "app.h"
#include "StageMgmt.h"
#include "ColorSensor.h"
#include "TouchSensor.h"
#include "Motor.h"
#include "Clock.h"

#include "BrightnessSensor.h"
#include "MyColorSensor.h"
#include "MySensor.h"
#include "SectionMgmt.h"
#include "SimpleWalker.h"
#include "WheelMotorMgmt.h"
#include "ArmTailMotorMgmt.h"
#include "XPosition.h"
#include "YPosition.h"
#include "MileageSensor.h"
#include "TurnAngSensor.h"
#include "LineTracer.h"
#include "ScenarioCurveLineTracer.h"
#include "SelfPosEst.h"
//#include "PID.h"

#include "MileageConditions.h"
#include "ArmAngConditions.h"
#include "TailAngConditions.h"
#include "TurnAngConditions.h"

#include "SpeedCourse.h"
#include "SlalomA.h"
#include "SlalomB.h"
#include "Derailing.h"
#include "ArmAngSensor.h"

#include "ArmWalker.h"
//#include "TailAngSensor.h"


// デストラクタ問題の回避
// https://github.com/ETrobocon/etroboEV3/wiki/problem_and_coping
void *__dso_handle=0;

// using宣言
using ev3api::ColorSensor;
using ev3api::TouchSensor;
using ev3api::Motor;
using ev3api::Clock;

// Device objects
// オブジェクトを静的に確保する
ColorSensor gColorSensor(PORT_2);
TouchSensor gTouchSensor(PORT_1);
Motor       gLeftWheel(PORT_C);
Motor       gRightWheel(PORT_B);
Motor       gArmMotor(PORT_A);
Clock       gClock;
// オブジェクトの定義
 StageMgmt    *gStageMgmt;
 WheelMotorMgmt *gWheelMotorMgmt;
 BrightnessSensor *gBrightnessSensor;
 MyColorSensor *gMyColorSensor;
 SimpleWalker *gSimpleWalker;
 ArmTailMotorMgmt *gArmTailMotorMgmt;
 XPosition       *gXPosition;
 YPosition       *gYPosition;
 //SpeedSensor     *gSpeedSensor;
 TurnAngSensor   *gTurnAngSensor;
 MileageSensor   *gMileageSensor;
 LineTracer      *gLineTracer;
 ScenarioCurveLineTracer  *gScenarioCurveLineTracer;
 SelfPosEst     *gSelfPosEst;
 ArmAngSensor   *gArmAngSensor;
 TailAngSensor  *gTailAngSensor;

 ArmWalker      *gArmWalker;

  //判定クラスの定義

 MileageConditions    *gMileageConditions;
 TurnAngConditions    *gTurnAngConditions;
 ArmAngConditions     *gArmAngConditions;
 TailAngConditions    *gTailAngConditions;

 //区間クラスの定義
 SectionMgmt         *gSectionMgmt;
 SectionRun          *gSectionRun;
 SpeedCourse         *gSpeedCourse;
 SlalomA             *gSlalomA;
 SlalomB             *gSlalomB;
 Derailing           *gDerailing;

 


 //* EV3システム生成
 
static void user_system_create() {
  gArmWalker    = new ArmWalker(gArmMotor);

    // [TODO] タッチセンサの初期化に2msのdelayがあるため、ここで待つ
    tslp_tsk(2U * 1000U);

    // オブジェクトの作成
    gStageMgmt          = new StageMgmt();
    gBrightnessSensor   = new BrightnessSensor();
    gMyColorSensor      = new MyColorSensor(gBrightnessSensor,gColorSensor);
    gWheelMotorMgmt     =new WheelMotorMgmt(gLeftWheel,gRightWheel);
    gArmTailMotorMgmt   =new ArmTailMotorMgmt(gArmMotor,gArmAngSensor);
    gSimpleWalker       =new SimpleWalker(gWheelMotorMgmt,gBrightnessSensor,gArmTailMotorMgmt, gXPosition,gYPosition,gMileageSensor,gTurnAngSensor,gArmAngSensor,gTailAngSensor);
    gXPosition          =new XPosition();
    gYPosition          =new YPosition();
    gTurnAngSensor      =new TurnAngSensor();
    gMileageSensor      =new MileageSensor();
    gLineTracer         =new LineTracer(gWheelMotorMgmt,gBrightnessSensor,gArmTailMotorMgmt, gXPosition,gYPosition,gMileageSensor,gTurnAngSensor,gArmAngSensor,gTailAngSensor);
    gScenarioCurveLineTracer  =new ScenarioCurveLineTracer(gWheelMotorMgmt,gBrightnessSensor,gArmTailMotorMgmt, gXPosition,gYPosition,gMileageSensor,gTurnAngSensor,gArmAngSensor,gTailAngSensor);
    gSelfPosEst         =new SelfPosEst(gMileageSensor,gXPosition,gYPosition,gTurnAngSensor,gWheelMotorMgmt);
    
    //gArmAngSensor       =new ArmAngSensor();
    //gTailAngSensor      =new TailAngSensor();
    // 判定_オブジェクトの作成 
     
    gMileageConditions           = new MileageConditions();
    gArmAngConditions            = new ArmAngConditions();
    gTailAngConditions           = new TailAngConditions();
    gTurnAngConditions           = new TurnAngConditions();

    // 区間_オブジェクトの作成
    gSectionMgmt                = new SectionMgmt();
    gSectionRun                 = new SectionRun();
    // gSpeedCourse                = new SpeedCourse();
    // gSlalomA                    = new SlalomA();
    // gSlalomB                    = new SlalomB();
    // gDerailing                  = new Derailing();
  


    // 初期化完了通知
    ev3_led_set_color(LED_ORANGE);
}


 //* EV3システム破棄
 
static void user_system_destroy() {
    gLeftWheel.reset();
    gRightWheel.reset();

    //delete gRandomWalker;
    delete gStageMgmt;
    delete gSectionMgmt;
}


 //* メインタスク
 
void main_task(intptr_t unused) {
    user_system_create();  // センサやモータの初期化処理

    // 周期ハンドラ開始
    sta_cyc(CYC_SENSOR);
    sta_cyc(CYC_TRACER);
    
    slp_tsk();  // バックボタンが押されるまで待つ

    // 周期ハンドラ停止
    stp_cyc(CYC_TRACER);
    sta_cyc(CYC_SENSOR);
    

    user_system_destroy();  // 終了処理

    ext_tsk();
}


 //* ライントレースタスク
 
void tracer_task(intptr_t exinf) {
    if (ev3_button_is_pressed(BACK_BUTTON)) {
        wup_tsk(MAIN_TASK);  // バックボタン押下
    } else {
        gArmWalker->setPWM(50);
        gArmWalker->run();
        gStageMgmt->run();  // 走行
        
    }
    
    ext_tsk();

}

void sensor_task(intptr_t exinf){
    gMyColorSensor->update();
    gSelfPosEst->update();
    
    ext_tsk();

}

