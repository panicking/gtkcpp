// AUTO-GENERATED

#ifndef _GI_GIO_MOUNT_HPP_
#define _GI_GIO_MOUNT_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;
class Drive;
class File;
class Icon;
class MountOperation;
class Volume;

class Mount;

namespace base {


#define GI_GIO_MOUNT_BASE base::MountBase
class MountBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GMount BaseObjectType;

MountBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_mount_get_type(); } 

// gboolean g_mount_can_eject (GMount* mount);
// gboolean g_mount_can_eject (::GMount* mount);
GI_INLINE_DECL bool can_eject () noexcept;

// gboolean g_mount_can_unmount (GMount* mount);
// gboolean g_mount_can_unmount (::GMount* mount);
GI_INLINE_DECL bool can_unmount () noexcept;

// void g_mount_eject (GMount* mount, GMountUnmountFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_mount_eject (::GMount* mount, ::GMountUnmountFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// IGNORE; deprecated

// gboolean g_mount_eject_finish (GMount* mount, GAsyncResult* result, GError ** error);
// gboolean g_mount_eject_finish (::GMount* mount, ::GAsyncResult* result, GError ** error);
// IGNORE; deprecated

// void g_mount_eject_with_operation (GMount* mount, GMountUnmountFlags flags, GMountOperation* mount_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_mount_eject_with_operation (::GMount* mount, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void eject_with_operation (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void eject_with_operation (Gio::MountUnmountFlags flags, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_mount_eject_with_operation_finish (GMount* mount, GAsyncResult* result, GError ** error);
// gboolean g_mount_eject_with_operation_finish (::GMount* mount, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL bool eject_with_operation_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool eject_with_operation_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// GFile* g_mount_get_default_location (GMount* mount);
// ::GFile* g_mount_get_default_location (::GMount* mount);
GI_INLINE_DECL Gio::File get_default_location () noexcept;

// GDrive* g_mount_get_drive (GMount* mount);
// ::GDrive* g_mount_get_drive (::GMount* mount);
GI_INLINE_DECL Gio::Drive get_drive () noexcept;

// GIcon* g_mount_get_icon (GMount* mount);
// ::GIcon* g_mount_get_icon (::GMount* mount);
GI_INLINE_DECL Gio::Icon get_icon () noexcept;

// char* g_mount_get_name (GMount* mount);
// char* g_mount_get_name (::GMount* mount);
GI_INLINE_DECL std::string get_name () noexcept;

// GFile* g_mount_get_root (GMount* mount);
// ::GFile* g_mount_get_root (::GMount* mount);
GI_INLINE_DECL Gio::File get_root () noexcept;

// const gchar* g_mount_get_sort_key (GMount* mount);
// const char* g_mount_get_sort_key (::GMount* mount);
GI_INLINE_DECL std::string get_sort_key () noexcept;

// GIcon* g_mount_get_symbolic_icon (GMount* mount);
// ::GIcon* g_mount_get_symbolic_icon (::GMount* mount);
GI_INLINE_DECL Gio::Icon get_symbolic_icon () noexcept;

// char* g_mount_get_uuid (GMount* mount);
// char* g_mount_get_uuid (::GMount* mount);
GI_INLINE_DECL std::string get_uuid () noexcept;

// GVolume* g_mount_get_volume (GMount* mount);
// ::GVolume* g_mount_get_volume (::GMount* mount);
GI_INLINE_DECL Gio::Volume get_volume () noexcept;

// void g_mount_guess_content_type (GMount* mount, gboolean force_rescan, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_mount_guess_content_type (::GMount* mount, gboolean force_rescan, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void guess_content_type (gboolean force_rescan, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void guess_content_type (gboolean force_rescan, Gio::AsyncReadyCallback callback) noexcept;

// gchar** g_mount_guess_content_type_finish (GMount* mount, GAsyncResult* result, GError ** error);
// char** g_mount_guess_content_type_finish (::GMount* mount, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL std::vector<std::string> guess_content_type_finish (Gio::AsyncResult result);
GI_INLINE_DECL std::vector<std::string> guess_content_type_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gchar** g_mount_guess_content_type_sync (GMount* mount, gboolean force_rescan, GCancellable* cancellable, GError ** error);
// char** g_mount_guess_content_type_sync (::GMount* mount, gboolean force_rescan, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL std::vector<std::string> guess_content_type_sync (gboolean force_rescan, Gio::Cancellable cancellable);
GI_INLINE_DECL std::vector<std::string> guess_content_type_sync (gboolean force_rescan);
GI_INLINE_DECL std::vector<std::string> guess_content_type_sync (gboolean force_rescan, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::vector<std::string> guess_content_type_sync (gboolean force_rescan, GLib::Error * _error) noexcept;

// gboolean g_mount_is_shadowed (GMount* mount);
// gboolean g_mount_is_shadowed (::GMount* mount);
GI_INLINE_DECL bool is_shadowed () noexcept;

// void g_mount_remount (GMount* mount, GMountMountFlags flags, GMountOperation* mount_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_mount_remount (::GMount* mount, ::GMountMountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void remount (Gio::MountMountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void remount (Gio::MountMountFlags flags, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_mount_remount_finish (GMount* mount, GAsyncResult* result, GError ** error);
// gboolean g_mount_remount_finish (::GMount* mount, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL bool remount_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool remount_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void g_mount_shadow (GMount* mount);
// void g_mount_shadow (::GMount* mount);
GI_INLINE_DECL void shadow () noexcept;

// void g_mount_unmount (GMount* mount, GMountUnmountFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_mount_unmount (::GMount* mount, ::GMountUnmountFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// IGNORE; deprecated

// gboolean g_mount_unmount_finish (GMount* mount, GAsyncResult* result, GError ** error);
// gboolean g_mount_unmount_finish (::GMount* mount, ::GAsyncResult* result, GError ** error);
// IGNORE; deprecated

// void g_mount_unmount_with_operation (GMount* mount, GMountUnmountFlags flags, GMountOperation* mount_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_mount_unmount_with_operation (::GMount* mount, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void unmount_with_operation (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void unmount_with_operation (Gio::MountUnmountFlags flags, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_mount_unmount_with_operation_finish (GMount* mount, GAsyncResult* result, GError ** error);
// gboolean g_mount_unmount_with_operation_finish (::GMount* mount, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL bool unmount_with_operation_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool unmount_with_operation_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void g_mount_unshadow (GMount* mount);
// void g_mount_unshadow (::GMount* mount);
GI_INLINE_DECL void unshadow () noexcept;

// signal changed
gi::signal_proxy<void(Gio::Mount)> signal_changed()
{ return gi::signal_proxy<void(Gio::Mount)> (*this, "changed"); }

// signal pre-unmount
gi::signal_proxy<void(Gio::Mount)> signal_pre_unmount()
{ return gi::signal_proxy<void(Gio::Mount)> (*this, "pre-unmount"); }

// signal unmounted
gi::signal_proxy<void(Gio::Mount)> signal_unmounted()
{ return gi::signal_proxy<void(Gio::Mount)> (*this, "unmounted"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/mount_extra_def.hpp>)
#include <gio/mount_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/mount_extra.hpp>)
#include <gio/mount_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class Mount : public GI_GIO_MOUNT_BASE
{ typedef GI_GIO_MOUNT_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GMount>
{ typedef Gio::Mount type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class MountIfaceDef
{
typedef MountIfaceDef self;
public:
typedef Gio::Mount instance_type;
typedef ::GMountIface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean Mount::can_eject (GMount* mount);
// gboolean Mount::can_eject (::GMount* mount);
virtual bool can_eject_ () noexcept = 0;

// gboolean Mount::can_unmount (GMount* mount);
// gboolean Mount::can_unmount (::GMount* mount);
virtual bool can_unmount_ () noexcept = 0;

// void Mount::changed (GMount* mount);
// void Mount::changed (::GMount* mount);
virtual void changed_ () noexcept = 0;

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
virtual Gio::File get_default_location_ () noexcept = 0;

// GDrive* Mount::get_drive (GMount* mount);
// ::GDrive* Mount::get_drive (::GMount* mount);
virtual Gio::Drive get_drive_ () noexcept = 0;

// GIcon* Mount::get_icon (GMount* mount);
// ::GIcon* Mount::get_icon (::GMount* mount);
virtual Gio::Icon get_icon_ () noexcept = 0;

// char* Mount::get_name (GMount* mount);
// char* Mount::get_name (::GMount* mount);
virtual std::string get_name_ () noexcept = 0;

// GFile* Mount::get_root (GMount* mount);
// ::GFile* Mount::get_root (::GMount* mount);
virtual Gio::File get_root_ () noexcept = 0;

// const gchar* Mount::get_sort_key (GMount* mount);
// const char* Mount::get_sort_key (::GMount* mount);
// SKIP; invalid callback return transfer none

// GIcon* Mount::get_symbolic_icon (GMount* mount);
// ::GIcon* Mount::get_symbolic_icon (::GMount* mount);
virtual Gio::Icon get_symbolic_icon_ () noexcept = 0;

// char* Mount::get_uuid (GMount* mount);
// char* Mount::get_uuid (::GMount* mount);
virtual std::string get_uuid_ () noexcept = 0;

// GVolume* Mount::get_volume (GMount* mount);
// ::GVolume* Mount::get_volume (::GMount* mount);
virtual Gio::Volume get_volume_ () noexcept = 0;

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
virtual void pre_unmount_ () noexcept = 0;

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
virtual void unmounted_ () noexcept = 0;


};

using MountImpl = detail::InterfaceImpl<MountIfaceDef>;

class MountIfaceClassImpl: public detail::InterfaceClassImpl<MountImpl>
{
typedef MountIfaceClassImpl self;
typedef detail::InterfaceClassImpl<MountImpl> super;

protected:
using super::super;

// gboolean Mount::can_eject (GMount* mount);
// gboolean Mount::can_eject (::GMount* mount);
GI_INLINE_DECL bool can_eject_ () noexcept override;

// gboolean Mount::can_unmount (GMount* mount);
// gboolean Mount::can_unmount (::GMount* mount);
GI_INLINE_DECL bool can_unmount_ () noexcept override;

// void Mount::changed (GMount* mount);
// void Mount::changed (::GMount* mount);
GI_INLINE_DECL void changed_ () noexcept override;

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
GI_INLINE_DECL Gio::File get_default_location_ () noexcept override;

// GDrive* Mount::get_drive (GMount* mount);
// ::GDrive* Mount::get_drive (::GMount* mount);
GI_INLINE_DECL Gio::Drive get_drive_ () noexcept override;

// GIcon* Mount::get_icon (GMount* mount);
// ::GIcon* Mount::get_icon (::GMount* mount);
GI_INLINE_DECL Gio::Icon get_icon_ () noexcept override;

// char* Mount::get_name (GMount* mount);
// char* Mount::get_name (::GMount* mount);
GI_INLINE_DECL std::string get_name_ () noexcept override;

// GFile* Mount::get_root (GMount* mount);
// ::GFile* Mount::get_root (::GMount* mount);
GI_INLINE_DECL Gio::File get_root_ () noexcept override;

// const gchar* Mount::get_sort_key (GMount* mount);
// const char* Mount::get_sort_key (::GMount* mount);
// SKIP; invalid callback return transfer none

// GIcon* Mount::get_symbolic_icon (GMount* mount);
// ::GIcon* Mount::get_symbolic_icon (::GMount* mount);
GI_INLINE_DECL Gio::Icon get_symbolic_icon_ () noexcept override;

// char* Mount::get_uuid (GMount* mount);
// char* Mount::get_uuid (::GMount* mount);
GI_INLINE_DECL std::string get_uuid_ () noexcept override;

// GVolume* Mount::get_volume (GMount* mount);
// ::GVolume* Mount::get_volume (::GMount* mount);
GI_INLINE_DECL Gio::Volume get_volume_ () noexcept override;

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
GI_INLINE_DECL void pre_unmount_ () noexcept override;

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
GI_INLINE_DECL void unmounted_ () noexcept override;


};

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
