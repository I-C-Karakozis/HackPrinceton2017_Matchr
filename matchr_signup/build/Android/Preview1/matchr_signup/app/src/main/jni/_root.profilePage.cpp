// This file was generated based on /Users/hdc/matchr/matchrapp/HackPrinceton2017_Matchr/matchr_signup/build/Android/Preview1/cache/ux11/profilePage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.BodyText.h>
#include <_root.HomePage.h>
#include <_root.matchr_signup_bundle.h>
#include <_root.matchr_signup_FuseControlsMultiLayoutPanel_LayoutElement_Property.h>
#include <_root.matchr_signup_FuseElementsElement_Opacity_Property.h>
#include <_root.matchr_signup_FuseiOSStatusBarConfig_Style_Property.h>
#include <_root.profilePage.h>
#include <_root.TitleText.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.Scale.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.Controls.BottomBarBackground.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.MultiLayoutPanel.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Placeholder.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.StatusBarBackground.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.Brushes.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Elements.ITransformOrigin.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Elements.TransformOrigins.h>
#include <Fuse.Font.h>
#include <Fuse.iOS.StatusBarConfig.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Platform.StatusBarStyle.h>
#include <Fuse.Scaling.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.ScrollingAnimation.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Size2.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[15];
static uType* TYPES[6];

namespace g{

// public partial sealed class profilePage :2
// {
// static profilePage() :16
static void profilePage__cctor_4_fn(uType* __type)
{
    profilePage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"LayoutElement"*/]);
    profilePage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Opacity"*/]);
    profilePage::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Style"*/]);
    profilePage::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"headerPanel"*/]);
    profilePage::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"overBackgro...*/]);
    profilePage::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"facePicture"*/]);
    profilePage::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"textPanel"*/]);
    profilePage::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"topText"*/]);
    profilePage::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"bottomText"*/]);
    profilePage::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"backgroundP...*/]);
    profilePage::__selector10_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[10/*"underBackgr...*/]);
    profilePage::__selector11_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[11/*"statusBarCo...*/]);
}

static void profilePage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("LayoutElement");
    ::STRINGS[1] = uString::Const("Opacity");
    ::STRINGS[2] = uString::Const("Style");
    ::STRINGS[3] = uString::Const("headerPanel");
    ::STRINGS[4] = uString::Const("overBackgroundLayout");
    ::STRINGS[5] = uString::Const("facePicture");
    ::STRINGS[6] = uString::Const("textPanel");
    ::STRINGS[7] = uString::Const("topText");
    ::STRINGS[8] = uString::Const("bottomText");
    ::STRINGS[9] = uString::Const("backgroundPicture");
    ::STRINGS[10] = uString::Const("underBackgroundLayout");
    ::STRINGS[11] = uString::Const("statusBarConfig");
    ::STRINGS[12] = uString::Const("john doe");
    ::STRINGS[13] = uString::Const("Edit Picture");
    ::STRINGS[14] = uString::Const("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vivamus faucibus libero eu nisi mollis, ac consequat augue finibus. Vivamus pulvinar ut tortor eu ultricies. Aliquam consectetur quam sed dapibus eleifend. Vestibulum consequat lorem iaculis efficitur dignissim. Mauris sagittis aliquam varius. In venenatis neque nec mauris egestas aliquet. Integer posuere condimentum ante quis pharetra. Donec non ipsum sed nisl sollicitudin pharetra vel a nisl. Vestibulum consequat, odio id faucibus rutrum, tortor mauris elementum dui, eget ornare urna ligula nec metus.");
    ::TYPES[0] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Fuse::Platform::StatusBarStyle_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface3),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface5),
        ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Control_type, interface6),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface7),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface8),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface9),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface10),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface11),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface12));
    type->SetFields(102,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::profilePage, backgroundPicture), 0,
        ::g::TitleText_typeof(), offsetof(::g::profilePage, bottomText), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::profilePage, bottomText_Opacity_inst), 0,
        ::g::Fuse::Controls::Image_typeof(), offsetof(::g::profilePage, facePicture), 0,
        ::g::Fuse::Controls::MultiLayoutPanel_typeof(), offsetof(::g::profilePage, headerPanel), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL), offsetof(::g::profilePage, headerPanel_LayoutElement_inst), 0,
        ::g::Fuse::Controls::Placeholder_typeof(), offsetof(::g::profilePage, overBackgroundLayout), 0,
        ::g::Fuse::iOS::StatusBarConfig_typeof(), offsetof(::g::profilePage, statusBarConfig), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Platform::StatusBarStyle_typeof(), NULL), offsetof(::g::profilePage, statusBarConfig_Style_inst), 0,
        ::g::Fuse::Controls::StackPanel_typeof(), offsetof(::g::profilePage, textPanel), 0,
        ::g::TitleText_typeof(), offsetof(::g::profilePage, topText), 0,
        ::g::Fuse::Controls::Placeholder_typeof(), offsetof(::g::profilePage, underBackgroundLayout), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::profilePage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::profilePage::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::profilePage::__selector10_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::profilePage::__selector11_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::profilePage::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::profilePage::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::profilePage::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::profilePage::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::profilePage::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::profilePage::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::profilePage::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::profilePage::__selector9_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)profilePage__New5_fn, 0, true, type, 0));
}

::g::Fuse::Controls::Control_type* profilePage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 126;
    options.InterfaceCount = 13;
    options.ObjectSize = sizeof(profilePage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Control_type);
    type = (::g::Fuse::Controls::Control_type*)uClassType::New("profilePage", options);
    type->fp_build_ = profilePage_build;
    type->fp_ctor_ = (void*)profilePage__New5_fn;
    type->fp_cctor_ = profilePage__cctor_4_fn;
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

// public profilePage() :20
void profilePage__ctor_8_fn(profilePage* __this)
{
    __this->ctor_8();
}

// private void InitializeUX() :24
void profilePage__InitializeUX_fn(profilePage* __this)
{
    __this->InitializeUX();
}

// public profilePage New() :20
void profilePage__New5_fn(profilePage** __retval)
{
    *__retval = profilePage::New5();
}

::g::Uno::UX::Selector profilePage::__selector0_;
::g::Uno::UX::Selector profilePage::__selector1_;
::g::Uno::UX::Selector profilePage::__selector10_;
::g::Uno::UX::Selector profilePage::__selector11_;
::g::Uno::UX::Selector profilePage::__selector2_;
::g::Uno::UX::Selector profilePage::__selector3_;
::g::Uno::UX::Selector profilePage::__selector4_;
::g::Uno::UX::Selector profilePage::__selector5_;
::g::Uno::UX::Selector profilePage::__selector6_;
::g::Uno::UX::Selector profilePage::__selector7_;
::g::Uno::UX::Selector profilePage::__selector8_;
::g::Uno::UX::Selector profilePage::__selector9_;

// public profilePage() [instance] :20
void profilePage::ctor_8()
{
    uStackFrame __("profilePage", ".ctor()");
    ctor_7();
    InitializeUX();
}

// private void InitializeUX() [instance] :24
void profilePage::InitializeUX()
{
    uStackFrame __("profilePage", "InitializeUX()");
    headerPanel = ::g::Fuse::Controls::MultiLayoutPanel::New4();
    headerPanel_LayoutElement_inst = ::g::matchr_signup_FuseControlsMultiLayoutPanel_LayoutElement_Property::New1(headerPanel, profilePage::__selector0());
    bottomText = ::g::TitleText::New4();
    bottomText_Opacity_inst = ::g::matchr_signup_FuseElementsElement_Opacity_Property::New1(bottomText, profilePage::__selector1());
    statusBarConfig = ::g::Fuse::iOS::StatusBarConfig::New2();
    statusBarConfig_Style_inst = ::g::matchr_signup_FuseiOSStatusBarConfig_Style_Property::New1(statusBarConfig, profilePage::__selector2());
    ::g::Fuse::Controls::StatusBarBackground* temp = ::g::Fuse::Controls::StatusBarBackground::New3();
    ::g::Fuse::Controls::BottomBarBackground* temp1 = ::g::Fuse::Controls::BottomBarBackground::New3();
    ::g::Fuse::Controls::Panel* temp2 = ::g::Fuse::Controls::Panel::New3();
    overBackgroundLayout = ::g::Fuse::Controls::Placeholder::New3();
    facePicture = ::g::Fuse::Controls::Image::New3();
    textPanel = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StatusBarBackground* temp3 = ::g::Fuse::Controls::StatusBarBackground::New3();
    topText = ::g::TitleText::New4();
    backgroundPicture = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Image* temp4 = ::g::Fuse::Controls::Image::New3();
    underBackgroundLayout = ::g::Fuse::Controls::Placeholder::New3();
    ::g::Fuse::Controls::ScrollView* temp5 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Triggers::ScrollingAnimation* temp6 = ::g::Fuse::Triggers::ScrollingAnimation::New2();
    ::g::Fuse::Animations::Scale* temp7 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Animations::Move* temp8 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Triggers::ScrollingAnimation* temp9 = ::g::Fuse::Triggers::ScrollingAnimation::New2();
    ::g::Fuse::Triggers::Actions::Set* temp10 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Element>*/], headerPanel_LayoutElement_inst);
    ::g::Fuse::Triggers::ScrollingAnimation* temp11 = ::g::Fuse::Triggers::ScrollingAnimation::New2();
    ::g::Fuse::Triggers::Actions::Set* temp12 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Elements.Element>*/], headerPanel_LayoutElement_inst);
    ::g::Fuse::Triggers::ScrollingAnimation* temp13 = ::g::Fuse::Triggers::ScrollingAnimation::New2();
    ::g::Fuse::Animations::Move* temp14 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Triggers::ScrollingAnimation* temp15 = ::g::Fuse::Triggers::ScrollingAnimation::New2();
    ::g::Fuse::Animations::Move* temp16 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Move* temp17 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Move* temp18 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Change* temp19 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], bottomText_Opacity_inst);
    ::g::Fuse::Triggers::ScrollingAnimation* temp20 = ::g::Fuse::Triggers::ScrollingAnimation::New2();
    ::g::Fuse::Animations::Change* temp21 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<Fuse.Platform.StatusBarStyle>*/], statusBarConfig_Style_inst);
    ::g::Fuse::Triggers::ScrollingAnimation* temp22 = ::g::Fuse::Triggers::ScrollingAnimation::New2();
    ::g::Fuse::Animations::Scale* temp23 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Animations::Move* temp24 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Controls::StackPanel* temp25 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Text* temp26 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp27 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::BodyText* temp28 = ::g::BodyText::New4();
    ::g::Fuse::Controls::StatusBarBackground* temp29 = ::g::Fuse::Controls::StatusBarBackground::New3();
    ::g::Fuse::Controls::DockPanel::SetDock(temp, 2);
    ::g::Fuse::Controls::DockPanel::SetDock(temp1, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), headerPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    uPtr(headerPanel)->HitTestMode(0);
    uPtr(headerPanel)->Height(::g::Uno::UX::Size__New1(260.0f, 1));
    uPtr(headerPanel)->Alignment(4);
    uPtr(headerPanel)->Name(profilePage::__selector3());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(headerPanel)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), overBackgroundLayout);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(headerPanel)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), textPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(headerPanel)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), backgroundPicture);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(headerPanel)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), underBackgroundLayout);
    uPtr(overBackgroundLayout)->Name(profilePage::__selector4());
    uPtr(overBackgroundLayout)->PlaceholderContent(facePicture);
    uPtr(facePicture)->Width(::g::Uno::UX::Size__New1(150.0f, 1));
    uPtr(facePicture)->Height(::g::Uno::UX::Size__New1(150.0f, 1));
    uPtr(facePicture)->Alignment(14);
    uPtr(facePicture)->Offset(::g::Uno::UX::Size2__New1(::g::Uno::UX::Size__New1(0.0f, 1), ::g::Uno::UX::Size__New1(75.0f, 1)));
    uPtr(facePicture)->Name(profilePage::__selector5());
    uPtr(facePicture)->File(::g::Uno::UX::BundleFileSource::New1(::g::matchr_signup_bundle::avatar5efcc3bb()));
    uPtr(textPanel)->Alignment(10);
    uPtr(textPanel)->Name(profilePage::__selector6());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(textPanel)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(textPanel)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), topText);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(textPanel)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), bottomText);
    temp3->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 10.0f));
    uPtr(topText)->Value(::STRINGS[12/*"john doe"*/]);
    uPtr(topText)->FontSize(30.0f);
    uPtr(topText)->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    uPtr(topText)->Name(profilePage::__selector7());
    uPtr(topText)->Font(::g::HomePage::Comfortaa());
    uPtr(bottomText)->FontSize(20.0f);
    uPtr(bottomText)->Name(profilePage::__selector8());
    uPtr(bottomText)->Font(::g::HomePage::Comfortaa());
    uPtr(backgroundPicture)->Alignment(4);
    uPtr(backgroundPicture)->Anchor(::g::Uno::UX::Size2__New1(::g::Uno::UX::Size__New1(50.0f, 4), ::g::Uno::UX::Size__New1(0.0f, 4)));
    uPtr(backgroundPicture)->Name(profilePage::__selector9());
    uPtr(backgroundPicture)->Background(::g::Fuse::Drawing::Brushes::Black());
    uPtr(backgroundPicture)->TransformOrigin(::g::Fuse::Elements::TransformOrigins::Anchor());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(backgroundPicture)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    temp4->StretchMode(6);
    temp4->File(::g::Uno::UX::BundleFileSource::New1(::g::matchr_signup_bundle::back2d5e0901()));
    temp4->Background(::g::Fuse::Drawing::Brushes::Black());
    uPtr(underBackgroundLayout)->Name(profilePage::__selector10());
    uPtr(underBackgroundLayout)->Target(facePicture);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    temp6->From(0.0f);
    temp6->To(150.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp8);
    temp7->Factor(0.6f);
    temp7->Target(facePicture);
    temp7->Easing(::g::Fuse::Animations::Easing::QuadraticInOut());
    temp8->Y(-0.8f);
    temp8->RelativeTo(::g::Fuse::TranslationModes::Size());
    temp8->Target(facePicture);
    temp8->Easing(::g::Fuse::Animations::Easing::QuadraticIn());
    temp9->From(125.0f);
    temp9->To(0.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Actions()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp10);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp10, overBackgroundLayout);
    temp11->From(125.0f);
    temp11->To(170.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Actions()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp12);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp12, underBackgroundLayout);
    temp13->From(150.0f);
    temp13->To(1000.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp14);
    temp14->Y(-850.0f);
    temp14->Target(facePicture);
    temp14->Easing(::g::Fuse::Animations::Easing::Linear());
    temp15->From(0.0f);
    temp15->To(260.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp19);
    temp16->Y(-0.7f);
    temp16->RelativeTo(::g::Fuse::TranslationModes::Size());
    temp16->Target(backgroundPicture);
    temp16->Easing(::g::Fuse::Animations::Easing::QuadraticOut());
    temp17->Y(-0.35f);
    temp17->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    temp17->Target(textPanel);
    temp17->Easing(::g::Fuse::Animations::Easing::QuadraticOut());
    temp18->Y(-0.3f);
    temp18->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    temp18->Target(bottomText);
    temp18->Easing(::g::Fuse::Animations::Easing::QuadraticOut());
    ::g::Fuse::Animations::Change__set_Value_fn(temp19, uCRef(0.0f));
    temp19->Easing(::g::Fuse::Animations::Easing::QuadraticOut());
    temp20->From(50.0f);
    temp20->To(250.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp21);
    ::g::Fuse::Animations::Change__set_Value_fn(temp21, uCRef<int>(1));
    temp22->From(0.0f);
    temp22->To(-1000.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp24);
    temp23->Factor(4.0f);
    temp23->Target(backgroundPicture);
    temp24->Y(800.0f);
    temp24->Target(facePicture);
    temp25->Padding(::g::Uno::Float4__New2(0.0f, 370.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    temp26->Value(::STRINGS[13/*"Edit Picture"*/]);
    temp26->Alignment(10);
    temp26->Font(::g::HomePage::Comfortaa());
    temp27->Color(::g::Uno::Float4__New2(0.8823529f, 0.8823529f, 0.8823529f, 1.0f));
    temp27->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    temp27->Margin(::g::Uno::Float4__New2(50.0f, 0.0f, 50.0f, 0.0f));
    temp28->Value(::STRINGS[14/*"Lorem ipsum...*/]);
    temp28->FontSize(16.0f);
    temp28->Margin(::g::Uno::Float4__New2(50.0f, 40.0f, 50.0f, 0.0f));
    temp28->Font(::g::HomePage::Comfortaa());
    uPtr(statusBarConfig)->Style(0);
    uPtr(statusBarConfig)->Name(profilePage::__selector11());
    ::g::Fuse::Controls::DockPanel::SetDock(temp29, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), statusBarConfig);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
}

// public profilePage New() [static] :20
profilePage* profilePage::New5()
{
    profilePage* obj1 = (profilePage*)uNew(profilePage_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

} // ::g
