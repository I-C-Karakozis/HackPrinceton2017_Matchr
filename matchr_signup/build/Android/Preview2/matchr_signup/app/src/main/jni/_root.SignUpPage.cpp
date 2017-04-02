// This file was generated based on /Users/hdc/matchr/matchrapp/matchr_signup/build/Android/Preview2/cache/ux11/SignUpPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.matchr_signup_bundle.h>
#include <_root.matchr_signup_FuseControlsTextControl_Value_Property.h>
#include <_root.matchr_signup_FuseControlsTextInputControl_Value_Property.h>
#include <_root.MyTextInput.h>
#include <_root.SignUpPage.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Controls.NativeViewHost.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.TextInputActionStyle.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Controls.TextInputHint.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.BoxSizingMode.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.iOS.StatusBarConfig.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Platform.StatusBarStyle.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[17];
static uType* TYPES[6];

namespace g{

// public partial sealed class SignUpPage :2
// {
// static SignUpPage() :18
static void SignUpPage__cctor_4_fn(uType* __type)
{
    SignUpPage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 2, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"transitionS...*/]);
    SignUpPage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Value"*/]);
    SignUpPage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"transitionS...*/]);
}

static void SignUpPage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("transitionScaleGuide");
    ::STRINGS[2] = uString::Const("Value");
    ::STRINGS[3] = uString::Const("email");
    ::STRINGS[4] = uString::Const("username");
    ::STRINGS[5] = uString::Const("passwd");
    ::STRINGS[6] = uString::Const("repasswd");
    ::STRINGS[7] = uString::Const("passwderr");
    ::STRINGS[8] = uString::Const("signup");
    ::STRINGS[9] = uString::Const("goBack");
    ::STRINGS[10] = uString::Const("Pages/SignUpPage.ux");
    ::STRINGS[11] = uString::Const("Email Address");
    ::STRINGS[12] = uString::Const("Username");
    ::STRINGS[13] = uString::Const("Password");
    ::STRINGS[14] = uString::Const("Repeat password");
    ::STRINGS[15] = uString::Const("Sign Up");
    ::STRINGS[16] = uString::Const("Back");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface1),
        ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Control_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface3),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface5),
        ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Control_type, interface6),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface7),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface8),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface9),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface10),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface11),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface12));
    type->SetFields(102,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::SignUpPage, __g_nametable1), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::SignUpPage, router), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::SignUpPage, temp_eb3), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::SignUpPage, temp_eb4), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::SignUpPage, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::SignUpPage, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::SignUpPage, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::SignUpPage, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::SignUpPage, temp4_Value_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::SignUpPage, transitionScaleGuide), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::SignUpPage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::SignUpPage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::SignUpPage::__selector1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)SignUpPage__New5_fn, 0, true, type, 1, ::g::Fuse::Navigation::Router_typeof()));
}

::g::Fuse::Controls::Control_type* SignUpPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 115;
    options.InterfaceCount = 13;
    options.ObjectSize = sizeof(SignUpPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Control_type);
    type = (::g::Fuse::Controls::Control_type*)uClassType::New("SignUpPage", options);
    type->fp_build_ = SignUpPage_build;
    type->fp_cctor_ = SignUpPage__cctor_4_fn;
    type->interface8.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface10.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface9.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface12.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface11.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface11.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualPosition_fn;
    type->interface11.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface11.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface6.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface4.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface7.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface6.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface4.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface4.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface5.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface6.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface6.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public SignUpPage(Fuse.Navigation.Router router) :22
void SignUpPage__ctor_8_fn(SignUpPage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :28
void SignUpPage__InitializeUX_fn(SignUpPage* __this)
{
    __this->InitializeUX();
}

// public SignUpPage New(Fuse.Navigation.Router router) :22
void SignUpPage__New5_fn(::g::Fuse::Navigation::Router* router1, SignUpPage** __retval)
{
    *__retval = SignUpPage::New5(router1);
}

uSStrong<uArray*> SignUpPage::__g_static_nametable1_;
::g::Uno::UX::Selector SignUpPage::__selector0_;
::g::Uno::UX::Selector SignUpPage::__selector1_;

// public SignUpPage(Fuse.Navigation.Router router) [instance] :22
void SignUpPage::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    uStackFrame __("SignUpPage", ".ctor(Fuse.Navigation.Router)");
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :28
void SignUpPage::InitializeUX()
{
    uStackFrame __("SignUpPage", "InitializeUX()");
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, SignUpPage::__g_static_nametable1());
    ::g::MyTextInput* temp = ::g::MyTextInput::New4();
    temp_Value_inst = ::g::matchr_signup_FuseControlsTextInputControl_Value_Property::New1(temp, SignUpPage::__selector0());
    ::g::MyTextInput* temp1 = ::g::MyTextInput::New4();
    temp1_Value_inst = ::g::matchr_signup_FuseControlsTextInputControl_Value_Property::New1(temp1, SignUpPage::__selector0());
    ::g::MyTextInput* temp2 = ::g::MyTextInput::New4();
    temp2_Value_inst = ::g::matchr_signup_FuseControlsTextInputControl_Value_Property::New1(temp2, SignUpPage::__selector0());
    ::g::MyTextInput* temp3 = ::g::MyTextInput::New4();
    temp3_Value_inst = ::g::matchr_signup_FuseControlsTextInputControl_Value_Property::New1(temp3, SignUpPage::__selector0());
    ::g::Fuse::Controls::Text* temp4 = ::g::Fuse::Controls::Text::New3();
    temp4_Value_inst = ::g::matchr_signup_FuseControlsTextControl_Value_Property::New1(temp4, SignUpPage::__selector0());
    ::g::Fuse::Reactive::JavaScript* temp5 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::Panel* temp6 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::iOS::StatusBarConfig* temp7 = ::g::Fuse::iOS::StatusBarConfig::New2();
    transitionScaleGuide = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp8 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp9 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<string>*/], temp_Value_inst, ::STRINGS[3/*"email"*/]);
    ::g::Fuse::Reactive::DataBinding* temp10 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<string>*/], temp1_Value_inst, ::STRINGS[4/*"username"*/]);
    ::g::Fuse::Reactive::DataBinding* temp11 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<string>*/], temp2_Value_inst, ::STRINGS[5/*"passwd"*/]);
    ::g::Fuse::Reactive::DataBinding* temp12 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<string>*/], temp3_Value_inst, ::STRINGS[6/*"repasswd"*/]);
    ::g::Fuse::Reactive::DataBinding* temp13 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<string>*/], temp4_Value_inst, ::STRINGS[7/*"passwderr"*/]);
    ::g::Fuse::Controls::NativeViewHost* temp14 = ::g::Fuse::Controls::NativeViewHost::New3();
    ::g::Fuse::Controls::Button* temp15 = ::g::Fuse::Controls::Button::New5();
    temp_eb3 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[8/*"signup"*/]);
    ::g::Fuse::Controls::NativeViewHost* temp16 = ::g::Fuse::Controls::NativeViewHost::New3();
    ::g::Fuse::Controls::Button* temp17 = ::g::Fuse::Controls::Button::New5();
    temp_eb4 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[9/*"goBack"*/]);
    temp5->LineNumber(4);
    temp5->FileName(::STRINGS[10/*"Pages/SignU...*/]);
    temp5->File(::g::Uno::UX::BundleFileSource::New1(::g::matchr_signup_bundle::SignUpPage14c48ae5()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), transitionScaleGuide);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    temp7->Style(1);
    uPtr(transitionScaleGuide)->Aspect(1.0f);
    uPtr(transitionScaleGuide)->HitTestMode(0);
    uPtr(transitionScaleGuide)->Width(::g::Uno::UX::Size__New1(500.0f, 4));
    uPtr(transitionScaleGuide)->Height(::g::Uno::UX::Size__New1(500.0f, 4));
    uPtr(transitionScaleGuide)->Alignment(10);
    uPtr(transitionScaleGuide)->BoxSizing(4);
    uPtr(transitionScaleGuide)->Name(SignUpPage::__selector1());
    temp8->ItemSpacing(10.0f);
    temp8->Alignment(8);
    temp8->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    temp->PlaceholderText(::STRINGS[11/*"Email Address"*/]);
    temp->ActionStyle(2);
    temp->InputHint(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp9);
    temp1->PlaceholderText(::STRINGS[12/*"Username"*/]);
    temp1->ActionStyle(2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp10);
    temp2->IsPassword(true);
    temp2->PlaceholderText(::STRINGS[13/*"Password"*/]);
    temp2->ActionStyle(2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp11);
    temp3->IsPassword(true);
    temp3->PlaceholderText(::STRINGS[14/*"Repeat pass...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp12);
    temp4->Alignment(2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    temp15->Text(::STRINGS[15/*"Sign Up"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp15, uDelegate::New(::TYPES[4/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb3)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    temp17->Text(::STRINGS[16/*"Back"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp17, uDelegate::New(::TYPES[4/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb4)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb4);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), transitionScaleGuide);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
}

// public SignUpPage New(Fuse.Navigation.Router router) [static] :22
SignUpPage* SignUpPage::New5(::g::Fuse::Navigation::Router* router1)
{
    SignUpPage* obj1 = (SignUpPage*)uNew(SignUpPage_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
