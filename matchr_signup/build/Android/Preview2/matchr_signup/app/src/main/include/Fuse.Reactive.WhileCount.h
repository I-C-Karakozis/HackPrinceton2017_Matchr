// This file was generated based on '/Users/hdc/Library/Application Support/Fusetools/Packages/Fuse.Reactive/0.46.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IObserver.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.WhileTrigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Int2.h>
namespace g{namespace Fuse{namespace Reactive{struct WhileCount;}}}
namespace g{namespace Fuse{namespace Scripting{struct ListMirror;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public class WhileCount :2415
// {
struct WhileCount_type : ::g::Fuse::Triggers::Trigger_type
{
    ::g::Fuse::Scripting::IObserver interface6;
};

WhileCount_type* WhileCount_typeof();
void WhileCount__ctor_6_fn(WhileCount* __this);
void WhileCount__Assess_fn(WhileCount* __this, int* count);
void WhileCount__get_EqualTo_fn(WhileCount* __this, int* __retval);
void WhileCount__set_EqualTo_fn(WhileCount* __this, int* value);
void WhileCount__FuseScriptingIObserverOnAdd_fn(WhileCount* __this, uObject* addedValue);
void WhileCount__FuseScriptingIObserverOnClear_fn(WhileCount* __this);
void WhileCount__FuseScriptingIObserverOnFailed_fn(WhileCount* __this, uString* message);
void WhileCount__FuseScriptingIObserverOnInsertAt_fn(WhileCount* __this, int* index, uObject* value);
void WhileCount__FuseScriptingIObserverOnNewAll_fn(WhileCount* __this, ::g::Fuse::Scripting::ListMirror* values);
void WhileCount__FuseScriptingIObserverOnNewAt_fn(WhileCount* __this, int* index, uObject* value);
void WhileCount__FuseScriptingIObserverOnRemoveAt_fn(WhileCount* __this, int* index);
void WhileCount__FuseScriptingIObserverOnSet_fn(WhileCount* __this, uObject* newValue);
void WhileCount__get_GreaterThan_fn(WhileCount* __this, int* __retval);
void WhileCount__set_GreaterThan_fn(WhileCount* __this, int* value);
void WhileCount__get_GreaterThanEqual_fn(WhileCount* __this, int* __retval);
void WhileCount__set_GreaterThanEqual_fn(WhileCount* __this, int* value);
void WhileCount__IsOn_fn(WhileCount* __this, int* count, bool* __retval);
void WhileCount__get_Items_fn(WhileCount* __this, uObject** __retval);
void WhileCount__set_Items_fn(WhileCount* __this, uObject* value);
void WhileCount__get_LessThan_fn(WhileCount* __this, int* __retval);
void WhileCount__set_LessThan_fn(WhileCount* __this, int* value);
void WhileCount__get_LessThanEqual_fn(WhileCount* __this, int* __retval);
void WhileCount__set_LessThanEqual_fn(WhileCount* __this, int* value);
void WhileCount__New2_fn(WhileCount** __retval);
void WhileCount__OnItemsChanged_fn(WhileCount* __this);
void WhileCount__OnRooted_fn(WhileCount* __this);
void WhileCount__OnUnrooted_fn(WhileCount* __this);
void WhileCount__UpdateState_fn(WhileCount* __this);

struct WhileCount : ::g::Fuse::Triggers::WhileTrigger
{
    ::g::Uno::Int2 _compare;
    int _high;
    uStrong<uObject*> _items;
    int _low;
    int _oldCount;
    uStrong<uObject*> _subscription;

    void ctor_6();
    void Assess(int count);
    int EqualTo();
    void EqualTo(int value);
    int GreaterThan();
    void GreaterThan(int value);
    int GreaterThanEqual();
    void GreaterThanEqual(int value);
    bool IsOn(int count);
    uObject* Items();
    void Items(uObject* value);
    int LessThan();
    void LessThan(int value);
    int LessThanEqual();
    void LessThanEqual(int value);
    void OnItemsChanged();
    void UpdateState();
    static WhileCount* New2();
};
// }

}}} // ::g::Fuse::Reactive
