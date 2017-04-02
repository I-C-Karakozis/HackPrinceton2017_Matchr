// This file was generated based on /Users/hdc/matchr/matchrapp/HackPrinceton2017_Matchr/matchr_signup/build/Android/Preview2/cache/ux11/MainPage.g.uno.
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
namespace g{namespace Fuse{namespace Controls{struct PageControl;}}}
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Fuse{namespace Controls{struct Rectangle;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct MainPage;}

namespace g{

// public partial sealed class MainPage :2
// {
::g::Fuse::Controls::Control_type* MainPage_typeof();
void MainPage__ctor_8_fn(MainPage* __this, ::g::Fuse::Navigation::Router* router1);
void MainPage__InitializeUX_fn(MainPage* __this);
void MainPage__New5_fn(::g::Fuse::Navigation::Router* router1, MainPage** __retval);

struct MainPage : ::g::Fuse::Controls::Page
{
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return MainPage_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return MainPage_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector10_;
    static ::g::Uno::UX::Selector& __selector10() { return MainPage_typeof()->Init(), __selector10_; }
    static ::g::Uno::UX::Selector __selector11_;
    static ::g::Uno::UX::Selector& __selector11() { return MainPage_typeof()->Init(), __selector11_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return MainPage_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return MainPage_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return MainPage_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return MainPage_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return MainPage_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return MainPage_typeof()->Init(), __selector7_; }
    static ::g::Uno::UX::Selector __selector8_;
    static ::g::Uno::UX::Selector& __selector8() { return MainPage_typeof()->Init(), __selector8_; }
    static ::g::Uno::UX::Selector __selector9_;
    static ::g::Uno::UX::Selector& __selector9() { return MainPage_typeof()->Init(), __selector9_; }
    uStrong< ::g::Fuse::Controls::Rectangle*> indicator;
    uStrong< ::g::Uno::UX::Property1*> indicator_Element_LayoutMaster_inst;
    uStrong< ::g::Fuse::Controls::PageControl*> navigation;
    uStrong< ::g::Uno::UX::Property1*> navigation_Active_inst;
    uStrong< ::g::Fuse::Controls::Page*> page1;
    uStrong< ::g::Fuse::Controls::Panel*> page1Tab;
    uStrong< ::g::Fuse::Controls::Page*> page2;
    uStrong< ::g::Fuse::Controls::Panel*> page2Tab;
    uStrong< ::g::Fuse::Controls::Page*> page3;
    uStrong< ::g::Fuse::Controls::Panel*> page3Tab;
    uStrong< ::g::Fuse::Controls::Page*> page4;
    uStrong< ::g::Fuse::Controls::Panel*> page4Tab;
    uStrong< ::g::Fuse::Navigation::Router*> router;

    void ctor_8(::g::Fuse::Navigation::Router* router1);
    void InitializeUX();
    static MainPage* New5(::g::Fuse::Navigation::Router* router1);
};
// }

} // ::g
