[Uno.Compiler.UxGenerated]
public partial class MatchListView: Fuse.Controls.Page
{
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MatchListView __parent;
        [Uno.WeakReference] internal readonly MatchListView __parentInstance;
        public Template(MatchListView parent, MatchListView parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> self_Value_inst;
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
            var self = new Fuse.Controls.Text();
            self_Value_inst = new matchr_FuseControlsTextControl_Value_Property(self, __selector0);
            var __gen1 = new Uno.UX.StringConcatOperator();
            __gen1_Right_inst = new matchr_UnoUXStringConcatOperator_Right_Property(__gen1, __selector1);
            __gen1_Left_inst = new matchr_UnoUXStringConcatOperator_Left_Property(__gen1, __selector2);
            var __gen2 = new Uno.UX.StringConcatOperator();
            __gen2_Right_inst = new matchr_UnoUXStringConcatOperator_Right_Property(__gen2, __selector1);
            var temp = new Fuse.Reactive.DataBinding<string>(__gen1_Left_inst, "friend2.firstName");
            var temp1 = new Fuse.Reactive.DataBinding<string>(__gen2_Right_inst, "friend2.lastName");
            self.Name = __selector3;
            __gen1.Target = self_Value_inst;
            __gen2.Left = " ";
            __gen2.Target = __gen1_Right_inst;
            self.Bindings.Add(temp);
            self.Bindings.Add(temp1);
            return self;
        }
        static global::Uno.UX.Selector __selector0 = "Value";
        static global::Uno.UX.Selector __selector1 = "Right";
        static global::Uno.UX.Selector __selector2 = "Left";
        static global::Uno.UX.Selector __selector3 = "__gen0";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template1: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MatchListView __parent;
        [Uno.WeakReference] internal readonly MatchListView __parentInstance;
        public Template1(MatchListView parent, MatchListView parentInstance): base(null, false)
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
        [Uno.WeakReference] internal readonly MatchListView __parent;
        [Uno.WeakReference] internal readonly MatchListView __parentInstance;
        public Template2(MatchListView parent, MatchListView parentInstance): base(null, false)
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
            var temp1 = new Fuse.Reactive.DataBinding<string>(__gen5_Right_inst, "recommender.LastName");
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
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
    };
    static MatchListView()
    {
    }
    [global::Uno.UX.UXConstructor]
    public MatchListView()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new Fuse.Reactive.Each();
        temp_Items_inst = new matchr_FuseReactiveEach_Items_Property(temp, __selector0);
        var temp1 = new Fuse.Reactive.JavaScript(__g_nametable);
        var __gen0 = new Template(this, this);
        var temp2 = new Template1(this, this);
        var __gen3 = new Template2(this, this);
        var temp3 = new Fuse.Reactive.DataBinding<object>(temp_Items_inst, "userMatches");
        temp1.LineNumber = 2;
        temp1.FileName = "Pages/MatchListView.ux";
        temp1.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/MatchListViewPage.js"));
        temp.Templates.Add(__gen0);
        temp.Templates.Add(temp2);
        temp.Templates.Add(__gen3);
        temp.Bindings.Add(temp3);
        __g_nametable.This = this;
        this.Children.Add(temp1);
        this.Children.Add(temp);
    }
    static global::Uno.UX.Selector __selector0 = "Items";
}
