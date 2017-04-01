[Uno.Compiler.UxGenerated]
public partial class SelectView: Fuse.Controls.Page
{
    global::Uno.UX.Property<string> __gen0_Value_inst;
    global::Uno.UX.Property<string> __gen1_Right_inst;
    global::Uno.UX.Property<string> __gen1_Left_inst;
    global::Uno.UX.Property<string> __gen2_Right_inst;
    global::Uno.UX.Property<string> __gen3_Value_inst;
    global::Uno.UX.Property<string> __gen4_Right_inst;
    global::Uno.UX.Property<string> __gen4_Left_inst;
    global::Uno.UX.Property<string> __gen5_Right_inst;
    internal Fuse.Controls.Text __gen0;
    internal Uno.UX.StringConcatOperator __gen1;
    internal Uno.UX.StringConcatOperator __gen2;
    internal Fuse.Reactive.EventBinding temp_eb0;
    internal Fuse.Reactive.EventBinding temp_eb1;
    internal Fuse.Controls.Text __gen3;
    internal Uno.UX.StringConcatOperator __gen4;
    internal Uno.UX.StringConcatOperator __gen5;
    internal Fuse.Reactive.EventBinding temp_eb2;
    internal Fuse.Reactive.EventBinding temp_eb3;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "__gen0",
        "__gen1",
        "__gen2",
        "__gen3",
        "__gen4",
        "__gen5"
    };
    static SelectView()
    {
    }
    [global::Uno.UX.UXConstructor]
    public SelectView()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        __gen0 = new Fuse.Controls.Text();
        __gen0_Value_inst = new matchr_FuseControlsTextControl_Value_Property(__gen0, __selector0);
        __gen1 = new Uno.UX.StringConcatOperator();
        __gen1_Right_inst = new matchr_UnoUXStringConcatOperator_Right_Property(__gen1, __selector1);
        __gen1_Left_inst = new matchr_UnoUXStringConcatOperator_Left_Property(__gen1, __selector2);
        __gen2 = new Uno.UX.StringConcatOperator();
        __gen2_Right_inst = new matchr_UnoUXStringConcatOperator_Right_Property(__gen2, __selector1);
        __gen3 = new Fuse.Controls.Text();
        __gen3_Value_inst = new matchr_FuseControlsTextControl_Value_Property(__gen3, __selector0);
        __gen4 = new Uno.UX.StringConcatOperator();
        __gen4_Right_inst = new matchr_UnoUXStringConcatOperator_Right_Property(__gen4, __selector1);
        __gen4_Left_inst = new matchr_UnoUXStringConcatOperator_Left_Property(__gen4, __selector2);
        __gen5 = new Uno.UX.StringConcatOperator();
        __gen5_Right_inst = new matchr_UnoUXStringConcatOperator_Right_Property(__gen5, __selector1);
        var temp = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp1 = new Fuse.Controls.ScrollView();
        var temp2 = new Fuse.Controls.StackPanel();
        var temp3 = new Fuse.Controls.Text();
        var temp4 = new Fuse.Reactive.DataBinding<string>(__gen1_Left_inst, "friend1.firstName");
        var temp5 = new Fuse.Reactive.DataBinding<string>(__gen2_Right_inst, "friend1.lastName");
        var temp6 = new Fuse.Controls.Button();
        temp_eb0 = new Fuse.Reactive.EventBinding("nextFriend(friend1)");
        var temp7 = new Fuse.Controls.Button();
        temp_eb1 = new Fuse.Reactive.EventBinding("previousFriend(friend1)");
        var temp8 = new Fuse.Controls.Text();
        var temp9 = new Fuse.Reactive.DataBinding<string>(__gen4_Left_inst, "friend2.firstName");
        var temp10 = new Fuse.Reactive.DataBinding<string>(__gen5_Right_inst, "friend2.lastName");
        var temp11 = new Fuse.Controls.Button();
        temp_eb2 = new Fuse.Reactive.EventBinding("nextFriend(friend1)");
        var temp12 = new Fuse.Controls.Button();
        temp_eb3 = new Fuse.Reactive.EventBinding("previousFriend(friend2)");
        temp.LineNumber = 2;
        temp.FileName = "Pages/SelectView.ux";
        temp.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/SelectViewPage.js"));
        temp1.Children.Add(temp2);
        temp2.Children.Add(temp3);
        temp2.Children.Add(__gen0);
        temp2.Children.Add(temp6);
        temp2.Children.Add(temp7);
        temp2.Children.Add(temp8);
        temp2.Children.Add(__gen3);
        temp2.Children.Add(temp11);
        temp2.Children.Add(temp12);
        temp3.Value = "Friend 1:";
        __gen0.Name = __selector3;
        __gen0.Bindings.Add(temp4);
        __gen0.Bindings.Add(temp5);
        __gen1.Target = __gen0_Value_inst;
        __gen2.Left = " ";
        __gen2.Target = __gen1_Right_inst;
        temp6.Text = "Left";
        global::Fuse.Gestures.Clicked.AddHandler(temp6, temp_eb0.OnEvent);
        temp6.Bindings.Add(temp_eb0);
        temp7.Text = "Right";
        global::Fuse.Gestures.Clicked.AddHandler(temp7, temp_eb1.OnEvent);
        temp7.Bindings.Add(temp_eb1);
        temp8.Value = "Friend 2:";
        __gen3.Name = __selector4;
        __gen3.Bindings.Add(temp9);
        __gen3.Bindings.Add(temp10);
        __gen4.Target = __gen3_Value_inst;
        __gen5.Left = " ";
        __gen5.Target = __gen4_Right_inst;
        temp11.Text = "Left";
        global::Fuse.Gestures.Clicked.AddHandler(temp11, temp_eb2.OnEvent);
        temp11.Bindings.Add(temp_eb2);
        temp12.Text = "Right";
        global::Fuse.Gestures.Clicked.AddHandler(temp12, temp_eb3.OnEvent);
        temp12.Bindings.Add(temp_eb3);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(__gen0);
        __g_nametable.Objects.Add(__gen1);
        __g_nametable.Objects.Add(__gen2);
        __g_nametable.Objects.Add(__gen3);
        __g_nametable.Objects.Add(__gen4);
        __g_nametable.Objects.Add(__gen5);
        this.Children.Add(temp);
        this.Children.Add(temp1);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "Right";
    static global::Uno.UX.Selector __selector2 = "Left";
    static global::Uno.UX.Selector __selector3 = "__gen0";
    static global::Uno.UX.Selector __selector4 = "__gen3";
}
