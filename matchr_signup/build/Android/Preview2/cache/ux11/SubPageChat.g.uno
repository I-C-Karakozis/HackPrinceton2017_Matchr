[Uno.Compiler.UxGenerated]
public partial class SubPageChat: Fuse.Controls.Page
{
    readonly Fuse.Visual navBar;
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly SubPageChat __parent;
        [Uno.WeakReference] internal readonly SubPageChat __parentInstance;
        public Template(SubPageChat parent, SubPageChat parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> temp_Value_inst;
        global::Uno.UX.Property<Fuse.Layouts.Dock> temp_DockPanel_Dock_inst;
        global::Uno.UX.Property<string> temp1_Value_inst;
        static Template()
        {
        }
        public override object New()
        {
            var self = new Fuse.Controls.DockPanel();
            var temp = new Fuse.Controls.Text();
            temp_Value_inst = new matchr_signup_FuseControlsTextControl_Value_Property(temp, __selector0);
            temp_DockPanel_Dock_inst = new matchr_signup_FuseElementsElement_DockPanelDock_Property(temp, __selector1);
            var temp1 = new Fuse.Controls.Text();
            temp1_Value_inst = new matchr_signup_FuseControlsTextControl_Value_Property(temp1, __selector0);
            var temp2 = new Fuse.Reactive.DataBinding<string>(temp_Value_inst, "info");
            var temp3 = new Fuse.Reactive.DataBinding<Fuse.Layouts.Dock>(temp_DockPanel_Dock_inst, "dock");
            var temp4 = new Fuse.Controls.Panel();
            var temp5 = new Fuse.Controls.Rectangle();
            var temp6 = new Fuse.Reactive.DataBinding<string>(temp1_Value_inst, "text");
            var temp7 = new Fuse.Triggers.AddingAnimation();
            var temp8 = new Fuse.Animations.Scale();
            self.Margin = float4(10f, 10f, 10f, 10f);
            temp.FontSize = 12f;
            temp.Alignment = Fuse.Elements.Alignment.Center;
            temp.Opacity = 0.5f;
            temp.Bindings.Add(temp2);
            temp.Bindings.Add(temp3);
            temp4.Margin = float4(10f, 0f, 10f, 0f);
            temp4.Padding = float4(20f, 20f, 20f, 20f);
            temp4.Children.Add(temp5);
            temp4.Children.Add(temp1);
            temp5.CornerRadius = float4(10f, 10f, 10f, 10f);
            temp5.Color = float4(0f, 0f, 0f, 1f);
            temp5.Opacity = 0.12f;
            temp5.Layer = Fuse.Layer.Background;
            temp1.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
            temp1.Alignment = Fuse.Elements.Alignment.CenterLeft;
            temp1.Bindings.Add(temp6);
            temp7.Animators.Add(temp8);
            temp8.Factor = 0f;
            temp8.Duration = 0.5;
            temp8.Easing = Fuse.Animations.Easing.QuinticIn;
            self.Children.Add(temp);
            self.Children.Add(temp4);
            self.Children.Add(temp7);
            return self;
        }
        static global::Uno.UX.Selector __selector0 = "Value";
        static global::Uno.UX.Selector __selector1 = "DockPanel.Dock";
    }
    global::Uno.UX.Property<bool> temp_IsEnabled_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<object> temp2_Items_inst;
    global::Uno.UX.Property<string> temp3_Value_inst;
    internal Fuse.Reactive.EventBinding temp_eb9;
    internal Fuse.Reactive.EventBinding temp_eb10;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "navBar"
    };
    static SubPageChat()
    {
    }
    [global::Uno.UX.UXConstructor]
    public SubPageChat(
		[global::Uno.UX.UXParameter("navBar")] Fuse.Visual navBar)
    {
        this.navBar = navBar;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new Fuse.Controls.Button();
        temp_IsEnabled_inst = new matchr_signup_FuseVisual_IsEnabled_Property(temp, __selector0);
        var temp1 = new Fuse.Controls.TextInput();
        temp1_Value_inst = new matchr_signup_FuseControlsTextInputControl_Value_Property(temp1, __selector1);
        var temp2 = new Fuse.Reactive.Each();
        temp2_Items_inst = new matchr_signup_FuseReactiveEach_Items_Property(temp2, __selector2);
        var temp3 = new NavBarTitle();
        temp3_Value_inst = new matchr_signup_FuseControlsTextControl_Value_Property(temp3, __selector1);
        var temp4 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp5 = new Fuse.Controls.DockPanel();
        var temp6 = new Fuse.Controls.DockPanel();
        var temp7 = new Fuse.Controls.Rectangle();
        var temp8 = new Fuse.Drawing.StaticSolidColor(float4(0f, 0f, 0f, 1f));
        var temp9 = new Fuse.Controls.Rectangle();
        var temp10 = new Fuse.Drawing.StaticSolidColor(float4(0f, 0f, 0f, 1f));
        var temp11 = new Fuse.Reactive.DataBinding<bool>(temp_IsEnabled_inst, "canSendMessage");
        temp_eb9 = new Fuse.Reactive.EventBinding("sendMessage");
        var temp12 = new Fuse.Reactive.DataBinding<string>(temp1_Value_inst, "message");
        temp_eb10 = new Fuse.Reactive.EventBinding("sendMessage");
        var temp13 = new Fuse.Controls.ScrollView();
        var temp14 = new Fuse.Controls.StackPanel();
        var temp15 = new Template(this, this);
        var temp16 = new Fuse.Reactive.DataBinding<object>(temp2_Items_inst, "messages");
        var temp17 = new Fuse.Triggers.LayoutAnimation();
        var temp18 = new Fuse.Animations.Move();
        var temp19 = new Fuse.Controls.Panel();
        var temp20 = new Fuse.AlternateRoot();
        var temp21 = new Fuse.Reactive.DataBinding<string>(temp3_Value_inst, "title");
        temp4.LineNumber = 2;
        temp4.FileName = "Pages/SubPageChat.ux";
        temp4.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/SubPageChat.js"));
        temp5.Children.Add(temp6);
        temp5.Children.Add(temp13);
        temp6.MinHeight = new Uno.UX.Size(60f, Uno.UX.Unit.Unspecified);
        temp6.Padding = float4(10f, 10f, 10f, 10f);
        global::Fuse.Controls.DockPanel.SetDock(temp6, Fuse.Layouts.Dock.Bottom);
        temp6.Children.Add(temp7);
        temp6.Children.Add(temp9);
        temp6.Children.Add(temp);
        temp6.Children.Add(temp1);
        temp7.Height = new Uno.UX.Size(3f, Uno.UX.Unit.Unspecified);
        temp7.Alignment = Fuse.Elements.Alignment.Top;
        temp7.Opacity = 0.1f;
        temp7.Layer = Fuse.Layer.Background;
        temp7.Fill = temp8;
        temp9.Height = new Uno.UX.Size(3f, Uno.UX.Unit.Unspecified);
        temp9.Alignment = Fuse.Elements.Alignment.Bottom;
        temp9.Opacity = 0.1f;
        temp9.Layer = Fuse.Layer.Background;
        temp9.Fill = temp10;
        temp.Text = "Send";
        temp.Margin = float4(10f, 0f, 0f, 0f);
        global::Fuse.Controls.DockPanel.SetDock(temp, Fuse.Layouts.Dock.Right);
        global::Fuse.Gestures.Clicked.AddHandler(temp, temp_eb9.OnEvent);
        temp.Bindings.Add(temp11);
        temp.Bindings.Add(temp_eb9);
        temp1.PlaceholderText = "Send a message!";
        temp1.PlaceholderColor = float4(0f, 0f, 0f, 0f);
        temp1.ActionStyle = Fuse.Controls.TextInputActionStyle.Send;
        temp1.TextColor = Fuse.Drawing.Colors.Black;
        temp1.CaretColor = float4(0f, 0f, 0f, 0f);
        temp1.ActionTriggered += temp_eb10.OnEvent;
        temp1.Bindings.Add(temp12);
        temp1.Bindings.Add(temp_eb10);
        temp13.Children.Add(temp14);
        temp14.Alignment = Fuse.Elements.Alignment.Bottom;
        temp14.Children.Add(temp2);
        temp14.Children.Add(temp17);
        temp2.Templates.Add(temp15);
        temp2.Bindings.Add(temp16);
        temp17.Animators.Add(temp18);
        temp18.Y = 1f;
        temp18.Duration = 0.5;
        temp18.RelativeTo = Fuse.Triggers.LayoutTransition.PositionChange;
        temp18.Easing = Fuse.Animations.Easing.QuinticInOut;
        temp19.Children.Add(temp20);
        temp20.ParentNode = navBar;
        temp20.Node = temp3;
        temp3.Bindings.Add(temp21);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(navBar);
        this.Children.Add(temp4);
        this.Children.Add(temp5);
        this.Children.Add(temp19);
    }
    static global::Uno.UX.Selector __selector0 = "IsEnabled";
    static global::Uno.UX.Selector __selector1 = "Value";
    static global::Uno.UX.Selector __selector2 = "Items";
}
