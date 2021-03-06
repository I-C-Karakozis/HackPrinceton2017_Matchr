[Uno.Compiler.UxGenerated]
public partial class SelectPage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<string> __gen14_Value_inst;
    global::Uno.UX.Property<string> __gen15_Right_inst;
    global::Uno.UX.Property<string> __gen15_Left_inst;
    global::Uno.UX.Property<string> __gen16_Right_inst;
    global::Uno.UX.Property<string> __gen17_Value_inst;
    global::Uno.UX.Property<string> __gen18_Right_inst;
    global::Uno.UX.Property<string> __gen18_Left_inst;
    global::Uno.UX.Property<string> __gen19_Right_inst;
    global::Uno.UX.Property<string> temp_Value_inst;
    internal Fuse.Reactive.EventBinding temp_eb12;
    internal Fuse.Reactive.EventBinding temp_eb13;
    internal Fuse.Reactive.EventBinding temp_eb14;
    internal Fuse.Reactive.EventBinding temp_eb15;
    internal Fuse.Controls.Text __gen14;
    internal Uno.UX.StringConcatOperator __gen15;
    internal Uno.UX.StringConcatOperator __gen16;
    internal Fuse.Reactive.EventBinding temp_eb16;
    internal Fuse.Reactive.EventBinding temp_eb17;
    internal Fuse.Controls.Text __gen17;
    internal Uno.UX.StringConcatOperator __gen18;
    internal Uno.UX.StringConcatOperator __gen19;
    internal Fuse.Reactive.EventBinding temp_eb18;
    internal Fuse.Reactive.EventBinding temp_eb19;
    internal Fuse.Reactive.EventBinding temp_eb20;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "__gen14",
        "__gen15",
        "__gen16",
        "__gen17",
        "__gen18",
        "__gen19"
    };
    static SelectPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public SelectPage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
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
        var temp = new Fuse.Controls.Text();
        temp_Value_inst = new matchr_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp1 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp2 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp3 = new Fuse.Controls.StackPanel();
        var temp4 = new Fuse.Controls.Button();
        temp_eb12 = new Fuse.Reactive.EventBinding("goToSelect");
        var temp5 = new Fuse.Controls.Button();
        temp_eb13 = new Fuse.Reactive.EventBinding("goToMatchList");
        var temp6 = new Fuse.Controls.Button();
        temp_eb14 = new Fuse.Reactive.EventBinding("goToMessages");
        var temp7 = new Fuse.Controls.Button();
        temp_eb15 = new Fuse.Reactive.EventBinding("goToProfile");
        var temp8 = new Fuse.Controls.Text();
        var temp9 = new Fuse.Reactive.DataBinding<string>(__gen15_Left_inst, "friend1.firstName");
        var temp10 = new Fuse.Reactive.DataBinding<string>(__gen16_Right_inst, "friend1.lastName");
        var temp11 = new Fuse.Controls.Button();
        temp_eb16 = new Fuse.Reactive.EventBinding("nextFriend(friend1)");
        var temp12 = new Fuse.Controls.Button();
        temp_eb17 = new Fuse.Reactive.EventBinding("previousFriend(friend1)");
        var temp13 = new Fuse.Controls.Text();
        var temp14 = new Fuse.Reactive.DataBinding<string>(__gen18_Left_inst, "friend2.firstName");
        var temp15 = new Fuse.Reactive.DataBinding<string>(__gen19_Right_inst, "friend2.lastName");
        var temp16 = new Fuse.Controls.Button();
        temp_eb18 = new Fuse.Reactive.EventBinding("nextFriend(friend1)");
        var temp17 = new Fuse.Controls.Button();
        temp_eb19 = new Fuse.Reactive.EventBinding("previousFriend(friend2)");
        var temp18 = new Fuse.Controls.Button();
        temp_eb20 = new Fuse.Reactive.EventBinding("matchFriends");
        var temp19 = new Fuse.Reactive.DataBinding<string>(temp_Value_inst, "status");
        temp1.LineNumber = 3;
        temp1.FileName = "Pages/SelectPage.ux";
        temp1.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/NavBar.js"));
        temp2.LineNumber = 4;
        temp2.FileName = "Pages/SelectPage.ux";
        temp2.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/SelectPage.js"));
        temp3.Children.Add(temp4);
        temp3.Children.Add(temp5);
        temp3.Children.Add(temp6);
        temp3.Children.Add(temp7);
        temp3.Children.Add(temp8);
        temp3.Children.Add(__gen14);
        temp3.Children.Add(temp11);
        temp3.Children.Add(temp12);
        temp3.Children.Add(temp13);
        temp3.Children.Add(__gen17);
        temp3.Children.Add(temp16);
        temp3.Children.Add(temp17);
        temp3.Children.Add(temp18);
        temp3.Children.Add(temp);
        temp4.Text = "Match";
        global::Fuse.Gestures.Clicked.AddHandler(temp4, temp_eb12.OnEvent);
        temp4.Bindings.Add(temp_eb12);
        temp5.Text = "Matches";
        global::Fuse.Gestures.Clicked.AddHandler(temp5, temp_eb13.OnEvent);
        temp5.Bindings.Add(temp_eb13);
        temp6.Text = "Message";
        global::Fuse.Gestures.Clicked.AddHandler(temp6, temp_eb14.OnEvent);
        temp6.Bindings.Add(temp_eb14);
        temp7.Text = "Profile";
        global::Fuse.Gestures.Clicked.AddHandler(temp7, temp_eb15.OnEvent);
        temp7.Bindings.Add(temp_eb15);
        temp8.Value = "Friend 1:";
        __gen14.Name = __selector3;
        __gen14.Bindings.Add(temp9);
        __gen14.Bindings.Add(temp10);
        __gen15.Target = __gen14_Value_inst;
        __gen16.Left = " ";
        __gen16.Target = __gen15_Right_inst;
        temp11.Text = "Next";
        global::Fuse.Gestures.Clicked.AddHandler(temp11, temp_eb16.OnEvent);
        temp11.Bindings.Add(temp_eb16);
        temp12.Text = "Prev";
        global::Fuse.Gestures.Clicked.AddHandler(temp12, temp_eb17.OnEvent);
        temp12.Bindings.Add(temp_eb17);
        temp13.Value = "Friend 2:";
        __gen17.Name = __selector4;
        __gen17.Bindings.Add(temp14);
        __gen17.Bindings.Add(temp15);
        __gen18.Target = __gen17_Value_inst;
        __gen19.Left = " ";
        __gen19.Target = __gen18_Right_inst;
        temp16.Text = "Next";
        global::Fuse.Gestures.Clicked.AddHandler(temp16, temp_eb18.OnEvent);
        temp16.Bindings.Add(temp_eb18);
        temp17.Text = "Prev";
        global::Fuse.Gestures.Clicked.AddHandler(temp17, temp_eb19.OnEvent);
        temp17.Bindings.Add(temp_eb19);
        temp18.Text = "Match";
        global::Fuse.Gestures.Clicked.AddHandler(temp18, temp_eb20.OnEvent);
        temp18.Bindings.Add(temp_eb20);
        temp.Bindings.Add(temp19);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(__gen14);
        __g_nametable.Objects.Add(__gen15);
        __g_nametable.Objects.Add(__gen16);
        __g_nametable.Objects.Add(__gen17);
        __g_nametable.Objects.Add(__gen18);
        __g_nametable.Objects.Add(__gen19);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
        this.Children.Add(temp3);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "Right";
    static global::Uno.UX.Selector __selector2 = "Left";
    static global::Uno.UX.Selector __selector3 = "__gen14";
    static global::Uno.UX.Selector __selector4 = "__gen17";
}
