// This file was generated based on /Users/hdc/matchr/matchrapp/HackPrinceton2017_Matchr/matchr_signup/build/Android/Preview1/cache/ux11/profilePage.g.uno.
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
namespace g{namespace Fuse{namespace Controls{struct Image;}}}
namespace g{namespace Fuse{namespace Controls{struct MultiLayoutPanel;}}}
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Fuse{namespace Controls{struct Placeholder;}}}
namespace g{namespace Fuse{namespace Controls{struct StackPanel;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace iOS{struct StatusBarConfig;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct profilePage;}
namespace g{struct TitleText;}

namespace g{

// public partial sealed class profilePage :2
// {
::g::Fuse::Controls::Control_type* profilePage_typeof();
void profilePage__ctor_8_fn(profilePage* __this);
void profilePage__InitializeUX_fn(profilePage* __this);
void profilePage__New5_fn(profilePage** __retval);

struct profilePage : ::g::Fuse::Controls::Page
{
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return profilePage_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return profilePage_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector10_;
    static ::g::Uno::UX::Selector& __selector10() { return profilePage_typeof()->Init(), __selector10_; }
    static ::g::Uno::UX::Selector __selector11_;
    static ::g::Uno::UX::Selector& __selector11() { return profilePage_typeof()->Init(), __selector11_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return profilePage_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return profilePage_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return profilePage_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return profilePage_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return profilePage_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return profilePage_typeof()->Init(), __selector7_; }
    static ::g::Uno::UX::Selector __selector8_;
    static ::g::Uno::UX::Selector& __selector8() { return profilePage_typeof()->Init(), __selector8_; }
    static ::g::Uno::UX::Selector __selector9_;
    static ::g::Uno::UX::Selector& __selector9() { return profilePage_typeof()->Init(), __selector9_; }
    uStrong< ::g::Fuse::Controls::Panel*> backgroundPicture;
    uStrong< ::g::TitleText*> bottomText;
    uStrong< ::g::Uno::UX::Property1*> bottomText_Opacity_inst;
    uStrong< ::g::Fuse::Controls::Image*> facePicture;
    uStrong< ::g::Fuse::Controls::MultiLayoutPanel*> headerPanel;
    uStrong< ::g::Uno::UX::Property1*> headerPanel_LayoutElement_inst;
    uStrong< ::g::Fuse::Controls::Placeholder*> overBackgroundLayout;
    uStrong< ::g::Fuse::iOS::StatusBarConfig*> statusBarConfig;
    uStrong< ::g::Uno::UX::Property1*> statusBarConfig_Style_inst;
    uStrong< ::g::Fuse::Controls::StackPanel*> textPanel;
    uStrong< ::g::TitleText*> topText;
    uStrong< ::g::Fuse::Controls::Placeholder*> underBackgroundLayout;

    void ctor_8();
    void InitializeUX();
    static profilePage* New5();
};
// }

} // ::g
