[Uno.Compiler.UxGenerated]
public partial class ProfilePage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    internal Fuse.Reactive.EventBinding temp_eb4;
    internal Fuse.Reactive.EventBinding temp_eb5;
    internal Fuse.Reactive.EventBinding temp_eb6;
    internal Fuse.Reactive.EventBinding temp_eb7;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router"
    };
    static ProfilePage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public ProfilePage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp1 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp2 = new Fuse.Controls.Button();
        temp_eb4 = new Fuse.Reactive.EventBinding("goToSelect");
        var temp3 = new Fuse.Controls.Button();
        temp_eb5 = new Fuse.Reactive.EventBinding("goToMatchList");
        var temp4 = new Fuse.Controls.Button();
        temp_eb6 = new Fuse.Reactive.EventBinding("goToMessages");
        var temp5 = new Fuse.Controls.Button();
        temp_eb7 = new Fuse.Reactive.EventBinding("goToProfile");
        temp.LineNumber = 3;
        temp.FileName = "Pages/ProfilePage.ux";
        temp.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/NavBar.js"));
        temp1.LineNumber = 4;
        temp1.FileName = "Pages/ProfilePage.ux";
        temp1.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/ProfilePage.js"));
        temp2.Text = "Match";
        global::Fuse.Gestures.Clicked.AddHandler(temp2, temp_eb4.OnEvent);
        temp2.Bindings.Add(temp_eb4);
        temp3.Text = "Matches";
        global::Fuse.Gestures.Clicked.AddHandler(temp3, temp_eb5.OnEvent);
        temp3.Bindings.Add(temp_eb5);
        temp4.Text = "Message";
        global::Fuse.Gestures.Clicked.AddHandler(temp4, temp_eb6.OnEvent);
        temp4.Bindings.Add(temp_eb6);
        temp5.Text = "Profile";
        global::Fuse.Gestures.Clicked.AddHandler(temp5, temp_eb7.OnEvent);
        temp5.Bindings.Add(temp_eb7);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        this.Children.Add(temp);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
        this.Children.Add(temp3);
        this.Children.Add(temp4);
        this.Children.Add(temp5);
    }
}
