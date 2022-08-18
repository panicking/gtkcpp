// AUTO-GENERATED

#ifndef _GI_GIO_VOLUME_HPP_
#define _GI_GIO_VOLUME_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;
class Drive;
class File;
class Icon;
class Mount;
class MountOperation;

class Volume;

namespace base {


#define GI_GIO_VOLUME_BASE base::VolumeBase
class VolumeBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GVolume BaseObjectType;

VolumeBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_volume_get_type(); } 

// gboolean g_volume_can_eject (GVolume* volume);
// gboolean g_volume_can_eject (::GVolume* volume);
GI_INLINE_DECL bool can_eject () noexcept;

// gboolean g_volume_can_mount (GVolume* volume);
// gboolean g_volume_can_mount (::GVolume* volume);
GI_INLINE_DECL bool can_mount () noexcept;

// void g_volume_eject (GVolume* volume, GMountUnmountFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_volume_eject (::GVolume* volume, ::GMountUnmountFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// IGNORE; deprecated

// gboolean g_volume_eject_finish (GVolume* volume, GAsyncResult* result, GError ** error);
// gboolean g_volume_eject_finish (::GVolume* volume, ::GAsyncResult* result, GError ** error);
// IGNORE; deprecated

// void g_volume_eject_with_operation (GVolume* volume, GMountUnmountFlags flags, GMountOperation* mount_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_volume_eject_with_operation (::GVolume* volume, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void eject_with_operation (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void eject_with_operation (Gio::MountUnmountFlags flags, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_volume_eject_with_operation_finish (GVolume* volume, GAsyncResult* result, GError ** error);
// gboolean g_volume_eject_with_operation_finish (::GVolume* volume, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL bool eject_with_operation_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool eject_with_operation_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// char** g_volume_enumerate_identifiers (GVolume* volume);
// char** g_volume_enumerate_identifiers (::GVolume* volume);
GI_INLINE_DECL std::vector<std::string> enumerate_identifiers () noexcept;

// GFile* g_volume_get_activation_root (GVolume* volume);
// ::GFile* g_volume_get_activation_root (::GVolume* volume);
GI_INLINE_DECL Gio::File get_activation_root () noexcept;

// GDrive* g_volume_get_drive (GVolume* volume);
// ::GDrive* g_volume_get_drive (::GVolume* volume);
GI_INLINE_DECL Gio::Drive get_drive () noexcept;

// GIcon* g_volume_get_icon (GVolume* volume);
// ::GIcon* g_volume_get_icon (::GVolume* volume);
GI_INLINE_DECL Gio::Icon get_icon () noexcept;

// char* g_volume_get_identifier (GVolume* volume, const char* kind);
// char* g_volume_get_identifier (::GVolume* volume, const char* kind);
GI_INLINE_DECL std::string get_identifier (const std::string & kind) noexcept;

// GMount* g_volume_get_mount (GVolume* volume);
// ::GMount* g_volume_get_mount (::GVolume* volume);
GI_INLINE_DECL Gio::Mount get_mount () noexcept;

// char* g_volume_get_name (GVolume* volume);
// char* g_volume_get_name (::GVolume* volume);
GI_INLINE_DECL std::string get_name () noexcept;

// const gchar* g_volume_get_sort_key (GVolume* volume);
// const char* g_volume_get_sort_key (::GVolume* volume);
GI_INLINE_DECL std::string get_sort_key () noexcept;

// GIcon* g_volume_get_symbolic_icon (GVolume* volume);
// ::GIcon* g_volume_get_symbolic_icon (::GVolume* volume);
GI_INLINE_DECL Gio::Icon get_symbolic_icon () noexcept;

// char* g_volume_get_uuid (GVolume* volume);
// char* g_volume_get_uuid (::GVolume* volume);
GI_INLINE_DECL std::string get_uuid () noexcept;

// void g_volume_mount (GVolume* volume, GMountMountFlags flags, GMountOperation* mount_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_volume_mount (::GVolume* volume, ::GMountMountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void mount (Gio::MountMountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void mount (Gio::MountMountFlags flags, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_volume_mount_finish (GVolume* volume, GAsyncResult* result, GError ** error);
// gboolean g_volume_mount_finish (::GVolume* volume, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL bool mount_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool mount_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gboolean g_volume_should_automount (GVolume* volume);
// gboolean g_volume_should_automount (::GVolume* volume);
GI_INLINE_DECL bool should_automount () noexcept;

// signal changed
gi::signal_proxy<void(Gio::Volume)> signal_changed()
{ return gi::signal_proxy<void(Gio::Volume)> (*this, "changed"); }

// signal removed
gi::signal_proxy<void(Gio::Volume)> signal_removed()
{ return gi::signal_proxy<void(Gio::Volume)> (*this, "removed"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/volume_extra_def.hpp>)
#include <gio/volume_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/volume_extra.hpp>)
#include <gio/volume_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class Volume : public GI_GIO_VOLUME_BASE
{ typedef GI_GIO_VOLUME_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GVolume>
{ typedef Gio::Volume type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class VolumeIfaceDef
{
typedef VolumeIfaceDef self;
public:
typedef Gio::Volume instance_type;
typedef ::GVolumeIface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean Volume::can_eject (GVolume* volume);
// gboolean Volume::can_eject (::GVolume* volume);
virtual bool can_eject_ () noexcept = 0;

// gboolean Volume::can_mount (GVolume* volume);
// gboolean Volume::can_mount (::GVolume* volume);
virtual bool can_mount_ () noexcept = 0;

// void Volume::changed (GVolume* volume);
// void Volume::changed (::GVolume* volume);
virtual void changed_ () noexcept = 0;

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
virtual Gio::File get_activation_root_ () noexcept = 0;

// GDrive* Volume::get_drive (GVolume* volume);
// ::GDrive* Volume::get_drive (::GVolume* volume);
virtual Gio::Drive get_drive_ () noexcept = 0;

// GIcon* Volume::get_icon (GVolume* volume);
// ::GIcon* Volume::get_icon (::GVolume* volume);
virtual Gio::Icon get_icon_ () noexcept = 0;

// char* Volume::get_identifier (GVolume* volume, const char* kind);
// char* Volume::get_identifier (::GVolume* volume, const char* kind);
virtual std::string get_identifier_ (const std::string & kind) noexcept = 0;

// GMount* Volume::get_mount (GVolume* volume);
// ::GMount* Volume::get_mount (::GVolume* volume);
virtual Gio::Mount get_mount_ () noexcept = 0;

// char* Volume::get_name (GVolume* volume);
// char* Volume::get_name (::GVolume* volume);
virtual std::string get_name_ () noexcept = 0;

// const gchar* Volume::get_sort_key (GVolume* volume);
// const char* Volume::get_sort_key (::GVolume* volume);
// SKIP; invalid callback return transfer none

// GIcon* Volume::get_symbolic_icon (GVolume* volume);
// ::GIcon* Volume::get_symbolic_icon (::GVolume* volume);
virtual Gio::Icon get_symbolic_icon_ () noexcept = 0;

// char* Volume::get_uuid (GVolume* volume);
// char* Volume::get_uuid (::GVolume* volume);
virtual std::string get_uuid_ () noexcept = 0;

// gboolean Volume::mount_finish (GVolume* volume, GAsyncResult* result, GError ** error);
// gboolean Volume::mount_finish (::GVolume* volume, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// void Volume::mount_fn (GVolume* volume, GMountMountFlags flags, GMountOperation* mount_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void Volume::mount_fn (::GVolume* volume, ::GMountMountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// void Volume::removed (GVolume* volume);
// void Volume::removed (::GVolume* volume);
virtual void removed_ () noexcept = 0;

// gboolean Volume::should_automount (GVolume* volume);
// gboolean Volume::should_automount (::GVolume* volume);
virtual bool should_automount_ () noexcept = 0;


};

using VolumeImpl = detail::InterfaceImpl<VolumeIfaceDef>;

class VolumeIfaceClassImpl: public detail::InterfaceClassImpl<VolumeImpl>
{
typedef VolumeIfaceClassImpl self;
typedef detail::InterfaceClassImpl<VolumeImpl> super;

protected:
using super::super;

// gboolean Volume::can_eject (GVolume* volume);
// gboolean Volume::can_eject (::GVolume* volume);
GI_INLINE_DECL bool can_eject_ () noexcept override;

// gboolean Volume::can_mount (GVolume* volume);
// gboolean Volume::can_mount (::GVolume* volume);
GI_INLINE_DECL bool can_mount_ () noexcept override;

// void Volume::changed (GVolume* volume);
// void Volume::changed (::GVolume* volume);
GI_INLINE_DECL void changed_ () noexcept override;

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
GI_INLINE_DECL Gio::File get_activation_root_ () noexcept override;

// GDrive* Volume::get_drive (GVolume* volume);
// ::GDrive* Volume::get_drive (::GVolume* volume);
GI_INLINE_DECL Gio::Drive get_drive_ () noexcept override;

// GIcon* Volume::get_icon (GVolume* volume);
// ::GIcon* Volume::get_icon (::GVolume* volume);
GI_INLINE_DECL Gio::Icon get_icon_ () noexcept override;

// char* Volume::get_identifier (GVolume* volume, const char* kind);
// char* Volume::get_identifier (::GVolume* volume, const char* kind);
GI_INLINE_DECL std::string get_identifier_ (const std::string & kind) noexcept override;

// GMount* Volume::get_mount (GVolume* volume);
// ::GMount* Volume::get_mount (::GVolume* volume);
GI_INLINE_DECL Gio::Mount get_mount_ () noexcept override;

// char* Volume::get_name (GVolume* volume);
// char* Volume::get_name (::GVolume* volume);
GI_INLINE_DECL std::string get_name_ () noexcept override;

// const gchar* Volume::get_sort_key (GVolume* volume);
// const char* Volume::get_sort_key (::GVolume* volume);
// SKIP; invalid callback return transfer none

// GIcon* Volume::get_symbolic_icon (GVolume* volume);
// ::GIcon* Volume::get_symbolic_icon (::GVolume* volume);
GI_INLINE_DECL Gio::Icon get_symbolic_icon_ () noexcept override;

// char* Volume::get_uuid (GVolume* volume);
// char* Volume::get_uuid (::GVolume* volume);
GI_INLINE_DECL std::string get_uuid_ () noexcept override;

// gboolean Volume::mount_finish (GVolume* volume, GAsyncResult* result, GError ** error);
// gboolean Volume::mount_finish (::GVolume* volume, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// void Volume::mount_fn (GVolume* volume, GMountMountFlags flags, GMountOperation* mount_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void Volume::mount_fn (::GVolume* volume, ::GMountMountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// void Volume::removed (GVolume* volume);
// void Volume::removed (::GVolume* volume);
GI_INLINE_DECL void removed_ () noexcept override;

// gboolean Volume::should_automount (GVolume* volume);
// gboolean Volume::should_automount (::GVolume* volume);
GI_INLINE_DECL bool should_automount_ () noexcept override;


};

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
