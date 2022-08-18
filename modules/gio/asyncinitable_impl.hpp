// AUTO-GENERATED

#ifndef _GI_GIO_ASYNCINITABLE_IMPL_HPP_
#define _GI_GIO_ASYNCINITABLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// void g_async_initable_new_async (GType object_type, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data, const gchar* first_property_name);
// void g_async_initable_new_async (GType object_type, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data, const char* first_property_name);
// IGNORE; not introspectable, varargs not supported

// void g_async_initable_new_valist_async (GType object_type, const gchar* first_property_name, va_list var_args, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_async_initable_new_valist_async (GType object_type, const char* first_property_name,  var_args, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// IGNORE; not introspectable, var_args type  not supported

// void g_async_initable_newv_async (GType object_type, guint n_parameters, GParameter* parameters, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_async_initable_newv_async (GType object_type, guint n_parameters,  parameters, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// IGNORE; deprecated

// void g_async_initable_init_async (GAsyncInitable* initable, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_async_initable_init_async (::GAsyncInitable* initable, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::AsyncInitableBase::init_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GAsyncInitable* initable, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_async_initable_init_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GAsyncInitable*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::AsyncInitableBase::init_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GAsyncInitable* initable, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_async_initable_init_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GAsyncInitable*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_async_initable_init_finish (GAsyncInitable* initable, GAsyncResult* res, GError ** error);
// gboolean g_async_initable_init_finish (::GAsyncInitable* initable, ::GAsyncResult* res, GError ** error);
bool base::AsyncInitableBase::init_finish (Gio::AsyncResult res)
{
  typedef gboolean (*call_wrap_t) (::GAsyncInitable* initable, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_async_initable_init_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAsyncInitable*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::AsyncInitableBase::init_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GAsyncInitable* initable, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_async_initable_init_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAsyncInitable*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// GObject* g_async_initable_new_finish (GAsyncInitable* initable, GAsyncResult* res, GError ** error);
// ::GObject* g_async_initable_new_finish (::GAsyncInitable* initable, ::GAsyncResult* res, GError ** error);
GObject::Object base::AsyncInitableBase::new_finish (Gio::AsyncResult res)
{
  typedef ::GObject* (*call_wrap_t) (::GAsyncInitable* initable, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_async_initable_new_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAsyncInitable*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GObject::Object base::AsyncInitableBase::new_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GObject* (*call_wrap_t) (::GAsyncInitable* initable, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_async_initable_new_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAsyncInitable*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/asyncinitable_extra_def_impl.hpp>)
#include <gio/asyncinitable_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/asyncinitable_extra_impl.hpp>)
#include <gio/asyncinitable_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void AsyncInitableIfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GAsyncInitableIface *methods = (::GAsyncInitableIface *) interface_struct;
  (void) methods;

}

// void AsyncInitable::init_async (GAsyncInitable* initable, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void AsyncInitable::init_async (::GAsyncInitable* initable, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gboolean AsyncInitable::init_finish (GAsyncInitable* initable, GAsyncResult* res, GError ** error);
// gboolean AsyncInitable::init_finish (::GAsyncInitable* initable, ::GAsyncResult* res, GError ** error);
// SKIP; callee GError not supported

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
