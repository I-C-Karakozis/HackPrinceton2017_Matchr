sealed class matchr_UnoUXStringConcatOperator_Left_Property: Uno.UX.Property<string>
{
    readonly Uno.UX.StringConcatOperator _obj;
    public matchr_UnoUXStringConcatOperator_Left_Property(Uno.UX.StringConcatOperator obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get() { return _obj.Left; }
    public override void Set(string v, global::Uno.UX.IPropertyListener origin) { _obj.Left = v; }
    public override bool SupportsOriginSetter { get { return false; } }
}
sealed class matchr_UnoUXStringConcatOperator_Right_Property: Uno.UX.Property<string>
{
    readonly Uno.UX.StringConcatOperator _obj;
    public matchr_UnoUXStringConcatOperator_Right_Property(Uno.UX.StringConcatOperator obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get() { return _obj.Right; }
    public override void Set(string v, global::Uno.UX.IPropertyListener origin) { _obj.Right = v; }
    public override bool SupportsOriginSetter { get { return false; } }
}
sealed class matchr_FuseControlsTextControl_Value_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly Fuse.Controls.TextControl _obj;
    public matchr_FuseControlsTextControl_Value_Property(Fuse.Controls.TextControl obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get() { return _obj.Value; }
    public override void Set(string v, global::Uno.UX.IPropertyListener origin) { _obj.SetValue(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
