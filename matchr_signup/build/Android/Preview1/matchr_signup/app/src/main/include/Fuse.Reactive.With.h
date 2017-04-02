// This file was generated based on '/Users/hdc/Library/Application Support/Fusetools/Packages/Fuse.Reactive/0.46.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Reactive{struct With;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public class With :2729
// {
::g::Fuse::Triggers::Trigger_type* With_typeof();
void With__ctor_5_fn(With* __this);
void With__get_Data_fn(With* __this, uObject** __retval);
void With__set_Data_fn(With* __this, uObject* value);
void With__GetImplicitDataForChild_fn(With* __this, ::g::Fuse::Node* child, ::g::Uno::Collections::List* result);
void With__New2_fn(With** __retval);
void With__OnChanged_fn(With* __this);
void With__OnRooted_fn(With* __this);

struct With : ::g::Fuse::Triggers::Trigger
{
    uStrong<uObject*> _data;

    void ctor_5();
    uObject* Data();
    void Data(uObject* value);
    void OnChanged();
    static With* New2();
};
// }

}}} // ::g::Fuse::Reactive
