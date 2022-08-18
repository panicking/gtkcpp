// AUTO-GENERATED

#ifndef _GI_GDK_KEYMAPKEY_IMPL_HPP_
#define _GI_GDK_KEYMAPKEY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

static guint _field_keycode_get (const ::GdkKeymapKey* obj) { return (guint) obj->keycode; }
// guint KeymapKey::keycode (const ::GdkKeymapKey* obj);
// guint KeymapKey::keycode (const ::GdkKeymapKey* obj);
guint base::KeymapKeyBase::keycode_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GdkKeymapKey* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_keycode_get;
  auto _temp_ret = call_wrap_v ((const ::GdkKeymapKey*) (gobj_()));
  return _temp_ret;
}

static void _field_keycode_set (::GdkKeymapKey* obj, guint _value) { obj->keycode = (decltype(obj->keycode)) _value; }
//  KeymapKey::keycode (::GdkKeymapKey* obj, guint _value);
// void KeymapKey::keycode (::GdkKeymapKey* obj, guint _value);
void base::KeymapKeyBase::keycode_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkKeymapKey* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_keycode_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkKeymapKey*) (gobj_()), (guint) (_value_to_c));
}

static gint _field_group_get (const ::GdkKeymapKey* obj) { return (gint) obj->group; }
// gint KeymapKey::group (const ::GdkKeymapKey* obj);
// gint KeymapKey::group (const ::GdkKeymapKey* obj);
gint base::KeymapKeyBase::group_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GdkKeymapKey* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_group_get;
  auto _temp_ret = call_wrap_v ((const ::GdkKeymapKey*) (gobj_()));
  return _temp_ret;
}

static void _field_group_set (::GdkKeymapKey* obj, gint _value) { obj->group = (decltype(obj->group)) _value; }
//  KeymapKey::group (::GdkKeymapKey* obj, gint _value);
// void KeymapKey::group (::GdkKeymapKey* obj, gint _value);
void base::KeymapKeyBase::group_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkKeymapKey* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_group_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkKeymapKey*) (gobj_()), (gint) (_value_to_c));
}

static gint _field_level_get (const ::GdkKeymapKey* obj) { return (gint) obj->level; }
// gint KeymapKey::level (const ::GdkKeymapKey* obj);
// gint KeymapKey::level (const ::GdkKeymapKey* obj);
gint base::KeymapKeyBase::level_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GdkKeymapKey* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_level_get;
  auto _temp_ret = call_wrap_v ((const ::GdkKeymapKey*) (gobj_()));
  return _temp_ret;
}

static void _field_level_set (::GdkKeymapKey* obj, gint _value) { obj->level = (decltype(obj->level)) _value; }
//  KeymapKey::level (::GdkKeymapKey* obj, gint _value);
// void KeymapKey::level (::GdkKeymapKey* obj, gint _value);
void base::KeymapKeyBase::level_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkKeymapKey* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_level_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkKeymapKey*) (gobj_()), (gint) (_value_to_c));
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/keymapkey_extra_def_impl.hpp>)
#include <gdk/keymapkey_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/keymapkey_extra_impl.hpp>)
#include <gdk/keymapkey_extra_impl.hpp>
#endif
#endif

#endif
