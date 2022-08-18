// AUTO-GENERATED

#ifndef _GI_GOBJECT_FLAGSCLASS_HPP_
#define _GI_GOBJECT_FLAGSCLASS_HPP_


namespace gi {

namespace repository {

namespace GObject {

class FlagsValue;

class FlagsClass;

namespace base {


#define GI_GOBJECT_FLAGSCLASS_BASE base::FlagsClassBase
class FlagsClassBase : public gi::detail::CBoxedWrapper<FlagsClassBase, ::GFlagsClass>
{
typedef gi::detail::CBoxedWrapper<FlagsClassBase, ::GFlagsClass> super_type;
public:

FlagsClassBase (std::nullptr_t = nullptr) : super_type() {}

// guint FlagsClass::mask (const ::GFlagsClass* obj);
// guint FlagsClass::mask (const ::GFlagsClass* obj);
GI_INLINE_DECL guint mask_ () const noexcept;

//  FlagsClass::mask (::GFlagsClass* obj, guint _value);
// void FlagsClass::mask (::GFlagsClass* obj, guint _value);
GI_INLINE_DECL void mask_ (guint _value) noexcept;

// guint FlagsClass::n_values (const ::GFlagsClass* obj);
// guint FlagsClass::n_values (const ::GFlagsClass* obj);
GI_INLINE_DECL guint n_values_ () const noexcept;

//  FlagsClass::n_values (::GFlagsClass* obj, guint _value);
// void FlagsClass::n_values (::GFlagsClass* obj, guint _value);
GI_INLINE_DECL void n_values_ (guint _value) noexcept;

// ::GFlagsValue* FlagsClass::values (const ::GFlagsClass* obj);
// ::GFlagsValue* FlagsClass::values (const ::GFlagsClass* obj);
GI_INLINE_DECL GObject::FlagsValue values_ () const noexcept;

}; // class

} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/flagsclass_extra_def.hpp>)
#include <gobject/flagsclass_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/flagsclass_extra.hpp>)
#include <gobject/flagsclass_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GObject {

class FlagsClass : public GI_GOBJECT_FLAGSCLASS_BASE
{ typedef GI_GOBJECT_FLAGSCLASS_BASE super_type; using super_type::super_type; };

} // namespace GObject

template<> struct declare_cpptype_of<::GFlagsClass>
{ typedef GObject::FlagsClass type; }; 

} // namespace repository

} // namespace gi

#endif
