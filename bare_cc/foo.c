/*

clang -shared -fPIC  foo.c -o libfoo.so

export NDK=/Users/wang/Library/Android/sdk/ndk
$NDK/21.0.6113669/toolchains/llvm/prebuilt/darwin-x86_64/bin/x86_64-linux-android21-clang
 */
#include "foo.h"
#include <stdio.h>

void foo() { printf("a foo\n"); }
