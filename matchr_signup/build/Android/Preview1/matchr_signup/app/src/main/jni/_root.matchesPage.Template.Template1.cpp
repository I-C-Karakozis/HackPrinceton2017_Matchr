// This file was generated based on /Users/hdc/matchr/matchrapp/HackPrinceton2017_Matchr/matchr_signup/build/Android/Preview1/cache/ux11/matchesPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.HomePage.h>
#include <_root.matchesPage.Template.h>
#include <_root.matchesPage.Template.Template1.h>
#include <_root.matchr_signup_bundle.h>
#include <_root.matchr_signup_FuseControlsTextControl_Value_Property.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Page.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Layer.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[4];
static uType* TYPES[4];

namespace g{

// public partial sealed class matchesPage.Template.Template1 :15
// {
// static Template1() :26
static void matchesPage__Template__Template1__cctor__fn(uType* __type)
{
    matchesPage__Template__Template1::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
}

static void matchesPage__Template__Template1_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("title");
    ::STRINGS[2] = uString::Const("clicked");
    ::STRINGS[3] = uString::Const("Name");
    ::TYPES[0] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetFields(2,
        ::g::matchesPage__Template_typeof(), offsetof(::g::matchesPage__Template__Template1, __parent1), uFieldFlagsWeak,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::matchesPage__Template__Template1, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::matchesPage__Template__Template1, temp_Value_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::matchesPage__Template__Template1::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)matchesPage__Template__Template1__New2_fn, 0, true, type, 2, ::g::matchesPage__Template_typeof(), ::g::Fuse::Controls::Page_typeof()));
}

::g::Uno::UX::Template_type* matchesPage__Template__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(matchesPage__Template__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("matchesPage.Template.Template1", options);
    type->fp_build_ = matchesPage__Template__Template1_build;
    type->fp_cctor_ = matchesPage__Template__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))matchesPage__Template__Template1__New1_fn;
    return type;
}

// public Template1(matchesPage.Template parent, Fuse.Controls.Page parentInstance) :19
void matchesPage__Template__Template1__ctor_1_fn(matchesPage__Template__Template1* __this, ::g::matchesPage__Template* parent, ::g::Fuse::Controls::Page* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :29
void matchesPage__Template__Template1__New1_fn(matchesPage__Template__Template1* __this, uObject** __retval)
{
    uStackFrame __("matchesPage.Template.Template1", "New()");
    ::g::Fuse::Controls::Panel* self = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    __this->temp_Value_inst = ::g::matchr_signup_FuseControlsTextControl_Value_Property::New1(temp, matchesPage__Template__Template1::__selector0());
    ::g::Fuse::Controls::DockPanel* temp1 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp2 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Image* temp3 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Text* temp4 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Image* temp5 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Reactive::DataBinding* temp6 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<string>*/], __this->temp_Value_inst, ::STRINGS[1/*"title"*/]);
    ::g::Fuse::Reactive::EventBinding* temp_eb201 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[2/*"clicked"*/]);
    self->Height(::g::Uno::UX::Size__New1(100.0f, 1));
    ::g::Fuse::Gestures::Clicked::AddHandler(self, uDelegate::New(::TYPES[1/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, temp_eb201));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    temp2->CornerRadius(::g::Uno::Float4__New2(3.0f, 3.0f, 3.0f, 3.0f));
    temp2->Color(::g::Uno::Float4__New2(0.4235294f, 0.4784314f, 0.5372549f, 1.0f));
    temp2->Layer(1);
    temp3->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp3->Height(::g::Uno::UX::Size__New1(100.0f, 1));
    ::g::Fuse::Controls::DockPanel::SetDock(temp3, 0);
    temp3->File(::g::Uno::UX::BundleFileSource::New1(::g::matchr_signup_bundle::avatar5efcc3bb()));
    temp4->Value(::STRINGS[3/*"Name"*/]);
    temp4->FontSize(18.0f);
    temp4->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp4->Alignment(11);
    temp4->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp4, 0);
    temp4->Font(::g::HomePage::Comfortaa());
    temp5->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp5->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    ::g::Fuse::Controls::DockPanel::SetDock(temp5, 1);
    temp5->File(::g::Uno::UX::BundleFileSource::New1(::g::matchr_signup_bundle::arrowrightwhite4cf3d3dc()));
    temp->FontSize(18.0f);
    temp->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp->Alignment(11);
    temp->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp, 1);
    temp->Font(::g::HomePage::Comfortaa());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb201);
    return *__retval = self, void();
}

// public Template1 New(matchesPage.Template parent, Fuse.Controls.Page parentInstance) :19
void matchesPage__Template__Template1__New2_fn(::g::matchesPage__Template* parent, ::g::Fuse::Controls::Page* parentInstance, matchesPage__Template__Template1** __retval)
{
    *__retval = matchesPage__Template__Template1::New2(parent, parentInstance);
}

::g::Uno::UX::Selector matchesPage__Template__Template1::__selector0_;

// public Template1(matchesPage.Template parent, Fuse.Controls.Page parentInstance) [instance] :19
void matchesPage__Template__Template1::ctor_1(::g::matchesPage__Template* parent, ::g::Fuse::Controls::Page* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template1 New(matchesPage.Template parent, Fuse.Controls.Page parentInstance) [static] :19
matchesPage__Template__Template1* matchesPage__Template__Template1::New2(::g::matchesPage__Template* parent, ::g::Fuse::Controls::Page* parentInstance)
{
    matchesPage__Template__Template1* obj1 = (matchesPage__Template__Template1*)uNew(matchesPage__Template__Template1_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g