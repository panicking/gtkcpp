// AUTO-GENERATED

#ifndef _GI_SOUP_PROXYRESOLVERDEFAULT_IMPL_HPP_
#define _GI_SOUP_PROXYRESOLVERDEFAULT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Soup {

namespace base {

Soup::ProxyURIResolver ProxyResolverDefaultBase::interface_ (gi::interface_tag<Soup::ProxyURIResolver>)
{ return gi::wrap ((Soup::ProxyURIResolver::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

ProxyResolverDefaultBase::operator Soup::ProxyURIResolver ()
{ return interface_ (gi::interface_tag<Soup::ProxyURIResolver>()); }

Soup::SessionFeature ProxyResolverDefaultBase::interface_ (gi::interface_tag<Soup::SessionFeature>)
{ return gi::wrap ((Soup::SessionFeature::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

ProxyResolverDefaultBase::operator Soup::SessionFeature ()
{ return interface_ (gi::interface_tag<Soup::SessionFeature>()); }


} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/proxyresolverdefault_extra_def_impl.hpp>)
#include <soup/proxyresolverdefault_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/proxyresolverdefault_extra_impl.hpp>)
#include <soup/proxyresolverdefault_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {

void ProxyResolverDefaultClassDef::class_init (gpointer class_struct, gpointer )
{
  ::SoupProxyResolverDefaultClass *methods = (::SoupProxyResolverDefaultClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
