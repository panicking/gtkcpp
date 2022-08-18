// AUTO-GENERATED

#ifndef _GI_GDK_RGBA_IMPL_HPP_
#define _GI_GDK_RGBA_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

static gdouble _field_red_get (const ::GdkRGBA* obj) { return (gdouble) obj->red; }
// gdouble RGBA::red (const ::GdkRGBA* obj);
// gdouble RGBA::red (const ::GdkRGBA* obj);
gdouble base::RGBABase::red_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::GdkRGBA* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_red_get;
  auto _temp_ret = call_wrap_v ((const ::GdkRGBA*) (gobj_()));
  return _temp_ret;
}

static void _field_red_set (::GdkRGBA* obj, gdouble _value) { obj->red = (decltype(obj->red)) _value; }
//  RGBA::red (::GdkRGBA* obj, gdouble _value);
// void RGBA::red (::GdkRGBA* obj, gdouble _value);
void base::RGBABase::red_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkRGBA* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_red_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkRGBA*) (gobj_()), (gdouble) (_value_to_c));
}

static gdouble _field_green_get (const ::GdkRGBA* obj) { return (gdouble) obj->green; }
// gdouble RGBA::green (const ::GdkRGBA* obj);
// gdouble RGBA::green (const ::GdkRGBA* obj);
gdouble base::RGBABase::green_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::GdkRGBA* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_green_get;
  auto _temp_ret = call_wrap_v ((const ::GdkRGBA*) (gobj_()));
  return _temp_ret;
}

static void _field_green_set (::GdkRGBA* obj, gdouble _value) { obj->green = (decltype(obj->green)) _value; }
//  RGBA::green (::GdkRGBA* obj, gdouble _value);
// void RGBA::green (::GdkRGBA* obj, gdouble _value);
void base::RGBABase::green_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkRGBA* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_green_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkRGBA*) (gobj_()), (gdouble) (_value_to_c));
}

static gdouble _field_blue_get (const ::GdkRGBA* obj) { return (gdouble) obj->blue; }
// gdouble RGBA::blue (const ::GdkRGBA* obj);
// gdouble RGBA::blue (const ::GdkRGBA* obj);
gdouble base::RGBABase::blue_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::GdkRGBA* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_blue_get;
  auto _temp_ret = call_wrap_v ((const ::GdkRGBA*) (gobj_()));
  return _temp_ret;
}

static void _field_blue_set (::GdkRGBA* obj, gdouble _value) { obj->blue = (decltype(obj->blue)) _value; }
//  RGBA::blue (::GdkRGBA* obj, gdouble _value);
// void RGBA::blue (::GdkRGBA* obj, gdouble _value);
void base::RGBABase::blue_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkRGBA* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_blue_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkRGBA*) (gobj_()), (gdouble) (_value_to_c));
}

static gdouble _field_alpha_get (const ::GdkRGBA* obj) { return (gdouble) obj->alpha; }
// gdouble RGBA::alpha (const ::GdkRGBA* obj);
// gdouble RGBA::alpha (const ::GdkRGBA* obj);
gdouble base::RGBABase::alpha_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::GdkRGBA* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_alpha_get;
  auto _temp_ret = call_wrap_v ((const ::GdkRGBA*) (gobj_()));
  return _temp_ret;
}

static void _field_alpha_set (::GdkRGBA* obj, gdouble _value) { obj->alpha = (decltype(obj->alpha)) _value; }
//  RGBA::alpha (::GdkRGBA* obj, gdouble _value);
// void RGBA::alpha (::GdkRGBA* obj, gdouble _value);
void base::RGBABase::alpha_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkRGBA* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_alpha_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkRGBA*) (gobj_()), (gdouble) (_value_to_c));
}

// GdkRGBA* gdk_rgba_copy (const GdkRGBA* rgba);
// ::GdkRGBA* gdk_rgba_copy (const ::GdkRGBA* rgba);
Gdk::RGBA base::RGBABase::copy () const noexcept
{
  typedef ::GdkRGBA* (*call_wrap_t) (const ::GdkRGBA* rgba);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_rgba_copy;
  auto _temp_ret = call_wrap_v ((const ::GdkRGBA*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gdk_rgba_equal (gconstpointer p1, gconstpointer p2);
// gboolean gdk_rgba_equal (const ::GdkRGBA* p1, const ::GdkRGBA* p2);
bool base::RGBABase::equal (const Gdk::RGBA & p2) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GdkRGBA* p1, const ::GdkRGBA* p2);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_rgba_equal;
  auto p2_to_c = gi::unwrap (p2, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GdkRGBA*) (gobj_()), (const ::GdkRGBA*) (p2_to_c));
  return _temp_ret;
}

// void gdk_rgba_free (GdkRGBA* rgba);
// void gdk_rgba_free (::GdkRGBA* rgba);
// IGNORE; marked ignore

// guint gdk_rgba_hash (gconstpointer p);
// guint gdk_rgba_hash (const ::GdkRGBA* p);
guint base::RGBABase::hash () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GdkRGBA* p);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_rgba_hash;
  auto _temp_ret = call_wrap_v ((const ::GdkRGBA*) (gobj_()));
  return _temp_ret;
}

// gboolean gdk_rgba_parse (GdkRGBA* rgba, const gchar* spec);
// gboolean gdk_rgba_parse (::GdkRGBA* rgba, const char* spec);
bool base::RGBABase::parse (const std::string & spec) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkRGBA* rgba, const char* spec);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_rgba_parse;
  auto spec_to_c = gi::unwrap (spec, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GdkRGBA*) (gobj_()), (const char*) (spec_to_c));
  return _temp_ret;
}

// gchar* gdk_rgba_to_string (const GdkRGBA* rgba);
// char* gdk_rgba_to_string (const ::GdkRGBA* rgba);
std::string base::RGBABase::to_string () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GdkRGBA* rgba);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_rgba_to_string;
  auto _temp_ret = call_wrap_v ((const ::GdkRGBA*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/rgba_extra_def_impl.hpp>)
#include <gdk/rgba_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/rgba_extra_impl.hpp>)
#include <gdk/rgba_extra_impl.hpp>
#endif
#endif

#endif
