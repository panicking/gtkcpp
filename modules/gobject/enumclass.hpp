// AUTO-GENERATED

#ifndef _GI_GOBJECT_ENUMCLASS_HPP_
#define _GI_GOBJECT_ENUMCLASS_HPP_


namespace gi {

namespace repository {

namespace GObject {

class EnumValue;

class EnumClass;

namespace base {


#define GI_GOBJECT_ENUMCLASS_BASE base::EnumClassBase
class EnumClassBase : public gi::detail::CBoxedWrapper<EnumClassBase, ::GEnumClass>
{
typedef gi::detail::CBoxedWrapper<EnumClassBase, ::GEnumClass> super_type;
public:

EnumClassBase (std::nullptr_t = nullptr) : super_type() {}

// gint EnumClass::minimum (const ::GEnumClass* obj);
// gint EnumClass::minimum (const ::GEnumClass* obj);
GI_INLINE_DECL gint minimum_ () const noexcept;

//  EnumClass::minimum (::GEnumClass* obj, gint _value);
// void EnumClass::minimum (::GEnumClass* obj, gint _value);
GI_INLINE_DECL void minimum_ (gint _value) noexcept;

// gint EnumClass::maximum (const ::GEnumClass* obj);
// gint EnumClass::maximum (const ::GEnumClass* obj);
GI_INLINE_DECL gint maximum_ () const noexcept;

//  EnumClass::maximum (::GEnumClass* obj, gint _value);
// void EnumClass::maximum (::GEnumClass* obj, gint _value);
GI_INLINE_DECL void maximum_ (gint _value) noexcept;

// guint EnumClass::n_values (const ::GEnumClass* obj);
// guint EnumClass::n_values (const ::GEnumClass* obj);
GI_INLINE_DECL guint n_values_ () const noexcept;

//  EnumClass::n_values (::GEnumClass* obj, guint _value);
// void EnumClass::n_values (::GEnumClass* obj, guint _value);
GI_INLINE_DECL void n_values_ (guint _value) noexcept;

// ::GEnumValue* EnumClass::values (const ::GEnumClass* obj);
// ::GEnumValue* EnumClass::values (const ::GEnumClass* obj);
GI_INLINE_DECL GObject::EnumValue values_ () const noexcept;

}; // class

} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/enumclass_extra_def.hpp>)
#include <gobject/enumclass_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/enumclass_extra.hpp>)
#include <gobject/enumclass_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GObject {

class EnumClass : public GI_GOBJECT_ENUMCLASS_BASE
{ typedef GI_GOBJECT_ENUMCLASS_BASE super_type; using super_type::super_type; };

} // namespace GObject

template<> struct declare_cpptype_of<::GEnumClass>
{ typedef GObject::EnumClass type; }; 

} // namespace repository

} // namespace gi

#endif
