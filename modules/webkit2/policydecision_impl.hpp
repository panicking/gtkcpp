// AUTO-GENERATED

#ifndef _GI_WEBKIT2_POLICYDECISION_IMPL_HPP_
#define _GI_WEBKIT2_POLICYDECISION_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// void webkit_policy_decision_download (WebKitPolicyDecision* decision);
// void webkit_policy_decision_download (::WebKitPolicyDecision* decision);
void base::PolicyDecisionBase::download () noexcept
{
  typedef void (*call_wrap_t) (::WebKitPolicyDecision* decision);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_policy_decision_download;
  call_wrap_v ((::WebKitPolicyDecision*) (gobj_()));
}

// void webkit_policy_decision_ignore (WebKitPolicyDecision* decision);
// void webkit_policy_decision_ignore (::WebKitPolicyDecision* decision);
void base::PolicyDecisionBase::ignore () noexcept
{
  typedef void (*call_wrap_t) (::WebKitPolicyDecision* decision);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_policy_decision_ignore;
  call_wrap_v ((::WebKitPolicyDecision*) (gobj_()));
}

// void webkit_policy_decision_use (WebKitPolicyDecision* decision);
// void webkit_policy_decision_use (::WebKitPolicyDecision* decision);
void base::PolicyDecisionBase::use () noexcept
{
  typedef void (*call_wrap_t) (::WebKitPolicyDecision* decision);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_policy_decision_use;
  call_wrap_v ((::WebKitPolicyDecision*) (gobj_()));
}

// void webkit_policy_decision_use_with_policies (WebKitPolicyDecision* decision, WebKitWebsitePolicies* policies);
// void webkit_policy_decision_use_with_policies (::WebKitPolicyDecision* decision, ::WebKitWebsitePolicies* policies);
void base::PolicyDecisionBase::use_with_policies (WebKit2::WebsitePolicies policies) noexcept
{
  typedef void (*call_wrap_t) (::WebKitPolicyDecision* decision, ::WebKitWebsitePolicies* policies);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_policy_decision_use_with_policies;
  auto policies_to_c = gi::unwrap (policies, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitPolicyDecision*) (gobj_()), (::WebKitWebsitePolicies*) (policies_to_c));
}


} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/policydecision_extra_def_impl.hpp>)
#include <webkit2/policydecision_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/policydecision_extra_impl.hpp>)
#include <webkit2/policydecision_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {

void PolicyDecisionClassDef::class_init (gpointer class_struct, gpointer )
{
  ::WebKitPolicyDecisionClass *methods = (::WebKitPolicyDecisionClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
