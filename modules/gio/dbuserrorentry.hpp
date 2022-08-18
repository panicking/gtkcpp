// AUTO-GENERATED

#ifndef _GI_GIO_DBUSERRORENTRY_HPP_
#define _GI_GIO_DBUSERRORENTRY_HPP_


namespace gi {

namespace repository {

namespace Gio {


class DBusErrorEntry;

namespace base {


#define GI_GIO_DBUSERRORENTRY_BASE base::DBusErrorEntryBase
class DBusErrorEntryBase : public gi::detail::CBoxedWrapper<DBusErrorEntryBase, ::GDBusErrorEntry>
{
typedef gi::detail::CBoxedWrapper<DBusErrorEntryBase, ::GDBusErrorEntry> super_type;
public:

DBusErrorEntryBase (std::nullptr_t = nullptr) : super_type() {}

// gint DBusErrorEntry::error_code (const ::GDBusErrorEntry* obj);
// gint DBusErrorEntry::error_code (const ::GDBusErrorEntry* obj);
GI_INLINE_DECL gint error_code_ () const noexcept;

//  DBusErrorEntry::error_code (::GDBusErrorEntry* obj, gint _value);
// void DBusErrorEntry::error_code (::GDBusErrorEntry* obj, gint _value);
GI_INLINE_DECL void error_code_ (gint _value) noexcept;

// const char* DBusErrorEntry::dbus_error_name (const ::GDBusErrorEntry* obj);
// const char* DBusErrorEntry::dbus_error_name (const ::GDBusErrorEntry* obj);
GI_INLINE_DECL std::string dbus_error_name_ () const noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbuserrorentry_extra_def.hpp>)
#include <gio/dbuserrorentry_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbuserrorentry_extra.hpp>)
#include <gio/dbuserrorentry_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DBusErrorEntry : public GI_GIO_DBUSERRORENTRY_BASE
{ typedef GI_GIO_DBUSERRORENTRY_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDBusErrorEntry>
{ typedef Gio::DBusErrorEntry type; }; 

} // namespace repository

} // namespace gi

#endif
