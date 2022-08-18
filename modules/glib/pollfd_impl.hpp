// AUTO-GENERATED

#ifndef _GI_GLIB_POLLFD_IMPL_HPP_
#define _GI_GLIB_POLLFD_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

static gint _field_fd_get (const ::GPollFD* obj) { return (gint) obj->fd; }
// gint PollFD::fd (const ::GPollFD* obj);
// gint PollFD::fd (const ::GPollFD* obj);
gint base::PollFDBase::fd_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GPollFD* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_fd_get;
  auto _temp_ret = call_wrap_v ((const ::GPollFD*) (gobj_()));
  return _temp_ret;
}

static void _field_fd_set (::GPollFD* obj, gint _value) { obj->fd = (decltype(obj->fd)) _value; }
//  PollFD::fd (::GPollFD* obj, gint _value);
// void PollFD::fd (::GPollFD* obj, gint _value);
void base::PollFDBase::fd_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GPollFD* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_fd_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GPollFD*) (gobj_()), (gint) (_value_to_c));
}

static gushort _field_events_get (const ::GPollFD* obj) { return (gushort) obj->events; }
// gushort PollFD::events (const ::GPollFD* obj);
// gushort PollFD::events (const ::GPollFD* obj);
gushort base::PollFDBase::events_ () const noexcept
{
  typedef gushort (*call_wrap_t) (const ::GPollFD* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_events_get;
  auto _temp_ret = call_wrap_v ((const ::GPollFD*) (gobj_()));
  return _temp_ret;
}

static void _field_events_set (::GPollFD* obj, gushort _value) { obj->events = (decltype(obj->events)) _value; }
//  PollFD::events (::GPollFD* obj, gushort _value);
// void PollFD::events (::GPollFD* obj, gushort _value);
void base::PollFDBase::events_ (gushort _value) noexcept
{
  typedef void (*call_wrap_t) (::GPollFD* obj, gushort _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_events_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GPollFD*) (gobj_()), (gushort) (_value_to_c));
}

static gushort _field_revents_get (const ::GPollFD* obj) { return (gushort) obj->revents; }
// gushort PollFD::revents (const ::GPollFD* obj);
// gushort PollFD::revents (const ::GPollFD* obj);
gushort base::PollFDBase::revents_ () const noexcept
{
  typedef gushort (*call_wrap_t) (const ::GPollFD* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_revents_get;
  auto _temp_ret = call_wrap_v ((const ::GPollFD*) (gobj_()));
  return _temp_ret;
}

static void _field_revents_set (::GPollFD* obj, gushort _value) { obj->revents = (decltype(obj->revents)) _value; }
//  PollFD::revents (::GPollFD* obj, gushort _value);
// void PollFD::revents (::GPollFD* obj, gushort _value);
void base::PollFDBase::revents_ (gushort _value) noexcept
{
  typedef void (*call_wrap_t) (::GPollFD* obj, gushort _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_revents_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GPollFD*) (gobj_()), (gushort) (_value_to_c));
}


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/pollfd_extra_def_impl.hpp>)
#include <glib/pollfd_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/pollfd_extra_impl.hpp>)
#include <glib/pollfd_extra_impl.hpp>
#endif
#endif

#endif
