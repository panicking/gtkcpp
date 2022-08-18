// AUTO-GENERATED

#ifndef _GI_GDK_KEYMAP_IMPL_HPP_
#define _GI_GDK_KEYMAP_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// GdkKeymap* gdk_keymap_get_default ();
// ::GdkKeymap* gdk_keymap_get_default ();
// IGNORE; deprecated

// GdkKeymap* gdk_keymap_get_for_display (GdkDisplay* display);
// ::GdkKeymap* gdk_keymap_get_for_display (::GdkDisplay* display);
Gdk::Keymap base::KeymapBase::get_for_display (Gdk::Display display) noexcept
{
  typedef ::GdkKeymap* (*call_wrap_t) (::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_keymap_get_for_display;
  auto display_to_c = gi::unwrap (display, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (display_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gdk_keymap_add_virtual_modifiers (GdkKeymap* keymap, GdkModifierType* state);
// void gdk_keymap_add_virtual_modifiers (::GdkKeymap* keymap, ::GdkModifierType* state);
void base::KeymapBase::add_virtual_modifiers (Gdk::ModifierType & state) noexcept
{
  typedef void (*call_wrap_t) (::GdkKeymap* keymap, ::GdkModifierType* state);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_keymap_add_virtual_modifiers;
  auto state_to_c = gi::unwrap (state);
  ::GdkModifierType state_o = state_to_c;
  call_wrap_v ((::GdkKeymap*) (gobj_()), (::GdkModifierType*) (&state_o));
  state = gi::wrap (state_o);
}

// gboolean gdk_keymap_get_caps_lock_state (GdkKeymap* keymap);
// gboolean gdk_keymap_get_caps_lock_state (::GdkKeymap* keymap);
bool base::KeymapBase::get_caps_lock_state () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkKeymap* keymap);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_keymap_get_caps_lock_state;
  auto _temp_ret = call_wrap_v ((::GdkKeymap*) (gobj_()));
  return _temp_ret;
}

// PangoDirection gdk_keymap_get_direction (GdkKeymap* keymap);
// ::PangoDirection gdk_keymap_get_direction (::GdkKeymap* keymap);
Pango::Direction base::KeymapBase::get_direction () noexcept
{
  typedef ::PangoDirection (*call_wrap_t) (::GdkKeymap* keymap);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_keymap_get_direction;
  auto _temp_ret = call_wrap_v ((::GdkKeymap*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gdk_keymap_get_entries_for_keycode (GdkKeymap* keymap, guint hardware_keycode, GdkKeymapKey** keys, guint** keyvals, gint* n_entries);
// gboolean gdk_keymap_get_entries_for_keycode (::GdkKeymap* keymap, guint hardware_keycode, ::GdkKeymapKey*** keys, guint** keyvals, gint* n_entries);
// SKIP; inconsistent out keys pointer depth (2 vs 3)

// gboolean gdk_keymap_get_entries_for_keyval (GdkKeymap* keymap, guint keyval, GdkKeymapKey** keys, gint* n_keys);
// gboolean gdk_keymap_get_entries_for_keyval (::GdkKeymap* keymap, guint keyval, ::GdkKeymapKey*** keys, gint* n_keys);
// SKIP; inconsistent out keys pointer depth (2 vs 3)

// GdkModifierType gdk_keymap_get_modifier_mask (GdkKeymap* keymap, GdkModifierIntent intent);
// ::GdkModifierType gdk_keymap_get_modifier_mask (::GdkKeymap* keymap, ::GdkModifierIntent intent);
Gdk::ModifierType base::KeymapBase::get_modifier_mask (Gdk::ModifierIntent intent) noexcept
{
  typedef ::GdkModifierType (*call_wrap_t) (::GdkKeymap* keymap, ::GdkModifierIntent intent);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_keymap_get_modifier_mask;
  auto intent_to_c = gi::unwrap (intent);
  auto _temp_ret = call_wrap_v ((::GdkKeymap*) (gobj_()), (::GdkModifierIntent) (intent_to_c));
  return gi::wrap (_temp_ret);
}

// guint gdk_keymap_get_modifier_state (GdkKeymap* keymap);
// guint gdk_keymap_get_modifier_state (::GdkKeymap* keymap);
guint base::KeymapBase::get_modifier_state () noexcept
{
  typedef guint (*call_wrap_t) (::GdkKeymap* keymap);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_keymap_get_modifier_state;
  auto _temp_ret = call_wrap_v ((::GdkKeymap*) (gobj_()));
  return _temp_ret;
}

// gboolean gdk_keymap_get_num_lock_state (GdkKeymap* keymap);
// gboolean gdk_keymap_get_num_lock_state (::GdkKeymap* keymap);
bool base::KeymapBase::get_num_lock_state () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkKeymap* keymap);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_keymap_get_num_lock_state;
  auto _temp_ret = call_wrap_v ((::GdkKeymap*) (gobj_()));
  return _temp_ret;
}

// gboolean gdk_keymap_get_scroll_lock_state (GdkKeymap* keymap);
// gboolean gdk_keymap_get_scroll_lock_state (::GdkKeymap* keymap);
bool base::KeymapBase::get_scroll_lock_state () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkKeymap* keymap);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_keymap_get_scroll_lock_state;
  auto _temp_ret = call_wrap_v ((::GdkKeymap*) (gobj_()));
  return _temp_ret;
}

// gboolean gdk_keymap_have_bidi_layouts (GdkKeymap* keymap);
// gboolean gdk_keymap_have_bidi_layouts (::GdkKeymap* keymap);
bool base::KeymapBase::have_bidi_layouts () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkKeymap* keymap);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_keymap_have_bidi_layouts;
  auto _temp_ret = call_wrap_v ((::GdkKeymap*) (gobj_()));
  return _temp_ret;
}

// guint gdk_keymap_lookup_key (GdkKeymap* keymap, const GdkKeymapKey* key);
// guint gdk_keymap_lookup_key (::GdkKeymap* keymap, const ::GdkKeymapKey* key);
guint base::KeymapBase::lookup_key (const Gdk::KeymapKey & key) noexcept
{
  typedef guint (*call_wrap_t) (::GdkKeymap* keymap, const ::GdkKeymapKey* key);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_keymap_lookup_key;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GdkKeymap*) (gobj_()), (const ::GdkKeymapKey*) (key_to_c));
  return _temp_ret;
}

// gboolean gdk_keymap_map_virtual_modifiers (GdkKeymap* keymap, GdkModifierType* state);
// gboolean gdk_keymap_map_virtual_modifiers (::GdkKeymap* keymap, ::GdkModifierType* state);
bool base::KeymapBase::map_virtual_modifiers (Gdk::ModifierType & state) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkKeymap* keymap, ::GdkModifierType* state);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_keymap_map_virtual_modifiers;
  auto state_to_c = gi::unwrap (state);
  ::GdkModifierType state_o = state_to_c;
  auto _temp_ret = call_wrap_v ((::GdkKeymap*) (gobj_()), (::GdkModifierType*) (&state_o));
  state = gi::wrap (state_o);
  return _temp_ret;
}

// gboolean gdk_keymap_translate_keyboard_state (GdkKeymap* keymap, guint hardware_keycode, GdkModifierType state, gint group, guint* keyval, gint* effective_group, gint* level, GdkModifierType* consumed_modifiers);
// gboolean gdk_keymap_translate_keyboard_state (::GdkKeymap* keymap, guint hardware_keycode, ::GdkModifierType state, gint group, guint* keyval, gint* effective_group, gint* level, ::GdkModifierType* consumed_modifiers);
bool base::KeymapBase::translate_keyboard_state (guint hardware_keycode, Gdk::ModifierType state, gint group, guint * keyval, gint * effective_group, gint * level, Gdk::ModifierType * consumed_modifiers) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkKeymap* keymap, guint hardware_keycode, ::GdkModifierType state, gint group, guint* keyval, gint* effective_group, gint* level, ::GdkModifierType* consumed_modifiers);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_keymap_translate_keyboard_state;
  ::GdkModifierType consumed_modifiers_o {};
  gint level_o {};
  gint effective_group_o {};
  guint keyval_o {};
  auto group_to_c = group;
  auto state_to_c = gi::unwrap (state);
  auto hardware_keycode_to_c = hardware_keycode;
  auto _temp_ret = call_wrap_v ((::GdkKeymap*) (gobj_()), (guint) (hardware_keycode_to_c), (::GdkModifierType) (state_to_c), (gint) (group_to_c), (guint*) (keyval ? &keyval_o : nullptr), (gint*) (effective_group ? &effective_group_o : nullptr), (gint*) (level ? &level_o : nullptr), (::GdkModifierType*) (consumed_modifiers ? &consumed_modifiers_o : nullptr));
  if (consumed_modifiers) *consumed_modifiers = gi::wrap (consumed_modifiers_o);
  if (level) *level = level_o;
  if (effective_group) *effective_group = effective_group_o;
  if (keyval) *keyval = keyval_o;
  return _temp_ret;
}
std::tuple<bool, guint, gint, gint, Gdk::ModifierType> base::KeymapBase::translate_keyboard_state (guint hardware_keycode, Gdk::ModifierType state, gint group) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkKeymap* keymap, guint hardware_keycode, ::GdkModifierType state, gint group, guint* keyval, gint* effective_group, gint* level, ::GdkModifierType* consumed_modifiers);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_keymap_translate_keyboard_state;
  ::GdkModifierType consumed_modifiers_o {};
  gint level_o {};
  gint effective_group_o {};
  guint keyval_o {};
  auto group_to_c = group;
  auto state_to_c = gi::unwrap (state);
  auto hardware_keycode_to_c = hardware_keycode;
  auto _temp_ret = call_wrap_v ((::GdkKeymap*) (gobj_()), (guint) (hardware_keycode_to_c), (::GdkModifierType) (state_to_c), (gint) (group_to_c), (guint*) (&keyval_o), (gint*) (&effective_group_o), (gint*) (&level_o), (::GdkModifierType*) (&consumed_modifiers_o));
  return std::make_tuple (_temp_ret, keyval_o, effective_group_o, level_o, gi::wrap (consumed_modifiers_o));
}





} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/keymap_extra_def_impl.hpp>)
#include <gdk/keymap_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/keymap_extra_impl.hpp>)
#include <gdk/keymap_extra_impl.hpp>
#endif
#endif

#endif
