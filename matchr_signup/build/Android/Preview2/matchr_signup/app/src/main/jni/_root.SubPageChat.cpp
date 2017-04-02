// This file was generated based on /Users/hdc/matchr/matchrapp/HackPrinceton2017_Matchr/matchr_signup/build/Android/Preview2/cache/ux11/SubPageChat.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.matchr_signup_bundle.h>
#include <_root.matchr_signup_FuseControlsTextControl_Value_Property.h>
#include <_root.matchr_signup_FuseControlsTextInputControl_Value_Property.h>
#include <_root.matchr_signup_FuseReactiveEach_Items_Property.h>
#include <_root.matchr_signup_FuseVisual_IsEnabled_Property.h>
#include <_root.NavBarTitle.h>
#include <_root.SubPageChat.h>
#include <_root.SubPageChat.Template.h>
#include <Fuse.AlternateRoot.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.TextInputActionHandler.h>
#include <Fuse.Controls.TextInputActionStyle.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Layer.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Translation.h>
#include <Fuse.Triggers.LayoutAnimation.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
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
#include <Uno.UX.Template.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[12];
static uType* TYPES[11];

namespace g{

// public partial sealed class SubPageChat :2
// {
// static SubPageChat() :75
static void SubPageChat__cctor_4_fn(uType* __type)
{
    SubPageChat::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 1, ::STRINGS[0/*"navBar"*/]);
    SubPageChat::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"IsEnabled"*/]);
    SubPageChat::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Value"*/]);
    SubPageChat::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"Items"*/]);
}

static void SubPageChat_build(uType* type)
{
    ::STRINGS[0] = uString::Const("navBar");
    ::STRINGS[1] = uString::Const("IsEnabled");
    ::STRINGS[2] = uString::Const("Value");
    ::STRINGS[3] = uString::Const("Items");
    ::STRINGS[4] = uString::Const("canSendMessage");
    ::STRINGS[5] = uString::Const("sendMessage");
    ::STRINGS[6] = uString::Const("message");
    ::STRINGS[7] = uString::Const("messages");
    ::STRINGS[8] = uString::Const("title");
    ::STRINGS[9] = uString::Const("Pages/SubPageChat.ux");
    ::STRINGS[10] = uString::Const("Send");
    ::STRINGS[11] = uString::Const("Send a message!");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[7] = ::g::Fuse::Controls::TextInputActionHandler_typeof();
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[9] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[10] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface1),
        ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Control_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface3),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface5),
        ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Control_type, interface6),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface7),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface8),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface9),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface10),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface11),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface12));
    type->SetFields(102,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::SubPageChat, __g_nametable1), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::SubPageChat, navBar), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::SubPageChat, temp_eb10), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::SubPageChat, temp_eb9), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(::g::SubPageChat, temp_IsEnabled_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::SubPageChat, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::SubPageChat, temp2_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::SubPageChat, temp3_Value_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::SubPageChat::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::SubPageChat::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::SubPageChat::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::SubPageChat::__selector2_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)SubPageChat__New5_fn, 0, true, type, 1, ::g::Fuse::Visual_typeof()));
}

::g::Fuse::Controls::Control_type* SubPageChat_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 114;
    options.InterfaceCount = 13;
    options.ObjectSize = sizeof(SubPageChat);
    options.TypeSize = sizeof(::g::Fuse::Controls::Control_type);
    type = (::g::Fuse::Controls::Control_type*)uClassType::New("SubPageChat", options);
    type->fp_build_ = SubPageChat_build;
    type->fp_cctor_ = SubPageChat__cctor_4_fn;
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

// public SubPageChat(Fuse.Visual navBar) :79
void SubPageChat__ctor_8_fn(SubPageChat* __this, ::g::Fuse::Visual* navBar1)
{
    __this->ctor_8(navBar1);
}

// private void InitializeUX() :85
void SubPageChat__InitializeUX_fn(SubPageChat* __this)
{
    __this->InitializeUX();
}

// public SubPageChat New(Fuse.Visual navBar) :79
void SubPageChat__New5_fn(::g::Fuse::Visual* navBar1, SubPageChat** __retval)
{
    *__retval = SubPageChat::New5(navBar1);
}

uSStrong<uArray*> SubPageChat::__g_static_nametable1_;
::g::Uno::UX::Selector SubPageChat::__selector0_;
::g::Uno::UX::Selector SubPageChat::__selector1_;
::g::Uno::UX::Selector SubPageChat::__selector2_;

// public SubPageChat(Fuse.Visual navBar) [instance] :79
void SubPageChat::ctor_8(::g::Fuse::Visual* navBar1)
{
    uStackFrame __("SubPageChat", ".ctor(Fuse.Visual)");
    ctor_7();
    navBar = navBar1;
    InitializeUX();
}

// private void InitializeUX() [instance] :85
void SubPageChat::InitializeUX()
{
    uStackFrame __("SubPageChat", "InitializeUX()");
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, SubPageChat::__g_static_nametable1());
    ::g::Fuse::Controls::Button* temp = ::g::Fuse::Controls::Button::New5();
    temp_IsEnabled_inst = ::g::matchr_signup_FuseVisual_IsEnabled_Property::New1(temp, SubPageChat::__selector0());
    ::g::Fuse::Controls::TextInput* temp1 = ::g::Fuse::Controls::TextInput::New3();
    temp1_Value_inst = ::g::matchr_signup_FuseControlsTextInputControl_Value_Property::New1(temp1, SubPageChat::__selector1());
    ::g::Fuse::Reactive::Each* temp2 = ::g::Fuse::Reactive::Each::New4();
    temp2_Items_inst = ::g::matchr_signup_FuseReactiveEach_Items_Property::New1(temp2, SubPageChat::__selector2());
    ::g::NavBarTitle* temp3 = ::g::NavBarTitle::New4();
    temp3_Value_inst = ::g::matchr_signup_FuseControlsTextControl_Value_Property::New1(temp3, SubPageChat::__selector1());
    ::g::Fuse::Reactive::JavaScript* temp4 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::DockPanel* temp5 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::DockPanel* temp6 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp7 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp8 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    ::g::Fuse::Controls::Rectangle* temp9 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp10 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    ::g::Fuse::Reactive::DataBinding* temp11 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<bool>*/], temp_IsEnabled_inst, ::STRINGS[4/*"canSendMess...*/]);
    temp_eb9 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[5/*"sendMessage"*/]);
    ::g::Fuse::Reactive::DataBinding* temp12 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[2/*Fuse.Reactive.DataBinding<string>*/], temp1_Value_inst, ::STRINGS[6/*"message"*/]);
    temp_eb10 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[5/*"sendMessage"*/]);
    ::g::Fuse::Controls::ScrollView* temp13 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp14 = ::g::Fuse::Controls::StackPanel::New4();
    SubPageChat__Template* temp15 = SubPageChat__Template::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp16 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[3/*Fuse.Reactive.DataBinding<object>*/], temp2_Items_inst, ::STRINGS[7/*"messages"*/]);
    ::g::Fuse::Triggers::LayoutAnimation* temp17 = ::g::Fuse::Triggers::LayoutAnimation::New2();
    ::g::Fuse::Animations::Move* temp18 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Controls::Panel* temp19 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::AlternateRoot* temp20 = ::g::Fuse::AlternateRoot::New2();
    ::g::Fuse::Reactive::DataBinding* temp21 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[2/*Fuse.Reactive.DataBinding<string>*/], temp3_Value_inst, ::STRINGS[8/*"title"*/]);
    temp4->LineNumber(2);
    temp4->FileName(::STRINGS[9/*"Pages/SubPa...*/]);
    temp4->File(::g::Uno::UX::BundleFileSource::New1(::g::matchr_signup_bundle::SubPageChatf3428d6b()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    temp6->MinHeight(::g::Uno::UX::Size__New1(60.0f, 1));
    temp6->Padding(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp6, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    temp7->Height(::g::Uno::UX::Size__New1(3.0f, 1));
    temp7->Alignment(4);
    temp7->Opacity(0.1f);
    temp7->Layer(1);
    temp7->Fill(temp8);
    temp9->Height(::g::Uno::UX::Size__New1(3.0f, 1));
    temp9->Alignment(12);
    temp9->Opacity(0.1f);
    temp9->Layer(1);
    temp9->Fill(temp10);
    temp->Text(::STRINGS[10/*"Send"*/]);
    temp->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp, 1);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp, uDelegate::New(::TYPES[5/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb9)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb9);
    temp1->PlaceholderText(::STRINGS[11/*"Send a mess...*/]);
    temp1->PlaceholderColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp1->ActionStyle(5);
    temp1->TextColor(::g::Fuse::Drawing::Colors::Black());
    temp1->CaretColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp1->add_ActionTriggered(uDelegate::New(::TYPES[7/*Fuse.Controls.TextInputActionHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb10)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    temp14->Alignment(12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Templates()), ::TYPES[8/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Animators()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp18);
    temp18->Y(1.0f);
    temp18->Duration(0.5);
    temp18->RelativeTo(::g::Fuse::Triggers::LayoutTransition::PositionChange());
    temp18->Easing(::g::Fuse::Animations::Easing::QuinticInOut());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    temp20->ParentNode(navBar);
    temp20->Node(temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp21);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[10/*Uno.Collections.ICollection<object>*/]), navBar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
}

// public SubPageChat New(Fuse.Visual navBar) [static] :79
SubPageChat* SubPageChat::New5(::g::Fuse::Visual* navBar1)
{
    SubPageChat* obj1 = (SubPageChat*)uNew(SubPageChat_typeof());
    obj1->ctor_8(navBar1);
    return obj1;
}
// }

} // ::g
