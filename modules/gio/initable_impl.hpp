// AUTO-GENERATED

#ifndef _GI_GIO_INITABLE_IMPL_HPP_
#define _GI_GIO_INITABLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// gpointer g_initable_new (GType object_type, GCancellable* cancellable, GError** error, const gchar* first_property_name);
// ::GObject* g_initable_new (GType object_type, ::GCancellable* cancellable, ::GError* error, const char* first_property_name);
// IGNORE; not introspectable, varargs not supported

// GObject* g_initable_new_valist (GType object_type, const gchar* first_property_name, va_list var_args, GCancellable* cancellable, GError ** error);
// ::GObject* g_initable_new_valist (GType object_type, const char* first_property_name,  var_args, ::GCancellable* cancellable, GError ** error);
// IGNORE; not introspectable, var_args type  not supported

// gpointer g_initable_newv (GType object_type, guint n_parameters, GCancellable* cancellable, GError ** error);
// ::GObject* g_initable_newv (GType object_type, guint n_parameters, ::GCancellable* cancellable, GError ** error);
// IGNORE; deprecated, container element not supported

// gboolean g_initable_init (GInitable* initable, GCancellable* cancellable, GError ** error);
// gboolean g_initable_init (::GInitable* initable, ::GCancellable* cancellable, GError ** error);
bool base::InitableBase::init (Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GInitable* initable, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_initable_init;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInitable*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::InitableBase::init ()
{
  typedef gboolean (*call_wrap_t) (::GInitable* initable, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_initable_init;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInitable*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::InitableBase::init (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GInitable* initable, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_initable_init;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInitable*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::InitableBase::init (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GInitable* initable, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_initable_init;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInitable*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/initable_extra_def_impl.hpp>)
#include <gio/initable_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/initable_extra_impl.hpp>)
#include <gio/initable_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void InitableIfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GInitableIface *methods = (::GInitableIface *) interface_struct;
  (void) methods;

}

// gboolean Initable::init (GInitable* initable, GCancellable* cancellable, GError ** error);
// gboolean Initable::init (::GInitable* initable, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
