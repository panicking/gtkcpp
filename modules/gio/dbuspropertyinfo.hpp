// AUTO-GENERATED

#ifndef _GI_GIO_DBUSPROPERTYINFO_HPP_
#define _GI_GIO_DBUSPROPERTYINFO_HPP_


namespace gi {

namespace repository {

namespace Gio {


class DBusPropertyInfo;

namespace base {


#define GI_GIO_DBUSPROPERTYINFO_BASE base::DBusPropertyInfoBase
class DBusPropertyInfoBase : public gi::detail::GBoxedWrapper<DBusPropertyInfoBase, ::GDBusPropertyInfo>
{
typedef gi::detail::GBoxedWrapper<DBusPropertyInfoBase, ::GDBusPropertyInfo> super_type;
public:

DBusPropertyInfoBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_dbus_property_info_get_type(); } 

// gint DBusPropertyInfo::ref_count (const ::GDBusPropertyInfo* obj);
// gint DBusPropertyInfo::ref_count (const ::GDBusPropertyInfo* obj);
GI_INLINE_DECL gint ref_count_ () const noexcept;

//  DBusPropertyInfo::ref_count (::GDBusPropertyInfo* obj, gint _value);
// void DBusPropertyInfo::ref_count (::GDBusPropertyInfo* obj, gint _value);
GI_INLINE_DECL void ref_count_ (gint _value) noexcept;

// char* DBusPropertyInfo::name (const ::GDBusPropertyInfo* obj);
// char* DBusPropertyInfo::name (const ::GDBusPropertyInfo* obj);
GI_INLINE_DECL std::string name_ () const noexcept;

// char* DBusPropertyInfo::signature (const ::GDBusPropertyInfo* obj);
// char* DBusPropertyInfo::signature (const ::GDBusPropertyInfo* obj);
GI_INLINE_DECL std::string signature_ () const noexcept;

// ::GDBusPropertyInfoFlags DBusPropertyInfo::flags (const ::GDBusPropertyInfo* obj);
// ::GDBusPropertyInfoFlags DBusPropertyInfo::flags (const ::GDBusPropertyInfo* obj);
GI_INLINE_DECL Gio::DBusPropertyInfoFlags flags_ () const noexcept;

//  DBusPropertyInfo::flags (::GDBusPropertyInfo* obj, ::GDBusPropertyInfoFlags _value);
// void DBusPropertyInfo::flags (::GDBusPropertyInfo* obj, ::GDBusPropertyInfoFlags _value);
GI_INLINE_DECL void flags_ (Gio::DBusPropertyInfoFlags _value) noexcept;

// GDBusPropertyInfo* g_dbus_property_info_ref (GDBusPropertyInfo* info);
// ::GDBusPropertyInfo* g_dbus_property_info_ref (::GDBusPropertyInfo* info);
// IGNORE; marked ignore

// void g_dbus_property_info_unref (GDBusPropertyInfo* info);
// void g_dbus_property_info_unref (::GDBusPropertyInfo* info);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbuspropertyinfo_extra_def.hpp>)
#include <gio/dbuspropertyinfo_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbuspropertyinfo_extra.hpp>)
#include <gio/dbuspropertyinfo_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DBusPropertyInfo : public GI_GIO_DBUSPROPERTYINFO_BASE
{ typedef GI_GIO_DBUSPROPERTYINFO_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDBusPropertyInfo>
{ typedef Gio::DBusPropertyInfo type; }; 

} // namespace repository

} // namespace gi

#endif
