// AUTO-GENERATED

#ifndef _GI_GLIB_ONCE_IMPL_HPP_
#define _GI_GLIB_ONCE_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// gpointer g_once_impl (GOnce* once, GThreadFunc func, gpointer arg);
// void* g_once_impl (::GOnce* once,  func, void* arg);
// IGNORE; not introspectable, func type  not supported

// gboolean g_once_init_enter (void* location);
// gboolean g_once_init_enter (void* location);
bool base::OnceBase::init_enter (void* location) noexcept
{
  typedef gboolean (*call_wrap_t) (void* location);
  call_wrap_t call_wrap_v = (call_wrap_t) g_once_init_enter;
  auto location_to_c = location;
  auto _temp_ret = call_wrap_v ((void*) (location_to_c));
  return _temp_ret;
}

// void g_once_init_leave (void* location, gsize result);
// void g_once_init_leave (void* location, gsize result);
void base::OnceBase::init_leave (void* location, gsize result) noexcept
{
  typedef void (*call_wrap_t) (void* location, gsize result);
  call_wrap_t call_wrap_v = (call_wrap_t) g_once_init_leave;
  auto result_to_c = result;
  auto location_to_c = location;
  call_wrap_v ((void*) (location_to_c), (gsize) (result_to_c));
}


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/once_extra_def_impl.hpp>)
#include <glib/once_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/once_extra_impl.hpp>)
#include <glib/once_extra_impl.hpp>
#endif
#endif

#endif
