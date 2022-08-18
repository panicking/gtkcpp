// AUTO-GENERATED

#ifndef _GI_PANGO_ATTRSTRING_HPP_
#define _GI_PANGO_ATTRSTRING_HPP_


namespace gi {

namespace repository {

namespace Pango {


class AttrString;

namespace base {


#define GI_PANGO_ATTRSTRING_BASE base::AttrStringBase
class AttrStringBase : public gi::detail::CBoxedWrapper<AttrStringBase, ::PangoAttrString>
{
typedef gi::detail::CBoxedWrapper<AttrStringBase, ::PangoAttrString> super_type;
public:

AttrStringBase (std::nullptr_t = nullptr) : super_type() {}

// char* AttrString::value (const ::PangoAttrString* obj);
// char* AttrString::value (const ::PangoAttrString* obj);
GI_INLINE_DECL std::string value_ () const noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/attrstring_extra_def.hpp>)
#include <pango/attrstring_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/attrstring_extra.hpp>)
#include <pango/attrstring_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class AttrString : public GI_PANGO_ATTRSTRING_BASE
{ typedef GI_PANGO_ATTRSTRING_BASE super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoAttrString>
{ typedef Pango::AttrString type; }; 

} // namespace repository

} // namespace gi

#endif
