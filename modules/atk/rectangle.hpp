// AUTO-GENERATED

#ifndef _GI_ATK_RECTANGLE_HPP_
#define _GI_ATK_RECTANGLE_HPP_


namespace gi {

namespace repository {

namespace Atk {


class Rectangle;

namespace base {


#define GI_ATK_RECTANGLE_BASE base::RectangleBase
class RectangleBase : public gi::detail::GBoxedWrapper<RectangleBase, ::AtkRectangle>
{
typedef gi::detail::GBoxedWrapper<RectangleBase, ::AtkRectangle> super_type;
public:

RectangleBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return atk_rectangle_get_type(); } 

// gint Rectangle::x (const ::AtkRectangle* obj);
// gint Rectangle::x (const ::AtkRectangle* obj);
GI_INLINE_DECL gint x_ () const noexcept;

//  Rectangle::x (::AtkRectangle* obj, gint _value);
// void Rectangle::x (::AtkRectangle* obj, gint _value);
GI_INLINE_DECL void x_ (gint _value) noexcept;

// gint Rectangle::y (const ::AtkRectangle* obj);
// gint Rectangle::y (const ::AtkRectangle* obj);
GI_INLINE_DECL gint y_ () const noexcept;

//  Rectangle::y (::AtkRectangle* obj, gint _value);
// void Rectangle::y (::AtkRectangle* obj, gint _value);
GI_INLINE_DECL void y_ (gint _value) noexcept;

// gint Rectangle::width (const ::AtkRectangle* obj);
// gint Rectangle::width (const ::AtkRectangle* obj);
GI_INLINE_DECL gint width_ () const noexcept;

//  Rectangle::width (::AtkRectangle* obj, gint _value);
// void Rectangle::width (::AtkRectangle* obj, gint _value);
GI_INLINE_DECL void width_ (gint _value) noexcept;

// gint Rectangle::height (const ::AtkRectangle* obj);
// gint Rectangle::height (const ::AtkRectangle* obj);
GI_INLINE_DECL gint height_ () const noexcept;

//  Rectangle::height (::AtkRectangle* obj, gint _value);
// void Rectangle::height (::AtkRectangle* obj, gint _value);
GI_INLINE_DECL void height_ (gint _value) noexcept;

}; // class

} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/rectangle_extra_def.hpp>)
#include <atk/rectangle_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/rectangle_extra.hpp>)
#include <atk/rectangle_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

class Rectangle : public GI_ATK_RECTANGLE_BASE
{ typedef GI_ATK_RECTANGLE_BASE super_type; using super_type::super_type; };

} // namespace Atk

template<> struct declare_cpptype_of<::AtkRectangle>
{ typedef Atk::Rectangle type; }; 

} // namespace repository

} // namespace gi

#endif
