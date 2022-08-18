// AUTO-GENERATED

#ifndef _GI_GLIB_MEMVTABLE_HPP_
#define _GI_GLIB_MEMVTABLE_HPP_


namespace gi {

namespace repository {

namespace GLib {


class MemVTable;

namespace base {


#define GI_GLIB_MEMVTABLE_BASE base::MemVTableBase
class MemVTableBase : public gi::detail::CBoxedWrapper<MemVTableBase, ::GMemVTable>
{
typedef gi::detail::CBoxedWrapper<MemVTableBase, ::GMemVTable> super_type;
public:

MemVTableBase (std::nullptr_t = nullptr) : super_type() {}

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/memvtable_extra_def.hpp>)
#include <glib/memvtable_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/memvtable_extra.hpp>)
#include <glib/memvtable_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class MemVTable : public GI_GLIB_MEMVTABLE_BASE
{ typedef GI_GLIB_MEMVTABLE_BASE super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GMemVTable>
{ typedef GLib::MemVTable type; }; 

} // namespace repository

} // namespace gi

#endif
