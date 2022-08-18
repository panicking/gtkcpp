// AUTO-GENERATED

#ifndef _GI_GST_SYSTEMCLOCK_IMPL_HPP_
#define _GI_GST_SYSTEMCLOCK_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// GstClock* gst_system_clock_obtain ();
// ::GstClock* gst_system_clock_obtain ();
Gst::Clock base::SystemClockBase::obtain () noexcept
{
  typedef ::GstClock* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_system_clock_obtain;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gst_system_clock_set_default (GstClock* new_clock);
// void gst_system_clock_set_default (::GstClock* new_clock);
void base::SystemClockBase::set_default (Gst::Clock new_clock) noexcept
{
  typedef void (*call_wrap_t) (::GstClock* new_clock);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_system_clock_set_default;
  auto new_clock_to_c = gi::unwrap (new_clock, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstClock*) (new_clock_to_c));
}
void base::SystemClockBase::set_default () noexcept
{
  typedef void (*call_wrap_t) (::GstClock* new_clock);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_system_clock_set_default;
  auto new_clock_to_c = nullptr;
  call_wrap_v ((::GstClock*) (new_clock_to_c));
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/systemclock_extra_def_impl.hpp>)
#include <gst/systemclock_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/systemclock_extra_impl.hpp>)
#include <gst/systemclock_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {

void SystemClockClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GstSystemClockClass *methods = (::GstSystemClockClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
