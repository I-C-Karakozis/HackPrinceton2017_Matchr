[Uno.Compiler.UxGenerated]
public partial class HomePage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    [global::Uno.UX.UXGlobalResource("Comfortaa")] public static readonly Fuse.Font Comfortaa;
    [global::Uno.UX.UXGlobalResource("ComfortaaBold")] public static readonly Fuse.Font ComfortaaBold;
    internal Fuse.Reactive.EventBinding temp_eb0;
    internal Fuse.Reactive.EventBinding temp_eb1;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router"
    };
    static HomePage()
    {
        Comfortaa = new Fuse.Font(new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/Comfortaa Regular.ttf")));
        ComfortaaBold = new Fuse.Font(new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/Comfortaa Bold.ttf")));
        global::Uno.UX.Resource.SetGlobalKey(Comfortaa, "Comfortaa");
        global::Uno.UX.Resource.SetGlobalKey(ComfortaaBold, "ComfortaaBold");
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
        var temp1 = new Fuse.Controls.Image();
        var temp2 = new Fuse.Controls.ScrollView();
        var temp3 = new Fuse.Controls.StackPanel();
        var temp4 = new Fuse.Controls.Text();
        var temp5 = new Fuse.Controls.NativeViewHost();
        var temp6 = new Fuse.Controls.Button();
        temp_eb0 = new Fuse.Reactive.EventBinding("gotosignup");
        var temp7 = new Fuse.Controls.NativeViewHost();
        var temp8 = new Fuse.Controls.Button();
        temp_eb1 = new Fuse.Reactive.EventBinding("gotosignin");
        temp.LineNumber = 3;
        temp.FileName = "Pages/HomePage.ux";
        temp.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/HomePage.js"));
        temp1.StretchMode = Fuse.Elements.StretchMode.UniformToFill;
        temp1.ContentAlignment = Fuse.Elements.Alignment.Left;
        temp1.Opacity = 0.9f;
        temp1.Layer = Fuse.Layer.Background;
        temp1.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/balloon.jpg"));
        temp2.Children.Add(temp3);
        temp3.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp3.Children.Add(temp4);
        temp3.Children.Add(temp5);
        temp3.Children.Add(temp7);
        temp4.Value = " matchr";
        temp4.FontSize = 60f;
        temp4.Alignment = Fuse.Elements.Alignment.Center;
        temp4.Padding = float4(10f, 10f, 10f, 10f);
        temp4.Font = global::HomePage.ComfortaaBold;
        temp5.Children.Add(temp6);
        temp6.Text = "Sign Up";
        temp6.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp6.Padding = float4(15f, 15f, 15f, 15f);
        global::Fuse.Gestures.Clicked.AddHandler(temp6, temp_eb0.OnEvent);
        temp6.Bindings.Add(temp_eb0);
        temp7.Children.Add(temp8);
        temp8.Text = "Sign In";
        temp8.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp8.Padding = float4(15f, 15f, 15f, 15f);
        global::Fuse.Gestures.Clicked.AddHandler(temp8, temp_eb1.OnEvent);
        temp8.Bindings.Add(temp_eb1);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        this.Children.Add(temp);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
    }
}
