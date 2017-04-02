[Uno.Compiler.UxGenerated]
public partial class chatPage: Fuse.Controls.Page
{
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly chatPage __parent;
        [Uno.WeakReference] internal readonly chatPage __parentInstance;
        public Template(chatPage parent, chatPage parentInstance): base("mainPage", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        [Uno.Compiler.UxGenerated]
        public partial class Template1: Uno.UX.Template
        {
            [Uno.WeakReference] internal readonly Template __parent;
            [Uno.WeakReference] internal readonly Fuse.Controls.Page __parentInstance;
            public Template1(Template parent, Fuse.Controls.Page parentInstance): base(null, false)
            {
                __parent = parent;
                __parentInstance = parentInstance;
            }
            global::Uno.UX.Property<string> temp_Value_inst;
            internal Fuse.Reactive.EventBinding temp_eb3;
            static Template1()
            {
            }
            public override object New()
            {
                var self = new Fuse.Controls.Panel();
                var temp = new Fuse.Controls.Text();
                temp_Value_inst = new matchr_signup_FuseControlsTextControl_Value_Property(temp, __selector0);
                var temp1 = new Fuse.Controls.DockPanel();
                var temp2 = new Fuse.Controls.Rectangle();
                var temp3 = new Fuse.Controls.Image();
                var temp4 = new Fuse.Controls.Text();
                var temp5 = new Fuse.Controls.Image();
                var temp6 = new Fuse.Reactive.DataBinding<string>(temp_Value_inst, "title");
                var temp_eb3 = new Fuse.Reactive.EventBinding("clicked");
                self.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
                global::Fuse.Gestures.Clicked.AddHandler(self, temp_eb3.OnEvent);
                temp1.Children.Add(temp2);
                temp1.Children.Add(temp3);
                temp1.Children.Add(temp4);
                temp1.Children.Add(temp5);
                temp1.Children.Add(temp);
                temp2.CornerRadius = float4(3f, 3f, 3f, 3f);
                temp2.Color = float4(0.8705882f, 0.7254902f, 0.7098039f, 1f);
                temp2.Layer = Fuse.Layer.Background;
                temp3.Color = float4(1f, 1f, 1f, 1f);
                temp3.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
                global::Fuse.Controls.DockPanel.SetDock(temp3, Fuse.Layouts.Dock.Left);
                temp3.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/avatar.png"));
                temp4.Value = "Name";
                temp4.FontSize = 18f;
                temp4.Color = float4(1f, 1f, 1f, 1f);
                temp4.Alignment = Fuse.Elements.Alignment.CenterRight;
                temp4.Margin = float4(5f, 0f, 0f, 0f);
                global::Fuse.Controls.DockPanel.SetDock(temp4, Fuse.Layouts.Dock.Left);
                temp4.Font = global::HomePage.Comfortaa;
                temp5.Color = float4(1f, 1f, 1f, 1f);
                temp5.Height = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
                global::Fuse.Controls.DockPanel.SetDock(temp5, Fuse.Layouts.Dock.Right);
                temp5.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/arrow-right-white.png"));
                temp.FontSize = 18f;
                temp.Color = float4(1f, 1f, 1f, 1f);
                temp.Alignment = Fuse.Elements.Alignment.CenterRight;
                temp.Margin = float4(5f, 0f, 0f, 0f);
                global::Fuse.Controls.DockPanel.SetDock(temp, Fuse.Layouts.Dock.Right);
                temp.Font = global::HomePage.Comfortaa;
                temp.Bindings.Add(temp6);
                self.Children.Add(temp1);
                self.Bindings.Add(temp_eb3);
                return self;
            }
            static global::Uno.UX.Selector __selector0 = "Value";
        }
        global::Uno.UX.Property<object> temp_Items_inst;
        static Template()
        {
        }
        public override object New()
        {
            var self = new Fuse.Controls.Page();
            var temp = new Fuse.Reactive.Each();
            temp_Items_inst = new matchr_signup_FuseReactiveEach_Items_Property(temp, __selector0);
            var temp1 = new Fuse.Controls.ScrollView();
            var temp2 = new Fuse.Controls.StackPanel();
            var temp3 = new Template1(this, self);
            var temp4 = new Fuse.Reactive.DataBinding<object>(temp_Items_inst, "pages");
            var temp5 = new Fuse.AlternateRoot();
            var temp6 = new NavBarTitleChat();
            self.Name = __selector1;
            temp1.Children.Add(temp2);
            temp2.ItemSpacing = 7f;
            temp2.Margin = float4(7f, 7f, 7f, 7f);
            temp2.Children.Add(temp);
            temp.Templates.Add(temp3);
            temp.Bindings.Add(temp4);
            temp5.ParentNode = __parent.navBar;
            temp5.Node = temp6;
            temp6.Value = "your messages";
            temp6.FontSize = 20f;
            temp6.Font = global::HomePage.Comfortaa;
            self.Children.Add(temp1);
            self.Children.Add(temp5);
            return self;
        }
        static global::Uno.UX.Selector __selector0 = "Items";
        static global::Uno.UX.Selector __selector1 = "mainPage";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template1: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly chatPage __parent;
        [Uno.WeakReference] internal readonly chatPage __parentInstance;
        public Template1(chatPage parent, chatPage parentInstance): base("subPageChat", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template1()
        {
        }
        public override object New()
        {
            var self = new SubPageChat(__parent.navBar);
            self.Name = __selector0;
            return self;
        }
        static global::Uno.UX.Selector __selector0 = "subPageChat";
    }
    global::Uno.UX.Property<float> backButton_Opacity_inst;
    internal Fuse.Navigation.Router router;
    internal Fuse.Controls.Panel navBar;
    internal Fuse.Controls.Panel backButton;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "navBar",
        "backButton"
    };
    static chatPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public chatPage()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        backButton = new Fuse.Controls.Panel();
        backButton_Opacity_inst = new matchr_signup_FuseElementsElement_Opacity_Property(backButton, __selector0);
        router = new Fuse.Navigation.Router();
        var temp = new Fuse.Controls.DockPanel();
        var temp1 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp2 = new Fuse.Controls.StackPanel();
        var temp3 = new Fuse.Controls.StatusBarBackground();
        var temp4 = new Fuse.iOS.StatusBarConfig();
        navBar = new Fuse.Controls.Panel();
        var temp5 = new Fuse.Navigation.WhileCanGoBack();
        var temp6 = new Fuse.Controls.DockPanel();
        var temp7 = new Fuse.Controls.Image();
        var temp8 = new Fuse.Triggers.AddingAnimation();
        var temp9 = new Fuse.Animations.Change<float>(backButton_Opacity_inst);
        var temp10 = new Fuse.Triggers.RemovingAnimation();
        var temp11 = new Fuse.Animations.Change<float>(backButton_Opacity_inst);
        var temp12 = new Fuse.Gestures.Clicked();
        var temp13 = new Fuse.Navigation.GoBack();
        var temp14 = new Fuse.Drawing.StaticSolidColor(float4(0.6666667f, 0.6666667f, 0.6666667f, 1f));
        var temp15 = new Fuse.Controls.BottomBarBackground();
        var temp16 = new Fuse.Controls.Navigator();
        var mainPage = new Template(this, this);
        var subPageChat = new Template1(this, this);
        router.Name = __selector1;
        temp.Children.Add(temp1);
        temp.Children.Add(temp2);
        temp.Children.Add(temp15);
        temp.Children.Add(temp16);
        temp1.LineNumber = 4;
        temp1.FileName = "Pages/MatchesPageChat.ux";
        temp1.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/MatchesPageChat.js"));
        global::Fuse.Controls.DockPanel.SetDock(temp2, Fuse.Layouts.Dock.Top);
        temp2.Background = temp14;
        temp2.Children.Add(temp3);
        temp2.Children.Add(temp4);
        temp2.Children.Add(navBar);
        temp4.Style = Fuse.Platform.StatusBarStyle.Light;
        navBar.Color = float4(0.4235294f, 0.4784314f, 0.5372549f, 1f);
        navBar.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        navBar.Name = __selector2;
        global::Fuse.Controls.DockPanel.SetDock(navBar, Fuse.Layouts.Dock.Top);
        navBar.Children.Add(temp5);
        temp5.Nodes.Add(backButton);
        backButton.HitTestMode = Fuse.Elements.HitTestMode.LocalBounds;
        backButton.Width = new Uno.UX.Size(90f, Uno.UX.Unit.Unspecified);
        backButton.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        backButton.Alignment = Fuse.Elements.Alignment.Left;
        backButton.Padding = float4(20f, 0f, 0f, 0f);
        backButton.Name = __selector3;
        backButton.Children.Add(temp6);
        backButton.Children.Add(temp8);
        backButton.Children.Add(temp10);
        backButton.Children.Add(temp12);
        temp6.Children.Add(temp7);
        temp7.Color = float4(1f, 1f, 1f, 1f);
        temp7.Height = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
        global::Fuse.Controls.DockPanel.SetDock(temp7, Fuse.Layouts.Dock.Left);
        temp7.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/arrow-left-white.png"));
        temp8.Animators.Add(temp9);
        temp9.Value = 0f;
        temp9.Duration = 0.3;
        temp10.Animators.Add(temp11);
        temp11.Value = 0f;
        temp11.Duration = 0.3;
        temp12.Actions.Add(temp13);
        global::Fuse.Controls.DockPanel.SetDock(temp15, Fuse.Layouts.Dock.Bottom);
        temp16.DefaultPath = "mainPage";
        temp16.Templates.Add(mainPage);
        temp16.Templates.Add(subPageChat);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(navBar);
        __g_nametable.Objects.Add(backButton);
        this.Children.Add(router);
        this.Children.Add(temp);
    }
    static global::Uno.UX.Selector __selector0 = "Opacity";
    static global::Uno.UX.Selector __selector1 = "router";
    static global::Uno.UX.Selector __selector2 = "navBar";
    static global::Uno.UX.Selector __selector3 = "backButton";
}
