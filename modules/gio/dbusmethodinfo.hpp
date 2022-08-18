// AUTO-GENERATED

#ifndef _GI_GIO_DBUSMETHODINFO_HPP_
#define _GI_GIO_DBUSMETHODINFO_HPP_


namespace gi {

namespace repository {

namespace Gio {


class DBusMethodInfo;

namespace base {


#define GI_GIO_DBUSMETHODINFO_BASE base::DBusMethodInfoBase
class DBusMethodInfoBase : public gi::detail::GBoxedWrapper<DBusMethodInfoBase, ::GDBusMethodInfo>
{
typedef gi::detail::GBoxedWrapper<DBusMethodInfoBase, ::GDBusMethodInfo> super_type;
public:

DBusMethodInfoBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_dbus_method_info_get_type(); } 

// gint DBusMethodInfo::ref_count (const ::GDBusMethodInfo* obj);
// gint DBusMethodInfo::ref_count (const ::GDBusMethodInfo* obj);
GI_INLINE_DECL gint ref_count_ () const noexcept;

//  DBusMethodInfo::ref_count (::GDBusMethodInfo* obj, gint _value);
// void DBusMethodInfo::ref_count (::GDBusMethodInfo* obj, gint _value);
GI_INLINE_DECL void ref_count_ (gint _value) noexcept;

// char* DBusMethodInfo::name (const ::GDBusMethodInfo* obj);
// char* DBusMethodInfo::name (const ::GDBusMethodInfo* obj);
GI_INLINE_DECL std::string name_ () const noexcept;

// GDBusMethodInfo* g_dbus_method_info_ref (GDBusMethodInfo* info);
// ::GDBusMethodInfo* g_dbus_method_info_ref (::GDBusMethodInfo* info);
// IGNORE; marked ignore

// void g_dbus_method_info_unref (GDBusMethodInfo* info);
// void g_dbus_method_info_unref (::GDBusMethodInfo* info);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusmethodinfo_extra_def.hpp>)
#include <gio/dbusmethodinfo_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusmethodinfo_extra.hpp>)
#include <gio/dbusmethodinfo_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DBusMethodInfo : public GI_GIO_DBUSMETHODINFO_BASE
{ typedef GI_GIO_DBUSMETHODINFO_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDBusMethodInfo>
{ typedef Gio::DBusMethodInfo type; }; 

} // namespace repository

} // namespace gi

#endif
