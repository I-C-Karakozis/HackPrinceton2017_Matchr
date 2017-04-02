// This file was generated based on /Users/hdc/matchr/matchrapp/HackPrinceton2017_Matchr/matchr_signup/build/Android/Preview2/cache/ux11/chatPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.chatPage.h>
#include <_root.chatPage.Template1.h>
#include <_root.SubPageChat.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Node.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];

namespace g{

// public partial sealed class chatPage.Template1 :110
// {
// static Template1() :119
static void chatPage__Template1__cctor__fn(uType* __type)
{
    chatPage__Template1::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"subPageChat"*/]);
}

static void chatPage__Template1_build(uType* type)
{
    ::STRINGS[0] = uString::Const("subPageChat");
    type->SetFields(2,
        ::g::chatPage_typeof(), offsetof(::g::chatPage__Template1, __parent1), uFieldFlagsWeak,
        ::g::chatPage_typeof(), offsetof(::g::chatPage__Template1, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::chatPage__Template1::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)chatPage__Template1__New2_fn, 0, true, type, 2, ::g::chatPage_typeof(), ::g::chatPage_typeof()));
}

::g::Uno::UX::Template_type* chatPage__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(chatPage__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("chatPage.Template1", options);
    type->fp_build_ = chatPage__Template1_build;
    type->fp_cctor_ = chatPage__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))chatPage__Template1__New1_fn;
    return type;
}

// public Template1(chatPage parent, chatPage parentInstance) :114
void chatPage__Template1__ctor_1_fn(chatPage__Template1* __this, ::g::chatPage* parent, ::g::chatPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :122
void chatPage__Template1__New1_fn(chatPage__Template1* __this, uObject** __retval)
{
    uStackFrame __("chatPage.Template1", "New()");
    ::g::SubPageChat* self = ::g::SubPageChat::New5(uPtr(__this->__parent1)->navBar);
    self->Name(chatPage__Template1::__selector0());
    return *__retval = self, void();
}

// public Template1 New(chatPage parent, chatPage parentInstance) :114
void chatPage__Template1__New2_fn(::g::chatPage* parent, ::g::chatPage* parentInstance, chatPage__Template1** __retval)
{
    *__retval = chatPage__Template1::New2(parent, parentInstance);
}

::g::Uno::UX::Selector chatPage__Template1::__selector0_;

// public Template1(chatPage parent, chatPage parentInstance) [instance] :114
void chatPage__Template1::ctor_1(::g::chatPage* parent, ::g::chatPage* parentInstance)
{
    ctor_(::STRINGS[0/*"subPageChat"*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template1 New(chatPage parent, chatPage parentInstance) [static] :114
chatPage__Template1* chatPage__Template1::New2(::g::chatPage* parent, ::g::chatPage* parentInstance)
{
    chatPage__Template1* obj1 = (chatPage__Template1*)uNew(chatPage__Template1_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
