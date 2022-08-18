// AUTO-GENERATED

#ifndef _GI_GIO_LOADABLEICON_IMPL_HPP_
#define _GI_GIO_LOADABLEICON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GInputStream* g_loadable_icon_load (GLoadableIcon* icon, int size, char** type, GCancellable* cancellable, GError ** error);
// ::GInputStream* g_loadable_icon_load (::GLoadableIcon* icon, gint size, char** type, ::GCancellable* cancellable, GError ** error);
Gio::InputStream base::LoadableIconBase::load (gint size, std::string * type, Gio::Cancellable cancellable)
{
  typedef ::GInputStream* (*call_wrap_t) (::GLoadableIcon* icon, gint size, char** type, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_loadable_icon_load;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  char* type_o {};
  auto size_to_c = size;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GLoadableIcon*) (gobj_()), (gint) (size_to_c), (char**) (type ? &type_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (type) *type = gi::wrap (type_o, gi::transfer_full, gi::direction_out);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::InputStream base::LoadableIconBase::load (gint size, std::string * type)
{
  typedef ::GInputStream* (*call_wrap_t) (::GLoadableIcon* icon, gint size, char** type, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_loadable_icon_load;
  auto cancellable_to_c = nullptr;
  char* type_o {};
  auto size_to_c = size;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GLoadableIcon*) (gobj_()), (gint) (size_to_c), (char**) (type ? &type_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (type) *type = gi::wrap (type_o, gi::transfer_full, gi::direction_out);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::InputStream base::LoadableIconBase::load (gint size, std::string * type, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GInputStream* (*call_wrap_t) (::GLoadableIcon* icon, gint size, char** type, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_loadable_icon_load;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  char* type_o {};
  auto size_to_c = size;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GLoadableIcon*) (gobj_()), (gint) (size_to_c), (char**) (type ? &type_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (type) *type = gi::wrap (type_o, gi::transfer_full, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::InputStream base::LoadableIconBase::load (gint size, std::string * type, GLib::Error * _error) noexcept
{
  typedef ::GInputStream* (*call_wrap_t) (::GLoadableIcon* icon, gint size, char** type, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_loadable_icon_load;
  auto cancellable_to_c = nullptr;
  char* type_o {};
  auto size_to_c = size;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GLoadableIcon*) (gobj_()), (gint) (size_to_c), (char**) (type ? &type_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (type) *type = gi::wrap (type_o, gi::transfer_full, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::tuple<Gio::InputStream, std::string> base::LoadableIconBase::load (gint size, Gio::Cancellable cancellable)
{
  typedef ::GInputStream* (*call_wrap_t) (::GLoadableIcon* icon, gint size, char** type, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_loadable_icon_load;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  char* type_o {};
  auto size_to_c = size;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GLoadableIcon*) (gobj_()), (gint) (size_to_c), (char**) (&type_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (type_o, gi::transfer_full, gi::direction_out));
}
std::tuple<Gio::InputStream, std::string> base::LoadableIconBase::load (gint size)
{
  typedef ::GInputStream* (*call_wrap_t) (::GLoadableIcon* icon, gint size, char** type, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_loadable_icon_load;
  auto cancellable_to_c = nullptr;
  char* type_o {};
  auto size_to_c = size;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GLoadableIcon*) (gobj_()), (gint) (size_to_c), (char**) (&type_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (type_o, gi::transfer_full, gi::direction_out));
}
std::tuple<Gio::InputStream, std::string> base::LoadableIconBase::load (gint size, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GInputStream* (*call_wrap_t) (::GLoadableIcon* icon, gint size, char** type, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_loadable_icon_load;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  char* type_o {};
  auto size_to_c = size;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GLoadableIcon*) (gobj_()), (gint) (size_to_c), (char**) (&type_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (type_o, gi::transfer_full, gi::direction_out));
}
std::tuple<Gio::InputStream, std::string> base::LoadableIconBase::load (gint size, GLib::Error * _error) noexcept
{
  typedef ::GInputStream* (*call_wrap_t) (::GLoadableIcon* icon, gint size, char** type, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_loadable_icon_load;
  auto cancellable_to_c = nullptr;
  char* type_o {};
  auto size_to_c = size;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GLoadableIcon*) (gobj_()), (gint) (size_to_c), (char**) (&type_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (type_o, gi::transfer_full, gi::direction_out));
}

// void g_loadable_icon_load_async (GLoadableIcon* icon, int size, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_loadable_icon_load_async (::GLoadableIcon* icon, gint size, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::LoadableIconBase::load_async (gint size, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GLoadableIcon* icon, gint size, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_loadable_icon_load_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto size_to_c = size;
  call_wrap_v ((::GLoadableIcon*) (gobj_()), (gint) (size_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::LoadableIconBase::load_async (gint size, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GLoadableIcon* icon, gint size, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_loadable_icon_load_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto size_to_c = size;
  call_wrap_v ((::GLoadableIcon*) (gobj_()), (gint) (size_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GInputStream* g_loadable_icon_load_finish (GLoadableIcon* icon, GAsyncResult* res, char** type, GError ** error);
// ::GInputStream* g_loadable_icon_load_finish (::GLoadableIcon* icon, ::GAsyncResult* res, char** type, GError ** error);
Gio::InputStream base::LoadableIconBase::load_finish (Gio::AsyncResult res, std::string * type)
{
  typedef ::GInputStream* (*call_wrap_t) (::GLoadableIcon* icon, ::GAsyncResult* res, char** type, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_loadable_icon_load_finish;
  char* type_o {};
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GLoadableIcon*) (gobj_()), (::GAsyncResult*) (res_to_c), (char**) (type ? &type_o : nullptr), &error);
  if (type) *type = gi::wrap (type_o, gi::transfer_full, gi::direction_out);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::InputStream base::LoadableIconBase::load_finish (Gio::AsyncResult res, std::string * type, GLib::Error * _error) noexcept
{
  typedef ::GInputStream* (*call_wrap_t) (::GLoadableIcon* icon, ::GAsyncResult* res, char** type, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_loadable_icon_load_finish;
  char* type_o {};
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GLoadableIcon*) (gobj_()), (::GAsyncResult*) (res_to_c), (char**) (type ? &type_o : nullptr), _error ? &_error_o : nullptr);
  if (type) *type = gi::wrap (type_o, gi::transfer_full, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::tuple<Gio::InputStream, std::string> base::LoadableIconBase::load_finish (Gio::AsyncResult res)
{
  typedef ::GInputStream* (*call_wrap_t) (::GLoadableIcon* icon, ::GAsyncResult* res, char** type, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_loadable_icon_load_finish;
  char* type_o {};
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GLoadableIcon*) (gobj_()), (::GAsyncResult*) (res_to_c), (char**) (&type_o), &error);
  gi::check_error (error);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (type_o, gi::transfer_full, gi::direction_out));
}
std::tuple<Gio::InputStream, std::string> base::LoadableIconBase::load_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GInputStream* (*call_wrap_t) (::GLoadableIcon* icon, ::GAsyncResult* res, char** type, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_loadable_icon_load_finish;
  char* type_o {};
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GLoadableIcon*) (gobj_()), (::GAsyncResult*) (res_to_c), (char**) (&type_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (type_o, gi::transfer_full, gi::direction_out));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/loadableicon_extra_def_impl.hpp>)
#include <gio/loadableicon_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/loadableicon_extra_impl.hpp>)
#include <gio/loadableicon_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void LoadableIconIfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GLoadableIconIface *methods = (::GLoadableIconIface *) interface_struct;
  (void) methods;

}

// GInputStream* LoadableIcon::load (GLoadableIcon* icon, int size, char** type, GCancellable* cancellable, GError ** error);
// ::GInputStream* LoadableIcon::load (::GLoadableIcon* icon, gint size, char** type, ::GCancellable* cancellable, GError ** error);
// SKIP; virtual-method out parameter not supported, callee GError not supported

// void LoadableIcon::load_async (GLoadableIcon* icon, int size, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void LoadableIcon::load_async (::GLoadableIcon* icon, gint size, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GInputStream* LoadableIcon::load_finish (GLoadableIcon* icon, GAsyncResult* res, char** type, GError ** error);
// ::GInputStream* LoadableIcon::load_finish (::GLoadableIcon* icon, ::GAsyncResult* res, char** type, GError ** error);
// SKIP; virtual-method out parameter not supported, callee GError not supported

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
