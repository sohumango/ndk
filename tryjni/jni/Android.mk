LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := PalmCore
LOCAL_SRC_FILES := ../core/hello.cpp
LOCAL_CPPFLAGS := -std=gnu++0x -Wall   # whatever g++ flags you like
LOCAL_LDLIBS := -L$(SYSROOT)/usr/lib   # whatever ld flags you like

include $(BUILD_SHARED_LIBRARY)