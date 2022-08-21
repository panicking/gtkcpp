// AUTO-GENERATED

#ifndef _GI_GDKPIXBUF__ENUMS_HPP_
#define _GI_GDKPIXBUF__ENUMS_HPP_

namespace gi {

namespace repository {

namespace GdkPixbuf {

#if defined(Colorspace)
#undef Colorspace
#endif
enum class Colorspace {
  RGB_ = GDK_COLORSPACE_RGB,
};

} // namespace GdkPixbuf

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GdkPixbuf::Colorspace>
{ typedef GdkColorspace type; }; 
template<> struct declare_cpptype_of<GdkColorspace>
{ typedef GdkPixbuf::Colorspace type; }; 

template<> struct declare_gtype_of<GdkPixbuf::Colorspace>
{ static GType get_type() { return gdk_colorspace_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GdkPixbuf {

#if defined(InterpType)
#undef InterpType
#endif
enum class InterpType {
  NEAREST_ = GDK_INTERP_NEAREST,
  TILES_ = GDK_INTERP_TILES,
  BILINEAR_ = GDK_INTERP_BILINEAR,
  HYPER_ = GDK_INTERP_HYPER,
};

} // namespace GdkPixbuf

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GdkPixbuf::InterpType>
{ typedef GdkInterpType type; }; 
template<> struct declare_cpptype_of<GdkInterpType>
{ typedef GdkPixbuf::InterpType type; }; 

template<> struct declare_gtype_of<GdkPixbuf::InterpType>
{ static GType get_type() { return gdk_interp_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GdkPixbuf {

#if defined(PixbufError)
#undef PixbufError
#endif
enum class PixbufError {
  CORRUPT_IMAGE_ = GDK_PIXBUF_ERROR_CORRUPT_IMAGE,
  INSUFFICIENT_MEMORY_ = GDK_PIXBUF_ERROR_INSUFFICIENT_MEMORY,
  BAD_OPTION_ = GDK_PIXBUF_ERROR_BAD_OPTION,
  UNKNOWN_TYPE_ = GDK_PIXBUF_ERROR_UNKNOWN_TYPE,
  UNSUPPORTED_OPERATION_ = GDK_PIXBUF_ERROR_UNSUPPORTED_OPERATION,
  FAILED_ = GDK_PIXBUF_ERROR_FAILED,
  INCOMPLETE_ANIMATION_ = GDK_PIXBUF_ERROR_INCOMPLETE_ANIMATION,
};

} // namespace GdkPixbuf

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GdkPixbuf::PixbufError>
{ typedef GdkPixbufError type; }; 
template<> struct declare_cpptype_of<GdkPixbufError>
{ typedef GdkPixbuf::PixbufError type; }; 

template<> struct declare_gtype_of<GdkPixbuf::PixbufError>
{ static GType get_type() { return gdk_pixbuf_error_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GdkPixbuf {

#if defined(PixbufRotation)
#undef PixbufRotation
#endif
enum class PixbufRotation {
  NONE_ = GDK_PIXBUF_ROTATE_NONE,
  COUNTERCLOCKWISE_ = GDK_PIXBUF_ROTATE_COUNTERCLOCKWISE,
  UPSIDEDOWN_ = GDK_PIXBUF_ROTATE_UPSIDEDOWN,
  CLOCKWISE_ = GDK_PIXBUF_ROTATE_CLOCKWISE,
};

} // namespace GdkPixbuf

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GdkPixbuf::PixbufRotation>
{ typedef GdkPixbufRotation type; }; 
template<> struct declare_cpptype_of<GdkPixbufRotation>
{ typedef GdkPixbuf::PixbufRotation type; }; 

template<> struct declare_gtype_of<GdkPixbuf::PixbufRotation>
{ static GType get_type() { return gdk_pixbuf_rotation_get_type(); } };


} // namespace repository

} // namespace gi


#endif
