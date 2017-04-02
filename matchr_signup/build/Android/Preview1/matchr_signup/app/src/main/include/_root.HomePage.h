// This file was generated based on /Users/hdc/matchr/matchrapp/HackPrinceton2017_Matchr/matchr_signup/build/Android/Preview1/cache/ux11/HomePage.g.uno.
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
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Fuse{struct Font;}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{struct HomePage;}

namespace g{

// public partial sealed class HomePage :2
// {
::g::Fuse::Controls::Control_type* HomePage_typeof();
void HomePage__ctor_8_fn(HomePage* __this, ::g::Fuse::Navigation::Router* router1);
void HomePage__InitializeUX_fn(HomePage* __this);
void HomePage__New5_fn(::g::Fuse::Navigation::Router* router1, HomePage** __retval);

struct HomePage : ::g::Fuse::Controls::Page
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return HomePage_typeof()->Init(), __g_static_nametable1_; }
    static uSStrong< ::g::Fuse::Font*> Comfortaa_;
    static uSStrong< ::g::Fuse::Font*>& Comfortaa() { return HomePage_typeof()->Init(), Comfortaa_; }
    static uSStrong< ::g::Fuse::Font*> ComfortaaBold_;
    static uSStrong< ::g::Fuse::Font*>& ComfortaaBold() { return HomePage_typeof()->Init(), ComfortaaBold_; }
    uStrong< ::g::Fuse::Navigation::Router*> router;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb0;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb1;

    void ctor_8(::g::Fuse::Navigation::Router* router1);
    void InitializeUX();
    static HomePage* New5(::g::Fuse::Navigation::Router* router1);
};
// }

} // ::g
