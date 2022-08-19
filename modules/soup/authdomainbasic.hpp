// AUTO-GENERATED

#ifndef _GI_SOUP_AUTHDOMAINBASIC_HPP_
#define _GI_SOUP_AUTHDOMAINBASIC_HPP_

#include "authdomain.hpp"

namespace gi {

namespace repository {

namespace Soup {


class AuthDomainBasic;

namespace base {


#define GI_SOUP_AUTHDOMAINBASIC_BASE base::AuthDomainBasicBase
class AuthDomainBasicBase : public Soup::AuthDomain
{
typedef Soup::AuthDomain super_type;
public:
typedef ::SoupAuthDomainBasic BaseObjectType;

AuthDomainBasicBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return soup_auth_domain_basic_get_type(); } 

// SoupAuthDomain* soup_auth_domain_basic_new (const char* optname1);
// ::SoupAuthDomainBasic* soup_auth_domain_basic_new (const char* optname1);
// IGNORE; not introspectable, varargs not supported

// void soup_auth_domain_basic_set_auth_callback (SoupAuthDomain* domain, SoupAuthDomainBasicAuthCallback callback, gpointer user_data, GDestroyNotify dnotify);
// void soup_auth_domain_basic_set_auth_callback (::SoupAuthDomainBasic* domain, Soup::AuthDomainBasicAuthCallback::cfunction_type callback, void* user_data, GLib::DestroyNotify::cfunction_type dnotify);
GI_INLINE_DECL void set_auth_callback (Soup::AuthDomainBasicAuthCallback callback) noexcept;

gi::property_proxy<Soup::AuthDomainBasicAuthCallback, base::AuthDomainBasicBase> property_auth_callback()
{ return gi::property_proxy<Soup::AuthDomainBasicAuthCallback, base::AuthDomainBasicBase> (*this, "auth-callback"); }
const gi::property_proxy<Soup::AuthDomainBasicAuthCallback, base::AuthDomainBasicBase> property_auth_callback() const
{ return gi::property_proxy<Soup::AuthDomainBasicAuthCallback, base::AuthDomainBasicBase> (*this, "auth-callback"); }

gi::property_proxy<gpointer, base::AuthDomainBasicBase> property_auth_data()
{ return gi::property_proxy<gpointer, base::AuthDomainBasicBase> (*this, "auth-data"); }
const gi::property_proxy<gpointer, base::AuthDomainBasicBase> property_auth_data() const
{ return gi::property_proxy<gpointer, base::AuthDomainBasicBase> (*this, "auth-data"); }

}; // class

} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/authdomainbasic_extra_def.hpp>)
#include <soup/authdomainbasic_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/authdomainbasic_extra.hpp>)
#include <soup/authdomainbasic_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

class AuthDomainBasic : public GI_SOUP_AUTHDOMAINBASIC_BASE
{ typedef GI_SOUP_AUTHDOMAINBASIC_BASE super_type; using super_type::super_type; };

} // namespace Soup

template<> struct declare_cpptype_of<::SoupAuthDomainBasic>
{ typedef Soup::AuthDomainBasic type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {


class AuthDomainBasicClassDef
{
typedef AuthDomainBasicClassDef self;
public:
typedef Soup::AuthDomainBasic instance_type;
typedef ::SoupAuthDomainBasicClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class AuthDomainBasicClass: public detail::ClassTemplate<Soup::impl::internal::AuthDomainBasicClassDef, Soup::impl::internal::AuthDomainClass>
{
typedef AuthDomainBasicClass self;
typedef detail::ClassTemplate<Soup::impl::internal::AuthDomainBasicClassDef, Soup::impl::internal::AuthDomainClass> super;

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

using AuthDomainBasicImpl = detail::ObjectImpl<AuthDomainBasic, internal::AuthDomainBasicClass>;

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
