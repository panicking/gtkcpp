// AUTO-GENERATED

#ifndef _GI_GDK_WINDOWATTR_IMPL_HPP_
#define _GI_GDK_WINDOWATTR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

static char* _field_title_get (const ::GdkWindowAttr* obj) { return (char*) obj->title; }
// char* WindowAttr::title (const ::GdkWindowAttr* obj);
// char* WindowAttr::title (const ::GdkWindowAttr* obj);
std::string base::WindowAttrBase::title_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GdkWindowAttr* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_title_get;
  auto _temp_ret = call_wrap_v ((const ::GdkWindowAttr*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gint _field_event_mask_get (const ::GdkWindowAttr* obj) { return (gint) obj->event_mask; }
// gint WindowAttr::event_mask (const ::GdkWindowAttr* obj);
// gint WindowAttr::event_mask (const ::GdkWindowAttr* obj);
gint base::WindowAttrBase::event_mask_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GdkWindowAttr* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_event_mask_get;
  auto _temp_ret = call_wrap_v ((const ::GdkWindowAttr*) (gobj_()));
  return _temp_ret;
}

static void _field_event_mask_set (::GdkWindowAttr* obj, gint _value) { obj->event_mask = (decltype(obj->event_mask)) _value; }
//  WindowAttr::event_mask (::GdkWindowAttr* obj, gint _value);
// void WindowAttr::event_mask (::GdkWindowAttr* obj, gint _value);
void base::WindowAttrBase::event_mask_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindowAttr* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_event_mask_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkWindowAttr*) (gobj_()), (gint) (_value_to_c));
}

static gint _field_x_get (const ::GdkWindowAttr* obj) { return (gint) obj->x; }
// gint WindowAttr::x (const ::GdkWindowAttr* obj);
// gint WindowAttr::x (const ::GdkWindowAttr* obj);
gint base::WindowAttrBase::x_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GdkWindowAttr* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_get;
  auto _temp_ret = call_wrap_v ((const ::GdkWindowAttr*) (gobj_()));
  return _temp_ret;
}

static void _field_x_set (::GdkWindowAttr* obj, gint _value) { obj->x = (decltype(obj->x)) _value; }
//  WindowAttr::x (::GdkWindowAttr* obj, gint _value);
// void WindowAttr::x (::GdkWindowAttr* obj, gint _value);
void base::WindowAttrBase::x_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindowAttr* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkWindowAttr*) (gobj_()), (gint) (_value_to_c));
}

static gint _field_y_get (const ::GdkWindowAttr* obj) { return (gint) obj->y; }
// gint WindowAttr::y (const ::GdkWindowAttr* obj);
// gint WindowAttr::y (const ::GdkWindowAttr* obj);
gint base::WindowAttrBase::y_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GdkWindowAttr* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_get;
  auto _temp_ret = call_wrap_v ((const ::GdkWindowAttr*) (gobj_()));
  return _temp_ret;
}

static void _field_y_set (::GdkWindowAttr* obj, gint _value) { obj->y = (decltype(obj->y)) _value; }
//  WindowAttr::y (::GdkWindowAttr* obj, gint _value);
// void WindowAttr::y (::GdkWindowAttr* obj, gint _value);
void base::WindowAttrBase::y_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindowAttr* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkWindowAttr*) (gobj_()), (gint) (_value_to_c));
}

static gint _field_width_get (const ::GdkWindowAttr* obj) { return (gint) obj->width; }
// gint WindowAttr::width (const ::GdkWindowAttr* obj);
// gint WindowAttr::width (const ::GdkWindowAttr* obj);
gint base::WindowAttrBase::width_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GdkWindowAttr* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_width_get;
  auto _temp_ret = call_wrap_v ((const ::GdkWindowAttr*) (gobj_()));
  return _temp_ret;
}

static void _field_width_set (::GdkWindowAttr* obj, gint _value) { obj->width = (decltype(obj->width)) _value; }
//  WindowAttr::width (::GdkWindowAttr* obj, gint _value);
// void WindowAttr::width (::GdkWindowAttr* obj, gint _value);
void base::WindowAttrBase::width_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindowAttr* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_width_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkWindowAttr*) (gobj_()), (gint) (_value_to_c));
}

static gint _field_height_get (const ::GdkWindowAttr* obj) { return (gint) obj->height; }
// gint WindowAttr::height (const ::GdkWindowAttr* obj);
// gint WindowAttr::height (const ::GdkWindowAttr* obj);
gint base::WindowAttrBase::height_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GdkWindowAttr* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_height_get;
  auto _temp_ret = call_wrap_v ((const ::GdkWindowAttr*) (gobj_()));
  return _temp_ret;
}

static void _field_height_set (::GdkWindowAttr* obj, gint _value) { obj->height = (decltype(obj->height)) _value; }
//  WindowAttr::height (::GdkWindowAttr* obj, gint _value);
// void WindowAttr::height (::GdkWindowAttr* obj, gint _value);
void base::WindowAttrBase::height_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindowAttr* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_height_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkWindowAttr*) (gobj_()), (gint) (_value_to_c));
}

static ::GdkWindowWindowClass _field_wclass_get (const ::GdkWindowAttr* obj) { return (::GdkWindowWindowClass) obj->wclass; }
// ::GdkWindowWindowClass WindowAttr::wclass (const ::GdkWindowAttr* obj);
// ::GdkWindowWindowClass WindowAttr::wclass (const ::GdkWindowAttr* obj);
Gdk::WindowWindowClass base::WindowAttrBase::wclass_ () const noexcept
{
  typedef ::GdkWindowWindowClass (*call_wrap_t) (const ::GdkWindowAttr* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_wclass_get;
  auto _temp_ret = call_wrap_v ((const ::GdkWindowAttr*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_wclass_set (::GdkWindowAttr* obj, ::GdkWindowWindowClass _value) { obj->wclass = (decltype(obj->wclass)) _value; }
//  WindowAttr::wclass (::GdkWindowAttr* obj, ::GdkWindowWindowClass _value);
// void WindowAttr::wclass (::GdkWindowAttr* obj, ::GdkWindowWindowClass _value);
void base::WindowAttrBase::wclass_ (Gdk::WindowWindowClass _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindowAttr* obj, ::GdkWindowWindowClass _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_wclass_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GdkWindowAttr*) (gobj_()), (::GdkWindowWindowClass) (_value_to_c));
}

static ::GdkVisual* _field_visual_get (const ::GdkWindowAttr* obj) { return (::GdkVisual*) obj->visual; }
// ::GdkVisual* WindowAttr::visual (const ::GdkWindowAttr* obj);
// ::GdkVisual* WindowAttr::visual (const ::GdkWindowAttr* obj);
Gdk::Visual base::WindowAttrBase::visual_ () const noexcept
{
  typedef ::GdkVisual* (*call_wrap_t) (const ::GdkWindowAttr* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_visual_get;
  auto _temp_ret = call_wrap_v ((const ::GdkWindowAttr*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static ::GdkWindowType _field_window_type_get (const ::GdkWindowAttr* obj) { return (::GdkWindowType) obj->window_type; }
// ::GdkWindowType WindowAttr::window_type (const ::GdkWindowAttr* obj);
// ::GdkWindowType WindowAttr::window_type (const ::GdkWindowAttr* obj);
Gdk::WindowType base::WindowAttrBase::window_type_ () const noexcept
{
  typedef ::GdkWindowType (*call_wrap_t) (const ::GdkWindowAttr* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_window_type_get;
  auto _temp_ret = call_wrap_v ((const ::GdkWindowAttr*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_window_type_set (::GdkWindowAttr* obj, ::GdkWindowType _value) { obj->window_type = (decltype(obj->window_type)) _value; }
//  WindowAttr::window_type (::GdkWindowAttr* obj, ::GdkWindowType _value);
// void WindowAttr::window_type (::GdkWindowAttr* obj, ::GdkWindowType _value);
void base::WindowAttrBase::window_type_ (Gdk::WindowType _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindowAttr* obj, ::GdkWindowType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_window_type_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GdkWindowAttr*) (gobj_()), (::GdkWindowType) (_value_to_c));
}

static ::GdkCursor* _field_cursor_get (const ::GdkWindowAttr* obj) { return (::GdkCursor*) obj->cursor; }
// ::GdkCursor* WindowAttr::cursor (const ::GdkWindowAttr* obj);
// ::GdkCursor* WindowAttr::cursor (const ::GdkWindowAttr* obj);
Gdk::Cursor base::WindowAttrBase::cursor_ () const noexcept
{
  typedef ::GdkCursor* (*call_wrap_t) (const ::GdkWindowAttr* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_cursor_get;
  auto _temp_ret = call_wrap_v ((const ::GdkWindowAttr*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static char* _field_wmclass_name_get (const ::GdkWindowAttr* obj) { return (char*) obj->wmclass_name; }
// char* WindowAttr::wmclass_name (const ::GdkWindowAttr* obj);
// char* WindowAttr::wmclass_name (const ::GdkWindowAttr* obj);
std::string base::WindowAttrBase::wmclass_name_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GdkWindowAttr* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_wmclass_name_get;
  auto _temp_ret = call_wrap_v ((const ::GdkWindowAttr*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static char* _field_wmclass_class_get (const ::GdkWindowAttr* obj) { return (char*) obj->wmclass_class; }
// char* WindowAttr::wmclass_class (const ::GdkWindowAttr* obj);
// char* WindowAttr::wmclass_class (const ::GdkWindowAttr* obj);
std::string base::WindowAttrBase::wmclass_class_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GdkWindowAttr* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_wmclass_class_get;
  auto _temp_ret = call_wrap_v ((const ::GdkWindowAttr*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gboolean _field_override_redirect_get (const ::GdkWindowAttr* obj) { return (gboolean) obj->override_redirect; }
// gboolean WindowAttr::override_redirect (const ::GdkWindowAttr* obj);
// gboolean WindowAttr::override_redirect (const ::GdkWindowAttr* obj);
bool base::WindowAttrBase::override_redirect_ () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GdkWindowAttr* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_override_redirect_get;
  auto _temp_ret = call_wrap_v ((const ::GdkWindowAttr*) (gobj_()));
  return _temp_ret;
}

static void _field_override_redirect_set (::GdkWindowAttr* obj, gboolean _value) { obj->override_redirect = (decltype(obj->override_redirect)) _value; }
//  WindowAttr::override_redirect (::GdkWindowAttr* obj, gboolean _value);
// void WindowAttr::override_redirect (::GdkWindowAttr* obj, gboolean _value);
void base::WindowAttrBase::override_redirect_ (gboolean _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindowAttr* obj, gboolean _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_override_redirect_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkWindowAttr*) (gobj_()), (gboolean) (_value_to_c));
}

static ::GdkWindowTypeHint _field_type_hint_get (const ::GdkWindowAttr* obj) { return (::GdkWindowTypeHint) obj->type_hint; }
// ::GdkWindowTypeHint WindowAttr::type_hint (const ::GdkWindowAttr* obj);
// ::GdkWindowTypeHint WindowAttr::type_hint (const ::GdkWindowAttr* obj);
Gdk::WindowTypeHint base::WindowAttrBase::type_hint_ () const noexcept
{
  typedef ::GdkWindowTypeHint (*call_wrap_t) (const ::GdkWindowAttr* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_hint_get;
  auto _temp_ret = call_wrap_v ((const ::GdkWindowAttr*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_type_hint_set (::GdkWindowAttr* obj, ::GdkWindowTypeHint _value) { obj->type_hint = (decltype(obj->type_hint)) _value; }
//  WindowAttr::type_hint (::GdkWindowAttr* obj, ::GdkWindowTypeHint _value);
// void WindowAttr::type_hint (::GdkWindowAttr* obj, ::GdkWindowTypeHint _value);
void base::WindowAttrBase::type_hint_ (Gdk::WindowTypeHint _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindowAttr* obj, ::GdkWindowTypeHint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_hint_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GdkWindowAttr*) (gobj_()), (::GdkWindowTypeHint) (_value_to_c));
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/windowattr_extra_def_impl.hpp>)
#include <gdk/windowattr_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/windowattr_extra_impl.hpp>)
#include <gdk/windowattr_extra_impl.hpp>
#endif
#endif

#endif
