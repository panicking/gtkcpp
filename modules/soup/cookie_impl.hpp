// AUTO-GENERATED

#ifndef _GI_SOUP_COOKIE_IMPL_HPP_
#define _GI_SOUP_COOKIE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Soup {

namespace base {

static char* _field_name_get (const ::SoupCookie* obj) { return (char*) obj->name; }
// char* Cookie::name (const ::SoupCookie* obj);
// char* Cookie::name (const ::SoupCookie* obj);
std::string base::CookieBase::name_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::SoupCookie* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_name_get;
  auto _temp_ret = call_wrap_v ((const ::SoupCookie*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static char* _field_value_get (const ::SoupCookie* obj) { return (char*) obj->value; }
// char* Cookie::value (const ::SoupCookie* obj);
// char* Cookie::value (const ::SoupCookie* obj);
std::string base::CookieBase::value_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::SoupCookie* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_value_get;
  auto _temp_ret = call_wrap_v ((const ::SoupCookie*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static char* _field_domain_get (const ::SoupCookie* obj) { return (char*) obj->domain; }
// char* Cookie::domain (const ::SoupCookie* obj);
// char* Cookie::domain (const ::SoupCookie* obj);
std::string base::CookieBase::domain_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::SoupCookie* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_domain_get;
  auto _temp_ret = call_wrap_v ((const ::SoupCookie*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static char* _field_path_get (const ::SoupCookie* obj) { return (char*) obj->path; }
// char* Cookie::path (const ::SoupCookie* obj);
// char* Cookie::path (const ::SoupCookie* obj);
std::string base::CookieBase::path_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::SoupCookie* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_path_get;
  auto _temp_ret = call_wrap_v ((const ::SoupCookie*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static ::SoupDate* _field_expires_get (const ::SoupCookie* obj) { return (::SoupDate*) obj->expires; }
// ::SoupDate* Cookie::expires (const ::SoupCookie* obj);
// ::SoupDate* Cookie::expires (const ::SoupCookie* obj);
Soup::Date base::CookieBase::expires_ () const noexcept
{
  typedef ::SoupDate* (*call_wrap_t) (const ::SoupCookie* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_expires_get;
  auto _temp_ret = call_wrap_v ((const ::SoupCookie*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gboolean _field_secure_get (const ::SoupCookie* obj) { return (gboolean) obj->secure; }
// gboolean Cookie::secure (const ::SoupCookie* obj);
// gboolean Cookie::secure (const ::SoupCookie* obj);
bool base::CookieBase::secure_ () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::SoupCookie* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_secure_get;
  auto _temp_ret = call_wrap_v ((const ::SoupCookie*) (gobj_()));
  return _temp_ret;
}

static void _field_secure_set (::SoupCookie* obj, gboolean _value) { obj->secure = (decltype(obj->secure)) _value; }
//  Cookie::secure (::SoupCookie* obj, gboolean _value);
// void Cookie::secure (::SoupCookie* obj, gboolean _value);
void base::CookieBase::secure_ (gboolean _value) noexcept
{
  typedef void (*call_wrap_t) (::SoupCookie* obj, gboolean _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_secure_set;
  auto _value_to_c = _value;
  call_wrap_v ((::SoupCookie*) (gobj_()), (gboolean) (_value_to_c));
}

static gboolean _field_http_only_get (const ::SoupCookie* obj) { return (gboolean) obj->http_only; }
// gboolean Cookie::http_only (const ::SoupCookie* obj);
// gboolean Cookie::http_only (const ::SoupCookie* obj);
bool base::CookieBase::http_only_ () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::SoupCookie* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_http_only_get;
  auto _temp_ret = call_wrap_v ((const ::SoupCookie*) (gobj_()));
  return _temp_ret;
}

static void _field_http_only_set (::SoupCookie* obj, gboolean _value) { obj->http_only = (decltype(obj->http_only)) _value; }
//  Cookie::http_only (::SoupCookie* obj, gboolean _value);
// void Cookie::http_only (::SoupCookie* obj, gboolean _value);
void base::CookieBase::http_only_ (gboolean _value) noexcept
{
  typedef void (*call_wrap_t) (::SoupCookie* obj, gboolean _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_http_only_set;
  auto _value_to_c = _value;
  call_wrap_v ((::SoupCookie*) (gobj_()), (gboolean) (_value_to_c));
}

// SoupCookie* soup_cookie_new (const char* name, const char* value, const char* domain, const char* path, int max_age);
// ::SoupCookie* soup_cookie_new (const char* name, const char* value, const char* domain, const char* path, gint max_age);
Soup::Cookie base::CookieBase::new_ (const std::string & name, const std::string & value, const std::string & domain, const std::string & path, gint max_age) noexcept
{
  typedef ::SoupCookie* (*call_wrap_t) (const char* name, const char* value, const char* domain, const char* path, gint max_age);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cookie_new;
  auto max_age_to_c = max_age;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none, gi::direction_in);
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (value_to_c), (const char*) (domain_to_c), (const char*) (path_to_c), (gint) (max_age_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean soup_cookie_applies_to_uri (SoupCookie* cookie, SoupURI* uri);
// gboolean soup_cookie_applies_to_uri (::SoupCookie* cookie, ::SoupURI* uri);
bool base::CookieBase::applies_to_uri (Soup::URI uri) noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupCookie* cookie, ::SoupURI* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cookie_applies_to_uri;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupCookie*) (gobj_()), (::SoupURI*) (uri_to_c));
  return _temp_ret;
}

// SoupCookie* soup_cookie_copy (SoupCookie* cookie);
// ::SoupCookie* soup_cookie_copy (::SoupCookie* cookie);
Soup::Cookie base::CookieBase::copy () noexcept
{
  typedef ::SoupCookie* (*call_wrap_t) (::SoupCookie* cookie);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cookie_copy;
  auto _temp_ret = call_wrap_v ((::SoupCookie*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean soup_cookie_domain_matches (SoupCookie* cookie, const char* host);
// gboolean soup_cookie_domain_matches (::SoupCookie* cookie, const char* host);
bool base::CookieBase::domain_matches (const std::string & host) noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupCookie* cookie, const char* host);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cookie_domain_matches;
  auto host_to_c = gi::unwrap (host, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupCookie*) (gobj_()), (const char*) (host_to_c));
  return _temp_ret;
}

// gboolean soup_cookie_equal (SoupCookie* cookie1, SoupCookie* cookie2);
// gboolean soup_cookie_equal (::SoupCookie* cookie1, ::SoupCookie* cookie2);
bool base::CookieBase::equal (Soup::Cookie cookie2) noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupCookie* cookie1, ::SoupCookie* cookie2);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cookie_equal;
  auto cookie2_to_c = gi::unwrap (cookie2, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupCookie*) (gobj_()), (::SoupCookie*) (cookie2_to_c));
  return _temp_ret;
}

// void soup_cookie_free (SoupCookie* cookie);
// void soup_cookie_free (::SoupCookie* cookie);
// IGNORE; marked ignore

// const char* soup_cookie_get_domain (SoupCookie* cookie);
// const char* soup_cookie_get_domain (::SoupCookie* cookie);
std::string base::CookieBase::get_domain () noexcept
{
  typedef const char* (*call_wrap_t) (::SoupCookie* cookie);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cookie_get_domain;
  auto _temp_ret = call_wrap_v ((::SoupCookie*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// SoupDate* soup_cookie_get_expires (SoupCookie* cookie);
// ::SoupDate* soup_cookie_get_expires (::SoupCookie* cookie);
Soup::Date base::CookieBase::get_expires () noexcept
{
  typedef ::SoupDate* (*call_wrap_t) (::SoupCookie* cookie);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cookie_get_expires;
  auto _temp_ret = call_wrap_v ((::SoupCookie*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean soup_cookie_get_http_only (SoupCookie* cookie);
// gboolean soup_cookie_get_http_only (::SoupCookie* cookie);
bool base::CookieBase::get_http_only () noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupCookie* cookie);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cookie_get_http_only;
  auto _temp_ret = call_wrap_v ((::SoupCookie*) (gobj_()));
  return _temp_ret;
}

// const char* soup_cookie_get_name (SoupCookie* cookie);
// const char* soup_cookie_get_name (::SoupCookie* cookie);
std::string base::CookieBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::SoupCookie* cookie);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cookie_get_name;
  auto _temp_ret = call_wrap_v ((::SoupCookie*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const char* soup_cookie_get_path (SoupCookie* cookie);
// const char* soup_cookie_get_path (::SoupCookie* cookie);
std::string base::CookieBase::get_path () noexcept
{
  typedef const char* (*call_wrap_t) (::SoupCookie* cookie);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cookie_get_path;
  auto _temp_ret = call_wrap_v ((::SoupCookie*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// SoupSameSitePolicy soup_cookie_get_same_site_policy (SoupCookie* cookie);
// ::SoupSameSitePolicy soup_cookie_get_same_site_policy (::SoupCookie* cookie);
Soup::SameSitePolicy base::CookieBase::get_same_site_policy () noexcept
{
  typedef ::SoupSameSitePolicy (*call_wrap_t) (::SoupCookie* cookie);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cookie_get_same_site_policy;
  auto _temp_ret = call_wrap_v ((::SoupCookie*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean soup_cookie_get_secure (SoupCookie* cookie);
// gboolean soup_cookie_get_secure (::SoupCookie* cookie);
bool base::CookieBase::get_secure () noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupCookie* cookie);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cookie_get_secure;
  auto _temp_ret = call_wrap_v ((::SoupCookie*) (gobj_()));
  return _temp_ret;
}

// const char* soup_cookie_get_value (SoupCookie* cookie);
// const char* soup_cookie_get_value (::SoupCookie* cookie);
std::string base::CookieBase::get_value () noexcept
{
  typedef const char* (*call_wrap_t) (::SoupCookie* cookie);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cookie_get_value;
  auto _temp_ret = call_wrap_v ((::SoupCookie*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void soup_cookie_set_domain (SoupCookie* cookie, const char* domain);
// void soup_cookie_set_domain (::SoupCookie* cookie, const char* domain);
void base::CookieBase::set_domain (const std::string & domain) noexcept
{
  typedef void (*call_wrap_t) (::SoupCookie* cookie, const char* domain);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cookie_set_domain;
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupCookie*) (gobj_()), (const char*) (domain_to_c));
}

// void soup_cookie_set_expires (SoupCookie* cookie, SoupDate* expires);
// void soup_cookie_set_expires (::SoupCookie* cookie, ::SoupDate* expires);
void base::CookieBase::set_expires (Soup::Date expires) noexcept
{
  typedef void (*call_wrap_t) (::SoupCookie* cookie, ::SoupDate* expires);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cookie_set_expires;
  auto expires_to_c = gi::unwrap (expires, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupCookie*) (gobj_()), (::SoupDate*) (expires_to_c));
}

// void soup_cookie_set_http_only (SoupCookie* cookie, gboolean http_only);
// void soup_cookie_set_http_only (::SoupCookie* cookie, gboolean http_only);
void base::CookieBase::set_http_only (gboolean http_only) noexcept
{
  typedef void (*call_wrap_t) (::SoupCookie* cookie, gboolean http_only);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cookie_set_http_only;
  auto http_only_to_c = http_only;
  call_wrap_v ((::SoupCookie*) (gobj_()), (gboolean) (http_only_to_c));
}

// void soup_cookie_set_max_age (SoupCookie* cookie, int max_age);
// void soup_cookie_set_max_age (::SoupCookie* cookie, gint max_age);
void base::CookieBase::set_max_age (gint max_age) noexcept
{
  typedef void (*call_wrap_t) (::SoupCookie* cookie, gint max_age);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cookie_set_max_age;
  auto max_age_to_c = max_age;
  call_wrap_v ((::SoupCookie*) (gobj_()), (gint) (max_age_to_c));
}

// void soup_cookie_set_name (SoupCookie* cookie, const char* name);
// void soup_cookie_set_name (::SoupCookie* cookie, const char* name);
void base::CookieBase::set_name (const std::string & name) noexcept
{
  typedef void (*call_wrap_t) (::SoupCookie* cookie, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cookie_set_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupCookie*) (gobj_()), (const char*) (name_to_c));
}

// void soup_cookie_set_path (SoupCookie* cookie, const char* path);
// void soup_cookie_set_path (::SoupCookie* cookie, const char* path);
void base::CookieBase::set_path (const std::string & path) noexcept
{
  typedef void (*call_wrap_t) (::SoupCookie* cookie, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cookie_set_path;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupCookie*) (gobj_()), (const char*) (path_to_c));
}

// void soup_cookie_set_same_site_policy (SoupCookie* cookie, SoupSameSitePolicy policy);
// void soup_cookie_set_same_site_policy (::SoupCookie* cookie, ::SoupSameSitePolicy policy);
void base::CookieBase::set_same_site_policy (Soup::SameSitePolicy policy) noexcept
{
  typedef void (*call_wrap_t) (::SoupCookie* cookie, ::SoupSameSitePolicy policy);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cookie_set_same_site_policy;
  auto policy_to_c = gi::unwrap (policy);
  call_wrap_v ((::SoupCookie*) (gobj_()), (::SoupSameSitePolicy) (policy_to_c));
}

// void soup_cookie_set_secure (SoupCookie* cookie, gboolean secure);
// void soup_cookie_set_secure (::SoupCookie* cookie, gboolean secure);
void base::CookieBase::set_secure (gboolean secure) noexcept
{
  typedef void (*call_wrap_t) (::SoupCookie* cookie, gboolean secure);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cookie_set_secure;
  auto secure_to_c = secure;
  call_wrap_v ((::SoupCookie*) (gobj_()), (gboolean) (secure_to_c));
}

// void soup_cookie_set_value (SoupCookie* cookie, const char* value);
// void soup_cookie_set_value (::SoupCookie* cookie, const char* value);
void base::CookieBase::set_value (const std::string & value) noexcept
{
  typedef void (*call_wrap_t) (::SoupCookie* cookie, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cookie_set_value;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupCookie*) (gobj_()), (const char*) (value_to_c));
}

// char* soup_cookie_to_cookie_header (SoupCookie* cookie);
// char* soup_cookie_to_cookie_header (::SoupCookie* cookie);
std::string base::CookieBase::to_cookie_header () noexcept
{
  typedef char* (*call_wrap_t) (::SoupCookie* cookie);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cookie_to_cookie_header;
  auto _temp_ret = call_wrap_v ((::SoupCookie*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char* soup_cookie_to_set_cookie_header (SoupCookie* cookie);
// char* soup_cookie_to_set_cookie_header (::SoupCookie* cookie);
std::string base::CookieBase::to_set_cookie_header () noexcept
{
  typedef char* (*call_wrap_t) (::SoupCookie* cookie);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cookie_to_set_cookie_header;
  auto _temp_ret = call_wrap_v ((::SoupCookie*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// SoupCookie* soup_cookie_parse (const char* header, SoupURI* origin);
// ::SoupCookie* soup_cookie_parse (const char* header, ::SoupURI* origin);
Soup::Cookie base::CookieBase::parse (const std::string & header, Soup::URI origin) noexcept
{
  typedef ::SoupCookie* (*call_wrap_t) (const char* header, ::SoupURI* origin);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cookie_parse;
  auto origin_to_c = gi::unwrap (origin, gi::transfer_none, gi::direction_in);
  auto header_to_c = gi::unwrap (header, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (header_to_c), (::SoupURI*) (origin_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/cookie_extra_def_impl.hpp>)
#include <soup/cookie_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/cookie_extra_impl.hpp>)
#include <soup/cookie_extra_impl.hpp>
#endif
#endif

#endif
