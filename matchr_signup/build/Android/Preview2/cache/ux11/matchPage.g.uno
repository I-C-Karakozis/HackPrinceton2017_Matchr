[Uno.Compiler.UxGenerated]
public partial class matchPage: Fuse.Controls.Page
{
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    internal Fuse.Reactive.EventBinding temp_eb11;
    internal Fuse.Reactive.EventBinding temp_eb12;
    internal Fuse.Reactive.EventBinding temp_eb13;
    internal Fuse.Reactive.EventBinding temp_eb14;
    internal Fuse.Reactive.EventBinding temp_eb15;
    internal Fuse.Reactive.EventBinding temp_eb16;
    internal Fuse.Reactive.EventBinding temp_eb17;
    internal Fuse.Reactive.EventBinding temp_eb18;
    internal Fuse.Reactive.EventBinding temp_eb19;
    static matchPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public matchPage()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new Fuse.Controls.TextBox();
        temp_Value_inst = new matchr_signup_FuseControlsTextInputControl_Value_Property(temp, __selector0);
        var temp1 = new Fuse.Controls.TextBox();
        temp1_Value_inst = new matchr_signup_FuseControlsTextInputControl_Value_Property(temp1, __selector0);
        var temp2 = new Fuse.Controls.StackPanel();
        var temp3 = new Fuse.Controls.Text();
        var temp4 = new Fuse.Controls.Text();
        var temp5 = new Fuse.Reactive.DataBinding<string>(temp_Value_inst, "name1");
        var temp6 = new Fuse.Controls.DockPanel();
        var temp7 = new Fuse.Controls.Circle();
        var temp8 = new Fuse.Drawing.ImageFill();
        var temp9 = new Fuse.Drawing.Stroke();
        var temp10 = new Fuse.Drawing.StaticSolidColor(float4(0.6666667f, 0.6666667f, 0.6666667f, 1f));
        var temp11 = new Fuse.Controls.Image();
        temp_eb11 = new Fuse.Reactive.EventBinding("clicked");
        var temp12 = new Fuse.Controls.Image();
        temp_eb12 = new Fuse.Reactive.EventBinding("clicked");
        var temp13 = new Fuse.Controls.Image();
        temp_eb13 = new Fuse.Reactive.EventBinding("clicked");
        var temp14 = new Fuse.Controls.Image();
        temp_eb14 = new Fuse.Reactive.EventBinding("clicked");
        var temp15 = new Fuse.Controls.Button();
        temp_eb15 = new Fuse.Reactive.EventBinding("onClick");
        var temp16 = new Fuse.Controls.DockPanel();
        var temp17 = new Fuse.Controls.Circle();
        var temp18 = new Fuse.Drawing.ImageFill();
        var temp19 = new Fuse.Drawing.Stroke();
        var temp20 = new Fuse.Drawing.StaticSolidColor(float4(0.6666667f, 0.6666667f, 0.6666667f, 1f));
        var temp21 = new Fuse.Controls.Image();
        temp_eb16 = new Fuse.Reactive.EventBinding("clicked");
        var temp22 = new Fuse.Controls.Image();
        temp_eb17 = new Fuse.Reactive.EventBinding("clicked");
        var temp23 = new Fuse.Controls.Image();
        temp_eb18 = new Fuse.Reactive.EventBinding("clicked");
        var temp24 = new Fuse.Controls.Image();
        temp_eb19 = new Fuse.Reactive.EventBinding("clicked");
        var temp25 = new Fuse.Reactive.DataBinding<string>(temp1_Value_inst, "name2");
        temp2.Alignment = Fuse.Elements.Alignment.Center;
        temp2.Children.Add(temp3);
        temp2.Children.Add(temp4);
        temp2.Children.Add(temp);
        temp2.Children.Add(temp6);
        temp2.Children.Add(temp15);
        temp2.Children.Add(temp16);
        temp2.Children.Add(temp1);
        temp3.Value = "make matches";
        temp3.FontSize = 20f;
        temp3.Alignment = Fuse.Elements.Alignment.Center;
        temp.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp.Bindings.Add(temp5);
        temp6.Width = new Uno.UX.Size(300f, Uno.UX.Unit.Unspecified);
        temp6.Height = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        temp6.Children.Add(temp7);
        temp6.Children.Add(temp11);
        temp6.Children.Add(temp12);
        temp6.Children.Add(temp13);
        temp6.Children.Add(temp14);
        temp7.Fills.Add(temp8);
        temp7.Strokes.Add(temp9);
        temp8.Url = "http://cliqueimg.com/cache/posts/120978/depressing-study-reveals-the-age-men-find-women-most-attractive-120978-main.640x0c.jpg";
        temp8.ContentAlignment = Fuse.Elements.Alignment.Center;
        temp9.Width = 1f;
        temp9.Brush = temp10;
        temp11.Color = float4(1f, 1f, 1f, 1f);
        temp11.Height = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
        global::Fuse.Controls.DockPanel.SetDock(temp11, Fuse.Layouts.Dock.Right);
        global::Fuse.Gestures.Clicked.AddHandler(temp11, temp_eb11.OnEvent);
        temp11.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/arrow-right-white.png"));
        temp11.Bindings.Add(temp_eb11);
        temp12.Color = float4(1f, 1f, 1f, 1f);
        temp12.Height = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
        global::Fuse.Controls.DockPanel.SetDock(temp12, Fuse.Layouts.Dock.Right);
        global::Fuse.Gestures.Clicked.AddHandler(temp12, temp_eb12.OnEvent);
        temp12.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/arrow-right-white.png"));
        temp12.Bindings.Add(temp_eb12);
        temp13.Color = float4(1f, 1f, 1f, 1f);
        temp13.Height = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
        global::Fuse.Controls.DockPanel.SetDock(temp13, Fuse.Layouts.Dock.Left);
        global::Fuse.Gestures.Clicked.AddHandler(temp13, temp_eb13.OnEvent);
        temp13.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/arrow-left-white.png"));
        temp13.Bindings.Add(temp_eb13);
        temp14.Color = float4(1f, 1f, 1f, 1f);
        temp14.Height = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
        global::Fuse.Controls.DockPanel.SetDock(temp14, Fuse.Layouts.Dock.Left);
        global::Fuse.Gestures.Clicked.AddHandler(temp14, temp_eb14.OnEvent);
        temp14.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/arrow-left-white.png"));
        temp14.Bindings.Add(temp_eb14);
        temp15.Text = "Match";
        temp15.Aspect = 4f;
        temp15.BoxSizing = Fuse.Elements.Element.BoxSizingMode.FillAspect;
        global::Fuse.Gestures.Clicked.AddHandler(temp15, temp_eb15.OnEvent);
        temp15.Bindings.Add(temp_eb15);
        temp16.Width = new Uno.UX.Size(300f, Uno.UX.Unit.Unspecified);
        temp16.Height = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        temp16.Children.Add(temp17);
        temp16.Children.Add(temp21);
        temp16.Children.Add(temp22);
        temp16.Children.Add(temp23);
        temp16.Children.Add(temp24);
        temp17.Fills.Add(temp18);
        temp17.Strokes.Add(temp19);
        temp18.Url = "http://i9.lisimg.com/1221499/500full.jpg";
        temp18.ContentAlignment = Fuse.Elements.Alignment.Center;
        temp19.Width = 1f;
        temp19.Brush = temp20;
        temp21.Color = float4(1f, 1f, 1f, 1f);
        temp21.Height = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
        global::Fuse.Controls.DockPanel.SetDock(temp21, Fuse.Layouts.Dock.Right);
        global::Fuse.Gestures.Clicked.AddHandler(temp21, temp_eb16.OnEvent);
        temp21.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/arrow-right-white.png"));
        temp21.Bindings.Add(temp_eb16);
        temp22.Color = float4(1f, 1f, 1f, 1f);
        temp22.Height = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
        global::Fuse.Controls.DockPanel.SetDock(temp22, Fuse.Layouts.Dock.Right);
        global::Fuse.Gestures.Clicked.AddHandler(temp22, temp_eb17.OnEvent);
        temp22.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/arrow-right-white.png"));
        temp22.Bindings.Add(temp_eb17);
        temp23.Color = float4(1f, 1f, 1f, 1f);
        temp23.Height = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
        global::Fuse.Controls.DockPanel.SetDock(temp23, Fuse.Layouts.Dock.Left);
        global::Fuse.Gestures.Clicked.AddHandler(temp23, temp_eb18.OnEvent);
        temp23.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/arrow-left-white.png"));
        temp23.Bindings.Add(temp_eb18);
        temp24.Color = float4(1f, 1f, 1f, 1f);
        temp24.Height = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
        global::Fuse.Controls.DockPanel.SetDock(temp24, Fuse.Layouts.Dock.Left);
        global::Fuse.Gestures.Clicked.AddHandler(temp24, temp_eb19.OnEvent);
        temp24.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/arrow-left-white.png"));
        temp24.Bindings.Add(temp_eb19);
        temp1.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp1.Bindings.Add(temp25);
        this.Children.Add(temp2);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
}
