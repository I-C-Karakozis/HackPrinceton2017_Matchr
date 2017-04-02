// This file was generated based on '/Users/hdc/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.46.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Navigation.EnterExitAnimation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Navigation{struct ExitingAnimation;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public class ExitingAnimation :1310
// {
::g::Fuse::Navigation::NavigationAnimation_type* ExitingAnimation_typeof();
void ExitingAnimation__ctor_7_fn(ExitingAnimation* __this);
void ExitingAnimation__New2_fn(ExitingAnimation** __retval);

struct ExitingAnimation : ::g::Fuse::Navigation::EnterExitAnimation
{
    void ctor_7();
    static ExitingAnimation* New2();
};
// }

}}} // ::g::Fuse::Navigation
