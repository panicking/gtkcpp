// AUTO-GENERATED

#ifndef _GI_PANGO_ATTRCLASS_HPP_
#define _GI_PANGO_ATTRCLASS_HPP_


namespace gi {

namespace repository {

namespace Pango {


class AttrClass;

namespace base {


#define GI_PANGO_ATTRCLASS_BASE base::AttrClassBase
class AttrClassBase : public gi::detail::CBoxedWrapper<AttrClassBase, ::PangoAttrClass>
{
typedef gi::detail::CBoxedWrapper<AttrClassBase, ::PangoAttrClass> super_type;
public:

AttrClassBase (std::nullptr_t = nullptr) : super_type() {}

// ::PangoAttrType AttrClass::type (const ::PangoAttrClass* obj);
// ::PangoAttrType AttrClass::type (const ::PangoAttrClass* obj);
GI_INLINE_DECL Pango::AttrType type_ () const noexcept;

//  AttrClass::type (::PangoAttrClass* obj, ::PangoAttrType _value);
// void AttrClass::type (::PangoAttrClass* obj, ::PangoAttrType _value);
GI_INLINE_DECL void type_ (Pango::AttrType _value) noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/attrclass_extra_def.hpp>)
#include <pango/attrclass_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/attrclass_extra.hpp>)
#include <pango/attrclass_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class AttrClass : public GI_PANGO_ATTRCLASS_BASE
{ typedef GI_PANGO_ATTRCLASS_BASE super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoAttrClass>
{ typedef Pango::AttrClass type; }; 

} // namespace repository

} // namespace gi

#endif
