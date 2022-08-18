// AUTO-GENERATED

#ifndef _GI_PANGO_GLYPHGEOMETRY_IMPL_HPP_
#define _GI_PANGO_GLYPHGEOMETRY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace base {

static ::PangoGlyphUnit _field_width_get (const ::PangoGlyphGeometry* obj) { return (::PangoGlyphUnit) obj->width; }
// ::PangoGlyphUnit GlyphGeometry::width (const ::PangoGlyphGeometry* obj);
// ::PangoGlyphUnit GlyphGeometry::width (const ::PangoGlyphGeometry* obj);
Pango::GlyphUnit base::GlyphGeometryBase::width_ () const noexcept
{
  typedef ::PangoGlyphUnit (*call_wrap_t) (const ::PangoGlyphGeometry* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_width_get;
  auto _temp_ret = call_wrap_v ((const ::PangoGlyphGeometry*) (gobj_()));
  return _temp_ret;
}

static void _field_width_set (::PangoGlyphGeometry* obj, ::PangoGlyphUnit _value) { obj->width = (decltype(obj->width)) _value; }
//  GlyphGeometry::width (::PangoGlyphGeometry* obj, ::PangoGlyphUnit _value);
// void GlyphGeometry::width (::PangoGlyphGeometry* obj, ::PangoGlyphUnit _value);
void base::GlyphGeometryBase::width_ (::PangoGlyphUnit _value) noexcept
{
  typedef void (*call_wrap_t) (::PangoGlyphGeometry* obj, ::PangoGlyphUnit _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_width_set;
  auto _value_to_c = _value;
  call_wrap_v ((::PangoGlyphGeometry*) (gobj_()), (::PangoGlyphUnit) (_value_to_c));
}

static ::PangoGlyphUnit _field_x_offset_get (const ::PangoGlyphGeometry* obj) { return (::PangoGlyphUnit) obj->x_offset; }
// ::PangoGlyphUnit GlyphGeometry::x_offset (const ::PangoGlyphGeometry* obj);
// ::PangoGlyphUnit GlyphGeometry::x_offset (const ::PangoGlyphGeometry* obj);
Pango::GlyphUnit base::GlyphGeometryBase::x_offset_ () const noexcept
{
  typedef ::PangoGlyphUnit (*call_wrap_t) (const ::PangoGlyphGeometry* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_offset_get;
  auto _temp_ret = call_wrap_v ((const ::PangoGlyphGeometry*) (gobj_()));
  return _temp_ret;
}

static void _field_x_offset_set (::PangoGlyphGeometry* obj, ::PangoGlyphUnit _value) { obj->x_offset = (decltype(obj->x_offset)) _value; }
//  GlyphGeometry::x_offset (::PangoGlyphGeometry* obj, ::PangoGlyphUnit _value);
// void GlyphGeometry::x_offset (::PangoGlyphGeometry* obj, ::PangoGlyphUnit _value);
void base::GlyphGeometryBase::x_offset_ (::PangoGlyphUnit _value) noexcept
{
  typedef void (*call_wrap_t) (::PangoGlyphGeometry* obj, ::PangoGlyphUnit _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_offset_set;
  auto _value_to_c = _value;
  call_wrap_v ((::PangoGlyphGeometry*) (gobj_()), (::PangoGlyphUnit) (_value_to_c));
}

static ::PangoGlyphUnit _field_y_offset_get (const ::PangoGlyphGeometry* obj) { return (::PangoGlyphUnit) obj->y_offset; }
// ::PangoGlyphUnit GlyphGeometry::y_offset (const ::PangoGlyphGeometry* obj);
// ::PangoGlyphUnit GlyphGeometry::y_offset (const ::PangoGlyphGeometry* obj);
Pango::GlyphUnit base::GlyphGeometryBase::y_offset_ () const noexcept
{
  typedef ::PangoGlyphUnit (*call_wrap_t) (const ::PangoGlyphGeometry* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_offset_get;
  auto _temp_ret = call_wrap_v ((const ::PangoGlyphGeometry*) (gobj_()));
  return _temp_ret;
}

static void _field_y_offset_set (::PangoGlyphGeometry* obj, ::PangoGlyphUnit _value) { obj->y_offset = (decltype(obj->y_offset)) _value; }
//  GlyphGeometry::y_offset (::PangoGlyphGeometry* obj, ::PangoGlyphUnit _value);
// void GlyphGeometry::y_offset (::PangoGlyphGeometry* obj, ::PangoGlyphUnit _value);
void base::GlyphGeometryBase::y_offset_ (::PangoGlyphUnit _value) noexcept
{
  typedef void (*call_wrap_t) (::PangoGlyphGeometry* obj, ::PangoGlyphUnit _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_offset_set;
  auto _value_to_c = _value;
  call_wrap_v ((::PangoGlyphGeometry*) (gobj_()), (::PangoGlyphUnit) (_value_to_c));
}


} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/glyphgeometry_extra_def_impl.hpp>)
#include <pango/glyphgeometry_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/glyphgeometry_extra_impl.hpp>)
#include <pango/glyphgeometry_extra_impl.hpp>
#endif
#endif

#endif
