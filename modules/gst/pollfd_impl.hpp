// AUTO-GENERATED

#ifndef _GI_GST_POLLFD_IMPL_HPP_
#define _GI_GST_POLLFD_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

static gint _field_fd_get (const ::GstPollFD* obj) { return (gint) obj->fd; }
// gint PollFD::fd (const ::GstPollFD* obj);
// gint PollFD::fd (const ::GstPollFD* obj);
gint base::PollFDBase::fd_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GstPollFD* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_fd_get;
  auto _temp_ret = call_wrap_v ((const ::GstPollFD*) (gobj_()));
  return _temp_ret;
}

static void _field_fd_set (::GstPollFD* obj, gint _value) { obj->fd = (decltype(obj->fd)) _value; }
//  PollFD::fd (::GstPollFD* obj, gint _value);
// void PollFD::fd (::GstPollFD* obj, gint _value);
void base::PollFDBase::fd_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GstPollFD* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_fd_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstPollFD*) (gobj_()), (gint) (_value_to_c));
}

// void gst_poll_fd_init (GstPollFD* fd);
// void gst_poll_fd_init (::GstPollFD* fd);
void base::PollFDBase::init () noexcept
{
  typedef void (*call_wrap_t) (::GstPollFD* fd);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_poll_fd_init;
  call_wrap_v ((::GstPollFD*) (gobj_()));
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/pollfd_extra_def_impl.hpp>)
#include <gst/pollfd_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/pollfd_extra_impl.hpp>)
#include <gst/pollfd_extra_impl.hpp>
#endif
#endif

#endif
