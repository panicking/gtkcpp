// AUTO-GENERATED

#ifndef _GI_GIO_DBUSNODEINFO_HPP_
#define _GI_GIO_DBUSNODEINFO_HPP_


namespace gi {

namespace repository {

namespace Gio {

class DBusInterfaceInfo;

class DBusNodeInfo;

namespace base {


#define GI_GIO_DBUSNODEINFO_BASE base::DBusNodeInfoBase
class DBusNodeInfoBase : public gi::detail::GBoxedWrapper<DBusNodeInfoBase, ::GDBusNodeInfo>
{
typedef gi::detail::GBoxedWrapper<DBusNodeInfoBase, ::GDBusNodeInfo> super_type;
public:

DBusNodeInfoBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_dbus_node_info_get_type(); } 

// gint DBusNodeInfo::ref_count (const ::GDBusNodeInfo* obj);
// gint DBusNodeInfo::ref_count (const ::GDBusNodeInfo* obj);
GI_INLINE_DECL gint ref_count_ () const noexcept;

//  DBusNodeInfo::ref_count (::GDBusNodeInfo* obj, gint _value);
// void DBusNodeInfo::ref_count (::GDBusNodeInfo* obj, gint _value);
GI_INLINE_DECL void ref_count_ (gint _value) noexcept;

// char* DBusNodeInfo::path (const ::GDBusNodeInfo* obj);
// char* DBusNodeInfo::path (const ::GDBusNodeInfo* obj);
GI_INLINE_DECL std::string path_ () const noexcept;

// GDBusNodeInfo* g_dbus_node_info_new_for_xml (const gchar* xml_data, GError ** error);
// ::GDBusNodeInfo* g_dbus_node_info_new_for_xml (const char* xml_data, GError ** error);
static GI_INLINE_DECL Gio::DBusNodeInfo new_for_xml (const std::string & xml_data);
static GI_INLINE_DECL Gio::DBusNodeInfo new_for_xml (const std::string & xml_data, GLib::Error * _error) noexcept;

// void g_dbus_node_info_generate_xml (GDBusNodeInfo* info, guint indent, GString* string_builder);
// void g_dbus_node_info_generate_xml (::GDBusNodeInfo* info, guint indent, ::GString* string_builder);
GI_INLINE_DECL void generate_xml (guint indent, GLib::String string_builder) noexcept;

// GDBusInterfaceInfo* g_dbus_node_info_lookup_interface (GDBusNodeInfo* info, const gchar* name);
// ::GDBusInterfaceInfo* g_dbus_node_info_lookup_interface (::GDBusNodeInfo* info, const char* name);
GI_INLINE_DECL Gio::DBusInterfaceInfo lookup_interface (const std::string & name) noexcept;

// GDBusNodeInfo* g_dbus_node_info_ref (GDBusNodeInfo* info);
// ::GDBusNodeInfo* g_dbus_node_info_ref (::GDBusNodeInfo* info);
// IGNORE; marked ignore

// void g_dbus_node_info_unref (GDBusNodeInfo* info);
// void g_dbus_node_info_unref (::GDBusNodeInfo* info);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusnodeinfo_extra_def.hpp>)
#include <gio/dbusnodeinfo_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusnodeinfo_extra.hpp>)
#include <gio/dbusnodeinfo_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DBusNodeInfo : public GI_GIO_DBUSNODEINFO_BASE
{ typedef GI_GIO_DBUSNODEINFO_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDBusNodeInfo>
{ typedef Gio::DBusNodeInfo type; }; 

} // namespace repository

} // namespace gi

#endif
