// This file was generated based on /Users/hdc/matchr/matchrapp/matchr_signup/build/Android/Preview2/cache/ux11/SignUpPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Page.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct SignUpPage;}

namespace g{

// public partial sealed class SignUpPage :2
// {
::g::Fuse::Controls::Control_type* SignUpPage_typeof();
void SignUpPage__ctor_8_fn(SignUpPage* __this, ::g::Fuse::Navigation::Router* router1);
void SignUpPage__InitializeUX_fn(SignUpPage* __this);
void SignUpPage__New5_fn(::g::Fuse::Navigation::Router* router1, SignUpPage** __retval);

struct SignUpPage : ::g::Fuse::Controls::Page
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return SignUpPage_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return SignUpPage_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return SignUpPage_typeof()->Init(), __selector1_; }
    uStrong< ::g::Fuse::Navigation::Router*> router;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb3;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb4;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp4_Value_inst;
    uStrong< ::g::Fuse::Controls::Panel*> transitionScaleGuide;

    void ctor_8(::g::Fuse::Navigation::Router* router1);
    void InitializeUX();
    static SignUpPage* New5(::g::Fuse::Navigation::Router* router1);
};
// }

} // ::g
