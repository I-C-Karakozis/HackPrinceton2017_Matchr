// This file was generated based on /Users/hdc/matchr/matchrapp/HackPrinceton2017_Matchr/matchr_signup/build/Android/Preview2/cache/ux11/MainPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.chatPage.h>
#include <_root.MainPage.h>
#include <_root.matchesPage.h>
#include <_root.matchPage.h>
#include <_root.matchr_signup_FuseControlsNavigationControl_Active_Property.h>
#include <_root.matchr_signup_FuseElementsElement_ElementLayoutMaster_Property.h>
#include <_root.profilePage.h>
#include <_root.Tab.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.LayoutControl.h>
#include <Fuse.Controls.NavigationControl.h>
#include <Fuse.Controls.PageControl.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Navigation.WhileActive.h>
#include <Fuse.Navigation.WhileNavigationTrigger.h>
#include <Fuse.Translation.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.LayoutAnimation.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[16];
static uType* TYPES[5];

namespace g{

// public partial sealed class MainPage :2
// {
// static MainPage() :17
static void MainPage__cctor_4_fn(uType* __type)
{
    MainPage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Active"*/]);
    MainPage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Element.Lay...*/]);
    MainPage::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"indicator"*/]);
    MainPage::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"page1Tab"*/]);
    MainPage::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"page2Tab"*/]);
    MainPage::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"page3Tab"*/]);
    MainPage::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"page4Tab"*/]);
    MainPage::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"navigation"*/]);
    MainPage::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"page1"*/]);
    MainPage::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"page2"*/]);
    MainPage::__selector10_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[10/*"page3"*/]);
    MainPage::__selector11_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[11/*"page4"*/]);
}

static void MainPage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Active");
    ::STRINGS[1] = uString::Const("Element.LayoutMaster");
    ::STRINGS[2] = uString::Const("indicator");
    ::STRINGS[3] = uString::Const("page1Tab");
    ::STRINGS[4] = uString::Const("page2Tab");
    ::STRINGS[5] = uString::Const("page3Tab");
    ::STRINGS[6] = uString::Const("page4Tab");
    ::STRINGS[7] = uString::Const("navigation");
    ::STRINGS[8] = uString::Const("page1");
    ::STRINGS[9] = uString::Const("page2");
    ::STRINGS[10] = uString::Const("page3");
    ::STRINGS[11] = uString::Const("page4");
    ::STRINGS[12] = uString::Const("match");
    ::STRINGS[13] = uString::Const("matches");
    ::STRINGS[14] = uString::Const("message");
    ::STRINGS[15] = uString::Const("profile");
    ::TYPES[0] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
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
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::MainPage, indicator), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL), offsetof(::g::MainPage, indicator_Element_LayoutMaster_inst), 0,
        ::g::Fuse::Controls::PageControl_typeof(), offsetof(::g::MainPage, navigation), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::MainPage, navigation_Active_inst), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainPage, page1), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainPage, page1Tab), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainPage, page2), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainPage, page2Tab), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainPage, page3), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainPage, page3Tab), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainPage, page4), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainPage, page4Tab), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::MainPage, router), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainPage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainPage::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainPage::__selector10_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainPage::__selector11_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainPage::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainPage::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainPage::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainPage::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainPage::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainPage::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainPage::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainPage::__selector9_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainPage__New5_fn, 0, true, type, 1, ::g::Fuse::Navigation::Router_typeof()));
}

::g::Fuse::Controls::Control_type* MainPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 127;
    options.InterfaceCount = 13;
    options.ObjectSize = sizeof(MainPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Control_type);
    type = (::g::Fuse::Controls::Control_type*)uClassType::New("MainPage", options);
    type->fp_build_ = MainPage_build;
    type->fp_cctor_ = MainPage__cctor_4_fn;
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

// public MainPage(Fuse.Navigation.Router router) :21
void MainPage__ctor_8_fn(MainPage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :27
void MainPage__InitializeUX_fn(MainPage* __this)
{
    __this->InitializeUX();
}

// public MainPage New(Fuse.Navigation.Router router) :21
void MainPage__New5_fn(::g::Fuse::Navigation::Router* router1, MainPage** __retval)
{
    *__retval = MainPage::New5(router1);
}

::g::Uno::UX::Selector MainPage::__selector0_;
::g::Uno::UX::Selector MainPage::__selector1_;
::g::Uno::UX::Selector MainPage::__selector10_;
::g::Uno::UX::Selector MainPage::__selector11_;
::g::Uno::UX::Selector MainPage::__selector2_;
::g::Uno::UX::Selector MainPage::__selector3_;
::g::Uno::UX::Selector MainPage::__selector4_;
::g::Uno::UX::Selector MainPage::__selector5_;
::g::Uno::UX::Selector MainPage::__selector6_;
::g::Uno::UX::Selector MainPage::__selector7_;
::g::Uno::UX::Selector MainPage::__selector8_;
::g::Uno::UX::Selector MainPage::__selector9_;

// public MainPage(Fuse.Navigation.Router router) [instance] :21
void MainPage::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    uStackFrame __("MainPage", ".ctor(Fuse.Navigation.Router)");
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :27
void MainPage::InitializeUX()
{
    uStackFrame __("MainPage", "InitializeUX()");
    navigation = ::g::Fuse::Controls::PageControl::New4();
    navigation_Active_inst = ::g::matchr_signup_FuseControlsNavigationControl_Active_Property::New1(navigation, MainPage::__selector0());
    indicator = ::g::Fuse::Controls::Rectangle::New3();
    indicator_Element_LayoutMaster_inst = ::g::matchr_signup_FuseElementsElement_ElementLayoutMaster_Property::New1(indicator, MainPage::__selector1());
    ::g::Fuse::Triggers::LayoutAnimation* temp = ::g::Fuse::Triggers::LayoutAnimation::New2();
    ::g::Fuse::Animations::Move* temp1 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Controls::DockPanel* temp2 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Grid* temp3 = ::g::Fuse::Controls::Grid::New4();
    page1Tab = ::g::Fuse::Controls::Panel::New3();
    ::g::Tab* temp4 = ::g::Tab::New4();
    ::g::Fuse::Gestures::Clicked* temp5 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp6 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    page2Tab = ::g::Fuse::Controls::Panel::New3();
    ::g::Tab* temp7 = ::g::Tab::New4();
    ::g::Fuse::Gestures::Clicked* temp8 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp9 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    page3Tab = ::g::Fuse::Controls::Panel::New3();
    ::g::Tab* temp10 = ::g::Tab::New4();
    ::g::Fuse::Gestures::Clicked* temp11 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp12 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    page4Tab = ::g::Fuse::Controls::Panel::New3();
    ::g::Tab* temp13 = ::g::Tab::New4();
    ::g::Fuse::Gestures::Clicked* temp14 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp15 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    ::g::Fuse::Drawing::StaticSolidColor* temp16 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.7411765f, 0.7647059f, 0.7803922f, 1.0f));
    page1 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Navigation::WhileActive* temp17 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp18 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[1/*Fuse.Triggers.Actions.Set<Fuse.Elements.Element>*/], indicator_Element_LayoutMaster_inst);
    ::g::matchPage* temp19 = ::g::matchPage::New5();
    ::g::Fuse::Drawing::StaticSolidColor* temp20 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9333333f, 0.9333333f, 0.9333333f, 1.0f));
    page2 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Navigation::WhileActive* temp21 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp22 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[1/*Fuse.Triggers.Actions.Set<Fuse.Elements.Element>*/], indicator_Element_LayoutMaster_inst);
    ::g::Fuse::Controls::StackPanel* temp23 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::matchesPage* temp24 = ::g::matchesPage::New5();
    ::g::Fuse::Drawing::StaticSolidColor* temp25 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9333333f, 0.9333333f, 0.9333333f, 1.0f));
    page3 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Navigation::WhileActive* temp26 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp27 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[1/*Fuse.Triggers.Actions.Set<Fuse.Elements.Element>*/], indicator_Element_LayoutMaster_inst);
    ::g::Fuse::Controls::StackPanel* temp28 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::chatPage* temp29 = ::g::chatPage::New5();
    ::g::Fuse::Drawing::StaticSolidColor* temp30 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9490196f, 0.945098f, 0.9372549f, 1.0f));
    page4 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Navigation::WhileActive* temp31 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp32 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[1/*Fuse.Triggers.Actions.Set<Fuse.Elements.Element>*/], indicator_Element_LayoutMaster_inst);
    ::g::profilePage* temp33 = ::g::profilePage::New5();
    ::g::Fuse::Drawing::StaticSolidColor* temp34 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9490196f, 0.945098f, 0.9372549f, 1.0f));
    ::g::Fuse::Drawing::StaticSolidColor* temp35 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.2f, 0.2f, 0.2f, 1.0f));
    uPtr(indicator)->Color(::g::Uno::Float4__New2(0.4235294f, 0.4784314f, 0.5372549f, 1.0f));
    uPtr(indicator)->Height(::g::Uno::UX::Size__New1(4.0f, 1));
    uPtr(indicator)->Alignment(12);
    uPtr(indicator)->Name(MainPage::__selector2());
    ::g::Fuse::Controls::LayoutControl::SetLayoutMaster(indicator, page1Tab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(indicator)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Animators()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp1);
    temp1->X(1.0f);
    temp1->Duration(0.4);
    temp1->RelativeTo(::g::Fuse::Triggers::LayoutTransition::WorldPositionChange());
    temp1->Easing(::g::Fuse::Animations::Easing::BackIn());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), navigation);
    temp3->ColumnCount(4);
    temp3->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    ::g::Fuse::Controls::DockPanel::SetDock(temp3, 2);
    temp3->Background(temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), page1Tab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), page2Tab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), page3Tab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), page4Tab);
    uPtr(page1Tab)->Name(MainPage::__selector3());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page1Tab)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    temp4->Text(::STRINGS[12/*"match"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp6);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp6, page1);
    uPtr(page2Tab)->Name(MainPage::__selector4());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page2Tab)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    temp7->Text(::STRINGS[13/*"matches"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp9);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp9, page2);
    uPtr(page3Tab)->Name(MainPage::__selector5());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page3Tab)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    temp10->Text(::STRINGS[14/*"message"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp12);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp12, page3);
    uPtr(page4Tab)->Name(MainPage::__selector6());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page4Tab)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    temp13->Text(::STRINGS[15/*"profile"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp15);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp15, page4);
    uPtr(navigation)->Name(MainPage::__selector7());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), page1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), page2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), page3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), page4);
    uPtr(page1)->Name(MainPage::__selector8());
    uPtr(page1)->Background(temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page1)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page1)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    temp17->Threshold(0.5f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp18);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp18, page1Tab);
    uPtr(page2)->Name(MainPage::__selector9());
    uPtr(page2)->Background(temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page2)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page2)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    temp21->Threshold(0.5f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp22);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp22, page2Tab);
    temp23->Alignment(4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    uPtr(page3)->Name(MainPage::__selector10());
    uPtr(page3)->Background(temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page3)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page3)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    temp26->Threshold(0.5f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp27);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp27, page3Tab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
    uPtr(page4)->Name(MainPage::__selector11());
    uPtr(page4)->Background(temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page4)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page4)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp33);
    temp31->Threshold(0.5f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp32);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp32, page4Tab);
    Background(temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), indicator);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
}

// public MainPage New(Fuse.Navigation.Router router) [static] :21
MainPage* MainPage::New5(::g::Fuse::Navigation::Router* router1)
{
    MainPage* obj1 = (MainPage*)uNew(MainPage_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
