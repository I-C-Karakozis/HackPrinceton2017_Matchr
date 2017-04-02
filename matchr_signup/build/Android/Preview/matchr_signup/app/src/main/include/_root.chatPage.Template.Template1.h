// This file was generated based on /Users/hdc/Downloads/matchr_signup/build/Android/Preview/cache/ux11/chatPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Controls{struct Page;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct chatPage__Template;}
namespace g{struct chatPage__Template__Template1;}

namespace g{

// public partial sealed class chatPage.Template.Template1 :15
// {
::g::Uno::UX::Template_type* chatPage__Template__Template1_typeof();
void chatPage__Template__Template1__ctor_1_fn(chatPage__Template__Template1* __this, ::g::chatPage__Template* parent, ::g::Fuse::Controls::Page* parentInstance);
void chatPage__Template__Template1__New1_fn(chatPage__Template__Template1* __this, uObject** __retval);
void chatPage__Template__Template1__New2_fn(::g::chatPage__Template* parent, ::g::Fuse::Controls::Page* parentInstance, chatPage__Template__Template1** __retval);

struct chatPage__Template__Template1 : ::g::Uno::UX::Template
{
    uWeak< ::g::chatPage__Template*> __parent1;
    uWeak< ::g::Fuse::Controls::Page*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return chatPage__Template__Template1_typeof()->Init(), __selector0_; }
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;

    void ctor_1(::g::chatPage__Template* parent, ::g::Fuse::Controls::Page* parentInstance);
    static chatPage__Template__Template1* New2(::g::chatPage__Template* parent, ::g::Fuse::Controls::Page* parentInstance);
};
// }

} // ::g
