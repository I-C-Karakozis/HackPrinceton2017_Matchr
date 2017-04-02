// This file was generated based on /Users/hdc/matchr/matchrapp/HackPrinceton2017_Matchr/matchr_signup/build/Android/Preview2/cache/ux11/NavBarTitle.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.String.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct NavBarTitle;}

namespace g{

// public partial sealed class NavBarTitle :2
// {
::g::Fuse::Controls::TextControl_type* NavBarTitle_typeof();
void NavBarTitle__ctor_8_fn(NavBarTitle* __this);
void NavBarTitle__InitializeUX_fn(NavBarTitle* __this);
void NavBarTitle__New4_fn(NavBarTitle** __retval);

struct NavBarTitle : ::g::Fuse::Controls::Text
{
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return NavBarTitle_typeof()->Init(), __selector0_; }
    uStrong< ::g::Uno::UX::Property1*> this_Opacity_inst;

    void ctor_8();
    void InitializeUX();
    static NavBarTitle* New4();
};
// }

} // ::g
