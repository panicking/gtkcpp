// AUTO-GENERATED

#ifndef _GI_WEBKIT2_INPUTMETHODUNDERLINE_HPP_
#define _GI_WEBKIT2_INPUTMETHODUNDERLINE_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {


class InputMethodUnderline;

namespace base {


#define GI_WEBKIT2_INPUTMETHODUNDERLINE_BASE base::InputMethodUnderlineBase
class InputMethodUnderlineBase : public gi::detail::GBoxedWrapper<InputMethodUnderlineBase, ::WebKitInputMethodUnderline>
{
typedef gi::detail::GBoxedWrapper<InputMethodUnderlineBase, ::WebKitInputMethodUnderline> super_type;
public:

InputMethodUnderlineBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return webkit_input_method_underline_get_type(); } 

// WebKitInputMethodUnderline* webkit_input_method_underline_new (guint start_offset, guint end_offset);
// ::WebKitInputMethodUnderline* webkit_input_method_underline_new (guint start_offset, guint end_offset);
static GI_INLINE_DECL WebKit2::InputMethodUnderline new_ (guint start_offset, guint end_offset) noexcept;

// WebKitInputMethodUnderline* webkit_input_method_underline_copy (WebKitInputMethodUnderline* underline);
// ::WebKitInputMethodUnderline* webkit_input_method_underline_copy (::WebKitInputMethodUnderline* underline);
GI_INLINE_DECL WebKit2::InputMethodUnderline copy () noexcept;

// void webkit_input_method_underline_free (WebKitInputMethodUnderline* underline);
// void webkit_input_method_underline_free (::WebKitInputMethodUnderline* underline);
// IGNORE; marked ignore

// void webkit_input_method_underline_set_color (WebKitInputMethodUnderline* underline, const GdkRGBA* rgba);
// void webkit_input_method_underline_set_color (::WebKitInputMethodUnderline* underline, const ::GdkRGBA* rgba);
GI_INLINE_DECL void set_color (const Gdk::RGBA & rgba) noexcept;
GI_INLINE_DECL void set_color () noexcept;

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/inputmethodunderline_extra_def.hpp>)
#include <webkit2/inputmethodunderline_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/inputmethodunderline_extra.hpp>)
#include <webkit2/inputmethodunderline_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class InputMethodUnderline : public GI_WEBKIT2_INPUTMETHODUNDERLINE_BASE
{ typedef GI_WEBKIT2_INPUTMETHODUNDERLINE_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitInputMethodUnderline>
{ typedef WebKit2::InputMethodUnderline type; }; 

} // namespace repository

} // namespace gi

#endif
