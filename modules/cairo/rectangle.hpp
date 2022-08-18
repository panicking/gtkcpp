// AUTO-GENERATED

#ifndef _GI_CAIRO_RECTANGLE_HPP_
#define _GI_CAIRO_RECTANGLE_HPP_


namespace gi {

namespace repository {

namespace cairo {


class Rectangle;

namespace base {


#define GI_CAIRO_RECTANGLE_BASE base::RectangleBase
class RectangleBase : public gi::detail::GBoxedWrapper<RectangleBase, ::cairo_rectangle_t>
{
typedef gi::detail::GBoxedWrapper<RectangleBase, ::cairo_rectangle_t> super_type;
public:

RectangleBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return cairo_gobject_rectangle_get_type(); } 

// gdouble Rectangle::x (const ::cairo_rectangle_t* obj);
// gdouble Rectangle::x (const ::cairo_rectangle_t* obj);
GI_INLINE_DECL gdouble x_ () const noexcept;

//  Rectangle::x (::cairo_rectangle_t* obj, gdouble _value);
// void Rectangle::x (::cairo_rectangle_t* obj, gdouble _value);
GI_INLINE_DECL void x_ (gdouble _value) noexcept;

// gdouble Rectangle::y (const ::cairo_rectangle_t* obj);
// gdouble Rectangle::y (const ::cairo_rectangle_t* obj);
GI_INLINE_DECL gdouble y_ () const noexcept;

//  Rectangle::y (::cairo_rectangle_t* obj, gdouble _value);
// void Rectangle::y (::cairo_rectangle_t* obj, gdouble _value);
GI_INLINE_DECL void y_ (gdouble _value) noexcept;

// gdouble Rectangle::width (const ::cairo_rectangle_t* obj);
// gdouble Rectangle::width (const ::cairo_rectangle_t* obj);
GI_INLINE_DECL gdouble width_ () const noexcept;

//  Rectangle::width (::cairo_rectangle_t* obj, gdouble _value);
// void Rectangle::width (::cairo_rectangle_t* obj, gdouble _value);
GI_INLINE_DECL void width_ (gdouble _value) noexcept;

// gdouble Rectangle::height (const ::cairo_rectangle_t* obj);
// gdouble Rectangle::height (const ::cairo_rectangle_t* obj);
GI_INLINE_DECL gdouble height_ () const noexcept;

//  Rectangle::height (::cairo_rectangle_t* obj, gdouble _value);
// void Rectangle::height (::cairo_rectangle_t* obj, gdouble _value);
GI_INLINE_DECL void height_ (gdouble _value) noexcept;

}; // class

} // namespace base

} // namespace cairo

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<cairo/rectangle_extra_def.hpp>)
#include <cairo/rectangle_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<cairo/rectangle_extra.hpp>)
#include <cairo/rectangle_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace cairo {

class Rectangle : public GI_CAIRO_RECTANGLE_BASE
{ typedef GI_CAIRO_RECTANGLE_BASE super_type; using super_type::super_type; };

} // namespace cairo

template<> struct declare_cpptype_of<::cairo_rectangle_t>
{ typedef cairo::Rectangle type; }; 

} // namespace repository

} // namespace gi

#endif
