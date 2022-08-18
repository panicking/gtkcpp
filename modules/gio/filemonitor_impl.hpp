// AUTO-GENERATED

#ifndef _GI_GIO_FILEMONITOR_IMPL_HPP_
#define _GI_GIO_FILEMONITOR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// gboolean g_file_monitor_cancel (GFileMonitor* monitor);
// gboolean g_file_monitor_cancel (::GFileMonitor* monitor);
bool base::FileMonitorBase::cancel () noexcept
{
  typedef gboolean (*call_wrap_t) (::GFileMonitor* monitor);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_monitor_cancel;
  auto _temp_ret = call_wrap_v ((::GFileMonitor*) (gobj_()));
  return _temp_ret;
}

// void g_file_monitor_emit_event (GFileMonitor* monitor, GFile* child, GFile* other_file, GFileMonitorEvent event_type);
// void g_file_monitor_emit_event (::GFileMonitor* monitor, ::GFile* child, ::GFile* other_file, ::GFileMonitorEvent event_type);
void base::FileMonitorBase::emit_event (Gio::File child, Gio::File other_file, Gio::FileMonitorEvent event_type) noexcept
{
  typedef void (*call_wrap_t) (::GFileMonitor* monitor, ::GFile* child, ::GFile* other_file, ::GFileMonitorEvent event_type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_monitor_emit_event;
  auto event_type_to_c = gi::unwrap (event_type);
  auto other_file_to_c = gi::unwrap (other_file, gi::transfer_none, gi::direction_in);
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GFileMonitor*) (gobj_()), (::GFile*) (child_to_c), (::GFile*) (other_file_to_c), (::GFileMonitorEvent) (event_type_to_c));
}

// gboolean g_file_monitor_is_cancelled (GFileMonitor* monitor);
// gboolean g_file_monitor_is_cancelled (::GFileMonitor* monitor);
bool base::FileMonitorBase::is_cancelled () noexcept
{
  typedef gboolean (*call_wrap_t) (::GFileMonitor* monitor);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_monitor_is_cancelled;
  auto _temp_ret = call_wrap_v ((::GFileMonitor*) (gobj_()));
  return _temp_ret;
}

// void g_file_monitor_set_rate_limit (GFileMonitor* monitor, gint limit_msecs);
// void g_file_monitor_set_rate_limit (::GFileMonitor* monitor, gint limit_msecs);
void base::FileMonitorBase::set_rate_limit (gint limit_msecs) noexcept
{
  typedef void (*call_wrap_t) (::GFileMonitor* monitor, gint limit_msecs);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_monitor_set_rate_limit;
  auto limit_msecs_to_c = limit_msecs;
  call_wrap_v ((::GFileMonitor*) (gobj_()), (gint) (limit_msecs_to_c));
}



} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/filemonitor_extra_def_impl.hpp>)
#include <gio/filemonitor_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/filemonitor_extra_impl.hpp>)
#include <gio/filemonitor_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void FileMonitorClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GFileMonitorClass *methods = (::GFileMonitorClass *) class_struct;
  (void) methods;

  methods->cancel = (decltype (methods->cancel)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::cancel_>;
  methods->changed = (decltype (methods->changed)) detail::method_wrapper<self, void (*) (Gio::File file, Gio::File other_file, Gio::FileMonitorEvent event_type), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::changed_>;
}

// gboolean FileMonitor::cancel (GFileMonitor* monitor);
// gboolean FileMonitor::cancel (::GFileMonitor* monitor);
bool FileMonitorClass::cancel_ () noexcept
{
  if (!get_struct_()->cancel) return bool{};
  typedef gboolean (*call_wrap_t) (::GFileMonitor* monitor);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->cancel;
  auto _temp_ret = call_wrap_v ((::GFileMonitor*) (gobj_()));
  return _temp_ret;
}

// void FileMonitor::changed (GFileMonitor* monitor, GFile* file, GFile* other_file, GFileMonitorEvent event_type);
// void FileMonitor::changed (::GFileMonitor* monitor, ::GFile* file, ::GFile* other_file, ::GFileMonitorEvent event_type);
void FileMonitorClass::changed_ (Gio::File file, Gio::File other_file, Gio::FileMonitorEvent event_type) noexcept
{
  if (!get_struct_()->changed) return ;
  typedef void (*call_wrap_t) (::GFileMonitor* monitor, ::GFile* file, ::GFile* other_file, ::GFileMonitorEvent event_type);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->changed;
  auto event_type_to_c = gi::unwrap (event_type);
  auto other_file_to_c = gi::unwrap (other_file, gi::transfer_none, gi::direction_in);
  auto file_to_c = gi::unwrap (file, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GFileMonitor*) (gobj_()), (::GFile*) (file_to_c), (::GFile*) (other_file_to_c), (::GFileMonitorEvent) (event_type_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
