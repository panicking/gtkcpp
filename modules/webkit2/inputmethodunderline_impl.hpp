// AUTO-GENERATED

#ifndef _GI_WEBKIT2_INPUTMETHODUNDERLINE_IMPL_HPP_
#define _GI_WEBKIT2_INPUTMETHODUNDERLINE_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// WebKitInputMethodUnderline* webkit_input_method_underline_new (guint start_offset, guint end_offset);
// ::WebKitInputMethodUnderline* webkit_input_method_underline_new (guint start_offset, guint end_offset);
WebKit2::InputMethodUnderline base::InputMethodUnderlineBase::new_ (guint start_offset, guint end_offset) noexcept
{
  typedef ::WebKitInputMethodUnderline* (*call_wrap_t) (guint start_offset, guint end_offset);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_input_method_underline_new;
  auto end_offset_to_c = end_offset;
  auto start_offset_to_c = start_offset;
  auto _temp_ret = call_wrap_v ((guint) (start_offset_to_c), (guint) (end_offset_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// WebKitInputMethodUnderline* webkit_input_method_underline_copy (WebKitInputMethodUnderline* underline);
// ::WebKitInputMethodUnderline* webkit_input_method_underline_copy (::WebKitInputMethodUnderline* underline);
WebKit2::InputMethodUnderline base::InputMethodUnderlineBase::copy () noexcept
{
  typedef ::WebKitInputMethodUnderline* (*call_wrap_t) (::WebKitInputMethodUnderline* underline);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_input_method_underline_copy;
  auto _temp_ret = call_wrap_v ((::WebKitInputMethodUnderline*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void webkit_input_method_underline_free (WebKitInputMethodUnderline* underline);
// void webkit_input_method_underline_free (::WebKitInputMethodUnderline* underline);
// IGNORE; marked ignore

// void webkit_input_method_underline_set_color (WebKitInputMethodUnderline* underline, const GdkRGBA* rgba);
// void webkit_input_method_underline_set_color (::WebKitInputMethodUnderline* underline, const ::GdkRGBA* rgba);
void base::InputMethodUnderlineBase::set_color (const Gdk::RGBA & rgba) noexcept
{
  typedef void (*call_wrap_t) (::WebKitInputMethodUnderline* underline, const ::GdkRGBA* rgba);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_input_method_underline_set_color;
  auto rgba_to_c = gi::unwrap (rgba, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitInputMethodUnderline*) (gobj_()), (const ::GdkRGBA*) (rgba_to_c));
}
void base::InputMethodUnderlineBase::set_color () noexcept
{
  typedef void (*call_wrap_t) (::WebKitInputMethodUnderline* underline, const ::GdkRGBA* rgba);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_input_method_underline_set_color;
  auto rgba_to_c = nullptr;
  call_wrap_v ((::WebKitInputMethodUnderline*) (gobj_()), (const ::GdkRGBA*) (rgba_to_c));
}


} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/inputmethodunderline_extra_def_impl.hpp>)
#include <webkit2/inputmethodunderline_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/inputmethodunderline_extra_impl.hpp>)
#include <webkit2/inputmethodunderline_extra_impl.hpp>
#endif
#endif

#endif
