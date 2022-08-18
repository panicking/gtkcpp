// AUTO-GENERATED

#ifndef _GI_ATK_ATTRIBUTE_HPP_
#define _GI_ATK_ATTRIBUTE_HPP_


namespace gi {

namespace repository {

namespace Atk {


class Attribute;

namespace base {


#define GI_ATK_ATTRIBUTE_BASE base::AttributeBase
class AttributeBase : public gi::detail::CBoxedWrapper<AttributeBase, ::AtkAttribute>
{
typedef gi::detail::CBoxedWrapper<AttributeBase, ::AtkAttribute> super_type;
public:

AttributeBase (std::nullptr_t = nullptr) : super_type() {}

// char* Attribute::name (const ::AtkAttribute* obj);
// char* Attribute::name (const ::AtkAttribute* obj);
GI_INLINE_DECL std::string name_ () const noexcept;

// char* Attribute::value (const ::AtkAttribute* obj);
// char* Attribute::value (const ::AtkAttribute* obj);
GI_INLINE_DECL std::string value_ () const noexcept;

// void atk_attribute_set_free ();
// void atk_attribute_set_free ();
// IGNORE; marked ignore, inconsistent list element info

}; // class

} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/attribute_extra_def.hpp>)
#include <atk/attribute_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/attribute_extra.hpp>)
#include <atk/attribute_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

class Attribute : public GI_ATK_ATTRIBUTE_BASE
{ typedef GI_ATK_ATTRIBUTE_BASE super_type; using super_type::super_type; };

} // namespace Atk

template<> struct declare_cpptype_of<::AtkAttribute>
{ typedef Atk::Attribute type; }; 

} // namespace repository

} // namespace gi

#endif
