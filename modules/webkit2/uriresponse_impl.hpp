// AUTO-GENERATED

#ifndef _GI_WEBKIT2_URIRESPONSE_IMPL_HPP_
#define _GI_WEBKIT2_URIRESPONSE_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// guint64 webkit_uri_response_get_content_length (WebKitURIResponse* response);
// guint64 webkit_uri_response_get_content_length (::WebKitURIResponse* response);
guint64 base::URIResponseBase::get_content_length () noexcept
{
  typedef guint64 (*call_wrap_t) (::WebKitURIResponse* response);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_uri_response_get_content_length;
  auto _temp_ret = call_wrap_v ((::WebKitURIResponse*) (gobj_()));
  return _temp_ret;
}

// SoupMessageHeaders* webkit_uri_response_get_http_headers (WebKitURIResponse* response);
// ::SoupMessageHeaders* webkit_uri_response_get_http_headers (::WebKitURIResponse* response);
Soup::MessageHeaders base::URIResponseBase::get_http_headers () noexcept
{
  typedef ::SoupMessageHeaders* (*call_wrap_t) (::WebKitURIResponse* response);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_uri_response_get_http_headers;
  auto _temp_ret = call_wrap_v ((::WebKitURIResponse*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* webkit_uri_response_get_mime_type (WebKitURIResponse* response);
// const char* webkit_uri_response_get_mime_type (::WebKitURIResponse* response);
std::string base::URIResponseBase::get_mime_type () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitURIResponse* response);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_uri_response_get_mime_type;
  auto _temp_ret = call_wrap_v ((::WebKitURIResponse*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// guint webkit_uri_response_get_status_code (WebKitURIResponse* response);
// guint webkit_uri_response_get_status_code (::WebKitURIResponse* response);
guint base::URIResponseBase::get_status_code () noexcept
{
  typedef guint (*call_wrap_t) (::WebKitURIResponse* response);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_uri_response_get_status_code;
  auto _temp_ret = call_wrap_v ((::WebKitURIResponse*) (gobj_()));
  return _temp_ret;
}

// const gchar* webkit_uri_response_get_suggested_filename (WebKitURIResponse* response);
// const char* webkit_uri_response_get_suggested_filename (::WebKitURIResponse* response);
std::string base::URIResponseBase::get_suggested_filename () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitURIResponse* response);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_uri_response_get_suggested_filename;
  auto _temp_ret = call_wrap_v ((::WebKitURIResponse*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* webkit_uri_response_get_uri (WebKitURIResponse* response);
// const char* webkit_uri_response_get_uri (::WebKitURIResponse* response);
std::string base::URIResponseBase::get_uri () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitURIResponse* response);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_uri_response_get_uri;
  auto _temp_ret = call_wrap_v ((::WebKitURIResponse*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/uriresponse_extra_def_impl.hpp>)
#include <webkit2/uriresponse_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/uriresponse_extra_impl.hpp>)
#include <webkit2/uriresponse_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {

void URIResponseClassDef::class_init (gpointer class_struct, gpointer )
{
  ::WebKitURIResponseClass *methods = (::WebKitURIResponseClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
