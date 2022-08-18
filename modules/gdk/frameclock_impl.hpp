// AUTO-GENERATED

#ifndef _GI_GDK_FRAMECLOCK_IMPL_HPP_
#define _GI_GDK_FRAMECLOCK_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// void gdk_frame_clock_begin_updating (GdkFrameClock* frame_clock);
// void gdk_frame_clock_begin_updating (::GdkFrameClock* frame_clock);
void base::FrameClockBase::begin_updating () noexcept
{
  typedef void (*call_wrap_t) (::GdkFrameClock* frame_clock);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_frame_clock_begin_updating;
  call_wrap_v ((::GdkFrameClock*) (gobj_()));
}

// void gdk_frame_clock_end_updating (GdkFrameClock* frame_clock);
// void gdk_frame_clock_end_updating (::GdkFrameClock* frame_clock);
void base::FrameClockBase::end_updating () noexcept
{
  typedef void (*call_wrap_t) (::GdkFrameClock* frame_clock);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_frame_clock_end_updating;
  call_wrap_v ((::GdkFrameClock*) (gobj_()));
}

// GdkFrameTimings* gdk_frame_clock_get_current_timings (GdkFrameClock* frame_clock);
// ::GdkFrameTimings* gdk_frame_clock_get_current_timings (::GdkFrameClock* frame_clock);
Gdk::FrameTimings base::FrameClockBase::get_current_timings () noexcept
{
  typedef ::GdkFrameTimings* (*call_wrap_t) (::GdkFrameClock* frame_clock);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_frame_clock_get_current_timings;
  auto _temp_ret = call_wrap_v ((::GdkFrameClock*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gint64 gdk_frame_clock_get_frame_counter (GdkFrameClock* frame_clock);
// gint64 gdk_frame_clock_get_frame_counter (::GdkFrameClock* frame_clock);
gint64 base::FrameClockBase::get_frame_counter () noexcept
{
  typedef gint64 (*call_wrap_t) (::GdkFrameClock* frame_clock);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_frame_clock_get_frame_counter;
  auto _temp_ret = call_wrap_v ((::GdkFrameClock*) (gobj_()));
  return _temp_ret;
}

// gint64 gdk_frame_clock_get_frame_time (GdkFrameClock* frame_clock);
// gint64 gdk_frame_clock_get_frame_time (::GdkFrameClock* frame_clock);
gint64 base::FrameClockBase::get_frame_time () noexcept
{
  typedef gint64 (*call_wrap_t) (::GdkFrameClock* frame_clock);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_frame_clock_get_frame_time;
  auto _temp_ret = call_wrap_v ((::GdkFrameClock*) (gobj_()));
  return _temp_ret;
}

// gint64 gdk_frame_clock_get_history_start (GdkFrameClock* frame_clock);
// gint64 gdk_frame_clock_get_history_start (::GdkFrameClock* frame_clock);
gint64 base::FrameClockBase::get_history_start () noexcept
{
  typedef gint64 (*call_wrap_t) (::GdkFrameClock* frame_clock);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_frame_clock_get_history_start;
  auto _temp_ret = call_wrap_v ((::GdkFrameClock*) (gobj_()));
  return _temp_ret;
}

// void gdk_frame_clock_get_refresh_info (GdkFrameClock* frame_clock, gint64 base_time, gint64* refresh_interval_return, gint64* presentation_time_return);
// void gdk_frame_clock_get_refresh_info (::GdkFrameClock* frame_clock, gint64 base_time, gint64* refresh_interval_return, gint64* presentation_time_return);
void base::FrameClockBase::get_refresh_info (gint64 base_time, gint64 * refresh_interval_return, gint64 & presentation_time_return) noexcept
{
  typedef void (*call_wrap_t) (::GdkFrameClock* frame_clock, gint64 base_time, gint64* refresh_interval_return, gint64* presentation_time_return);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_frame_clock_get_refresh_info;
  gint64 presentation_time_return_o {};
  gint64 refresh_interval_return_o {};
  auto base_time_to_c = base_time;
  call_wrap_v ((::GdkFrameClock*) (gobj_()), (gint64) (base_time_to_c), (gint64*) (refresh_interval_return ? &refresh_interval_return_o : nullptr), (gint64*) (&presentation_time_return_o));
  presentation_time_return = presentation_time_return_o;
  if (refresh_interval_return) *refresh_interval_return = refresh_interval_return_o;
}
std::tuple<gint64, gint64> base::FrameClockBase::get_refresh_info (gint64 base_time) noexcept
{
  typedef void (*call_wrap_t) (::GdkFrameClock* frame_clock, gint64 base_time, gint64* refresh_interval_return, gint64* presentation_time_return);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_frame_clock_get_refresh_info;
  gint64 presentation_time_return_o {};
  gint64 refresh_interval_return_o {};
  auto base_time_to_c = base_time;
  call_wrap_v ((::GdkFrameClock*) (gobj_()), (gint64) (base_time_to_c), (gint64*) (&refresh_interval_return_o), (gint64*) (&presentation_time_return_o));
  return std::make_tuple (refresh_interval_return_o, presentation_time_return_o);
}

// GdkFrameTimings* gdk_frame_clock_get_timings (GdkFrameClock* frame_clock, gint64 frame_counter);
// ::GdkFrameTimings* gdk_frame_clock_get_timings (::GdkFrameClock* frame_clock, gint64 frame_counter);
Gdk::FrameTimings base::FrameClockBase::get_timings (gint64 frame_counter) noexcept
{
  typedef ::GdkFrameTimings* (*call_wrap_t) (::GdkFrameClock* frame_clock, gint64 frame_counter);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_frame_clock_get_timings;
  auto frame_counter_to_c = frame_counter;
  auto _temp_ret = call_wrap_v ((::GdkFrameClock*) (gobj_()), (gint64) (frame_counter_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gdk_frame_clock_request_phase (GdkFrameClock* frame_clock, GdkFrameClockPhase phase);
// void gdk_frame_clock_request_phase (::GdkFrameClock* frame_clock, ::GdkFrameClockPhase phase);
void base::FrameClockBase::request_phase (Gdk::FrameClockPhase phase) noexcept
{
  typedef void (*call_wrap_t) (::GdkFrameClock* frame_clock, ::GdkFrameClockPhase phase);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_frame_clock_request_phase;
  auto phase_to_c = gi::unwrap (phase);
  call_wrap_v ((::GdkFrameClock*) (gobj_()), (::GdkFrameClockPhase) (phase_to_c));
}









} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/frameclock_extra_def_impl.hpp>)
#include <gdk/frameclock_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/frameclock_extra_impl.hpp>)
#include <gdk/frameclock_extra_impl.hpp>
#endif
#endif

#endif
