[Uno.Compiler.UxGenerated]
public partial class SignInPage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<string> temp2_Value_inst;
    internal Fuse.Controls.Panel transitionScaleGuide;
    internal Fuse.Reactive.EventBinding temp_eb2;
    internal Fuse.Reactive.EventBinding temp_eb3;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "transitionScaleGuide"
    };
    static SignInPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public SignInPage(
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
        var temp2 = new Fuse.Controls.Text();
        temp2_Value_inst = new matchr_signup_FuseControlsTextControl_Value_Property(temp2, __selector0);
        var temp3 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp4 = new Fuse.Controls.Panel();
        var temp5 = new Fuse.iOS.StatusBarConfig();
        transitionScaleGuide = new Fuse.Controls.Panel();
        var temp6 = new Fuse.Controls.StackPanel();
        var temp7 = new Fuse.Reactive.DataBinding<string>(temp_Value_inst, "email");
        var temp8 = new Fuse.Reactive.DataBinding<string>(temp1_Value_inst, "passwd");
        var temp9 = new Fuse.Reactive.DataBinding<string>(temp2_Value_inst, "loginerr");
        var temp10 = new Fuse.Controls.NativeViewHost();
        var temp11 = new Fuse.Controls.Button();
        temp_eb2 = new Fuse.Reactive.EventBinding("signin");
        var temp12 = new Fuse.Controls.NativeViewHost();
        var temp13 = new Fuse.Controls.Button();
        temp_eb3 = new Fuse.Reactive.EventBinding("goBack");
        temp3.LineNumber = 4;
        temp3.FileName = "Pages/SignInPage.ux";
        temp3.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/SignInPage.js"));
        temp4.Children.Add(temp5);
        temp4.Children.Add(transitionScaleGuide);
        temp4.Children.Add(temp6);
        temp5.Style = Fuse.Platform.StatusBarStyle.Light;
        transitionScaleGuide.Aspect = 1f;
        transitionScaleGuide.HitTestMode = Fuse.Elements.HitTestMode.None;
        transitionScaleGuide.Width = new Uno.UX.Size(500f, Uno.UX.Unit.Percent);
        transitionScaleGuide.Height = new Uno.UX.Size(500f, Uno.UX.Unit.Percent);
        transitionScaleGuide.Alignment = Fuse.Elements.Alignment.Center;
        transitionScaleGuide.BoxSizing = Fuse.Elements.Element.BoxSizingMode.FillAspect;
        transitionScaleGuide.Name = __selector1;
        temp6.ItemSpacing = 10f;
        temp6.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp6.Margin = float4(10f, 10f, 10f, 10f);
        temp6.Children.Add(temp);
        temp6.Children.Add(temp1);
        temp6.Children.Add(temp2);
        temp6.Children.Add(temp10);
        temp6.Children.Add(temp12);
        temp.PlaceholderText = "Email Address";
        temp.ActionStyle = Fuse.Controls.TextInputActionStyle.Next;
        temp.InputHint = Fuse.Controls.TextInputHint.Email;
        temp.Bindings.Add(temp7);
        temp1.IsPassword = true;
        temp1.PlaceholderText = "Password";
        temp1.ActionStyle = Fuse.Controls.TextInputActionStyle.Next;
        temp1.Bindings.Add(temp8);
        temp2.TextColor = Fuse.Drawing.Colors.Red;
        temp2.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp2.Bindings.Add(temp9);
        temp10.Children.Add(temp11);
        temp11.Text = "Sign In";
        global::Fuse.Gestures.Clicked.AddHandler(temp11, temp_eb2.OnEvent);
        temp11.Bindings.Add(temp_eb2);
        temp12.Children.Add(temp13);
        temp13.Text = "Back";
        global::Fuse.Gestures.Clicked.AddHandler(temp13, temp_eb3.OnEvent);
        temp13.Bindings.Add(temp_eb3);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(transitionScaleGuide);
        this.Children.Add(temp3);
        this.Children.Add(temp4);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "transitionScaleGuide";
}
