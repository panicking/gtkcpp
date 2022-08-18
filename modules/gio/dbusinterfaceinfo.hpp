// AUTO-GENERATED

#ifndef _GI_GIO_DBUSINTERFACEINFO_HPP_
#define _GI_GIO_DBUSINTERFACEINFO_HPP_


namespace gi {

namespace repository {

namespace Gio {

class DBusMethodInfo;
class DBusPropertyInfo;
class DBusSignalInfo;

class DBusInterfaceInfo;

namespace base {


#define GI_GIO_DBUSINTERFACEINFO_BASE base::DBusInterfaceInfoBase
class DBusInterfaceInfoBase : public gi::detail::GBoxedWrapper<DBusInterfaceInfoBase, ::GDBusInterfaceInfo>
{
typedef gi::detail::GBoxedWrapper<DBusInterfaceInfoBase, ::GDBusInterfaceInfo> super_type;
public:

DBusInterfaceInfoBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_dbus_interface_info_get_type(); } 

// gint DBusInterfaceInfo::ref_count (const ::GDBusInterfaceInfo* obj);
// gint DBusInterfaceInfo::ref_count (const ::GDBusInterfaceInfo* obj);
GI_INLINE_DECL gint ref_count_ () const noexcept;

//  DBusInterfaceInfo::ref_count (::GDBusInterfaceInfo* obj, gint _value);
// void DBusInterfaceInfo::ref_count (::GDBusInterfaceInfo* obj, gint _value);
GI_INLINE_DECL void ref_count_ (gint _value) noexcept;

// char* DBusInterfaceInfo::name (const ::GDBusInterfaceInfo* obj);
// char* DBusInterfaceInfo::name (const ::GDBusInterfaceInfo* obj);
GI_INLINE_DECL std::string name_ () const noexcept;

// void g_dbus_interface_info_cache_build (GDBusInterfaceInfo* info);
// void g_dbus_interface_info_cache_build (::GDBusInterfaceInfo* info);
GI_INLINE_DECL void cache_build () noexcept;

// void g_dbus_interface_info_cache_release (GDBusInterfaceInfo* info);
// void g_dbus_interface_info_cache_release (::GDBusInterfaceInfo* info);
GI_INLINE_DECL void cache_release () noexcept;

// void g_dbus_interface_info_generate_xml (GDBusInterfaceInfo* info, guint indent, GString* string_builder);
// void g_dbus_interface_info_generate_xml (::GDBusInterfaceInfo* info, guint indent, ::GString* string_builder);
GI_INLINE_DECL void generate_xml (guint indent, GLib::String string_builder) noexcept;

// GDBusMethodInfo* g_dbus_interface_info_lookup_method (GDBusInterfaceInfo* info, const gchar* name);
// ::GDBusMethodInfo* g_dbus_interface_info_lookup_method (::GDBusInterfaceInfo* info, const char* name);
GI_INLINE_DECL Gio::DBusMethodInfo lookup_method (const std::string & name) noexcept;

// GDBusPropertyInfo* g_dbus_interface_info_lookup_property (GDBusInterfaceInfo* info, const gchar* name);
// ::GDBusPropertyInfo* g_dbus_interface_info_lookup_property (::GDBusInterfaceInfo* info, const char* name);
GI_INLINE_DECL Gio::DBusPropertyInfo lookup_property (const std::string & name) noexcept;

// GDBusSignalInfo* g_dbus_interface_info_lookup_signal (GDBusInterfaceInfo* info, const gchar* name);
// ::GDBusSignalInfo* g_dbus_interface_info_lookup_signal (::GDBusInterfaceInfo* info, const char* name);
GI_INLINE_DECL Gio::DBusSignalInfo lookup_signal (const std::string & name) noexcept;

// GDBusInterfaceInfo* g_dbus_interface_info_ref (GDBusInterfaceInfo* info);
// ::GDBusInterfaceInfo* g_dbus_interface_info_ref (::GDBusInterfaceInfo* info);
// IGNORE; marked ignore

// void g_dbus_interface_info_unref (GDBusInterfaceInfo* info);
// void g_dbus_interface_info_unref (::GDBusInterfaceInfo* info);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusinterfaceinfo_extra_def.hpp>)
#include <gio/dbusinterfaceinfo_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusinterfaceinfo_extra.hpp>)
#include <gio/dbusinterfaceinfo_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DBusInterfaceInfo : public GI_GIO_DBUSINTERFACEINFO_BASE
{ typedef GI_GIO_DBUSINTERFACEINFO_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDBusInterfaceInfo>
{ typedef Gio::DBusInterfaceInfo type; }; 

} // namespace repository

} // namespace gi

#endif
