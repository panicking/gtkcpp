// AUTO-GENERATED

#ifndef _GI_WEBKIT2_WEBVIEWSESSIONSTATE_HPP_
#define _GI_WEBKIT2_WEBVIEWSESSIONSTATE_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {


class WebViewSessionState;

namespace base {


#define GI_WEBKIT2_WEBVIEWSESSIONSTATE_BASE base::WebViewSessionStateBase
class WebViewSessionStateBase : public gi::detail::GBoxedWrapper<WebViewSessionStateBase, ::WebKitWebViewSessionState>
{
typedef gi::detail::GBoxedWrapper<WebViewSessionStateBase, ::WebKitWebViewSessionState> super_type;
public:

WebViewSessionStateBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return webkit_web_view_session_state_get_type(); } 

// WebKitWebViewSessionState* webkit_web_view_session_state_new (GBytes* data);
// ::WebKitWebViewSessionState* webkit_web_view_session_state_new (::GBytes* data);
static GI_INLINE_DECL WebKit2::WebViewSessionState new_ (GLib::Bytes data) noexcept;

// WebKitWebViewSessionState* webkit_web_view_session_state_ref (WebKitWebViewSessionState* state);
// ::WebKitWebViewSessionState* webkit_web_view_session_state_ref (::WebKitWebViewSessionState* state);
// IGNORE; marked ignore

// GBytes* webkit_web_view_session_state_serialize (WebKitWebViewSessionState* state);
// ::GBytes* webkit_web_view_session_state_serialize (::WebKitWebViewSessionState* state);
GI_INLINE_DECL GLib::Bytes serialize () noexcept;

// void webkit_web_view_session_state_unref (WebKitWebViewSessionState* state);
// void webkit_web_view_session_state_unref (::WebKitWebViewSessionState* state);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/webviewsessionstate_extra_def.hpp>)
#include <webkit2/webviewsessionstate_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/webviewsessionstate_extra.hpp>)
#include <webkit2/webviewsessionstate_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class WebViewSessionState : public GI_WEBKIT2_WEBVIEWSESSIONSTATE_BASE
{ typedef GI_WEBKIT2_WEBVIEWSESSIONSTATE_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitWebViewSessionState>
{ typedef WebKit2::WebViewSessionState type; }; 

} // namespace repository

} // namespace gi

#endif
