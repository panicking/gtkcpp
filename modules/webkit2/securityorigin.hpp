// AUTO-GENERATED

#ifndef _GI_WEBKIT2_SECURITYORIGIN_HPP_
#define _GI_WEBKIT2_SECURITYORIGIN_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {


class SecurityOrigin;

namespace base {


#define GI_WEBKIT2_SECURITYORIGIN_BASE base::SecurityOriginBase
class SecurityOriginBase : public gi::detail::GBoxedWrapper<SecurityOriginBase, ::WebKitSecurityOrigin>
{
typedef gi::detail::GBoxedWrapper<SecurityOriginBase, ::WebKitSecurityOrigin> super_type;
public:

SecurityOriginBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return webkit_security_origin_get_type(); } 

// WebKitSecurityOrigin* webkit_security_origin_new (const gchar* protocol, const gchar* host, guint16 port);
// ::WebKitSecurityOrigin* webkit_security_origin_new (const char* protocol, const char* host, guint16 port);
static GI_INLINE_DECL WebKit2::SecurityOrigin new_ (const std::string & protocol, const std::string & host, guint16 port) noexcept;

// WebKitSecurityOrigin* webkit_security_origin_new_for_uri (const gchar* uri);
// ::WebKitSecurityOrigin* webkit_security_origin_new_for_uri (const char* uri);
static GI_INLINE_DECL WebKit2::SecurityOrigin new_for_uri (const std::string & uri) noexcept;

// const gchar* webkit_security_origin_get_host (WebKitSecurityOrigin* origin);
// const char* webkit_security_origin_get_host (::WebKitSecurityOrigin* origin);
GI_INLINE_DECL std::string get_host () noexcept;

// guint16 webkit_security_origin_get_port (WebKitSecurityOrigin* origin);
// guint16 webkit_security_origin_get_port (::WebKitSecurityOrigin* origin);
GI_INLINE_DECL guint16 get_port () noexcept;

// const gchar* webkit_security_origin_get_protocol (WebKitSecurityOrigin* origin);
// const char* webkit_security_origin_get_protocol (::WebKitSecurityOrigin* origin);
GI_INLINE_DECL std::string get_protocol () noexcept;

// gboolean webkit_security_origin_is_opaque (WebKitSecurityOrigin* origin);
// gboolean webkit_security_origin_is_opaque (::WebKitSecurityOrigin* origin);
// IGNORE; deprecated

// WebKitSecurityOrigin* webkit_security_origin_ref (WebKitSecurityOrigin* origin);
// ::WebKitSecurityOrigin* webkit_security_origin_ref (::WebKitSecurityOrigin* origin);
// IGNORE; marked ignore

// gchar* webkit_security_origin_to_string (WebKitSecurityOrigin* origin);
// char* webkit_security_origin_to_string (::WebKitSecurityOrigin* origin);
GI_INLINE_DECL std::string to_string () noexcept;

// void webkit_security_origin_unref (WebKitSecurityOrigin* origin);
// void webkit_security_origin_unref (::WebKitSecurityOrigin* origin);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/securityorigin_extra_def.hpp>)
#include <webkit2/securityorigin_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/securityorigin_extra.hpp>)
#include <webkit2/securityorigin_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class SecurityOrigin : public GI_WEBKIT2_SECURITYORIGIN_BASE
{ typedef GI_WEBKIT2_SECURITYORIGIN_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitSecurityOrigin>
{ typedef WebKit2::SecurityOrigin type; }; 

} // namespace repository

} // namespace gi

#endif
