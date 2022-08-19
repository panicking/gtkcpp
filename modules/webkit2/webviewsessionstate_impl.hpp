// AUTO-GENERATED

#ifndef _GI_WEBKIT2_WEBVIEWSESSIONSTATE_IMPL_HPP_
#define _GI_WEBKIT2_WEBVIEWSESSIONSTATE_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// WebKitWebViewSessionState* webkit_web_view_session_state_new (GBytes* data);
// ::WebKitWebViewSessionState* webkit_web_view_session_state_new (::GBytes* data);
WebKit2::WebViewSessionState base::WebViewSessionStateBase::new_ (GLib::Bytes data) noexcept
{
  typedef ::WebKitWebViewSessionState* (*call_wrap_t) (::GBytes* data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_session_state_new;
  auto data_to_c = gi::unwrap (data, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GBytes*) (data_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// WebKitWebViewSessionState* webkit_web_view_session_state_ref (WebKitWebViewSessionState* state);
// ::WebKitWebViewSessionState* webkit_web_view_session_state_ref (::WebKitWebViewSessionState* state);
// IGNORE; marked ignore

// GBytes* webkit_web_view_session_state_serialize (WebKitWebViewSessionState* state);
// ::GBytes* webkit_web_view_session_state_serialize (::WebKitWebViewSessionState* state);
GLib::Bytes base::WebViewSessionStateBase::serialize () noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::WebKitWebViewSessionState* state);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_session_state_serialize;
  auto _temp_ret = call_wrap_v ((::WebKitWebViewSessionState*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void webkit_web_view_session_state_unref (WebKitWebViewSessionState* state);
// void webkit_web_view_session_state_unref (::WebKitWebViewSessionState* state);
// IGNORE; marked ignore


} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/webviewsessionstate_extra_def_impl.hpp>)
#include <webkit2/webviewsessionstate_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/webviewsessionstate_extra_impl.hpp>)
#include <webkit2/webviewsessionstate_extra_impl.hpp>
#endif
#endif

#endif
