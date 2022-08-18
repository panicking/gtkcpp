// AUTO-GENERATED

#ifndef _GI_GIO_PERMISSION_IMPL_HPP_
#define _GI_GIO_PERMISSION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// gboolean g_permission_acquire (GPermission* permission, GCancellable* cancellable, GError ** error);
// gboolean g_permission_acquire (::GPermission* permission, ::GCancellable* cancellable, GError ** error);
bool base::PermissionBase::acquire (Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GPermission* permission, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_permission_acquire;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GPermission*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::PermissionBase::acquire ()
{
  typedef gboolean (*call_wrap_t) (::GPermission* permission, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_permission_acquire;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GPermission*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::PermissionBase::acquire (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GPermission* permission, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_permission_acquire;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GPermission*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::PermissionBase::acquire (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GPermission* permission, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_permission_acquire;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GPermission*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_permission_acquire_async (GPermission* permission, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_permission_acquire_async (::GPermission* permission, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::PermissionBase::acquire_async (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GPermission* permission, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_permission_acquire_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GPermission*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::PermissionBase::acquire_async (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GPermission* permission, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_permission_acquire_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::GPermission*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_permission_acquire_finish (GPermission* permission, GAsyncResult* result, GError ** error);
// gboolean g_permission_acquire_finish (::GPermission* permission, ::GAsyncResult* result, GError ** error);
bool base::PermissionBase::acquire_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GPermission* permission, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_permission_acquire_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GPermission*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::PermissionBase::acquire_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GPermission* permission, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_permission_acquire_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GPermission*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_permission_get_allowed (GPermission* permission);
// gboolean g_permission_get_allowed (::GPermission* permission);
bool base::PermissionBase::get_allowed () noexcept
{
  typedef gboolean (*call_wrap_t) (::GPermission* permission);
  call_wrap_t call_wrap_v = (call_wrap_t) g_permission_get_allowed;
  auto _temp_ret = call_wrap_v ((::GPermission*) (gobj_()));
  return _temp_ret;
}

// gboolean g_permission_get_can_acquire (GPermission* permission);
// gboolean g_permission_get_can_acquire (::GPermission* permission);
bool base::PermissionBase::get_can_acquire () noexcept
{
  typedef gboolean (*call_wrap_t) (::GPermission* permission);
  call_wrap_t call_wrap_v = (call_wrap_t) g_permission_get_can_acquire;
  auto _temp_ret = call_wrap_v ((::GPermission*) (gobj_()));
  return _temp_ret;
}

// gboolean g_permission_get_can_release (GPermission* permission);
// gboolean g_permission_get_can_release (::GPermission* permission);
bool base::PermissionBase::get_can_release () noexcept
{
  typedef gboolean (*call_wrap_t) (::GPermission* permission);
  call_wrap_t call_wrap_v = (call_wrap_t) g_permission_get_can_release;
  auto _temp_ret = call_wrap_v ((::GPermission*) (gobj_()));
  return _temp_ret;
}

// void g_permission_impl_update (GPermission* permission, gboolean allowed, gboolean can_acquire, gboolean can_release);
// void g_permission_impl_update (::GPermission* permission, gboolean allowed, gboolean can_acquire, gboolean can_release);
void base::PermissionBase::impl_update (gboolean allowed, gboolean can_acquire, gboolean can_release) noexcept
{
  typedef void (*call_wrap_t) (::GPermission* permission, gboolean allowed, gboolean can_acquire, gboolean can_release);
  call_wrap_t call_wrap_v = (call_wrap_t) g_permission_impl_update;
  auto can_release_to_c = can_release;
  auto can_acquire_to_c = can_acquire;
  auto allowed_to_c = allowed;
  call_wrap_v ((::GPermission*) (gobj_()), (gboolean) (allowed_to_c), (gboolean) (can_acquire_to_c), (gboolean) (can_release_to_c));
}

// gboolean g_permission_release (GPermission* permission, GCancellable* cancellable, GError ** error);
// gboolean g_permission_release (::GPermission* permission, ::GCancellable* cancellable, GError ** error);
bool base::PermissionBase::release (Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GPermission* permission, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_permission_release;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GPermission*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::PermissionBase::release ()
{
  typedef gboolean (*call_wrap_t) (::GPermission* permission, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_permission_release;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GPermission*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::PermissionBase::release (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GPermission* permission, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_permission_release;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GPermission*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::PermissionBase::release (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GPermission* permission, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_permission_release;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GPermission*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_permission_release_async (GPermission* permission, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_permission_release_async (::GPermission* permission, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::PermissionBase::release_async (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GPermission* permission, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_permission_release_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GPermission*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::PermissionBase::release_async (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GPermission* permission, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_permission_release_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::GPermission*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_permission_release_finish (GPermission* permission, GAsyncResult* result, GError ** error);
// gboolean g_permission_release_finish (::GPermission* permission, ::GAsyncResult* result, GError ** error);
bool base::PermissionBase::release_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GPermission* permission, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_permission_release_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GPermission*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::PermissionBase::release_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GPermission* permission, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_permission_release_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GPermission*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/permission_extra_def_impl.hpp>)
#include <gio/permission_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/permission_extra_impl.hpp>)
#include <gio/permission_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void PermissionClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GPermissionClass *methods = (::GPermissionClass *) class_struct;
  (void) methods;

}

// gboolean Permission::acquire (GPermission* permission, GCancellable* cancellable, GError ** error);
// gboolean Permission::acquire (::GPermission* permission, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void Permission::acquire_async (GPermission* permission, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void Permission::acquire_async (::GPermission* permission, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gboolean Permission::acquire_finish (GPermission* permission, GAsyncResult* result, GError ** error);
// gboolean Permission::acquire_finish (::GPermission* permission, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// gboolean Permission::release (GPermission* permission, GCancellable* cancellable, GError ** error);
// gboolean Permission::release (::GPermission* permission, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void Permission::release_async (GPermission* permission, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void Permission::release_async (::GPermission* permission, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gboolean Permission::release_finish (GPermission* permission, GAsyncResult* result, GError ** error);
// gboolean Permission::release_finish (::GPermission* permission, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
