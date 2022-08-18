// AUTO-GENERATED

#ifndef _GI_GIO_DEBUGCONTROLLER_IMPL_HPP_
#define _GI_GIO_DEBUGCONTROLLER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// gboolean g_debug_controller_get_debug_enabled (GDebugController* self);
// gboolean g_debug_controller_get_debug_enabled (::GDebugController* self);
bool base::DebugControllerBase::get_debug_enabled () noexcept
{
  typedef gboolean (*call_wrap_t) (::GDebugController* self);
  call_wrap_t call_wrap_v = (call_wrap_t) g_debug_controller_get_debug_enabled;
  auto _temp_ret = call_wrap_v ((::GDebugController*) (gobj_()));
  return _temp_ret;
}

// void g_debug_controller_set_debug_enabled (GDebugController* self, gboolean debug_enabled);
// void g_debug_controller_set_debug_enabled (::GDebugController* self, gboolean debug_enabled);
void base::DebugControllerBase::set_debug_enabled (gboolean debug_enabled) noexcept
{
  typedef void (*call_wrap_t) (::GDebugController* self, gboolean debug_enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) g_debug_controller_set_debug_enabled;
  auto debug_enabled_to_c = debug_enabled;
  call_wrap_v ((::GDebugController*) (gobj_()), (gboolean) (debug_enabled_to_c));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/debugcontroller_extra_def_impl.hpp>)
#include <gio/debugcontroller_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/debugcontroller_extra_impl.hpp>)
#include <gio/debugcontroller_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void DebugControllerInterfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GDebugControllerInterface *methods = (::GDebugControllerInterface *) interface_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
