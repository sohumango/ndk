/*

   clang he.c -L. -lfoo

*/
#include <stdio.h>
#include "foo.h"


int main(int argc, char *argv[]) {
    printf("hello3\n");
    foo();
    return 0;
}
/*
export NDK=/Users/wang/Library/Android/sdk/ndk
//$NDK/21.0.6113669/toolchains/llvm/prebuilt/darwin-x86_64/bin/x86_64-linux-android21-clang
$NDK/21.0.6113669/toolchains/llvm/prebuilt/darwin-x86_64/bin/i686-linux-android21-clang
$NDK/build/tools/make_standalone_toolchain.py --arch x86_64 --api 21
--install-dir $NDK/toolchains/x86_64-4.9/prebuilt/darwin-x86_64/bin/
*/
