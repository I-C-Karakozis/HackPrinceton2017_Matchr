[Uno.Compiler.UxGenerated]
public partial class ProfilePage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<string> temp_Value_inst;
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
        var temp = new Fuse.Controls.Text();
        temp_Value_inst = new matchr_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp1 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp2 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp3 = new Fuse.Controls.StackPanel();
        var temp4 = new Fuse.Controls.Button();
        temp_eb8 = new Fuse.Reactive.EventBinding("goToSelect");
        var temp5 = new Fuse.Controls.Button();
        temp_eb9 = new Fuse.Reactive.EventBinding("goToMatchList");
        var temp6 = new Fuse.Controls.Button();
        temp_eb10 = new Fuse.Reactive.EventBinding("goToMessages");
        var temp7 = new Fuse.Controls.Button();
        temp_eb11 = new Fuse.Reactive.EventBinding("goToProfile");
        var temp8 = new Fuse.Reactive.DataBinding<string>(temp_Value_inst, "responseResult");
        temp1.LineNumber = 3;
        temp1.FileName = "Pages/ProfilePage.ux";
        temp1.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/NavBar.js"));
        temp2.LineNumber = 4;
        temp2.FileName = "Pages/ProfilePage.ux";
        temp2.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/ProfilePage.js"));
        temp3.Children.Add(temp4);
        temp3.Children.Add(temp5);
        temp3.Children.Add(temp6);
        temp3.Children.Add(temp7);
        temp3.Children.Add(temp);
        temp4.Text = "Match";
        global::Fuse.Gestures.Clicked.AddHandler(temp4, temp_eb8.OnEvent);
        temp4.Bindings.Add(temp_eb8);
        temp5.Text = "Matches";
        global::Fuse.Gestures.Clicked.AddHandler(temp5, temp_eb9.OnEvent);
        temp5.Bindings.Add(temp_eb9);
        temp6.Text = "Message";
        global::Fuse.Gestures.Clicked.AddHandler(temp6, temp_eb10.OnEvent);
        temp6.Bindings.Add(temp_eb10);
        temp7.Text = "Profile";
        global::Fuse.Gestures.Clicked.AddHandler(temp7, temp_eb11.OnEvent);
        temp7.Bindings.Add(temp_eb11);
        temp.Bindings.Add(temp8);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
        this.Children.Add(temp3);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
}
