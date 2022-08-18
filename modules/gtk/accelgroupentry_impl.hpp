// AUTO-GENERATED

#ifndef _GI_GTK_ACCELGROUPENTRY_IMPL_HPP_
#define _GI_GTK_ACCELGROUPENTRY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

static ::GClosure* _field_closure_get (const ::GtkAccelGroupEntry* obj) { return (::GClosure*) obj->closure; }
// ::GClosure* AccelGroupEntry::closure (const ::GtkAccelGroupEntry* obj);
// ::GClosure* AccelGroupEntry::closure (const ::GtkAccelGroupEntry* obj);
GObject::Closure base::AccelGroupEntryBase::closure_ () const noexcept
{
  typedef ::GClosure* (*call_wrap_t) (const ::GtkAccelGroupEntry* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_closure_get;
  auto _temp_ret = call_wrap_v ((const ::GtkAccelGroupEntry*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static ::GQuark _field_accel_path_quark_get (const ::GtkAccelGroupEntry* obj) { return (::GQuark) obj->accel_path_quark; }
// ::GQuark AccelGroupEntry::accel_path_quark (const ::GtkAccelGroupEntry* obj);
// ::GQuark AccelGroupEntry::accel_path_quark (const ::GtkAccelGroupEntry* obj);
GLib::Quark base::AccelGroupEntryBase::accel_path_quark_ () const noexcept
{
  typedef ::GQuark (*call_wrap_t) (const ::GtkAccelGroupEntry* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_accel_path_quark_get;
  auto _temp_ret = call_wrap_v ((const ::GtkAccelGroupEntry*) (gobj_()));
  return _temp_ret;
}

static void _field_accel_path_quark_set (::GtkAccelGroupEntry* obj, ::GQuark _value) { obj->accel_path_quark = (decltype(obj->accel_path_quark)) _value; }
//  AccelGroupEntry::accel_path_quark (::GtkAccelGroupEntry* obj, ::GQuark _value);
// void AccelGroupEntry::accel_path_quark (::GtkAccelGroupEntry* obj, ::GQuark _value);
void base::AccelGroupEntryBase::accel_path_quark_ (::GQuark _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkAccelGroupEntry* obj, ::GQuark _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_accel_path_quark_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkAccelGroupEntry*) (gobj_()), (::GQuark) (_value_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/accelgroupentry_extra_def_impl.hpp>)
#include <gtk/accelgroupentry_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/accelgroupentry_extra_impl.hpp>)
#include <gtk/accelgroupentry_extra_impl.hpp>
#endif
#endif

#endif
