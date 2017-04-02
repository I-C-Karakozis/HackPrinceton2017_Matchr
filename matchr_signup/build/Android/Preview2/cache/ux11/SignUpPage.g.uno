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
    internal Fuse.Reactive.EventBinding temp_eb5;
    internal Fuse.Reactive.EventBinding temp_eb6;
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
        var temp9 = new Fuse.Controls.Text();
        var temp10 = new Fuse.Reactive.DataBinding<string>(temp_Value_inst, "email");
        var temp11 = new Fuse.Reactive.DataBinding<string>(temp1_Value_inst, "username");
        var temp12 = new Fuse.Reactive.DataBinding<string>(temp2_Value_inst, "passwd");
        var temp13 = new Fuse.Reactive.DataBinding<string>(temp3_Value_inst, "repasswd");
        var temp14 = new Fuse.Reactive.DataBinding<string>(temp4_Value_inst, "passwderr");
        var temp15 = new Fuse.Controls.NativeViewHost();
        var temp16 = new Fuse.Controls.Button();
        temp_eb5 = new Fuse.Reactive.EventBinding("signup");
        var temp17 = new Fuse.Controls.NativeViewHost();
        var temp18 = new Fuse.Controls.Button();
        temp_eb6 = new Fuse.Reactive.EventBinding("goBack");
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
        temp8.Children.Add(temp9);
        temp8.Children.Add(temp);
        temp8.Children.Add(temp1);
        temp8.Children.Add(temp2);
        temp8.Children.Add(temp3);
        temp8.Children.Add(temp4);
        temp8.Children.Add(temp15);
        temp8.Children.Add(temp17);
        temp9.Value = "Sign Up";
        temp9.FontSize = 25f;
        temp9.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp9.Padding = float4(10f, 10f, 10f, 10f);
        temp.PlaceholderText = "Email Address";
        temp.ActionStyle = Fuse.Controls.TextInputActionStyle.Next;
        temp.InputHint = Fuse.Controls.TextInputHint.Email;
        temp.Bindings.Add(temp10);
        temp1.PlaceholderText = "Username";
        temp1.ActionStyle = Fuse.Controls.TextInputActionStyle.Next;
        temp1.Bindings.Add(temp11);
        temp2.IsPassword = true;
        temp2.PlaceholderText = "Password";
        temp2.ActionStyle = Fuse.Controls.TextInputActionStyle.Next;
        temp2.Bindings.Add(temp12);
        temp3.IsPassword = true;
        temp3.PlaceholderText = "Repeat password";
        temp3.Bindings.Add(temp13);
        temp4.TextColor = Fuse.Drawing.Colors.Red;
        temp4.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp4.Bindings.Add(temp14);
        temp15.Children.Add(temp16);
        temp16.Text = "Sign Up";
        global::Fuse.Gestures.Clicked.AddHandler(temp16, temp_eb5.OnEvent);
        temp16.Bindings.Add(temp_eb5);
        temp17.Children.Add(temp18);
        temp18.Text = "Back";
        global::Fuse.Gestures.Clicked.AddHandler(temp18, temp_eb6.OnEvent);
        temp18.Bindings.Add(temp_eb6);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(transitionScaleGuide);
        this.Children.Add(temp5);
        this.Children.Add(temp6);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "transitionScaleGuide";
}
