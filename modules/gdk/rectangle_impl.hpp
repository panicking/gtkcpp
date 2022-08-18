// AUTO-GENERATED

#ifndef _GI_GDK_RECTANGLE_IMPL_HPP_
#define _GI_GDK_RECTANGLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

static gint _field_x_get (const ::GdkRectangle* obj) { return (gint) obj->x; }
// gint Rectangle::x (const ::GdkRectangle* obj);
// gint Rectangle::x (const ::GdkRectangle* obj);
gint base::RectangleBase::x_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GdkRectangle* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_get;
  auto _temp_ret = call_wrap_v ((const ::GdkRectangle*) (gobj_()));
  return _temp_ret;
}

static void _field_x_set (::GdkRectangle* obj, gint _value) { obj->x = (decltype(obj->x)) _value; }
//  Rectangle::x (::GdkRectangle* obj, gint _value);
// void Rectangle::x (::GdkRectangle* obj, gint _value);
void base::RectangleBase::x_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkRectangle* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkRectangle*) (gobj_()), (gint) (_value_to_c));
}

static gint _field_y_get (const ::GdkRectangle* obj) { return (gint) obj->y; }
// gint Rectangle::y (const ::GdkRectangle* obj);
// gint Rectangle::y (const ::GdkRectangle* obj);
gint base::RectangleBase::y_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GdkRectangle* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_get;
  auto _temp_ret = call_wrap_v ((const ::GdkRectangle*) (gobj_()));
  return _temp_ret;
}

static void _field_y_set (::GdkRectangle* obj, gint _value) { obj->y = (decltype(obj->y)) _value; }
//  Rectangle::y (::GdkRectangle* obj, gint _value);
// void Rectangle::y (::GdkRectangle* obj, gint _value);
void base::RectangleBase::y_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkRectangle* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkRectangle*) (gobj_()), (gint) (_value_to_c));
}

static gint _field_width_get (const ::GdkRectangle* obj) { return (gint) obj->width; }
// gint Rectangle::width (const ::GdkRectangle* obj);
// gint Rectangle::width (const ::GdkRectangle* obj);
gint base::RectangleBase::width_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GdkRectangle* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_width_get;
  auto _temp_ret = call_wrap_v ((const ::GdkRectangle*) (gobj_()));
  return _temp_ret;
}

static void _field_width_set (::GdkRectangle* obj, gint _value) { obj->width = (decltype(obj->width)) _value; }
//  Rectangle::width (::GdkRectangle* obj, gint _value);
// void Rectangle::width (::GdkRectangle* obj, gint _value);
void base::RectangleBase::width_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkRectangle* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_width_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkRectangle*) (gobj_()), (gint) (_value_to_c));
}

static gint _field_height_get (const ::GdkRectangle* obj) { return (gint) obj->height; }
// gint Rectangle::height (const ::GdkRectangle* obj);
// gint Rectangle::height (const ::GdkRectangle* obj);
gint base::RectangleBase::height_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GdkRectangle* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_height_get;
  auto _temp_ret = call_wrap_v ((const ::GdkRectangle*) (gobj_()));
  return _temp_ret;
}

static void _field_height_set (::GdkRectangle* obj, gint _value) { obj->height = (decltype(obj->height)) _value; }
//  Rectangle::height (::GdkRectangle* obj, gint _value);
// void Rectangle::height (::GdkRectangle* obj, gint _value);
void base::RectangleBase::height_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkRectangle* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_height_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkRectangle*) (gobj_()), (gint) (_value_to_c));
}

// gboolean gdk_rectangle_equal (const GdkRectangle* rect1, const GdkRectangle* rect2);
// gboolean gdk_rectangle_equal (const ::GdkRectangle* rect1, const ::GdkRectangle* rect2);
bool base::RectangleBase::equal (const Gdk::Rectangle & rect2) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GdkRectangle* rect1, const ::GdkRectangle* rect2);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_rectangle_equal;
  auto rect2_to_c = gi::unwrap (rect2, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GdkRectangle*) (gobj_()), (const ::GdkRectangle*) (rect2_to_c));
  return _temp_ret;
}

// gboolean gdk_rectangle_intersect (const GdkRectangle* src1, const GdkRectangle* src2, GdkRectangle* dest);
// gboolean gdk_rectangle_intersect (const ::GdkRectangle* src1, const ::GdkRectangle* src2, ::GdkRectangle* dest);
bool base::RectangleBase::intersect (const Gdk::Rectangle & src2, Gdk::Rectangle * dest) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GdkRectangle* src1, const ::GdkRectangle* src2, ::GdkRectangle* dest);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_rectangle_intersect;
  traits::unset_wrapper<::GdkRectangle>::type dest_c;
  auto src2_to_c = gi::unwrap (src2, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GdkRectangle*) (gobj_()), (const ::GdkRectangle*) (src2_to_c), (::GdkRectangle*) (dest ? (::GdkRectangle*) &dest_c : nullptr));
  if (dest) *dest = gi::wrap ((::GdkRectangle*) &dest_c, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Gdk::Rectangle> base::RectangleBase::intersect (const Gdk::Rectangle & src2) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GdkRectangle* src1, const ::GdkRectangle* src2, ::GdkRectangle* dest);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_rectangle_intersect;
  traits::unset_wrapper<::GdkRectangle>::type dest_c;
  auto src2_to_c = gi::unwrap (src2, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GdkRectangle*) (gobj_()), (const ::GdkRectangle*) (src2_to_c), (::GdkRectangle*) ((::GdkRectangle*) &dest_c));
  return std::make_tuple (_temp_ret, gi::wrap ((::GdkRectangle*) &dest_c, gi::transfer_none, gi::direction_out));
}

// void gdk_rectangle_union (const GdkRectangle* src1, const GdkRectangle* src2, GdkRectangle* dest);
// void gdk_rectangle_union (const ::GdkRectangle* src1, const ::GdkRectangle* src2, ::GdkRectangle* dest);
void base::RectangleBase::union_ (const Gdk::Rectangle & src2, Gdk::Rectangle & dest) const noexcept
{
  typedef void (*call_wrap_t) (const ::GdkRectangle* src1, const ::GdkRectangle* src2, ::GdkRectangle* dest);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_rectangle_union;
  traits::unset_wrapper<::GdkRectangle>::type dest_c;
  auto src2_to_c = gi::unwrap (src2, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const ::GdkRectangle*) (gobj_()), (const ::GdkRectangle*) (src2_to_c), (::GdkRectangle*) ((::GdkRectangle*) &dest_c));
  dest = gi::wrap ((::GdkRectangle*) &dest_c, gi::transfer_none, gi::direction_out);
}
Gdk::Rectangle base::RectangleBase::union_ (const Gdk::Rectangle & src2) const noexcept
{
  typedef void (*call_wrap_t) (const ::GdkRectangle* src1, const ::GdkRectangle* src2, ::GdkRectangle* dest);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_rectangle_union;
  traits::unset_wrapper<::GdkRectangle>::type dest_c;
  auto src2_to_c = gi::unwrap (src2, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const ::GdkRectangle*) (gobj_()), (const ::GdkRectangle*) (src2_to_c), (::GdkRectangle*) ((::GdkRectangle*) &dest_c));
  return gi::wrap ((::GdkRectangle*) &dest_c, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/rectangle_extra_def_impl.hpp>)
#include <gdk/rectangle_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/rectangle_extra_impl.hpp>)
#include <gdk/rectangle_extra_impl.hpp>
#endif
#endif

#endif
