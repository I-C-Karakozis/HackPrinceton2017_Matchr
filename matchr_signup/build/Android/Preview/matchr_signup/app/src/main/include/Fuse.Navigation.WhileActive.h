// This file was generated based on '/Users/hdc/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.46.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Navigation.WhileNavigationTrigger.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigationArgs;}}}
namespace g{namespace Fuse{namespace Navigation{struct WhileActive;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class WhileActive :4863
// {
::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileActive_typeof();
void WhileActive__ctor_7_fn(WhileActive* __this);
void WhileActive__ForceUpdate_fn(WhileActive* __this);
void WhileActive__InvertProgress_fn(WhileActive* __this, double* p, double* __retval);
void WhileActive__New2_fn(WhileActive** __retval);
void WhileActive__OnNavigationStateChanged_fn(WhileActive* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state);

struct WhileActive : ::g::Fuse::Navigation::WhileNavigationTrigger
{
    void ctor_7();
    double InvertProgress(double p);
    static WhileActive* New2();
};
// }

}}} // ::g::Fuse::Navigation