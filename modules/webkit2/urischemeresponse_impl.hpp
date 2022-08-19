// AUTO-GENERATED

#ifndef _GI_WEBKIT2_URISCHEMERESPONSE_IMPL_HPP_
#define _GI_WEBKIT2_URISCHEMERESPONSE_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// WebKitURISchemeResponse* webkit_uri_scheme_response_new (GInputStream* input_stream, gint64 stream_length);
// ::WebKitURISchemeResponse* webkit_uri_scheme_response_new (::GInputStream* input_stream, gint64 stream_length);
WebKit2::URISchemeResponse base::URISchemeResponseBase::new_ (Gio::InputStream input_stream, gint64 stream_length) noexcept
{
  typedef ::WebKitURISchemeResponse* (*call_wrap_t) (::GInputStream* input_stream, gint64 stream_length);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_uri_scheme_response_new;
  auto stream_length_to_c = stream_length;
  auto input_stream_to_c = gi::unwrap (input_stream, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GInputStream*) (input_stream_to_c), (gint64) (stream_length_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void webkit_uri_scheme_response_set_content_type (WebKitURISchemeResponse* response, const gchar* content_type);
// void webkit_uri_scheme_response_set_content_type (::WebKitURISchemeResponse* response, const char* content_type);
void base::URISchemeResponseBase::set_content_type (const std::string & content_type) noexcept
{
  typedef void (*call_wrap_t) (::WebKitURISchemeResponse* response, const char* content_type);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_uri_scheme_response_set_content_type;
  auto content_type_to_c = gi::unwrap (content_type, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitURISchemeResponse*) (gobj_()), (const char*) (content_type_to_c));
}

// void webkit_uri_scheme_response_set_http_headers (WebKitURISchemeResponse* response, SoupMessageHeaders* headers);
// void webkit_uri_scheme_response_set_http_headers (::WebKitURISchemeResponse* response, ::SoupMessageHeaders* headers);
void base::URISchemeResponseBase::set_http_headers (Soup::MessageHeaders headers) noexcept
{
  typedef void (*call_wrap_t) (::WebKitURISchemeResponse* response, ::SoupMessageHeaders* headers);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_uri_scheme_response_set_http_headers;
  auto headers_to_c = gi::unwrap (headers, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitURISchemeResponse*) (gobj_()), (::SoupMessageHeaders*) (headers_to_c));
}

// void webkit_uri_scheme_response_set_status (WebKitURISchemeResponse* response, guint status_code, const gchar* reason_phrase);
// void webkit_uri_scheme_response_set_status (::WebKitURISchemeResponse* response, guint status_code, const char* reason_phrase);
void base::URISchemeResponseBase::set_status (guint status_code, const std::string & reason_phrase) noexcept
{
  typedef void (*call_wrap_t) (::WebKitURISchemeResponse* response, guint status_code, const char* reason_phrase);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_uri_scheme_response_set_status;
  auto reason_phrase_to_c = gi::unwrap (reason_phrase, gi::transfer_none, gi::direction_in);
  auto status_code_to_c = status_code;
  call_wrap_v ((::WebKitURISchemeResponse*) (gobj_()), (guint) (status_code_to_c), (const char*) (reason_phrase_to_c));
}
void base::URISchemeResponseBase::set_status (guint status_code) noexcept
{
  typedef void (*call_wrap_t) (::WebKitURISchemeResponse* response, guint status_code, const char* reason_phrase);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_uri_scheme_response_set_status;
  auto reason_phrase_to_c = nullptr;
  auto status_code_to_c = status_code;
  call_wrap_v ((::WebKitURISchemeResponse*) (gobj_()), (guint) (status_code_to_c), (const char*) (reason_phrase_to_c));
}


} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/urischemeresponse_extra_def_impl.hpp>)
#include <webkit2/urischemeresponse_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/urischemeresponse_extra_impl.hpp>)
#include <webkit2/urischemeresponse_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {

void URISchemeResponseClassDef::class_init (gpointer class_struct, gpointer )
{
  ::WebKitURISchemeResponseClass *methods = (::WebKitURISchemeResponseClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
