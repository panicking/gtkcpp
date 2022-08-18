// AUTO-GENERATED

#ifndef _GI_CAIRO_RECTANGLE_IMPL_HPP_
#define _GI_CAIRO_RECTANGLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace cairo {

namespace base {

static gdouble _field_x_get (const ::cairo_rectangle_t* obj) { return (gdouble) obj->x; }
// gdouble Rectangle::x (const ::cairo_rectangle_t* obj);
// gdouble Rectangle::x (const ::cairo_rectangle_t* obj);
gdouble base::RectangleBase::x_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::cairo_rectangle_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_get;
  auto _temp_ret = call_wrap_v ((const ::cairo_rectangle_t*) (gobj_()));
  return _temp_ret;
}

static void _field_x_set (::cairo_rectangle_t* obj, gdouble _value) { obj->x = (decltype(obj->x)) _value; }
//  Rectangle::x (::cairo_rectangle_t* obj, gdouble _value);
// void Rectangle::x (::cairo_rectangle_t* obj, gdouble _value);
void base::RectangleBase::x_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::cairo_rectangle_t* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_set;
  auto _value_to_c = _value;
  call_wrap_v ((::cairo_rectangle_t*) (gobj_()), (gdouble) (_value_to_c));
}

static gdouble _field_y_get (const ::cairo_rectangle_t* obj) { return (gdouble) obj->y; }
// gdouble Rectangle::y (const ::cairo_rectangle_t* obj);
// gdouble Rectangle::y (const ::cairo_rectangle_t* obj);
gdouble base::RectangleBase::y_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::cairo_rectangle_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_get;
  auto _temp_ret = call_wrap_v ((const ::cairo_rectangle_t*) (gobj_()));
  return _temp_ret;
}

static void _field_y_set (::cairo_rectangle_t* obj, gdouble _value) { obj->y = (decltype(obj->y)) _value; }
//  Rectangle::y (::cairo_rectangle_t* obj, gdouble _value);
// void Rectangle::y (::cairo_rectangle_t* obj, gdouble _value);
void base::RectangleBase::y_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::cairo_rectangle_t* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_set;
  auto _value_to_c = _value;
  call_wrap_v ((::cairo_rectangle_t*) (gobj_()), (gdouble) (_value_to_c));
}

static gdouble _field_width_get (const ::cairo_rectangle_t* obj) { return (gdouble) obj->width; }
// gdouble Rectangle::width (const ::cairo_rectangle_t* obj);
// gdouble Rectangle::width (const ::cairo_rectangle_t* obj);
gdouble base::RectangleBase::width_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::cairo_rectangle_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_width_get;
  auto _temp_ret = call_wrap_v ((const ::cairo_rectangle_t*) (gobj_()));
  return _temp_ret;
}

static void _field_width_set (::cairo_rectangle_t* obj, gdouble _value) { obj->width = (decltype(obj->width)) _value; }
//  Rectangle::width (::cairo_rectangle_t* obj, gdouble _value);
// void Rectangle::width (::cairo_rectangle_t* obj, gdouble _value);
void base::RectangleBase::width_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::cairo_rectangle_t* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_width_set;
  auto _value_to_c = _value;
  call_wrap_v ((::cairo_rectangle_t*) (gobj_()), (gdouble) (_value_to_c));
}

static gdouble _field_height_get (const ::cairo_rectangle_t* obj) { return (gdouble) obj->height; }
// gdouble Rectangle::height (const ::cairo_rectangle_t* obj);
// gdouble Rectangle::height (const ::cairo_rectangle_t* obj);
gdouble base::RectangleBase::height_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::cairo_rectangle_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_height_get;
  auto _temp_ret = call_wrap_v ((const ::cairo_rectangle_t*) (gobj_()));
  return _temp_ret;
}

static void _field_height_set (::cairo_rectangle_t* obj, gdouble _value) { obj->height = (decltype(obj->height)) _value; }
//  Rectangle::height (::cairo_rectangle_t* obj, gdouble _value);
// void Rectangle::height (::cairo_rectangle_t* obj, gdouble _value);
void base::RectangleBase::height_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::cairo_rectangle_t* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_height_set;
  auto _value_to_c = _value;
  call_wrap_v ((::cairo_rectangle_t*) (gobj_()), (gdouble) (_value_to_c));
}


} // namespace base

} // namespace cairo

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<cairo/rectangle_extra_def_impl.hpp>)
#include <cairo/rectangle_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<cairo/rectangle_extra_impl.hpp>)
#include <cairo/rectangle_extra_impl.hpp>
#endif
#endif

#endif
