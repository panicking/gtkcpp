// AUTO-GENERATED

#ifndef _GI_GOBJECT_FLAGSVALUE_HPP_
#define _GI_GOBJECT_FLAGSVALUE_HPP_


namespace gi {

namespace repository {

namespace GObject {


class FlagsValue;

namespace base {


#define GI_GOBJECT_FLAGSVALUE_BASE base::FlagsValueBase
class FlagsValueBase : public gi::detail::CBoxedWrapper<FlagsValueBase, ::GFlagsValue>
{
typedef gi::detail::CBoxedWrapper<FlagsValueBase, ::GFlagsValue> super_type;
public:

FlagsValueBase (std::nullptr_t = nullptr) : super_type() {}

// guint FlagsValue::value (const ::GFlagsValue* obj);
// guint FlagsValue::value (const ::GFlagsValue* obj);
GI_INLINE_DECL guint value_ () const noexcept;

//  FlagsValue::value (::GFlagsValue* obj, guint _value);
// void FlagsValue::value (::GFlagsValue* obj, guint _value);
GI_INLINE_DECL void value_ (guint _value) noexcept;

// const char* FlagsValue::value_name (const ::GFlagsValue* obj);
// const char* FlagsValue::value_name (const ::GFlagsValue* obj);
GI_INLINE_DECL std::string value_name_ () const noexcept;

// const char* FlagsValue::value_nick (const ::GFlagsValue* obj);
// const char* FlagsValue::value_nick (const ::GFlagsValue* obj);
GI_INLINE_DECL std::string value_nick_ () const noexcept;

}; // class

} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/flagsvalue_extra_def.hpp>)
#include <gobject/flagsvalue_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/flagsvalue_extra.hpp>)
#include <gobject/flagsvalue_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GObject {

class FlagsValue : public GI_GOBJECT_FLAGSVALUE_BASE
{ typedef GI_GOBJECT_FLAGSVALUE_BASE super_type; using super_type::super_type; };

} // namespace GObject

template<> struct declare_cpptype_of<::GFlagsValue>
{ typedef GObject::FlagsValue type; }; 

} // namespace repository

} // namespace gi

#endif
