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
#include "XPosition.h"
#include "YPosition.h"
#include "MileageSensor.h"
#include "TurnAngSensor.h"
#include "LineTracer.h"
#include "ScenarioCurveLineTreacer.h"

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
Clock       gClock;
// オブジェクトの定義
 StageMgmt    *gStageMgmt;
 SectionMgmt  *gSectionMgmt;
 BrightnessSensor *gBrightnessSensor;
 MyColorSensor *gMyColorSensor;
 SimpleWalker *gSimpleWalker;
 WheelMotorMgmt *gWheelMotorMgmt;
 XPosition       *gXPosition;
 YPosition       *gYPosition;
 //SpeedSensor     *gSpeedSensor;
 TurnAngSensor   *gTurnAngSensor;
 MileageSensor   *gMileageSensor;
 LineTracer      *gLineTracer;
 ScenarioCurveLineTracer  *gScenarioCurveLineTracer;
 


 //* EV3システム生成
 
static void user_system_create() {
    // [TODO] タッチセンサの初期化に2msのdelayがあるため、ここで待つ
    tslp_tsk(2U * 1000U);

    // オブジェクトの作成
    gStageMgmt          = new StageMgmt();
    gSectionMgmt        = new SectionMgmt();
    gBrightnessSensor   = new BrightnessSensor();
    gMyColorSensor      = new MyColorSensor(gBrightnessSensor,gColorSensor);
    gWheelMotorMgmt     =new WheelMotorMgmt(gLeftWheel,gRightWheel);
    gSimpleWalker       =new SimpleWalker(gWheelMotorMgmt,gBrightnessSensor,gTurnAngSensor,gXPosition,gYPosition,gMileageSensor);
    gXPosition          =new XPosition();
    gYPosition          =new YPosition();
    gTurnAngSensor      =new TurnAngSensor();
    gMileageSensor      =new MileageSensor();
    gLineTracer         =new LineTracer(gWheelMotorMgmt,gBrightnessSensor, gTurnAngSensor,gSpeedSensor,gXPosition,gYPosition,gMileageSensor);
    gScenarioCurveLineTracer  =new ScenarioCurveLineTracer();

    
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
        gStageMgmt->run();  // 走行
    }
    
    ext_tsk();

}

void sensor_task(intptr_t exinf){
    gMyColorSensor->update();
    
    ext_tsk();

}

