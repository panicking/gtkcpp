// AUTO-GENERATED

#ifndef _GI_GST_BUFFERPOOLACQUIREPARAMS_HPP_
#define _GI_GST_BUFFERPOOLACQUIREPARAMS_HPP_


namespace gi {

namespace repository {

namespace Gst {


class BufferPoolAcquireParams;

namespace base {


#define GI_GST_BUFFERPOOLACQUIREPARAMS_BASE base::BufferPoolAcquireParamsBase
class BufferPoolAcquireParamsBase : public gi::detail::CBoxedWrapper<BufferPoolAcquireParamsBase, ::GstBufferPoolAcquireParams>
{
typedef gi::detail::CBoxedWrapper<BufferPoolAcquireParamsBase, ::GstBufferPoolAcquireParams> super_type;
public:

BufferPoolAcquireParamsBase (std::nullptr_t = nullptr) : super_type() {}

// ::GstFormat BufferPoolAcquireParams::format (const ::GstBufferPoolAcquireParams* obj);
// ::GstFormat BufferPoolAcquireParams::format (const ::GstBufferPoolAcquireParams* obj);
GI_INLINE_DECL Gst::Format format_ () const noexcept;

//  BufferPoolAcquireParams::format (::GstBufferPoolAcquireParams* obj, ::GstFormat _value);
// void BufferPoolAcquireParams::format (::GstBufferPoolAcquireParams* obj, ::GstFormat _value);
GI_INLINE_DECL void format_ (Gst::Format _value) noexcept;

// gint64 BufferPoolAcquireParams::start (const ::GstBufferPoolAcquireParams* obj);
// gint64 BufferPoolAcquireParams::start (const ::GstBufferPoolAcquireParams* obj);
GI_INLINE_DECL gint64 start_ () const noexcept;

//  BufferPoolAcquireParams::start (::GstBufferPoolAcquireParams* obj, gint64 _value);
// void BufferPoolAcquireParams::start (::GstBufferPoolAcquireParams* obj, gint64 _value);
GI_INLINE_DECL void start_ (gint64 _value) noexcept;

// gint64 BufferPoolAcquireParams::stop (const ::GstBufferPoolAcquireParams* obj);
// gint64 BufferPoolAcquireParams::stop (const ::GstBufferPoolAcquireParams* obj);
GI_INLINE_DECL gint64 stop_ () const noexcept;

//  BufferPoolAcquireParams::stop (::GstBufferPoolAcquireParams* obj, gint64 _value);
// void BufferPoolAcquireParams::stop (::GstBufferPoolAcquireParams* obj, gint64 _value);
GI_INLINE_DECL void stop_ (gint64 _value) noexcept;

// ::GstBufferPoolAcquireFlags BufferPoolAcquireParams::flags (const ::GstBufferPoolAcquireParams* obj);
// ::GstBufferPoolAcquireFlags BufferPoolAcquireParams::flags (const ::GstBufferPoolAcquireParams* obj);
GI_INLINE_DECL Gst::BufferPoolAcquireFlags flags_ () const noexcept;

//  BufferPoolAcquireParams::flags (::GstBufferPoolAcquireParams* obj, ::GstBufferPoolAcquireFlags _value);
// void BufferPoolAcquireParams::flags (::GstBufferPoolAcquireParams* obj, ::GstBufferPoolAcquireFlags _value);
GI_INLINE_DECL void flags_ (Gst::BufferPoolAcquireFlags _value) noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/bufferpoolacquireparams_extra_def.hpp>)
#include <gst/bufferpoolacquireparams_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/bufferpoolacquireparams_extra.hpp>)
#include <gst/bufferpoolacquireparams_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class BufferPoolAcquireParams : public GI_GST_BUFFERPOOLACQUIREPARAMS_BASE
{ typedef GI_GST_BUFFERPOOLACQUIREPARAMS_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstBufferPoolAcquireParams>
{ typedef Gst::BufferPoolAcquireParams type; }; 

} // namespace repository

} // namespace gi

#endif
