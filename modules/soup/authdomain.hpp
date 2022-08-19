// AUTO-GENERATED

#ifndef _GI_SOUP_AUTHDOMAIN_HPP_
#define _GI_SOUP_AUTHDOMAIN_HPP_


namespace gi {

namespace repository {

namespace Soup {

class Message;

class AuthDomain;

namespace base {


#define GI_SOUP_AUTHDOMAIN_BASE base::AuthDomainBase
class AuthDomainBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::SoupAuthDomain BaseObjectType;

AuthDomainBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return soup_auth_domain_get_type(); } 

// char* soup_auth_domain_accepts (SoupAuthDomain* domain, SoupMessage* msg);
// char* soup_auth_domain_accepts (::SoupAuthDomain* domain, ::SoupMessage* msg);
GI_INLINE_DECL std::string accepts (Soup::Message msg) noexcept;

// void soup_auth_domain_add_path (SoupAuthDomain* domain, const char* path);
// void soup_auth_domain_add_path (::SoupAuthDomain* domain, const char* path);
GI_INLINE_DECL void add_path (const std::string & path) noexcept;

// void soup_auth_domain_challenge (SoupAuthDomain* domain, SoupMessage* msg);
// void soup_auth_domain_challenge (::SoupAuthDomain* domain, ::SoupMessage* msg);
GI_INLINE_DECL void challenge (Soup::Message msg) noexcept;

// gboolean soup_auth_domain_check_password (SoupAuthDomain* domain, SoupMessage* msg, const char* username, const char* password);
// gboolean soup_auth_domain_check_password (::SoupAuthDomain* domain, ::SoupMessage* msg, const char* username, const char* password);
GI_INLINE_DECL bool check_password (Soup::Message msg, const std::string & username, const std::string & password) noexcept;

// gboolean soup_auth_domain_covers (SoupAuthDomain* domain, SoupMessage* msg);
// gboolean soup_auth_domain_covers (::SoupAuthDomain* domain, ::SoupMessage* msg);
GI_INLINE_DECL bool covers (Soup::Message msg) noexcept;

// const char* soup_auth_domain_get_realm (SoupAuthDomain* domain);
// const char* soup_auth_domain_get_realm (::SoupAuthDomain* domain);
GI_INLINE_DECL std::string get_realm () noexcept;

// void soup_auth_domain_remove_path (SoupAuthDomain* domain, const char* path);
// void soup_auth_domain_remove_path (::SoupAuthDomain* domain, const char* path);
GI_INLINE_DECL void remove_path (const std::string & path) noexcept;

// void soup_auth_domain_set_filter (SoupAuthDomain* domain, SoupAuthDomainFilter filter, gpointer filter_data, GDestroyNotify dnotify);
// void soup_auth_domain_set_filter (::SoupAuthDomain* domain, Soup::AuthDomainFilter::cfunction_type filter, void* filter_data, GLib::DestroyNotify::cfunction_type dnotify);
GI_INLINE_DECL void set_filter (Soup::AuthDomainFilter filter) noexcept;

// void soup_auth_domain_set_generic_auth_callback (SoupAuthDomain* domain, SoupAuthDomainGenericAuthCallback auth_callback, gpointer auth_data, GDestroyNotify dnotify);
// void soup_auth_domain_set_generic_auth_callback (::SoupAuthDomain* domain, Soup::AuthDomainGenericAuthCallback::cfunction_type auth_callback, void* auth_data, GLib::DestroyNotify::cfunction_type dnotify);
GI_INLINE_DECL void set_generic_auth_callback (Soup::AuthDomainGenericAuthCallback auth_callback) noexcept;

// gboolean soup_auth_domain_try_generic_auth_callback (SoupAuthDomain* domain, SoupMessage* msg, const char* username);
// gboolean soup_auth_domain_try_generic_auth_callback (::SoupAuthDomain* domain, ::SoupMessage* msg, const char* username);
GI_INLINE_DECL bool try_generic_auth_callback (Soup::Message msg, const std::string & username) noexcept;

gi::property_proxy_write<std::string, base::AuthDomainBase> property_add_path()
{ return gi::property_proxy_write<std::string, base::AuthDomainBase> (*this, "add-path"); }

gi::property_proxy<Soup::AuthDomainFilter, base::AuthDomainBase> property_filter()
{ return gi::property_proxy<Soup::AuthDomainFilter, base::AuthDomainBase> (*this, "filter"); }
const gi::property_proxy<Soup::AuthDomainFilter, base::AuthDomainBase> property_filter() const
{ return gi::property_proxy<Soup::AuthDomainFilter, base::AuthDomainBase> (*this, "filter"); }

gi::property_proxy<gpointer, base::AuthDomainBase> property_filter_data()
{ return gi::property_proxy<gpointer, base::AuthDomainBase> (*this, "filter-data"); }
const gi::property_proxy<gpointer, base::AuthDomainBase> property_filter_data() const
{ return gi::property_proxy<gpointer, base::AuthDomainBase> (*this, "filter-data"); }

gi::property_proxy<Soup::AuthDomainGenericAuthCallback, base::AuthDomainBase> property_generic_auth_callback()
{ return gi::property_proxy<Soup::AuthDomainGenericAuthCallback, base::AuthDomainBase> (*this, "generic-auth-callback"); }
const gi::property_proxy<Soup::AuthDomainGenericAuthCallback, base::AuthDomainBase> property_generic_auth_callback() const
{ return gi::property_proxy<Soup::AuthDomainGenericAuthCallback, base::AuthDomainBase> (*this, "generic-auth-callback"); }

gi::property_proxy<gpointer, base::AuthDomainBase> property_generic_auth_data()
{ return gi::property_proxy<gpointer, base::AuthDomainBase> (*this, "generic-auth-data"); }
const gi::property_proxy<gpointer, base::AuthDomainBase> property_generic_auth_data() const
{ return gi::property_proxy<gpointer, base::AuthDomainBase> (*this, "generic-auth-data"); }

gi::property_proxy<bool, base::AuthDomainBase> property_proxy()
{ return gi::property_proxy<bool, base::AuthDomainBase> (*this, "proxy"); }
const gi::property_proxy<bool, base::AuthDomainBase> property_proxy() const
{ return gi::property_proxy<bool, base::AuthDomainBase> (*this, "proxy"); }

gi::property_proxy<std::string, base::AuthDomainBase> property_realm()
{ return gi::property_proxy<std::string, base::AuthDomainBase> (*this, "realm"); }
const gi::property_proxy<std::string, base::AuthDomainBase> property_realm() const
{ return gi::property_proxy<std::string, base::AuthDomainBase> (*this, "realm"); }

gi::property_proxy_write<std::string, base::AuthDomainBase> property_remove_path()
{ return gi::property_proxy_write<std::string, base::AuthDomainBase> (*this, "remove-path"); }

}; // class

} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/authdomain_extra_def.hpp>)
#include <soup/authdomain_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/authdomain_extra.hpp>)
#include <soup/authdomain_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

class AuthDomain : public GI_SOUP_AUTHDOMAIN_BASE
{ typedef GI_SOUP_AUTHDOMAIN_BASE super_type; using super_type::super_type; };

} // namespace Soup

template<> struct declare_cpptype_of<::SoupAuthDomain>
{ typedef Soup::AuthDomain type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {


class AuthDomainClassDef
{
typedef AuthDomainClassDef self;
public:
typedef Soup::AuthDomain instance_type;
typedef ::SoupAuthDomainClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// char* AuthDomain::accepts (SoupAuthDomain* domain, SoupMessage* msg, const char* header);
// char* AuthDomain::accepts (::SoupAuthDomain* domain, ::SoupMessage* msg, const char* header);
virtual std::string accepts_ (Soup::Message msg, const std::string & header) noexcept = 0;

// char* AuthDomain::challenge (SoupAuthDomain* domain, SoupMessage* msg);
// char* AuthDomain::challenge (::SoupAuthDomain* domain, ::SoupMessage* msg);
virtual std::string challenge_ (Soup::Message msg) noexcept = 0;

// gboolean AuthDomain::check_password (SoupAuthDomain* domain, SoupMessage* msg, const char* username, const char* password);
// gboolean AuthDomain::check_password (::SoupAuthDomain* domain, ::SoupMessage* msg, const char* username, const char* password);
virtual bool check_password_ (Soup::Message msg, const std::string & username, const std::string & password) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class AuthDomainClass: public detail::ClassTemplate<Soup::impl::internal::AuthDomainClassDef, GObject::impl::internal::ObjectClass>
{
typedef AuthDomainClass self;
typedef detail::ClassTemplate<Soup::impl::internal::AuthDomainClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// char* AuthDomain::accepts (SoupAuthDomain* domain, SoupMessage* msg, const char* header);
// char* AuthDomain::accepts (::SoupAuthDomain* domain, ::SoupMessage* msg, const char* header);
GI_INLINE_DECL std::string accepts_ (Soup::Message msg, const std::string & header) noexcept override;

// char* AuthDomain::challenge (SoupAuthDomain* domain, SoupMessage* msg);
// char* AuthDomain::challenge (::SoupAuthDomain* domain, ::SoupMessage* msg);
GI_INLINE_DECL std::string challenge_ (Soup::Message msg) noexcept override;

// gboolean AuthDomain::check_password (SoupAuthDomain* domain, SoupMessage* msg, const char* username, const char* password);
// gboolean AuthDomain::check_password (::SoupAuthDomain* domain, ::SoupMessage* msg, const char* username, const char* password);
GI_INLINE_DECL bool check_password_ (Soup::Message msg, const std::string & username, const std::string & password) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using AuthDomainImpl = detail::ObjectImpl<AuthDomain, internal::AuthDomainClass>;

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
