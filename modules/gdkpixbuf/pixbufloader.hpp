// AUTO-GENERATED

#ifndef _GI_GDKPIXBUF_PIXBUFLOADER_HPP_
#define _GI_GDKPIXBUF_PIXBUFLOADER_HPP_


namespace gi {

namespace repository {

namespace GdkPixbuf {

class Pixbuf;
class PixbufAnimation;
class PixbufFormat;

class PixbufLoader;

namespace base {


#define GI_GDKPIXBUF_PIXBUFLOADER_BASE base::PixbufLoaderBase
class PixbufLoaderBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GdkPixbufLoader BaseObjectType;

PixbufLoaderBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_pixbuf_loader_get_type(); } 

// GdkPixbufLoader* gdk_pixbuf_loader_new ();
// ::GdkPixbufLoader* gdk_pixbuf_loader_new ();
static GI_INLINE_DECL GdkPixbuf::PixbufLoader new_ () noexcept;

// GdkPixbufLoader* gdk_pixbuf_loader_new_with_mime_type (const char* mime_type, GError ** error);
// ::GdkPixbufLoader* gdk_pixbuf_loader_new_with_mime_type (const char* mime_type, GError ** error);
static GI_INLINE_DECL GdkPixbuf::PixbufLoader new_with_mime_type (const std::string & mime_type);
static GI_INLINE_DECL GdkPixbuf::PixbufLoader new_with_mime_type (const std::string & mime_type, GLib::Error * _error) noexcept;

// GdkPixbufLoader* gdk_pixbuf_loader_new_with_type (const char* image_type, GError ** error);
// ::GdkPixbufLoader* gdk_pixbuf_loader_new_with_type (const char* image_type, GError ** error);
static GI_INLINE_DECL GdkPixbuf::PixbufLoader new_with_type (const std::string & image_type);
static GI_INLINE_DECL GdkPixbuf::PixbufLoader new_with_type (const std::string & image_type, GLib::Error * _error) noexcept;

// gboolean gdk_pixbuf_loader_close (GdkPixbufLoader* loader, GError ** error);
// gboolean gdk_pixbuf_loader_close (::GdkPixbufLoader* loader, GError ** error);
GI_INLINE_DECL bool close ();
GI_INLINE_DECL bool close (GLib::Error * _error) noexcept;

// GdkPixbufAnimation* gdk_pixbuf_loader_get_animation (GdkPixbufLoader* loader);
// ::GdkPixbufAnimation* gdk_pixbuf_loader_get_animation (::GdkPixbufLoader* loader);
GI_INLINE_DECL GdkPixbuf::PixbufAnimation get_animation () noexcept;

// GdkPixbufFormat* gdk_pixbuf_loader_get_format (GdkPixbufLoader* loader);
// ::GdkPixbufFormat* gdk_pixbuf_loader_get_format (::GdkPixbufLoader* loader);
GI_INLINE_DECL GdkPixbuf::PixbufFormat get_format () noexcept;

// GdkPixbuf* gdk_pixbuf_loader_get_pixbuf (GdkPixbufLoader* loader);
// ::GdkPixbuf* gdk_pixbuf_loader_get_pixbuf (::GdkPixbufLoader* loader);
GI_INLINE_DECL GdkPixbuf::Pixbuf get_pixbuf () noexcept;

// void gdk_pixbuf_loader_set_size (GdkPixbufLoader* loader, int width, int height);
// void gdk_pixbuf_loader_set_size (::GdkPixbufLoader* loader, gint width, gint height);
GI_INLINE_DECL void set_size (gint width, gint height) noexcept;

// gboolean gdk_pixbuf_loader_write (GdkPixbufLoader* loader, const guchar* buf, gsize count, GError ** error);
// gboolean gdk_pixbuf_loader_write (::GdkPixbufLoader* loader, const guint8* buf, gsize count, GError ** error);
GI_INLINE_DECL bool write (guint8 * buf, gsize count);
GI_INLINE_DECL bool write (guint8 * buf, gsize count, GLib::Error * _error) noexcept;

// gboolean gdk_pixbuf_loader_write_bytes (GdkPixbufLoader* loader, GBytes* buffer, GError ** error);
// gboolean gdk_pixbuf_loader_write_bytes (::GdkPixbufLoader* loader, ::GBytes* buffer, GError ** error);
GI_INLINE_DECL bool write_bytes (GLib::Bytes buffer);
GI_INLINE_DECL bool write_bytes (GLib::Bytes buffer, GLib::Error * _error) noexcept;

// signal area-prepared
gi::signal_proxy<void(GdkPixbuf::PixbufLoader)> signal_area_prepared()
{ return gi::signal_proxy<void(GdkPixbuf::PixbufLoader)> (*this, "area-prepared"); }

// signal area-updated
gi::signal_proxy<void(GdkPixbuf::PixbufLoader, gint x, gint y, gint width, gint height)> signal_area_updated()
{ return gi::signal_proxy<void(GdkPixbuf::PixbufLoader, gint x, gint y, gint width, gint height)> (*this, "area-updated"); }

// signal closed
gi::signal_proxy<void(GdkPixbuf::PixbufLoader)> signal_closed()
{ return gi::signal_proxy<void(GdkPixbuf::PixbufLoader)> (*this, "closed"); }

// signal size-prepared
gi::signal_proxy<void(GdkPixbuf::PixbufLoader, gint width, gint height)> signal_size_prepared()
{ return gi::signal_proxy<void(GdkPixbuf::PixbufLoader, gint width, gint height)> (*this, "size-prepared"); }

}; // class

} // namespace base

} // namespace GdkPixbuf

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdkpixbuf/pixbufloader_extra_def.hpp>)
#include <gdkpixbuf/pixbufloader_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdkpixbuf/pixbufloader_extra.hpp>)
#include <gdkpixbuf/pixbufloader_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GdkPixbuf {

class PixbufLoader : public GI_GDKPIXBUF_PIXBUFLOADER_BASE
{ typedef GI_GDKPIXBUF_PIXBUFLOADER_BASE super_type; using super_type::super_type; };

} // namespace GdkPixbuf

template<> struct declare_cpptype_of<::GdkPixbufLoader>
{ typedef GdkPixbuf::PixbufLoader type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GdkPixbuf {

namespace impl {

namespace internal {


class PixbufLoaderClassDef
{
typedef PixbufLoaderClassDef self;
public:
typedef GdkPixbuf::PixbufLoader instance_type;
typedef ::GdkPixbufLoaderClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void PixbufLoader::area_prepared (GdkPixbufLoader* loader);
// void PixbufLoader::area_prepared (::GdkPixbufLoader* loader);
virtual void area_prepared_ () noexcept = 0;

// void PixbufLoader::area_updated (GdkPixbufLoader* loader, int x, int y, int width, int height);
// void PixbufLoader::area_updated (::GdkPixbufLoader* loader, gint x, gint y, gint width, gint height);
virtual void area_updated_ (gint x, gint y, gint width, gint height) noexcept = 0;

// void PixbufLoader::closed (GdkPixbufLoader* loader);
// void PixbufLoader::closed (::GdkPixbufLoader* loader);
virtual void closed_ () noexcept = 0;

// void PixbufLoader::size_prepared (GdkPixbufLoader* loader, int width, int height);
// void PixbufLoader::size_prepared (::GdkPixbufLoader* loader, gint width, gint height);
virtual void size_prepared_ (gint width, gint height) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class PixbufLoaderClass: public detail::ClassTemplate<GdkPixbuf::impl::internal::PixbufLoaderClassDef, GObject::impl::internal::ObjectClass>
{
typedef PixbufLoaderClass self;
typedef detail::ClassTemplate<GdkPixbuf::impl::internal::PixbufLoaderClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void PixbufLoader::area_prepared (GdkPixbufLoader* loader);
// void PixbufLoader::area_prepared (::GdkPixbufLoader* loader);
GI_INLINE_DECL void area_prepared_ () noexcept override;

// void PixbufLoader::area_updated (GdkPixbufLoader* loader, int x, int y, int width, int height);
// void PixbufLoader::area_updated (::GdkPixbufLoader* loader, gint x, gint y, gint width, gint height);
GI_INLINE_DECL void area_updated_ (gint x, gint y, gint width, gint height) noexcept override;

// void PixbufLoader::closed (GdkPixbufLoader* loader);
// void PixbufLoader::closed (::GdkPixbufLoader* loader);
GI_INLINE_DECL void closed_ () noexcept override;

// void PixbufLoader::size_prepared (GdkPixbufLoader* loader, int width, int height);
// void PixbufLoader::size_prepared (::GdkPixbufLoader* loader, gint width, gint height);
GI_INLINE_DECL void size_prepared_ (gint width, gint height) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using PixbufLoaderImpl = detail::ObjectImpl<PixbufLoader, internal::PixbufLoaderClass>;

} // namespace impl

} // namespace GdkPixbuf

} // namespace repository

} // namespace gi

#endif
