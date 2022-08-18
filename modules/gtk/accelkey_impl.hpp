// AUTO-GENERATED

#ifndef _GI_GTK_ACCELKEY_IMPL_HPP_
#define _GI_GTK_ACCELKEY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

static guint _field_accel_key_get (const ::GtkAccelKey* obj) { return (guint) obj->accel_key; }
// guint AccelKey::accel_key (const ::GtkAccelKey* obj);
// guint AccelKey::accel_key (const ::GtkAccelKey* obj);
guint base::AccelKeyBase::accel_key_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GtkAccelKey* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_accel_key_get;
  auto _temp_ret = call_wrap_v ((const ::GtkAccelKey*) (gobj_()));
  return _temp_ret;
}

static void _field_accel_key_set (::GtkAccelKey* obj, guint _value) { obj->accel_key = (decltype(obj->accel_key)) _value; }
//  AccelKey::accel_key (::GtkAccelKey* obj, guint _value);
// void AccelKey::accel_key (::GtkAccelKey* obj, guint _value);
void base::AccelKeyBase::accel_key_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkAccelKey* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_accel_key_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkAccelKey*) (gobj_()), (guint) (_value_to_c));
}

static ::GdkModifierType _field_accel_mods_get (const ::GtkAccelKey* obj) { return (::GdkModifierType) obj->accel_mods; }
// ::GdkModifierType AccelKey::accel_mods (const ::GtkAccelKey* obj);
// ::GdkModifierType AccelKey::accel_mods (const ::GtkAccelKey* obj);
Gdk::ModifierType base::AccelKeyBase::accel_mods_ () const noexcept
{
  typedef ::GdkModifierType (*call_wrap_t) (const ::GtkAccelKey* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_accel_mods_get;
  auto _temp_ret = call_wrap_v ((const ::GtkAccelKey*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_accel_mods_set (::GtkAccelKey* obj, ::GdkModifierType _value) { obj->accel_mods = (decltype(obj->accel_mods)) _value; }
//  AccelKey::accel_mods (::GtkAccelKey* obj, ::GdkModifierType _value);
// void AccelKey::accel_mods (::GtkAccelKey* obj, ::GdkModifierType _value);
void base::AccelKeyBase::accel_mods_ (Gdk::ModifierType _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkAccelKey* obj, ::GdkModifierType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_accel_mods_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GtkAccelKey*) (gobj_()), (::GdkModifierType) (_value_to_c));
}

static guint _field_accel_flags_get (const ::GtkAccelKey* obj) { return (guint) obj->accel_flags; }
// guint AccelKey::accel_flags (const ::GtkAccelKey* obj);
// guint AccelKey::accel_flags (const ::GtkAccelKey* obj);
guint base::AccelKeyBase::accel_flags_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GtkAccelKey* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_accel_flags_get;
  auto _temp_ret = call_wrap_v ((const ::GtkAccelKey*) (gobj_()));
  return _temp_ret;
}

static void _field_accel_flags_set (::GtkAccelKey* obj, guint _value) { obj->accel_flags = (decltype(obj->accel_flags)) _value; }
//  AccelKey::accel_flags (::GtkAccelKey* obj, guint _value);
// void AccelKey::accel_flags (::GtkAccelKey* obj, guint _value);
void base::AccelKeyBase::accel_flags_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkAccelKey* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_accel_flags_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkAccelKey*) (gobj_()), (guint) (_value_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/accelkey_extra_def_impl.hpp>)
#include <gtk/accelkey_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/accelkey_extra_impl.hpp>)
#include <gtk/accelkey_extra_impl.hpp>
#endif
#endif

#endif
