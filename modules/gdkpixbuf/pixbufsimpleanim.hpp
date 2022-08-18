// AUTO-GENERATED

#ifndef _GI_GDKPIXBUF_PIXBUFSIMPLEANIM_HPP_
#define _GI_GDKPIXBUF_PIXBUFSIMPLEANIM_HPP_

#include "pixbufanimation.hpp"

namespace gi {

namespace repository {

namespace GdkPixbuf {

class Pixbuf;

class PixbufSimpleAnim;

namespace base {


#define GI_GDKPIXBUF_PIXBUFSIMPLEANIM_BASE base::PixbufSimpleAnimBase
class PixbufSimpleAnimBase : public GdkPixbuf::PixbufAnimation
{
typedef GdkPixbuf::PixbufAnimation super_type;
public:
typedef ::GdkPixbufSimpleAnim BaseObjectType;

PixbufSimpleAnimBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_pixbuf_simple_anim_get_type(); } 

// GdkPixbufSimpleAnim* gdk_pixbuf_simple_anim_new (gint width, gint height, gfloat rate);
// ::GdkPixbufSimpleAnim* gdk_pixbuf_simple_anim_new (gint width, gint height, gfloat rate);
static GI_INLINE_DECL GdkPixbuf::PixbufSimpleAnim new_ (gint width, gint height, gfloat rate) noexcept;

// void gdk_pixbuf_simple_anim_add_frame (GdkPixbufSimpleAnim* animation, GdkPixbuf* pixbuf);
// void gdk_pixbuf_simple_anim_add_frame (::GdkPixbufSimpleAnim* animation, ::GdkPixbuf* pixbuf);
GI_INLINE_DECL void add_frame (GdkPixbuf::Pixbuf pixbuf) noexcept;

// gboolean gdk_pixbuf_simple_anim_get_loop (GdkPixbufSimpleAnim* animation);
// gboolean gdk_pixbuf_simple_anim_get_loop (::GdkPixbufSimpleAnim* animation);
GI_INLINE_DECL bool get_loop () noexcept;

// void gdk_pixbuf_simple_anim_set_loop (GdkPixbufSimpleAnim* animation, gboolean loop);
// void gdk_pixbuf_simple_anim_set_loop (::GdkPixbufSimpleAnim* animation, gboolean loop);
GI_INLINE_DECL void set_loop (gboolean loop) noexcept;

gi::property_proxy<bool, base::PixbufSimpleAnimBase> property_loop()
{ return gi::property_proxy<bool, base::PixbufSimpleAnimBase> (*this, "loop"); }
const gi::property_proxy<bool, base::PixbufSimpleAnimBase> property_loop() const
{ return gi::property_proxy<bool, base::PixbufSimpleAnimBase> (*this, "loop"); }

}; // class

} // namespace base

} // namespace GdkPixbuf

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdkpixbuf/pixbufsimpleanim_extra_def.hpp>)
#include <gdkpixbuf/pixbufsimpleanim_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdkpixbuf/pixbufsimpleanim_extra.hpp>)
#include <gdkpixbuf/pixbufsimpleanim_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GdkPixbuf {

class PixbufSimpleAnim : public GI_GDKPIXBUF_PIXBUFSIMPLEANIM_BASE
{ typedef GI_GDKPIXBUF_PIXBUFSIMPLEANIM_BASE super_type; using super_type::super_type; };

} // namespace GdkPixbuf

template<> struct declare_cpptype_of<::GdkPixbufSimpleAnim>
{ typedef GdkPixbuf::PixbufSimpleAnim type; }; 

} // namespace repository

} // namespace gi

#endif
