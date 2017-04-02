// This file was generated based on /Users/hdc/matchr/matchrapp/matchr_signup/matchr_signup.unoproj.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.matchr_signup_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[4];

namespace g{

// public static generated class matchr_signup_bundle :0
// {
// static matchr_signup_bundle() :0
static void matchr_signup_bundle__cctor__fn(uType* __type)
{
    matchr_signup_bundle::HomePage4794569a_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"matchr_signup"*/]))->GetFile(::STRINGS[1/*"homepage-a6...*/]);
    matchr_signup_bundle::SignInPageb93fffe7_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"matchr_signup"*/]))->GetFile(::STRINGS[2/*"signinpage-...*/]);
    matchr_signup_bundle::SignUpPage14c48ae5_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"matchr_signup"*/]))->GetFile(::STRINGS[3/*"signuppage-...*/]);
}

static void matchr_signup_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("matchr_signup");
    ::STRINGS[1] = uString::Const("homepage-a66ffa00.js");
    ::STRINGS[2] = uString::Const("signinpage-950104c3.js");
    ::STRINGS[3] = uString::Const("signuppage-e088cbfd.js");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::matchr_signup_bundle::HomePage4794569a_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::matchr_signup_bundle::SignInPageb93fffe7_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::matchr_signup_bundle::SignUpPage14c48ae5_, uFieldFlagsStatic);
    type->Reflection.SetFields(3,
        new uField("HomePage4794569a", 0),
        new uField("SignInPageb93fffe7", 1),
        new uField("SignUpPage14c48ae5", 2));
}

uClassType* matchr_signup_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("matchr_signup_bundle", options);
    type->fp_build_ = matchr_signup_bundle_build;
    type->fp_cctor_ = matchr_signup_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> matchr_signup_bundle::HomePage4794569a_;
uSStrong< ::g::Uno::IO::BundleFile*> matchr_signup_bundle::SignInPageb93fffe7_;
uSStrong< ::g::Uno::IO::BundleFile*> matchr_signup_bundle::SignUpPage14c48ae5_;
// }

} // ::g
