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
    internal Fuse.Reactive.EventBinding temp_eb8;
    internal Fuse.Reactive.EventBinding temp_eb9;
    internal Fuse.Reactive.EventBinding temp_eb10;
    internal Fuse.Reactive.EventBinding temp_eb11;
    internal Fuse.Controls.Text __gen14;
    internal Uno.UX.StringConcatOperator __gen15;
    internal Uno.UX.StringConcatOperator __gen16;
    internal Fuse.Reactive.EventBinding temp_eb12;
    internal Fuse.Reactive.EventBinding temp_eb13;
    internal Fuse.Controls.Text __gen17;
    internal Uno.UX.StringConcatOperator __gen18;
    internal Uno.UX.StringConcatOperator __gen19;
    internal Fuse.Reactive.EventBinding temp_eb14;
    internal Fuse.Reactive.EventBinding temp_eb15;
    internal Fuse.Reactive.EventBinding temp_eb16;
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
        var temp = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp1 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp2 = new Fuse.Controls.Button();
        temp_eb8 = new Fuse.Reactive.EventBinding("goToSelect");
        var temp3 = new Fuse.Controls.Button();
        temp_eb9 = new Fuse.Reactive.EventBinding("goToMatchList");
        var temp4 = new Fuse.Controls.Button();
        temp_eb10 = new Fuse.Reactive.EventBinding("goToMessages");
        var temp5 = new Fuse.Controls.Button();
        temp_eb11 = new Fuse.Reactive.EventBinding("goToProfile");
        var temp6 = new Fuse.Controls.StackPanel();
        var temp7 = new Fuse.Controls.Text();
        var temp8 = new Fuse.Reactive.DataBinding<string>(__gen15_Left_inst, "friend1.firstName");
        var temp9 = new Fuse.Reactive.DataBinding<string>(__gen16_Right_inst, "friend1.lastName");
        var temp10 = new Fuse.Controls.Button();
        temp_eb12 = new Fuse.Reactive.EventBinding("nextFriend(friend1)");
        var temp11 = new Fuse.Controls.Button();
        temp_eb13 = new Fuse.Reactive.EventBinding("previousFriend(friend1)");
        var temp12 = new Fuse.Controls.Text();
        var temp13 = new Fuse.Reactive.DataBinding<string>(__gen18_Left_inst, "friend2.firstName");
        var temp14 = new Fuse.Reactive.DataBinding<string>(__gen19_Right_inst, "friend2.lastName");
        var temp15 = new Fuse.Controls.Button();
        temp_eb14 = new Fuse.Reactive.EventBinding("nextFriend(friend1)");
        var temp16 = new Fuse.Controls.Button();
        temp_eb15 = new Fuse.Reactive.EventBinding("previousFriend(friend2)");
        var temp17 = new Fuse.Controls.Button();
        temp_eb16 = new Fuse.Reactive.EventBinding("matchFriends");
        temp.LineNumber = 3;
        temp.FileName = "Pages/SelectPage.ux";
        temp.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/NavBar.js"));
        temp1.LineNumber = 4;
        temp1.FileName = "Pages/SelectPage.ux";
        temp1.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/SelectPage.js"));
        temp2.Text = "Match";
        global::Fuse.Gestures.Clicked.AddHandler(temp2, temp_eb8.OnEvent);
        temp2.Bindings.Add(temp_eb8);
        temp3.Text = "Matches";
        global::Fuse.Gestures.Clicked.AddHandler(temp3, temp_eb9.OnEvent);
        temp3.Bindings.Add(temp_eb9);
        temp4.Text = "Message";
        global::Fuse.Gestures.Clicked.AddHandler(temp4, temp_eb10.OnEvent);
        temp4.Bindings.Add(temp_eb10);
        temp5.Text = "Profile";
        global::Fuse.Gestures.Clicked.AddHandler(temp5, temp_eb11.OnEvent);
        temp5.Bindings.Add(temp_eb11);
        temp6.Children.Add(temp7);
        temp6.Children.Add(__gen14);
        temp6.Children.Add(temp10);
        temp6.Children.Add(temp11);
        temp6.Children.Add(temp12);
        temp6.Children.Add(__gen17);
        temp6.Children.Add(temp15);
        temp6.Children.Add(temp16);
        temp6.Children.Add(temp17);
        temp7.Value = "Friend 1:";
        __gen14.Name = __selector3;
        __gen14.Bindings.Add(temp8);
        __gen14.Bindings.Add(temp9);
        __gen15.Target = __gen14_Value_inst;
        __gen16.Left = " ";
        __gen16.Target = __gen15_Right_inst;
        temp10.Text = "Next";
        global::Fuse.Gestures.Clicked.AddHandler(temp10, temp_eb12.OnEvent);
        temp10.Bindings.Add(temp_eb12);
        temp11.Text = "Prev";
        global::Fuse.Gestures.Clicked.AddHandler(temp11, temp_eb13.OnEvent);
        temp11.Bindings.Add(temp_eb13);
        temp12.Value = "Friend 2:";
        __gen17.Name = __selector4;
        __gen17.Bindings.Add(temp13);
        __gen17.Bindings.Add(temp14);
        __gen18.Target = __gen17_Value_inst;
        __gen19.Left = " ";
        __gen19.Target = __gen18_Right_inst;
        temp15.Text = "Next";
        global::Fuse.Gestures.Clicked.AddHandler(temp15, temp_eb14.OnEvent);
        temp15.Bindings.Add(temp_eb14);
        temp16.Text = "Prev";
        global::Fuse.Gestures.Clicked.AddHandler(temp16, temp_eb15.OnEvent);
        temp16.Bindings.Add(temp_eb15);
        temp17.Text = "Match";
        global::Fuse.Gestures.Clicked.AddHandler(temp17, temp_eb16.OnEvent);
        temp17.Bindings.Add(temp_eb16);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(__gen14);
        __g_nametable.Objects.Add(__gen15);
        __g_nametable.Objects.Add(__gen16);
        __g_nametable.Objects.Add(__gen17);
        __g_nametable.Objects.Add(__gen18);
        __g_nametable.Objects.Add(__gen19);
        this.Children.Add(temp);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
        this.Children.Add(temp3);
        this.Children.Add(temp4);
        this.Children.Add(temp5);
        this.Children.Add(temp6);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "Right";
    static global::Uno.UX.Selector __selector2 = "Left";
    static global::Uno.UX.Selector __selector3 = "__gen14";
    static global::Uno.UX.Selector __selector4 = "__gen17";
}
