// AUTO-GENERATED

#ifndef _GI_GDKPIXBUF_PIXBUFANIMATIONITER_HPP_
#define _GI_GDKPIXBUF_PIXBUFANIMATIONITER_HPP_


namespace gi {

namespace repository {

namespace GdkPixbuf {

class Pixbuf;

class PixbufAnimationIter;

namespace base {


#define GI_GDKPIXBUF_PIXBUFANIMATIONITER_BASE base::PixbufAnimationIterBase
class PixbufAnimationIterBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GdkPixbufAnimationIter BaseObjectType;

PixbufAnimationIterBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_pixbuf_animation_iter_get_type(); } 

// gboolean gdk_pixbuf_animation_iter_advance (GdkPixbufAnimationIter* iter, const GTimeVal* current_time);
// gboolean gdk_pixbuf_animation_iter_advance (::GdkPixbufAnimationIter* iter, const  current_time);
// SKIP; current_time type  not supported

// int gdk_pixbuf_animation_iter_get_delay_time (GdkPixbufAnimationIter* iter);
// gint gdk_pixbuf_animation_iter_get_delay_time (::GdkPixbufAnimationIter* iter);
GI_INLINE_DECL gint get_delay_time () noexcept;

// GdkPixbuf* gdk_pixbuf_animation_iter_get_pixbuf (GdkPixbufAnimationIter* iter);
// ::GdkPixbuf* gdk_pixbuf_animation_iter_get_pixbuf (::GdkPixbufAnimationIter* iter);
GI_INLINE_DECL GdkPixbuf::Pixbuf get_pixbuf () noexcept;

// gboolean gdk_pixbuf_animation_iter_on_currently_loading_frame (GdkPixbufAnimationIter* iter);
// gboolean gdk_pixbuf_animation_iter_on_currently_loading_frame (::GdkPixbufAnimationIter* iter);
GI_INLINE_DECL bool on_currently_loading_frame () noexcept;

}; // class

} // namespace base

} // namespace GdkPixbuf

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdkpixbuf/pixbufanimationiter_extra_def.hpp>)
#include <gdkpixbuf/pixbufanimationiter_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdkpixbuf/pixbufanimationiter_extra.hpp>)
#include <gdkpixbuf/pixbufanimationiter_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GdkPixbuf {

class PixbufAnimationIter : public GI_GDKPIXBUF_PIXBUFANIMATIONITER_BASE
{ typedef GI_GDKPIXBUF_PIXBUFANIMATIONITER_BASE super_type; using super_type::super_type; };

} // namespace GdkPixbuf

template<> struct declare_cpptype_of<::GdkPixbufAnimationIter>
{ typedef GdkPixbuf::PixbufAnimationIter type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GdkPixbuf {

namespace impl {

namespace internal {


class PixbufAnimationIterClassDef
{
typedef PixbufAnimationIterClassDef self;
public:
typedef GdkPixbuf::PixbufAnimationIter instance_type;
typedef ::GdkPixbufAnimationIterClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gboolean PixbufAnimationIter::advance (GdkPixbufAnimationIter* iter, const GTimeVal* current_time);
// gboolean PixbufAnimationIter::advance (::GdkPixbufAnimationIter* iter, const  current_time);
// SKIP; current_time type  not supported

// int PixbufAnimationIter::get_delay_time (GdkPixbufAnimationIter* iter);
// gint PixbufAnimationIter::get_delay_time (::GdkPixbufAnimationIter* iter);
virtual gint get_delay_time_ () noexcept = 0;

// GdkPixbuf* PixbufAnimationIter::get_pixbuf (GdkPixbufAnimationIter* iter);
// ::GdkPixbuf* PixbufAnimationIter::get_pixbuf (::GdkPixbufAnimationIter* iter);
virtual GdkPixbuf::Pixbuf get_pixbuf_ () noexcept = 0;

// gboolean PixbufAnimationIter::on_currently_loading_frame (GdkPixbufAnimationIter* iter);
// gboolean PixbufAnimationIter::on_currently_loading_frame (::GdkPixbufAnimationIter* iter);
virtual bool on_currently_loading_frame_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class PixbufAnimationIterClass: public detail::ClassTemplate<GdkPixbuf::impl::internal::PixbufAnimationIterClassDef, GObject::impl::internal::ObjectClass>
{
typedef PixbufAnimationIterClass self;
typedef detail::ClassTemplate<GdkPixbuf::impl::internal::PixbufAnimationIterClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// gboolean PixbufAnimationIter::advance (GdkPixbufAnimationIter* iter, const GTimeVal* current_time);
// gboolean PixbufAnimationIter::advance (::GdkPixbufAnimationIter* iter, const  current_time);
// SKIP; current_time type  not supported

// int PixbufAnimationIter::get_delay_time (GdkPixbufAnimationIter* iter);
// gint PixbufAnimationIter::get_delay_time (::GdkPixbufAnimationIter* iter);
GI_INLINE_DECL gint get_delay_time_ () noexcept override;

// GdkPixbuf* PixbufAnimationIter::get_pixbuf (GdkPixbufAnimationIter* iter);
// ::GdkPixbuf* PixbufAnimationIter::get_pixbuf (::GdkPixbufAnimationIter* iter);
GI_INLINE_DECL GdkPixbuf::Pixbuf get_pixbuf_ () noexcept override;

// gboolean PixbufAnimationIter::on_currently_loading_frame (GdkPixbufAnimationIter* iter);
// gboolean PixbufAnimationIter::on_currently_loading_frame (::GdkPixbufAnimationIter* iter);
GI_INLINE_DECL bool on_currently_loading_frame_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using PixbufAnimationIterImpl = detail::ObjectImpl<PixbufAnimationIter, internal::PixbufAnimationIterClass>;

} // namespace impl

} // namespace GdkPixbuf

} // namespace repository

} // namespace gi

#endif
