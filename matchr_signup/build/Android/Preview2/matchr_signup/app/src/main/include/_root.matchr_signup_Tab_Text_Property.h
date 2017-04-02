// This file was generated based on /Users/hdc/matchr/matchrapp/HackPrinceton2017_Matchr/matchr_signup/build/Android/Preview2/cache/ux11/matchr_signup.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct matchr_signup_Tab_Text_Property;}
namespace g{struct Tab;}

namespace g{

// internal sealed class matchr_signup_Tab_Text_Property :46
// {
::g::Uno::UX::Property1_type* matchr_signup_Tab_Text_Property_typeof();
void matchr_signup_Tab_Text_Property__ctor_2_fn(matchr_signup_Tab_Text_Property* __this, ::g::Tab* obj, ::g::Uno::UX::Selector* name);
void matchr_signup_Tab_Text_Property__Get_fn(matchr_signup_Tab_Text_Property* __this, uString** __retval);
void matchr_signup_Tab_Text_Property__New1_fn(::g::Tab* obj, ::g::Uno::UX::Selector* name, matchr_signup_Tab_Text_Property** __retval);
void matchr_signup_Tab_Text_Property__get_Object_fn(matchr_signup_Tab_Text_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void matchr_signup_Tab_Text_Property__Set_fn(matchr_signup_Tab_Text_Property* __this, uString* v, uObject* origin);
void matchr_signup_Tab_Text_Property__get_SupportsOriginSetter_fn(matchr_signup_Tab_Text_Property* __this, bool* __retval);

struct matchr_signup_Tab_Text_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Tab*> _obj;

    void ctor_2(::g::Tab* obj, ::g::Uno::UX::Selector name);
    static matchr_signup_Tab_Text_Property* New1(::g::Tab* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
