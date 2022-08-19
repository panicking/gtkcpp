// AUTO-GENERATED

#ifndef _GI_SOUP_PROXYRESOLVERDEFAULT_HPP_
#define _GI_SOUP_PROXYRESOLVERDEFAULT_HPP_


namespace gi {

namespace repository {

namespace Soup {

class ProxyURIResolver;
class SessionFeature;

class ProxyResolverDefault;

namespace base {


#define GI_SOUP_PROXYRESOLVERDEFAULT_BASE base::ProxyResolverDefaultBase
class ProxyResolverDefaultBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::SoupProxyResolverDefault BaseObjectType;

ProxyResolverDefaultBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return soup_proxy_resolver_default_get_type(); } 

GI_INLINE_DECL Soup::ProxyURIResolver interface_ (gi::interface_tag<Soup::ProxyURIResolver>);

GI_INLINE_DECL operator Soup::ProxyURIResolver ();

GI_INLINE_DECL Soup::SessionFeature interface_ (gi::interface_tag<Soup::SessionFeature>);

GI_INLINE_DECL operator Soup::SessionFeature ();

gi::property_proxy_write<Gio::ProxyResolver, base::ProxyResolverDefaultBase> property_gproxy_resolver()
{ return gi::property_proxy_write<Gio::ProxyResolver, base::ProxyResolverDefaultBase> (*this, "gproxy-resolver"); }

}; // class

} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/proxyresolverdefault_extra_def.hpp>)
#include <soup/proxyresolverdefault_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/proxyresolverdefault_extra.hpp>)
#include <soup/proxyresolverdefault_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

class ProxyResolverDefault : public GI_SOUP_PROXYRESOLVERDEFAULT_BASE
{ typedef GI_SOUP_PROXYRESOLVERDEFAULT_BASE super_type; using super_type::super_type; };

} // namespace Soup

template<> struct declare_cpptype_of<::SoupProxyResolverDefault>
{ typedef Soup::ProxyResolverDefault type; }; 

} // namespace repository

} // namespace gi

#include "proxyuriresolver.hpp"
#include "sessionfeature.hpp"

namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {


class ProxyResolverDefaultClassDef
{
typedef ProxyResolverDefaultClassDef self;
public:
typedef Soup::ProxyResolverDefault instance_type;
typedef ::SoupProxyResolverDefaultClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ProxyResolverDefaultClass: public detail::ClassTemplate<Soup::impl::internal::ProxyResolverDefaultClassDef, GObject::impl::internal::ObjectClass, Soup::impl::internal::ProxyURIResolverInterfaceClassImpl, Soup::impl::internal::SessionFeatureInterfaceClassImpl>
{
typedef ProxyResolverDefaultClass self;
typedef detail::ClassTemplate<Soup::impl::internal::ProxyResolverDefaultClassDef, GObject::impl::internal::ObjectClass, Soup::impl::internal::ProxyURIResolverInterfaceClassImpl, Soup::impl::internal::SessionFeatureInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Soup::impl::internal::ProxyURIResolverInterfaceClassImpl SoupProxyURIResolverInterface_type;
typedef Soup::impl::internal::SessionFeatureInterfaceClassImpl SoupSessionFeatureInterface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using ProxyResolverDefaultImpl = detail::ObjectImpl<ProxyResolverDefault, internal::ProxyResolverDefaultClass>;

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
