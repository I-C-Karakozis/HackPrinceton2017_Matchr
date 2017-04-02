[Uno.Compiler.UxGenerated]
public partial class ProfilePage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    internal Fuse.Reactive.EventBinding temp_eb8;
    internal Fuse.Reactive.EventBinding temp_eb9;
    internal Fuse.Reactive.EventBinding temp_eb10;
    internal Fuse.Reactive.EventBinding temp_eb11;
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
        var temp2 = new Fuse.Controls.StackPanel();
        var temp3 = new Fuse.Controls.Button();
        temp_eb8 = new Fuse.Reactive.EventBinding("goToSelect");
        var temp4 = new Fuse.Controls.Button();
        temp_eb9 = new Fuse.Reactive.EventBinding("goToMatchList");
        var temp5 = new Fuse.Controls.Button();
        temp_eb10 = new Fuse.Reactive.EventBinding("goToMessages");
        var temp6 = new Fuse.Controls.Button();
        temp_eb11 = new Fuse.Reactive.EventBinding("goToProfile");
        temp.LineNumber = 3;
        temp.FileName = "Pages/ProfilePage.ux";
        temp.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/NavBar.js"));
        temp1.LineNumber = 4;
        temp1.FileName = "Pages/ProfilePage.ux";
        temp1.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/ProfilePage.js"));
        temp2.Children.Add(temp3);
        temp2.Children.Add(temp4);
        temp2.Children.Add(temp5);
        temp2.Children.Add(temp6);
        temp3.Text = "Match";
        global::Fuse.Gestures.Clicked.AddHandler(temp3, temp_eb8.OnEvent);
        temp3.Bindings.Add(temp_eb8);
        temp4.Text = "Matches";
        global::Fuse.Gestures.Clicked.AddHandler(temp4, temp_eb9.OnEvent);
        temp4.Bindings.Add(temp_eb9);
        temp5.Text = "Message";
        global::Fuse.Gestures.Clicked.AddHandler(temp5, temp_eb10.OnEvent);
        temp5.Bindings.Add(temp_eb10);
        temp6.Text = "Profile";
        global::Fuse.Gestures.Clicked.AddHandler(temp6, temp_eb11.OnEvent);
        temp6.Bindings.Add(temp_eb11);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        this.Children.Add(temp);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
    }
}
