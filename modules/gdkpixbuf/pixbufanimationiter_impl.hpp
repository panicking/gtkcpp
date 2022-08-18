// AUTO-GENERATED

#ifndef _GI_GDKPIXBUF_PIXBUFANIMATIONITER_IMPL_HPP_
#define _GI_GDKPIXBUF_PIXBUFANIMATIONITER_IMPL_HPP_

namespace gi {

namespace repository {

namespace GdkPixbuf {

namespace base {

// gboolean gdk_pixbuf_animation_iter_advance (GdkPixbufAnimationIter* iter, const GTimeVal* current_time);
// gboolean gdk_pixbuf_animation_iter_advance (::GdkPixbufAnimationIter* iter, const  current_time);
// SKIP; current_time type  not supported

// int gdk_pixbuf_animation_iter_get_delay_time (GdkPixbufAnimationIter* iter);
// gint gdk_pixbuf_animation_iter_get_delay_time (::GdkPixbufAnimationIter* iter);
gint base::PixbufAnimationIterBase::get_delay_time () noexcept
{
  typedef gint (*call_wrap_t) (::GdkPixbufAnimationIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_animation_iter_get_delay_time;
  auto _temp_ret = call_wrap_v ((::GdkPixbufAnimationIter*) (gobj_()));
  return _temp_ret;
}

// GdkPixbuf* gdk_pixbuf_animation_iter_get_pixbuf (GdkPixbufAnimationIter* iter);
// ::GdkPixbuf* gdk_pixbuf_animation_iter_get_pixbuf (::GdkPixbufAnimationIter* iter);
GdkPixbuf::Pixbuf base::PixbufAnimationIterBase::get_pixbuf () noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GdkPixbufAnimationIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_animation_iter_get_pixbuf;
  auto _temp_ret = call_wrap_v ((::GdkPixbufAnimationIter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gdk_pixbuf_animation_iter_on_currently_loading_frame (GdkPixbufAnimationIter* iter);
// gboolean gdk_pixbuf_animation_iter_on_currently_loading_frame (::GdkPixbufAnimationIter* iter);
bool base::PixbufAnimationIterBase::on_currently_loading_frame () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkPixbufAnimationIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_animation_iter_on_currently_loading_frame;
  auto _temp_ret = call_wrap_v ((::GdkPixbufAnimationIter*) (gobj_()));
  return _temp_ret;
}


} // namespace base

} // namespace GdkPixbuf

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdkpixbuf/pixbufanimationiter_extra_def_impl.hpp>)
#include <gdkpixbuf/pixbufanimationiter_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdkpixbuf/pixbufanimationiter_extra_impl.hpp>)
#include <gdkpixbuf/pixbufanimationiter_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GdkPixbuf {

namespace impl {

namespace internal {

void PixbufAnimationIterClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GdkPixbufAnimationIterClass *methods = (::GdkPixbufAnimationIterClass *) class_struct;
  (void) methods;

  methods->get_delay_time = (decltype (methods->get_delay_time)) detail::method_wrapper<self, gint (*) (), gi::transfer_none_t>::wrapper<&self::get_delay_time_>;
  methods->get_pixbuf = (decltype (methods->get_pixbuf)) detail::method_wrapper<self, GdkPixbuf::Pixbuf (*) (), gi::transfer_none_t>::wrapper<&self::get_pixbuf_>;
  methods->on_currently_loading_frame = (decltype (methods->on_currently_loading_frame)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::on_currently_loading_frame_>;
}

// gboolean PixbufAnimationIter::advance (GdkPixbufAnimationIter* iter, const GTimeVal* current_time);
// gboolean PixbufAnimationIter::advance (::GdkPixbufAnimationIter* iter, const  current_time);
// SKIP; current_time type  not supported

// int PixbufAnimationIter::get_delay_time (GdkPixbufAnimationIter* iter);
// gint PixbufAnimationIter::get_delay_time (::GdkPixbufAnimationIter* iter);
gint PixbufAnimationIterClass::get_delay_time_ () noexcept
{
  if (!get_struct_()->get_delay_time) return gint{};
  typedef gint (*call_wrap_t) (::GdkPixbufAnimationIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_delay_time;
  auto _temp_ret = call_wrap_v ((::GdkPixbufAnimationIter*) (gobj_()));
  return _temp_ret;
}

// GdkPixbuf* PixbufAnimationIter::get_pixbuf (GdkPixbufAnimationIter* iter);
// ::GdkPixbuf* PixbufAnimationIter::get_pixbuf (::GdkPixbufAnimationIter* iter);
GdkPixbuf::Pixbuf PixbufAnimationIterClass::get_pixbuf_ () noexcept
{
  if (!get_struct_()->get_pixbuf) return GdkPixbuf::Pixbuf{};
  typedef ::GdkPixbuf* (*call_wrap_t) (::GdkPixbufAnimationIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_pixbuf;
  auto _temp_ret = call_wrap_v ((::GdkPixbufAnimationIter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean PixbufAnimationIter::on_currently_loading_frame (GdkPixbufAnimationIter* iter);
// gboolean PixbufAnimationIter::on_currently_loading_frame (::GdkPixbufAnimationIter* iter);
bool PixbufAnimationIterClass::on_currently_loading_frame_ () noexcept
{
  if (!get_struct_()->on_currently_loading_frame) return bool{};
  typedef gboolean (*call_wrap_t) (::GdkPixbufAnimationIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->on_currently_loading_frame;
  auto _temp_ret = call_wrap_v ((::GdkPixbufAnimationIter*) (gobj_()));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace GdkPixbuf

} // namespace repository

} // namespace gi

#endif
