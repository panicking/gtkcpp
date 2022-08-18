// AUTO-GENERATED

#ifndef _GI_GIO_DBUSNODEINFO_IMPL_HPP_
#define _GI_GIO_DBUSNODEINFO_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

static gint _field_ref_count_get (const ::GDBusNodeInfo* obj) { return (gint) obj->ref_count; }
// gint DBusNodeInfo::ref_count (const ::GDBusNodeInfo* obj);
// gint DBusNodeInfo::ref_count (const ::GDBusNodeInfo* obj);
gint base::DBusNodeInfoBase::ref_count_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GDBusNodeInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_ref_count_get;
  auto _temp_ret = call_wrap_v ((const ::GDBusNodeInfo*) (gobj_()));
  return _temp_ret;
}

static void _field_ref_count_set (::GDBusNodeInfo* obj, gint _value) { obj->ref_count = (decltype(obj->ref_count)) _value; }
//  DBusNodeInfo::ref_count (::GDBusNodeInfo* obj, gint _value);
// void DBusNodeInfo::ref_count (::GDBusNodeInfo* obj, gint _value);
void base::DBusNodeInfoBase::ref_count_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GDBusNodeInfo* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_ref_count_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GDBusNodeInfo*) (gobj_()), (gint) (_value_to_c));
}

static char* _field_path_get (const ::GDBusNodeInfo* obj) { return (char*) obj->path; }
// char* DBusNodeInfo::path (const ::GDBusNodeInfo* obj);
// char* DBusNodeInfo::path (const ::GDBusNodeInfo* obj);
std::string base::DBusNodeInfoBase::path_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GDBusNodeInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_path_get;
  auto _temp_ret = call_wrap_v ((const ::GDBusNodeInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GDBusNodeInfo* g_dbus_node_info_new_for_xml (const gchar* xml_data, GError ** error);
// ::GDBusNodeInfo* g_dbus_node_info_new_for_xml (const char* xml_data, GError ** error);
Gio::DBusNodeInfo base::DBusNodeInfoBase::new_for_xml (const std::string & xml_data)
{
  typedef ::GDBusNodeInfo* (*call_wrap_t) (const char* xml_data, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_node_info_new_for_xml;
  auto xml_data_to_c = gi::unwrap (xml_data, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (xml_data_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::DBusNodeInfo base::DBusNodeInfoBase::new_for_xml (const std::string & xml_data, GLib::Error * _error) noexcept
{
  typedef ::GDBusNodeInfo* (*call_wrap_t) (const char* xml_data, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_node_info_new_for_xml;
  auto xml_data_to_c = gi::unwrap (xml_data, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (xml_data_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_dbus_node_info_generate_xml (GDBusNodeInfo* info, guint indent, GString* string_builder);
// void g_dbus_node_info_generate_xml (::GDBusNodeInfo* info, guint indent, ::GString* string_builder);
void base::DBusNodeInfoBase::generate_xml (guint indent, GLib::String string_builder) noexcept
{
  typedef void (*call_wrap_t) (::GDBusNodeInfo* info, guint indent, ::GString* string_builder);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_node_info_generate_xml;
  auto string_builder_to_c = gi::unwrap (string_builder, gi::transfer_none, gi::direction_in);
  auto indent_to_c = indent;
  call_wrap_v ((::GDBusNodeInfo*) (gobj_()), (guint) (indent_to_c), (::GString*) (string_builder_to_c));
}

// GDBusInterfaceInfo* g_dbus_node_info_lookup_interface (GDBusNodeInfo* info, const gchar* name);
// ::GDBusInterfaceInfo* g_dbus_node_info_lookup_interface (::GDBusNodeInfo* info, const char* name);
Gio::DBusInterfaceInfo base::DBusNodeInfoBase::lookup_interface (const std::string & name) noexcept
{
  typedef ::GDBusInterfaceInfo* (*call_wrap_t) (::GDBusNodeInfo* info, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_node_info_lookup_interface;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GDBusNodeInfo*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GDBusNodeInfo* g_dbus_node_info_ref (GDBusNodeInfo* info);
// ::GDBusNodeInfo* g_dbus_node_info_ref (::GDBusNodeInfo* info);
// IGNORE; marked ignore

// void g_dbus_node_info_unref (GDBusNodeInfo* info);
// void g_dbus_node_info_unref (::GDBusNodeInfo* info);
// IGNORE; marked ignore


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusnodeinfo_extra_def_impl.hpp>)
#include <gio/dbusnodeinfo_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusnodeinfo_extra_impl.hpp>)
#include <gio/dbusnodeinfo_extra_impl.hpp>
#endif
#endif

#endif
