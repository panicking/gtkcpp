// AUTO-GENERATED

#ifndef _GI_GIO_VOLUMEMONITOR_HPP_
#define _GI_GIO_VOLUMEMONITOR_HPP_


namespace gi {

namespace repository {

namespace Gio {

class Drive;
class Mount;
class Volume;

class VolumeMonitor;

namespace base {


#define GI_GIO_VOLUMEMONITOR_BASE base::VolumeMonitorBase
class VolumeMonitorBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GVolumeMonitor BaseObjectType;

VolumeMonitorBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_volume_monitor_get_type(); } 

// GVolume* g_volume_monitor_adopt_orphan_mount (GMount* mount);
// ::GVolume* g_volume_monitor_adopt_orphan_mount (::GMount* mount);
// IGNORE; deprecated

// GVolumeMonitor* g_volume_monitor_get ();
// ::GVolumeMonitor* g_volume_monitor_get ();
static GI_INLINE_DECL Gio::VolumeMonitor get () noexcept;

// GList* g_volume_monitor_get_connected_drives (GVolumeMonitor* volume_monitor);
// ::GList* g_volume_monitor_get_connected_drives (::GVolumeMonitor* volume_monitor);
GI_INLINE_DECL std::vector<Gio::Drive> get_connected_drives () noexcept;

// GMount* g_volume_monitor_get_mount_for_uuid (GVolumeMonitor* volume_monitor, const char* uuid);
// ::GMount* g_volume_monitor_get_mount_for_uuid (::GVolumeMonitor* volume_monitor, const char* uuid);
GI_INLINE_DECL Gio::Mount get_mount_for_uuid (const std::string & uuid) noexcept;

// GList* g_volume_monitor_get_mounts (GVolumeMonitor* volume_monitor);
// ::GList* g_volume_monitor_get_mounts (::GVolumeMonitor* volume_monitor);
GI_INLINE_DECL std::vector<Gio::Mount> get_mounts () noexcept;

// GVolume* g_volume_monitor_get_volume_for_uuid (GVolumeMonitor* volume_monitor, const char* uuid);
// ::GVolume* g_volume_monitor_get_volume_for_uuid (::GVolumeMonitor* volume_monitor, const char* uuid);
GI_INLINE_DECL Gio::Volume get_volume_for_uuid (const std::string & uuid) noexcept;

// GList* g_volume_monitor_get_volumes (GVolumeMonitor* volume_monitor);
// ::GList* g_volume_monitor_get_volumes (::GVolumeMonitor* volume_monitor);
GI_INLINE_DECL std::vector<Gio::Volume> get_volumes () noexcept;

// signal drive-changed
gi::signal_proxy<void(Gio::VolumeMonitor, Gio::Drive drive)> signal_drive_changed()
{ return gi::signal_proxy<void(Gio::VolumeMonitor, Gio::Drive drive)> (*this, "drive-changed"); }

// signal drive-connected
gi::signal_proxy<void(Gio::VolumeMonitor, Gio::Drive drive)> signal_drive_connected()
{ return gi::signal_proxy<void(Gio::VolumeMonitor, Gio::Drive drive)> (*this, "drive-connected"); }

// signal drive-disconnected
gi::signal_proxy<void(Gio::VolumeMonitor, Gio::Drive drive)> signal_drive_disconnected()
{ return gi::signal_proxy<void(Gio::VolumeMonitor, Gio::Drive drive)> (*this, "drive-disconnected"); }

// signal drive-eject-button
gi::signal_proxy<void(Gio::VolumeMonitor, Gio::Drive drive)> signal_drive_eject_button()
{ return gi::signal_proxy<void(Gio::VolumeMonitor, Gio::Drive drive)> (*this, "drive-eject-button"); }

// signal drive-stop-button
gi::signal_proxy<void(Gio::VolumeMonitor, Gio::Drive drive)> signal_drive_stop_button()
{ return gi::signal_proxy<void(Gio::VolumeMonitor, Gio::Drive drive)> (*this, "drive-stop-button"); }

// signal mount-added
gi::signal_proxy<void(Gio::VolumeMonitor, Gio::Mount mount)> signal_mount_added()
{ return gi::signal_proxy<void(Gio::VolumeMonitor, Gio::Mount mount)> (*this, "mount-added"); }

// signal mount-changed
gi::signal_proxy<void(Gio::VolumeMonitor, Gio::Mount mount)> signal_mount_changed()
{ return gi::signal_proxy<void(Gio::VolumeMonitor, Gio::Mount mount)> (*this, "mount-changed"); }

// signal mount-pre-unmount
gi::signal_proxy<void(Gio::VolumeMonitor, Gio::Mount mount)> signal_mount_pre_unmount()
{ return gi::signal_proxy<void(Gio::VolumeMonitor, Gio::Mount mount)> (*this, "mount-pre-unmount"); }

// signal mount-removed
gi::signal_proxy<void(Gio::VolumeMonitor, Gio::Mount mount)> signal_mount_removed()
{ return gi::signal_proxy<void(Gio::VolumeMonitor, Gio::Mount mount)> (*this, "mount-removed"); }

// signal volume-added
gi::signal_proxy<void(Gio::VolumeMonitor, Gio::Volume volume)> signal_volume_added()
{ return gi::signal_proxy<void(Gio::VolumeMonitor, Gio::Volume volume)> (*this, "volume-added"); }

// signal volume-changed
gi::signal_proxy<void(Gio::VolumeMonitor, Gio::Volume volume)> signal_volume_changed()
{ return gi::signal_proxy<void(Gio::VolumeMonitor, Gio::Volume volume)> (*this, "volume-changed"); }

// signal volume-removed
gi::signal_proxy<void(Gio::VolumeMonitor, Gio::Volume volume)> signal_volume_removed()
{ return gi::signal_proxy<void(Gio::VolumeMonitor, Gio::Volume volume)> (*this, "volume-removed"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/volumemonitor_extra_def.hpp>)
#include <gio/volumemonitor_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/volumemonitor_extra.hpp>)
#include <gio/volumemonitor_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class VolumeMonitor : public GI_GIO_VOLUMEMONITOR_BASE
{ typedef GI_GIO_VOLUMEMONITOR_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GVolumeMonitor>
{ typedef Gio::VolumeMonitor type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class VolumeMonitorClassDef
{
typedef VolumeMonitorClassDef self;
public:
typedef Gio::VolumeMonitor instance_type;
typedef ::GVolumeMonitorClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void VolumeMonitor::drive_changed (GVolumeMonitor* volume_monitor, GDrive* drive);
// void VolumeMonitor::drive_changed (::GVolumeMonitor* volume_monitor, ::GDrive* drive);
virtual void drive_changed_ (Gio::Drive drive) noexcept = 0;

// void VolumeMonitor::drive_connected (GVolumeMonitor* volume_monitor, GDrive* drive);
// void VolumeMonitor::drive_connected (::GVolumeMonitor* volume_monitor, ::GDrive* drive);
virtual void drive_connected_ (Gio::Drive drive) noexcept = 0;

// void VolumeMonitor::drive_disconnected (GVolumeMonitor* volume_monitor, GDrive* drive);
// void VolumeMonitor::drive_disconnected (::GVolumeMonitor* volume_monitor, ::GDrive* drive);
virtual void drive_disconnected_ (Gio::Drive drive) noexcept = 0;

// void VolumeMonitor::drive_eject_button (GVolumeMonitor* volume_monitor, GDrive* drive);
// void VolumeMonitor::drive_eject_button (::GVolumeMonitor* volume_monitor, ::GDrive* drive);
virtual void drive_eject_button_ (Gio::Drive drive) noexcept = 0;

// void VolumeMonitor::drive_stop_button (GVolumeMonitor* volume_monitor, GDrive* drive);
// void VolumeMonitor::drive_stop_button (::GVolumeMonitor* volume_monitor, ::GDrive* drive);
virtual void drive_stop_button_ (Gio::Drive drive) noexcept = 0;

// GList* VolumeMonitor::get_connected_drives (GVolumeMonitor* volume_monitor);
// ::GList* VolumeMonitor::get_connected_drives (::GVolumeMonitor* volume_monitor);
// SKIP; container return not supported

// GMount* VolumeMonitor::get_mount_for_uuid (GVolumeMonitor* volume_monitor, const char* uuid);
// ::GMount* VolumeMonitor::get_mount_for_uuid (::GVolumeMonitor* volume_monitor, const char* uuid);
virtual Gio::Mount get_mount_for_uuid_ (const std::string & uuid) noexcept = 0;

// GList* VolumeMonitor::get_mounts (GVolumeMonitor* volume_monitor);
// ::GList* VolumeMonitor::get_mounts (::GVolumeMonitor* volume_monitor);
// SKIP; container return not supported

// GVolume* VolumeMonitor::get_volume_for_uuid (GVolumeMonitor* volume_monitor, const char* uuid);
// ::GVolume* VolumeMonitor::get_volume_for_uuid (::GVolumeMonitor* volume_monitor, const char* uuid);
virtual Gio::Volume get_volume_for_uuid_ (const std::string & uuid) noexcept = 0;

// GList* VolumeMonitor::get_volumes (GVolumeMonitor* volume_monitor);
// ::GList* VolumeMonitor::get_volumes (::GVolumeMonitor* volume_monitor);
// SKIP; container return not supported

// void VolumeMonitor::mount_added (GVolumeMonitor* volume_monitor, GMount* mount);
// void VolumeMonitor::mount_added (::GVolumeMonitor* volume_monitor, ::GMount* mount);
virtual void mount_added_ (Gio::Mount mount) noexcept = 0;

// void VolumeMonitor::mount_changed (GVolumeMonitor* volume_monitor, GMount* mount);
// void VolumeMonitor::mount_changed (::GVolumeMonitor* volume_monitor, ::GMount* mount);
virtual void mount_changed_ (Gio::Mount mount) noexcept = 0;

// void VolumeMonitor::mount_pre_unmount (GVolumeMonitor* volume_monitor, GMount* mount);
// void VolumeMonitor::mount_pre_unmount (::GVolumeMonitor* volume_monitor, ::GMount* mount);
virtual void mount_pre_unmount_ (Gio::Mount mount) noexcept = 0;

// void VolumeMonitor::mount_removed (GVolumeMonitor* volume_monitor, GMount* mount);
// void VolumeMonitor::mount_removed (::GVolumeMonitor* volume_monitor, ::GMount* mount);
virtual void mount_removed_ (Gio::Mount mount) noexcept = 0;

// void VolumeMonitor::volume_added (GVolumeMonitor* volume_monitor, GVolume* volume);
// void VolumeMonitor::volume_added (::GVolumeMonitor* volume_monitor, ::GVolume* volume);
virtual void volume_added_ (Gio::Volume volume) noexcept = 0;

// void VolumeMonitor::volume_changed (GVolumeMonitor* volume_monitor, GVolume* volume);
// void VolumeMonitor::volume_changed (::GVolumeMonitor* volume_monitor, ::GVolume* volume);
virtual void volume_changed_ (Gio::Volume volume) noexcept = 0;

// void VolumeMonitor::volume_removed (GVolumeMonitor* volume_monitor, GVolume* volume);
// void VolumeMonitor::volume_removed (::GVolumeMonitor* volume_monitor, ::GVolume* volume);
virtual void volume_removed_ (Gio::Volume volume) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class VolumeMonitorClass: public detail::ClassTemplate<Gio::impl::internal::VolumeMonitorClassDef, GObject::impl::internal::ObjectClass>
{
typedef VolumeMonitorClass self;
typedef detail::ClassTemplate<Gio::impl::internal::VolumeMonitorClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void VolumeMonitor::drive_changed (GVolumeMonitor* volume_monitor, GDrive* drive);
// void VolumeMonitor::drive_changed (::GVolumeMonitor* volume_monitor, ::GDrive* drive);
GI_INLINE_DECL void drive_changed_ (Gio::Drive drive) noexcept override;

// void VolumeMonitor::drive_connected (GVolumeMonitor* volume_monitor, GDrive* drive);
// void VolumeMonitor::drive_connected (::GVolumeMonitor* volume_monitor, ::GDrive* drive);
GI_INLINE_DECL void drive_connected_ (Gio::Drive drive) noexcept override;

// void VolumeMonitor::drive_disconnected (GVolumeMonitor* volume_monitor, GDrive* drive);
// void VolumeMonitor::drive_disconnected (::GVolumeMonitor* volume_monitor, ::GDrive* drive);
GI_INLINE_DECL void drive_disconnected_ (Gio::Drive drive) noexcept override;

// void VolumeMonitor::drive_eject_button (GVolumeMonitor* volume_monitor, GDrive* drive);
// void VolumeMonitor::drive_eject_button (::GVolumeMonitor* volume_monitor, ::GDrive* drive);
GI_INLINE_DECL void drive_eject_button_ (Gio::Drive drive) noexcept override;

// void VolumeMonitor::drive_stop_button (GVolumeMonitor* volume_monitor, GDrive* drive);
// void VolumeMonitor::drive_stop_button (::GVolumeMonitor* volume_monitor, ::GDrive* drive);
GI_INLINE_DECL void drive_stop_button_ (Gio::Drive drive) noexcept override;

// GList* VolumeMonitor::get_connected_drives (GVolumeMonitor* volume_monitor);
// ::GList* VolumeMonitor::get_connected_drives (::GVolumeMonitor* volume_monitor);
// SKIP; container return not supported

// GMount* VolumeMonitor::get_mount_for_uuid (GVolumeMonitor* volume_monitor, const char* uuid);
// ::GMount* VolumeMonitor::get_mount_for_uuid (::GVolumeMonitor* volume_monitor, const char* uuid);
GI_INLINE_DECL Gio::Mount get_mount_for_uuid_ (const std::string & uuid) noexcept override;

// GList* VolumeMonitor::get_mounts (GVolumeMonitor* volume_monitor);
// ::GList* VolumeMonitor::get_mounts (::GVolumeMonitor* volume_monitor);
// SKIP; container return not supported

// GVolume* VolumeMonitor::get_volume_for_uuid (GVolumeMonitor* volume_monitor, const char* uuid);
// ::GVolume* VolumeMonitor::get_volume_for_uuid (::GVolumeMonitor* volume_monitor, const char* uuid);
GI_INLINE_DECL Gio::Volume get_volume_for_uuid_ (const std::string & uuid) noexcept override;

// GList* VolumeMonitor::get_volumes (GVolumeMonitor* volume_monitor);
// ::GList* VolumeMonitor::get_volumes (::GVolumeMonitor* volume_monitor);
// SKIP; container return not supported

// void VolumeMonitor::mount_added (GVolumeMonitor* volume_monitor, GMount* mount);
// void VolumeMonitor::mount_added (::GVolumeMonitor* volume_monitor, ::GMount* mount);
GI_INLINE_DECL void mount_added_ (Gio::Mount mount) noexcept override;

// void VolumeMonitor::mount_changed (GVolumeMonitor* volume_monitor, GMount* mount);
// void VolumeMonitor::mount_changed (::GVolumeMonitor* volume_monitor, ::GMount* mount);
GI_INLINE_DECL void mount_changed_ (Gio::Mount mount) noexcept override;

// void VolumeMonitor::mount_pre_unmount (GVolumeMonitor* volume_monitor, GMount* mount);
// void VolumeMonitor::mount_pre_unmount (::GVolumeMonitor* volume_monitor, ::GMount* mount);
GI_INLINE_DECL void mount_pre_unmount_ (Gio::Mount mount) noexcept override;

// void VolumeMonitor::mount_removed (GVolumeMonitor* volume_monitor, GMount* mount);
// void VolumeMonitor::mount_removed (::GVolumeMonitor* volume_monitor, ::GMount* mount);
GI_INLINE_DECL void mount_removed_ (Gio::Mount mount) noexcept override;

// void VolumeMonitor::volume_added (GVolumeMonitor* volume_monitor, GVolume* volume);
// void VolumeMonitor::volume_added (::GVolumeMonitor* volume_monitor, ::GVolume* volume);
GI_INLINE_DECL void volume_added_ (Gio::Volume volume) noexcept override;

// void VolumeMonitor::volume_changed (GVolumeMonitor* volume_monitor, GVolume* volume);
// void VolumeMonitor::volume_changed (::GVolumeMonitor* volume_monitor, ::GVolume* volume);
GI_INLINE_DECL void volume_changed_ (Gio::Volume volume) noexcept override;

// void VolumeMonitor::volume_removed (GVolumeMonitor* volume_monitor, GVolume* volume);
// void VolumeMonitor::volume_removed (::GVolumeMonitor* volume_monitor, ::GVolume* volume);
GI_INLINE_DECL void volume_removed_ (Gio::Volume volume) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using VolumeMonitorImpl = detail::ObjectImpl<VolumeMonitor, internal::VolumeMonitorClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
