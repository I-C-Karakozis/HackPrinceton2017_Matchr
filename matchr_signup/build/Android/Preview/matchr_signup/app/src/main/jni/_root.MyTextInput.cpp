// This file was generated based on /Users/hdc/matchr/matchrapp/matchr_signup/build/Android/Preview/cache/ux11/MyTextInput.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MyTextInput.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Layer.h>
#include <Fuse.Visual.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
static uType* TYPES[3];

namespace g{

// public partial sealed class MyTextInput :2
// {
// static MyTextInput() :4
static void MyTextInput__cctor_3_fn(uType* __type)
{
}

static void MyTextInput_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::TextInput_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::TextInput_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::TextInput_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::TextInput_type, interface3),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::TextInput_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::TextInput_type, interface5),
        ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::TextInput_type, interface6),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::TextInput_type, interface7),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::TextInput_type, interface8),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::TextInput_type, interface9),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::TextInput_type, interface10),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::TextInput_type, interface11),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::TextInput_type, interface12),
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::Fuse::Controls::TextInput_type, interface13),
        ::g::Fuse::Controls::ITextEditControl_typeof(), offsetof(::g::Fuse::Controls::TextInput_type, interface14));
    type->SetFields(95);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MyTextInput__New4_fn, 0, true, type, 0));
}

::g::Fuse::Controls::TextInput_type* MyTextInput_typeof()
{
    static uSStrong< ::g::Fuse::Controls::TextInput_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::TextInput_typeof();
    options.FieldCount = 95;
    options.InterfaceCount = 15;
    options.ObjectSize = sizeof(MyTextInput);
    options.TypeSize = sizeof(::g::Fuse::Controls::TextInput_type);
    type = (::g::Fuse::Controls::TextInput_type*)uClassType::New("MyTextInput", options);
    type->fp_build_ = MyTextInput_build;
    type->fp_ctor_ = (void*)MyTextInput__New4_fn;
    type->fp_cctor_ = MyTextInput__cctor_3_fn;
    type->interface14.fp_get_IsPassword = (void(*)(uObject*, bool*))::g::Fuse::Controls::TextInput__get_IsPassword_fn;
    type->interface14.fp_set_IsPassword = (void(*)(uObject*, bool*))::g::Fuse::Controls::TextInput__set_IsPassword_fn;
    type->interface14.fp_add_ActionTriggered = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::TextInput__add_ActionTriggered_fn;
    type->interface14.fp_remove_ActionTriggered = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::TextInput__remove_ActionTriggered_fn;
    type->interface13.fp_get_Value = (void(*)(uObject*, uTRef))::g::Fuse::Controls::TextInputControl__get_Value_fn;
    type->interface13.fp_set_Value = (void(*)(uObject*, void*))::g::Fuse::Controls::TextInputControl__set_Value_fn;
    type->interface13.fp_add_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::TextInputControl__add_ValueChanged_fn;
    type->interface13.fp_remove_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::TextInputControl__remove_ValueChanged_fn;
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
    type->interface5.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::TextInputControl__OnPropertyChanged2_fn;
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

// public MyTextInput() :8
void MyTextInput__ctor_8_fn(MyTextInput* __this)
{
    __this->ctor_8();
}

// private void InitializeUX() :12
void MyTextInput__InitializeUX_fn(MyTextInput* __this)
{
    __this->InitializeUX();
}

// public MyTextInput New() :8
void MyTextInput__New4_fn(MyTextInput** __retval)
{
    *__retval = MyTextInput::New4();
}

// public MyTextInput() [instance] :8
void MyTextInput::ctor_8()
{
    uStackFrame __("MyTextInput", ".ctor()");
    ctor_7();
    InitializeUX();
}

// private void InitializeUX() [instance] :12
void MyTextInput::InitializeUX()
{
    uStackFrame __("MyTextInput", "InitializeUX()");
    ::g::Fuse::Controls::Rectangle* temp = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp1 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::SolidColor* temp2 = ::g::Fuse::Drawing::SolidColor::New2();
    PlaceholderColor(::g::Uno::Float4__New2(0.8f, 0.8f, 0.8f, 1.0f));
    FontSize(20.0f);
    Padding(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp->CornerRadius(::g::Uno::Float4__New2(3.0f, 3.0f, 3.0f, 3.0f));
    temp->Layer(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Fills()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Strokes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp1);
    temp1->Color(::g::Uno::Float4__New2(0.8f, 0.8f, 0.8f, 1.0f));
    temp1->Width(1.0f);
    temp2->Color(::g::Fuse::Drawing::Colors::White());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
}

// public MyTextInput New() [static] :8
MyTextInput* MyTextInput::New4()
{
    MyTextInput* obj1 = (MyTextInput*)uNew(MyTextInput_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

} // ::g
