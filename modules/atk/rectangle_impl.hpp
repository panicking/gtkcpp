// AUTO-GENERATED

#ifndef _GI_ATK_RECTANGLE_IMPL_HPP_
#define _GI_ATK_RECTANGLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Atk {

namespace base {

static gint _field_x_get (const ::AtkRectangle* obj) { return (gint) obj->x; }
// gint Rectangle::x (const ::AtkRectangle* obj);
// gint Rectangle::x (const ::AtkRectangle* obj);
gint base::RectangleBase::x_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::AtkRectangle* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_get;
  auto _temp_ret = call_wrap_v ((const ::AtkRectangle*) (gobj_()));
  return _temp_ret;
}

static void _field_x_set (::AtkRectangle* obj, gint _value) { obj->x = (decltype(obj->x)) _value; }
//  Rectangle::x (::AtkRectangle* obj, gint _value);
// void Rectangle::x (::AtkRectangle* obj, gint _value);
void base::RectangleBase::x_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::AtkRectangle* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_set;
  auto _value_to_c = _value;
  call_wrap_v ((::AtkRectangle*) (gobj_()), (gint) (_value_to_c));
}

static gint _field_y_get (const ::AtkRectangle* obj) { return (gint) obj->y; }
// gint Rectangle::y (const ::AtkRectangle* obj);
// gint Rectangle::y (const ::AtkRectangle* obj);
gint base::RectangleBase::y_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::AtkRectangle* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_get;
  auto _temp_ret = call_wrap_v ((const ::AtkRectangle*) (gobj_()));
  return _temp_ret;
}

static void _field_y_set (::AtkRectangle* obj, gint _value) { obj->y = (decltype(obj->y)) _value; }
//  Rectangle::y (::AtkRectangle* obj, gint _value);
// void Rectangle::y (::AtkRectangle* obj, gint _value);
void base::RectangleBase::y_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::AtkRectangle* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_set;
  auto _value_to_c = _value;
  call_wrap_v ((::AtkRectangle*) (gobj_()), (gint) (_value_to_c));
}

static gint _field_width_get (const ::AtkRectangle* obj) { return (gint) obj->width; }
// gint Rectangle::width (const ::AtkRectangle* obj);
// gint Rectangle::width (const ::AtkRectangle* obj);
gint base::RectangleBase::width_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::AtkRectangle* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_width_get;
  auto _temp_ret = call_wrap_v ((const ::AtkRectangle*) (gobj_()));
  return _temp_ret;
}

static void _field_width_set (::AtkRectangle* obj, gint _value) { obj->width = (decltype(obj->width)) _value; }
//  Rectangle::width (::AtkRectangle* obj, gint _value);
// void Rectangle::width (::AtkRectangle* obj, gint _value);
void base::RectangleBase::width_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::AtkRectangle* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_width_set;
  auto _value_to_c = _value;
  call_wrap_v ((::AtkRectangle*) (gobj_()), (gint) (_value_to_c));
}

static gint _field_height_get (const ::AtkRectangle* obj) { return (gint) obj->height; }
// gint Rectangle::height (const ::AtkRectangle* obj);
// gint Rectangle::height (const ::AtkRectangle* obj);
gint base::RectangleBase::height_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::AtkRectangle* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_height_get;
  auto _temp_ret = call_wrap_v ((const ::AtkRectangle*) (gobj_()));
  return _temp_ret;
}

static void _field_height_set (::AtkRectangle* obj, gint _value) { obj->height = (decltype(obj->height)) _value; }
//  Rectangle::height (::AtkRectangle* obj, gint _value);
// void Rectangle::height (::AtkRectangle* obj, gint _value);
void base::RectangleBase::height_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::AtkRectangle* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_height_set;
  auto _value_to_c = _value;
  call_wrap_v ((::AtkRectangle*) (gobj_()), (gint) (_value_to_c));
}


} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/rectangle_extra_def_impl.hpp>)
#include <atk/rectangle_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/rectangle_extra_impl.hpp>)
#include <atk/rectangle_extra_impl.hpp>
#endif
#endif

#endif
