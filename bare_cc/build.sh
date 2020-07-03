#!/bin/bash
NDK="/Users/wang/Library/Android/sdk/ndk"
clang="$NDK/21.0.6113669/toolchains/llvm/prebuilt/darwin-x86_64/bin/x86_64-linux-android21-clang"

[ -f $clang ] && $clang -shared -fPIC  foo.c -o libfoo.so || gcc -shared -fPIC  foo.c -o libfoo.so
[ -f $clang ] && $clang  he.c -o he -L. -lfoo || gcc he.c -o he  -L. -lfoo 