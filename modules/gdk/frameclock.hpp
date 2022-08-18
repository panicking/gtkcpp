// AUTO-GENERATED

#ifndef _GI_GDK_FRAMECLOCK_HPP_
#define _GI_GDK_FRAMECLOCK_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class FrameTimings;

class FrameClock;

namespace base {


#define GI_GDK_FRAMECLOCK_BASE base::FrameClockBase
class FrameClockBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GdkFrameClock BaseObjectType;

FrameClockBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_frame_clock_get_type(); } 

// void gdk_frame_clock_begin_updating (GdkFrameClock* frame_clock);
// void gdk_frame_clock_begin_updating (::GdkFrameClock* frame_clock);
GI_INLINE_DECL void begin_updating () noexcept;

// void gdk_frame_clock_end_updating (GdkFrameClock* frame_clock);
// void gdk_frame_clock_end_updating (::GdkFrameClock* frame_clock);
GI_INLINE_DECL void end_updating () noexcept;

// GdkFrameTimings* gdk_frame_clock_get_current_timings (GdkFrameClock* frame_clock);
// ::GdkFrameTimings* gdk_frame_clock_get_current_timings (::GdkFrameClock* frame_clock);
GI_INLINE_DECL Gdk::FrameTimings get_current_timings () noexcept;

// gint64 gdk_frame_clock_get_frame_counter (GdkFrameClock* frame_clock);
// gint64 gdk_frame_clock_get_frame_counter (::GdkFrameClock* frame_clock);
GI_INLINE_DECL gint64 get_frame_counter () noexcept;

// gint64 gdk_frame_clock_get_frame_time (GdkFrameClock* frame_clock);
// gint64 gdk_frame_clock_get_frame_time (::GdkFrameClock* frame_clock);
GI_INLINE_DECL gint64 get_frame_time () noexcept;

// gint64 gdk_frame_clock_get_history_start (GdkFrameClock* frame_clock);
// gint64 gdk_frame_clock_get_history_start (::GdkFrameClock* frame_clock);
GI_INLINE_DECL gint64 get_history_start () noexcept;

// void gdk_frame_clock_get_refresh_info (GdkFrameClock* frame_clock, gint64 base_time, gint64* refresh_interval_return, gint64* presentation_time_return);
// void gdk_frame_clock_get_refresh_info (::GdkFrameClock* frame_clock, gint64 base_time, gint64* refresh_interval_return, gint64* presentation_time_return);
GI_INLINE_DECL void get_refresh_info (gint64 base_time, gint64 * refresh_interval_return, gint64 & presentation_time_return) noexcept;
GI_INLINE_DECL std::tuple<gint64, gint64> get_refresh_info (gint64 base_time) noexcept;

// GdkFrameTimings* gdk_frame_clock_get_timings (GdkFrameClock* frame_clock, gint64 frame_counter);
// ::GdkFrameTimings* gdk_frame_clock_get_timings (::GdkFrameClock* frame_clock, gint64 frame_counter);
GI_INLINE_DECL Gdk::FrameTimings get_timings (gint64 frame_counter) noexcept;

// void gdk_frame_clock_request_phase (GdkFrameClock* frame_clock, GdkFrameClockPhase phase);
// void gdk_frame_clock_request_phase (::GdkFrameClock* frame_clock, ::GdkFrameClockPhase phase);
GI_INLINE_DECL void request_phase (Gdk::FrameClockPhase phase) noexcept;

// signal after-paint
gi::signal_proxy<void(Gdk::FrameClock)> signal_after_paint()
{ return gi::signal_proxy<void(Gdk::FrameClock)> (*this, "after-paint"); }

// signal before-paint
gi::signal_proxy<void(Gdk::FrameClock)> signal_before_paint()
{ return gi::signal_proxy<void(Gdk::FrameClock)> (*this, "before-paint"); }

// signal flush-events
gi::signal_proxy<void(Gdk::FrameClock)> signal_flush_events()
{ return gi::signal_proxy<void(Gdk::FrameClock)> (*this, "flush-events"); }

// signal layout
gi::signal_proxy<void(Gdk::FrameClock)> signal_layout()
{ return gi::signal_proxy<void(Gdk::FrameClock)> (*this, "layout"); }

// signal paint
gi::signal_proxy<void(Gdk::FrameClock)> signal_paint()
{ return gi::signal_proxy<void(Gdk::FrameClock)> (*this, "paint"); }

// signal resume-events
gi::signal_proxy<void(Gdk::FrameClock)> signal_resume_events()
{ return gi::signal_proxy<void(Gdk::FrameClock)> (*this, "resume-events"); }

// signal update
gi::signal_proxy<void(Gdk::FrameClock)> signal_update()
{ return gi::signal_proxy<void(Gdk::FrameClock)> (*this, "update"); }

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/frameclock_extra_def.hpp>)
#include <gdk/frameclock_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/frameclock_extra.hpp>)
#include <gdk/frameclock_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class FrameClock : public GI_GDK_FRAMECLOCK_BASE
{ typedef GI_GDK_FRAMECLOCK_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkFrameClock>
{ typedef Gdk::FrameClock type; }; 

} // namespace repository

} // namespace gi

#endif
