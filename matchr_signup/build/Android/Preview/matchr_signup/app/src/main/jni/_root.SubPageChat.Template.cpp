// This file was generated based on /Users/hdc/Downloads/matchr_signup/build/Android/Preview/cache/ux11/SubPageChat.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.matchr_signup_FuseControlsTextControl_Value_Property.h>
#include <_root.matchr_signup_FuseElementsElement_DockPanelDock_Property.h>
#include <_root.SubPageChat.h>
#include <_root.SubPageChat.Template.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Scale.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Layer.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Triggers.AddingAnimation.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[5];
static uType* TYPES[5];

namespace g{

// public partial sealed class SubPageChat.Template :6
// {
// static Template() :18
static void SubPageChat__Template__cctor__fn(uType* __type)
{
    SubPageChat__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
    SubPageChat__Template::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"DockPanel.D...*/]);
}

static void SubPageChat__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("DockPanel.Dock");
    ::STRINGS[2] = uString::Const("info");
    ::STRINGS[3] = uString::Const("dock");
    ::STRINGS[4] = uString::Const("text");
    ::TYPES[0] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Fuse::Layouts::Dock_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    type->SetFields(2,
        ::g::SubPageChat_typeof(), offsetof(::g::SubPageChat__Template, __parent1), uFieldFlagsWeak,
        ::g::SubPageChat_typeof(), offsetof(::g::SubPageChat__Template, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Layouts::Dock_typeof(), NULL), offsetof(::g::SubPageChat__Template, temp_DockPanel_Dock_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::SubPageChat__Template, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::SubPageChat__Template, temp1_Value_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::SubPageChat__Template::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::SubPageChat__Template::__selector1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)SubPageChat__Template__New2_fn, 0, true, type, 2, ::g::SubPageChat_typeof(), ::g::SubPageChat_typeof()));
}

::g::Uno::UX::Template_type* SubPageChat__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(SubPageChat__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("SubPageChat.Template", options);
    type->fp_build_ = SubPageChat__Template_build;
    type->fp_cctor_ = SubPageChat__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))SubPageChat__Template__New1_fn;
    return type;
}

// public Template(SubPageChat parent, SubPageChat parentInstance) :10
void SubPageChat__Template__ctor_1_fn(SubPageChat__Template* __this, ::g::SubPageChat* parent, ::g::SubPageChat* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :21
void SubPageChat__Template__New1_fn(SubPageChat__Template* __this, uObject** __retval)
{
    uStackFrame __("SubPageChat.Template", "New()");
    ::g::Fuse::Controls::DockPanel* self = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    __this->temp_Value_inst = ::g::matchr_signup_FuseControlsTextControl_Value_Property::New1(temp, SubPageChat__Template::__selector0());
    __this->temp_DockPanel_Dock_inst = ::g::matchr_signup_FuseElementsElement_DockPanelDock_Property::New1(temp, SubPageChat__Template::__selector1());
    ::g::Fuse::Controls::Text* temp1 = ::g::Fuse::Controls::Text::New3();
    __this->temp1_Value_inst = ::g::matchr_signup_FuseControlsTextControl_Value_Property::New1(temp1, SubPageChat__Template::__selector0());
    ::g::Fuse::Reactive::DataBinding* temp2 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<string>*/], __this->temp_Value_inst, ::STRINGS[2/*"info"*/]);
    ::g::Fuse::Reactive::DataBinding* temp3 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<Fuse.Layouts.Dock>*/], __this->temp_DockPanel_Dock_inst, ::STRINGS[3/*"dock"*/]);
    ::g::Fuse::Controls::Panel* temp4 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp5 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp6 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<string>*/], __this->temp1_Value_inst, ::STRINGS[4/*"text"*/]);
    ::g::Fuse::Triggers::AddingAnimation* temp7 = ::g::Fuse::Triggers::AddingAnimation::New2();
    ::g::Fuse::Animations::Scale* temp8 = ::g::Fuse::Animations::Scale::New2();
    self->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp->FontSize(12.0f);
    temp->Alignment(10);
    temp->Opacity(0.5f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp3);
    temp4->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 10.0f, 0.0f));
    temp4->Padding(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    temp5->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp5->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp5->Opacity(0.12f);
    temp5->Layer(1);
    temp1->TextWrapping(1);
    temp1->Alignment(9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp8);
    temp8->Factor(0.0f);
    temp8->Duration(0.5);
    temp8->Easing(::g::Fuse::Animations::Easing::QuinticIn());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    return *__retval = self, void();
}

// public Template New(SubPageChat parent, SubPageChat parentInstance) :10
void SubPageChat__Template__New2_fn(::g::SubPageChat* parent, ::g::SubPageChat* parentInstance, SubPageChat__Template** __retval)
{
    *__retval = SubPageChat__Template::New2(parent, parentInstance);
}

::g::Uno::UX::Selector SubPageChat__Template::__selector0_;
::g::Uno::UX::Selector SubPageChat__Template::__selector1_;

// public Template(SubPageChat parent, SubPageChat parentInstance) [instance] :10
void SubPageChat__Template::ctor_1(::g::SubPageChat* parent, ::g::SubPageChat* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(SubPageChat parent, SubPageChat parentInstance) [static] :10
SubPageChat__Template* SubPageChat__Template::New2(::g::SubPageChat* parent, ::g::SubPageChat* parentInstance)
{
    SubPageChat__Template* obj1 = (SubPageChat__Template*)uNew(SubPageChat__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
