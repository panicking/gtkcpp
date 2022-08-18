// AUTO-GENERATED

#ifndef _GI_GIO_SIMPLEPERMISSION_IMPL_HPP_
#define _GI_GIO_SIMPLEPERMISSION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GPermission* g_simple_permission_new (gboolean allowed);
// ::GSimplePermission* g_simple_permission_new (gboolean allowed);
Gio::SimplePermission base::SimplePermissionBase::new_ (gboolean allowed) noexcept
{
  typedef ::GSimplePermission* (*call_wrap_t) (gboolean allowed);
  call_wrap_t call_wrap_v = (call_wrap_t) g_simple_permission_new;
  auto allowed_to_c = allowed;
  auto _temp_ret = call_wrap_v ((gboolean) (allowed_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/simplepermission_extra_def_impl.hpp>)
#include <gio/simplepermission_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/simplepermission_extra_impl.hpp>)
#include <gio/simplepermission_extra_impl.hpp>
#endif
#endif

#endif
