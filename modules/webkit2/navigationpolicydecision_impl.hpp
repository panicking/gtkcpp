// AUTO-GENERATED

#ifndef _GI_WEBKIT2_NAVIGATIONPOLICYDECISION_IMPL_HPP_
#define _GI_WEBKIT2_NAVIGATIONPOLICYDECISION_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// const gchar* webkit_navigation_policy_decision_get_frame_name (WebKitNavigationPolicyDecision* decision);
// const char* webkit_navigation_policy_decision_get_frame_name (::WebKitNavigationPolicyDecision* decision);
std::string base::NavigationPolicyDecisionBase::get_frame_name () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitNavigationPolicyDecision* decision);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_navigation_policy_decision_get_frame_name;
  auto _temp_ret = call_wrap_v ((::WebKitNavigationPolicyDecision*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// guint webkit_navigation_policy_decision_get_modifiers (WebKitNavigationPolicyDecision* decision);
// guint webkit_navigation_policy_decision_get_modifiers (::WebKitNavigationPolicyDecision* decision);
// IGNORE; deprecated

// guint webkit_navigation_policy_decision_get_mouse_button (WebKitNavigationPolicyDecision* decision);
// guint webkit_navigation_policy_decision_get_mouse_button (::WebKitNavigationPolicyDecision* decision);
// IGNORE; deprecated

// WebKitNavigationAction* webkit_navigation_policy_decision_get_navigation_action (WebKitNavigationPolicyDecision* decision);
// ::WebKitNavigationAction* webkit_navigation_policy_decision_get_navigation_action (::WebKitNavigationPolicyDecision* decision);
WebKit2::NavigationAction base::NavigationPolicyDecisionBase::get_navigation_action () noexcept
{
  typedef ::WebKitNavigationAction* (*call_wrap_t) (::WebKitNavigationPolicyDecision* decision);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_navigation_policy_decision_get_navigation_action;
  auto _temp_ret = call_wrap_v ((::WebKitNavigationPolicyDecision*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// WebKitNavigationType webkit_navigation_policy_decision_get_navigation_type (WebKitNavigationPolicyDecision* decision);
// ::WebKitNavigationType webkit_navigation_policy_decision_get_navigation_type (::WebKitNavigationPolicyDecision* decision);
// IGNORE; deprecated

// WebKitURIRequest* webkit_navigation_policy_decision_get_request (WebKitNavigationPolicyDecision* decision);
// ::WebKitURIRequest* webkit_navigation_policy_decision_get_request (::WebKitNavigationPolicyDecision* decision);
// IGNORE; deprecated


} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/navigationpolicydecision_extra_def_impl.hpp>)
#include <webkit2/navigationpolicydecision_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/navigationpolicydecision_extra_impl.hpp>)
#include <webkit2/navigationpolicydecision_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {

void NavigationPolicyDecisionClassDef::class_init (gpointer class_struct, gpointer )
{
  ::WebKitNavigationPolicyDecisionClass *methods = (::WebKitNavigationPolicyDecisionClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
