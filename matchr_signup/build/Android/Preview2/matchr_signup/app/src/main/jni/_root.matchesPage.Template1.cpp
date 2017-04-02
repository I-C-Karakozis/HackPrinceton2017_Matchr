// This file was generated based on /Users/hdc/matchr/matchrapp/HackPrinceton2017_Matchr/matchr_signup/build/Android/Preview2/cache/ux11/matchesPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.matchesPage.h>
#include <_root.matchesPage.Template1.h>
#include <_root.SubPage.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Node.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];

namespace g{

// public partial sealed class matchesPage.Template1 :110
// {
// static Template1() :119
static void matchesPage__Template1__cctor__fn(uType* __type)
{
    matchesPage__Template1::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"subPage"*/]);
}

static void matchesPage__Template1_build(uType* type)
{
    ::STRINGS[0] = uString::Const("subPage");
    type->SetFields(2,
        ::g::matchesPage_typeof(), offsetof(::g::matchesPage__Template1, __parent1), uFieldFlagsWeak,
        ::g::matchesPage_typeof(), offsetof(::g::matchesPage__Template1, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::matchesPage__Template1::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)matchesPage__Template1__New2_fn, 0, true, type, 2, ::g::matchesPage_typeof(), ::g::matchesPage_typeof()));
}

::g::Uno::UX::Template_type* matchesPage__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(matchesPage__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("matchesPage.Template1", options);
    type->fp_build_ = matchesPage__Template1_build;
    type->fp_cctor_ = matchesPage__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))matchesPage__Template1__New1_fn;
    return type;
}

// public Template1(matchesPage parent, matchesPage parentInstance) :114
void matchesPage__Template1__ctor_1_fn(matchesPage__Template1* __this, ::g::matchesPage* parent, ::g::matchesPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :122
void matchesPage__Template1__New1_fn(matchesPage__Template1* __this, uObject** __retval)
{
    uStackFrame __("matchesPage.Template1", "New()");
    ::g::SubPage* self = ::g::SubPage::New5(uPtr(__this->__parent1)->navBar);
    self->Name(matchesPage__Template1::__selector0());
    return *__retval = self, void();
}

// public Template1 New(matchesPage parent, matchesPage parentInstance) :114
void matchesPage__Template1__New2_fn(::g::matchesPage* parent, ::g::matchesPage* parentInstance, matchesPage__Template1** __retval)
{
    *__retval = matchesPage__Template1::New2(parent, parentInstance);
}

::g::Uno::UX::Selector matchesPage__Template1::__selector0_;

// public Template1(matchesPage parent, matchesPage parentInstance) [instance] :114
void matchesPage__Template1::ctor_1(::g::matchesPage* parent, ::g::matchesPage* parentInstance)
{
    ctor_(::STRINGS[0/*"subPage"*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template1 New(matchesPage parent, matchesPage parentInstance) [static] :114
matchesPage__Template1* matchesPage__Template1::New2(::g::matchesPage* parent, ::g::matchesPage* parentInstance)
{
    matchesPage__Template1* obj1 = (matchesPage__Template1*)uNew(matchesPage__Template1_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
