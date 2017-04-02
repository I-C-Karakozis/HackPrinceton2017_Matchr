// This file was generated based on '/Users/hdc/Library/Application Support/Fusetools/Packages/Fuse.Triggers/0.46.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.IBusyHandler.h>
#include <Fuse.Triggers.WhileBusy.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileFailed;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileFailed :3546
// {
::g::Fuse::Triggers::WhileBusy_type* WhileFailed_typeof();
void WhileFailed__ctor_7_fn(WhileFailed* __this);
void WhileFailed__New3_fn(WhileFailed** __retval);

struct WhileFailed : ::g::Fuse::Triggers::WhileBusy
{
    void ctor_7();
    static WhileFailed* New3();
};
// }

}}} // ::g::Fuse::Triggers
