// AUTO-GENERATED

#ifndef _GI_WEBKIT2_AUTHENTICATIONREQUEST_HPP_
#define _GI_WEBKIT2_AUTHENTICATIONREQUEST_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {

class Credential;
class SecurityOrigin;

class AuthenticationRequest;

namespace base {


#define GI_WEBKIT2_AUTHENTICATIONREQUEST_BASE base::AuthenticationRequestBase
class AuthenticationRequestBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::WebKitAuthenticationRequest BaseObjectType;

AuthenticationRequestBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webkit_authentication_request_get_type(); } 

// void webkit_authentication_request_authenticate (WebKitAuthenticationRequest* request, WebKitCredential* credential);
// void webkit_authentication_request_authenticate (::WebKitAuthenticationRequest* request, ::WebKitCredential* credential);
GI_INLINE_DECL void authenticate (WebKit2::Credential credential) noexcept;
GI_INLINE_DECL void authenticate () noexcept;

// gboolean webkit_authentication_request_can_save_credentials (WebKitAuthenticationRequest* request);
// gboolean webkit_authentication_request_can_save_credentials (::WebKitAuthenticationRequest* request);
GI_INLINE_DECL bool can_save_credentials () noexcept;

// void webkit_authentication_request_cancel (WebKitAuthenticationRequest* request);
// void webkit_authentication_request_cancel (::WebKitAuthenticationRequest* request);
GI_INLINE_DECL void cancel () noexcept;

// GTlsPasswordFlags webkit_authentication_request_get_certificate_pin_flags (WebKitAuthenticationRequest* request);
// ::GTlsPasswordFlags webkit_authentication_request_get_certificate_pin_flags (::WebKitAuthenticationRequest* request);
GI_INLINE_DECL Gio::TlsPasswordFlags get_certificate_pin_flags () noexcept;

// const gchar* webkit_authentication_request_get_host (WebKitAuthenticationRequest* request);
// const char* webkit_authentication_request_get_host (::WebKitAuthenticationRequest* request);
GI_INLINE_DECL std::string get_host () noexcept;

// guint webkit_authentication_request_get_port (WebKitAuthenticationRequest* request);
// guint webkit_authentication_request_get_port (::WebKitAuthenticationRequest* request);
GI_INLINE_DECL guint get_port () noexcept;

// WebKitCredential* webkit_authentication_request_get_proposed_credential (WebKitAuthenticationRequest* request);
// ::WebKitCredential* webkit_authentication_request_get_proposed_credential (::WebKitAuthenticationRequest* request);
GI_INLINE_DECL WebKit2::Credential get_proposed_credential () noexcept;

// const gchar* webkit_authentication_request_get_realm (WebKitAuthenticationRequest* request);
// const char* webkit_authentication_request_get_realm (::WebKitAuthenticationRequest* request);
GI_INLINE_DECL std::string get_realm () noexcept;

// WebKitAuthenticationScheme webkit_authentication_request_get_scheme (WebKitAuthenticationRequest* request);
// ::WebKitAuthenticationScheme webkit_authentication_request_get_scheme (::WebKitAuthenticationRequest* request);
GI_INLINE_DECL WebKit2::AuthenticationScheme get_scheme () noexcept;

// WebKitSecurityOrigin* webkit_authentication_request_get_security_origin (WebKitAuthenticationRequest* request);
// ::WebKitSecurityOrigin* webkit_authentication_request_get_security_origin (::WebKitAuthenticationRequest* request);
GI_INLINE_DECL WebKit2::SecurityOrigin get_security_origin () noexcept;

// gboolean webkit_authentication_request_is_for_proxy (WebKitAuthenticationRequest* request);
// gboolean webkit_authentication_request_is_for_proxy (::WebKitAuthenticationRequest* request);
GI_INLINE_DECL bool is_for_proxy () noexcept;

// gboolean webkit_authentication_request_is_retry (WebKitAuthenticationRequest* request);
// gboolean webkit_authentication_request_is_retry (::WebKitAuthenticationRequest* request);
GI_INLINE_DECL bool is_retry () noexcept;

// void webkit_authentication_request_set_can_save_credentials (WebKitAuthenticationRequest* request, gboolean enabled);
// void webkit_authentication_request_set_can_save_credentials (::WebKitAuthenticationRequest* request, gboolean enabled);
GI_INLINE_DECL void set_can_save_credentials (gboolean enabled) noexcept;

// void webkit_authentication_request_set_proposed_credential (WebKitAuthenticationRequest* request, WebKitCredential* credential);
// void webkit_authentication_request_set_proposed_credential (::WebKitAuthenticationRequest* request, ::WebKitCredential* credential);
GI_INLINE_DECL void set_proposed_credential (WebKit2::Credential credential) noexcept;

// signal authenticated
gi::signal_proxy<void(WebKit2::AuthenticationRequest, WebKit2::Credential credential)> signal_authenticated()
{ return gi::signal_proxy<void(WebKit2::AuthenticationRequest, WebKit2::Credential credential)> (*this, "authenticated"); }

// signal cancelled
gi::signal_proxy<void(WebKit2::AuthenticationRequest)> signal_cancelled()
{ return gi::signal_proxy<void(WebKit2::AuthenticationRequest)> (*this, "cancelled"); }

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/authenticationrequest_extra_def.hpp>)
#include <webkit2/authenticationrequest_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/authenticationrequest_extra.hpp>)
#include <webkit2/authenticationrequest_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class AuthenticationRequest : public GI_WEBKIT2_AUTHENTICATIONREQUEST_BASE
{ typedef GI_WEBKIT2_AUTHENTICATIONREQUEST_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitAuthenticationRequest>
{ typedef WebKit2::AuthenticationRequest type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {


class AuthenticationRequestClassDef
{
typedef AuthenticationRequestClassDef self;
public:
typedef WebKit2::AuthenticationRequest instance_type;
typedef ::WebKitAuthenticationRequestClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class AuthenticationRequestClass: public detail::ClassTemplate<WebKit2::impl::internal::AuthenticationRequestClassDef, GObject::impl::internal::ObjectClass>
{
typedef AuthenticationRequestClass self;
typedef detail::ClassTemplate<WebKit2::impl::internal::AuthenticationRequestClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};

} // namespace internal

GI_CLASS_IMPL_END

using AuthenticationRequestImpl = detail::ObjectImpl<AuthenticationRequest, internal::AuthenticationRequestClass>;

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
