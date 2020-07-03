#ifndef _Included_hello
#define _Included_hello

#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jint JNICALL Java_jp_co_normee_palmvein_funA(JNIEnv *, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif