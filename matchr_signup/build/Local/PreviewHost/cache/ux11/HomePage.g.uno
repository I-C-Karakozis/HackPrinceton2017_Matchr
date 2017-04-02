[Uno.Compiler.UxGenerated]
public partial class HomePage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    internal Fuse.Reactive.EventBinding temp_eb0;
    internal Fuse.Reactive.EventBinding temp_eb1;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router"
    };
    static HomePage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public HomePage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp1 = new Fuse.Controls.ScrollView();
        var temp2 = new Fuse.Controls.StackPanel();
        var temp3 = new Fuse.Controls.NativeViewHost();
        var temp4 = new Fuse.Controls.Button();
        temp_eb0 = new Fuse.Reactive.EventBinding("gotosignup");
        var temp5 = new Fuse.Controls.NativeViewHost();
        var temp6 = new Fuse.Controls.Button();
        temp_eb1 = new Fuse.Reactive.EventBinding("gotosignin");
        temp.LineNumber = 4;
        temp.FileName = "Pages/HomePage.ux";
        temp.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/HomePage.js"));
        temp1.Children.Add(temp2);
        temp2.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp2.Children.Add(temp3);
        temp2.Children.Add(temp5);
        temp3.Children.Add(temp4);
        temp4.Text = "Sign Up";
        temp4.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp4.Padding = float4(15f, 15f, 15f, 15f);
        global::Fuse.Gestures.Clicked.AddHandler(temp4, temp_eb0.OnEvent);
        temp4.Bindings.Add(temp_eb0);
        temp5.Children.Add(temp6);
        temp6.Text = "Sign In";
        temp6.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp6.Padding = float4(15f, 15f, 15f, 15f);
        global::Fuse.Gestures.Clicked.AddHandler(temp6, temp_eb1.OnEvent);
        temp6.Bindings.Add(temp_eb1);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        this.Children.Add(temp);
        this.Children.Add(temp1);
    }
}
