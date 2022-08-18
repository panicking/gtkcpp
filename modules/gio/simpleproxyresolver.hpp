// AUTO-GENERATED

#ifndef _GI_GIO_SIMPLEPROXYRESOLVER_HPP_
#define _GI_GIO_SIMPLEPROXYRESOLVER_HPP_


namespace gi {

namespace repository {

namespace Gio {

class ProxyResolver;

class SimpleProxyResolver;

namespace base {


#define GI_GIO_SIMPLEPROXYRESOLVER_BASE base::SimpleProxyResolverBase
class SimpleProxyResolverBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GSimpleProxyResolver BaseObjectType;

SimpleProxyResolverBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_simple_proxy_resolver_get_type(); } 

GI_INLINE_DECL Gio::ProxyResolver interface_ (gi::interface_tag<Gio::ProxyResolver>);

GI_INLINE_DECL operator Gio::ProxyResolver ();

// GProxyResolver* g_simple_proxy_resolver_new (const gchar* default_proxy, gchar** ignore_hosts);
// ::GProxyResolver* g_simple_proxy_resolver_new (const char* default_proxy, char** ignore_hosts);
static GI_INLINE_DECL Gio::ProxyResolver new_ (const std::string & default_proxy, const std::vector<std::string> & ignore_hosts) noexcept;
static GI_INLINE_DECL Gio::ProxyResolver new_ (const std::vector<std::string> & ignore_hosts) noexcept;

// void g_simple_proxy_resolver_set_default_proxy (GSimpleProxyResolver* resolver, const gchar* default_proxy);
// void g_simple_proxy_resolver_set_default_proxy (::GSimpleProxyResolver* resolver, const char* default_proxy);
GI_INLINE_DECL void set_default_proxy (const std::string & default_proxy) noexcept;

// void g_simple_proxy_resolver_set_ignore_hosts (GSimpleProxyResolver* resolver, gchar** ignore_hosts);
// void g_simple_proxy_resolver_set_ignore_hosts (::GSimpleProxyResolver* resolver, char** ignore_hosts);
GI_INLINE_DECL void set_ignore_hosts (const std::vector<std::string> & ignore_hosts) noexcept;

// void g_simple_proxy_resolver_set_uri_proxy (GSimpleProxyResolver* resolver, const gchar* uri_scheme, const gchar* proxy);
// void g_simple_proxy_resolver_set_uri_proxy (::GSimpleProxyResolver* resolver, const char* uri_scheme, const char* proxy);
GI_INLINE_DECL void set_uri_proxy (const std::string & uri_scheme, const std::string & proxy) noexcept;

gi::property_proxy<std::string, base::SimpleProxyResolverBase> property_default_proxy()
{ return gi::property_proxy<std::string, base::SimpleProxyResolverBase> (*this, "default-proxy"); }
const gi::property_proxy<std::string, base::SimpleProxyResolverBase> property_default_proxy() const
{ return gi::property_proxy<std::string, base::SimpleProxyResolverBase> (*this, "default-proxy"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/simpleproxyresolver_extra_def.hpp>)
#include <gio/simpleproxyresolver_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/simpleproxyresolver_extra.hpp>)
#include <gio/simpleproxyresolver_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class SimpleProxyResolver : public GI_GIO_SIMPLEPROXYRESOLVER_BASE
{ typedef GI_GIO_SIMPLEPROXYRESOLVER_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GSimpleProxyResolver>
{ typedef Gio::SimpleProxyResolver type; }; 

} // namespace repository

} // namespace gi

#include "proxyresolver.hpp"

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class SimpleProxyResolverClassDef
{
typedef SimpleProxyResolverClassDef self;
public:
typedef Gio::SimpleProxyResolver instance_type;
typedef ::GSimpleProxyResolverClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class SimpleProxyResolverClass: public detail::ClassTemplate<Gio::impl::internal::SimpleProxyResolverClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ProxyResolverInterfaceClassImpl>
{
typedef SimpleProxyResolverClass self;
typedef detail::ClassTemplate<Gio::impl::internal::SimpleProxyResolverClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ProxyResolverInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::ProxyResolverInterfaceClassImpl GProxyResolverInterface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using SimpleProxyResolverImpl = detail::ObjectImpl<SimpleProxyResolver, internal::SimpleProxyResolverClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
