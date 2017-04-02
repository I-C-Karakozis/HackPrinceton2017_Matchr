[Uno.Compiler.UxGenerated]
public partial class SelectView: Fuse.Controls.Page
{
    global::Uno.UX.Property<string> __gen14_Value_inst;
    global::Uno.UX.Property<string> __gen15_Right_inst;
    global::Uno.UX.Property<string> __gen15_Left_inst;
    global::Uno.UX.Property<string> __gen16_Right_inst;
    global::Uno.UX.Property<string> __gen17_Value_inst;
    global::Uno.UX.Property<string> __gen18_Right_inst;
    global::Uno.UX.Property<string> __gen18_Left_inst;
    global::Uno.UX.Property<string> __gen19_Right_inst;
    internal Fuse.Controls.Text __gen14;
    internal Uno.UX.StringConcatOperator __gen15;
    internal Uno.UX.StringConcatOperator __gen16;
    internal Fuse.Reactive.EventBinding temp_eb0;
    internal Fuse.Reactive.EventBinding temp_eb1;
    internal Fuse.Controls.Text __gen17;
    internal Uno.UX.StringConcatOperator __gen18;
    internal Uno.UX.StringConcatOperator __gen19;
    internal Fuse.Reactive.EventBinding temp_eb2;
    internal Fuse.Reactive.EventBinding temp_eb3;
    internal Fuse.Reactive.EventBinding temp_eb4;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "__gen14",
        "__gen15",
        "__gen16",
        "__gen17",
        "__gen18",
        "__gen19"
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
        __gen14 = new Fuse.Controls.Text();
        __gen14_Value_inst = new matchr_FuseControlsTextControl_Value_Property(__gen14, __selector0);
        __gen15 = new Uno.UX.StringConcatOperator();
        __gen15_Right_inst = new matchr_UnoUXStringConcatOperator_Right_Property(__gen15, __selector1);
        __gen15_Left_inst = new matchr_UnoUXStringConcatOperator_Left_Property(__gen15, __selector2);
        __gen16 = new Uno.UX.StringConcatOperator();
        __gen16_Right_inst = new matchr_UnoUXStringConcatOperator_Right_Property(__gen16, __selector1);
        __gen17 = new Fuse.Controls.Text();
        __gen17_Value_inst = new matchr_FuseControlsTextControl_Value_Property(__gen17, __selector0);
        __gen18 = new Uno.UX.StringConcatOperator();
        __gen18_Right_inst = new matchr_UnoUXStringConcatOperator_Right_Property(__gen18, __selector1);
        __gen18_Left_inst = new matchr_UnoUXStringConcatOperator_Left_Property(__gen18, __selector2);
        __gen19 = new Uno.UX.StringConcatOperator();
        __gen19_Right_inst = new matchr_UnoUXStringConcatOperator_Right_Property(__gen19, __selector1);
        var temp = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp1 = new Fuse.Controls.ScrollView();
        var temp2 = new Fuse.Controls.StackPanel();
        var temp3 = new Fuse.Controls.Text();
        var temp4 = new Fuse.Reactive.DataBinding<string>(__gen15_Left_inst, "friend1.firstName");
        var temp5 = new Fuse.Reactive.DataBinding<string>(__gen16_Right_inst, "friend1.lastName");
        var temp6 = new Fuse.Controls.Button();
        temp_eb0 = new Fuse.Reactive.EventBinding("nextFriend(friend1)");
        var temp7 = new Fuse.Controls.Button();
        temp_eb1 = new Fuse.Reactive.EventBinding("previousFriend(friend1)");
        var temp8 = new Fuse.Controls.Text();
        var temp9 = new Fuse.Reactive.DataBinding<string>(__gen18_Left_inst, "friend2.firstName");
        var temp10 = new Fuse.Reactive.DataBinding<string>(__gen19_Right_inst, "friend2.lastName");
        var temp11 = new Fuse.Controls.Button();
        temp_eb2 = new Fuse.Reactive.EventBinding("nextFriend(friend1)");
        var temp12 = new Fuse.Controls.Button();
        temp_eb3 = new Fuse.Reactive.EventBinding("previousFriend(friend2)");
        var temp13 = new Fuse.Controls.Button();
        temp_eb4 = new Fuse.Reactive.EventBinding("matchFriends");
        temp.LineNumber = 2;
        temp.FileName = "Pages/SelectView.ux";
        temp.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/SelectViewPage.js"));
        temp1.Children.Add(temp2);
        temp2.Children.Add(temp3);
        temp2.Children.Add(__gen14);
        temp2.Children.Add(temp6);
        temp2.Children.Add(temp7);
        temp2.Children.Add(temp8);
        temp2.Children.Add(__gen17);
        temp2.Children.Add(temp11);
        temp2.Children.Add(temp12);
        temp2.Children.Add(temp13);
        temp3.Value = "Friend 1:";
        __gen14.Name = __selector3;
        __gen14.Bindings.Add(temp4);
        __gen14.Bindings.Add(temp5);
        __gen15.Target = __gen14_Value_inst;
        __gen16.Left = " ";
        __gen16.Target = __gen15_Right_inst;
        temp6.Text = "Next";
        global::Fuse.Gestures.Clicked.AddHandler(temp6, temp_eb0.OnEvent);
        temp6.Bindings.Add(temp_eb0);
        temp7.Text = "Prev";
        global::Fuse.Gestures.Clicked.AddHandler(temp7, temp_eb1.OnEvent);
        temp7.Bindings.Add(temp_eb1);
        temp8.Value = "Friend 2:";
        __gen17.Name = __selector4;
        __gen17.Bindings.Add(temp9);
        __gen17.Bindings.Add(temp10);
        __gen18.Target = __gen17_Value_inst;
        __gen19.Left = " ";
        __gen19.Target = __gen18_Right_inst;
        temp11.Text = "Next";
        global::Fuse.Gestures.Clicked.AddHandler(temp11, temp_eb2.OnEvent);
        temp11.Bindings.Add(temp_eb2);
        temp12.Text = "Prev";
        global::Fuse.Gestures.Clicked.AddHandler(temp12, temp_eb3.OnEvent);
        temp12.Bindings.Add(temp_eb3);
        temp13.Text = "Match";
        global::Fuse.Gestures.Clicked.AddHandler(temp13, temp_eb4.OnEvent);
        temp13.Bindings.Add(temp_eb4);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(__gen14);
        __g_nametable.Objects.Add(__gen15);
        __g_nametable.Objects.Add(__gen16);
        __g_nametable.Objects.Add(__gen17);
        __g_nametable.Objects.Add(__gen18);
        __g_nametable.Objects.Add(__gen19);
        this.Children.Add(temp);
        this.Children.Add(temp1);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "Right";
    static global::Uno.UX.Selector __selector2 = "Left";
    static global::Uno.UX.Selector __selector3 = "__gen14";
    static global::Uno.UX.Selector __selector4 = "__gen17";
}
