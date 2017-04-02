[Uno.Compiler.UxGenerated]
public partial class MatchPage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<string> __gen6_Value_inst;
    global::Uno.UX.Property<string> __gen7_Right_inst;
    global::Uno.UX.Property<string> __gen7_Left_inst;
    global::Uno.UX.Property<string> __gen8_Right_inst;
    global::Uno.UX.Property<string> __gen9_Value_inst;
    global::Uno.UX.Property<string> __gen10_Right_inst;
    global::Uno.UX.Property<string> __gen11_Right_inst;
    global::Uno.UX.Property<string> __gen12_Right_inst;
    global::Uno.UX.Property<string> __gen11_Left_inst;
    global::Uno.UX.Property<string> __gen13_Left_inst;
    internal Fuse.Controls.Text __gen6;
    internal Uno.UX.StringConcatOperator __gen7;
    internal Uno.UX.StringConcatOperator __gen8;
    internal Fuse.Controls.Text __gen9;
    internal Uno.UX.StringConcatOperator __gen10;
    internal Uno.UX.StringConcatOperator __gen11;
    internal Uno.UX.StringConcatOperator __gen12;
    internal Uno.UX.StringConcatOperator __gen13;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "__gen6",
        "__gen7",
        "__gen8",
        "__gen9",
        "__gen10",
        "__gen11",
        "__gen12",
        "__gen13"
    };
    static MatchPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public MatchPage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        __gen6 = new Fuse.Controls.Text();
        __gen6_Value_inst = new matchr_FuseControlsTextControl_Value_Property(__gen6, __selector0);
        __gen7 = new Uno.UX.StringConcatOperator();
        __gen7_Right_inst = new matchr_UnoUXStringConcatOperator_Right_Property(__gen7, __selector1);
        __gen7_Left_inst = new matchr_UnoUXStringConcatOperator_Left_Property(__gen7, __selector2);
        __gen8 = new Uno.UX.StringConcatOperator();
        __gen8_Right_inst = new matchr_UnoUXStringConcatOperator_Right_Property(__gen8, __selector1);
        __gen9 = new Fuse.Controls.Text();
        __gen9_Value_inst = new matchr_FuseControlsTextControl_Value_Property(__gen9, __selector0);
        __gen10 = new Uno.UX.StringConcatOperator();
        __gen10_Right_inst = new matchr_UnoUXStringConcatOperator_Right_Property(__gen10, __selector1);
        __gen11 = new Uno.UX.StringConcatOperator();
        __gen11_Right_inst = new matchr_UnoUXStringConcatOperator_Right_Property(__gen11, __selector1);
        __gen12 = new Uno.UX.StringConcatOperator();
        __gen12_Right_inst = new matchr_UnoUXStringConcatOperator_Right_Property(__gen12, __selector1);
        __gen11_Left_inst = new matchr_UnoUXStringConcatOperator_Left_Property(__gen11, __selector2);
        __gen13 = new Uno.UX.StringConcatOperator();
        __gen13_Left_inst = new matchr_UnoUXStringConcatOperator_Left_Property(__gen13, __selector2);
        var temp = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp1 = new Fuse.Controls.ScrollView();
        var temp2 = new Fuse.Controls.StackPanel();
        var temp3 = new Fuse.Controls.Text();
        var temp4 = new Fuse.Reactive.DataBinding<string>(__gen7_Left_inst, "match.firstName");
        var temp5 = new Fuse.Reactive.DataBinding<string>(__gen8_Right_inst, "match.lastName");
        var temp6 = new Fuse.Controls.Button();
        var temp7 = new Fuse.Controls.Button();
        var temp8 = new Fuse.Reactive.DataBinding<string>(__gen11_Left_inst, "recommender.firstName");
        var temp9 = new Fuse.Reactive.DataBinding<string>(__gen13_Left_inst, "recommender.lastName");
        var temp10 = new Fuse.Controls.Button();
        temp.LineNumber = 3;
        temp.FileName = "Pages/MatchPage.ux";
        temp.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/MatchPage.js"));
        temp1.Children.Add(temp2);
        temp2.Children.Add(temp3);
        temp2.Children.Add(__gen6);
        temp2.Children.Add(temp6);
        temp2.Children.Add(temp7);
        temp2.Children.Add(__gen9);
        temp2.Children.Add(temp10);
        temp3.Value = "You were matched!";
        __gen6.Name = __selector3;
        __gen6.Bindings.Add(temp4);
        __gen6.Bindings.Add(temp5);
        __gen7.Target = __gen6_Value_inst;
        __gen8.Left = " + ";
        __gen8.Target = __gen7_Right_inst;
        temp6.Text = "Add";
        temp7.Text = "Message";
        __gen9.Name = __selector4;
        __gen9.Bindings.Add(temp8);
        __gen9.Bindings.Add(temp9);
        __gen10.Left = "This match was suggested by ";
        __gen10.Target = __gen9_Value_inst;
        __gen11.Target = __gen10_Right_inst;
        __gen12.Left = " + ";
        __gen12.Target = __gen11_Right_inst;
        __gen13.Right = ".";
        __gen13.Target = __gen12_Right_inst;
        temp10.Text = "Say Thanks";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(__gen6);
        __g_nametable.Objects.Add(__gen7);
        __g_nametable.Objects.Add(__gen8);
        __g_nametable.Objects.Add(__gen9);
        __g_nametable.Objects.Add(__gen10);
        __g_nametable.Objects.Add(__gen11);
        __g_nametable.Objects.Add(__gen12);
        __g_nametable.Objects.Add(__gen13);
        this.Children.Add(temp);
        this.Children.Add(temp1);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "Right";
    static global::Uno.UX.Selector __selector2 = "Left";
    static global::Uno.UX.Selector __selector3 = "__gen6";
    static global::Uno.UX.Selector __selector4 = "__gen9";
}
