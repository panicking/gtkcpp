// AUTO-GENERATED

#ifndef _GI_PANGO_RECTANGLE_HPP_
#define _GI_PANGO_RECTANGLE_HPP_


namespace gi {

namespace repository {

namespace Pango {


class Rectangle;

namespace base {


#define GI_PANGO_RECTANGLE_BASE base::RectangleBase
class RectangleBase : public gi::detail::CBoxedWrapper<RectangleBase, ::PangoRectangle>
{
typedef gi::detail::CBoxedWrapper<RectangleBase, ::PangoRectangle> super_type;
public:

RectangleBase (std::nullptr_t = nullptr) : super_type() {}

// gint Rectangle::x (const ::PangoRectangle* obj);
// gint Rectangle::x (const ::PangoRectangle* obj);
GI_INLINE_DECL gint x_ () const noexcept;

//  Rectangle::x (::PangoRectangle* obj, gint _value);
// void Rectangle::x (::PangoRectangle* obj, gint _value);
GI_INLINE_DECL void x_ (gint _value) noexcept;

// gint Rectangle::y (const ::PangoRectangle* obj);
// gint Rectangle::y (const ::PangoRectangle* obj);
GI_INLINE_DECL gint y_ () const noexcept;

//  Rectangle::y (::PangoRectangle* obj, gint _value);
// void Rectangle::y (::PangoRectangle* obj, gint _value);
GI_INLINE_DECL void y_ (gint _value) noexcept;

// gint Rectangle::width (const ::PangoRectangle* obj);
// gint Rectangle::width (const ::PangoRectangle* obj);
GI_INLINE_DECL gint width_ () const noexcept;

//  Rectangle::width (::PangoRectangle* obj, gint _value);
// void Rectangle::width (::PangoRectangle* obj, gint _value);
GI_INLINE_DECL void width_ (gint _value) noexcept;

// gint Rectangle::height (const ::PangoRectangle* obj);
// gint Rectangle::height (const ::PangoRectangle* obj);
GI_INLINE_DECL gint height_ () const noexcept;

//  Rectangle::height (::PangoRectangle* obj, gint _value);
// void Rectangle::height (::PangoRectangle* obj, gint _value);
GI_INLINE_DECL void height_ (gint _value) noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/rectangle_extra_def.hpp>)
#include <pango/rectangle_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/rectangle_extra.hpp>)
#include <pango/rectangle_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class Rectangle : public GI_PANGO_RECTANGLE_BASE
{ typedef GI_PANGO_RECTANGLE_BASE super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoRectangle>
{ typedef Pango::Rectangle type; }; 

} // namespace repository

} // namespace gi

#endif
