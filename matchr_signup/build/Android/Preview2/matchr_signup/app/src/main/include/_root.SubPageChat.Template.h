// This file was generated based on /Users/hdc/matchr/matchrapp/HackPrinceton2017_Matchr/matchr_signup/build/Android/Preview2/cache/ux11/SubPageChat.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct SubPageChat;}
namespace g{struct SubPageChat__Template;}

namespace g{

// public partial sealed class SubPageChat.Template :6
// {
::g::Uno::UX::Template_type* SubPageChat__Template_typeof();
void SubPageChat__Template__ctor_1_fn(SubPageChat__Template* __this, ::g::SubPageChat* parent, ::g::SubPageChat* parentInstance);
void SubPageChat__Template__New1_fn(SubPageChat__Template* __this, uObject** __retval);
void SubPageChat__Template__New2_fn(::g::SubPageChat* parent, ::g::SubPageChat* parentInstance, SubPageChat__Template** __retval);

struct SubPageChat__Template : ::g::Uno::UX::Template
{
    uWeak< ::g::SubPageChat*> __parent1;
    uWeak< ::g::SubPageChat*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return SubPageChat__Template_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return SubPageChat__Template_typeof()->Init(), __selector1_; }
    uStrong< ::g::Uno::UX::Property1*> temp_DockPanel_Dock_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;

    void ctor_1(::g::SubPageChat* parent, ::g::SubPageChat* parentInstance);
    static SubPageChat__Template* New2(::g::SubPageChat* parent, ::g::SubPageChat* parentInstance);
};
// }

} // ::g
