// This file was generated based on /Users/hdc/matchr/matchrapp/HackPrinceton2017_Matchr/matchr_signup/build/Android/Preview2/cache/ux11/chatPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.chatPage.h>
#include <_root.chatPage.Template.h>
#include <_root.chatPage.Template.Template1.h>
#include <_root.matchr_signup_FuseReactiveEach_Items_Property.h>
#include <_root.NavBarTitleChat.h>
#include <Fuse.AlternateRoot.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Page.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[4];
static uType* TYPES[4];

namespace g{

// public partial sealed class chatPage.Template :5
// {
// static Template() :78
static void chatPage__Template__cctor__fn(uType* __type)
{
    chatPage__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Items"*/]);
    chatPage__Template::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"mainPage"*/]);
}

static void chatPage__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Items");
    ::STRINGS[1] = uString::Const("mainPage");
    ::STRINGS[2] = uString::Const("pages");
    ::STRINGS[3] = uString::Const("Your Messages");
    ::TYPES[0] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetFields(2,
        ::g::chatPage_typeof(), offsetof(::g::chatPage__Template, __parent1), uFieldFlagsWeak,
        ::g::chatPage_typeof(), offsetof(::g::chatPage__Template, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::chatPage__Template, temp_Items_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::chatPage__Template::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::chatPage__Template::__selector1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)chatPage__Template__New2_fn, 0, true, type, 2, ::g::chatPage_typeof(), ::g::chatPage_typeof()));
}

::g::Uno::UX::Template_type* chatPage__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 7;
    options.ObjectSize = sizeof(chatPage__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("chatPage.Template", options);
    type->fp_build_ = chatPage__Template_build;
    type->fp_cctor_ = chatPage__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))chatPage__Template__New1_fn;
    return type;
}

// public Template(chatPage parent, chatPage parentInstance) :9
void chatPage__Template__ctor_1_fn(chatPage__Template* __this, ::g::chatPage* parent, ::g::chatPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :81
void chatPage__Template__New1_fn(chatPage__Template* __this, uObject** __retval)
{
    uStackFrame __("chatPage.Template", "New()");
    ::g::Fuse::Controls::Page* self = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Reactive::Each* temp = ::g::Fuse::Reactive::Each::New4();
    __this->temp_Items_inst = ::g::matchr_signup_FuseReactiveEach_Items_Property::New1(temp, chatPage__Template::__selector0());
    ::g::Fuse::Controls::ScrollView* temp1 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp2 = ::g::Fuse::Controls::StackPanel::New4();
    chatPage__Template__Template1* temp3 = chatPage__Template__Template1::New2(__this, self);
    ::g::Fuse::Reactive::DataBinding* temp4 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<object>*/], __this->temp_Items_inst, ::STRINGS[2/*"pages"*/]);
    ::g::Fuse::AlternateRoot* temp5 = ::g::Fuse::AlternateRoot::New2();
    ::g::NavBarTitleChat* temp6 = ::g::NavBarTitleChat::New4();
    self->Name(chatPage__Template::__selector1());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    temp2->ItemSpacing(7.0f);
    temp2->Margin(::g::Uno::Float4__New2(7.0f, 7.0f, 7.0f, 7.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Templates()), ::TYPES[2/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp4);
    temp5->ParentNode(uPtr(__this->__parent1)->navBar);
    temp5->Node(temp6);
    temp6->Value(::STRINGS[3/*"Your Messages"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    return *__retval = self, void();
}

// public Template New(chatPage parent, chatPage parentInstance) :9
void chatPage__Template__New2_fn(::g::chatPage* parent, ::g::chatPage* parentInstance, chatPage__Template** __retval)
{
    *__retval = chatPage__Template::New2(parent, parentInstance);
}

::g::Uno::UX::Selector chatPage__Template::__selector0_;
::g::Uno::UX::Selector chatPage__Template::__selector1_;

// public Template(chatPage parent, chatPage parentInstance) [instance] :9
void chatPage__Template::ctor_1(::g::chatPage* parent, ::g::chatPage* parentInstance)
{
    ctor_(::STRINGS[1/*"mainPage"*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(chatPage parent, chatPage parentInstance) [static] :9
chatPage__Template* chatPage__Template::New2(::g::chatPage* parent, ::g::chatPage* parentInstance)
{
    chatPage__Template* obj1 = (chatPage__Template*)uNew(chatPage__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
