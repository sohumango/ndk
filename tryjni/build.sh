#!/bin/bash
[ -d jni ] && ndk-build
javac jp/co/normee/palmvein.java
jar cf palmapi.jar ./jp/co/normee/*.class
javac -cp . Hello.java 
