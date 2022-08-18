// AUTO-GENERATED

#ifndef _GI_GOBJECT_TYPEVALUETABLE_HPP_
#define _GI_GOBJECT_TYPEVALUETABLE_HPP_


namespace gi {

namespace repository {

namespace GObject {


class TypeValueTable;

namespace base {


#define GI_GOBJECT_TYPEVALUETABLE_BASE base::TypeValueTableBase
class TypeValueTableBase : public gi::detail::CBoxedWrapper<TypeValueTableBase, ::GTypeValueTable>
{
typedef gi::detail::CBoxedWrapper<TypeValueTableBase, ::GTypeValueTable> super_type;
public:

TypeValueTableBase (std::nullptr_t = nullptr) : super_type() {}

// const char* TypeValueTable::collect_format (const ::GTypeValueTable* obj);
// const char* TypeValueTable::collect_format (const ::GTypeValueTable* obj);
GI_INLINE_DECL std::string collect_format_ () const noexcept;

// const char* TypeValueTable::lcopy_format (const ::GTypeValueTable* obj);
// const char* TypeValueTable::lcopy_format (const ::GTypeValueTable* obj);
GI_INLINE_DECL std::string lcopy_format_ () const noexcept;

// FAILURE on g_type_value_table_peek; No such node (<xmlattr>.transfer-ownership)
}; // class

} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/typevaluetable_extra_def.hpp>)
#include <gobject/typevaluetable_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/typevaluetable_extra.hpp>)
#include <gobject/typevaluetable_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GObject {

class TypeValueTable : public GI_GOBJECT_TYPEVALUETABLE_BASE
{ typedef GI_GOBJECT_TYPEVALUETABLE_BASE super_type; using super_type::super_type; };

} // namespace GObject

template<> struct declare_cpptype_of<::GTypeValueTable>
{ typedef GObject::TypeValueTable type; }; 

} // namespace repository

} // namespace gi

#endif
