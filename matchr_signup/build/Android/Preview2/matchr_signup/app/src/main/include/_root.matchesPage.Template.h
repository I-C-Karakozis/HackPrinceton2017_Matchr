// This file was generated based on /Users/hdc/matchr/matchrapp/HackPrinceton2017_Matchr/matchr_signup/build/Android/Preview2/cache/ux11/matchesPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct matchesPage;}
namespace g{struct matchesPage__Template;}

namespace g{

// public partial sealed class matchesPage.Template :5
// {
::g::Uno::UX::Template_type* matchesPage__Template_typeof();
void matchesPage__Template__ctor_1_fn(matchesPage__Template* __this, ::g::matchesPage* parent, ::g::matchesPage* parentInstance);
void matchesPage__Template__New1_fn(matchesPage__Template* __this, uObject** __retval);
void matchesPage__Template__New2_fn(::g::matchesPage* parent, ::g::matchesPage* parentInstance, matchesPage__Template** __retval);

struct matchesPage__Template : ::g::Uno::UX::Template
{
    uWeak< ::g::matchesPage*> __parent1;
    uWeak< ::g::matchesPage*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return matchesPage__Template_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return matchesPage__Template_typeof()->Init(), __selector1_; }
    uStrong< ::g::Uno::UX::Property1*> temp_Items_inst;

    void ctor_1(::g::matchesPage* parent, ::g::matchesPage* parentInstance);
    static matchesPage__Template* New2(::g::matchesPage* parent, ::g::matchesPage* parentInstance);
};
// }

} // ::g
