// AUTO-GENERATED

#ifndef _GI_GDKPIXBUF__FUNCTIONS_IMPL_HPP_
#define _GI_GDKPIXBUF__FUNCTIONS_IMPL_HPP_

namespace gi {

namespace repository {

namespace GdkPixbuf {

namespace PixbufErrorNS_ {

// GQuark gdk_pixbuf_error_quark ();
// ::GQuark gdk_pixbuf_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace PixbufErrorNS_

} // namespace GdkPixbuf

} // namespace repository

} // namespace gi

#endif
