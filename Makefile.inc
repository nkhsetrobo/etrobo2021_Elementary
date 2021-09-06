mkfile_path := $(dir $(lastword $(MAKEFILE_LIST)))

APPL_CXXOBJS += \
	StageMgmt.o \
	SectionMgmt.o \
	BrightnessSensor.o\
	MyColorSensor.o\
	MySensor.o\
	Walker.o\
	SimpleWalker.o\
	WheelMotorMgmt.o\
	SelfPosEst.o\
	MileageSensor.o\
	XPosition.o\
	YPosition.o\
	TurnAngSensor.o\
	PID.o\
	LineTracer.o\
	ScenarioCurveLineTracer.o\
	ArmAngConditions.o\
	judgement.o\
	MileageConditions.o\
	TailAngConditions.o\
	TurnAngConditions.o\
	Derailing.o\
	SectionRun.o\
	ArmAngSendor.o\
	TailAngSensor.o\
	ArmTailMotorMgmt.o


	

	
	
	



SRCLANG := c++

ifdef CONFIG_EV3RT_APPLICATION

# Include libraries
include $(EV3RT_SDK_LIB_DIR)/libcpp-ev3/Makefile

endif

APPL_DIRS +=$(mkfile_path)app  $(mkfile_path)Sensor $(mkfile_path)Walker $(mkfile_path)StageMgmt $(mkfile_path)Section  $(mkfile_path)judgement

INCLUDES += \
	-I$(mkfile_path)app \
	-I$(mkfile_path)Sensor \
	-I$(mkfile_path)Walker \
	-I$(mkfile_path)Section\
	-I$(mkfile_path)StageMgmt\
	-I$(mkfile_path)judgement





COPTS += -DMAKE_EV3
