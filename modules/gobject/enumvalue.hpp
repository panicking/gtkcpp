// AUTO-GENERATED

#ifndef _GI_GOBJECT_ENUMVALUE_HPP_
#define _GI_GOBJECT_ENUMVALUE_HPP_


namespace gi {

namespace repository {

namespace GObject {


class EnumValue;

namespace base {


#define GI_GOBJECT_ENUMVALUE_BASE base::EnumValueBase
class EnumValueBase : public gi::detail::CBoxedWrapper<EnumValueBase, ::GEnumValue>
{
typedef gi::detail::CBoxedWrapper<EnumValueBase, ::GEnumValue> super_type;
public:

EnumValueBase (std::nullptr_t = nullptr) : super_type() {}

// gint EnumValue::value (const ::GEnumValue* obj);
// gint EnumValue::value (const ::GEnumValue* obj);
GI_INLINE_DECL gint value_ () const noexcept;

//  EnumValue::value (::GEnumValue* obj, gint _value);
// void EnumValue::value (::GEnumValue* obj, gint _value);
GI_INLINE_DECL void value_ (gint _value) noexcept;

// const char* EnumValue::value_name (const ::GEnumValue* obj);
// const char* EnumValue::value_name (const ::GEnumValue* obj);
GI_INLINE_DECL std::string value_name_ () const noexcept;

// const char* EnumValue::value_nick (const ::GEnumValue* obj);
// const char* EnumValue::value_nick (const ::GEnumValue* obj);
GI_INLINE_DECL std::string value_nick_ () const noexcept;

}; // class

} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/enumvalue_extra_def.hpp>)
#include <gobject/enumvalue_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/enumvalue_extra.hpp>)
#include <gobject/enumvalue_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GObject {

class EnumValue : public GI_GOBJECT_ENUMVALUE_BASE
{ typedef GI_GOBJECT_ENUMVALUE_BASE super_type; using super_type::super_type; };

} // namespace GObject

template<> struct declare_cpptype_of<::GEnumValue>
{ typedef GObject::EnumValue type; }; 

} // namespace repository

} // namespace gi

#endif
