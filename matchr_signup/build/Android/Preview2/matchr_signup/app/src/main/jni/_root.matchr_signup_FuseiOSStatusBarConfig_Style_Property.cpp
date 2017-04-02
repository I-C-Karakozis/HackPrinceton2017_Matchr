// This file was generated based on /Users/hdc/matchr/matchrapp/HackPrinceton2017_Matchr/matchr_signup/build/Android/Preview2/cache/ux11/matchr_signup.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.matchr_signup_FuseiOSStatusBarConfig_Style_Property.h>
#include <Fuse.iOS.StatusBarConfig.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>

namespace g{

// internal sealed class matchr_signup_FuseiOSStatusBarConfig_Style_Property :91
// {
static void matchr_signup_FuseiOSStatusBarConfig_Style_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Platform::StatusBarStyle_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::iOS::StatusBarConfig_typeof(), offsetof(::g::matchr_signup_FuseiOSStatusBarConfig_Style_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* matchr_signup_FuseiOSStatusBarConfig_Style_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(matchr_signup_FuseiOSStatusBarConfig_Style_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("matchr_signup_FuseiOSStatusBarConfig_Style_Property", options);
    type->fp_build_ = matchr_signup_FuseiOSStatusBarConfig_Style_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))matchr_signup_FuseiOSStatusBarConfig_Style_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))matchr_signup_FuseiOSStatusBarConfig_Style_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))matchr_signup_FuseiOSStatusBarConfig_Style_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))matchr_signup_FuseiOSStatusBarConfig_Style_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public matchr_signup_FuseiOSStatusBarConfig_Style_Property(Fuse.iOS.StatusBarConfig obj, Uno.UX.Selector name) :94
void matchr_signup_FuseiOSStatusBarConfig_Style_Property__ctor_2_fn(matchr_signup_FuseiOSStatusBarConfig_Style_Property* __this, ::g::Fuse::iOS::StatusBarConfig* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed Fuse.Platform.StatusBarStyle Get() :96
void matchr_signup_FuseiOSStatusBarConfig_Style_Property__Get_fn(matchr_signup_FuseiOSStatusBarConfig_Style_Property* __this, int* __retval)
{
    uStackFrame __("matchr_signup_FuseiOSStatusBarConfig_Style_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Style(), void();
}

// public matchr_signup_FuseiOSStatusBarConfig_Style_Property New(Fuse.iOS.StatusBarConfig obj, Uno.UX.Selector name) :94
void matchr_signup_FuseiOSStatusBarConfig_Style_Property__New1_fn(::g::Fuse::iOS::StatusBarConfig* obj, ::g::Uno::UX::Selector* name, matchr_signup_FuseiOSStatusBarConfig_Style_Property** __retval)
{
    *__retval = matchr_signup_FuseiOSStatusBarConfig_Style_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :95
void matchr_signup_FuseiOSStatusBarConfig_Style_Property__get_Object_fn(matchr_signup_FuseiOSStatusBarConfig_Style_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Fuse.Platform.StatusBarStyle v, Uno.UX.IPropertyListener origin) :97
void matchr_signup_FuseiOSStatusBarConfig_Style_Property__Set_fn(matchr_signup_FuseiOSStatusBarConfig_Style_Property* __this, int* v, uObject* origin)
{
    uStackFrame __("matchr_signup_FuseiOSStatusBarConfig_Style_Property", "Set(Fuse.Platform.StatusBarStyle,Uno.UX.IPropertyListener)");
    int v_ = *v;
    uPtr(__this->_obj)->Style(v_);
}

// public override sealed bool get_SupportsOriginSetter() :98
void matchr_signup_FuseiOSStatusBarConfig_Style_Property__get_SupportsOriginSetter_fn(matchr_signup_FuseiOSStatusBarConfig_Style_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public matchr_signup_FuseiOSStatusBarConfig_Style_Property(Fuse.iOS.StatusBarConfig obj, Uno.UX.Selector name) [instance] :94
void matchr_signup_FuseiOSStatusBarConfig_Style_Property::ctor_2(::g::Fuse::iOS::StatusBarConfig* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public matchr_signup_FuseiOSStatusBarConfig_Style_Property New(Fuse.iOS.StatusBarConfig obj, Uno.UX.Selector name) [static] :94
matchr_signup_FuseiOSStatusBarConfig_Style_Property* matchr_signup_FuseiOSStatusBarConfig_Style_Property::New1(::g::Fuse::iOS::StatusBarConfig* obj, ::g::Uno::UX::Selector name)
{
    matchr_signup_FuseiOSStatusBarConfig_Style_Property* obj1 = (matchr_signup_FuseiOSStatusBarConfig_Style_Property*)uNew(matchr_signup_FuseiOSStatusBarConfig_Style_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
