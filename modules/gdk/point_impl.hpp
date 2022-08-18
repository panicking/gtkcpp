// AUTO-GENERATED

#ifndef _GI_GDK_POINT_IMPL_HPP_
#define _GI_GDK_POINT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

static gint _field_x_get (const ::GdkPoint* obj) { return (gint) obj->x; }
// gint Point::x (const ::GdkPoint* obj);
// gint Point::x (const ::GdkPoint* obj);
gint base::PointBase::x_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GdkPoint* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_get;
  auto _temp_ret = call_wrap_v ((const ::GdkPoint*) (gobj_()));
  return _temp_ret;
}

static void _field_x_set (::GdkPoint* obj, gint _value) { obj->x = (decltype(obj->x)) _value; }
//  Point::x (::GdkPoint* obj, gint _value);
// void Point::x (::GdkPoint* obj, gint _value);
void base::PointBase::x_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkPoint* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkPoint*) (gobj_()), (gint) (_value_to_c));
}

static gint _field_y_get (const ::GdkPoint* obj) { return (gint) obj->y; }
// gint Point::y (const ::GdkPoint* obj);
// gint Point::y (const ::GdkPoint* obj);
gint base::PointBase::y_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GdkPoint* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_get;
  auto _temp_ret = call_wrap_v ((const ::GdkPoint*) (gobj_()));
  return _temp_ret;
}

static void _field_y_set (::GdkPoint* obj, gint _value) { obj->y = (decltype(obj->y)) _value; }
//  Point::y (::GdkPoint* obj, gint _value);
// void Point::y (::GdkPoint* obj, gint _value);
void base::PointBase::y_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkPoint* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkPoint*) (gobj_()), (gint) (_value_to_c));
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/point_extra_def_impl.hpp>)
#include <gdk/point_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/point_extra_impl.hpp>)
#include <gdk/point_extra_impl.hpp>
#endif
#endif

#endif
