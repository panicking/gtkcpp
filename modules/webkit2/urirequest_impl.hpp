// AUTO-GENERATED

#ifndef _GI_WEBKIT2_URIREQUEST_IMPL_HPP_
#define _GI_WEBKIT2_URIREQUEST_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// WebKitURIRequest* webkit_uri_request_new (const gchar* uri);
// ::WebKitURIRequest* webkit_uri_request_new (const char* uri);
WebKit2::URIRequest base::URIRequestBase::new_ (const std::string & uri) noexcept
{
  typedef ::WebKitURIRequest* (*call_wrap_t) (const char* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_uri_request_new;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (uri_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// SoupMessageHeaders* webkit_uri_request_get_http_headers (WebKitURIRequest* request);
// ::SoupMessageHeaders* webkit_uri_request_get_http_headers (::WebKitURIRequest* request);
Soup::MessageHeaders base::URIRequestBase::get_http_headers () noexcept
{
  typedef ::SoupMessageHeaders* (*call_wrap_t) (::WebKitURIRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_uri_request_get_http_headers;
  auto _temp_ret = call_wrap_v ((::WebKitURIRequest*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* webkit_uri_request_get_http_method (WebKitURIRequest* request);
// const char* webkit_uri_request_get_http_method (::WebKitURIRequest* request);
std::string base::URIRequestBase::get_http_method () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitURIRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_uri_request_get_http_method;
  auto _temp_ret = call_wrap_v ((::WebKitURIRequest*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* webkit_uri_request_get_uri (WebKitURIRequest* request);
// const char* webkit_uri_request_get_uri (::WebKitURIRequest* request);
std::string base::URIRequestBase::get_uri () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitURIRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_uri_request_get_uri;
  auto _temp_ret = call_wrap_v ((::WebKitURIRequest*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void webkit_uri_request_set_uri (WebKitURIRequest* request, const gchar* uri);
// void webkit_uri_request_set_uri (::WebKitURIRequest* request, const char* uri);
void base::URIRequestBase::set_uri (const std::string & uri) noexcept
{
  typedef void (*call_wrap_t) (::WebKitURIRequest* request, const char* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_uri_request_set_uri;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitURIRequest*) (gobj_()), (const char*) (uri_to_c));
}


} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/urirequest_extra_def_impl.hpp>)
#include <webkit2/urirequest_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/urirequest_extra_impl.hpp>)
#include <webkit2/urirequest_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {

void URIRequestClassDef::class_init (gpointer class_struct, gpointer )
{
  ::WebKitURIRequestClass *methods = (::WebKitURIRequestClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
