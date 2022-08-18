// AUTO-GENERATED

#ifndef _GI_ATK_TEXTRECTANGLE_IMPL_HPP_
#define _GI_ATK_TEXTRECTANGLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Atk {

namespace base {

static gint _field_x_get (const ::AtkTextRectangle* obj) { return (gint) obj->x; }
// gint TextRectangle::x (const ::AtkTextRectangle* obj);
// gint TextRectangle::x (const ::AtkTextRectangle* obj);
gint base::TextRectangleBase::x_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::AtkTextRectangle* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_get;
  auto _temp_ret = call_wrap_v ((const ::AtkTextRectangle*) (gobj_()));
  return _temp_ret;
}

static void _field_x_set (::AtkTextRectangle* obj, gint _value) { obj->x = (decltype(obj->x)) _value; }
//  TextRectangle::x (::AtkTextRectangle* obj, gint _value);
// void TextRectangle::x (::AtkTextRectangle* obj, gint _value);
void base::TextRectangleBase::x_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::AtkTextRectangle* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_set;
  auto _value_to_c = _value;
  call_wrap_v ((::AtkTextRectangle*) (gobj_()), (gint) (_value_to_c));
}

static gint _field_y_get (const ::AtkTextRectangle* obj) { return (gint) obj->y; }
// gint TextRectangle::y (const ::AtkTextRectangle* obj);
// gint TextRectangle::y (const ::AtkTextRectangle* obj);
gint base::TextRectangleBase::y_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::AtkTextRectangle* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_get;
  auto _temp_ret = call_wrap_v ((const ::AtkTextRectangle*) (gobj_()));
  return _temp_ret;
}

static void _field_y_set (::AtkTextRectangle* obj, gint _value) { obj->y = (decltype(obj->y)) _value; }
//  TextRectangle::y (::AtkTextRectangle* obj, gint _value);
// void TextRectangle::y (::AtkTextRectangle* obj, gint _value);
void base::TextRectangleBase::y_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::AtkTextRectangle* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_set;
  auto _value_to_c = _value;
  call_wrap_v ((::AtkTextRectangle*) (gobj_()), (gint) (_value_to_c));
}

static gint _field_width_get (const ::AtkTextRectangle* obj) { return (gint) obj->width; }
// gint TextRectangle::width (const ::AtkTextRectangle* obj);
// gint TextRectangle::width (const ::AtkTextRectangle* obj);
gint base::TextRectangleBase::width_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::AtkTextRectangle* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_width_get;
  auto _temp_ret = call_wrap_v ((const ::AtkTextRectangle*) (gobj_()));
  return _temp_ret;
}

static void _field_width_set (::AtkTextRectangle* obj, gint _value) { obj->width = (decltype(obj->width)) _value; }
//  TextRectangle::width (::AtkTextRectangle* obj, gint _value);
// void TextRectangle::width (::AtkTextRectangle* obj, gint _value);
void base::TextRectangleBase::width_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::AtkTextRectangle* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_width_set;
  auto _value_to_c = _value;
  call_wrap_v ((::AtkTextRectangle*) (gobj_()), (gint) (_value_to_c));
}

static gint _field_height_get (const ::AtkTextRectangle* obj) { return (gint) obj->height; }
// gint TextRectangle::height (const ::AtkTextRectangle* obj);
// gint TextRectangle::height (const ::AtkTextRectangle* obj);
gint base::TextRectangleBase::height_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::AtkTextRectangle* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_height_get;
  auto _temp_ret = call_wrap_v ((const ::AtkTextRectangle*) (gobj_()));
  return _temp_ret;
}

static void _field_height_set (::AtkTextRectangle* obj, gint _value) { obj->height = (decltype(obj->height)) _value; }
//  TextRectangle::height (::AtkTextRectangle* obj, gint _value);
// void TextRectangle::height (::AtkTextRectangle* obj, gint _value);
void base::TextRectangleBase::height_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::AtkTextRectangle* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_height_set;
  auto _value_to_c = _value;
  call_wrap_v ((::AtkTextRectangle*) (gobj_()), (gint) (_value_to_c));
}


} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/textrectangle_extra_def_impl.hpp>)
#include <atk/textrectangle_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/textrectangle_extra_impl.hpp>)
#include <atk/textrectangle_extra_impl.hpp>
#endif
#endif

#endif
