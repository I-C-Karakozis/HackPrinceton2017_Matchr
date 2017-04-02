#!/bin/sh
# This file was generated based on '/Users/hdc/Library/Application Support/Fusetools/Packages/UnoCore/0.46.1/targets/android/log.sh'.
# WARNING: Changes might be lost if you edit this file directly.
ADB_PATH="/Users/hdc/Library/Android/sdk/platform-tools/adb"
$ADB_PATH devices | head -n 2 | tail -n 1 | cut -sf 1 | xargs -I {} $ADB_PATH -s {} logcat -s "Debug","dalvik","error","Error","XliApp","Xli","DEBUG","System.err","BufferQueue","AndroidRuntime","LogSvc","Adreno-ES20","Adreno-EGL","libEGL","BDWGC","art","OpenGLRenderer","HardwareRenderer","matchr_signup"
