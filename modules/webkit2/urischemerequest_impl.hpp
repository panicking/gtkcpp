// AUTO-GENERATED

#ifndef _GI_WEBKIT2_URISCHEMEREQUEST_IMPL_HPP_
#define _GI_WEBKIT2_URISCHEMEREQUEST_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// void webkit_uri_scheme_request_finish (WebKitURISchemeRequest* request, GInputStream* stream, gint64 stream_length, const gchar* content_type);
// void webkit_uri_scheme_request_finish (::WebKitURISchemeRequest* request, ::GInputStream* stream, gint64 stream_length, const char* content_type);
void base::URISchemeRequestBase::finish (Gio::InputStream stream, gint64 stream_length, const std::string & content_type) noexcept
{
  typedef void (*call_wrap_t) (::WebKitURISchemeRequest* request, ::GInputStream* stream, gint64 stream_length, const char* content_type);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_uri_scheme_request_finish;
  auto content_type_to_c = gi::unwrap (content_type, gi::transfer_none, gi::direction_in);
  auto stream_length_to_c = stream_length;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitURISchemeRequest*) (gobj_()), (::GInputStream*) (stream_to_c), (gint64) (stream_length_to_c), (const char*) (content_type_to_c));
}
void base::URISchemeRequestBase::finish (Gio::InputStream stream, gint64 stream_length) noexcept
{
  typedef void (*call_wrap_t) (::WebKitURISchemeRequest* request, ::GInputStream* stream, gint64 stream_length, const char* content_type);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_uri_scheme_request_finish;
  auto content_type_to_c = nullptr;
  auto stream_length_to_c = stream_length;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitURISchemeRequest*) (gobj_()), (::GInputStream*) (stream_to_c), (gint64) (stream_length_to_c), (const char*) (content_type_to_c));
}

// void webkit_uri_scheme_request_finish_error (WebKitURISchemeRequest* request, GError* error);
// void webkit_uri_scheme_request_finish_error (::WebKitURISchemeRequest* request, ::GError* error);
void base::URISchemeRequestBase::finish_error (GLib::Error error) noexcept
{
  typedef void (*call_wrap_t) (::WebKitURISchemeRequest* request, ::GError* error);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_uri_scheme_request_finish_error;
  auto error_to_c = gi::unwrap (error, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitURISchemeRequest*) (gobj_()), (::GError*) (error_to_c));
}

// void webkit_uri_scheme_request_finish_with_response (WebKitURISchemeRequest* request, WebKitURISchemeResponse* response);
// void webkit_uri_scheme_request_finish_with_response (::WebKitURISchemeRequest* request, ::WebKitURISchemeResponse* response);
void base::URISchemeRequestBase::finish_with_response (WebKit2::URISchemeResponse response) noexcept
{
  typedef void (*call_wrap_t) (::WebKitURISchemeRequest* request, ::WebKitURISchemeResponse* response);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_uri_scheme_request_finish_with_response;
  auto response_to_c = gi::unwrap (response, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitURISchemeRequest*) (gobj_()), (::WebKitURISchemeResponse*) (response_to_c));
}

// SoupMessageHeaders* webkit_uri_scheme_request_get_http_headers (WebKitURISchemeRequest* request);
// ::SoupMessageHeaders* webkit_uri_scheme_request_get_http_headers (::WebKitURISchemeRequest* request);
Soup::MessageHeaders base::URISchemeRequestBase::get_http_headers () noexcept
{
  typedef ::SoupMessageHeaders* (*call_wrap_t) (::WebKitURISchemeRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_uri_scheme_request_get_http_headers;
  auto _temp_ret = call_wrap_v ((::WebKitURISchemeRequest*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const gchar* webkit_uri_scheme_request_get_http_method (WebKitURISchemeRequest* request);
// const char* webkit_uri_scheme_request_get_http_method (::WebKitURISchemeRequest* request);
std::string base::URISchemeRequestBase::get_http_method () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitURISchemeRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_uri_scheme_request_get_http_method;
  auto _temp_ret = call_wrap_v ((::WebKitURISchemeRequest*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* webkit_uri_scheme_request_get_path (WebKitURISchemeRequest* request);
// const char* webkit_uri_scheme_request_get_path (::WebKitURISchemeRequest* request);
std::string base::URISchemeRequestBase::get_path () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitURISchemeRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_uri_scheme_request_get_path;
  auto _temp_ret = call_wrap_v ((::WebKitURISchemeRequest*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* webkit_uri_scheme_request_get_scheme (WebKitURISchemeRequest* request);
// const char* webkit_uri_scheme_request_get_scheme (::WebKitURISchemeRequest* request);
std::string base::URISchemeRequestBase::get_scheme () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitURISchemeRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_uri_scheme_request_get_scheme;
  auto _temp_ret = call_wrap_v ((::WebKitURISchemeRequest*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* webkit_uri_scheme_request_get_uri (WebKitURISchemeRequest* request);
// const char* webkit_uri_scheme_request_get_uri (::WebKitURISchemeRequest* request);
std::string base::URISchemeRequestBase::get_uri () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitURISchemeRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_uri_scheme_request_get_uri;
  auto _temp_ret = call_wrap_v ((::WebKitURISchemeRequest*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// WebKitWebView* webkit_uri_scheme_request_get_web_view (WebKitURISchemeRequest* request);
// ::WebKitWebView* webkit_uri_scheme_request_get_web_view (::WebKitURISchemeRequest* request);
WebKit2::WebView base::URISchemeRequestBase::get_web_view () noexcept
{
  typedef ::WebKitWebView* (*call_wrap_t) (::WebKitURISchemeRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_uri_scheme_request_get_web_view;
  auto _temp_ret = call_wrap_v ((::WebKitURISchemeRequest*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/urischemerequest_extra_def_impl.hpp>)
#include <webkit2/urischemerequest_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/urischemerequest_extra_impl.hpp>)
#include <webkit2/urischemerequest_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {

void URISchemeRequestClassDef::class_init (gpointer class_struct, gpointer )
{
  ::WebKitURISchemeRequestClass *methods = (::WebKitURISchemeRequestClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
