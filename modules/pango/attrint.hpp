// AUTO-GENERATED

#ifndef _GI_PANGO_ATTRINT_HPP_
#define _GI_PANGO_ATTRINT_HPP_


namespace gi {

namespace repository {

namespace Pango {


class AttrInt;

namespace base {


#define GI_PANGO_ATTRINT_BASE base::AttrIntBase
class AttrIntBase : public gi::detail::CBoxedWrapper<AttrIntBase, ::PangoAttrInt>
{
typedef gi::detail::CBoxedWrapper<AttrIntBase, ::PangoAttrInt> super_type;
public:

AttrIntBase (std::nullptr_t = nullptr) : super_type() {}

// gint AttrInt::value (const ::PangoAttrInt* obj);
// gint AttrInt::value (const ::PangoAttrInt* obj);
GI_INLINE_DECL gint value_ () const noexcept;

//  AttrInt::value (::PangoAttrInt* obj, gint _value);
// void AttrInt::value (::PangoAttrInt* obj, gint _value);
GI_INLINE_DECL void value_ (gint _value) noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/attrint_extra_def.hpp>)
#include <pango/attrint_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/attrint_extra.hpp>)
#include <pango/attrint_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class AttrInt : public GI_PANGO_ATTRINT_BASE
{ typedef GI_PANGO_ATTRINT_BASE super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoAttrInt>
{ typedef Pango::AttrInt type; }; 

} // namespace repository

} // namespace gi

#endif
