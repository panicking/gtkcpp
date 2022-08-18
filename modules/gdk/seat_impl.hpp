// AUTO-GENERATED

#ifndef _GI_GDK_SEAT_IMPL_HPP_
#define _GI_GDK_SEAT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// GdkSeatCapabilities gdk_seat_get_capabilities (GdkSeat* seat);
// ::GdkSeatCapabilities gdk_seat_get_capabilities (::GdkSeat* seat);
Gdk::SeatCapabilities base::SeatBase::get_capabilities () noexcept
{
  typedef ::GdkSeatCapabilities (*call_wrap_t) (::GdkSeat* seat);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_seat_get_capabilities;
  auto _temp_ret = call_wrap_v ((::GdkSeat*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GdkDisplay* gdk_seat_get_display (GdkSeat* seat);
// ::GdkDisplay* gdk_seat_get_display (::GdkSeat* seat);
Gdk::Display base::SeatBase::get_display () noexcept
{
  typedef ::GdkDisplay* (*call_wrap_t) (::GdkSeat* seat);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_seat_get_display;
  auto _temp_ret = call_wrap_v ((::GdkSeat*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GdkDevice* gdk_seat_get_keyboard (GdkSeat* seat);
// ::GdkDevice* gdk_seat_get_keyboard (::GdkSeat* seat);
Gdk::Device base::SeatBase::get_keyboard () noexcept
{
  typedef ::GdkDevice* (*call_wrap_t) (::GdkSeat* seat);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_seat_get_keyboard;
  auto _temp_ret = call_wrap_v ((::GdkSeat*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GdkDevice* gdk_seat_get_pointer (GdkSeat* seat);
// ::GdkDevice* gdk_seat_get_pointer (::GdkSeat* seat);
Gdk::Device base::SeatBase::get_pointer () noexcept
{
  typedef ::GdkDevice* (*call_wrap_t) (::GdkSeat* seat);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_seat_get_pointer;
  auto _temp_ret = call_wrap_v ((::GdkSeat*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GList* gdk_seat_get_slaves (GdkSeat* seat, GdkSeatCapabilities capabilities);
// ::GList* gdk_seat_get_slaves (::GdkSeat* seat, ::GdkSeatCapabilities capabilities);
std::vector<Gdk::Device> base::SeatBase::get_slaves (Gdk::SeatCapabilities capabilities) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GdkSeat* seat, ::GdkSeatCapabilities capabilities);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_seat_get_slaves;
  auto capabilities_to_c = gi::unwrap (capabilities);
  auto _temp_ret = call_wrap_v ((::GdkSeat*) (gobj_()), (::GdkSeatCapabilities) (capabilities_to_c));
  return gi::detail::wrap_list<Gdk::Device> (_temp_ret, gi::transfer_container);
}

// GdkGrabStatus gdk_seat_grab (GdkSeat* seat, GdkWindow* window, GdkSeatCapabilities capabilities, gboolean owner_events, GdkCursor* cursor, const GdkEvent* event, GdkSeatGrabPrepareFunc prepare_func, gpointer prepare_func_data);
// ::GdkGrabStatus gdk_seat_grab (::GdkSeat* seat, ::GdkWindow* window, ::GdkSeatCapabilities capabilities, gboolean owner_events, ::GdkCursor* cursor, const  event, Gdk::SeatGrabPrepareFunc::cfunction_type prepare_func, void* prepare_func_data);
// SKIP; event type  not supported

// void gdk_seat_ungrab (GdkSeat* seat);
// void gdk_seat_ungrab (::GdkSeat* seat);
void base::SeatBase::ungrab () noexcept
{
  typedef void (*call_wrap_t) (::GdkSeat* seat);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_seat_ungrab;
  call_wrap_v ((::GdkSeat*) (gobj_()));
}






} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/seat_extra_def_impl.hpp>)
#include <gdk/seat_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/seat_extra_impl.hpp>)
#include <gdk/seat_extra_impl.hpp>
#endif
#endif

#endif
