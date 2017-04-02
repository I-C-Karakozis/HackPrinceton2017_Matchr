[Uno.Compiler.UxGenerated]
public partial class Tab: Fuse.Controls.Panel
{
    string _field_Text;
    [global::Uno.UX.UXOriginSetter("SetText")]
    public string Text
    {
        get { return _field_Text; }
        set { SetText(value, null); }
    }
    public void SetText(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Text)
        {
            _field_Text = value;
            OnPropertyChanged("Text", origin);
        }
    }
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<string> this_Text_inst;
    static Tab()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Tab()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new Fuse.Controls.Text();
        temp_Value_inst = new matchr_signup_FuseControlsTextControl_Value_Property(temp, __selector0);
        this_Text_inst = new matchr_signup_Tab_Text_Property(this, __selector1);
        var temp1 = new Fuse.Reactive.ReadPropertyBinding(temp_Value_inst, this_Text_inst);
        var temp2 = new Fuse.Drawing.StaticSolidColor(float4(0.7411765f, 0.7647059f, 0.7803922f, 1f));
        this.Margin = float4(0f, 0f, 0f, 4f);
        this.ClipToBounds = false;
        temp.Color = float4(1f, 1f, 1f, 1f);
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.Bindings.Add(temp1);
        this.Background = temp2;
        this.Children.Add(temp);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "Text";
}
