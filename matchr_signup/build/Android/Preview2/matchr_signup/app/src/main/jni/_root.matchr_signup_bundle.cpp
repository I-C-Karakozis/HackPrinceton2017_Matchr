// This file was generated based on /Users/hdc/matchr/matchrapp/HackPrinceton2017_Matchr/matchr_signup/matchr_signup.unoproj.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.matchr_signup_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[11];

namespace g{

// public static generated class matchr_signup_bundle :0
// {
// static matchr_signup_bundle() :0
static void matchr_signup_bundle__cctor__fn(uType* __type)
{
    matchr_signup_bundle::arrowleftwhite90df9167_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"matchr_signup"*/]))->GetFile(::STRINGS[1/*"arrow-left-...*/]);
    matchr_signup_bundle::arrowrightwhite4cf3d3dc_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"matchr_signup"*/]))->GetFile(::STRINGS[2/*"arrow-right...*/]);
    matchr_signup_bundle::avatar5efcc3bb_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"matchr_signup"*/]))->GetFile(::STRINGS[3/*"avatar-c463...*/]);
    matchr_signup_bundle::back2d5e0901_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"matchr_signup"*/]))->GetFile(::STRINGS[4/*"back-2671ff...*/]);
    matchr_signup_bundle::HomePage2485c09e_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"matchr_signup"*/]))->GetFile(::STRINGS[5/*"homepage-a6...*/]);
    matchr_signup_bundle::matchesPageacffdc72_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"matchr_signup"*/]))->GetFile(::STRINGS[6/*"matchespage...*/]);
    matchr_signup_bundle::MatchesPageChat3ae223c8_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"matchr_signup"*/]))->GetFile(::STRINGS[7/*"matchespage...*/]);
    matchr_signup_bundle::SignInPage53c4bc09_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"matchr_signup"*/]))->GetFile(::STRINGS[8/*"signinpage-...*/]);
    matchr_signup_bundle::SignUpPage2593e30f_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"matchr_signup"*/]))->GetFile(::STRINGS[9/*"signuppage-...*/]);
    matchr_signup_bundle::SubPageChatf3428d6b_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"matchr_signup"*/]))->GetFile(::STRINGS[10/*"subpagechat...*/]);
}

static void matchr_signup_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("matchr_signup");
    ::STRINGS[1] = uString::Const("arrow-left-white-65d3042d.png");
    ::STRINGS[2] = uString::Const("arrow-right-white-c738ec6e.png");
    ::STRINGS[3] = uString::Const("avatar-c463422d.png");
    ::STRINGS[4] = uString::Const("back-2671ff3f.png");
    ::STRINGS[5] = uString::Const("homepage-a66ffa00.js");
    ::STRINGS[6] = uString::Const("matchespage-c8ffbd7c.js");
    ::STRINGS[7] = uString::Const("matchespagechat-8ed2ff16.js");
    ::STRINGS[8] = uString::Const("signinpage-950104c3.js");
    ::STRINGS[9] = uString::Const("signuppage-e088cbfd.js");
    ::STRINGS[10] = uString::Const("subpagechat-dcd647a1.js");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::matchr_signup_bundle::arrowleftwhite90df9167_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::matchr_signup_bundle::arrowrightwhite4cf3d3dc_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::matchr_signup_bundle::avatar5efcc3bb_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::matchr_signup_bundle::back2d5e0901_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::matchr_signup_bundle::HomePage2485c09e_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::matchr_signup_bundle::matchesPageacffdc72_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::matchr_signup_bundle::MatchesPageChat3ae223c8_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::matchr_signup_bundle::SignInPage53c4bc09_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::matchr_signup_bundle::SignUpPage2593e30f_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::matchr_signup_bundle::SubPageChatf3428d6b_, uFieldFlagsStatic);
    type->Reflection.SetFields(10,
        new uField("arrowleftwhite90df9167", 0),
        new uField("arrowrightwhite4cf3d3dc", 1),
        new uField("avatar5efcc3bb", 2),
        new uField("back2d5e0901", 3),
        new uField("HomePage2485c09e", 4),
        new uField("matchesPageacffdc72", 5),
        new uField("MatchesPageChat3ae223c8", 6),
        new uField("SignInPage53c4bc09", 7),
        new uField("SignUpPage2593e30f", 8),
        new uField("SubPageChatf3428d6b", 9));
}

uClassType* matchr_signup_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("matchr_signup_bundle", options);
    type->fp_build_ = matchr_signup_bundle_build;
    type->fp_cctor_ = matchr_signup_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> matchr_signup_bundle::arrowleftwhite90df9167_;
uSStrong< ::g::Uno::IO::BundleFile*> matchr_signup_bundle::arrowrightwhite4cf3d3dc_;
uSStrong< ::g::Uno::IO::BundleFile*> matchr_signup_bundle::avatar5efcc3bb_;
uSStrong< ::g::Uno::IO::BundleFile*> matchr_signup_bundle::back2d5e0901_;
uSStrong< ::g::Uno::IO::BundleFile*> matchr_signup_bundle::HomePage2485c09e_;
uSStrong< ::g::Uno::IO::BundleFile*> matchr_signup_bundle::matchesPageacffdc72_;
uSStrong< ::g::Uno::IO::BundleFile*> matchr_signup_bundle::MatchesPageChat3ae223c8_;
uSStrong< ::g::Uno::IO::BundleFile*> matchr_signup_bundle::SignInPage53c4bc09_;
uSStrong< ::g::Uno::IO::BundleFile*> matchr_signup_bundle::SignUpPage2593e30f_;
uSStrong< ::g::Uno::IO::BundleFile*> matchr_signup_bundle::SubPageChatf3428d6b_;
// }

} // ::g
