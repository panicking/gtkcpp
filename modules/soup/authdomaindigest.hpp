// AUTO-GENERATED

#ifndef _GI_SOUP_AUTHDOMAINDIGEST_HPP_
#define _GI_SOUP_AUTHDOMAINDIGEST_HPP_

#include "authdomain.hpp"

namespace gi {

namespace repository {

namespace Soup {


class AuthDomainDigest;

namespace base {


#define GI_SOUP_AUTHDOMAINDIGEST_BASE base::AuthDomainDigestBase
class AuthDomainDigestBase : public Soup::AuthDomain
{
typedef Soup::AuthDomain super_type;
public:
typedef ::SoupAuthDomainDigest BaseObjectType;

AuthDomainDigestBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return soup_auth_domain_digest_get_type(); } 

// SoupAuthDomain* soup_auth_domain_digest_new (const char* optname1);
// ::SoupAuthDomainDigest* soup_auth_domain_digest_new (const char* optname1);
// IGNORE; not introspectable, varargs not supported

// char* soup_auth_domain_digest_encode_password (const char* username, const char* realm, const char* password);
// char* soup_auth_domain_digest_encode_password (const char* username, const char* realm, const char* password);
static GI_INLINE_DECL std::string encode_password (const std::string & username, const std::string & realm, const std::string & password) noexcept;

// void soup_auth_domain_digest_set_auth_callback (SoupAuthDomain* domain, SoupAuthDomainDigestAuthCallback callback, gpointer user_data, GDestroyNotify dnotify);
// void soup_auth_domain_digest_set_auth_callback (::SoupAuthDomainDigest* domain, Soup::AuthDomainDigestAuthCallback::cfunction_type callback, void* user_data, GLib::DestroyNotify::cfunction_type dnotify);
GI_INLINE_DECL void set_auth_callback (Soup::AuthDomainDigestAuthCallback callback) noexcept;

gi::property_proxy<Soup::AuthDomainDigestAuthCallback, base::AuthDomainDigestBase> property_auth_callback()
{ return gi::property_proxy<Soup::AuthDomainDigestAuthCallback, base::AuthDomainDigestBase> (*this, "auth-callback"); }
const gi::property_proxy<Soup::AuthDomainDigestAuthCallback, base::AuthDomainDigestBase> property_auth_callback() const
{ return gi::property_proxy<Soup::AuthDomainDigestAuthCallback, base::AuthDomainDigestBase> (*this, "auth-callback"); }

gi::property_proxy<gpointer, base::AuthDomainDigestBase> property_auth_data()
{ return gi::property_proxy<gpointer, base::AuthDomainDigestBase> (*this, "auth-data"); }
const gi::property_proxy<gpointer, base::AuthDomainDigestBase> property_auth_data() const
{ return gi::property_proxy<gpointer, base::AuthDomainDigestBase> (*this, "auth-data"); }

}; // class

} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/authdomaindigest_extra_def.hpp>)
#include <soup/authdomaindigest_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/authdomaindigest_extra.hpp>)
#include <soup/authdomaindigest_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

class AuthDomainDigest : public GI_SOUP_AUTHDOMAINDIGEST_BASE
{ typedef GI_SOUP_AUTHDOMAINDIGEST_BASE super_type; using super_type::super_type; };

} // namespace Soup

template<> struct declare_cpptype_of<::SoupAuthDomainDigest>
{ typedef Soup::AuthDomainDigest type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {


class AuthDomainDigestClassDef
{
typedef AuthDomainDigestClassDef self;
public:
typedef Soup::AuthDomainDigest instance_type;
typedef ::SoupAuthDomainDigestClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class AuthDomainDigestClass: public detail::ClassTemplate<Soup::impl::internal::AuthDomainDigestClassDef, Soup::impl::internal::AuthDomainClass>
{
typedef AuthDomainDigestClass self;
typedef detail::ClassTemplate<Soup::impl::internal::AuthDomainDigestClassDef, Soup::impl::internal::AuthDomainClass> super;

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

using AuthDomainDigestImpl = detail::ObjectImpl<AuthDomainDigest, internal::AuthDomainDigestClass>;

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
