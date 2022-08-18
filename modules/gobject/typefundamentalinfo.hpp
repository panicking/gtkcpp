// AUTO-GENERATED

#ifndef _GI_GOBJECT_TYPEFUNDAMENTALINFO_HPP_
#define _GI_GOBJECT_TYPEFUNDAMENTALINFO_HPP_


namespace gi {

namespace repository {

namespace GObject {


class TypeFundamentalInfo;

namespace base {


#define GI_GOBJECT_TYPEFUNDAMENTALINFO_BASE base::TypeFundamentalInfoBase
class TypeFundamentalInfoBase : public gi::detail::CBoxedWrapper<TypeFundamentalInfoBase, ::GTypeFundamentalInfo>
{
typedef gi::detail::CBoxedWrapper<TypeFundamentalInfoBase, ::GTypeFundamentalInfo> super_type;
public:

TypeFundamentalInfoBase (std::nullptr_t = nullptr) : super_type() {}

// ::GTypeFundamentalFlags TypeFundamentalInfo::type_flags (const ::GTypeFundamentalInfo* obj);
// ::GTypeFundamentalFlags TypeFundamentalInfo::type_flags (const ::GTypeFundamentalInfo* obj);
GI_INLINE_DECL GObject::TypeFundamentalFlags type_flags_ () const noexcept;

//  TypeFundamentalInfo::type_flags (::GTypeFundamentalInfo* obj, ::GTypeFundamentalFlags _value);
// void TypeFundamentalInfo::type_flags (::GTypeFundamentalInfo* obj, ::GTypeFundamentalFlags _value);
GI_INLINE_DECL void type_flags_ (GObject::TypeFundamentalFlags _value) noexcept;

}; // class

} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/typefundamentalinfo_extra_def.hpp>)
#include <gobject/typefundamentalinfo_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/typefundamentalinfo_extra.hpp>)
#include <gobject/typefundamentalinfo_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GObject {

class TypeFundamentalInfo : public GI_GOBJECT_TYPEFUNDAMENTALINFO_BASE
{ typedef GI_GOBJECT_TYPEFUNDAMENTALINFO_BASE super_type; using super_type::super_type; };

} // namespace GObject

template<> struct declare_cpptype_of<::GTypeFundamentalInfo>
{ typedef GObject::TypeFundamentalInfo type; }; 

} // namespace repository

} // namespace gi

#endif
