// AUTO-GENERATED

#ifndef _GI_GIO_VOLUME_IMPL_HPP_
#define _GI_GIO_VOLUME_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// gboolean g_volume_can_eject (GVolume* volume);
// gboolean g_volume_can_eject (::GVolume* volume);
bool base::VolumeBase::can_eject () noexcept
{
  typedef gboolean (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) g_volume_can_eject;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()));
  return _temp_ret;
}

// gboolean g_volume_can_mount (GVolume* volume);
// gboolean g_volume_can_mount (::GVolume* volume);
bool base::VolumeBase::can_mount () noexcept
{
  typedef gboolean (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) g_volume_can_mount;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()));
  return _temp_ret;
}

// void g_volume_eject (GVolume* volume, GMountUnmountFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_volume_eject (::GVolume* volume, ::GMountUnmountFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// IGNORE; deprecated

// gboolean g_volume_eject_finish (GVolume* volume, GAsyncResult* result, GError ** error);
// gboolean g_volume_eject_finish (::GVolume* volume, ::GAsyncResult* result, GError ** error);
// IGNORE; deprecated

// void g_volume_eject_with_operation (GVolume* volume, GMountUnmountFlags flags, GMountOperation* mount_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_volume_eject_with_operation (::GVolume* volume, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::VolumeBase::eject_with_operation (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GVolume* volume, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_volume_eject_with_operation;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto mount_operation_to_c = gi::unwrap (mount_operation, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GVolume*) (gobj_()), (::GMountUnmountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::VolumeBase::eject_with_operation (Gio::MountUnmountFlags flags, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GVolume* volume, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_volume_eject_with_operation;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto mount_operation_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GVolume*) (gobj_()), (::GMountUnmountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_volume_eject_with_operation_finish (GVolume* volume, GAsyncResult* result, GError ** error);
// gboolean g_volume_eject_with_operation_finish (::GVolume* volume, ::GAsyncResult* result, GError ** error);
bool base::VolumeBase::eject_with_operation_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GVolume* volume, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_volume_eject_with_operation_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::VolumeBase::eject_with_operation_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GVolume* volume, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_volume_eject_with_operation_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// char** g_volume_enumerate_identifiers (GVolume* volume);
// char** g_volume_enumerate_identifiers (::GVolume* volume);
std::vector<std::string> base::VolumeBase::enumerate_identifiers () noexcept
{
  typedef char** (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) g_volume_enumerate_identifiers;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// GFile* g_volume_get_activation_root (GVolume* volume);
// ::GFile* g_volume_get_activation_root (::GVolume* volume);
Gio::File base::VolumeBase::get_activation_root () noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) g_volume_get_activation_root;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GDrive* g_volume_get_drive (GVolume* volume);
// ::GDrive* g_volume_get_drive (::GVolume* volume);
Gio::Drive base::VolumeBase::get_drive () noexcept
{
  typedef ::GDrive* (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) g_volume_get_drive;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GIcon* g_volume_get_icon (GVolume* volume);
// ::GIcon* g_volume_get_icon (::GVolume* volume);
Gio::Icon base::VolumeBase::get_icon () noexcept
{
  typedef ::GIcon* (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) g_volume_get_icon;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char* g_volume_get_identifier (GVolume* volume, const char* kind);
// char* g_volume_get_identifier (::GVolume* volume, const char* kind);
std::string base::VolumeBase::get_identifier (const std::string & kind) noexcept
{
  typedef char* (*call_wrap_t) (::GVolume* volume, const char* kind);
  call_wrap_t call_wrap_v = (call_wrap_t) g_volume_get_identifier;
  auto kind_to_c = gi::unwrap (kind, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()), (const char*) (kind_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GMount* g_volume_get_mount (GVolume* volume);
// ::GMount* g_volume_get_mount (::GVolume* volume);
Gio::Mount base::VolumeBase::get_mount () noexcept
{
  typedef ::GMount* (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) g_volume_get_mount;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char* g_volume_get_name (GVolume* volume);
// char* g_volume_get_name (::GVolume* volume);
std::string base::VolumeBase::get_name () noexcept
{
  typedef char* (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) g_volume_get_name;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const gchar* g_volume_get_sort_key (GVolume* volume);
// const char* g_volume_get_sort_key (::GVolume* volume);
std::string base::VolumeBase::get_sort_key () noexcept
{
  typedef const char* (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) g_volume_get_sort_key;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GIcon* g_volume_get_symbolic_icon (GVolume* volume);
// ::GIcon* g_volume_get_symbolic_icon (::GVolume* volume);
Gio::Icon base::VolumeBase::get_symbolic_icon () noexcept
{
  typedef ::GIcon* (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) g_volume_get_symbolic_icon;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char* g_volume_get_uuid (GVolume* volume);
// char* g_volume_get_uuid (::GVolume* volume);
std::string base::VolumeBase::get_uuid () noexcept
{
  typedef char* (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) g_volume_get_uuid;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_volume_mount (GVolume* volume, GMountMountFlags flags, GMountOperation* mount_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_volume_mount (::GVolume* volume, ::GMountMountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::VolumeBase::mount (Gio::MountMountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GVolume* volume, ::GMountMountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_volume_mount;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto mount_operation_to_c = gi::unwrap (mount_operation, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GVolume*) (gobj_()), (::GMountMountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::VolumeBase::mount (Gio::MountMountFlags flags, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GVolume* volume, ::GMountMountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_volume_mount;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto mount_operation_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GVolume*) (gobj_()), (::GMountMountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_volume_mount_finish (GVolume* volume, GAsyncResult* result, GError ** error);
// gboolean g_volume_mount_finish (::GVolume* volume, ::GAsyncResult* result, GError ** error);
bool base::VolumeBase::mount_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GVolume* volume, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_volume_mount_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::VolumeBase::mount_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GVolume* volume, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_volume_mount_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_volume_should_automount (GVolume* volume);
// gboolean g_volume_should_automount (::GVolume* volume);
bool base::VolumeBase::should_automount () noexcept
{
  typedef gboolean (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) g_volume_should_automount;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()));
  return _temp_ret;
}




} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/volume_extra_def_impl.hpp>)
#include <gio/volume_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/volume_extra_impl.hpp>)
#include <gio/volume_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void VolumeIfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GVolumeIface *methods = (::GVolumeIface *) interface_struct;
  (void) methods;

  methods->can_eject = (decltype (methods->can_eject)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::can_eject_>;
  methods->can_mount = (decltype (methods->can_mount)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::can_mount_>;
  methods->changed = (decltype (methods->changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::changed_>;
  methods->get_activation_root = (decltype (methods->get_activation_root)) detail::method_wrapper<self, Gio::File (*) (), gi::transfer_full_t>::wrapper<&self::get_activation_root_>;
  methods->get_drive = (decltype (methods->get_drive)) detail::method_wrapper<self, Gio::Drive (*) (), gi::transfer_full_t>::wrapper<&self::get_drive_>;
  methods->get_icon = (decltype (methods->get_icon)) detail::method_wrapper<self, Gio::Icon (*) (), gi::transfer_full_t>::wrapper<&self::get_icon_>;
  methods->get_identifier = (decltype (methods->get_identifier)) detail::method_wrapper<self, std::string (*) (const std::string & kind), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::get_identifier_>;
  methods->get_mount = (decltype (methods->get_mount)) detail::method_wrapper<self, Gio::Mount (*) (), gi::transfer_full_t>::wrapper<&self::get_mount_>;
  methods->get_name = (decltype (methods->get_name)) detail::method_wrapper<self, std::string (*) (), gi::transfer_full_t>::wrapper<&self::get_name_>;
  methods->get_symbolic_icon = (decltype (methods->get_symbolic_icon)) detail::method_wrapper<self, Gio::Icon (*) (), gi::transfer_full_t>::wrapper<&self::get_symbolic_icon_>;
  methods->get_uuid = (decltype (methods->get_uuid)) detail::method_wrapper<self, std::string (*) (), gi::transfer_full_t>::wrapper<&self::get_uuid_>;
  methods->removed = (decltype (methods->removed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::removed_>;
  methods->should_automount = (decltype (methods->should_automount)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::should_automount_>;
}

// gboolean Volume::can_eject (GVolume* volume);
// gboolean Volume::can_eject (::GVolume* volume);
bool VolumeIfaceClassImpl::can_eject_ () noexcept
{
  if (!get_struct_()->can_eject) return bool{};
  typedef gboolean (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->can_eject;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()));
  return _temp_ret;
}

// gboolean Volume::can_mount (GVolume* volume);
// gboolean Volume::can_mount (::GVolume* volume);
bool VolumeIfaceClassImpl::can_mount_ () noexcept
{
  if (!get_struct_()->can_mount) return bool{};
  typedef gboolean (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->can_mount;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()));
  return _temp_ret;
}

// void Volume::changed (GVolume* volume);
// void Volume::changed (::GVolume* volume);
void VolumeIfaceClassImpl::changed_ () noexcept
{
  if (!get_struct_()->changed) return ;
  typedef void (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->changed;
  call_wrap_v ((::GVolume*) (gobj_()));
}

// void Volume::eject (GVolume* volume, GMountUnmountFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void Volume::eject (::GVolume* volume, ::GMountUnmountFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// IGNORE; deprecated, virtual-method callback parameter not supported

// gboolean Volume::eject_finish (GVolume* volume, GAsyncResult* result, GError ** error);
// gboolean Volume::eject_finish (::GVolume* volume, ::GAsyncResult* result, GError ** error);
// IGNORE; deprecated, callee GError not supported

// void Volume::eject_with_operation (GVolume* volume, GMountUnmountFlags flags, GMountOperation* mount_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void Volume::eject_with_operation (::GVolume* volume, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gboolean Volume::eject_with_operation_finish (GVolume* volume, GAsyncResult* result, GError ** error);
// gboolean Volume::eject_with_operation_finish (::GVolume* volume, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// char** Volume::enumerate_identifiers (GVolume* volume);
// char** Volume::enumerate_identifiers (::GVolume* volume);
// SKIP; container return not supported

// GFile* Volume::get_activation_root (GVolume* volume);
// ::GFile* Volume::get_activation_root (::GVolume* volume);
Gio::File VolumeIfaceClassImpl::get_activation_root_ () noexcept
{
  if (!get_struct_()->get_activation_root) return Gio::File{};
  typedef ::GFile* (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_activation_root;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GDrive* Volume::get_drive (GVolume* volume);
// ::GDrive* Volume::get_drive (::GVolume* volume);
Gio::Drive VolumeIfaceClassImpl::get_drive_ () noexcept
{
  if (!get_struct_()->get_drive) return Gio::Drive{};
  typedef ::GDrive* (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_drive;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GIcon* Volume::get_icon (GVolume* volume);
// ::GIcon* Volume::get_icon (::GVolume* volume);
Gio::Icon VolumeIfaceClassImpl::get_icon_ () noexcept
{
  if (!get_struct_()->get_icon) return Gio::Icon{};
  typedef ::GIcon* (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_icon;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char* Volume::get_identifier (GVolume* volume, const char* kind);
// char* Volume::get_identifier (::GVolume* volume, const char* kind);
std::string VolumeIfaceClassImpl::get_identifier_ (const std::string & kind) noexcept
{
  if (!get_struct_()->get_identifier) return std::string{};
  typedef char* (*call_wrap_t) (::GVolume* volume, const char* kind);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_identifier;
  auto kind_to_c = gi::unwrap (kind, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()), (const char*) (kind_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GMount* Volume::get_mount (GVolume* volume);
// ::GMount* Volume::get_mount (::GVolume* volume);
Gio::Mount VolumeIfaceClassImpl::get_mount_ () noexcept
{
  if (!get_struct_()->get_mount) return Gio::Mount{};
  typedef ::GMount* (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_mount;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char* Volume::get_name (GVolume* volume);
// char* Volume::get_name (::GVolume* volume);
std::string VolumeIfaceClassImpl::get_name_ () noexcept
{
  if (!get_struct_()->get_name) return std::string{};
  typedef char* (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_name;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const gchar* Volume::get_sort_key (GVolume* volume);
// const char* Volume::get_sort_key (::GVolume* volume);
// SKIP; invalid callback return transfer none

// GIcon* Volume::get_symbolic_icon (GVolume* volume);
// ::GIcon* Volume::get_symbolic_icon (::GVolume* volume);
Gio::Icon VolumeIfaceClassImpl::get_symbolic_icon_ () noexcept
{
  if (!get_struct_()->get_symbolic_icon) return Gio::Icon{};
  typedef ::GIcon* (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_symbolic_icon;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char* Volume::get_uuid (GVolume* volume);
// char* Volume::get_uuid (::GVolume* volume);
std::string VolumeIfaceClassImpl::get_uuid_ () noexcept
{
  if (!get_struct_()->get_uuid) return std::string{};
  typedef char* (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_uuid;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean Volume::mount_finish (GVolume* volume, GAsyncResult* result, GError ** error);
// gboolean Volume::mount_finish (::GVolume* volume, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// void Volume::mount_fn (GVolume* volume, GMountMountFlags flags, GMountOperation* mount_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void Volume::mount_fn (::GVolume* volume, ::GMountMountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// void Volume::removed (GVolume* volume);
// void Volume::removed (::GVolume* volume);
void VolumeIfaceClassImpl::removed_ () noexcept
{
  if (!get_struct_()->removed) return ;
  typedef void (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->removed;
  call_wrap_v ((::GVolume*) (gobj_()));
}

// gboolean Volume::should_automount (GVolume* volume);
// gboolean Volume::should_automount (::GVolume* volume);
bool VolumeIfaceClassImpl::should_automount_ () noexcept
{
  if (!get_struct_()->should_automount) return bool{};
  typedef gboolean (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->should_automount;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
