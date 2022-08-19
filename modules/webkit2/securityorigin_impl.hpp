// AUTO-GENERATED

#ifndef _GI_WEBKIT2_SECURITYORIGIN_IMPL_HPP_
#define _GI_WEBKIT2_SECURITYORIGIN_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// WebKitSecurityOrigin* webkit_security_origin_new (const gchar* protocol, const gchar* host, guint16 port);
// ::WebKitSecurityOrigin* webkit_security_origin_new (const char* protocol, const char* host, guint16 port);
WebKit2::SecurityOrigin base::SecurityOriginBase::new_ (const std::string & protocol, const std::string & host, guint16 port) noexcept
{
  typedef ::WebKitSecurityOrigin* (*call_wrap_t) (const char* protocol, const char* host, guint16 port);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_security_origin_new;
  auto port_to_c = port;
  auto host_to_c = gi::unwrap (host, gi::transfer_none, gi::direction_in);
  auto protocol_to_c = gi::unwrap (protocol, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (protocol_to_c), (const char*) (host_to_c), (guint16) (port_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// WebKitSecurityOrigin* webkit_security_origin_new_for_uri (const gchar* uri);
// ::WebKitSecurityOrigin* webkit_security_origin_new_for_uri (const char* uri);
WebKit2::SecurityOrigin base::SecurityOriginBase::new_for_uri (const std::string & uri) noexcept
{
  typedef ::WebKitSecurityOrigin* (*call_wrap_t) (const char* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_security_origin_new_for_uri;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (uri_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const gchar* webkit_security_origin_get_host (WebKitSecurityOrigin* origin);
// const char* webkit_security_origin_get_host (::WebKitSecurityOrigin* origin);
std::string base::SecurityOriginBase::get_host () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitSecurityOrigin* origin);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_security_origin_get_host;
  auto _temp_ret = call_wrap_v ((::WebKitSecurityOrigin*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// guint16 webkit_security_origin_get_port (WebKitSecurityOrigin* origin);
// guint16 webkit_security_origin_get_port (::WebKitSecurityOrigin* origin);
guint16 base::SecurityOriginBase::get_port () noexcept
{
  typedef guint16 (*call_wrap_t) (::WebKitSecurityOrigin* origin);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_security_origin_get_port;
  auto _temp_ret = call_wrap_v ((::WebKitSecurityOrigin*) (gobj_()));
  return _temp_ret;
}

// const gchar* webkit_security_origin_get_protocol (WebKitSecurityOrigin* origin);
// const char* webkit_security_origin_get_protocol (::WebKitSecurityOrigin* origin);
std::string base::SecurityOriginBase::get_protocol () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitSecurityOrigin* origin);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_security_origin_get_protocol;
  auto _temp_ret = call_wrap_v ((::WebKitSecurityOrigin*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean webkit_security_origin_is_opaque (WebKitSecurityOrigin* origin);
// gboolean webkit_security_origin_is_opaque (::WebKitSecurityOrigin* origin);
// IGNORE; deprecated

// WebKitSecurityOrigin* webkit_security_origin_ref (WebKitSecurityOrigin* origin);
// ::WebKitSecurityOrigin* webkit_security_origin_ref (::WebKitSecurityOrigin* origin);
// IGNORE; marked ignore

// gchar* webkit_security_origin_to_string (WebKitSecurityOrigin* origin);
// char* webkit_security_origin_to_string (::WebKitSecurityOrigin* origin);
std::string base::SecurityOriginBase::to_string () noexcept
{
  typedef char* (*call_wrap_t) (::WebKitSecurityOrigin* origin);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_security_origin_to_string;
  auto _temp_ret = call_wrap_v ((::WebKitSecurityOrigin*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void webkit_security_origin_unref (WebKitSecurityOrigin* origin);
// void webkit_security_origin_unref (::WebKitSecurityOrigin* origin);
// IGNORE; marked ignore


} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/securityorigin_extra_def_impl.hpp>)
#include <webkit2/securityorigin_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/securityorigin_extra_impl.hpp>)
#include <webkit2/securityorigin_extra_impl.hpp>
#endif
#endif

#endif
