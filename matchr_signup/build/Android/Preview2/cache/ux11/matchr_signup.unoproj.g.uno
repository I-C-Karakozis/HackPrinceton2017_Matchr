sealed class matchr_signup_FuseControlsTextControl_Value_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly Fuse.Controls.TextControl _obj;
    public matchr_signup_FuseControlsTextControl_Value_Property(Fuse.Controls.TextControl obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get() { return _obj.Value; }
    public override void Set(string v, global::Uno.UX.IPropertyListener origin) { _obj.SetValue(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class matchr_signup_FuseReactiveEach_Items_Property: Uno.UX.Property<object>
{
    [Uno.WeakReference] readonly Fuse.Reactive.Each _obj;
    public matchr_signup_FuseReactiveEach_Items_Property(Fuse.Reactive.Each obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override object Get() { return _obj.Items; }
    public override void Set(object v, global::Uno.UX.IPropertyListener origin) { _obj.Items = v; }
    public override bool SupportsOriginSetter { get { return false; } }
}
sealed class matchr_signup_FuseControlsTextInputControl_Value_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly Fuse.Controls.TextInputControl _obj;
    public matchr_signup_FuseControlsTextInputControl_Value_Property(Fuse.Controls.TextInputControl obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get() { return _obj.Value; }
    public override void Set(string v, global::Uno.UX.IPropertyListener origin) { _obj.SetValue(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class matchr_signup_FuseVisual_IsEnabled_Property: Uno.UX.Property<bool>
{
    [Uno.WeakReference] readonly Fuse.Visual _obj;
    public matchr_signup_FuseVisual_IsEnabled_Property(Fuse.Visual obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override bool Get() { return _obj.IsEnabled; }
    public override void Set(bool v, global::Uno.UX.IPropertyListener origin) { _obj.IsEnabled = v; }
    public override bool SupportsOriginSetter { get { return false; } }
}
sealed class matchr_signup_FuseElementsElement_DockPanelDock_Property: Uno.UX.Property<Fuse.Layouts.Dock>
{
    [Uno.WeakReference] readonly Fuse.Elements.Element _obj;
    public matchr_signup_FuseElementsElement_DockPanelDock_Property(Fuse.Elements.Element obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Fuse.Layouts.Dock Get() { return global::Fuse.Controls.DockPanel.GetDock(_obj); }
    public override void Set(Fuse.Layouts.Dock v, global::Uno.UX.IPropertyListener origin) { global::Fuse.Controls.DockPanel.SetDock(_obj, v); }
    public override bool SupportsOriginSetter { get { return false; } }
}
sealed class matchr_signup_Tab_Text_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly Tab _obj;
    public matchr_signup_Tab_Text_Property(Tab obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get() { return _obj.Text; }
    public override void Set(string v, global::Uno.UX.IPropertyListener origin) { _obj.SetText(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class matchr_signup_FuseControlsNavigationControl_Active_Property: Uno.UX.Property<Fuse.Visual>
{
    [Uno.WeakReference] readonly Fuse.Controls.NavigationControl _obj;
    public matchr_signup_FuseControlsNavigationControl_Active_Property(Fuse.Controls.NavigationControl obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Fuse.Visual Get() { return _obj.Active; }
    public override void Set(Fuse.Visual v, global::Uno.UX.IPropertyListener origin) { _obj.Active = v; }
    public override bool SupportsOriginSetter { get { return false; } }
}
sealed class matchr_signup_FuseElementsElement_ElementLayoutMaster_Property: Uno.UX.Property<Fuse.Elements.Element>
{
    [Uno.WeakReference] readonly Fuse.Elements.Element _obj;
    public matchr_signup_FuseElementsElement_ElementLayoutMaster_Property(Fuse.Elements.Element obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Fuse.Elements.Element Get() { return global::Fuse.Controls.LayoutControl.GetLayoutMaster(_obj); }
    public override void Set(Fuse.Elements.Element v, global::Uno.UX.IPropertyListener origin) { global::Fuse.Controls.LayoutControl.SetLayoutMaster(_obj, v); }
    public override bool SupportsOriginSetter { get { return false; } }
}
sealed class matchr_signup_FuseElementsElement_Opacity_Property: Uno.UX.Property<float>
{
    [Uno.WeakReference] readonly Fuse.Elements.Element _obj;
    public matchr_signup_FuseElementsElement_Opacity_Property(Fuse.Elements.Element obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float Get() { return _obj.Opacity; }
    public override void Set(float v, global::Uno.UX.IPropertyListener origin) { _obj.SetOpacity(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class matchr_signup_FuseControlsMultiLayoutPanel_LayoutElement_Property: Uno.UX.Property<Fuse.Elements.Element>
{
    [Uno.WeakReference] readonly Fuse.Controls.MultiLayoutPanel _obj;
    public matchr_signup_FuseControlsMultiLayoutPanel_LayoutElement_Property(Fuse.Controls.MultiLayoutPanel obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Fuse.Elements.Element Get() { return _obj.LayoutElement; }
    public override void Set(Fuse.Elements.Element v, global::Uno.UX.IPropertyListener origin) { _obj.LayoutElement = v; }
    public override bool SupportsOriginSetter { get { return false; } }
}
sealed class matchr_signup_FuseiOSStatusBarConfig_Style_Property: Uno.UX.Property<Fuse.Platform.StatusBarStyle>
{
    [Uno.WeakReference] readonly Fuse.iOS.StatusBarConfig _obj;
    public matchr_signup_FuseiOSStatusBarConfig_Style_Property(Fuse.iOS.StatusBarConfig obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Fuse.Platform.StatusBarStyle Get() { return _obj.Style; }
    public override void Set(Fuse.Platform.StatusBarStyle v, global::Uno.UX.IPropertyListener origin) { _obj.Style = v; }
    public override bool SupportsOriginSetter { get { return false; } }
}
