// AUTO-GENERATED

#ifndef _GI_GDK_KEYMAPKEY_HPP_
#define _GI_GDK_KEYMAPKEY_HPP_


namespace gi {

namespace repository {

namespace Gdk {


class KeymapKey;

namespace base {


#define GI_GDK_KEYMAPKEY_BASE base::KeymapKeyBase
class KeymapKeyBase : public gi::detail::CBoxedWrapper<KeymapKeyBase, ::GdkKeymapKey>
{
typedef gi::detail::CBoxedWrapper<KeymapKeyBase, ::GdkKeymapKey> super_type;
public:

KeymapKeyBase (std::nullptr_t = nullptr) : super_type() {}

// guint KeymapKey::keycode (const ::GdkKeymapKey* obj);
// guint KeymapKey::keycode (const ::GdkKeymapKey* obj);
GI_INLINE_DECL guint keycode_ () const noexcept;

//  KeymapKey::keycode (::GdkKeymapKey* obj, guint _value);
// void KeymapKey::keycode (::GdkKeymapKey* obj, guint _value);
GI_INLINE_DECL void keycode_ (guint _value) noexcept;

// gint KeymapKey::group (const ::GdkKeymapKey* obj);
// gint KeymapKey::group (const ::GdkKeymapKey* obj);
GI_INLINE_DECL gint group_ () const noexcept;

//  KeymapKey::group (::GdkKeymapKey* obj, gint _value);
// void KeymapKey::group (::GdkKeymapKey* obj, gint _value);
GI_INLINE_DECL void group_ (gint _value) noexcept;

// gint KeymapKey::level (const ::GdkKeymapKey* obj);
// gint KeymapKey::level (const ::GdkKeymapKey* obj);
GI_INLINE_DECL gint level_ () const noexcept;

//  KeymapKey::level (::GdkKeymapKey* obj, gint _value);
// void KeymapKey::level (::GdkKeymapKey* obj, gint _value);
GI_INLINE_DECL void level_ (gint _value) noexcept;

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/keymapkey_extra_def.hpp>)
#include <gdk/keymapkey_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/keymapkey_extra.hpp>)
#include <gdk/keymapkey_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class KeymapKey : public GI_GDK_KEYMAPKEY_BASE
{ typedef GI_GDK_KEYMAPKEY_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkKeymapKey>
{ typedef Gdk::KeymapKey type; }; 

} // namespace repository

} // namespace gi

#endif
