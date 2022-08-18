// AUTO-GENERATED

#ifndef _GI_GDKPIXBUF_PIXBUFFORMAT_HPP_
#define _GI_GDKPIXBUF_PIXBUFFORMAT_HPP_


namespace gi {

namespace repository {

namespace GdkPixbuf {

class PixbufModulePattern;

class PixbufFormat;

namespace base {


#define GI_GDKPIXBUF_PIXBUFFORMAT_BASE base::PixbufFormatBase
class PixbufFormatBase : public gi::detail::GBoxedWrapper<PixbufFormatBase, ::GdkPixbufFormat>
{
typedef gi::detail::GBoxedWrapper<PixbufFormatBase, ::GdkPixbufFormat> super_type;
public:

PixbufFormatBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gdk_pixbuf_format_get_type(); } 

// char* PixbufFormat::name (const ::GdkPixbufFormat* obj);
// char* PixbufFormat::name (const ::GdkPixbufFormat* obj);
GI_INLINE_DECL std::string name_ () const noexcept;

// ::GdkPixbufModulePattern* PixbufFormat::signature (const ::GdkPixbufFormat* obj);
// ::GdkPixbufModulePattern* PixbufFormat::signature (const ::GdkPixbufFormat* obj);
GI_INLINE_DECL GdkPixbuf::PixbufModulePattern signature_ () const noexcept;

// char* PixbufFormat::domain (const ::GdkPixbufFormat* obj);
// char* PixbufFormat::domain (const ::GdkPixbufFormat* obj);
GI_INLINE_DECL std::string domain_ () const noexcept;

// char* PixbufFormat::description (const ::GdkPixbufFormat* obj);
// char* PixbufFormat::description (const ::GdkPixbufFormat* obj);
GI_INLINE_DECL std::string description_ () const noexcept;

// guint32 PixbufFormat::flags (const ::GdkPixbufFormat* obj);
// guint32 PixbufFormat::flags (const ::GdkPixbufFormat* obj);
GI_INLINE_DECL guint32 flags_ () const noexcept;

//  PixbufFormat::flags (::GdkPixbufFormat* obj, guint32 _value);
// void PixbufFormat::flags (::GdkPixbufFormat* obj, guint32 _value);
GI_INLINE_DECL void flags_ (guint32 _value) noexcept;

// gboolean PixbufFormat::disabled (const ::GdkPixbufFormat* obj);
// gboolean PixbufFormat::disabled (const ::GdkPixbufFormat* obj);
GI_INLINE_DECL bool disabled_ () const noexcept;

//  PixbufFormat::disabled (::GdkPixbufFormat* obj, gboolean _value);
// void PixbufFormat::disabled (::GdkPixbufFormat* obj, gboolean _value);
GI_INLINE_DECL void disabled_ (gboolean _value) noexcept;

// char* PixbufFormat::license (const ::GdkPixbufFormat* obj);
// char* PixbufFormat::license (const ::GdkPixbufFormat* obj);
GI_INLINE_DECL std::string license_ () const noexcept;

// GdkPixbufFormat* gdk_pixbuf_format_copy (const GdkPixbufFormat* format);
// ::GdkPixbufFormat* gdk_pixbuf_format_copy (const ::GdkPixbufFormat* format);
GI_INLINE_DECL GdkPixbuf::PixbufFormat copy () const noexcept;

// void gdk_pixbuf_format_free (GdkPixbufFormat* format);
// void gdk_pixbuf_format_free (::GdkPixbufFormat* format);
// IGNORE; marked ignore

// gchar* gdk_pixbuf_format_get_description (GdkPixbufFormat* format);
// char* gdk_pixbuf_format_get_description (::GdkPixbufFormat* format);
GI_INLINE_DECL std::string get_description () noexcept;

// gchar** gdk_pixbuf_format_get_extensions (GdkPixbufFormat* format);
// char** gdk_pixbuf_format_get_extensions (::GdkPixbufFormat* format);
GI_INLINE_DECL std::vector<std::string> get_extensions () noexcept;

// gchar* gdk_pixbuf_format_get_license (GdkPixbufFormat* format);
// char* gdk_pixbuf_format_get_license (::GdkPixbufFormat* format);
GI_INLINE_DECL std::string get_license () noexcept;

// gchar** gdk_pixbuf_format_get_mime_types (GdkPixbufFormat* format);
// char** gdk_pixbuf_format_get_mime_types (::GdkPixbufFormat* format);
GI_INLINE_DECL std::vector<std::string> get_mime_types () noexcept;

// gchar* gdk_pixbuf_format_get_name (GdkPixbufFormat* format);
// char* gdk_pixbuf_format_get_name (::GdkPixbufFormat* format);
GI_INLINE_DECL std::string get_name () noexcept;

// gboolean gdk_pixbuf_format_is_disabled (GdkPixbufFormat* format);
// gboolean gdk_pixbuf_format_is_disabled (::GdkPixbufFormat* format);
GI_INLINE_DECL bool is_disabled () noexcept;

// gboolean gdk_pixbuf_format_is_save_option_supported (GdkPixbufFormat* format, const gchar* option_key);
// gboolean gdk_pixbuf_format_is_save_option_supported (::GdkPixbufFormat* format, const char* option_key);
GI_INLINE_DECL bool is_save_option_supported (const std::string & option_key) noexcept;

// gboolean gdk_pixbuf_format_is_scalable (GdkPixbufFormat* format);
// gboolean gdk_pixbuf_format_is_scalable (::GdkPixbufFormat* format);
GI_INLINE_DECL bool is_scalable () noexcept;

// gboolean gdk_pixbuf_format_is_writable (GdkPixbufFormat* format);
// gboolean gdk_pixbuf_format_is_writable (::GdkPixbufFormat* format);
GI_INLINE_DECL bool is_writable () noexcept;

// void gdk_pixbuf_format_set_disabled (GdkPixbufFormat* format, gboolean disabled);
// void gdk_pixbuf_format_set_disabled (::GdkPixbufFormat* format, gboolean disabled);
GI_INLINE_DECL void set_disabled (gboolean disabled) noexcept;

}; // class

} // namespace base

} // namespace GdkPixbuf

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdkpixbuf/pixbufformat_extra_def.hpp>)
#include <gdkpixbuf/pixbufformat_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdkpixbuf/pixbufformat_extra.hpp>)
#include <gdkpixbuf/pixbufformat_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GdkPixbuf {

class PixbufFormat : public GI_GDKPIXBUF_PIXBUFFORMAT_BASE
{ typedef GI_GDKPIXBUF_PIXBUFFORMAT_BASE super_type; using super_type::super_type; };

} // namespace GdkPixbuf

template<> struct declare_cpptype_of<::GdkPixbufFormat>
{ typedef GdkPixbuf::PixbufFormat type; }; 

} // namespace repository

} // namespace gi

#endif
