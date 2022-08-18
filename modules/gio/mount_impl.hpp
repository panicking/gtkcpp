// AUTO-GENERATED

#ifndef _GI_GIO_MOUNT_IMPL_HPP_
#define _GI_GIO_MOUNT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// gboolean g_mount_can_eject (GMount* mount);
// gboolean g_mount_can_eject (::GMount* mount);
bool base::MountBase::can_eject () noexcept
{
  typedef gboolean (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mount_can_eject;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()));
  return _temp_ret;
}

// gboolean g_mount_can_unmount (GMount* mount);
// gboolean g_mount_can_unmount (::GMount* mount);
bool base::MountBase::can_unmount () noexcept
{
  typedef gboolean (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mount_can_unmount;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()));
  return _temp_ret;
}

// void g_mount_eject (GMount* mount, GMountUnmountFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_mount_eject (::GMount* mount, ::GMountUnmountFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// IGNORE; deprecated

// gboolean g_mount_eject_finish (GMount* mount, GAsyncResult* result, GError ** error);
// gboolean g_mount_eject_finish (::GMount* mount, ::GAsyncResult* result, GError ** error);
// IGNORE; deprecated

// void g_mount_eject_with_operation (GMount* mount, GMountUnmountFlags flags, GMountOperation* mount_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_mount_eject_with_operation (::GMount* mount, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::MountBase::eject_with_operation (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GMount* mount, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mount_eject_with_operation;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto mount_operation_to_c = gi::unwrap (mount_operation, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GMount*) (gobj_()), (::GMountUnmountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::MountBase::eject_with_operation (Gio::MountUnmountFlags flags, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GMount* mount, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mount_eject_with_operation;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto mount_operation_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GMount*) (gobj_()), (::GMountUnmountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_mount_eject_with_operation_finish (GMount* mount, GAsyncResult* result, GError ** error);
// gboolean g_mount_eject_with_operation_finish (::GMount* mount, ::GAsyncResult* result, GError ** error);
bool base::MountBase::eject_with_operation_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GMount* mount, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mount_eject_with_operation_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::MountBase::eject_with_operation_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GMount* mount, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mount_eject_with_operation_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// GFile* g_mount_get_default_location (GMount* mount);
// ::GFile* g_mount_get_default_location (::GMount* mount);
Gio::File base::MountBase::get_default_location () noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mount_get_default_location;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GDrive* g_mount_get_drive (GMount* mount);
// ::GDrive* g_mount_get_drive (::GMount* mount);
Gio::Drive base::MountBase::get_drive () noexcept
{
  typedef ::GDrive* (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mount_get_drive;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GIcon* g_mount_get_icon (GMount* mount);
// ::GIcon* g_mount_get_icon (::GMount* mount);
Gio::Icon base::MountBase::get_icon () noexcept
{
  typedef ::GIcon* (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mount_get_icon;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char* g_mount_get_name (GMount* mount);
// char* g_mount_get_name (::GMount* mount);
std::string base::MountBase::get_name () noexcept
{
  typedef char* (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mount_get_name;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GFile* g_mount_get_root (GMount* mount);
// ::GFile* g_mount_get_root (::GMount* mount);
Gio::File base::MountBase::get_root () noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mount_get_root;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const gchar* g_mount_get_sort_key (GMount* mount);
// const char* g_mount_get_sort_key (::GMount* mount);
std::string base::MountBase::get_sort_key () noexcept
{
  typedef const char* (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mount_get_sort_key;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GIcon* g_mount_get_symbolic_icon (GMount* mount);
// ::GIcon* g_mount_get_symbolic_icon (::GMount* mount);
Gio::Icon base::MountBase::get_symbolic_icon () noexcept
{
  typedef ::GIcon* (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mount_get_symbolic_icon;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char* g_mount_get_uuid (GMount* mount);
// char* g_mount_get_uuid (::GMount* mount);
std::string base::MountBase::get_uuid () noexcept
{
  typedef char* (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mount_get_uuid;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GVolume* g_mount_get_volume (GMount* mount);
// ::GVolume* g_mount_get_volume (::GMount* mount);
Gio::Volume base::MountBase::get_volume () noexcept
{
  typedef ::GVolume* (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mount_get_volume;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_mount_guess_content_type (GMount* mount, gboolean force_rescan, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_mount_guess_content_type (::GMount* mount, gboolean force_rescan, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::MountBase::guess_content_type (gboolean force_rescan, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GMount* mount, gboolean force_rescan, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mount_guess_content_type;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto force_rescan_to_c = force_rescan;
  call_wrap_v ((::GMount*) (gobj_()), (gboolean) (force_rescan_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::MountBase::guess_content_type (gboolean force_rescan, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GMount* mount, gboolean force_rescan, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mount_guess_content_type;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto force_rescan_to_c = force_rescan;
  call_wrap_v ((::GMount*) (gobj_()), (gboolean) (force_rescan_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gchar** g_mount_guess_content_type_finish (GMount* mount, GAsyncResult* result, GError ** error);
// char** g_mount_guess_content_type_finish (::GMount* mount, ::GAsyncResult* result, GError ** error);
std::vector<std::string> base::MountBase::guess_content_type_finish (Gio::AsyncResult result)
{
  typedef char** (*call_wrap_t) (::GMount* mount, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mount_guess_content_type_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}
std::vector<std::string> base::MountBase::guess_content_type_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef char** (*call_wrap_t) (::GMount* mount, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mount_guess_content_type_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// gchar** g_mount_guess_content_type_sync (GMount* mount, gboolean force_rescan, GCancellable* cancellable, GError ** error);
// char** g_mount_guess_content_type_sync (::GMount* mount, gboolean force_rescan, ::GCancellable* cancellable, GError ** error);
std::vector<std::string> base::MountBase::guess_content_type_sync (gboolean force_rescan, Gio::Cancellable cancellable)
{
  typedef char** (*call_wrap_t) (::GMount* mount, gboolean force_rescan, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mount_guess_content_type_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto force_rescan_to_c = force_rescan;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()), (gboolean) (force_rescan_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}
std::vector<std::string> base::MountBase::guess_content_type_sync (gboolean force_rescan)
{
  typedef char** (*call_wrap_t) (::GMount* mount, gboolean force_rescan, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mount_guess_content_type_sync;
  auto cancellable_to_c = nullptr;
  auto force_rescan_to_c = force_rescan;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()), (gboolean) (force_rescan_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}
std::vector<std::string> base::MountBase::guess_content_type_sync (gboolean force_rescan, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef char** (*call_wrap_t) (::GMount* mount, gboolean force_rescan, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mount_guess_content_type_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto force_rescan_to_c = force_rescan;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()), (gboolean) (force_rescan_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}
std::vector<std::string> base::MountBase::guess_content_type_sync (gboolean force_rescan, GLib::Error * _error) noexcept
{
  typedef char** (*call_wrap_t) (::GMount* mount, gboolean force_rescan, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mount_guess_content_type_sync;
  auto cancellable_to_c = nullptr;
  auto force_rescan_to_c = force_rescan;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()), (gboolean) (force_rescan_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// gboolean g_mount_is_shadowed (GMount* mount);
// gboolean g_mount_is_shadowed (::GMount* mount);
bool base::MountBase::is_shadowed () noexcept
{
  typedef gboolean (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mount_is_shadowed;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()));
  return _temp_ret;
}

// void g_mount_remount (GMount* mount, GMountMountFlags flags, GMountOperation* mount_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_mount_remount (::GMount* mount, ::GMountMountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::MountBase::remount (Gio::MountMountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GMount* mount, ::GMountMountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mount_remount;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto mount_operation_to_c = gi::unwrap (mount_operation, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GMount*) (gobj_()), (::GMountMountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::MountBase::remount (Gio::MountMountFlags flags, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GMount* mount, ::GMountMountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mount_remount;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto mount_operation_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GMount*) (gobj_()), (::GMountMountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_mount_remount_finish (GMount* mount, GAsyncResult* result, GError ** error);
// gboolean g_mount_remount_finish (::GMount* mount, ::GAsyncResult* result, GError ** error);
bool base::MountBase::remount_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GMount* mount, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mount_remount_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::MountBase::remount_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GMount* mount, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mount_remount_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_mount_shadow (GMount* mount);
// void g_mount_shadow (::GMount* mount);
void base::MountBase::shadow () noexcept
{
  typedef void (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mount_shadow;
  call_wrap_v ((::GMount*) (gobj_()));
}

// void g_mount_unmount (GMount* mount, GMountUnmountFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_mount_unmount (::GMount* mount, ::GMountUnmountFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// IGNORE; deprecated

// gboolean g_mount_unmount_finish (GMount* mount, GAsyncResult* result, GError ** error);
// gboolean g_mount_unmount_finish (::GMount* mount, ::GAsyncResult* result, GError ** error);
// IGNORE; deprecated

// void g_mount_unmount_with_operation (GMount* mount, GMountUnmountFlags flags, GMountOperation* mount_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_mount_unmount_with_operation (::GMount* mount, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::MountBase::unmount_with_operation (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GMount* mount, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mount_unmount_with_operation;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto mount_operation_to_c = gi::unwrap (mount_operation, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GMount*) (gobj_()), (::GMountUnmountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::MountBase::unmount_with_operation (Gio::MountUnmountFlags flags, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GMount* mount, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mount_unmount_with_operation;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto mount_operation_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GMount*) (gobj_()), (::GMountUnmountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_mount_unmount_with_operation_finish (GMount* mount, GAsyncResult* result, GError ** error);
// gboolean g_mount_unmount_with_operation_finish (::GMount* mount, ::GAsyncResult* result, GError ** error);
bool base::MountBase::unmount_with_operation_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GMount* mount, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mount_unmount_with_operation_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::MountBase::unmount_with_operation_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GMount* mount, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mount_unmount_with_operation_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_mount_unshadow (GMount* mount);
// void g_mount_unshadow (::GMount* mount);
void base::MountBase::unshadow () noexcept
{
  typedef void (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mount_unshadow;
  call_wrap_v ((::GMount*) (gobj_()));
}





} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/mount_extra_def_impl.hpp>)
#include <gio/mount_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/mount_extra_impl.hpp>)
#include <gio/mount_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void MountIfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GMountIface *methods = (::GMountIface *) interface_struct;
  (void) methods;

  methods->can_eject = (decltype (methods->can_eject)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::can_eject_>;
  methods->can_unmount = (decltype (methods->can_unmount)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::can_unmount_>;
  methods->changed = (decltype (methods->changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::changed_>;
  methods->get_default_location = (decltype (methods->get_default_location)) detail::method_wrapper<self, Gio::File (*) (), gi::transfer_full_t>::wrapper<&self::get_default_location_>;
  methods->get_drive = (decltype (methods->get_drive)) detail::method_wrapper<self, Gio::Drive (*) (), gi::transfer_full_t>::wrapper<&self::get_drive_>;
  methods->get_icon = (decltype (methods->get_icon)) detail::method_wrapper<self, Gio::Icon (*) (), gi::transfer_full_t>::wrapper<&self::get_icon_>;
  methods->get_name = (decltype (methods->get_name)) detail::method_wrapper<self, std::string (*) (), gi::transfer_full_t>::wrapper<&self::get_name_>;
  methods->get_root = (decltype (methods->get_root)) detail::method_wrapper<self, Gio::File (*) (), gi::transfer_full_t>::wrapper<&self::get_root_>;
  methods->get_symbolic_icon = (decltype (methods->get_symbolic_icon)) detail::method_wrapper<self, Gio::Icon (*) (), gi::transfer_full_t>::wrapper<&self::get_symbolic_icon_>;
  methods->get_uuid = (decltype (methods->get_uuid)) detail::method_wrapper<self, std::string (*) (), gi::transfer_full_t>::wrapper<&self::get_uuid_>;
  methods->get_volume = (decltype (methods->get_volume)) detail::method_wrapper<self, Gio::Volume (*) (), gi::transfer_full_t>::wrapper<&self::get_volume_>;
  methods->pre_unmount = (decltype (methods->pre_unmount)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::pre_unmount_>;
  methods->unmounted = (decltype (methods->unmounted)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::unmounted_>;
}

// gboolean Mount::can_eject (GMount* mount);
// gboolean Mount::can_eject (::GMount* mount);
bool MountIfaceClassImpl::can_eject_ () noexcept
{
  if (!get_struct_()->can_eject) return bool{};
  typedef gboolean (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->can_eject;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()));
  return _temp_ret;
}

// gboolean Mount::can_unmount (GMount* mount);
// gboolean Mount::can_unmount (::GMount* mount);
bool MountIfaceClassImpl::can_unmount_ () noexcept
{
  if (!get_struct_()->can_unmount) return bool{};
  typedef gboolean (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->can_unmount;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()));
  return _temp_ret;
}

// void Mount::changed (GMount* mount);
// void Mount::changed (::GMount* mount);
void MountIfaceClassImpl::changed_ () noexcept
{
  if (!get_struct_()->changed) return ;
  typedef void (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->changed;
  call_wrap_v ((::GMount*) (gobj_()));
}

// void Mount::eject (GMount* mount, GMountUnmountFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void Mount::eject (::GMount* mount, ::GMountUnmountFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// IGNORE; deprecated, virtual-method callback parameter not supported

// gboolean Mount::eject_finish (GMount* mount, GAsyncResult* result, GError ** error);
// gboolean Mount::eject_finish (::GMount* mount, ::GAsyncResult* result, GError ** error);
// IGNORE; deprecated, callee GError not supported

// void Mount::eject_with_operation (GMount* mount, GMountUnmountFlags flags, GMountOperation* mount_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void Mount::eject_with_operation (::GMount* mount, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gboolean Mount::eject_with_operation_finish (GMount* mount, GAsyncResult* result, GError ** error);
// gboolean Mount::eject_with_operation_finish (::GMount* mount, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// GFile* Mount::get_default_location (GMount* mount);
// ::GFile* Mount::get_default_location (::GMount* mount);
Gio::File MountIfaceClassImpl::get_default_location_ () noexcept
{
  if (!get_struct_()->get_default_location) return Gio::File{};
  typedef ::GFile* (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_default_location;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GDrive* Mount::get_drive (GMount* mount);
// ::GDrive* Mount::get_drive (::GMount* mount);
Gio::Drive MountIfaceClassImpl::get_drive_ () noexcept
{
  if (!get_struct_()->get_drive) return Gio::Drive{};
  typedef ::GDrive* (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_drive;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GIcon* Mount::get_icon (GMount* mount);
// ::GIcon* Mount::get_icon (::GMount* mount);
Gio::Icon MountIfaceClassImpl::get_icon_ () noexcept
{
  if (!get_struct_()->get_icon) return Gio::Icon{};
  typedef ::GIcon* (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_icon;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char* Mount::get_name (GMount* mount);
// char* Mount::get_name (::GMount* mount);
std::string MountIfaceClassImpl::get_name_ () noexcept
{
  if (!get_struct_()->get_name) return std::string{};
  typedef char* (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_name;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GFile* Mount::get_root (GMount* mount);
// ::GFile* Mount::get_root (::GMount* mount);
Gio::File MountIfaceClassImpl::get_root_ () noexcept
{
  if (!get_struct_()->get_root) return Gio::File{};
  typedef ::GFile* (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_root;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const gchar* Mount::get_sort_key (GMount* mount);
// const char* Mount::get_sort_key (::GMount* mount);
// SKIP; invalid callback return transfer none

// GIcon* Mount::get_symbolic_icon (GMount* mount);
// ::GIcon* Mount::get_symbolic_icon (::GMount* mount);
Gio::Icon MountIfaceClassImpl::get_symbolic_icon_ () noexcept
{
  if (!get_struct_()->get_symbolic_icon) return Gio::Icon{};
  typedef ::GIcon* (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_symbolic_icon;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char* Mount::get_uuid (GMount* mount);
// char* Mount::get_uuid (::GMount* mount);
std::string MountIfaceClassImpl::get_uuid_ () noexcept
{
  if (!get_struct_()->get_uuid) return std::string{};
  typedef char* (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_uuid;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GVolume* Mount::get_volume (GMount* mount);
// ::GVolume* Mount::get_volume (::GMount* mount);
Gio::Volume MountIfaceClassImpl::get_volume_ () noexcept
{
  if (!get_struct_()->get_volume) return Gio::Volume{};
  typedef ::GVolume* (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_volume;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void Mount::guess_content_type (GMount* mount, gboolean force_rescan, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void Mount::guess_content_type (::GMount* mount, gboolean force_rescan, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gchar** Mount::guess_content_type_finish (GMount* mount, GAsyncResult* result, GError ** error);
// char** Mount::guess_content_type_finish (::GMount* mount, ::GAsyncResult* result, GError ** error);
// SKIP; container return not supported, callee GError not supported

// gchar** Mount::guess_content_type_sync (GMount* mount, gboolean force_rescan, GCancellable* cancellable, GError ** error);
// char** Mount::guess_content_type_sync (::GMount* mount, gboolean force_rescan, ::GCancellable* cancellable, GError ** error);
// SKIP; container return not supported, callee GError not supported

// void Mount::pre_unmount (GMount* mount);
// void Mount::pre_unmount (::GMount* mount);
void MountIfaceClassImpl::pre_unmount_ () noexcept
{
  if (!get_struct_()->pre_unmount) return ;
  typedef void (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->pre_unmount;
  call_wrap_v ((::GMount*) (gobj_()));
}

// void Mount::remount (GMount* mount, GMountMountFlags flags, GMountOperation* mount_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void Mount::remount (::GMount* mount, ::GMountMountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gboolean Mount::remount_finish (GMount* mount, GAsyncResult* result, GError ** error);
// gboolean Mount::remount_finish (::GMount* mount, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// void Mount::unmount (GMount* mount, GMountUnmountFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void Mount::unmount (::GMount* mount, ::GMountUnmountFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// IGNORE; deprecated, virtual-method callback parameter not supported

// gboolean Mount::unmount_finish (GMount* mount, GAsyncResult* result, GError ** error);
// gboolean Mount::unmount_finish (::GMount* mount, ::GAsyncResult* result, GError ** error);
// IGNORE; deprecated, callee GError not supported

// void Mount::unmount_with_operation (GMount* mount, GMountUnmountFlags flags, GMountOperation* mount_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void Mount::unmount_with_operation (::GMount* mount, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gboolean Mount::unmount_with_operation_finish (GMount* mount, GAsyncResult* result, GError ** error);
// gboolean Mount::unmount_with_operation_finish (::GMount* mount, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// void Mount::unmounted (GMount* mount);
// void Mount::unmounted (::GMount* mount);
void MountIfaceClassImpl::unmounted_ () noexcept
{
  if (!get_struct_()->unmounted) return ;
  typedef void (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->unmounted;
  call_wrap_v ((::GMount*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
