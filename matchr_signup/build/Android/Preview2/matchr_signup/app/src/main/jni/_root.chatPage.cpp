// This file was generated based on /Users/hdc/matchr/matchrapp/HackPrinceton2017_Matchr/matchr_signup/build/Android/Preview2/cache/ux11/chatPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.chatPage.h>
#include <_root.chatPage.Template.h>
#include <_root.chatPage.Template1.h>
#include <_root.matchr_signup_bundle.h>
#include <_root.matchr_signup_FuseElementsElement_Opacity_Property.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Controls.BottomBarBackground.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Navigator.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.StatusBarBackground.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.iOS.StatusBarConfig.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Navigation.GoBack.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Navigation.WhileCanGoBack.h>
#include <Fuse.NodeGroupBase.h>
#include <Fuse.Platform.StatusBarStyle.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.AddingAnimation.h>
#include <Fuse.Triggers.RemovingAnimation.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
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
static uString* STRINGS[6];
static uType* TYPES[7];

namespace g{

// public partial sealed class chatPage :2
// {
// static chatPage() :140
static void chatPage__cctor_4_fn(uType* __type)
{
    chatPage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 3, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"navBar"*/], ::STRINGS[2/*"backButton"*/]);
    chatPage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"Opacity"*/]);
    chatPage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"router"*/]);
    chatPage::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"navBar"*/]);
    chatPage::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"backButton"*/]);
}

static void chatPage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("navBar");
    ::STRINGS[2] = uString::Const("backButton");
    ::STRINGS[3] = uString::Const("Opacity");
    ::STRINGS[4] = uString::Const("Pages/MatchesPageChat.ux");
    ::STRINGS[5] = uString::Const("mainPage");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface2),
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
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::chatPage, __g_nametable1), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::chatPage, backButton), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::chatPage, backButton_Opacity_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::chatPage, navBar), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::chatPage, router), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::chatPage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::chatPage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::chatPage::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::chatPage::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::chatPage::__selector3_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)chatPage__New5_fn, 0, true, type, 0));
}

::g::Fuse::Controls::Control_type* chatPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 112;
    options.InterfaceCount = 13;
    options.ObjectSize = sizeof(chatPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Control_type);
    type = (::g::Fuse::Controls::Control_type*)uClassType::New("chatPage", options);
    type->fp_build_ = chatPage_build;
    type->fp_ctor_ = (void*)chatPage__New5_fn;
    type->fp_cctor_ = chatPage__cctor_4_fn;
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

// public chatPage() :144
void chatPage__ctor_8_fn(chatPage* __this)
{
    __this->ctor_8();
}

// private void InitializeUX() :148
void chatPage__InitializeUX_fn(chatPage* __this)
{
    __this->InitializeUX();
}

// public chatPage New() :144
void chatPage__New5_fn(chatPage** __retval)
{
    *__retval = chatPage::New5();
}

uSStrong<uArray*> chatPage::__g_static_nametable1_;
::g::Uno::UX::Selector chatPage::__selector0_;
::g::Uno::UX::Selector chatPage::__selector1_;
::g::Uno::UX::Selector chatPage::__selector2_;
::g::Uno::UX::Selector chatPage::__selector3_;

// public chatPage() [instance] :144
void chatPage::ctor_8()
{
    uStackFrame __("chatPage", ".ctor()");
    ctor_7();
    InitializeUX();
}

// private void InitializeUX() [instance] :148
void chatPage::InitializeUX()
{
    uStackFrame __("chatPage", "InitializeUX()");
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, chatPage::__g_static_nametable1());
    backButton = ::g::Fuse::Controls::Panel::New3();
    backButton_Opacity_inst = ::g::matchr_signup_FuseElementsElement_Opacity_Property::New1(backButton, chatPage::__selector0());
    router = ::g::Fuse::Navigation::Router::New2();
    ::g::Fuse::Controls::DockPanel* temp = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Reactive::JavaScript* temp1 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::StackPanel* temp2 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StatusBarBackground* temp3 = ::g::Fuse::Controls::StatusBarBackground::New3();
    ::g::Fuse::iOS::StatusBarConfig* temp4 = ::g::Fuse::iOS::StatusBarConfig::New2();
    navBar = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Navigation::WhileCanGoBack* temp5 = ::g::Fuse::Navigation::WhileCanGoBack::New2();
    ::g::Fuse::Controls::DockPanel* temp6 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Image* temp7 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Triggers::AddingAnimation* temp8 = ::g::Fuse::Triggers::AddingAnimation::New2();
    ::g::Fuse::Animations::Change* temp9 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], backButton_Opacity_inst);
    ::g::Fuse::Triggers::RemovingAnimation* temp10 = ::g::Fuse::Triggers::RemovingAnimation::New2();
    ::g::Fuse::Animations::Change* temp11 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], backButton_Opacity_inst);
    ::g::Fuse::Gestures::Clicked* temp12 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Navigation::GoBack* temp13 = ::g::Fuse::Navigation::GoBack::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp14 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5019608f, 0.5019608f, 0.5019608f, 1.0f));
    ::g::Fuse::Controls::BottomBarBackground* temp15 = ::g::Fuse::Controls::BottomBarBackground::New3();
    ::g::Fuse::Controls::Navigator* temp16 = ::g::Fuse::Controls::Navigator::New4();
    chatPage__Template* mainPage = chatPage__Template::New2(this, this);
    chatPage__Template1* subPageChat = chatPage__Template1::New2(this, this);
    uPtr(router)->Name(chatPage::__selector1());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    temp1->LineNumber(4);
    temp1->FileName(::STRINGS[4/*"Pages/Match...*/]);
    temp1->File(::g::Uno::UX::BundleFileSource::New1(::g::matchr_signup_bundle::MatchesPageChat3ae223c8()));
    ::g::Fuse::Controls::DockPanel::SetDock(temp2, 2);
    temp2->Background(temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), navBar);
    temp4->Style(1);
    uPtr(navBar)->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    uPtr(navBar)->Name(chatPage::__selector2());
    ::g::Fuse::Controls::DockPanel::SetDock(navBar, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navBar)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Nodes()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), backButton);
    uPtr(backButton)->HitTestMode(2);
    uPtr(backButton)->Width(::g::Uno::UX::Size__New1(90.0f, 1));
    uPtr(backButton)->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    uPtr(backButton)->Alignment(1);
    uPtr(backButton)->Padding(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    uPtr(backButton)->Name(chatPage::__selector3());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(backButton)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(backButton)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(backButton)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(backButton)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    temp7->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp7->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    ::g::Fuse::Controls::DockPanel::SetDock(temp7, 0);
    temp7->File(::g::Uno::UX::BundleFileSource::New1(::g::matchr_signup_bundle::arrowleftwhite90df9167()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Animators()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp9);
    ::g::Fuse::Animations::Change__set_Value_fn(temp9, uCRef(0.0f));
    temp9->Duration(0.3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Animators()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp11);
    ::g::Fuse::Animations::Change__set_Value_fn(temp11, uCRef(0.0f));
    temp11->Duration(0.3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp13);
    ::g::Fuse::Controls::DockPanel::SetDock(temp15, 3);
    temp16->DefaultPath(::STRINGS[5/*"mainPage"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Templates()), ::TYPES[5/*Uno.Collections.ICollection<Uno.UX.Template>*/]), mainPage);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Templates()), ::TYPES[5/*Uno.Collections.ICollection<Uno.UX.Template>*/]), subPageChat);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), navBar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), backButton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
}

// public chatPage New() [static] :144
chatPage* chatPage::New5()
{
    chatPage* obj1 = (chatPage*)uNew(chatPage_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

} // ::g
