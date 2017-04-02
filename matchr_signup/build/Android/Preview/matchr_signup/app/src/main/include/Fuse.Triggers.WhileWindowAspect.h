// This file was generated based on '/Users/hdc/Library/Application Support/Fusetools/Packages/Fuse.Triggers/0.46.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.WindowSizeTrigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileWindowAspect;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public abstract class WhileWindowAspect :4428
// {
::g::Fuse::Triggers::WindowSizeTrigger_type* WhileWindowAspect_typeof();
void WhileWindowAspect__ctor_7_fn(WhileWindowAspect* __this);
void WhileWindowAspect__get_Aspect_fn(WhileWindowAspect* __this, float* __retval);

struct WhileWindowAspect : ::g::Fuse::Triggers::WindowSizeTrigger
{
    void ctor_7();
    float Aspect();
};
// }

}}} // ::g::Fuse::Triggers
