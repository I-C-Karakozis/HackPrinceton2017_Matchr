[Uno.Compiler.UxGenerated]
public partial class SubPage: Fuse.Controls.Page
{
    readonly Fuse.Visual navBar;
    global::Uno.UX.Property<string> temp_Value_inst;
    internal Fuse.Reactive.EventBinding temp_eb17;
    internal Fuse.Reactive.EventBinding temp_eb18;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "navBar"
    };
    static SubPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public SubPage(
		[global::Uno.UX.UXParameter("navBar")] Fuse.Visual navBar)
    {
        this.navBar = navBar;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new NavBarTitle();
        temp_Value_inst = new matchr_signup_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp1 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp2 = new Fuse.Controls.StackPanel();
        var temp3 = new Fuse.Controls.Text();
        var temp4 = new Fuse.Controls.Text();
        var temp5 = new Fuse.Controls.Panel();
        var temp6 = new Fuse.Controls.Circle();
        var temp7 = new Fuse.Drawing.ImageFill();
        var temp8 = new Fuse.Drawing.Stroke();
        var temp9 = new Fuse.Drawing.StaticSolidColor(float4(0.6666667f, 0.6666667f, 0.6666667f, 1f));
        var temp10 = new Fuse.Controls.Text();
        var temp11 = new Fuse.Controls.Text();
        var temp12 = new Fuse.Controls.Text();
        var temp13 = new Fuse.Controls.Text();
        var temp14 = new Fuse.Controls.Text();
        var temp15 = new Fuse.Controls.DockPanel();
        var temp16 = new Fuse.Controls.Button();
        temp_eb17 = new Fuse.Reactive.EventBinding("onClick");
        var temp17 = new Fuse.Controls.Button();
        temp_eb18 = new Fuse.Reactive.EventBinding("onClick");
        var temp18 = new Fuse.Controls.Text();
        var temp19 = new Fuse.Controls.Panel();
        var temp20 = new Fuse.AlternateRoot();
        var temp21 = new Fuse.Reactive.DataBinding<string>(temp_Value_inst, "title");
        temp1.Code = "exports.title = this.Parameter.map(function(param) {\n\t\t\treturn param.title;\n\t\t});";
        temp1.LineNumber = 2;
        temp1.FileName = "Pages/SubPage.ux";
        temp2.Alignment = Fuse.Elements.Alignment.Center;
        temp2.Children.Add(temp3);
        temp2.Children.Add(temp4);
        temp2.Children.Add(temp5);
        temp2.Children.Add(temp10);
        temp2.Children.Add(temp11);
        temp2.Children.Add(temp12);
        temp2.Children.Add(temp13);
        temp2.Children.Add(temp14);
        temp2.Children.Add(temp15);
        temp5.Width = new Uno.UX.Size(175f, Uno.UX.Unit.Unspecified);
        temp5.Height = new Uno.UX.Size(175f, Uno.UX.Unit.Unspecified);
        temp5.Children.Add(temp6);
        temp6.Fills.Add(temp7);
        temp6.Strokes.Add(temp8);
        temp7.Url = "http://cliqueimg.com/cache/posts/120978/depressing-study-reveals-the-age-men-find-women-most-attractive-120978-main.640x0c.jpg";
        temp7.ContentAlignment = Fuse.Elements.Alignment.TopCenter;
        temp8.Width = 1f;
        temp8.Brush = temp9;
        temp11.Value = "Matched by SOMEONE";
        temp11.Alignment = Fuse.Elements.Alignment.Center;
        temp12.Value = "on DATE";
        temp12.Alignment = Fuse.Elements.Alignment.Center;
        temp15.Children.Add(temp16);
        temp15.Children.Add(temp17);
        temp15.Children.Add(temp18);
        temp16.Text = "Add";
        temp16.Aspect = 5f;
        temp16.BoxSizing = Fuse.Elements.Element.BoxSizingMode.FillAspect;
        global::Fuse.Controls.DockPanel.SetDock(temp16, Fuse.Layouts.Dock.Left);
        global::Fuse.Gestures.Clicked.AddHandler(temp16, temp_eb17.OnEvent);
        temp16.Bindings.Add(temp_eb17);
        temp17.Text = "Message";
        temp17.Aspect = 5f;
        temp17.BoxSizing = Fuse.Elements.Element.BoxSizingMode.FillAspect;
        global::Fuse.Controls.DockPanel.SetDock(temp17, Fuse.Layouts.Dock.Right);
        global::Fuse.Gestures.Clicked.AddHandler(temp17, temp_eb18.OnEvent);
        temp17.Bindings.Add(temp_eb18);
        temp19.Children.Add(temp20);
        temp20.ParentNode = navBar;
        temp20.Node = temp;
        temp.Bindings.Add(temp21);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(navBar);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
        this.Children.Add(temp19);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
}
