// AUTO-GENERATED

#ifndef _GI_GLIB_PRIVATE_IMPL_HPP_
#define _GI_GLIB_PRIVATE_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// gpointer g_private_get (GPrivate* key);
// void* g_private_get (::GPrivate* key);
gpointer base::PrivateBase::get () noexcept
{
  typedef void* (*call_wrap_t) (::GPrivate* key);
  call_wrap_t call_wrap_v = (call_wrap_t) g_private_get;
  auto _temp_ret = call_wrap_v ((::GPrivate*) (gobj_()));
  return _temp_ret;
}

// void g_private_replace (GPrivate* key, gpointer value);
// void g_private_replace (::GPrivate* key, void* value);
void base::PrivateBase::replace (void* value) noexcept
{
  typedef void (*call_wrap_t) (::GPrivate* key, void* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_private_replace;
  auto value_to_c = value;
  call_wrap_v ((::GPrivate*) (gobj_()), (void*) (value_to_c));
}

// void g_private_set (GPrivate* key, gpointer value);
// void g_private_set (::GPrivate* key, void* value);
void base::PrivateBase::set (void* value) noexcept
{
  typedef void (*call_wrap_t) (::GPrivate* key, void* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_private_set;
  auto value_to_c = value;
  call_wrap_v ((::GPrivate*) (gobj_()), (void*) (value_to_c));
}


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/private_extra_def_impl.hpp>)
#include <glib/private_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/private_extra_impl.hpp>)
#include <glib/private_extra_impl.hpp>
#endif
#endif

#endif
