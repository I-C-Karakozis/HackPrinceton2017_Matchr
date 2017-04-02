// This file was generated based on /Users/hdc/matchr/matchrapp/HackPrinceton2017_Matchr/matchr_signup/build/Android/Preview1/cache/ux11/chatPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct chatPage;}
namespace g{struct chatPage__Template;}

namespace g{

// public partial sealed class chatPage.Template :5
// {
::g::Uno::UX::Template_type* chatPage__Template_typeof();
void chatPage__Template__ctor_1_fn(chatPage__Template* __this, ::g::chatPage* parent, ::g::chatPage* parentInstance);
void chatPage__Template__New1_fn(chatPage__Template* __this, uObject** __retval);
void chatPage__Template__New2_fn(::g::chatPage* parent, ::g::chatPage* parentInstance, chatPage__Template** __retval);

struct chatPage__Template : ::g::Uno::UX::Template
{
    uWeak< ::g::chatPage*> __parent1;
    uWeak< ::g::chatPage*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return chatPage__Template_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return chatPage__Template_typeof()->Init(), __selector1_; }
    uStrong< ::g::Uno::UX::Property1*> temp_Items_inst;

    void ctor_1(::g::chatPage* parent, ::g::chatPage* parentInstance);
    static chatPage__Template* New2(::g::chatPage* parent, ::g::chatPage* parentInstance);
};
// }

} // ::g
