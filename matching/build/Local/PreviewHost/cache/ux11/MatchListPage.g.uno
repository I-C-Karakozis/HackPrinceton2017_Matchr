[Uno.Compiler.UxGenerated]
public partial class MatchListPage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MatchListPage __parent;
        [Uno.WeakReference] internal readonly MatchListPage __parentInstance;
        public Template(MatchListPage parent, MatchListPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> self_Text_inst;
        global::Uno.UX.Property<string> __gen1_Right_inst;
        global::Uno.UX.Property<string> __gen1_Left_inst;
        global::Uno.UX.Property<string> __gen2_Right_inst;
        internal Uno.UX.StringConcatOperator __gen1;
        internal Uno.UX.StringConcatOperator __gen2;
        static Template()
        {
        }
        public override object New()
        {
            var self = new Fuse.Controls.Button();
            self_Text_inst = new matchr_FuseControlsButtonBase_Text_Property(self, __selector0);
            var __gen1 = new Uno.UX.StringConcatOperator();
            __gen1_Right_inst = new matchr_UnoUXStringConcatOperator_Right_Property(__gen1, __selector1);
            __gen1_Left_inst = new matchr_UnoUXStringConcatOperator_Left_Property(__gen1, __selector2);
            var __gen2 = new Uno.UX.StringConcatOperator();
            __gen2_Right_inst = new matchr_UnoUXStringConcatOperator_Right_Property(__gen2, __selector1);
            var temp = new Fuse.Reactive.DataBinding<string>(__gen1_Left_inst, "friend2.firstName");
            var temp1 = new Fuse.Reactive.DataBinding<string>(__gen2_Right_inst, "friend2.lastName");
            self.Name = __selector3;
            __gen1.Target = self_Text_inst;
            __gen2.Left = " ";
            __gen2.Target = __gen1_Right_inst;
            self.Bindings.Add(temp);
            self.Bindings.Add(temp1);
            return self;
        }
        static global::Uno.UX.Selector __selector0 = "Text";
        static global::Uno.UX.Selector __selector1 = "Right";
        static global::Uno.UX.Selector __selector2 = "Left";
        static global::Uno.UX.Selector __selector3 = "__gen0";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template1: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MatchListPage __parent;
        [Uno.WeakReference] internal readonly MatchListPage __parentInstance;
        public Template1(MatchListPage parent, MatchListPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template1()
        {
        }
        public override object New()
        {
            var self = new Fuse.Controls.Text();
            self.Value = "Recommended by";
            return self;
        }
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template2: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MatchListPage __parent;
        [Uno.WeakReference] internal readonly MatchListPage __parentInstance;
        public Template2(MatchListPage parent, MatchListPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> self_Value_inst;
        global::Uno.UX.Property<string> __gen4_Right_inst;
        global::Uno.UX.Property<string> __gen4_Left_inst;
        global::Uno.UX.Property<string> __gen5_Right_inst;
        internal Uno.UX.StringConcatOperator __gen4;
        internal Uno.UX.StringConcatOperator __gen5;
        static Template2()
        {
        }
        public override object New()
        {
            var self = new Fuse.Controls.Text();
            self_Value_inst = new matchr_FuseControlsTextControl_Value_Property(self, __selector0);
            var __gen4 = new Uno.UX.StringConcatOperator();
            __gen4_Right_inst = new matchr_UnoUXStringConcatOperator_Right_Property(__gen4, __selector1);
            __gen4_Left_inst = new matchr_UnoUXStringConcatOperator_Left_Property(__gen4, __selector2);
            var __gen5 = new Uno.UX.StringConcatOperator();
            __gen5_Right_inst = new matchr_UnoUXStringConcatOperator_Right_Property(__gen5, __selector1);
            var temp = new Fuse.Reactive.DataBinding<string>(__gen4_Left_inst, "recommender.firstName");
            var temp1 = new Fuse.Reactive.DataBinding<string>(__gen5_Right_inst, "recommender.lastName");
            self.Name = __selector3;
            __gen4.Target = self_Value_inst;
            __gen5.Left = " ";
            __gen5.Target = __gen4_Right_inst;
            self.Bindings.Add(temp);
            self.Bindings.Add(temp1);
            return self;
        }
        static global::Uno.UX.Selector __selector0 = "Value";
        static global::Uno.UX.Selector __selector1 = "Right";
        static global::Uno.UX.Selector __selector2 = "Left";
        static global::Uno.UX.Selector __selector3 = "__gen3";
    }
    global::Uno.UX.Property<object> temp_Items_inst;
    internal Fuse.Reactive.EventBinding temp_eb0;
    internal Fuse.Reactive.EventBinding temp_eb1;
    internal Fuse.Reactive.EventBinding temp_eb2;
    internal Fuse.Reactive.EventBinding temp_eb3;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router"
    };
    static MatchListPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public MatchListPage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new Fuse.Reactive.Each();
        temp_Items_inst = new matchr_FuseReactiveEach_Items_Property(temp, __selector0);
        var temp1 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp2 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp3 = new Fuse.Controls.ScrollView();
        var temp4 = new Fuse.Controls.StackPanel();
        var temp5 = new Fuse.Controls.Button();
        temp_eb0 = new Fuse.Reactive.EventBinding("goToSelect");
        var temp6 = new Fuse.Controls.Button();
        temp_eb1 = new Fuse.Reactive.EventBinding("goToMatchList");
        var temp7 = new Fuse.Controls.Button();
        temp_eb2 = new Fuse.Reactive.EventBinding("goToMessages");
        var temp8 = new Fuse.Controls.Button();
        temp_eb3 = new Fuse.Reactive.EventBinding("goToProfile");
        var __gen0 = new Template(this, this);
        var temp9 = new Template1(this, this);
        var __gen3 = new Template2(this, this);
        var temp10 = new Fuse.Reactive.DataBinding<object>(temp_Items_inst, "userMatches");
        temp1.LineNumber = 3;
        temp1.FileName = "Pages/MatchListPage.ux";
        temp1.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/NavBar.js"));
        temp2.LineNumber = 4;
        temp2.FileName = "Pages/MatchListPage.ux";
        temp2.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/MatchListPage.js"));
        temp3.Children.Add(temp4);
        temp4.Children.Add(temp5);
        temp4.Children.Add(temp6);
        temp4.Children.Add(temp7);
        temp4.Children.Add(temp8);
        temp4.Children.Add(temp);
        temp5.Text = "Match";
        global::Fuse.Gestures.Clicked.AddHandler(temp5, temp_eb0.OnEvent);
        temp5.Bindings.Add(temp_eb0);
        temp6.Text = "Matches";
        global::Fuse.Gestures.Clicked.AddHandler(temp6, temp_eb1.OnEvent);
        temp6.Bindings.Add(temp_eb1);
        temp7.Text = "Message";
        global::Fuse.Gestures.Clicked.AddHandler(temp7, temp_eb2.OnEvent);
        temp7.Bindings.Add(temp_eb2);
        temp8.Text = "Profile";
        global::Fuse.Gestures.Clicked.AddHandler(temp8, temp_eb3.OnEvent);
        temp8.Bindings.Add(temp_eb3);
        temp.Templates.Add(__gen0);
        temp.Templates.Add(temp9);
        temp.Templates.Add(__gen3);
        temp.Bindings.Add(temp10);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
        this.Children.Add(temp3);
    }
    static global::Uno.UX.Selector __selector0 = "Items";
}
