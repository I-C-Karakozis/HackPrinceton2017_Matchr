// This file was generated based on /Users/hdc/Downloads/matchr_signup/build/Android/Preview/cache/ux11/NavBarTitleChat.g.uno.
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
namespace g{struct NavBarTitleChat;}

namespace g{

// public partial sealed class NavBarTitleChat :2
// {
::g::Fuse::Controls::TextControl_type* NavBarTitleChat_typeof();
void NavBarTitleChat__ctor_8_fn(NavBarTitleChat* __this);
void NavBarTitleChat__InitializeUX_fn(NavBarTitleChat* __this);
void NavBarTitleChat__New4_fn(NavBarTitleChat** __retval);

struct NavBarTitleChat : ::g::Fuse::Controls::Text
{
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return NavBarTitleChat_typeof()->Init(), __selector0_; }
    uStrong< ::g::Uno::UX::Property1*> this_Opacity_inst;

    void ctor_8();
    void InitializeUX();
    static NavBarTitleChat* New4();
};
// }

} // ::g
