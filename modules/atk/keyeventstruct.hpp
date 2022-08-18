// AUTO-GENERATED

#ifndef _GI_ATK_KEYEVENTSTRUCT_HPP_
#define _GI_ATK_KEYEVENTSTRUCT_HPP_


namespace gi {

namespace repository {

namespace Atk {


class KeyEventStruct;

namespace base {


#define GI_ATK_KEYEVENTSTRUCT_BASE base::KeyEventStructBase
class KeyEventStructBase : public gi::detail::CBoxedWrapper<KeyEventStructBase, ::AtkKeyEventStruct>
{
typedef gi::detail::CBoxedWrapper<KeyEventStructBase, ::AtkKeyEventStruct> super_type;
public:

KeyEventStructBase (std::nullptr_t = nullptr) : super_type() {}

// gint KeyEventStruct::type (const ::AtkKeyEventStruct* obj);
// gint KeyEventStruct::type (const ::AtkKeyEventStruct* obj);
GI_INLINE_DECL gint type_ () const noexcept;

//  KeyEventStruct::type (::AtkKeyEventStruct* obj, gint _value);
// void KeyEventStruct::type (::AtkKeyEventStruct* obj, gint _value);
GI_INLINE_DECL void type_ (gint _value) noexcept;

// guint KeyEventStruct::state (const ::AtkKeyEventStruct* obj);
// guint KeyEventStruct::state (const ::AtkKeyEventStruct* obj);
GI_INLINE_DECL guint state_ () const noexcept;

//  KeyEventStruct::state (::AtkKeyEventStruct* obj, guint _value);
// void KeyEventStruct::state (::AtkKeyEventStruct* obj, guint _value);
GI_INLINE_DECL void state_ (guint _value) noexcept;

// guint KeyEventStruct::keyval (const ::AtkKeyEventStruct* obj);
// guint KeyEventStruct::keyval (const ::AtkKeyEventStruct* obj);
GI_INLINE_DECL guint keyval_ () const noexcept;

//  KeyEventStruct::keyval (::AtkKeyEventStruct* obj, guint _value);
// void KeyEventStruct::keyval (::AtkKeyEventStruct* obj, guint _value);
GI_INLINE_DECL void keyval_ (guint _value) noexcept;

// gint KeyEventStruct::length (const ::AtkKeyEventStruct* obj);
// gint KeyEventStruct::length (const ::AtkKeyEventStruct* obj);
GI_INLINE_DECL gint length_ () const noexcept;

//  KeyEventStruct::length (::AtkKeyEventStruct* obj, gint _value);
// void KeyEventStruct::length (::AtkKeyEventStruct* obj, gint _value);
GI_INLINE_DECL void length_ (gint _value) noexcept;

// char* KeyEventStruct::string (const ::AtkKeyEventStruct* obj);
// char* KeyEventStruct::string (const ::AtkKeyEventStruct* obj);
GI_INLINE_DECL std::string string_ () const noexcept;

// guint16 KeyEventStruct::keycode (const ::AtkKeyEventStruct* obj);
// guint16 KeyEventStruct::keycode (const ::AtkKeyEventStruct* obj);
GI_INLINE_DECL guint16 keycode_ () const noexcept;

//  KeyEventStruct::keycode (::AtkKeyEventStruct* obj, guint16 _value);
// void KeyEventStruct::keycode (::AtkKeyEventStruct* obj, guint16 _value);
GI_INLINE_DECL void keycode_ (guint16 _value) noexcept;

// guint32 KeyEventStruct::timestamp (const ::AtkKeyEventStruct* obj);
// guint32 KeyEventStruct::timestamp (const ::AtkKeyEventStruct* obj);
GI_INLINE_DECL guint32 timestamp_ () const noexcept;

//  KeyEventStruct::timestamp (::AtkKeyEventStruct* obj, guint32 _value);
// void KeyEventStruct::timestamp (::AtkKeyEventStruct* obj, guint32 _value);
GI_INLINE_DECL void timestamp_ (guint32 _value) noexcept;

}; // class

} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/keyeventstruct_extra_def.hpp>)
#include <atk/keyeventstruct_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/keyeventstruct_extra.hpp>)
#include <atk/keyeventstruct_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

class KeyEventStruct : public GI_ATK_KEYEVENTSTRUCT_BASE
{ typedef GI_ATK_KEYEVENTSTRUCT_BASE super_type; using super_type::super_type; };

} // namespace Atk

template<> struct declare_cpptype_of<::AtkKeyEventStruct>
{ typedef Atk::KeyEventStruct type; }; 

} // namespace repository

} // namespace gi

#endif
