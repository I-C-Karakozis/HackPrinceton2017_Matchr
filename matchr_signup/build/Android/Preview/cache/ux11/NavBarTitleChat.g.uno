[Uno.Compiler.UxGenerated]
public partial class NavBarTitleChat: Fuse.Controls.Text
{
    global::Uno.UX.Property<float> this_Opacity_inst;
    static NavBarTitleChat()
    {
    }
    [global::Uno.UX.UXConstructor]
    public NavBarTitleChat()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        this_Opacity_inst = new matchr_signup_FuseElementsElement_Opacity_Property(this, __selector0);
        var temp = new Fuse.Navigation.EnteringAnimation();
        var temp1 = new Fuse.Animations.Move();
        var temp2 = new Fuse.Animations.Change<float>(this_Opacity_inst);
        var temp3 = new Fuse.Navigation.ExitingAnimation();
        var temp4 = new Fuse.Animations.Move();
        var temp5 = new Fuse.Animations.Change<float>(this_Opacity_inst);
        this.FontSize = 25f;
        this.TextColor = float4(1f, 1f, 1f, 1f);
        this.HitTestMode = Fuse.Elements.HitTestMode.None;
        this.Alignment = Fuse.Elements.Alignment.Center;
        temp.Animators.Add(temp1);
        temp.Animators.Add(temp2);
        temp1.X = 50f;
        temp1.Duration = 0.35;
        temp1.Easing = Fuse.Animations.Easing.CubicInOut;
        temp2.Value = 0f;
        temp2.Duration = 0.25;
        temp2.Easing = Fuse.Animations.Easing.CubicIn;
        temp3.Animators.Add(temp4);
        temp3.Animators.Add(temp5);
        temp4.X = -50f;
        temp4.Duration = 0.35;
        temp4.Easing = Fuse.Animations.Easing.CubicInOut;
        temp5.Value = 0f;
        temp5.Duration = 0.25;
        temp5.Easing = Fuse.Animations.Easing.CubicIn;
        this.Children.Add(temp);
        this.Children.Add(temp3);
    }
    static global::Uno.UX.Selector __selector0 = "Opacity";
}
