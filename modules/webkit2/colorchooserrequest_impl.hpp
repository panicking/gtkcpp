// AUTO-GENERATED

#ifndef _GI_WEBKIT2_COLORCHOOSERREQUEST_IMPL_HPP_
#define _GI_WEBKIT2_COLORCHOOSERREQUEST_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// void webkit_color_chooser_request_cancel (WebKitColorChooserRequest* request);
// void webkit_color_chooser_request_cancel (::WebKitColorChooserRequest* request);
void base::ColorChooserRequestBase::cancel () noexcept
{
  typedef void (*call_wrap_t) (::WebKitColorChooserRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_color_chooser_request_cancel;
  call_wrap_v ((::WebKitColorChooserRequest*) (gobj_()));
}

// void webkit_color_chooser_request_finish (WebKitColorChooserRequest* request);
// void webkit_color_chooser_request_finish (::WebKitColorChooserRequest* request);
void base::ColorChooserRequestBase::finish () noexcept
{
  typedef void (*call_wrap_t) (::WebKitColorChooserRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_color_chooser_request_finish;
  call_wrap_v ((::WebKitColorChooserRequest*) (gobj_()));
}

// void webkit_color_chooser_request_get_element_rectangle (WebKitColorChooserRequest* request, GdkRectangle* rect);
// void webkit_color_chooser_request_get_element_rectangle (::WebKitColorChooserRequest* request, ::GdkRectangle* rect);
void base::ColorChooserRequestBase::get_element_rectangle (Gdk::Rectangle & rect) noexcept
{
  typedef void (*call_wrap_t) (::WebKitColorChooserRequest* request, ::GdkRectangle* rect);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_color_chooser_request_get_element_rectangle;
  traits::unset_wrapper<::GdkRectangle>::type rect_c;
  call_wrap_v ((::WebKitColorChooserRequest*) (gobj_()), (::GdkRectangle*) ((::GdkRectangle*) &rect_c));
  rect = gi::wrap ((::GdkRectangle*) &rect_c, gi::transfer_none, gi::direction_out);
}
Gdk::Rectangle base::ColorChooserRequestBase::get_element_rectangle () noexcept
{
  typedef void (*call_wrap_t) (::WebKitColorChooserRequest* request, ::GdkRectangle* rect);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_color_chooser_request_get_element_rectangle;
  traits::unset_wrapper<::GdkRectangle>::type rect_c;
  call_wrap_v ((::WebKitColorChooserRequest*) (gobj_()), (::GdkRectangle*) ((::GdkRectangle*) &rect_c));
  return gi::wrap ((::GdkRectangle*) &rect_c, gi::transfer_none, gi::direction_out);
}

// void webkit_color_chooser_request_get_rgba (WebKitColorChooserRequest* request, GdkRGBA* rgba);
// void webkit_color_chooser_request_get_rgba (::WebKitColorChooserRequest* request, ::GdkRGBA* rgba);
void base::ColorChooserRequestBase::get_rgba (Gdk::RGBA & rgba) noexcept
{
  typedef void (*call_wrap_t) (::WebKitColorChooserRequest* request, ::GdkRGBA* rgba);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_color_chooser_request_get_rgba;
  traits::unset_wrapper<::GdkRGBA>::type rgba_c;
  call_wrap_v ((::WebKitColorChooserRequest*) (gobj_()), (::GdkRGBA*) ((::GdkRGBA*) &rgba_c));
  rgba = gi::wrap ((::GdkRGBA*) &rgba_c, gi::transfer_none, gi::direction_out);
}
Gdk::RGBA base::ColorChooserRequestBase::get_rgba () noexcept
{
  typedef void (*call_wrap_t) (::WebKitColorChooserRequest* request, ::GdkRGBA* rgba);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_color_chooser_request_get_rgba;
  traits::unset_wrapper<::GdkRGBA>::type rgba_c;
  call_wrap_v ((::WebKitColorChooserRequest*) (gobj_()), (::GdkRGBA*) ((::GdkRGBA*) &rgba_c));
  return gi::wrap ((::GdkRGBA*) &rgba_c, gi::transfer_none, gi::direction_out);
}

// void webkit_color_chooser_request_set_rgba (WebKitColorChooserRequest* request, const GdkRGBA* rgba);
// void webkit_color_chooser_request_set_rgba (::WebKitColorChooserRequest* request, const ::GdkRGBA* rgba);
void base::ColorChooserRequestBase::set_rgba (const Gdk::RGBA & rgba) noexcept
{
  typedef void (*call_wrap_t) (::WebKitColorChooserRequest* request, const ::GdkRGBA* rgba);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_color_chooser_request_set_rgba;
  auto rgba_to_c = gi::unwrap (rgba, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitColorChooserRequest*) (gobj_()), (const ::GdkRGBA*) (rgba_to_c));
}



} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/colorchooserrequest_extra_def_impl.hpp>)
#include <webkit2/colorchooserrequest_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/colorchooserrequest_extra_impl.hpp>)
#include <webkit2/colorchooserrequest_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {

void ColorChooserRequestClassDef::class_init (gpointer class_struct, gpointer )
{
  ::WebKitColorChooserRequestClass *methods = (::WebKitColorChooserRequestClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
