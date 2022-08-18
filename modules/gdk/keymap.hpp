// AUTO-GENERATED

#ifndef _GI_GDK_KEYMAP_HPP_
#define _GI_GDK_KEYMAP_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class Display;
class KeymapKey;

class Keymap;

namespace base {


#define GI_GDK_KEYMAP_BASE base::KeymapBase
class KeymapBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GdkKeymap BaseObjectType;

KeymapBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_keymap_get_type(); } 

// GdkKeymap* gdk_keymap_get_default ();
// ::GdkKeymap* gdk_keymap_get_default ();
// IGNORE; deprecated

// GdkKeymap* gdk_keymap_get_for_display (GdkDisplay* display);
// ::GdkKeymap* gdk_keymap_get_for_display (::GdkDisplay* display);
static GI_INLINE_DECL Gdk::Keymap get_for_display (Gdk::Display display) noexcept;

// void gdk_keymap_add_virtual_modifiers (GdkKeymap* keymap, GdkModifierType* state);
// void gdk_keymap_add_virtual_modifiers (::GdkKeymap* keymap, ::GdkModifierType* state);
GI_INLINE_DECL void add_virtual_modifiers (Gdk::ModifierType & state) noexcept;

// gboolean gdk_keymap_get_caps_lock_state (GdkKeymap* keymap);
// gboolean gdk_keymap_get_caps_lock_state (::GdkKeymap* keymap);
GI_INLINE_DECL bool get_caps_lock_state () noexcept;

// PangoDirection gdk_keymap_get_direction (GdkKeymap* keymap);
// ::PangoDirection gdk_keymap_get_direction (::GdkKeymap* keymap);
GI_INLINE_DECL Pango::Direction get_direction () noexcept;

// gboolean gdk_keymap_get_entries_for_keycode (GdkKeymap* keymap, guint hardware_keycode, GdkKeymapKey** keys, guint** keyvals, gint* n_entries);
// gboolean gdk_keymap_get_entries_for_keycode (::GdkKeymap* keymap, guint hardware_keycode, ::GdkKeymapKey*** keys, guint** keyvals, gint* n_entries);
// SKIP; inconsistent out keys pointer depth (2 vs 3)

// gboolean gdk_keymap_get_entries_for_keyval (GdkKeymap* keymap, guint keyval, GdkKeymapKey** keys, gint* n_keys);
// gboolean gdk_keymap_get_entries_for_keyval (::GdkKeymap* keymap, guint keyval, ::GdkKeymapKey*** keys, gint* n_keys);
// SKIP; inconsistent out keys pointer depth (2 vs 3)

// GdkModifierType gdk_keymap_get_modifier_mask (GdkKeymap* keymap, GdkModifierIntent intent);
// ::GdkModifierType gdk_keymap_get_modifier_mask (::GdkKeymap* keymap, ::GdkModifierIntent intent);
GI_INLINE_DECL Gdk::ModifierType get_modifier_mask (Gdk::ModifierIntent intent) noexcept;

// guint gdk_keymap_get_modifier_state (GdkKeymap* keymap);
// guint gdk_keymap_get_modifier_state (::GdkKeymap* keymap);
GI_INLINE_DECL guint get_modifier_state () noexcept;

// gboolean gdk_keymap_get_num_lock_state (GdkKeymap* keymap);
// gboolean gdk_keymap_get_num_lock_state (::GdkKeymap* keymap);
GI_INLINE_DECL bool get_num_lock_state () noexcept;

// gboolean gdk_keymap_get_scroll_lock_state (GdkKeymap* keymap);
// gboolean gdk_keymap_get_scroll_lock_state (::GdkKeymap* keymap);
GI_INLINE_DECL bool get_scroll_lock_state () noexcept;

// gboolean gdk_keymap_have_bidi_layouts (GdkKeymap* keymap);
// gboolean gdk_keymap_have_bidi_layouts (::GdkKeymap* keymap);
GI_INLINE_DECL bool have_bidi_layouts () noexcept;

// guint gdk_keymap_lookup_key (GdkKeymap* keymap, const GdkKeymapKey* key);
// guint gdk_keymap_lookup_key (::GdkKeymap* keymap, const ::GdkKeymapKey* key);
GI_INLINE_DECL guint lookup_key (const Gdk::KeymapKey & key) noexcept;

// gboolean gdk_keymap_map_virtual_modifiers (GdkKeymap* keymap, GdkModifierType* state);
// gboolean gdk_keymap_map_virtual_modifiers (::GdkKeymap* keymap, ::GdkModifierType* state);
GI_INLINE_DECL bool map_virtual_modifiers (Gdk::ModifierType & state) noexcept;

// gboolean gdk_keymap_translate_keyboard_state (GdkKeymap* keymap, guint hardware_keycode, GdkModifierType state, gint group, guint* keyval, gint* effective_group, gint* level, GdkModifierType* consumed_modifiers);
// gboolean gdk_keymap_translate_keyboard_state (::GdkKeymap* keymap, guint hardware_keycode, ::GdkModifierType state, gint group, guint* keyval, gint* effective_group, gint* level, ::GdkModifierType* consumed_modifiers);
GI_INLINE_DECL bool translate_keyboard_state (guint hardware_keycode, Gdk::ModifierType state, gint group, guint * keyval = nullptr, gint * effective_group = nullptr, gint * level = nullptr, Gdk::ModifierType * consumed_modifiers = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, guint, gint, gint, Gdk::ModifierType> translate_keyboard_state (guint hardware_keycode, Gdk::ModifierType state, gint group) noexcept;

// signal direction-changed
gi::signal_proxy<void(Gdk::Keymap)> signal_direction_changed()
{ return gi::signal_proxy<void(Gdk::Keymap)> (*this, "direction-changed"); }

// signal keys-changed
gi::signal_proxy<void(Gdk::Keymap)> signal_keys_changed()
{ return gi::signal_proxy<void(Gdk::Keymap)> (*this, "keys-changed"); }

// signal state-changed
gi::signal_proxy<void(Gdk::Keymap)> signal_state_changed()
{ return gi::signal_proxy<void(Gdk::Keymap)> (*this, "state-changed"); }

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/keymap_extra_def.hpp>)
#include <gdk/keymap_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/keymap_extra.hpp>)
#include <gdk/keymap_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class Keymap : public GI_GDK_KEYMAP_BASE
{ typedef GI_GDK_KEYMAP_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkKeymap>
{ typedef Gdk::Keymap type; }; 

} // namespace repository

} // namespace gi

#endif
