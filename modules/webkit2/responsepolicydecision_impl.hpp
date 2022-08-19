// AUTO-GENERATED

#ifndef _GI_WEBKIT2_RESPONSEPOLICYDECISION_IMPL_HPP_
#define _GI_WEBKIT2_RESPONSEPOLICYDECISION_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// WebKitURIRequest* webkit_response_policy_decision_get_request (WebKitResponsePolicyDecision* decision);
// ::WebKitURIRequest* webkit_response_policy_decision_get_request (::WebKitResponsePolicyDecision* decision);
WebKit2::URIRequest base::ResponsePolicyDecisionBase::get_request () noexcept
{
  typedef ::WebKitURIRequest* (*call_wrap_t) (::WebKitResponsePolicyDecision* decision);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_response_policy_decision_get_request;
  auto _temp_ret = call_wrap_v ((::WebKitResponsePolicyDecision*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// WebKitURIResponse* webkit_response_policy_decision_get_response (WebKitResponsePolicyDecision* decision);
// ::WebKitURIResponse* webkit_response_policy_decision_get_response (::WebKitResponsePolicyDecision* decision);
WebKit2::URIResponse base::ResponsePolicyDecisionBase::get_response () noexcept
{
  typedef ::WebKitURIResponse* (*call_wrap_t) (::WebKitResponsePolicyDecision* decision);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_response_policy_decision_get_response;
  auto _temp_ret = call_wrap_v ((::WebKitResponsePolicyDecision*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean webkit_response_policy_decision_is_mime_type_supported (WebKitResponsePolicyDecision* decision);
// gboolean webkit_response_policy_decision_is_mime_type_supported (::WebKitResponsePolicyDecision* decision);
bool base::ResponsePolicyDecisionBase::is_mime_type_supported () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitResponsePolicyDecision* decision);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_response_policy_decision_is_mime_type_supported;
  auto _temp_ret = call_wrap_v ((::WebKitResponsePolicyDecision*) (gobj_()));
  return _temp_ret;
}


} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/responsepolicydecision_extra_def_impl.hpp>)
#include <webkit2/responsepolicydecision_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/responsepolicydecision_extra_impl.hpp>)
#include <webkit2/responsepolicydecision_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {

void ResponsePolicyDecisionClassDef::class_init (gpointer class_struct, gpointer )
{
  ::WebKitResponsePolicyDecisionClass *methods = (::WebKitResponsePolicyDecisionClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
