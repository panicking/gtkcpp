// AUTO-GENERATED

#ifndef _GI_GIO_STATICRESOURCE_IMPL_HPP_
#define _GI_GIO_STATICRESOURCE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// void g_static_resource_fini (GStaticResource* static_resource);
// void g_static_resource_fini (::GStaticResource* static_resource);
void base::StaticResourceBase::fini () noexcept
{
  typedef void (*call_wrap_t) (::GStaticResource* static_resource);
  call_wrap_t call_wrap_v = (call_wrap_t) g_static_resource_fini;
  call_wrap_v ((::GStaticResource*) (gobj_()));
}

// GResource* g_static_resource_get_resource (GStaticResource* static_resource);
// ::GResource* g_static_resource_get_resource (::GStaticResource* static_resource);
Gio::Resource base::StaticResourceBase::get_resource () noexcept
{
  typedef ::GResource* (*call_wrap_t) (::GStaticResource* static_resource);
  call_wrap_t call_wrap_v = (call_wrap_t) g_static_resource_get_resource;
  auto _temp_ret = call_wrap_v ((::GStaticResource*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void g_static_resource_init (GStaticResource* static_resource);
// void g_static_resource_init (::GStaticResource* static_resource);
void base::StaticResourceBase::init () noexcept
{
  typedef void (*call_wrap_t) (::GStaticResource* static_resource);
  call_wrap_t call_wrap_v = (call_wrap_t) g_static_resource_init;
  call_wrap_v ((::GStaticResource*) (gobj_()));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/staticresource_extra_def_impl.hpp>)
#include <gio/staticresource_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/staticresource_extra_impl.hpp>)
#include <gio/staticresource_extra_impl.hpp>
#endif
#endif

#endif
