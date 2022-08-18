// AUTO-GENERATED

#ifndef _GI_GDKPIXBUF_PIXBUFANIMATION_HPP_
#define _GI_GDKPIXBUF_PIXBUFANIMATION_HPP_


namespace gi {

namespace repository {

namespace GdkPixbuf {

class Pixbuf;
class PixbufAnimationIter;

class PixbufAnimation;

namespace base {


#define GI_GDKPIXBUF_PIXBUFANIMATION_BASE base::PixbufAnimationBase
class PixbufAnimationBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GdkPixbufAnimation BaseObjectType;

PixbufAnimationBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_pixbuf_animation_get_type(); } 

// GdkPixbufAnimation* gdk_pixbuf_animation_new_from_file (const char* filename, GError ** error);
// ::GdkPixbufAnimation* gdk_pixbuf_animation_new_from_file (const char* filename, GError ** error);
static GI_INLINE_DECL GdkPixbuf::PixbufAnimation new_from_file (const std::string & filename);
static GI_INLINE_DECL GdkPixbuf::PixbufAnimation new_from_file (const std::string & filename, GLib::Error * _error) noexcept;

// GdkPixbufAnimation* gdk_pixbuf_animation_new_from_resource (const char* resource_path, GError ** error);
// ::GdkPixbufAnimation* gdk_pixbuf_animation_new_from_resource (const char* resource_path, GError ** error);
static GI_INLINE_DECL GdkPixbuf::PixbufAnimation new_from_resource (const std::string & resource_path);
static GI_INLINE_DECL GdkPixbuf::PixbufAnimation new_from_resource (const std::string & resource_path, GLib::Error * _error) noexcept;

// GdkPixbufAnimation* gdk_pixbuf_animation_new_from_stream (GInputStream* stream, GCancellable* cancellable, GError ** error);
// ::GdkPixbufAnimation* gdk_pixbuf_animation_new_from_stream (::GInputStream* stream, ::GCancellable* cancellable, GError ** error);
static GI_INLINE_DECL GdkPixbuf::PixbufAnimation new_from_stream (Gio::InputStream stream, Gio::Cancellable cancellable);
static GI_INLINE_DECL GdkPixbuf::PixbufAnimation new_from_stream (Gio::InputStream stream);
static GI_INLINE_DECL GdkPixbuf::PixbufAnimation new_from_stream (Gio::InputStream stream, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
static GI_INLINE_DECL GdkPixbuf::PixbufAnimation new_from_stream (Gio::InputStream stream, GLib::Error * _error) noexcept;

// GdkPixbufAnimation* gdk_pixbuf_animation_new_from_stream_finish (GAsyncResult* async_result, GError ** error);
// ::GdkPixbufAnimation* gdk_pixbuf_animation_new_from_stream_finish (::GAsyncResult* async_result, GError ** error);
static GI_INLINE_DECL GdkPixbuf::PixbufAnimation new_from_stream_finish (Gio::AsyncResult async_result);
static GI_INLINE_DECL GdkPixbuf::PixbufAnimation new_from_stream_finish (Gio::AsyncResult async_result, GLib::Error * _error) noexcept;

// void gdk_pixbuf_animation_new_from_stream_async (GInputStream* stream, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void gdk_pixbuf_animation_new_from_stream_async (::GInputStream* stream, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
static GI_INLINE_DECL void new_from_stream_async (Gio::InputStream stream, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL void new_from_stream_async (Gio::InputStream stream, Gio::AsyncReadyCallback callback) noexcept;

// int gdk_pixbuf_animation_get_height (GdkPixbufAnimation* animation);
// gint gdk_pixbuf_animation_get_height (::GdkPixbufAnimation* animation);
GI_INLINE_DECL gint get_height () noexcept;

// GdkPixbufAnimationIter* gdk_pixbuf_animation_get_iter (GdkPixbufAnimation* animation, const GTimeVal* start_time);
// ::GdkPixbufAnimationIter* gdk_pixbuf_animation_get_iter (::GdkPixbufAnimation* animation, const  start_time);
// SKIP; start_time type  not supported

// GdkPixbuf* gdk_pixbuf_animation_get_static_image (GdkPixbufAnimation* animation);
// ::GdkPixbuf* gdk_pixbuf_animation_get_static_image (::GdkPixbufAnimation* animation);
GI_INLINE_DECL GdkPixbuf::Pixbuf get_static_image () noexcept;

// int gdk_pixbuf_animation_get_width (GdkPixbufAnimation* animation);
// gint gdk_pixbuf_animation_get_width (::GdkPixbufAnimation* animation);
GI_INLINE_DECL gint get_width () noexcept;

// gboolean gdk_pixbuf_animation_is_static_image (GdkPixbufAnimation* animation);
// gboolean gdk_pixbuf_animation_is_static_image (::GdkPixbufAnimation* animation);
GI_INLINE_DECL bool is_static_image () noexcept;

// FAILURE on gdk_pixbuf_animation_ref; No such node (<xmlattr>.transfer-ownership)
// void gdk_pixbuf_animation_unref (GdkPixbufAnimation* animation);
// void gdk_pixbuf_animation_unref (::GdkPixbufAnimation* animation);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace GdkPixbuf

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdkpixbuf/pixbufanimation_extra_def.hpp>)
#include <gdkpixbuf/pixbufanimation_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdkpixbuf/pixbufanimation_extra.hpp>)
#include <gdkpixbuf/pixbufanimation_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GdkPixbuf {

class PixbufAnimation : public GI_GDKPIXBUF_PIXBUFANIMATION_BASE
{ typedef GI_GDKPIXBUF_PIXBUFANIMATION_BASE super_type; using super_type::super_type; };

} // namespace GdkPixbuf

template<> struct declare_cpptype_of<::GdkPixbufAnimation>
{ typedef GdkPixbuf::PixbufAnimation type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GdkPixbuf {

namespace impl {

namespace internal {


class PixbufAnimationClassDef
{
typedef PixbufAnimationClassDef self;
public:
typedef GdkPixbuf::PixbufAnimation instance_type;
typedef ::GdkPixbufAnimationClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// GdkPixbufAnimationIter* PixbufAnimation::get_iter (GdkPixbufAnimation* animation, const GTimeVal* start_time);
// ::GdkPixbufAnimationIter* PixbufAnimation::get_iter (::GdkPixbufAnimation* animation, const  start_time);
// SKIP; start_time type  not supported

// void PixbufAnimation::get_size (GdkPixbufAnimation* animation, int* width, int* height);
// void PixbufAnimation::get_size (::GdkPixbufAnimation* animation, gint width, gint height);
// SKIP; inconsistent in height pointer depth (1 vs 0), inconsistent in width pointer depth (1 vs 0)

// GdkPixbuf* PixbufAnimation::get_static_image (GdkPixbufAnimation* animation);
// ::GdkPixbuf* PixbufAnimation::get_static_image (::GdkPixbufAnimation* animation);
virtual GdkPixbuf::Pixbuf get_static_image_ () noexcept = 0;

// gboolean PixbufAnimation::is_static_image (GdkPixbufAnimation* animation);
// gboolean PixbufAnimation::is_static_image (::GdkPixbufAnimation* animation);
virtual bool is_static_image_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class PixbufAnimationClass: public detail::ClassTemplate<GdkPixbuf::impl::internal::PixbufAnimationClassDef, GObject::impl::internal::ObjectClass>
{
typedef PixbufAnimationClass self;
typedef detail::ClassTemplate<GdkPixbuf::impl::internal::PixbufAnimationClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// GdkPixbufAnimationIter* PixbufAnimation::get_iter (GdkPixbufAnimation* animation, const GTimeVal* start_time);
// ::GdkPixbufAnimationIter* PixbufAnimation::get_iter (::GdkPixbufAnimation* animation, const  start_time);
// SKIP; start_time type  not supported

// void PixbufAnimation::get_size (GdkPixbufAnimation* animation, int* width, int* height);
// void PixbufAnimation::get_size (::GdkPixbufAnimation* animation, gint width, gint height);
// SKIP; inconsistent in height pointer depth (1 vs 0), inconsistent in width pointer depth (1 vs 0)

// GdkPixbuf* PixbufAnimation::get_static_image (GdkPixbufAnimation* animation);
// ::GdkPixbuf* PixbufAnimation::get_static_image (::GdkPixbufAnimation* animation);
GI_INLINE_DECL GdkPixbuf::Pixbuf get_static_image_ () noexcept override;

// gboolean PixbufAnimation::is_static_image (GdkPixbufAnimation* animation);
// gboolean PixbufAnimation::is_static_image (::GdkPixbufAnimation* animation);
GI_INLINE_DECL bool is_static_image_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using PixbufAnimationImpl = detail::ObjectImpl<PixbufAnimation, internal::PixbufAnimationClass>;

} // namespace impl

} // namespace GdkPixbuf

} // namespace repository

} // namespace gi

#endif
