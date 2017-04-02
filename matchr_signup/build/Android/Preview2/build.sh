#!/bin/sh
# This file was generated based on '/Users/hdc/Library/Application Support/Fusetools/Packages/UnoCore/0.46.1/targets/android/build.sh'.
# WARNING: Changes might be lost if you edit this file directly.
set -e
cd "`dirname "$0"`/matchr_signup/app/src/main"

##if #(JDK.Directory:IsSet)
export JAVA_HOME="/Library/Java/JavaVirtualMachines/jdk1.8.0_77.jdk/Contents/Home"
##endif

##if #(Ant.Directory:IsSet)
PATH="/Users/hdc/Library/Android/Ant/bin:$PATH"
##endif

echo "## 1/2: libmatchr_signup.so"

if [ -f /proc/cpuinfo ]; then
    JOB_COUNT=`grep processor /proc/cpuinfo | wc -l`
else
    JOB_COUNT=`sysctl hw.ncpu | cut -d " " -f 2`
fi

./makew -s -j $JOB_COUNT "$@"

echo ""
echo "## 2/2: matchr_signup.apk"

if ! which ant > /dev/null 2>&1; then
    echo "ERROR: 'ant' was not found." >&2
    exit 1
fi

ant debug

cd "`dirname "$0"`"
ln -sf matchr_signup/app/src/main/bin/matchr_signup-debug.apk matchr_signup.apk
