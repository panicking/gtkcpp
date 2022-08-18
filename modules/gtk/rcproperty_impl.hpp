// AUTO-GENERATED

#ifndef _GI_GTK_RCPROPERTY_IMPL_HPP_
#define _GI_GTK_RCPROPERTY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

static ::GQuark _field_type_name_get (const ::GtkRcProperty* obj) { return (::GQuark) obj->type_name; }
// ::GQuark RcProperty::type_name (const ::GtkRcProperty* obj);
// ::GQuark RcProperty::type_name (const ::GtkRcProperty* obj);
GLib::Quark base::RcPropertyBase::type_name_ () const noexcept
{
  typedef ::GQuark (*call_wrap_t) (const ::GtkRcProperty* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_name_get;
  auto _temp_ret = call_wrap_v ((const ::GtkRcProperty*) (gobj_()));
  return _temp_ret;
}

static void _field_type_name_set (::GtkRcProperty* obj, ::GQuark _value) { obj->type_name = (decltype(obj->type_name)) _value; }
//  RcProperty::type_name (::GtkRcProperty* obj, ::GQuark _value);
// void RcProperty::type_name (::GtkRcProperty* obj, ::GQuark _value);
void base::RcPropertyBase::type_name_ (::GQuark _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkRcProperty* obj, ::GQuark _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_name_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkRcProperty*) (gobj_()), (::GQuark) (_value_to_c));
}

static ::GQuark _field_property_name_get (const ::GtkRcProperty* obj) { return (::GQuark) obj->property_name; }
// ::GQuark RcProperty::property_name (const ::GtkRcProperty* obj);
// ::GQuark RcProperty::property_name (const ::GtkRcProperty* obj);
GLib::Quark base::RcPropertyBase::property_name_ () const noexcept
{
  typedef ::GQuark (*call_wrap_t) (const ::GtkRcProperty* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_property_name_get;
  auto _temp_ret = call_wrap_v ((const ::GtkRcProperty*) (gobj_()));
  return _temp_ret;
}

static void _field_property_name_set (::GtkRcProperty* obj, ::GQuark _value) { obj->property_name = (decltype(obj->property_name)) _value; }
//  RcProperty::property_name (::GtkRcProperty* obj, ::GQuark _value);
// void RcProperty::property_name (::GtkRcProperty* obj, ::GQuark _value);
void base::RcPropertyBase::property_name_ (::GQuark _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkRcProperty* obj, ::GQuark _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_property_name_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkRcProperty*) (gobj_()), (::GQuark) (_value_to_c));
}

static char* _field_origin_get (const ::GtkRcProperty* obj) { return (char*) obj->origin; }
// char* RcProperty::origin (const ::GtkRcProperty* obj);
// char* RcProperty::origin (const ::GtkRcProperty* obj);
std::string base::RcPropertyBase::origin_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GtkRcProperty* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_origin_get;
  auto _temp_ret = call_wrap_v ((const ::GtkRcProperty*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_rc_property_parse_border (const GParamSpec* pspec, const GString* gstring, GValue* property_value);
// gboolean gtk_rc_property_parse_border (const ::GParamSpec* pspec, const ::GString* gstring, ::GValue* property_value);
bool base::RcPropertyBase::parse_border (const GObject::ParamSpec & pspec, const GLib::String & gstring, GObject::Value property_value) noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GParamSpec* pspec, const ::GString* gstring, ::GValue* property_value);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_rc_property_parse_border;
  auto property_value_to_c = gi::unwrap (property_value, gi::transfer_none, gi::direction_in);
  auto gstring_to_c = gi::unwrap (gstring, gi::transfer_none, gi::direction_in);
  auto pspec_to_c = gi::unwrap (pspec, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GParamSpec*) (pspec_to_c), (const ::GString*) (gstring_to_c), (::GValue*) (property_value_to_c));
  return _temp_ret;
}

// gboolean gtk_rc_property_parse_color (const GParamSpec* pspec, const GString* gstring, GValue* property_value);
// gboolean gtk_rc_property_parse_color (const ::GParamSpec* pspec, const ::GString* gstring, ::GValue* property_value);
bool base::RcPropertyBase::parse_color (const GObject::ParamSpec & pspec, const GLib::String & gstring, GObject::Value property_value) noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GParamSpec* pspec, const ::GString* gstring, ::GValue* property_value);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_rc_property_parse_color;
  auto property_value_to_c = gi::unwrap (property_value, gi::transfer_none, gi::direction_in);
  auto gstring_to_c = gi::unwrap (gstring, gi::transfer_none, gi::direction_in);
  auto pspec_to_c = gi::unwrap (pspec, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GParamSpec*) (pspec_to_c), (const ::GString*) (gstring_to_c), (::GValue*) (property_value_to_c));
  return _temp_ret;
}

// gboolean gtk_rc_property_parse_enum (const GParamSpec* pspec, const GString* gstring, GValue* property_value);
// gboolean gtk_rc_property_parse_enum (const ::GParamSpec* pspec, const ::GString* gstring, ::GValue* property_value);
bool base::RcPropertyBase::parse_enum (const GObject::ParamSpec & pspec, const GLib::String & gstring, GObject::Value property_value) noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GParamSpec* pspec, const ::GString* gstring, ::GValue* property_value);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_rc_property_parse_enum;
  auto property_value_to_c = gi::unwrap (property_value, gi::transfer_none, gi::direction_in);
  auto gstring_to_c = gi::unwrap (gstring, gi::transfer_none, gi::direction_in);
  auto pspec_to_c = gi::unwrap (pspec, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GParamSpec*) (pspec_to_c), (const ::GString*) (gstring_to_c), (::GValue*) (property_value_to_c));
  return _temp_ret;
}

// gboolean gtk_rc_property_parse_flags (const GParamSpec* pspec, const GString* gstring, GValue* property_value);
// gboolean gtk_rc_property_parse_flags (const ::GParamSpec* pspec, const ::GString* gstring, ::GValue* property_value);
bool base::RcPropertyBase::parse_flags (const GObject::ParamSpec & pspec, const GLib::String & gstring, GObject::Value property_value) noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GParamSpec* pspec, const ::GString* gstring, ::GValue* property_value);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_rc_property_parse_flags;
  auto property_value_to_c = gi::unwrap (property_value, gi::transfer_none, gi::direction_in);
  auto gstring_to_c = gi::unwrap (gstring, gi::transfer_none, gi::direction_in);
  auto pspec_to_c = gi::unwrap (pspec, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GParamSpec*) (pspec_to_c), (const ::GString*) (gstring_to_c), (::GValue*) (property_value_to_c));
  return _temp_ret;
}

// gboolean gtk_rc_property_parse_requisition (const GParamSpec* pspec, const GString* gstring, GValue* property_value);
// gboolean gtk_rc_property_parse_requisition (const ::GParamSpec* pspec, const ::GString* gstring, ::GValue* property_value);
bool base::RcPropertyBase::parse_requisition (const GObject::ParamSpec & pspec, const GLib::String & gstring, GObject::Value property_value) noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GParamSpec* pspec, const ::GString* gstring, ::GValue* property_value);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_rc_property_parse_requisition;
  auto property_value_to_c = gi::unwrap (property_value, gi::transfer_none, gi::direction_in);
  auto gstring_to_c = gi::unwrap (gstring, gi::transfer_none, gi::direction_in);
  auto pspec_to_c = gi::unwrap (pspec, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GParamSpec*) (pspec_to_c), (const ::GString*) (gstring_to_c), (::GValue*) (property_value_to_c));
  return _temp_ret;
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/rcproperty_extra_def_impl.hpp>)
#include <gtk/rcproperty_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/rcproperty_extra_impl.hpp>)
#include <gtk/rcproperty_extra_impl.hpp>
#endif
#endif

#endif
