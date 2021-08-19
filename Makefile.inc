mkfile_path := $(dir $(lastword $(MAKEFILE_LIST)))

APPL_CXXOBJS += \
	BrightnessMeter.o \
	MyColorSensor.o \
	Sensor.o /

SRCLANG := c++

ifdef CONFIG_EV3RT_APPLICATION

# Include libraries
include $(EV3RT_SDK_LIB_DIR)/libcpp-ev3/Makefile

endif

APPL_DIRS += $(mkfile_path)Sensor $(mkfile_path)unit

INCLUDES += \
	-I$(mkfile_path)Sensor \
	-I$(mkfile_path)unit
