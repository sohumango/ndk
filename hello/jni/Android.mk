LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := hi
LOCAL_SRC_FILES := hello.cpp
LOCAL_CPPFLAGS := -std=gnu++0x -Wall -fPIE         # whatever g++ flags you like
LOCAL_LDLIBS := -L$(SYSROOT)/usr/lib -llog -fPIE -pie   # whatever ld flags you like

include $(BUILD_EXECUTABLE)