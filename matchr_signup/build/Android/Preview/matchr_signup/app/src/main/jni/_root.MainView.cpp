// This file was generated based on /Users/hdc/matchr/matchrapp/matchr_signup/build/Android/Preview/cache/ux11/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainView.h>
#include <_root.matchr_signup_FuseControlsTextInputControl_Value_Property.h>
#include <_root.MyTextInput.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.IResizeMode.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Controls.NativeViewHost.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.TextInputActionStyle.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Controls.TextInputHint.h>
#include <Fuse.Drawing.BrushConverter.h>
#include <Fuse.Drawing.Brushes.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.BoxSizingMode.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Elements.ITransformOrigin.h>
#include <Fuse.Elements.TransformOrigins.h>
#include <Fuse.Elements.TranslationModes.h>
#include <Fuse.FileSystem.FileSystemModule.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.iOS.StatusBarConfig.h>
#include <Fuse.IScalingMode.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Node.h>
#include <Fuse.Platform.StatusBarStyle.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.FuseJS.DiagnosticsImplModule.h>
#include <Fuse.Reactive.FuseJS.Http.h>
#include <Fuse.Reactive.FuseJS.TimerModule.h>
#include <Fuse.Resources.MemoryPolicy.h>
#include <Fuse.ScalingModes.h>
#include <Fuse.Storage.StorageModule.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Actions.GiveFocus.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.BusyTaskModule.h>
#include <Fuse.Triggers.IScrolledLength.h>
#include <Fuse.Triggers.IScrolledLengths.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.WhileKeyboardVisible.h>
#include <Fuse.Visual.h>
#include <Fuse.WebSocket.WebSocketClientModule.h>
#include <FuseJS.Base64.h>
#include <FuseJS.Bundle.h>
#include <FuseJS.Environment.h>
#include <FuseJS.FileReaderImpl.h>
#include <FuseJS.Globals.h>
#include <FuseJS.Lifecycle.h>
#include <FuseJS.UserEvents.h>
#include <Polyfills.Window.WindowModule.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[88];
static uType* TYPES[4];

namespace g{

// public partial sealed class MainView :2
// {
// static MainView() :10
static void MainView__cctor_1_fn(uType* __type)
{
    MainView::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
    MainView::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"transitionS...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::Linear(), ::STRINGS[2/*"Linear"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticIn(), ::STRINGS[3/*"QuadraticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticOut(), ::STRINGS[4/*"QuadraticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticInOut(), ::STRINGS[5/*"QuadraticIn...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicIn(), ::STRINGS[6/*"CubicIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicOut(), ::STRINGS[7/*"CubicOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicInOut(), ::STRINGS[8/*"CubicInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticIn(), ::STRINGS[9/*"QuarticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticOut(), ::STRINGS[10/*"QuarticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticInOut(), ::STRINGS[11/*"QuarticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticIn(), ::STRINGS[12/*"QuinticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticOut(), ::STRINGS[13/*"QuinticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticInOut(), ::STRINGS[14/*"QuinticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalIn(), ::STRINGS[15/*"SinusoidalIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalOut(), ::STRINGS[16/*"SinusoidalOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalInOut(), ::STRINGS[17/*"SinusoidalI...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialIn(), ::STRINGS[18/*"ExponentialIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialOut(), ::STRINGS[19/*"Exponential...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialInOut(), ::STRINGS[20/*"Exponential...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularIn(), ::STRINGS[21/*"CircularIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularOut(), ::STRINGS[22/*"CircularOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularInOut(), ::STRINGS[23/*"CircularInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticIn(), ::STRINGS[24/*"ElasticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticOut(), ::STRINGS[25/*"ElasticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticInOut(), ::STRINGS[26/*"ElasticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackIn(), ::STRINGS[27/*"BackIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackOut(), ::STRINGS[28/*"BackOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackInOut(), ::STRINGS[29/*"BackInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceIn(), ::STRINGS[30/*"BounceIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceOut(), ::STRINGS[31/*"BounceOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceInOut(), ::STRINGS[32/*"BounceInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Transparent()), ::STRINGS[33/*"Transparent"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Transparent(), ::STRINGS[33/*"Transparent"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Black()), ::STRINGS[34/*"Black"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Black(), ::STRINGS[34/*"Black"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Silver()), ::STRINGS[35/*"Silver"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Silver(), ::STRINGS[35/*"Silver"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Gray()), ::STRINGS[36/*"Gray"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Gray(), ::STRINGS[36/*"Gray"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::White()), ::STRINGS[37/*"White"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::White(), ::STRINGS[37/*"White"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Maroon()), ::STRINGS[38/*"Maroon"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Maroon(), ::STRINGS[38/*"Maroon"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Red()), ::STRINGS[39/*"Red"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Red(), ::STRINGS[39/*"Red"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Purple()), ::STRINGS[40/*"Purple"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Purple(), ::STRINGS[40/*"Purple"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Fuchsia()), ::STRINGS[41/*"Fuchsia"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Fuchsia(), ::STRINGS[41/*"Fuchsia"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Green()), ::STRINGS[42/*"Green"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Green(), ::STRINGS[42/*"Green"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Lime()), ::STRINGS[43/*"Lime"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Lime(), ::STRINGS[43/*"Lime"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Olive()), ::STRINGS[44/*"Olive"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Olive(), ::STRINGS[44/*"Olive"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Yellow()), ::STRINGS[45/*"Yellow"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Yellow(), ::STRINGS[45/*"Yellow"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Navy()), ::STRINGS[46/*"Navy"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Navy(), ::STRINGS[46/*"Navy"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Blue()), ::STRINGS[47/*"Blue"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Blue(), ::STRINGS[47/*"Blue"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Teal()), ::STRINGS[48/*"Teal"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Teal(), ::STRINGS[48/*"Teal"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Aqua()), ::STRINGS[49/*"Aqua"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Aqua(), ::STRINGS[49/*"Aqua"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::TopLeft(), ::STRINGS[50/*"TopLeft"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::Center(), ::STRINGS[51/*"Center"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::Anchor(), ::STRINGS[52/*"Anchor"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::HorizontalBoxCenter(), ::STRINGS[53/*"HorizontalB...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::VerticalBoxCenter(), ::STRINGS[54/*"VerticalBox...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::TransformOriginOffset(), ::STRINGS[55/*"TransformOr...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::PositionOffset(), ::STRINGS[56/*"PositionOff...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::SizeFactor(), ::STRINGS[57/*"SizeFactor"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::Size(), ::STRINGS[58/*"Size"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Size(), ::STRINGS[58/*"Size"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::Actions::GiveFocus::Singleton(), ::STRINGS[59/*"GiveFocus"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::WhileKeyboardVisible::Keyboard(), ::STRINGS[60/*"Keyboard"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::PositionLayoutChange(), ::STRINGS[61/*"LayoutChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::SizeLayoutChange(), ::STRINGS[61/*"LayoutChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::WorldPositionChange(), ::STRINGS[62/*"WorldPositi...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::PositionChange(), ::STRINGS[63/*"PositionCha...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::ResizeSizeChange(), ::STRINGS[64/*"SizeChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::ScalingSizeChange(), ::STRINGS[64/*"SizeChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::Points(), ::STRINGS[65/*"Points"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::Pixels(), ::STRINGS[66/*"Pixels"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::ContentSize(), ::STRINGS[67/*"ContentSize"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::ScrollViewSize(), ::STRINGS[68/*"ScrollViewS...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::PreloadRetain(), ::STRINGS[69/*"PreloadRetain"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::UnloadUnused(), ::STRINGS[70/*"UnloadUnused"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::UnloadInBackgroundPolicy(), ::STRINGS[71/*"UnloadInBac...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::PlatformDefault(), ::STRINGS[72/*"PlatformDef...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::ScalingModes::Identity(), ::STRINGS[73/*"Identity"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Local(), ::STRINGS[74/*"Local"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::ParentSize(), ::STRINGS[75/*"ParentSize"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Width(), ::STRINGS[76/*"Width"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Height(), ::STRINGS[77/*"Height"*/]);
}

static void MainView_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("transitionScaleGuide");
    ::STRINGS[2] = uString::Const("Linear");
    ::STRINGS[3] = uString::Const("QuadraticIn");
    ::STRINGS[4] = uString::Const("QuadraticOut");
    ::STRINGS[5] = uString::Const("QuadraticInOut");
    ::STRINGS[6] = uString::Const("CubicIn");
    ::STRINGS[7] = uString::Const("CubicOut");
    ::STRINGS[8] = uString::Const("CubicInOut");
    ::STRINGS[9] = uString::Const("QuarticIn");
    ::STRINGS[10] = uString::Const("QuarticOut");
    ::STRINGS[11] = uString::Const("QuarticInOut");
    ::STRINGS[12] = uString::Const("QuinticIn");
    ::STRINGS[13] = uString::Const("QuinticOut");
    ::STRINGS[14] = uString::Const("QuinticInOut");
    ::STRINGS[15] = uString::Const("SinusoidalIn");
    ::STRINGS[16] = uString::Const("SinusoidalOut");
    ::STRINGS[17] = uString::Const("SinusoidalInOut");
    ::STRINGS[18] = uString::Const("ExponentialIn");
    ::STRINGS[19] = uString::Const("ExponentialOut");
    ::STRINGS[20] = uString::Const("ExponentialInOut");
    ::STRINGS[21] = uString::Const("CircularIn");
    ::STRINGS[22] = uString::Const("CircularOut");
    ::STRINGS[23] = uString::Const("CircularInOut");
    ::STRINGS[24] = uString::Const("ElasticIn");
    ::STRINGS[25] = uString::Const("ElasticOut");
    ::STRINGS[26] = uString::Const("ElasticInOut");
    ::STRINGS[27] = uString::Const("BackIn");
    ::STRINGS[28] = uString::Const("BackOut");
    ::STRINGS[29] = uString::Const("BackInOut");
    ::STRINGS[30] = uString::Const("BounceIn");
    ::STRINGS[31] = uString::Const("BounceOut");
    ::STRINGS[32] = uString::Const("BounceInOut");
    ::STRINGS[33] = uString::Const("Transparent");
    ::STRINGS[34] = uString::Const("Black");
    ::STRINGS[35] = uString::Const("Silver");
    ::STRINGS[36] = uString::Const("Gray");
    ::STRINGS[37] = uString::Const("White");
    ::STRINGS[38] = uString::Const("Maroon");
    ::STRINGS[39] = uString::Const("Red");
    ::STRINGS[40] = uString::Const("Purple");
    ::STRINGS[41] = uString::Const("Fuchsia");
    ::STRINGS[42] = uString::Const("Green");
    ::STRINGS[43] = uString::Const("Lime");
    ::STRINGS[44] = uString::Const("Olive");
    ::STRINGS[45] = uString::Const("Yellow");
    ::STRINGS[46] = uString::Const("Navy");
    ::STRINGS[47] = uString::Const("Blue");
    ::STRINGS[48] = uString::Const("Teal");
    ::STRINGS[49] = uString::Const("Aqua");
    ::STRINGS[50] = uString::Const("TopLeft");
    ::STRINGS[51] = uString::Const("Center");
    ::STRINGS[52] = uString::Const("Anchor");
    ::STRINGS[53] = uString::Const("HorizontalBoxCenter");
    ::STRINGS[54] = uString::Const("VerticalBoxCenter");
    ::STRINGS[55] = uString::Const("TransformOriginOffset");
    ::STRINGS[56] = uString::Const("PositionOffset");
    ::STRINGS[57] = uString::Const("SizeFactor");
    ::STRINGS[58] = uString::Const("Size");
    ::STRINGS[59] = uString::Const("GiveFocus");
    ::STRINGS[60] = uString::Const("Keyboard");
    ::STRINGS[61] = uString::Const("LayoutChange");
    ::STRINGS[62] = uString::Const("WorldPositionChange");
    ::STRINGS[63] = uString::Const("PositionChange");
    ::STRINGS[64] = uString::Const("SizeChange");
    ::STRINGS[65] = uString::Const("Points");
    ::STRINGS[66] = uString::Const("Pixels");
    ::STRINGS[67] = uString::Const("ContentSize");
    ::STRINGS[68] = uString::Const("ScrollViewSize");
    ::STRINGS[69] = uString::Const("PreloadRetain");
    ::STRINGS[70] = uString::Const("UnloadUnused");
    ::STRINGS[71] = uString::Const("UnloadInBackground");
    ::STRINGS[72] = uString::Const("PlatformDefault");
    ::STRINGS[73] = uString::Const("Identity");
    ::STRINGS[74] = uString::Const("Local");
    ::STRINGS[75] = uString::Const("ParentSize");
    ::STRINGS[76] = uString::Const("Width");
    ::STRINGS[77] = uString::Const("Height");
    ::STRINGS[78] = uString::Const("email");
    ::STRINGS[79] = uString::Const("userid");
    ::STRINGS[80] = uString::Const("passwd");
    ::STRINGS[81] = uString::Const("repasswd");
    ::STRINGS[82] = uString::Const("signup");
    ::STRINGS[83] = uString::Const("Email Address");
    ::STRINGS[84] = uString::Const("User ID");
    ::STRINGS[85] = uString::Const("Password");
    ::STRINGS[86] = uString::Const("Repeat password");
    ::STRINGS[87] = uString::Const("Sign Up");
    ::TYPES[0] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    type->SetFields(7,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb0), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView, temp3_Value_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, transitionScaleGuide), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__New1_fn, 0, true, type, 0));
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::App_typeof();
    options.FieldCount = 15;
    options.ObjectSize = sizeof(MainView);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("MainView", options);
    type->fp_build_ = MainView_build;
    type->fp_ctor_ = (void*)MainView__New1_fn;
    type->fp_cctor_ = MainView__cctor_1_fn;
    return type;
}

// public MainView() :110
void MainView__ctor_4_fn(MainView* __this)
{
    __this->ctor_4();
}

// private void InitializeUX() :114
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :110
void MainView__New1_fn(MainView** __retval)
{
    *__retval = MainView::New1();
}

::g::Uno::UX::Selector MainView::__selector0_;
::g::Uno::UX::Selector MainView::__selector1_;

// public MainView() [instance] :110
void MainView::ctor_4()
{
    uStackFrame __("MainView", ".ctor()");
    ctor_3();
    InitializeUX();
}

// private void InitializeUX() [instance] :114
void MainView::InitializeUX()
{
    uStackFrame __("MainView", "InitializeUX()");
    ::g::Fuse::Reactive::FuseJS::DiagnosticsImplModule* temp4 = ::g::Fuse::Reactive::FuseJS::DiagnosticsImplModule::New2();
    ::g::Fuse::Reactive::FuseJS::Http* temp5 = ::g::Fuse::Reactive::FuseJS::Http::New2();
    ::g::Fuse::Reactive::FuseJS::TimerModule* temp6 = ::g::Fuse::Reactive::FuseJS::TimerModule::New2();
    ::g::Fuse::Drawing::BrushConverter* temp7 = ::g::Fuse::Drawing::BrushConverter::New1();
    ::g::Fuse::Triggers::BusyTaskModule* temp8 = ::g::Fuse::Triggers::BusyTaskModule::New2();
    ::g::Fuse::FileSystem::FileSystemModule* temp9 = ::g::Fuse::FileSystem::FileSystemModule::New2();
    ::g::Fuse::Storage::StorageModule* temp10 = ::g::Fuse::Storage::StorageModule::New2();
    ::g::Fuse::WebSocket::WebSocketClientModule* temp11 = ::g::Fuse::WebSocket::WebSocketClientModule::New2();
    ::g::Polyfills::Window::WindowModule* temp12 = ::g::Polyfills::Window::WindowModule::New3();
    ::g::FuseJS::Globals* temp13 = ::g::FuseJS::Globals::New2();
    ::g::FuseJS::Lifecycle* temp14 = ::g::FuseJS::Lifecycle::New3();
    ::g::FuseJS::Environment* temp15 = ::g::FuseJS::Environment::New2();
    ::g::FuseJS::Base64* temp16 = ::g::FuseJS::Base64::New2();
    ::g::FuseJS::Bundle* temp17 = ::g::FuseJS::Bundle::New2();
    ::g::FuseJS::FileReaderImpl* temp18 = ::g::FuseJS::FileReaderImpl::New2();
    ::g::FuseJS::UserEvents* temp19 = ::g::FuseJS::UserEvents::New2();
    ::g::MyTextInput* temp = ::g::MyTextInput::New4();
    temp_Value_inst = ::g::matchr_signup_FuseControlsTextInputControl_Value_Property::New1(temp, MainView::__selector0());
    ::g::MyTextInput* temp1 = ::g::MyTextInput::New4();
    temp1_Value_inst = ::g::matchr_signup_FuseControlsTextInputControl_Value_Property::New1(temp1, MainView::__selector0());
    ::g::MyTextInput* temp2 = ::g::MyTextInput::New4();
    temp2_Value_inst = ::g::matchr_signup_FuseControlsTextInputControl_Value_Property::New1(temp2, MainView::__selector0());
    ::g::MyTextInput* temp3 = ::g::MyTextInput::New4();
    temp3_Value_inst = ::g::matchr_signup_FuseControlsTextInputControl_Value_Property::New1(temp3, MainView::__selector0());
    ::g::Fuse::Controls::Panel* temp20 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::iOS::StatusBarConfig* temp21 = ::g::Fuse::iOS::StatusBarConfig::New2();
    transitionScaleGuide = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp22 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp23 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<string>*/], temp_Value_inst, ::STRINGS[78/*"email"*/]);
    ::g::Fuse::Reactive::DataBinding* temp24 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<string>*/], temp1_Value_inst, ::STRINGS[79/*"userid"*/]);
    ::g::Fuse::Reactive::DataBinding* temp25 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<string>*/], temp2_Value_inst, ::STRINGS[80/*"passwd"*/]);
    ::g::Fuse::Reactive::DataBinding* temp26 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<string>*/], temp3_Value_inst, ::STRINGS[81/*"repasswd"*/]);
    ::g::Fuse::Controls::NativeViewHost* temp27 = ::g::Fuse::Controls::NativeViewHost::New3();
    ::g::Fuse::Controls::Button* temp28 = ::g::Fuse::Controls::Button::New5();
    temp_eb0 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[82/*"signup"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), transitionScaleGuide);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    temp21->Style(1);
    uPtr(transitionScaleGuide)->Aspect(1.0f);
    uPtr(transitionScaleGuide)->HitTestMode(0);
    uPtr(transitionScaleGuide)->Width(::g::Uno::UX::Size__New1(500.0f, 4));
    uPtr(transitionScaleGuide)->Height(::g::Uno::UX::Size__New1(500.0f, 4));
    uPtr(transitionScaleGuide)->Alignment(10);
    uPtr(transitionScaleGuide)->BoxSizing(4);
    uPtr(transitionScaleGuide)->Name(MainView::__selector1());
    temp22->ItemSpacing(10.0f);
    temp22->Alignment(8);
    temp22->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    temp->PlaceholderText(::STRINGS[83/*"Email Address"*/]);
    temp->ActionStyle(2);
    temp->InputHint(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp23);
    temp1->PlaceholderText(::STRINGS[84/*"User ID"*/]);
    temp1->ActionStyle(2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp24);
    temp2->IsPassword(true);
    temp2->PlaceholderText(::STRINGS[85/*"Password"*/]);
    temp2->ActionStyle(2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp25);
    temp3->IsPassword(true);
    temp3->PlaceholderText(::STRINGS[86/*"Repeat pass...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    temp28->Text(::STRINGS[87/*"Sign Up"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp28, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb0)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
}

// public MainView New() [static] :110
MainView* MainView::New1()
{
    MainView* obj1 = (MainView*)uNew(MainView_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

} // ::g
