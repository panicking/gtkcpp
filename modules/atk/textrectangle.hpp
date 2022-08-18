// AUTO-GENERATED

#ifndef _GI_ATK_TEXTRECTANGLE_HPP_
#define _GI_ATK_TEXTRECTANGLE_HPP_


namespace gi {

namespace repository {

namespace Atk {


class TextRectangle;

namespace base {


#define GI_ATK_TEXTRECTANGLE_BASE base::TextRectangleBase
class TextRectangleBase : public gi::detail::CBoxedWrapper<TextRectangleBase, ::AtkTextRectangle>
{
typedef gi::detail::CBoxedWrapper<TextRectangleBase, ::AtkTextRectangle> super_type;
public:

TextRectangleBase (std::nullptr_t = nullptr) : super_type() {}

// gint TextRectangle::x (const ::AtkTextRectangle* obj);
// gint TextRectangle::x (const ::AtkTextRectangle* obj);
GI_INLINE_DECL gint x_ () const noexcept;

//  TextRectangle::x (::AtkTextRectangle* obj, gint _value);
// void TextRectangle::x (::AtkTextRectangle* obj, gint _value);
GI_INLINE_DECL void x_ (gint _value) noexcept;

// gint TextRectangle::y (const ::AtkTextRectangle* obj);
// gint TextRectangle::y (const ::AtkTextRectangle* obj);
GI_INLINE_DECL gint y_ () const noexcept;

//  TextRectangle::y (::AtkTextRectangle* obj, gint _value);
// void TextRectangle::y (::AtkTextRectangle* obj, gint _value);
GI_INLINE_DECL void y_ (gint _value) noexcept;

// gint TextRectangle::width (const ::AtkTextRectangle* obj);
// gint TextRectangle::width (const ::AtkTextRectangle* obj);
GI_INLINE_DECL gint width_ () const noexcept;

//  TextRectangle::width (::AtkTextRectangle* obj, gint _value);
// void TextRectangle::width (::AtkTextRectangle* obj, gint _value);
GI_INLINE_DECL void width_ (gint _value) noexcept;

// gint TextRectangle::height (const ::AtkTextRectangle* obj);
// gint TextRectangle::height (const ::AtkTextRectangle* obj);
GI_INLINE_DECL gint height_ () const noexcept;

//  TextRectangle::height (::AtkTextRectangle* obj, gint _value);
// void TextRectangle::height (::AtkTextRectangle* obj, gint _value);
GI_INLINE_DECL void height_ (gint _value) noexcept;

}; // class

} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/textrectangle_extra_def.hpp>)
#include <atk/textrectangle_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/textrectangle_extra.hpp>)
#include <atk/textrectangle_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

class TextRectangle : public GI_ATK_TEXTRECTANGLE_BASE
{ typedef GI_ATK_TEXTRECTANGLE_BASE super_type; using super_type::super_type; };

} // namespace Atk

template<> struct declare_cpptype_of<::AtkTextRectangle>
{ typedef Atk::TextRectangle type; }; 

} // namespace repository

} // namespace gi

#endif
