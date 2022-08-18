// AUTO-GENERATED

#ifndef _GI_GIO_DRIVE_IMPL_HPP_
#define _GI_GIO_DRIVE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// gboolean g_drive_can_eject (GDrive* drive);
// gboolean g_drive_can_eject (::GDrive* drive);
bool base::DriveBase::can_eject () noexcept
{
  typedef gboolean (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) g_drive_can_eject;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return _temp_ret;
}

// gboolean g_drive_can_poll_for_media (GDrive* drive);
// gboolean g_drive_can_poll_for_media (::GDrive* drive);
bool base::DriveBase::can_poll_for_media () noexcept
{
  typedef gboolean (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) g_drive_can_poll_for_media;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return _temp_ret;
}

// gboolean g_drive_can_start (GDrive* drive);
// gboolean g_drive_can_start (::GDrive* drive);
bool base::DriveBase::can_start () noexcept
{
  typedef gboolean (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) g_drive_can_start;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return _temp_ret;
}

// gboolean g_drive_can_start_degraded (GDrive* drive);
// gboolean g_drive_can_start_degraded (::GDrive* drive);
bool base::DriveBase::can_start_degraded () noexcept
{
  typedef gboolean (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) g_drive_can_start_degraded;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return _temp_ret;
}

// gboolean g_drive_can_stop (GDrive* drive);
// gboolean g_drive_can_stop (::GDrive* drive);
bool base::DriveBase::can_stop () noexcept
{
  typedef gboolean (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) g_drive_can_stop;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return _temp_ret;
}

// void g_drive_eject (GDrive* drive, GMountUnmountFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_drive_eject (::GDrive* drive, ::GMountUnmountFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// IGNORE; deprecated

// gboolean g_drive_eject_finish (GDrive* drive, GAsyncResult* result, GError ** error);
// gboolean g_drive_eject_finish (::GDrive* drive, ::GAsyncResult* result, GError ** error);
// IGNORE; deprecated

// void g_drive_eject_with_operation (GDrive* drive, GMountUnmountFlags flags, GMountOperation* mount_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_drive_eject_with_operation (::GDrive* drive, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::DriveBase::eject_with_operation (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDrive* drive, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_drive_eject_with_operation;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto mount_operation_to_c = gi::unwrap (mount_operation, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GDrive*) (gobj_()), (::GMountUnmountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DriveBase::eject_with_operation (Gio::MountUnmountFlags flags, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDrive* drive, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_drive_eject_with_operation;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto mount_operation_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GDrive*) (gobj_()), (::GMountUnmountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_drive_eject_with_operation_finish (GDrive* drive, GAsyncResult* result, GError ** error);
// gboolean g_drive_eject_with_operation_finish (::GDrive* drive, ::GAsyncResult* result, GError ** error);
bool base::DriveBase::eject_with_operation_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GDrive* drive, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_drive_eject_with_operation_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DriveBase::eject_with_operation_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDrive* drive, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_drive_eject_with_operation_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// char** g_drive_enumerate_identifiers (GDrive* drive);
// char** g_drive_enumerate_identifiers (::GDrive* drive);
std::vector<std::string> base::DriveBase::enumerate_identifiers () noexcept
{
  typedef char** (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) g_drive_enumerate_identifiers;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// GIcon* g_drive_get_icon (GDrive* drive);
// ::GIcon* g_drive_get_icon (::GDrive* drive);
Gio::Icon base::DriveBase::get_icon () noexcept
{
  typedef ::GIcon* (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) g_drive_get_icon;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char* g_drive_get_identifier (GDrive* drive, const char* kind);
// char* g_drive_get_identifier (::GDrive* drive, const char* kind);
std::string base::DriveBase::get_identifier (const std::string & kind) noexcept
{
  typedef char* (*call_wrap_t) (::GDrive* drive, const char* kind);
  call_wrap_t call_wrap_v = (call_wrap_t) g_drive_get_identifier;
  auto kind_to_c = gi::unwrap (kind, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()), (const char*) (kind_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char* g_drive_get_name (GDrive* drive);
// char* g_drive_get_name (::GDrive* drive);
std::string base::DriveBase::get_name () noexcept
{
  typedef char* (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) g_drive_get_name;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const gchar* g_drive_get_sort_key (GDrive* drive);
// const char* g_drive_get_sort_key (::GDrive* drive);
std::string base::DriveBase::get_sort_key () noexcept
{
  typedef const char* (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) g_drive_get_sort_key;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GDriveStartStopType g_drive_get_start_stop_type (GDrive* drive);
// ::GDriveStartStopType g_drive_get_start_stop_type (::GDrive* drive);
Gio::DriveStartStopType base::DriveBase::get_start_stop_type () noexcept
{
  typedef ::GDriveStartStopType (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) g_drive_get_start_stop_type;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GIcon* g_drive_get_symbolic_icon (GDrive* drive);
// ::GIcon* g_drive_get_symbolic_icon (::GDrive* drive);
Gio::Icon base::DriveBase::get_symbolic_icon () noexcept
{
  typedef ::GIcon* (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) g_drive_get_symbolic_icon;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GList* g_drive_get_volumes (GDrive* drive);
// ::GList* g_drive_get_volumes (::GDrive* drive);
std::vector<Gio::Volume> base::DriveBase::get_volumes () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) g_drive_get_volumes;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return gi::detail::wrap_list<Gio::Volume> (_temp_ret, gi::transfer_full);
}

// gboolean g_drive_has_media (GDrive* drive);
// gboolean g_drive_has_media (::GDrive* drive);
bool base::DriveBase::has_media () noexcept
{
  typedef gboolean (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) g_drive_has_media;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return _temp_ret;
}

// gboolean g_drive_has_volumes (GDrive* drive);
// gboolean g_drive_has_volumes (::GDrive* drive);
bool base::DriveBase::has_volumes () noexcept
{
  typedef gboolean (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) g_drive_has_volumes;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return _temp_ret;
}

// gboolean g_drive_is_media_check_automatic (GDrive* drive);
// gboolean g_drive_is_media_check_automatic (::GDrive* drive);
bool base::DriveBase::is_media_check_automatic () noexcept
{
  typedef gboolean (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) g_drive_is_media_check_automatic;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return _temp_ret;
}

// gboolean g_drive_is_media_removable (GDrive* drive);
// gboolean g_drive_is_media_removable (::GDrive* drive);
bool base::DriveBase::is_media_removable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) g_drive_is_media_removable;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return _temp_ret;
}

// gboolean g_drive_is_removable (GDrive* drive);
// gboolean g_drive_is_removable (::GDrive* drive);
bool base::DriveBase::is_removable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) g_drive_is_removable;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return _temp_ret;
}

// void g_drive_poll_for_media (GDrive* drive, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_drive_poll_for_media (::GDrive* drive, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::DriveBase::poll_for_media (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDrive* drive, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_drive_poll_for_media;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDrive*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DriveBase::poll_for_media (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDrive* drive, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_drive_poll_for_media;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::GDrive*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_drive_poll_for_media_finish (GDrive* drive, GAsyncResult* result, GError ** error);
// gboolean g_drive_poll_for_media_finish (::GDrive* drive, ::GAsyncResult* result, GError ** error);
bool base::DriveBase::poll_for_media_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GDrive* drive, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_drive_poll_for_media_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DriveBase::poll_for_media_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDrive* drive, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_drive_poll_for_media_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_drive_start (GDrive* drive, GDriveStartFlags flags, GMountOperation* mount_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_drive_start (::GDrive* drive, ::GDriveStartFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::DriveBase::start (Gio::DriveStartFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDrive* drive, ::GDriveStartFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_drive_start;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto mount_operation_to_c = gi::unwrap (mount_operation, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GDrive*) (gobj_()), (::GDriveStartFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DriveBase::start (Gio::DriveStartFlags flags, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDrive* drive, ::GDriveStartFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_drive_start;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto mount_operation_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GDrive*) (gobj_()), (::GDriveStartFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_drive_start_finish (GDrive* drive, GAsyncResult* result, GError ** error);
// gboolean g_drive_start_finish (::GDrive* drive, ::GAsyncResult* result, GError ** error);
bool base::DriveBase::start_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GDrive* drive, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_drive_start_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DriveBase::start_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDrive* drive, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_drive_start_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_drive_stop (GDrive* drive, GMountUnmountFlags flags, GMountOperation* mount_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_drive_stop (::GDrive* drive, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::DriveBase::stop (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDrive* drive, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_drive_stop;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto mount_operation_to_c = gi::unwrap (mount_operation, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GDrive*) (gobj_()), (::GMountUnmountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DriveBase::stop (Gio::MountUnmountFlags flags, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDrive* drive, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_drive_stop;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto mount_operation_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GDrive*) (gobj_()), (::GMountUnmountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_drive_stop_finish (GDrive* drive, GAsyncResult* result, GError ** error);
// gboolean g_drive_stop_finish (::GDrive* drive, ::GAsyncResult* result, GError ** error);
bool base::DriveBase::stop_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GDrive* drive, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_drive_stop_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DriveBase::stop_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDrive* drive, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_drive_stop_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}






} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/drive_extra_def_impl.hpp>)
#include <gio/drive_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/drive_extra_impl.hpp>)
#include <gio/drive_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void DriveIfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GDriveIface *methods = (::GDriveIface *) interface_struct;
  (void) methods;

  methods->can_eject = (decltype (methods->can_eject)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::can_eject_>;
  methods->can_poll_for_media = (decltype (methods->can_poll_for_media)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::can_poll_for_media_>;
  methods->can_start = (decltype (methods->can_start)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::can_start_>;
  methods->can_start_degraded = (decltype (methods->can_start_degraded)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::can_start_degraded_>;
  methods->can_stop = (decltype (methods->can_stop)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::can_stop_>;
  methods->changed = (decltype (methods->changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::changed_>;
  methods->disconnected = (decltype (methods->disconnected)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::disconnected_>;
  methods->eject_button = (decltype (methods->eject_button)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::eject_button_>;
  methods->get_icon = (decltype (methods->get_icon)) detail::method_wrapper<self, Gio::Icon (*) (), gi::transfer_full_t>::wrapper<&self::get_icon_>;
  methods->get_identifier = (decltype (methods->get_identifier)) detail::method_wrapper<self, std::string (*) (const std::string & kind), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::get_identifier_>;
  methods->get_name = (decltype (methods->get_name)) detail::method_wrapper<self, std::string (*) (), gi::transfer_full_t>::wrapper<&self::get_name_>;
  methods->get_start_stop_type = (decltype (methods->get_start_stop_type)) detail::method_wrapper<self, Gio::DriveStartStopType (*) (), gi::transfer_none_t>::wrapper<&self::get_start_stop_type_>;
  methods->get_symbolic_icon = (decltype (methods->get_symbolic_icon)) detail::method_wrapper<self, Gio::Icon (*) (), gi::transfer_full_t>::wrapper<&self::get_symbolic_icon_>;
  methods->has_media = (decltype (methods->has_media)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::has_media_>;
  methods->has_volumes = (decltype (methods->has_volumes)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::has_volumes_>;
  methods->is_media_check_automatic = (decltype (methods->is_media_check_automatic)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::is_media_check_automatic_>;
  methods->is_media_removable = (decltype (methods->is_media_removable)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::is_media_removable_>;
  methods->is_removable = (decltype (methods->is_removable)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::is_removable_>;
  methods->stop_button = (decltype (methods->stop_button)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::stop_button_>;
}

// gboolean Drive::can_eject (GDrive* drive);
// gboolean Drive::can_eject (::GDrive* drive);
bool DriveIfaceClassImpl::can_eject_ () noexcept
{
  if (!get_struct_()->can_eject) return bool{};
  typedef gboolean (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->can_eject;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return _temp_ret;
}

// gboolean Drive::can_poll_for_media (GDrive* drive);
// gboolean Drive::can_poll_for_media (::GDrive* drive);
bool DriveIfaceClassImpl::can_poll_for_media_ () noexcept
{
  if (!get_struct_()->can_poll_for_media) return bool{};
  typedef gboolean (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->can_poll_for_media;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return _temp_ret;
}

// gboolean Drive::can_start (GDrive* drive);
// gboolean Drive::can_start (::GDrive* drive);
bool DriveIfaceClassImpl::can_start_ () noexcept
{
  if (!get_struct_()->can_start) return bool{};
  typedef gboolean (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->can_start;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return _temp_ret;
}

// gboolean Drive::can_start_degraded (GDrive* drive);
// gboolean Drive::can_start_degraded (::GDrive* drive);
bool DriveIfaceClassImpl::can_start_degraded_ () noexcept
{
  if (!get_struct_()->can_start_degraded) return bool{};
  typedef gboolean (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->can_start_degraded;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return _temp_ret;
}

// gboolean Drive::can_stop (GDrive* drive);
// gboolean Drive::can_stop (::GDrive* drive);
bool DriveIfaceClassImpl::can_stop_ () noexcept
{
  if (!get_struct_()->can_stop) return bool{};
  typedef gboolean (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->can_stop;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return _temp_ret;
}

// void Drive::changed (GDrive* drive);
// void Drive::changed (::GDrive* drive);
void DriveIfaceClassImpl::changed_ () noexcept
{
  if (!get_struct_()->changed) return ;
  typedef void (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->changed;
  call_wrap_v ((::GDrive*) (gobj_()));
}

// void Drive::disconnected (GDrive* drive);
// void Drive::disconnected (::GDrive* drive);
void DriveIfaceClassImpl::disconnected_ () noexcept
{
  if (!get_struct_()->disconnected) return ;
  typedef void (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->disconnected;
  call_wrap_v ((::GDrive*) (gobj_()));
}

// void Drive::eject (GDrive* drive, GMountUnmountFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void Drive::eject (::GDrive* drive, ::GMountUnmountFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// IGNORE; deprecated, virtual-method callback parameter not supported

// void Drive::eject_button (GDrive* drive);
// void Drive::eject_button (::GDrive* drive);
void DriveIfaceClassImpl::eject_button_ () noexcept
{
  if (!get_struct_()->eject_button) return ;
  typedef void (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->eject_button;
  call_wrap_v ((::GDrive*) (gobj_()));
}

// gboolean Drive::eject_finish (GDrive* drive, GAsyncResult* result, GError ** error);
// gboolean Drive::eject_finish (::GDrive* drive, ::GAsyncResult* result, GError ** error);
// IGNORE; deprecated, callee GError not supported

// void Drive::eject_with_operation (GDrive* drive, GMountUnmountFlags flags, GMountOperation* mount_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void Drive::eject_with_operation (::GDrive* drive, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gboolean Drive::eject_with_operation_finish (GDrive* drive, GAsyncResult* result, GError ** error);
// gboolean Drive::eject_with_operation_finish (::GDrive* drive, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// char** Drive::enumerate_identifiers (GDrive* drive);
// char** Drive::enumerate_identifiers (::GDrive* drive);
// SKIP; container return not supported

// GIcon* Drive::get_icon (GDrive* drive);
// ::GIcon* Drive::get_icon (::GDrive* drive);
Gio::Icon DriveIfaceClassImpl::get_icon_ () noexcept
{
  if (!get_struct_()->get_icon) return Gio::Icon{};
  typedef ::GIcon* (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_icon;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char* Drive::get_identifier (GDrive* drive, const char* kind);
// char* Drive::get_identifier (::GDrive* drive, const char* kind);
std::string DriveIfaceClassImpl::get_identifier_ (const std::string & kind) noexcept
{
  if (!get_struct_()->get_identifier) return std::string{};
  typedef char* (*call_wrap_t) (::GDrive* drive, const char* kind);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_identifier;
  auto kind_to_c = gi::unwrap (kind, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()), (const char*) (kind_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char* Drive::get_name (GDrive* drive);
// char* Drive::get_name (::GDrive* drive);
std::string DriveIfaceClassImpl::get_name_ () noexcept
{
  if (!get_struct_()->get_name) return std::string{};
  typedef char* (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_name;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const gchar* Drive::get_sort_key (GDrive* drive);
// const char* Drive::get_sort_key (::GDrive* drive);
// SKIP; invalid callback return transfer none

// GDriveStartStopType Drive::get_start_stop_type (GDrive* drive);
// ::GDriveStartStopType Drive::get_start_stop_type (::GDrive* drive);
Gio::DriveStartStopType DriveIfaceClassImpl::get_start_stop_type_ () noexcept
{
  if (!get_struct_()->get_start_stop_type) return Gio::DriveStartStopType{};
  typedef ::GDriveStartStopType (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_start_stop_type;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GIcon* Drive::get_symbolic_icon (GDrive* drive);
// ::GIcon* Drive::get_symbolic_icon (::GDrive* drive);
Gio::Icon DriveIfaceClassImpl::get_symbolic_icon_ () noexcept
{
  if (!get_struct_()->get_symbolic_icon) return Gio::Icon{};
  typedef ::GIcon* (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_symbolic_icon;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GList* Drive::get_volumes (GDrive* drive);
// ::GList* Drive::get_volumes (::GDrive* drive);
// SKIP; container return not supported

// gboolean Drive::has_media (GDrive* drive);
// gboolean Drive::has_media (::GDrive* drive);
bool DriveIfaceClassImpl::has_media_ () noexcept
{
  if (!get_struct_()->has_media) return bool{};
  typedef gboolean (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->has_media;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return _temp_ret;
}

// gboolean Drive::has_volumes (GDrive* drive);
// gboolean Drive::has_volumes (::GDrive* drive);
bool DriveIfaceClassImpl::has_volumes_ () noexcept
{
  if (!get_struct_()->has_volumes) return bool{};
  typedef gboolean (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->has_volumes;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return _temp_ret;
}

// gboolean Drive::is_media_check_automatic (GDrive* drive);
// gboolean Drive::is_media_check_automatic (::GDrive* drive);
bool DriveIfaceClassImpl::is_media_check_automatic_ () noexcept
{
  if (!get_struct_()->is_media_check_automatic) return bool{};
  typedef gboolean (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->is_media_check_automatic;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return _temp_ret;
}

// gboolean Drive::is_media_removable (GDrive* drive);
// gboolean Drive::is_media_removable (::GDrive* drive);
bool DriveIfaceClassImpl::is_media_removable_ () noexcept
{
  if (!get_struct_()->is_media_removable) return bool{};
  typedef gboolean (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->is_media_removable;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return _temp_ret;
}

// gboolean Drive::is_removable (GDrive* drive);
// gboolean Drive::is_removable (::GDrive* drive);
bool DriveIfaceClassImpl::is_removable_ () noexcept
{
  if (!get_struct_()->is_removable) return bool{};
  typedef gboolean (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->is_removable;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return _temp_ret;
}

// void Drive::poll_for_media (GDrive* drive, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void Drive::poll_for_media (::GDrive* drive, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gboolean Drive::poll_for_media_finish (GDrive* drive, GAsyncResult* result, GError ** error);
// gboolean Drive::poll_for_media_finish (::GDrive* drive, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// void Drive::start (GDrive* drive, GDriveStartFlags flags, GMountOperation* mount_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void Drive::start (::GDrive* drive, ::GDriveStartFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gboolean Drive::start_finish (GDrive* drive, GAsyncResult* result, GError ** error);
// gboolean Drive::start_finish (::GDrive* drive, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// void Drive::stop (GDrive* drive, GMountUnmountFlags flags, GMountOperation* mount_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void Drive::stop (::GDrive* drive, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// void Drive::stop_button (GDrive* drive);
// void Drive::stop_button (::GDrive* drive);
void DriveIfaceClassImpl::stop_button_ () noexcept
{
  if (!get_struct_()->stop_button) return ;
  typedef void (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->stop_button;
  call_wrap_v ((::GDrive*) (gobj_()));
}

// gboolean Drive::stop_finish (GDrive* drive, GAsyncResult* result, GError ** error);
// gboolean Drive::stop_finish (::GDrive* drive, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
