// This file was generated based on /Users/hdc/Downloads/matchr_signup/build/Android/Preview/cache/ux11/matchr_signup.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct TextInputControl;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct matchr_signup_FuseControlsTextInputControl_Value_Property;}

namespace g{

// internal sealed class matchr_signup_FuseControlsTextInputControl_Value_Property :19
// {
::g::Uno::UX::Property1_type* matchr_signup_FuseControlsTextInputControl_Value_Property_typeof();
void matchr_signup_FuseControlsTextInputControl_Value_Property__ctor_2_fn(matchr_signup_FuseControlsTextInputControl_Value_Property* __this, ::g::Fuse::Controls::TextInputControl* obj, ::g::Uno::UX::Selector* name);
void matchr_signup_FuseControlsTextInputControl_Value_Property__Get_fn(matchr_signup_FuseControlsTextInputControl_Value_Property* __this, uString** __retval);
void matchr_signup_FuseControlsTextInputControl_Value_Property__New1_fn(::g::Fuse::Controls::TextInputControl* obj, ::g::Uno::UX::Selector* name, matchr_signup_FuseControlsTextInputControl_Value_Property** __retval);
void matchr_signup_FuseControlsTextInputControl_Value_Property__get_Object_fn(matchr_signup_FuseControlsTextInputControl_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void matchr_signup_FuseControlsTextInputControl_Value_Property__Set_fn(matchr_signup_FuseControlsTextInputControl_Value_Property* __this, uString* v, uObject* origin);
void matchr_signup_FuseControlsTextInputControl_Value_Property__get_SupportsOriginSetter_fn(matchr_signup_FuseControlsTextInputControl_Value_Property* __this, bool* __retval);

struct matchr_signup_FuseControlsTextInputControl_Value_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::TextInputControl*> _obj;

    void ctor_2(::g::Fuse::Controls::TextInputControl* obj, ::g::Uno::UX::Selector name);
    static matchr_signup_FuseControlsTextInputControl_Value_Property* New1(::g::Fuse::Controls::TextInputControl* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
