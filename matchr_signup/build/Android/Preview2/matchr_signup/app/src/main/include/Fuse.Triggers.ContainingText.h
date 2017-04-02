// This file was generated based on '/Users/hdc/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.46.1/triggers/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.WhileContainsText.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Triggers{struct ContainingText;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class ContainingText :75
// {
::g::Fuse::Triggers::Trigger_type* ContainingText_typeof();
void ContainingText__ctor_7_fn(ContainingText* __this);
void ContainingText__New3_fn(ContainingText** __retval);

struct ContainingText : ::g::Fuse::Triggers::WhileContainsText
{
    void ctor_7();
    static ContainingText* New3();
};
// }

}}} // ::g::Fuse::Triggers
