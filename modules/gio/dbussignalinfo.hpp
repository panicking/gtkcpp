// AUTO-GENERATED

#ifndef _GI_GIO_DBUSSIGNALINFO_HPP_
#define _GI_GIO_DBUSSIGNALINFO_HPP_


namespace gi {

namespace repository {

namespace Gio {


class DBusSignalInfo;

namespace base {


#define GI_GIO_DBUSSIGNALINFO_BASE base::DBusSignalInfoBase
class DBusSignalInfoBase : public gi::detail::GBoxedWrapper<DBusSignalInfoBase, ::GDBusSignalInfo>
{
typedef gi::detail::GBoxedWrapper<DBusSignalInfoBase, ::GDBusSignalInfo> super_type;
public:

DBusSignalInfoBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_dbus_signal_info_get_type(); } 

// gint DBusSignalInfo::ref_count (const ::GDBusSignalInfo* obj);
// gint DBusSignalInfo::ref_count (const ::GDBusSignalInfo* obj);
GI_INLINE_DECL gint ref_count_ () const noexcept;

//  DBusSignalInfo::ref_count (::GDBusSignalInfo* obj, gint _value);
// void DBusSignalInfo::ref_count (::GDBusSignalInfo* obj, gint _value);
GI_INLINE_DECL void ref_count_ (gint _value) noexcept;

// char* DBusSignalInfo::name (const ::GDBusSignalInfo* obj);
// char* DBusSignalInfo::name (const ::GDBusSignalInfo* obj);
GI_INLINE_DECL std::string name_ () const noexcept;

// GDBusSignalInfo* g_dbus_signal_info_ref (GDBusSignalInfo* info);
// ::GDBusSignalInfo* g_dbus_signal_info_ref (::GDBusSignalInfo* info);
// IGNORE; marked ignore

// void g_dbus_signal_info_unref (GDBusSignalInfo* info);
// void g_dbus_signal_info_unref (::GDBusSignalInfo* info);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbussignalinfo_extra_def.hpp>)
#include <gio/dbussignalinfo_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbussignalinfo_extra.hpp>)
#include <gio/dbussignalinfo_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DBusSignalInfo : public GI_GIO_DBUSSIGNALINFO_BASE
{ typedef GI_GIO_DBUSSIGNALINFO_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDBusSignalInfo>
{ typedef Gio::DBusSignalInfo type; }; 

} // namespace repository

} // namespace gi

#endif
