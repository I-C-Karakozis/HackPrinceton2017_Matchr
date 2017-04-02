// This file was generated based on /Users/hdc/matchr/matchrapp/HackPrinceton2017_Matchr/matchr_signup/build/Android/Preview2/cache/ux11/chatPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct chatPage;}
namespace g{struct chatPage__Template1;}

namespace g{

// public partial sealed class chatPage.Template1 :110
// {
::g::Uno::UX::Template_type* chatPage__Template1_typeof();
void chatPage__Template1__ctor_1_fn(chatPage__Template1* __this, ::g::chatPage* parent, ::g::chatPage* parentInstance);
void chatPage__Template1__New1_fn(chatPage__Template1* __this, uObject** __retval);
void chatPage__Template1__New2_fn(::g::chatPage* parent, ::g::chatPage* parentInstance, chatPage__Template1** __retval);

struct chatPage__Template1 : ::g::Uno::UX::Template
{
    uWeak< ::g::chatPage*> __parent1;
    uWeak< ::g::chatPage*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return chatPage__Template1_typeof()->Init(), __selector0_; }

    void ctor_1(::g::chatPage* parent, ::g::chatPage* parentInstance);
    static chatPage__Template1* New2(::g::chatPage* parent, ::g::chatPage* parentInstance);
};
// }

} // ::g
