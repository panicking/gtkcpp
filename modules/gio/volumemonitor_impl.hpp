// AUTO-GENERATED

#ifndef _GI_GIO_VOLUMEMONITOR_IMPL_HPP_
#define _GI_GIO_VOLUMEMONITOR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GVolume* g_volume_monitor_adopt_orphan_mount (GMount* mount);
// ::GVolume* g_volume_monitor_adopt_orphan_mount (::GMount* mount);
// IGNORE; deprecated

// GVolumeMonitor* g_volume_monitor_get ();
// ::GVolumeMonitor* g_volume_monitor_get ();
Gio::VolumeMonitor base::VolumeMonitorBase::get () noexcept
{
  typedef ::GVolumeMonitor* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_volume_monitor_get;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GList* g_volume_monitor_get_connected_drives (GVolumeMonitor* volume_monitor);
// ::GList* g_volume_monitor_get_connected_drives (::GVolumeMonitor* volume_monitor);
std::vector<Gio::Drive> base::VolumeMonitorBase::get_connected_drives () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GVolumeMonitor* volume_monitor);
  call_wrap_t call_wrap_v = (call_wrap_t) g_volume_monitor_get_connected_drives;
  auto _temp_ret = call_wrap_v ((::GVolumeMonitor*) (gobj_()));
  return gi::detail::wrap_list<Gio::Drive> (_temp_ret, gi::transfer_full);
}

// GMount* g_volume_monitor_get_mount_for_uuid (GVolumeMonitor* volume_monitor, const char* uuid);
// ::GMount* g_volume_monitor_get_mount_for_uuid (::GVolumeMonitor* volume_monitor, const char* uuid);
Gio::Mount base::VolumeMonitorBase::get_mount_for_uuid (const std::string & uuid) noexcept
{
  typedef ::GMount* (*call_wrap_t) (::GVolumeMonitor* volume_monitor, const char* uuid);
  call_wrap_t call_wrap_v = (call_wrap_t) g_volume_monitor_get_mount_for_uuid;
  auto uuid_to_c = gi::unwrap (uuid, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GVolumeMonitor*) (gobj_()), (const char*) (uuid_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GList* g_volume_monitor_get_mounts (GVolumeMonitor* volume_monitor);
// ::GList* g_volume_monitor_get_mounts (::GVolumeMonitor* volume_monitor);
std::vector<Gio::Mount> base::VolumeMonitorBase::get_mounts () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GVolumeMonitor* volume_monitor);
  call_wrap_t call_wrap_v = (call_wrap_t) g_volume_monitor_get_mounts;
  auto _temp_ret = call_wrap_v ((::GVolumeMonitor*) (gobj_()));
  return gi::detail::wrap_list<Gio::Mount> (_temp_ret, gi::transfer_full);
}

// GVolume* g_volume_monitor_get_volume_for_uuid (GVolumeMonitor* volume_monitor, const char* uuid);
// ::GVolume* g_volume_monitor_get_volume_for_uuid (::GVolumeMonitor* volume_monitor, const char* uuid);
Gio::Volume base::VolumeMonitorBase::get_volume_for_uuid (const std::string & uuid) noexcept
{
  typedef ::GVolume* (*call_wrap_t) (::GVolumeMonitor* volume_monitor, const char* uuid);
  call_wrap_t call_wrap_v = (call_wrap_t) g_volume_monitor_get_volume_for_uuid;
  auto uuid_to_c = gi::unwrap (uuid, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GVolumeMonitor*) (gobj_()), (const char*) (uuid_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GList* g_volume_monitor_get_volumes (GVolumeMonitor* volume_monitor);
// ::GList* g_volume_monitor_get_volumes (::GVolumeMonitor* volume_monitor);
std::vector<Gio::Volume> base::VolumeMonitorBase::get_volumes () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GVolumeMonitor* volume_monitor);
  call_wrap_t call_wrap_v = (call_wrap_t) g_volume_monitor_get_volumes;
  auto _temp_ret = call_wrap_v ((::GVolumeMonitor*) (gobj_()));
  return gi::detail::wrap_list<Gio::Volume> (_temp_ret, gi::transfer_full);
}














} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/volumemonitor_extra_def_impl.hpp>)
#include <gio/volumemonitor_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/volumemonitor_extra_impl.hpp>)
#include <gio/volumemonitor_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void VolumeMonitorClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GVolumeMonitorClass *methods = (::GVolumeMonitorClass *) class_struct;
  (void) methods;

  methods->drive_changed = (decltype (methods->drive_changed)) detail::method_wrapper<self, void (*) (Gio::Drive drive), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::drive_changed_>;
  methods->drive_connected = (decltype (methods->drive_connected)) detail::method_wrapper<self, void (*) (Gio::Drive drive), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::drive_connected_>;
  methods->drive_disconnected = (decltype (methods->drive_disconnected)) detail::method_wrapper<self, void (*) (Gio::Drive drive), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::drive_disconnected_>;
  methods->drive_eject_button = (decltype (methods->drive_eject_button)) detail::method_wrapper<self, void (*) (Gio::Drive drive), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::drive_eject_button_>;
  methods->drive_stop_button = (decltype (methods->drive_stop_button)) detail::method_wrapper<self, void (*) (Gio::Drive drive), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::drive_stop_button_>;
  methods->get_mount_for_uuid = (decltype (methods->get_mount_for_uuid)) detail::method_wrapper<self, Gio::Mount (*) (const std::string & uuid), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::get_mount_for_uuid_>;
  methods->get_volume_for_uuid = (decltype (methods->get_volume_for_uuid)) detail::method_wrapper<self, Gio::Volume (*) (const std::string & uuid), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::get_volume_for_uuid_>;
  methods->mount_added = (decltype (methods->mount_added)) detail::method_wrapper<self, void (*) (Gio::Mount mount), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::mount_added_>;
  methods->mount_changed = (decltype (methods->mount_changed)) detail::method_wrapper<self, void (*) (Gio::Mount mount), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::mount_changed_>;
  methods->mount_pre_unmount = (decltype (methods->mount_pre_unmount)) detail::method_wrapper<self, void (*) (Gio::Mount mount), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::mount_pre_unmount_>;
  methods->mount_removed = (decltype (methods->mount_removed)) detail::method_wrapper<self, void (*) (Gio::Mount mount), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::mount_removed_>;
  methods->volume_added = (decltype (methods->volume_added)) detail::method_wrapper<self, void (*) (Gio::Volume volume), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::volume_added_>;
  methods->volume_changed = (decltype (methods->volume_changed)) detail::method_wrapper<self, void (*) (Gio::Volume volume), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::volume_changed_>;
  methods->volume_removed = (decltype (methods->volume_removed)) detail::method_wrapper<self, void (*) (Gio::Volume volume), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::volume_removed_>;
}

// void VolumeMonitor::drive_changed (GVolumeMonitor* volume_monitor, GDrive* drive);
// void VolumeMonitor::drive_changed (::GVolumeMonitor* volume_monitor, ::GDrive* drive);
void VolumeMonitorClass::drive_changed_ (Gio::Drive drive) noexcept
{
  if (!get_struct_()->drive_changed) return ;
  typedef void (*call_wrap_t) (::GVolumeMonitor* volume_monitor, ::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->drive_changed;
  auto drive_to_c = gi::unwrap (drive, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GVolumeMonitor*) (gobj_()), (::GDrive*) (drive_to_c));
}

// void VolumeMonitor::drive_connected (GVolumeMonitor* volume_monitor, GDrive* drive);
// void VolumeMonitor::drive_connected (::GVolumeMonitor* volume_monitor, ::GDrive* drive);
void VolumeMonitorClass::drive_connected_ (Gio::Drive drive) noexcept
{
  if (!get_struct_()->drive_connected) return ;
  typedef void (*call_wrap_t) (::GVolumeMonitor* volume_monitor, ::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->drive_connected;
  auto drive_to_c = gi::unwrap (drive, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GVolumeMonitor*) (gobj_()), (::GDrive*) (drive_to_c));
}

// void VolumeMonitor::drive_disconnected (GVolumeMonitor* volume_monitor, GDrive* drive);
// void VolumeMonitor::drive_disconnected (::GVolumeMonitor* volume_monitor, ::GDrive* drive);
void VolumeMonitorClass::drive_disconnected_ (Gio::Drive drive) noexcept
{
  if (!get_struct_()->drive_disconnected) return ;
  typedef void (*call_wrap_t) (::GVolumeMonitor* volume_monitor, ::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->drive_disconnected;
  auto drive_to_c = gi::unwrap (drive, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GVolumeMonitor*) (gobj_()), (::GDrive*) (drive_to_c));
}

// void VolumeMonitor::drive_eject_button (GVolumeMonitor* volume_monitor, GDrive* drive);
// void VolumeMonitor::drive_eject_button (::GVolumeMonitor* volume_monitor, ::GDrive* drive);
void VolumeMonitorClass::drive_eject_button_ (Gio::Drive drive) noexcept
{
  if (!get_struct_()->drive_eject_button) return ;
  typedef void (*call_wrap_t) (::GVolumeMonitor* volume_monitor, ::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->drive_eject_button;
  auto drive_to_c = gi::unwrap (drive, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GVolumeMonitor*) (gobj_()), (::GDrive*) (drive_to_c));
}

// void VolumeMonitor::drive_stop_button (GVolumeMonitor* volume_monitor, GDrive* drive);
// void VolumeMonitor::drive_stop_button (::GVolumeMonitor* volume_monitor, ::GDrive* drive);
void VolumeMonitorClass::drive_stop_button_ (Gio::Drive drive) noexcept
{
  if (!get_struct_()->drive_stop_button) return ;
  typedef void (*call_wrap_t) (::GVolumeMonitor* volume_monitor, ::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->drive_stop_button;
  auto drive_to_c = gi::unwrap (drive, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GVolumeMonitor*) (gobj_()), (::GDrive*) (drive_to_c));
}

// GList* VolumeMonitor::get_connected_drives (GVolumeMonitor* volume_monitor);
// ::GList* VolumeMonitor::get_connected_drives (::GVolumeMonitor* volume_monitor);
// SKIP; container return not supported

// GMount* VolumeMonitor::get_mount_for_uuid (GVolumeMonitor* volume_monitor, const char* uuid);
// ::GMount* VolumeMonitor::get_mount_for_uuid (::GVolumeMonitor* volume_monitor, const char* uuid);
Gio::Mount VolumeMonitorClass::get_mount_for_uuid_ (const std::string & uuid) noexcept
{
  if (!get_struct_()->get_mount_for_uuid) return Gio::Mount{};
  typedef ::GMount* (*call_wrap_t) (::GVolumeMonitor* volume_monitor, const char* uuid);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_mount_for_uuid;
  auto uuid_to_c = gi::unwrap (uuid, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GVolumeMonitor*) (gobj_()), (const char*) (uuid_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GList* VolumeMonitor::get_mounts (GVolumeMonitor* volume_monitor);
// ::GList* VolumeMonitor::get_mounts (::GVolumeMonitor* volume_monitor);
// SKIP; container return not supported

// GVolume* VolumeMonitor::get_volume_for_uuid (GVolumeMonitor* volume_monitor, const char* uuid);
// ::GVolume* VolumeMonitor::get_volume_for_uuid (::GVolumeMonitor* volume_monitor, const char* uuid);
Gio::Volume VolumeMonitorClass::get_volume_for_uuid_ (const std::string & uuid) noexcept
{
  if (!get_struct_()->get_volume_for_uuid) return Gio::Volume{};
  typedef ::GVolume* (*call_wrap_t) (::GVolumeMonitor* volume_monitor, const char* uuid);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_volume_for_uuid;
  auto uuid_to_c = gi::unwrap (uuid, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GVolumeMonitor*) (gobj_()), (const char*) (uuid_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GList* VolumeMonitor::get_volumes (GVolumeMonitor* volume_monitor);
// ::GList* VolumeMonitor::get_volumes (::GVolumeMonitor* volume_monitor);
// SKIP; container return not supported

// void VolumeMonitor::mount_added (GVolumeMonitor* volume_monitor, GMount* mount);
// void VolumeMonitor::mount_added (::GVolumeMonitor* volume_monitor, ::GMount* mount);
void VolumeMonitorClass::mount_added_ (Gio::Mount mount) noexcept
{
  if (!get_struct_()->mount_added) return ;
  typedef void (*call_wrap_t) (::GVolumeMonitor* volume_monitor, ::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->mount_added;
  auto mount_to_c = gi::unwrap (mount, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GVolumeMonitor*) (gobj_()), (::GMount*) (mount_to_c));
}

// void VolumeMonitor::mount_changed (GVolumeMonitor* volume_monitor, GMount* mount);
// void VolumeMonitor::mount_changed (::GVolumeMonitor* volume_monitor, ::GMount* mount);
void VolumeMonitorClass::mount_changed_ (Gio::Mount mount) noexcept
{
  if (!get_struct_()->mount_changed) return ;
  typedef void (*call_wrap_t) (::GVolumeMonitor* volume_monitor, ::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->mount_changed;
  auto mount_to_c = gi::unwrap (mount, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GVolumeMonitor*) (gobj_()), (::GMount*) (mount_to_c));
}

// void VolumeMonitor::mount_pre_unmount (GVolumeMonitor* volume_monitor, GMount* mount);
// void VolumeMonitor::mount_pre_unmount (::GVolumeMonitor* volume_monitor, ::GMount* mount);
void VolumeMonitorClass::mount_pre_unmount_ (Gio::Mount mount) noexcept
{
  if (!get_struct_()->mount_pre_unmount) return ;
  typedef void (*call_wrap_t) (::GVolumeMonitor* volume_monitor, ::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->mount_pre_unmount;
  auto mount_to_c = gi::unwrap (mount, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GVolumeMonitor*) (gobj_()), (::GMount*) (mount_to_c));
}

// void VolumeMonitor::mount_removed (GVolumeMonitor* volume_monitor, GMount* mount);
// void VolumeMonitor::mount_removed (::GVolumeMonitor* volume_monitor, ::GMount* mount);
void VolumeMonitorClass::mount_removed_ (Gio::Mount mount) noexcept
{
  if (!get_struct_()->mount_removed) return ;
  typedef void (*call_wrap_t) (::GVolumeMonitor* volume_monitor, ::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->mount_removed;
  auto mount_to_c = gi::unwrap (mount, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GVolumeMonitor*) (gobj_()), (::GMount*) (mount_to_c));
}

// void VolumeMonitor::volume_added (GVolumeMonitor* volume_monitor, GVolume* volume);
// void VolumeMonitor::volume_added (::GVolumeMonitor* volume_monitor, ::GVolume* volume);
void VolumeMonitorClass::volume_added_ (Gio::Volume volume) noexcept
{
  if (!get_struct_()->volume_added) return ;
  typedef void (*call_wrap_t) (::GVolumeMonitor* volume_monitor, ::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->volume_added;
  auto volume_to_c = gi::unwrap (volume, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GVolumeMonitor*) (gobj_()), (::GVolume*) (volume_to_c));
}

// void VolumeMonitor::volume_changed (GVolumeMonitor* volume_monitor, GVolume* volume);
// void VolumeMonitor::volume_changed (::GVolumeMonitor* volume_monitor, ::GVolume* volume);
void VolumeMonitorClass::volume_changed_ (Gio::Volume volume) noexcept
{
  if (!get_struct_()->volume_changed) return ;
  typedef void (*call_wrap_t) (::GVolumeMonitor* volume_monitor, ::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->volume_changed;
  auto volume_to_c = gi::unwrap (volume, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GVolumeMonitor*) (gobj_()), (::GVolume*) (volume_to_c));
}

// void VolumeMonitor::volume_removed (GVolumeMonitor* volume_monitor, GVolume* volume);
// void VolumeMonitor::volume_removed (::GVolumeMonitor* volume_monitor, ::GVolume* volume);
void VolumeMonitorClass::volume_removed_ (Gio::Volume volume) noexcept
{
  if (!get_struct_()->volume_removed) return ;
  typedef void (*call_wrap_t) (::GVolumeMonitor* volume_monitor, ::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->volume_removed;
  auto volume_to_c = gi::unwrap (volume, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GVolumeMonitor*) (gobj_()), (::GVolume*) (volume_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
