// AUTO-GENERATED

#ifndef _GI_GIO_DBUSARGINFO_HPP_
#define _GI_GIO_DBUSARGINFO_HPP_


namespace gi {

namespace repository {

namespace Gio {


class DBusArgInfo;

namespace base {


#define GI_GIO_DBUSARGINFO_BASE base::DBusArgInfoBase
class DBusArgInfoBase : public gi::detail::GBoxedWrapper<DBusArgInfoBase, ::GDBusArgInfo>
{
typedef gi::detail::GBoxedWrapper<DBusArgInfoBase, ::GDBusArgInfo> super_type;
public:

DBusArgInfoBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_dbus_arg_info_get_type(); } 

// gint DBusArgInfo::ref_count (const ::GDBusArgInfo* obj);
// gint DBusArgInfo::ref_count (const ::GDBusArgInfo* obj);
GI_INLINE_DECL gint ref_count_ () const noexcept;

//  DBusArgInfo::ref_count (::GDBusArgInfo* obj, gint _value);
// void DBusArgInfo::ref_count (::GDBusArgInfo* obj, gint _value);
GI_INLINE_DECL void ref_count_ (gint _value) noexcept;

// char* DBusArgInfo::name (const ::GDBusArgInfo* obj);
// char* DBusArgInfo::name (const ::GDBusArgInfo* obj);
GI_INLINE_DECL std::string name_ () const noexcept;

// char* DBusArgInfo::signature (const ::GDBusArgInfo* obj);
// char* DBusArgInfo::signature (const ::GDBusArgInfo* obj);
GI_INLINE_DECL std::string signature_ () const noexcept;

// GDBusArgInfo* g_dbus_arg_info_ref (GDBusArgInfo* info);
// ::GDBusArgInfo* g_dbus_arg_info_ref (::GDBusArgInfo* info);
// IGNORE; marked ignore

// void g_dbus_arg_info_unref (GDBusArgInfo* info);
// void g_dbus_arg_info_unref (::GDBusArgInfo* info);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusarginfo_extra_def.hpp>)
#include <gio/dbusarginfo_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusarginfo_extra.hpp>)
#include <gio/dbusarginfo_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DBusArgInfo : public GI_GIO_DBUSARGINFO_BASE
{ typedef GI_GIO_DBUSARGINFO_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDBusArgInfo>
{ typedef Gio::DBusArgInfo type; }; 

} // namespace repository

} // namespace gi

#endif
