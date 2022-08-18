// AUTO-GENERATED

#ifndef _GI_GDK_FRAMETIMINGS_IMPL_HPP_
#define _GI_GDK_FRAMETIMINGS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// gboolean gdk_frame_timings_get_complete (GdkFrameTimings* timings);
// gboolean gdk_frame_timings_get_complete (::GdkFrameTimings* timings);
bool base::FrameTimingsBase::get_complete () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkFrameTimings* timings);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_frame_timings_get_complete;
  auto _temp_ret = call_wrap_v ((::GdkFrameTimings*) (gobj_()));
  return _temp_ret;
}

// gint64 gdk_frame_timings_get_frame_counter (GdkFrameTimings* timings);
// gint64 gdk_frame_timings_get_frame_counter (::GdkFrameTimings* timings);
gint64 base::FrameTimingsBase::get_frame_counter () noexcept
{
  typedef gint64 (*call_wrap_t) (::GdkFrameTimings* timings);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_frame_timings_get_frame_counter;
  auto _temp_ret = call_wrap_v ((::GdkFrameTimings*) (gobj_()));
  return _temp_ret;
}

// gint64 gdk_frame_timings_get_frame_time (GdkFrameTimings* timings);
// gint64 gdk_frame_timings_get_frame_time (::GdkFrameTimings* timings);
gint64 base::FrameTimingsBase::get_frame_time () noexcept
{
  typedef gint64 (*call_wrap_t) (::GdkFrameTimings* timings);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_frame_timings_get_frame_time;
  auto _temp_ret = call_wrap_v ((::GdkFrameTimings*) (gobj_()));
  return _temp_ret;
}

// gint64 gdk_frame_timings_get_predicted_presentation_time (GdkFrameTimings* timings);
// gint64 gdk_frame_timings_get_predicted_presentation_time (::GdkFrameTimings* timings);
gint64 base::FrameTimingsBase::get_predicted_presentation_time () noexcept
{
  typedef gint64 (*call_wrap_t) (::GdkFrameTimings* timings);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_frame_timings_get_predicted_presentation_time;
  auto _temp_ret = call_wrap_v ((::GdkFrameTimings*) (gobj_()));
  return _temp_ret;
}

// gint64 gdk_frame_timings_get_presentation_time (GdkFrameTimings* timings);
// gint64 gdk_frame_timings_get_presentation_time (::GdkFrameTimings* timings);
gint64 base::FrameTimingsBase::get_presentation_time () noexcept
{
  typedef gint64 (*call_wrap_t) (::GdkFrameTimings* timings);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_frame_timings_get_presentation_time;
  auto _temp_ret = call_wrap_v ((::GdkFrameTimings*) (gobj_()));
  return _temp_ret;
}

// gint64 gdk_frame_timings_get_refresh_interval (GdkFrameTimings* timings);
// gint64 gdk_frame_timings_get_refresh_interval (::GdkFrameTimings* timings);
gint64 base::FrameTimingsBase::get_refresh_interval () noexcept
{
  typedef gint64 (*call_wrap_t) (::GdkFrameTimings* timings);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_frame_timings_get_refresh_interval;
  auto _temp_ret = call_wrap_v ((::GdkFrameTimings*) (gobj_()));
  return _temp_ret;
}

// GdkFrameTimings* gdk_frame_timings_ref (GdkFrameTimings* timings);
// ::GdkFrameTimings* gdk_frame_timings_ref (::GdkFrameTimings* timings);
// IGNORE; marked ignore

// void gdk_frame_timings_unref (GdkFrameTimings* timings);
// void gdk_frame_timings_unref (::GdkFrameTimings* timings);
// IGNORE; marked ignore


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/frametimings_extra_def_impl.hpp>)
#include <gdk/frametimings_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/frametimings_extra_impl.hpp>)
#include <gdk/frametimings_extra_impl.hpp>
#endif
#endif

#endif
