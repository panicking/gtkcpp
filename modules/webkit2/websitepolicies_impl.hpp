// AUTO-GENERATED

#ifndef _GI_WEBKIT2_WEBSITEPOLICIES_IMPL_HPP_
#define _GI_WEBKIT2_WEBSITEPOLICIES_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// WebKitWebsitePolicies* webkit_website_policies_new ();
// ::WebKitWebsitePolicies* webkit_website_policies_new ();
WebKit2::WebsitePolicies base::WebsitePoliciesBase::new_ () noexcept
{
  typedef ::WebKitWebsitePolicies* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_website_policies_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// WebKitWebsitePolicies* webkit_website_policies_new_with_policies (const gchar* first_policy_name);
// ::WebKitWebsitePolicies* webkit_website_policies_new_with_policies (const char* first_policy_name);
// IGNORE; not introspectable, varargs not supported

// WebKitAutoplayPolicy webkit_website_policies_get_autoplay_policy (WebKitWebsitePolicies* policies);
// ::WebKitAutoplayPolicy webkit_website_policies_get_autoplay_policy (::WebKitWebsitePolicies* policies);
WebKit2::AutoplayPolicy base::WebsitePoliciesBase::get_autoplay_policy () noexcept
{
  typedef ::WebKitAutoplayPolicy (*call_wrap_t) (::WebKitWebsitePolicies* policies);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_website_policies_get_autoplay_policy;
  auto _temp_ret = call_wrap_v ((::WebKitWebsitePolicies*) (gobj_()));
  return gi::wrap (_temp_ret);
}


} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/websitepolicies_extra_def_impl.hpp>)
#include <webkit2/websitepolicies_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/websitepolicies_extra_impl.hpp>)
#include <webkit2/websitepolicies_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {

void WebsitePoliciesClassDef::class_init (gpointer class_struct, gpointer )
{
  ::WebKitWebsitePoliciesClass *methods = (::WebKitWebsitePoliciesClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
