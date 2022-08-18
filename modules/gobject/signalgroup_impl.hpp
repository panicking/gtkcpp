// AUTO-GENERATED

#ifndef _GI_GOBJECT_SIGNALGROUP_IMPL_HPP_
#define _GI_GOBJECT_SIGNALGROUP_IMPL_HPP_

namespace gi {

namespace repository {

namespace GObject {

namespace base {

// GSignalGroup* g_signal_group_new (GType target_type);
// ::GSignalGroup* g_signal_group_new (GType target_type);
GObject::SignalGroup base::SignalGroupBase::new_ (GType target_type) noexcept
{
  typedef ::GSignalGroup* (*call_wrap_t) (GType target_type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_signal_group_new;
  auto target_type_to_c = target_type;
  auto _temp_ret = call_wrap_v ((GType) (target_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_signal_group_block (GSignalGroup* self);
// void g_signal_group_block (::GSignalGroup* self);
void base::SignalGroupBase::block () noexcept
{
  typedef void (*call_wrap_t) (::GSignalGroup* self);
  call_wrap_t call_wrap_v = (call_wrap_t) g_signal_group_block;
  call_wrap_v ((::GSignalGroup*) (gobj_()));
}

// void g_signal_group_connect (GSignalGroup* self, const gchar* detailed_signal, GCallback c_handler, gpointer data);
// void g_signal_group_connect (::GSignalGroup* self, const char* detailed_signal,  c_handler, void* data);
// IGNORE; not introspectable, c_handler type  not supported

// void g_signal_group_connect_after (GSignalGroup* self, const gchar* detailed_signal, GCallback c_handler, gpointer data);
// void g_signal_group_connect_after (::GSignalGroup* self, const char* detailed_signal,  c_handler, void* data);
// IGNORE; not introspectable, c_handler type  not supported

// void g_signal_group_connect_data (GSignalGroup* self, const gchar* detailed_signal, GCallback c_handler, gpointer data, GClosureNotify notify, GConnectFlags flags);
// void g_signal_group_connect_data (::GSignalGroup* self, const char* detailed_signal,  c_handler, void* data,  notify, ::GConnectFlags flags);
// SKIP; notify type  not supported, c_handler type  not supported

// void g_signal_group_connect_object (GSignalGroup* self, const gchar* detailed_signal, GCallback c_handler, gpointer object, GConnectFlags flags);
// void g_signal_group_connect_object (::GSignalGroup* self, const char* detailed_signal,  c_handler, void* object, ::GConnectFlags flags);
// IGNORE; not introspectable, c_handler type  not supported

// void g_signal_group_connect_swapped (GSignalGroup* self, const gchar* detailed_signal, GCallback c_handler, gpointer data);
// void g_signal_group_connect_swapped (::GSignalGroup* self, const char* detailed_signal,  c_handler, void* data);
// SKIP; c_handler type  not supported

// gpointer g_signal_group_dup_target (GSignalGroup* self);
// ::GObject* g_signal_group_dup_target (::GSignalGroup* self);
GObject::Object base::SignalGroupBase::dup_target () noexcept
{
  typedef ::GObject* (*call_wrap_t) (::GSignalGroup* self);
  call_wrap_t call_wrap_v = (call_wrap_t) g_signal_group_dup_target;
  auto _temp_ret = call_wrap_v ((::GSignalGroup*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_signal_group_set_target (GSignalGroup* self, gpointer target);
// void g_signal_group_set_target (::GSignalGroup* self, ::GObject* target);
void base::SignalGroupBase::set_target (GObject::Object target) noexcept
{
  typedef void (*call_wrap_t) (::GSignalGroup* self, ::GObject* target);
  call_wrap_t call_wrap_v = (call_wrap_t) g_signal_group_set_target;
  auto target_to_c = gi::unwrap (target, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GSignalGroup*) (gobj_()), (::GObject*) (target_to_c));
}
void base::SignalGroupBase::set_target () noexcept
{
  typedef void (*call_wrap_t) (::GSignalGroup* self, ::GObject* target);
  call_wrap_t call_wrap_v = (call_wrap_t) g_signal_group_set_target;
  auto target_to_c = nullptr;
  call_wrap_v ((::GSignalGroup*) (gobj_()), (::GObject*) (target_to_c));
}

// void g_signal_group_unblock (GSignalGroup* self);
// void g_signal_group_unblock (::GSignalGroup* self);
void base::SignalGroupBase::unblock () noexcept
{
  typedef void (*call_wrap_t) (::GSignalGroup* self);
  call_wrap_t call_wrap_v = (call_wrap_t) g_signal_group_unblock;
  call_wrap_v ((::GSignalGroup*) (gobj_()));
}




} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/signalgroup_extra_def_impl.hpp>)
#include <gobject/signalgroup_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/signalgroup_extra_impl.hpp>)
#include <gobject/signalgroup_extra_impl.hpp>
#endif
#endif

#endif
