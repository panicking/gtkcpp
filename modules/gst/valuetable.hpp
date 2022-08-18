// AUTO-GENERATED

#ifndef _GI_GST_VALUETABLE_HPP_
#define _GI_GST_VALUETABLE_HPP_


namespace gi {

namespace repository {

namespace Gst {


class ValueTable;

namespace base {


#define GI_GST_VALUETABLE_BASE base::ValueTableBase
class ValueTableBase : public gi::detail::CBoxedWrapper<ValueTableBase, ::GstValueTable>
{
typedef gi::detail::CBoxedWrapper<ValueTableBase, ::GstValueTable> super_type;
public:

ValueTableBase (std::nullptr_t = nullptr) : super_type() {}

// GType ValueTable::type (const ::GstValueTable* obj);
// GType ValueTable::type (const ::GstValueTable* obj);
GI_INLINE_DECL GType type_ () const noexcept;

//  ValueTable::type (::GstValueTable* obj, GType _value);
// void ValueTable::type (::GstValueTable* obj, GType _value);
GI_INLINE_DECL void type_ (GType _value) noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/valuetable_extra_def.hpp>)
#include <gst/valuetable_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/valuetable_extra.hpp>)
#include <gst/valuetable_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class ValueTable : public GI_GST_VALUETABLE_BASE
{ typedef GI_GST_VALUETABLE_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstValueTable>
{ typedef Gst::ValueTable type; }; 

} // namespace repository

} // namespace gi

#endif
