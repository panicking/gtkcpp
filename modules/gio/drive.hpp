// AUTO-GENERATED

#ifndef _GI_GIO_DRIVE_HPP_
#define _GI_GIO_DRIVE_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;
class Icon;
class MountOperation;
class Volume;

class Drive;

namespace base {


#define GI_GIO_DRIVE_BASE base::DriveBase
class DriveBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GDrive BaseObjectType;

DriveBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_drive_get_type(); } 

// gboolean g_drive_can_eject (GDrive* drive);
// gboolean g_drive_can_eject (::GDrive* drive);
GI_INLINE_DECL bool can_eject () noexcept;

// gboolean g_drive_can_poll_for_media (GDrive* drive);
// gboolean g_drive_can_poll_for_media (::GDrive* drive);
GI_INLINE_DECL bool can_poll_for_media () noexcept;

// gboolean g_drive_can_start (GDrive* drive);
// gboolean g_drive_can_start (::GDrive* drive);
GI_INLINE_DECL bool can_start () noexcept;

// gboolean g_drive_can_start_degraded (GDrive* drive);
// gboolean g_drive_can_start_degraded (::GDrive* drive);
GI_INLINE_DECL bool can_start_degraded () noexcept;

// gboolean g_drive_can_stop (GDrive* drive);
// gboolean g_drive_can_stop (::GDrive* drive);
GI_INLINE_DECL bool can_stop () noexcept;

// void g_drive_eject (GDrive* drive, GMountUnmountFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_drive_eject (::GDrive* drive, ::GMountUnmountFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// IGNORE; deprecated

// gboolean g_drive_eject_finish (GDrive* drive, GAsyncResult* result, GError ** error);
// gboolean g_drive_eject_finish (::GDrive* drive, ::GAsyncResult* result, GError ** error);
// IGNORE; deprecated

// void g_drive_eject_with_operation (GDrive* drive, GMountUnmountFlags flags, GMountOperation* mount_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_drive_eject_with_operation (::GDrive* drive, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void eject_with_operation (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void eject_with_operation (Gio::MountUnmountFlags flags, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_drive_eject_with_operation_finish (GDrive* drive, GAsyncResult* result, GError ** error);
// gboolean g_drive_eject_with_operation_finish (::GDrive* drive, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL bool eject_with_operation_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool eject_with_operation_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// char** g_drive_enumerate_identifiers (GDrive* drive);
// char** g_drive_enumerate_identifiers (::GDrive* drive);
GI_INLINE_DECL std::vector<std::string> enumerate_identifiers () noexcept;

// GIcon* g_drive_get_icon (GDrive* drive);
// ::GIcon* g_drive_get_icon (::GDrive* drive);
GI_INLINE_DECL Gio::Icon get_icon () noexcept;

// char* g_drive_get_identifier (GDrive* drive, const char* kind);
// char* g_drive_get_identifier (::GDrive* drive, const char* kind);
GI_INLINE_DECL std::string get_identifier (const std::string & kind) noexcept;

// char* g_drive_get_name (GDrive* drive);
// char* g_drive_get_name (::GDrive* drive);
GI_INLINE_DECL std::string get_name () noexcept;

// const gchar* g_drive_get_sort_key (GDrive* drive);
// const char* g_drive_get_sort_key (::GDrive* drive);
GI_INLINE_DECL std::string get_sort_key () noexcept;

// GDriveStartStopType g_drive_get_start_stop_type (GDrive* drive);
// ::GDriveStartStopType g_drive_get_start_stop_type (::GDrive* drive);
GI_INLINE_DECL Gio::DriveStartStopType get_start_stop_type () noexcept;

// GIcon* g_drive_get_symbolic_icon (GDrive* drive);
// ::GIcon* g_drive_get_symbolic_icon (::GDrive* drive);
GI_INLINE_DECL Gio::Icon get_symbolic_icon () noexcept;

// GList* g_drive_get_volumes (GDrive* drive);
// ::GList* g_drive_get_volumes (::GDrive* drive);
GI_INLINE_DECL std::vector<Gio::Volume> get_volumes () noexcept;

// gboolean g_drive_has_media (GDrive* drive);
// gboolean g_drive_has_media (::GDrive* drive);
GI_INLINE_DECL bool has_media () noexcept;

// gboolean g_drive_has_volumes (GDrive* drive);
// gboolean g_drive_has_volumes (::GDrive* drive);
GI_INLINE_DECL bool has_volumes () noexcept;

// gboolean g_drive_is_media_check_automatic (GDrive* drive);
// gboolean g_drive_is_media_check_automatic (::GDrive* drive);
GI_INLINE_DECL bool is_media_check_automatic () noexcept;

// gboolean g_drive_is_media_removable (GDrive* drive);
// gboolean g_drive_is_media_removable (::GDrive* drive);
GI_INLINE_DECL bool is_media_removable () noexcept;

// gboolean g_drive_is_removable (GDrive* drive);
// gboolean g_drive_is_removable (::GDrive* drive);
GI_INLINE_DECL bool is_removable () noexcept;

// void g_drive_poll_for_media (GDrive* drive, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_drive_poll_for_media (::GDrive* drive, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void poll_for_media (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void poll_for_media (Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_drive_poll_for_media_finish (GDrive* drive, GAsyncResult* result, GError ** error);
// gboolean g_drive_poll_for_media_finish (::GDrive* drive, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL bool poll_for_media_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool poll_for_media_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void g_drive_start (GDrive* drive, GDriveStartFlags flags, GMountOperation* mount_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_drive_start (::GDrive* drive, ::GDriveStartFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void start (Gio::DriveStartFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void start (Gio::DriveStartFlags flags, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_drive_start_finish (GDrive* drive, GAsyncResult* result, GError ** error);
// gboolean g_drive_start_finish (::GDrive* drive, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL bool start_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool start_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void g_drive_stop (GDrive* drive, GMountUnmountFlags flags, GMountOperation* mount_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_drive_stop (::GDrive* drive, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void stop (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void stop (Gio::MountUnmountFlags flags, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_drive_stop_finish (GDrive* drive, GAsyncResult* result, GError ** error);
// gboolean g_drive_stop_finish (::GDrive* drive, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL bool stop_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool stop_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// signal changed
gi::signal_proxy<void(Gio::Drive)> signal_changed()
{ return gi::signal_proxy<void(Gio::Drive)> (*this, "changed"); }

// signal disconnected
gi::signal_proxy<void(Gio::Drive)> signal_disconnected()
{ return gi::signal_proxy<void(Gio::Drive)> (*this, "disconnected"); }

// signal eject-button
gi::signal_proxy<void(Gio::Drive)> signal_eject_button()
{ return gi::signal_proxy<void(Gio::Drive)> (*this, "eject-button"); }

// signal stop-button
gi::signal_proxy<void(Gio::Drive)> signal_stop_button()
{ return gi::signal_proxy<void(Gio::Drive)> (*this, "stop-button"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/drive_extra_def.hpp>)
#include <gio/drive_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/drive_extra.hpp>)
#include <gio/drive_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class Drive : public GI_GIO_DRIVE_BASE
{ typedef GI_GIO_DRIVE_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDrive>
{ typedef Gio::Drive type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class DriveIfaceDef
{
typedef DriveIfaceDef self;
public:
typedef Gio::Drive instance_type;
typedef ::GDriveIface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean Drive::can_eject (GDrive* drive);
// gboolean Drive::can_eject (::GDrive* drive);
virtual bool can_eject_ () noexcept = 0;

// gboolean Drive::can_poll_for_media (GDrive* drive);
// gboolean Drive::can_poll_for_media (::GDrive* drive);
virtual bool can_poll_for_media_ () noexcept = 0;

// gboolean Drive::can_start (GDrive* drive);
// gboolean Drive::can_start (::GDrive* drive);
virtual bool can_start_ () noexcept = 0;

// gboolean Drive::can_start_degraded (GDrive* drive);
// gboolean Drive::can_start_degraded (::GDrive* drive);
virtual bool can_start_degraded_ () noexcept = 0;

// gboolean Drive::can_stop (GDrive* drive);
// gboolean Drive::can_stop (::GDrive* drive);
virtual bool can_stop_ () noexcept = 0;

// void Drive::changed (GDrive* drive);
// void Drive::changed (::GDrive* drive);
virtual void changed_ () noexcept = 0;

// void Drive::disconnected (GDrive* drive);
// void Drive::disconnected (::GDrive* drive);
virtual void disconnected_ () noexcept = 0;

// void Drive::eject (GDrive* drive, GMountUnmountFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void Drive::eject (::GDrive* drive, ::GMountUnmountFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// IGNORE; deprecated, virtual-method callback parameter not supported

// void Drive::eject_button (GDrive* drive);
// void Drive::eject_button (::GDrive* drive);
virtual void eject_button_ () noexcept = 0;

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
virtual Gio::Icon get_icon_ () noexcept = 0;

// char* Drive::get_identifier (GDrive* drive, const char* kind);
// char* Drive::get_identifier (::GDrive* drive, const char* kind);
virtual std::string get_identifier_ (const std::string & kind) noexcept = 0;

// char* Drive::get_name (GDrive* drive);
// char* Drive::get_name (::GDrive* drive);
virtual std::string get_name_ () noexcept = 0;

// const gchar* Drive::get_sort_key (GDrive* drive);
// const char* Drive::get_sort_key (::GDrive* drive);
// SKIP; invalid callback return transfer none

// GDriveStartStopType Drive::get_start_stop_type (GDrive* drive);
// ::GDriveStartStopType Drive::get_start_stop_type (::GDrive* drive);
virtual Gio::DriveStartStopType get_start_stop_type_ () noexcept = 0;

// GIcon* Drive::get_symbolic_icon (GDrive* drive);
// ::GIcon* Drive::get_symbolic_icon (::GDrive* drive);
virtual Gio::Icon get_symbolic_icon_ () noexcept = 0;

// GList* Drive::get_volumes (GDrive* drive);
// ::GList* Drive::get_volumes (::GDrive* drive);
// SKIP; container return not supported

// gboolean Drive::has_media (GDrive* drive);
// gboolean Drive::has_media (::GDrive* drive);
virtual bool has_media_ () noexcept = 0;

// gboolean Drive::has_volumes (GDrive* drive);
// gboolean Drive::has_volumes (::GDrive* drive);
virtual bool has_volumes_ () noexcept = 0;

// gboolean Drive::is_media_check_automatic (GDrive* drive);
// gboolean Drive::is_media_check_automatic (::GDrive* drive);
virtual bool is_media_check_automatic_ () noexcept = 0;

// gboolean Drive::is_media_removable (GDrive* drive);
// gboolean Drive::is_media_removable (::GDrive* drive);
virtual bool is_media_removable_ () noexcept = 0;

// gboolean Drive::is_removable (GDrive* drive);
// gboolean Drive::is_removable (::GDrive* drive);
virtual bool is_removable_ () noexcept = 0;

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
virtual void stop_button_ () noexcept = 0;

// gboolean Drive::stop_finish (GDrive* drive, GAsyncResult* result, GError ** error);
// gboolean Drive::stop_finish (::GDrive* drive, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported


};

using DriveImpl = detail::InterfaceImpl<DriveIfaceDef>;

class DriveIfaceClassImpl: public detail::InterfaceClassImpl<DriveImpl>
{
typedef DriveIfaceClassImpl self;
typedef detail::InterfaceClassImpl<DriveImpl> super;

protected:
using super::super;

// gboolean Drive::can_eject (GDrive* drive);
// gboolean Drive::can_eject (::GDrive* drive);
GI_INLINE_DECL bool can_eject_ () noexcept override;

// gboolean Drive::can_poll_for_media (GDrive* drive);
// gboolean Drive::can_poll_for_media (::GDrive* drive);
GI_INLINE_DECL bool can_poll_for_media_ () noexcept override;

// gboolean Drive::can_start (GDrive* drive);
// gboolean Drive::can_start (::GDrive* drive);
GI_INLINE_DECL bool can_start_ () noexcept override;

// gboolean Drive::can_start_degraded (GDrive* drive);
// gboolean Drive::can_start_degraded (::GDrive* drive);
GI_INLINE_DECL bool can_start_degraded_ () noexcept override;

// gboolean Drive::can_stop (GDrive* drive);
// gboolean Drive::can_stop (::GDrive* drive);
GI_INLINE_DECL bool can_stop_ () noexcept override;

// void Drive::changed (GDrive* drive);
// void Drive::changed (::GDrive* drive);
GI_INLINE_DECL void changed_ () noexcept override;

// void Drive::disconnected (GDrive* drive);
// void Drive::disconnected (::GDrive* drive);
GI_INLINE_DECL void disconnected_ () noexcept override;

// void Drive::eject (GDrive* drive, GMountUnmountFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void Drive::eject (::GDrive* drive, ::GMountUnmountFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// IGNORE; deprecated, virtual-method callback parameter not supported

// void Drive::eject_button (GDrive* drive);
// void Drive::eject_button (::GDrive* drive);
GI_INLINE_DECL void eject_button_ () noexcept override;

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
GI_INLINE_DECL Gio::Icon get_icon_ () noexcept override;

// char* Drive::get_identifier (GDrive* drive, const char* kind);
// char* Drive::get_identifier (::GDrive* drive, const char* kind);
GI_INLINE_DECL std::string get_identifier_ (const std::string & kind) noexcept override;

// char* Drive::get_name (GDrive* drive);
// char* Drive::get_name (::GDrive* drive);
GI_INLINE_DECL std::string get_name_ () noexcept override;

// const gchar* Drive::get_sort_key (GDrive* drive);
// const char* Drive::get_sort_key (::GDrive* drive);
// SKIP; invalid callback return transfer none

// GDriveStartStopType Drive::get_start_stop_type (GDrive* drive);
// ::GDriveStartStopType Drive::get_start_stop_type (::GDrive* drive);
GI_INLINE_DECL Gio::DriveStartStopType get_start_stop_type_ () noexcept override;

// GIcon* Drive::get_symbolic_icon (GDrive* drive);
// ::GIcon* Drive::get_symbolic_icon (::GDrive* drive);
GI_INLINE_DECL Gio::Icon get_symbolic_icon_ () noexcept override;

// GList* Drive::get_volumes (GDrive* drive);
// ::GList* Drive::get_volumes (::GDrive* drive);
// SKIP; container return not supported

// gboolean Drive::has_media (GDrive* drive);
// gboolean Drive::has_media (::GDrive* drive);
GI_INLINE_DECL bool has_media_ () noexcept override;

// gboolean Drive::has_volumes (GDrive* drive);
// gboolean Drive::has_volumes (::GDrive* drive);
GI_INLINE_DECL bool has_volumes_ () noexcept override;

// gboolean Drive::is_media_check_automatic (GDrive* drive);
// gboolean Drive::is_media_check_automatic (::GDrive* drive);
GI_INLINE_DECL bool is_media_check_automatic_ () noexcept override;

// gboolean Drive::is_media_removable (GDrive* drive);
// gboolean Drive::is_media_removable (::GDrive* drive);
GI_INLINE_DECL bool is_media_removable_ () noexcept override;

// gboolean Drive::is_removable (GDrive* drive);
// gboolean Drive::is_removable (::GDrive* drive);
GI_INLINE_DECL bool is_removable_ () noexcept override;

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
GI_INLINE_DECL void stop_button_ () noexcept override;

// gboolean Drive::stop_finish (GDrive* drive, GAsyncResult* result, GError ** error);
// gboolean Drive::stop_finish (::GDrive* drive, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported


};

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
