// AUTO-GENERATED

#ifndef _GI_GIO_STATICRESOURCE_HPP_
#define _GI_GIO_STATICRESOURCE_HPP_


namespace gi {

namespace repository {

namespace Gio {

class Resource;

class StaticResource;

namespace base {


#define GI_GIO_STATICRESOURCE_BASE base::StaticResourceBase
class StaticResourceBase : public gi::detail::CBoxedWrapper<StaticResourceBase, ::GStaticResource>
{
typedef gi::detail::CBoxedWrapper<StaticResourceBase, ::GStaticResource> super_type;
public:

StaticResourceBase (std::nullptr_t = nullptr) : super_type() {}

// void g_static_resource_fini (GStaticResource* static_resource);
// void g_static_resource_fini (::GStaticResource* static_resource);
GI_INLINE_DECL void fini () noexcept;

// GResource* g_static_resource_get_resource (GStaticResource* static_resource);
// ::GResource* g_static_resource_get_resource (::GStaticResource* static_resource);
GI_INLINE_DECL Gio::Resource get_resource () noexcept;

// void g_static_resource_init (GStaticResource* static_resource);
// void g_static_resource_init (::GStaticResource* static_resource);
GI_INLINE_DECL void init () noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/staticresource_extra_def.hpp>)
#include <gio/staticresource_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/staticresource_extra.hpp>)
#include <gio/staticresource_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class StaticResource : public GI_GIO_STATICRESOURCE_BASE
{ typedef GI_GIO_STATICRESOURCE_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GStaticResource>
{ typedef Gio::StaticResource type; }; 

} // namespace repository

} // namespace gi

#endif
