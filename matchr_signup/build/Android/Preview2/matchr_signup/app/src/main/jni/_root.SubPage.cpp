// This file was generated based on /Users/hdc/matchr/matchrapp/HackPrinceton2017_Matchr/matchr_signup/build/Android/Preview2/cache/ux11/SubPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.matchr_signup_FuseControlsTextControl_Value_Property.h>
#include <_root.NavBarTitle.h>
#include <_root.SubPage.h>
#include <Fuse.AlternateRoot.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.ImageFill.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.BoxSizingMode.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Visual.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[11];
static uType* TYPES[8];

namespace g{

// public partial sealed class SubPage :2
// {
// static SubPage() :12
static void SubPage__cctor_4_fn(uType* __type)
{
    SubPage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 1, ::STRINGS[0/*"navBar"*/]);
    SubPage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Value"*/]);
}

static void SubPage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("navBar");
    ::STRINGS[1] = uString::Const("Value");
    ::STRINGS[2] = uString::Const("onClick");
    ::STRINGS[3] = uString::Const("title");
    ::STRINGS[4] = uString::Const("exports.title = this.Parameter.map(function(param) {\n"
        "\t\t\treturn param.title;\n"
        "\t\t});");
    ::STRINGS[5] = uString::Const("Pages/SubPage.ux");
    ::STRINGS[6] = uString::Const("http://cliqueimg.com/cache/posts/120978/depressing-study-reveals-the-age-men-find-women-most-attractive-120978-main.640x0c.jpg");
    ::STRINGS[7] = uString::Const("Matched by SOMEONE");
    ::STRINGS[8] = uString::Const("on DATE");
    ::STRINGS[9] = uString::Const("Add");
    ::STRINGS[10] = uString::Const("Message");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface1),
        ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Control_type, interface2),
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
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::SubPage, __g_nametable1), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::SubPage, navBar), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::SubPage, temp_eb7), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::SubPage, temp_eb8), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::SubPage, temp_Value_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::SubPage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::SubPage::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)SubPage__New5_fn, 0, true, type, 1, ::g::Fuse::Visual_typeof()));
}

::g::Fuse::Controls::Control_type* SubPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 109;
    options.InterfaceCount = 13;
    options.ObjectSize = sizeof(SubPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Control_type);
    type = (::g::Fuse::Controls::Control_type*)uClassType::New("SubPage", options);
    type->fp_build_ = SubPage_build;
    type->fp_cctor_ = SubPage__cctor_4_fn;
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

// public SubPage(Fuse.Visual navBar) :16
void SubPage__ctor_8_fn(SubPage* __this, ::g::Fuse::Visual* navBar1)
{
    __this->ctor_8(navBar1);
}

// private void InitializeUX() :22
void SubPage__InitializeUX_fn(SubPage* __this)
{
    __this->InitializeUX();
}

// public SubPage New(Fuse.Visual navBar) :16
void SubPage__New5_fn(::g::Fuse::Visual* navBar1, SubPage** __retval)
{
    *__retval = SubPage::New5(navBar1);
}

uSStrong<uArray*> SubPage::__g_static_nametable1_;
::g::Uno::UX::Selector SubPage::__selector0_;

// public SubPage(Fuse.Visual navBar) [instance] :16
void SubPage::ctor_8(::g::Fuse::Visual* navBar1)
{
    uStackFrame __("SubPage", ".ctor(Fuse.Visual)");
    ctor_7();
    navBar = navBar1;
    InitializeUX();
}

// private void InitializeUX() [instance] :22
void SubPage::InitializeUX()
{
    uStackFrame __("SubPage", "InitializeUX()");
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, SubPage::__g_static_nametable1());
    ::g::NavBarTitle* temp = ::g::NavBarTitle::New4();
    temp_Value_inst = ::g::matchr_signup_FuseControlsTextControl_Value_Property::New1(temp, SubPage::__selector0());
    ::g::Fuse::Reactive::JavaScript* temp1 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::StackPanel* temp2 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Text* temp3 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp4 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Panel* temp5 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Circle* temp6 = ::g::Fuse::Controls::Circle::New3();
    ::g::Fuse::Drawing::ImageFill* temp7 = ::g::Fuse::Drawing::ImageFill::New2();
    ::g::Fuse::Drawing::Stroke* temp8 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp9 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.6666667f, 0.6666667f, 0.6666667f, 1.0f));
    ::g::Fuse::Controls::Text* temp10 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp11 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp12 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp13 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp14 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::DockPanel* temp15 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Button* temp16 = ::g::Fuse::Controls::Button::New5();
    temp_eb7 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[2/*"onClick"*/]);
    ::g::Fuse::Controls::Button* temp17 = ::g::Fuse::Controls::Button::New5();
    temp_eb8 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[2/*"onClick"*/]);
    ::g::Fuse::Controls::Text* temp18 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Panel* temp19 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::AlternateRoot* temp20 = ::g::Fuse::AlternateRoot::New2();
    ::g::Fuse::Reactive::DataBinding* temp21 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<string>*/], temp_Value_inst, ::STRINGS[3/*"title"*/]);
    temp1->Code(::STRINGS[4/*"exports.tit...*/]);
    temp1->LineNumber(2);
    temp1->FileName(::STRINGS[5/*"Pages/SubPa...*/]);
    temp2->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    temp5->Width(::g::Uno::UX::Size__New1(175.0f, 1));
    temp5->Height(::g::Uno::UX::Size__New1(175.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Fills()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Strokes()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp8);
    temp7->Url(::STRINGS[6/*"http://cliq...*/]);
    temp7->ContentAlignment(6);
    temp8->Width(1.0f);
    temp8->Brush(temp9);
    temp11->Value(::STRINGS[7/*"Matched by ...*/]);
    temp11->Alignment(10);
    temp12->Value(::STRINGS[8/*"on DATE"*/]);
    temp12->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    temp16->Text(::STRINGS[9/*"Add"*/]);
    temp16->Aspect(5.0f);
    temp16->BoxSizing(4);
    ::g::Fuse::Controls::DockPanel::SetDock(temp16, 0);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp16, uDelegate::New(::TYPES[5/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb7)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb7);
    temp17->Text(::STRINGS[10/*"Message"*/]);
    temp17->Aspect(5.0f);
    temp17->BoxSizing(4);
    ::g::Fuse::Controls::DockPanel::SetDock(temp17, 1);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp17, uDelegate::New(::TYPES[5/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb8)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    temp20->ParentNode(navBar);
    temp20->Node(temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp21);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), navBar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
}

// public SubPage New(Fuse.Visual navBar) [static] :16
SubPage* SubPage::New5(::g::Fuse::Visual* navBar1)
{
    SubPage* obj1 = (SubPage*)uNew(SubPage_typeof());
    obj1->ctor_8(navBar1);
    return obj1;
}
// }

} // ::g
