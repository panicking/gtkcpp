// AUTO-GENERATED

#ifndef _GI_SOUP_COOKIE_HPP_
#define _GI_SOUP_COOKIE_HPP_


namespace gi {

namespace repository {

namespace Soup {

class Date;
class URI;

class Cookie;

namespace base {


#define GI_SOUP_COOKIE_BASE base::CookieBase
class CookieBase : public gi::detail::GBoxedWrapper<CookieBase, ::SoupCookie>
{
typedef gi::detail::GBoxedWrapper<CookieBase, ::SoupCookie> super_type;
public:

CookieBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return soup_cookie_get_type(); } 

// char* Cookie::name (const ::SoupCookie* obj);
// char* Cookie::name (const ::SoupCookie* obj);
GI_INLINE_DECL std::string name_ () const noexcept;

// char* Cookie::value (const ::SoupCookie* obj);
// char* Cookie::value (const ::SoupCookie* obj);
GI_INLINE_DECL std::string value_ () const noexcept;

// char* Cookie::domain (const ::SoupCookie* obj);
// char* Cookie::domain (const ::SoupCookie* obj);
GI_INLINE_DECL std::string domain_ () const noexcept;

// char* Cookie::path (const ::SoupCookie* obj);
// char* Cookie::path (const ::SoupCookie* obj);
GI_INLINE_DECL std::string path_ () const noexcept;

// ::SoupDate* Cookie::expires (const ::SoupCookie* obj);
// ::SoupDate* Cookie::expires (const ::SoupCookie* obj);
GI_INLINE_DECL Soup::Date expires_ () const noexcept;

// gboolean Cookie::secure (const ::SoupCookie* obj);
// gboolean Cookie::secure (const ::SoupCookie* obj);
GI_INLINE_DECL bool secure_ () const noexcept;

//  Cookie::secure (::SoupCookie* obj, gboolean _value);
// void Cookie::secure (::SoupCookie* obj, gboolean _value);
GI_INLINE_DECL void secure_ (gboolean _value) noexcept;

// gboolean Cookie::http_only (const ::SoupCookie* obj);
// gboolean Cookie::http_only (const ::SoupCookie* obj);
GI_INLINE_DECL bool http_only_ () const noexcept;

//  Cookie::http_only (::SoupCookie* obj, gboolean _value);
// void Cookie::http_only (::SoupCookie* obj, gboolean _value);
GI_INLINE_DECL void http_only_ (gboolean _value) noexcept;

// SoupCookie* soup_cookie_new (const char* name, const char* value, const char* domain, const char* path, int max_age);
// ::SoupCookie* soup_cookie_new (const char* name, const char* value, const char* domain, const char* path, gint max_age);
static GI_INLINE_DECL Soup::Cookie new_ (const std::string & name, const std::string & value, const std::string & domain, const std::string & path, gint max_age) noexcept;

// gboolean soup_cookie_applies_to_uri (SoupCookie* cookie, SoupURI* uri);
// gboolean soup_cookie_applies_to_uri (::SoupCookie* cookie, ::SoupURI* uri);
GI_INLINE_DECL bool applies_to_uri (Soup::URI uri) noexcept;

// SoupCookie* soup_cookie_copy (SoupCookie* cookie);
// ::SoupCookie* soup_cookie_copy (::SoupCookie* cookie);
GI_INLINE_DECL Soup::Cookie copy () noexcept;

// gboolean soup_cookie_domain_matches (SoupCookie* cookie, const char* host);
// gboolean soup_cookie_domain_matches (::SoupCookie* cookie, const char* host);
GI_INLINE_DECL bool domain_matches (const std::string & host) noexcept;

// gboolean soup_cookie_equal (SoupCookie* cookie1, SoupCookie* cookie2);
// gboolean soup_cookie_equal (::SoupCookie* cookie1, ::SoupCookie* cookie2);
GI_INLINE_DECL bool equal (Soup::Cookie cookie2) noexcept;

// void soup_cookie_free (SoupCookie* cookie);
// void soup_cookie_free (::SoupCookie* cookie);
// IGNORE; marked ignore

// const char* soup_cookie_get_domain (SoupCookie* cookie);
// const char* soup_cookie_get_domain (::SoupCookie* cookie);
GI_INLINE_DECL std::string get_domain () noexcept;

// SoupDate* soup_cookie_get_expires (SoupCookie* cookie);
// ::SoupDate* soup_cookie_get_expires (::SoupCookie* cookie);
GI_INLINE_DECL Soup::Date get_expires () noexcept;

// gboolean soup_cookie_get_http_only (SoupCookie* cookie);
// gboolean soup_cookie_get_http_only (::SoupCookie* cookie);
GI_INLINE_DECL bool get_http_only () noexcept;

// const char* soup_cookie_get_name (SoupCookie* cookie);
// const char* soup_cookie_get_name (::SoupCookie* cookie);
GI_INLINE_DECL std::string get_name () noexcept;

// const char* soup_cookie_get_path (SoupCookie* cookie);
// const char* soup_cookie_get_path (::SoupCookie* cookie);
GI_INLINE_DECL std::string get_path () noexcept;

// SoupSameSitePolicy soup_cookie_get_same_site_policy (SoupCookie* cookie);
// ::SoupSameSitePolicy soup_cookie_get_same_site_policy (::SoupCookie* cookie);
GI_INLINE_DECL Soup::SameSitePolicy get_same_site_policy () noexcept;

// gboolean soup_cookie_get_secure (SoupCookie* cookie);
// gboolean soup_cookie_get_secure (::SoupCookie* cookie);
GI_INLINE_DECL bool get_secure () noexcept;

// const char* soup_cookie_get_value (SoupCookie* cookie);
// const char* soup_cookie_get_value (::SoupCookie* cookie);
GI_INLINE_DECL std::string get_value () noexcept;

// void soup_cookie_set_domain (SoupCookie* cookie, const char* domain);
// void soup_cookie_set_domain (::SoupCookie* cookie, const char* domain);
GI_INLINE_DECL void set_domain (const std::string & domain) noexcept;

// void soup_cookie_set_expires (SoupCookie* cookie, SoupDate* expires);
// void soup_cookie_set_expires (::SoupCookie* cookie, ::SoupDate* expires);
GI_INLINE_DECL void set_expires (Soup::Date expires) noexcept;

// void soup_cookie_set_http_only (SoupCookie* cookie, gboolean http_only);
// void soup_cookie_set_http_only (::SoupCookie* cookie, gboolean http_only);
GI_INLINE_DECL void set_http_only (gboolean http_only) noexcept;

// void soup_cookie_set_max_age (SoupCookie* cookie, int max_age);
// void soup_cookie_set_max_age (::SoupCookie* cookie, gint max_age);
GI_INLINE_DECL void set_max_age (gint max_age) noexcept;

// void soup_cookie_set_name (SoupCookie* cookie, const char* name);
// void soup_cookie_set_name (::SoupCookie* cookie, const char* name);
GI_INLINE_DECL void set_name (const std::string & name) noexcept;

// void soup_cookie_set_path (SoupCookie* cookie, const char* path);
// void soup_cookie_set_path (::SoupCookie* cookie, const char* path);
GI_INLINE_DECL void set_path (const std::string & path) noexcept;

// void soup_cookie_set_same_site_policy (SoupCookie* cookie, SoupSameSitePolicy policy);
// void soup_cookie_set_same_site_policy (::SoupCookie* cookie, ::SoupSameSitePolicy policy);
GI_INLINE_DECL void set_same_site_policy (Soup::SameSitePolicy policy) noexcept;

// void soup_cookie_set_secure (SoupCookie* cookie, gboolean secure);
// void soup_cookie_set_secure (::SoupCookie* cookie, gboolean secure);
GI_INLINE_DECL void set_secure (gboolean secure) noexcept;

// void soup_cookie_set_value (SoupCookie* cookie, const char* value);
// void soup_cookie_set_value (::SoupCookie* cookie, const char* value);
GI_INLINE_DECL void set_value (const std::string & value) noexcept;

// char* soup_cookie_to_cookie_header (SoupCookie* cookie);
// char* soup_cookie_to_cookie_header (::SoupCookie* cookie);
GI_INLINE_DECL std::string to_cookie_header () noexcept;

// char* soup_cookie_to_set_cookie_header (SoupCookie* cookie);
// char* soup_cookie_to_set_cookie_header (::SoupCookie* cookie);
GI_INLINE_DECL std::string to_set_cookie_header () noexcept;

// SoupCookie* soup_cookie_parse (const char* header, SoupURI* origin);
// ::SoupCookie* soup_cookie_parse (const char* header, ::SoupURI* origin);
static GI_INLINE_DECL Soup::Cookie parse (const std::string & header, Soup::URI origin) noexcept;

}; // class

} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/cookie_extra_def.hpp>)
#include <soup/cookie_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/cookie_extra.hpp>)
#include <soup/cookie_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

class Cookie : public GI_SOUP_COOKIE_BASE
{ typedef GI_SOUP_COOKIE_BASE super_type; using super_type::super_type; };

} // namespace Soup

template<> struct declare_cpptype_of<::SoupCookie>
{ typedef Soup::Cookie type; }; 

} // namespace repository

} // namespace gi

#endif
