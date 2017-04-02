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
    internal Fuse.Reactive.EventBinding temp_eb15;
    internal Fuse.Reactive.EventBinding temp_eb16;
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
        var temp5 = new Fuse.Controls.Image();
        var temp6 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp7 = new Fuse.Controls.Panel();
        var temp8 = new Fuse.iOS.StatusBarConfig();
        transitionScaleGuide = new Fuse.Controls.Panel();
        var temp9 = new Fuse.Controls.StackPanel();
        var temp10 = new Fuse.Controls.Text();
        var temp11 = new Fuse.Reactive.DataBinding<string>(temp_Value_inst, "email");
        var temp12 = new Fuse.Reactive.DataBinding<string>(temp1_Value_inst, "username");
        var temp13 = new Fuse.Reactive.DataBinding<string>(temp2_Value_inst, "passwd");
        var temp14 = new Fuse.Reactive.DataBinding<string>(temp3_Value_inst, "repasswd");
        var temp15 = new Fuse.Reactive.DataBinding<string>(temp4_Value_inst, "passwderr");
        var temp16 = new Fuse.Controls.NativeViewHost();
        var temp17 = new Fuse.Controls.Button();
        temp_eb15 = new Fuse.Reactive.EventBinding("signup");
        var temp18 = new Fuse.Controls.NativeViewHost();
        var temp19 = new Fuse.Controls.Button();
        temp_eb16 = new Fuse.Reactive.EventBinding("goBack");
        temp5.StretchMode = Fuse.Elements.StretchMode.UniformToFill;
        temp5.ContentAlignment = Fuse.Elements.Alignment.Center;
        temp5.Opacity = 0.9f;
        temp5.Layer = Fuse.Layer.Background;
        temp5.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/balloon.jpg"));
        temp6.LineNumber = 5;
        temp6.FileName = "Pages/SignUpPage.ux";
        temp6.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/SignUpPage.js"));
        temp7.Children.Add(temp8);
        temp7.Children.Add(transitionScaleGuide);
        temp7.Children.Add(temp9);
        temp8.Style = Fuse.Platform.StatusBarStyle.Light;
        transitionScaleGuide.Aspect = 1f;
        transitionScaleGuide.HitTestMode = Fuse.Elements.HitTestMode.None;
        transitionScaleGuide.Width = new Uno.UX.Size(500f, Uno.UX.Unit.Percent);
        transitionScaleGuide.Height = new Uno.UX.Size(500f, Uno.UX.Unit.Percent);
        transitionScaleGuide.Alignment = Fuse.Elements.Alignment.Center;
        transitionScaleGuide.BoxSizing = Fuse.Elements.Element.BoxSizingMode.FillAspect;
        transitionScaleGuide.Name = __selector1;
        temp9.ItemSpacing = 10f;
        temp9.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp9.Margin = float4(10f, 10f, 10f, 10f);
        temp9.Children.Add(temp10);
        temp9.Children.Add(temp);
        temp9.Children.Add(temp1);
        temp9.Children.Add(temp2);
        temp9.Children.Add(temp3);
        temp9.Children.Add(temp4);
        temp9.Children.Add(temp16);
        temp9.Children.Add(temp18);
        temp10.Value = "Sign Up";
        temp10.FontSize = 25f;
        temp10.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp10.Padding = float4(10f, 10f, 10f, 10f);
        temp10.Font = global::HomePage.Comfortaa;
        temp.PlaceholderText = "Email Address";
        temp.ActionStyle = Fuse.Controls.TextInputActionStyle.Next;
        temp.InputHint = Fuse.Controls.TextInputHint.Email;
        temp.Bindings.Add(temp11);
        temp1.PlaceholderText = "Username";
        temp1.ActionStyle = Fuse.Controls.TextInputActionStyle.Next;
        temp1.Bindings.Add(temp12);
        temp2.IsPassword = true;
        temp2.PlaceholderText = "Password";
        temp2.ActionStyle = Fuse.Controls.TextInputActionStyle.Next;
        temp2.Bindings.Add(temp13);
        temp3.IsPassword = true;
        temp3.PlaceholderText = "Repeat password";
        temp3.Bindings.Add(temp14);
        temp4.TextColor = Fuse.Drawing.Colors.Red;
        temp4.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp4.Bindings.Add(temp15);
        temp16.Children.Add(temp17);
        temp17.Text = "Sign Up";
        global::Fuse.Gestures.Clicked.AddHandler(temp17, temp_eb15.OnEvent);
        temp17.Bindings.Add(temp_eb15);
        temp18.Children.Add(temp19);
        temp19.Text = "Back";
        global::Fuse.Gestures.Clicked.AddHandler(temp19, temp_eb16.OnEvent);
        temp19.Bindings.Add(temp_eb16);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(transitionScaleGuide);
        this.Children.Add(temp5);
        this.Children.Add(temp6);
        this.Children.Add(temp7);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "transitionScaleGuide";
}
