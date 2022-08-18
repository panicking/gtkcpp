// AUTO-GENERATED

#ifndef _GI_GIO_DBUSSUBTREEVTABLE_HPP_
#define _GI_GIO_DBUSSUBTREEVTABLE_HPP_


namespace gi {

namespace repository {

namespace Gio {


class DBusSubtreeVTable;

namespace base {


#define GI_GIO_DBUSSUBTREEVTABLE_BASE base::DBusSubtreeVTableBase
class DBusSubtreeVTableBase : public gi::detail::CBoxedWrapper<DBusSubtreeVTableBase, ::GDBusSubtreeVTable>
{
typedef gi::detail::CBoxedWrapper<DBusSubtreeVTableBase, ::GDBusSubtreeVTable> super_type;
public:

DBusSubtreeVTableBase (std::nullptr_t = nullptr) : super_type() {}

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbussubtreevtable_extra_def.hpp>)
#include <gio/dbussubtreevtable_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbussubtreevtable_extra.hpp>)
#include <gio/dbussubtreevtable_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DBusSubtreeVTable : public GI_GIO_DBUSSUBTREEVTABLE_BASE
{ typedef GI_GIO_DBUSSUBTREEVTABLE_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDBusSubtreeVTable>
{ typedef Gio::DBusSubtreeVTable type; }; 

} // namespace repository

} // namespace gi

#endif
