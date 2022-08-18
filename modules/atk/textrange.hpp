// AUTO-GENERATED

#ifndef _GI_ATK_TEXTRANGE_HPP_
#define _GI_ATK_TEXTRANGE_HPP_


namespace gi {

namespace repository {

namespace Atk {


class TextRange;

namespace base {


#define GI_ATK_TEXTRANGE_BASE base::TextRangeBase
class TextRangeBase : public gi::detail::GBoxedWrapper<TextRangeBase, ::AtkTextRange>
{
typedef gi::detail::GBoxedWrapper<TextRangeBase, ::AtkTextRange> super_type;
public:

TextRangeBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return atk_text_range_get_type(); } 

// gint TextRange::start_offset (const ::AtkTextRange* obj);
// gint TextRange::start_offset (const ::AtkTextRange* obj);
GI_INLINE_DECL gint start_offset_ () const noexcept;

//  TextRange::start_offset (::AtkTextRange* obj, gint _value);
// void TextRange::start_offset (::AtkTextRange* obj, gint _value);
GI_INLINE_DECL void start_offset_ (gint _value) noexcept;

// gint TextRange::end_offset (const ::AtkTextRange* obj);
// gint TextRange::end_offset (const ::AtkTextRange* obj);
GI_INLINE_DECL gint end_offset_ () const noexcept;

//  TextRange::end_offset (::AtkTextRange* obj, gint _value);
// void TextRange::end_offset (::AtkTextRange* obj, gint _value);
GI_INLINE_DECL void end_offset_ (gint _value) noexcept;

// char* TextRange::content (const ::AtkTextRange* obj);
// char* TextRange::content (const ::AtkTextRange* obj);
GI_INLINE_DECL std::string content_ () const noexcept;

}; // class

} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/textrange_extra_def.hpp>)
#include <atk/textrange_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/textrange_extra.hpp>)
#include <atk/textrange_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

class TextRange : public GI_ATK_TEXTRANGE_BASE
{ typedef GI_ATK_TEXTRANGE_BASE super_type; using super_type::super_type; };

} // namespace Atk

template<> struct declare_cpptype_of<::AtkTextRange>
{ typedef Atk::TextRange type; }; 

} // namespace repository

} // namespace gi

#endif
