[Uno.Compiler.UxGenerated]
public partial class SignUpPage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<string> temp2_Value_inst;
    global::Uno.UX.Property<string> temp3_Value_inst;
    global::Uno.UX.Property<string> temp4_Value_inst;
    internal Fuse.Controls.Panel transitionScaleGuide;
    internal Fuse.Reactive.EventBinding temp_eb3;
    internal Fuse.Reactive.EventBinding temp_eb4;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "transitionScaleGuide"
    };
    static SignUpPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public SignUpPage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new MyTextInput();
        temp_Value_inst = new matchr_signup_FuseControlsTextInputControl_Value_Property(temp, __selector0);
        var temp1 = new MyTextInput();
        temp1_Value_inst = new matchr_signup_FuseControlsTextInputControl_Value_Property(temp1, __selector0);
        var temp2 = new MyTextInput();
        temp2_Value_inst = new matchr_signup_FuseControlsTextInputControl_Value_Property(temp2, __selector0);
        var temp3 = new MyTextInput();
        temp3_Value_inst = new matchr_signup_FuseControlsTextInputControl_Value_Property(temp3, __selector0);
        var temp4 = new Fuse.Controls.Text();
        temp4_Value_inst = new matchr_signup_FuseControlsTextControl_Value_Property(temp4, __selector0);
        var temp5 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp6 = new Fuse.Controls.Panel();
        var temp7 = new Fuse.iOS.StatusBarConfig();
        transitionScaleGuide = new Fuse.Controls.Panel();
        var temp8 = new Fuse.Controls.StackPanel();
        var temp9 = new Fuse.Reactive.DataBinding<string>(temp_Value_inst, "email");
        var temp10 = new Fuse.Reactive.DataBinding<string>(temp1_Value_inst, "username");
        var temp11 = new Fuse.Reactive.DataBinding<string>(temp2_Value_inst, "passwd");
        var temp12 = new Fuse.Reactive.DataBinding<string>(temp3_Value_inst, "repasswd");
        var temp13 = new Fuse.Reactive.DataBinding<string>(temp4_Value_inst, "passwderr");
        var temp14 = new Fuse.Controls.NativeViewHost();
        var temp15 = new Fuse.Controls.Button();
        temp_eb3 = new Fuse.Reactive.EventBinding("signup");
        var temp16 = new Fuse.Controls.NativeViewHost();
        var temp17 = new Fuse.Controls.Button();
        temp_eb4 = new Fuse.Reactive.EventBinding("goBack");
        temp5.LineNumber = 4;
        temp5.FileName = "Pages/SignUpPage.ux";
        temp5.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/SignUpPage.js"));
        temp6.Children.Add(temp7);
        temp6.Children.Add(transitionScaleGuide);
        temp6.Children.Add(temp8);
        temp7.Style = Fuse.Platform.StatusBarStyle.Light;
        transitionScaleGuide.Aspect = 1f;
        transitionScaleGuide.HitTestMode = Fuse.Elements.HitTestMode.None;
        transitionScaleGuide.Width = new Uno.UX.Size(500f, Uno.UX.Unit.Percent);
        transitionScaleGuide.Height = new Uno.UX.Size(500f, Uno.UX.Unit.Percent);
        transitionScaleGuide.Alignment = Fuse.Elements.Alignment.Center;
        transitionScaleGuide.BoxSizing = Fuse.Elements.Element.BoxSizingMode.FillAspect;
        transitionScaleGuide.Name = __selector1;
        temp8.ItemSpacing = 10f;
        temp8.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp8.Margin = float4(10f, 10f, 10f, 10f);
        temp8.Children.Add(temp);
        temp8.Children.Add(temp1);
        temp8.Children.Add(temp2);
        temp8.Children.Add(temp3);
        temp8.Children.Add(temp4);
        temp8.Children.Add(temp14);
        temp8.Children.Add(temp16);
        temp.PlaceholderText = "Email Address";
        temp.ActionStyle = Fuse.Controls.TextInputActionStyle.Next;
        temp.InputHint = Fuse.Controls.TextInputHint.Email;
        temp.Bindings.Add(temp9);
        temp1.PlaceholderText = "Username";
        temp1.ActionStyle = Fuse.Controls.TextInputActionStyle.Next;
        temp1.Bindings.Add(temp10);
        temp2.IsPassword = true;
        temp2.PlaceholderText = "Password";
        temp2.ActionStyle = Fuse.Controls.TextInputActionStyle.Next;
        temp2.Bindings.Add(temp11);
        temp3.IsPassword = true;
        temp3.PlaceholderText = "Repeat password";
        temp3.Bindings.Add(temp12);
        temp4.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp4.Bindings.Add(temp13);
        temp14.Children.Add(temp15);
        temp15.Text = "Sign Up";
        global::Fuse.Gestures.Clicked.AddHandler(temp15, temp_eb3.OnEvent);
        temp15.Bindings.Add(temp_eb3);
        temp16.Children.Add(temp17);
        temp17.Text = "Back";
        global::Fuse.Gestures.Clicked.AddHandler(temp17, temp_eb4.OnEvent);
        temp17.Bindings.Add(temp_eb4);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(transitionScaleGuide);
        this.Children.Add(temp5);
        this.Children.Add(temp6);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "transitionScaleGuide";
}
