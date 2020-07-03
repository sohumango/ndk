#include "hello.h"
#include <stdio.h>

JNIEXPORT jint JNICALL Java_jp_co_normee_palmvein_funA(JNIEnv *, jobject,
                                                       jint) {
    printf("hello world\n");
    return 0;
}
