// AUTO-GENERATED

#ifndef _GI_GST_POLLFD_HPP_
#define _GI_GST_POLLFD_HPP_


namespace gi {

namespace repository {

namespace Gst {


class PollFD;

namespace base {


#define GI_GST_POLLFD_BASE base::PollFDBase
class PollFDBase : public gi::detail::CBoxedWrapper<PollFDBase, ::GstPollFD>
{
typedef gi::detail::CBoxedWrapper<PollFDBase, ::GstPollFD> super_type;
public:

PollFDBase (std::nullptr_t = nullptr) : super_type() {}

// gint PollFD::fd (const ::GstPollFD* obj);
// gint PollFD::fd (const ::GstPollFD* obj);
GI_INLINE_DECL gint fd_ () const noexcept;

//  PollFD::fd (::GstPollFD* obj, gint _value);
// void PollFD::fd (::GstPollFD* obj, gint _value);
GI_INLINE_DECL void fd_ (gint _value) noexcept;

// void gst_poll_fd_init (GstPollFD* fd);
// void gst_poll_fd_init (::GstPollFD* fd);
GI_INLINE_DECL void init () noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/pollfd_extra_def.hpp>)
#include <gst/pollfd_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/pollfd_extra.hpp>)
#include <gst/pollfd_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class PollFD : public GI_GST_POLLFD_BASE
{ typedef GI_GST_POLLFD_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstPollFD>
{ typedef Gst::PollFD type; }; 

} // namespace repository

} // namespace gi

#endif
