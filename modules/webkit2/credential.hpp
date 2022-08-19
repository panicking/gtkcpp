// AUTO-GENERATED

#ifndef _GI_WEBKIT2_CREDENTIAL_HPP_
#define _GI_WEBKIT2_CREDENTIAL_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {


class Credential;

namespace base {


#define GI_WEBKIT2_CREDENTIAL_BASE base::CredentialBase
class CredentialBase : public gi::detail::GBoxedWrapper<CredentialBase, ::WebKitCredential>
{
typedef gi::detail::GBoxedWrapper<CredentialBase, ::WebKitCredential> super_type;
public:

CredentialBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return webkit_credential_get_type(); } 

// WebKitCredential* webkit_credential_new (const gchar* username, const gchar* password, WebKitCredentialPersistence persistence);
// ::WebKitCredential* webkit_credential_new (const char* username, const char* password, ::WebKitCredentialPersistence persistence);
static GI_INLINE_DECL WebKit2::Credential new_ (const std::string & username, const std::string & password, WebKit2::CredentialPersistence persistence) noexcept;

// WebKitCredential* webkit_credential_new_for_certificate (GTlsCertificate* certificate, WebKitCredentialPersistence persistence);
// ::WebKitCredential* webkit_credential_new_for_certificate (::GTlsCertificate* certificate, ::WebKitCredentialPersistence persistence);
static GI_INLINE_DECL WebKit2::Credential new_for_certificate (Gio::TlsCertificate certificate, WebKit2::CredentialPersistence persistence) noexcept;
static GI_INLINE_DECL WebKit2::Credential new_for_certificate (WebKit2::CredentialPersistence persistence) noexcept;

// WebKitCredential* webkit_credential_new_for_certificate_pin (const gchar* pin, WebKitCredentialPersistence persistence);
// ::WebKitCredential* webkit_credential_new_for_certificate_pin (const char* pin, ::WebKitCredentialPersistence persistence);
static GI_INLINE_DECL WebKit2::Credential new_for_certificate_pin (const std::string & pin, WebKit2::CredentialPersistence persistence) noexcept;

// WebKitCredential* webkit_credential_copy (WebKitCredential* credential);
// ::WebKitCredential* webkit_credential_copy (::WebKitCredential* credential);
GI_INLINE_DECL WebKit2::Credential copy () noexcept;

// void webkit_credential_free (WebKitCredential* credential);
// void webkit_credential_free (::WebKitCredential* credential);
// IGNORE; marked ignore

// GTlsCertificate* webkit_credential_get_certificate (WebKitCredential* credential);
// ::GTlsCertificate* webkit_credential_get_certificate (::WebKitCredential* credential);
GI_INLINE_DECL Gio::TlsCertificate get_certificate () noexcept;

// const gchar* webkit_credential_get_password (WebKitCredential* credential);
// const char* webkit_credential_get_password (::WebKitCredential* credential);
GI_INLINE_DECL std::string get_password () noexcept;

// WebKitCredentialPersistence webkit_credential_get_persistence (WebKitCredential* credential);
// ::WebKitCredentialPersistence webkit_credential_get_persistence (::WebKitCredential* credential);
GI_INLINE_DECL WebKit2::CredentialPersistence get_persistence () noexcept;

// const gchar* webkit_credential_get_username (WebKitCredential* credential);
// const char* webkit_credential_get_username (::WebKitCredential* credential);
GI_INLINE_DECL std::string get_username () noexcept;

// gboolean webkit_credential_has_password (WebKitCredential* credential);
// gboolean webkit_credential_has_password (::WebKitCredential* credential);
GI_INLINE_DECL bool has_password () noexcept;

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/credential_extra_def.hpp>)
#include <webkit2/credential_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/credential_extra.hpp>)
#include <webkit2/credential_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class Credential : public GI_WEBKIT2_CREDENTIAL_BASE
{ typedef GI_WEBKIT2_CREDENTIAL_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitCredential>
{ typedef WebKit2::Credential type; }; 

} // namespace repository

} // namespace gi

#endif
