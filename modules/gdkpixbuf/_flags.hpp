// AUTO-GENERATED

#ifndef _GI_GDKPIXBUF__FLAGS_HPP_
#define _GI_GDKPIXBUF__FLAGS_HPP_

namespace gi {

namespace repository {

namespace GdkPixbuf {

#if defined(PixbufFormatFlags)
#undef PixbufFormatFlags
#endif
enum class PixbufFormatFlags {
  WRITABLE_ = GDK_PIXBUF_FORMAT_WRITABLE,
  SCALABLE_ = GDK_PIXBUF_FORMAT_SCALABLE,
  THREADSAFE_ = GDK_PIXBUF_FORMAT_THREADSAFE,
};

} // namespace GdkPixbuf

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GdkPixbuf::PixbufFormatFlags>
{ typedef GdkPixbufFormatFlags type; }; 
template<> struct declare_cpptype_of<GdkPixbufFormatFlags>
{ typedef GdkPixbuf::PixbufFormatFlags type; }; 


} // namespace repository

} // namespace gi


#endif
