#!/bin/sh
# This file was generated based on '/Users/hdc/Library/Application Support/Fusetools/Packages/UnoCore/0.46.1/targets/android/run.sh'.
# WARNING: Changes might be lost if you edit this file directly.
set -e
cd "`dirname "$0"`"

case $1 in
debug)
    echo "Opening Android Studio"
    open -a"Android Studio" "matchr_signup"
    exit $?
    ;;
uninstall)
    echo "Uninstalling com.apps.matchr_signup"
    /Applications/Fuse.app/Contents/Mono/bin/mono /Applications/Fuse.app/Contents/Uno/uno.exe adb uninstall "com.apps.matchr_signup"
    exit $?
    ;;
esac

/Applications/Fuse.app/Contents/Mono/bin/mono /Applications/Fuse.app/Contents/Uno/uno.exe launch-apk "matchr_signup.apk" \
    --package=com.apps.matchr_signup \
    --activity=matchr_signup \
    --sym-dir="matchr_signup/app/src/main/.uno" \
    "$@"
