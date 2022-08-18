// AUTO-GENERATED

#ifndef _GI_GDKPIXBUF_PIXBUFSIMPLEANIM_IMPL_HPP_
#define _GI_GDKPIXBUF_PIXBUFSIMPLEANIM_IMPL_HPP_

namespace gi {

namespace repository {

namespace GdkPixbuf {

namespace base {

// GdkPixbufSimpleAnim* gdk_pixbuf_simple_anim_new (gint width, gint height, gfloat rate);
// ::GdkPixbufSimpleAnim* gdk_pixbuf_simple_anim_new (gint width, gint height, gfloat rate);
GdkPixbuf::PixbufSimpleAnim base::PixbufSimpleAnimBase::new_ (gint width, gint height, gfloat rate) noexcept
{
  typedef ::GdkPixbufSimpleAnim* (*call_wrap_t) (gint width, gint height, gfloat rate);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_simple_anim_new;
  auto rate_to_c = rate;
  auto height_to_c = height;
  auto width_to_c = width;
  auto _temp_ret = call_wrap_v ((gint) (width_to_c), (gint) (height_to_c), (gfloat) (rate_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gdk_pixbuf_simple_anim_add_frame (GdkPixbufSimpleAnim* animation, GdkPixbuf* pixbuf);
// void gdk_pixbuf_simple_anim_add_frame (::GdkPixbufSimpleAnim* animation, ::GdkPixbuf* pixbuf);
void base::PixbufSimpleAnimBase::add_frame (GdkPixbuf::Pixbuf pixbuf) noexcept
{
  typedef void (*call_wrap_t) (::GdkPixbufSimpleAnim* animation, ::GdkPixbuf* pixbuf);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_simple_anim_add_frame;
  auto pixbuf_to_c = gi::unwrap (pixbuf, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkPixbufSimpleAnim*) (gobj_()), (::GdkPixbuf*) (pixbuf_to_c));
}

// gboolean gdk_pixbuf_simple_anim_get_loop (GdkPixbufSimpleAnim* animation);
// gboolean gdk_pixbuf_simple_anim_get_loop (::GdkPixbufSimpleAnim* animation);
bool base::PixbufSimpleAnimBase::get_loop () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkPixbufSimpleAnim* animation);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_simple_anim_get_loop;
  auto _temp_ret = call_wrap_v ((::GdkPixbufSimpleAnim*) (gobj_()));
  return _temp_ret;
}

// void gdk_pixbuf_simple_anim_set_loop (GdkPixbufSimpleAnim* animation, gboolean loop);
// void gdk_pixbuf_simple_anim_set_loop (::GdkPixbufSimpleAnim* animation, gboolean loop);
void base::PixbufSimpleAnimBase::set_loop (gboolean loop) noexcept
{
  typedef void (*call_wrap_t) (::GdkPixbufSimpleAnim* animation, gboolean loop);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_simple_anim_set_loop;
  auto loop_to_c = loop;
  call_wrap_v ((::GdkPixbufSimpleAnim*) (gobj_()), (gboolean) (loop_to_c));
}


} // namespace base

} // namespace GdkPixbuf

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdkpixbuf/pixbufsimpleanim_extra_def_impl.hpp>)
#include <gdkpixbuf/pixbufsimpleanim_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdkpixbuf/pixbufsimpleanim_extra_impl.hpp>)
#include <gdkpixbuf/pixbufsimpleanim_extra_impl.hpp>
#endif
#endif

#endif
