// AUTO-GENERATED

#ifndef _GI_GST_BUFFERPOOLACQUIREPARAMS_IMPL_HPP_
#define _GI_GST_BUFFERPOOLACQUIREPARAMS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

static ::GstFormat _field_format_get (const ::GstBufferPoolAcquireParams* obj) { return (::GstFormat) obj->format; }
// ::GstFormat BufferPoolAcquireParams::format (const ::GstBufferPoolAcquireParams* obj);
// ::GstFormat BufferPoolAcquireParams::format (const ::GstBufferPoolAcquireParams* obj);
Gst::Format base::BufferPoolAcquireParamsBase::format_ () const noexcept
{
  typedef ::GstFormat (*call_wrap_t) (const ::GstBufferPoolAcquireParams* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_format_get;
  auto _temp_ret = call_wrap_v ((const ::GstBufferPoolAcquireParams*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_format_set (::GstBufferPoolAcquireParams* obj, ::GstFormat _value) { obj->format = (decltype(obj->format)) _value; }
//  BufferPoolAcquireParams::format (::GstBufferPoolAcquireParams* obj, ::GstFormat _value);
// void BufferPoolAcquireParams::format (::GstBufferPoolAcquireParams* obj, ::GstFormat _value);
void base::BufferPoolAcquireParamsBase::format_ (Gst::Format _value) noexcept
{
  typedef void (*call_wrap_t) (::GstBufferPoolAcquireParams* obj, ::GstFormat _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_format_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GstBufferPoolAcquireParams*) (gobj_()), (::GstFormat) (_value_to_c));
}

static gint64 _field_start_get (const ::GstBufferPoolAcquireParams* obj) { return (gint64) obj->start; }
// gint64 BufferPoolAcquireParams::start (const ::GstBufferPoolAcquireParams* obj);
// gint64 BufferPoolAcquireParams::start (const ::GstBufferPoolAcquireParams* obj);
gint64 base::BufferPoolAcquireParamsBase::start_ () const noexcept
{
  typedef gint64 (*call_wrap_t) (const ::GstBufferPoolAcquireParams* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_start_get;
  auto _temp_ret = call_wrap_v ((const ::GstBufferPoolAcquireParams*) (gobj_()));
  return _temp_ret;
}

static void _field_start_set (::GstBufferPoolAcquireParams* obj, gint64 _value) { obj->start = (decltype(obj->start)) _value; }
//  BufferPoolAcquireParams::start (::GstBufferPoolAcquireParams* obj, gint64 _value);
// void BufferPoolAcquireParams::start (::GstBufferPoolAcquireParams* obj, gint64 _value);
void base::BufferPoolAcquireParamsBase::start_ (gint64 _value) noexcept
{
  typedef void (*call_wrap_t) (::GstBufferPoolAcquireParams* obj, gint64 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_start_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstBufferPoolAcquireParams*) (gobj_()), (gint64) (_value_to_c));
}

static gint64 _field_stop_get (const ::GstBufferPoolAcquireParams* obj) { return (gint64) obj->stop; }
// gint64 BufferPoolAcquireParams::stop (const ::GstBufferPoolAcquireParams* obj);
// gint64 BufferPoolAcquireParams::stop (const ::GstBufferPoolAcquireParams* obj);
gint64 base::BufferPoolAcquireParamsBase::stop_ () const noexcept
{
  typedef gint64 (*call_wrap_t) (const ::GstBufferPoolAcquireParams* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_stop_get;
  auto _temp_ret = call_wrap_v ((const ::GstBufferPoolAcquireParams*) (gobj_()));
  return _temp_ret;
}

static void _field_stop_set (::GstBufferPoolAcquireParams* obj, gint64 _value) { obj->stop = (decltype(obj->stop)) _value; }
//  BufferPoolAcquireParams::stop (::GstBufferPoolAcquireParams* obj, gint64 _value);
// void BufferPoolAcquireParams::stop (::GstBufferPoolAcquireParams* obj, gint64 _value);
void base::BufferPoolAcquireParamsBase::stop_ (gint64 _value) noexcept
{
  typedef void (*call_wrap_t) (::GstBufferPoolAcquireParams* obj, gint64 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_stop_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstBufferPoolAcquireParams*) (gobj_()), (gint64) (_value_to_c));
}

static ::GstBufferPoolAcquireFlags _field_flags_get (const ::GstBufferPoolAcquireParams* obj) { return (::GstBufferPoolAcquireFlags) obj->flags; }
// ::GstBufferPoolAcquireFlags BufferPoolAcquireParams::flags (const ::GstBufferPoolAcquireParams* obj);
// ::GstBufferPoolAcquireFlags BufferPoolAcquireParams::flags (const ::GstBufferPoolAcquireParams* obj);
Gst::BufferPoolAcquireFlags base::BufferPoolAcquireParamsBase::flags_ () const noexcept
{
  typedef ::GstBufferPoolAcquireFlags (*call_wrap_t) (const ::GstBufferPoolAcquireParams* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_flags_get;
  auto _temp_ret = call_wrap_v ((const ::GstBufferPoolAcquireParams*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_flags_set (::GstBufferPoolAcquireParams* obj, ::GstBufferPoolAcquireFlags _value) { obj->flags = (decltype(obj->flags)) _value; }
//  BufferPoolAcquireParams::flags (::GstBufferPoolAcquireParams* obj, ::GstBufferPoolAcquireFlags _value);
// void BufferPoolAcquireParams::flags (::GstBufferPoolAcquireParams* obj, ::GstBufferPoolAcquireFlags _value);
void base::BufferPoolAcquireParamsBase::flags_ (Gst::BufferPoolAcquireFlags _value) noexcept
{
  typedef void (*call_wrap_t) (::GstBufferPoolAcquireParams* obj, ::GstBufferPoolAcquireFlags _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_flags_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GstBufferPoolAcquireParams*) (gobj_()), (::GstBufferPoolAcquireFlags) (_value_to_c));
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/bufferpoolacquireparams_extra_def_impl.hpp>)
#include <gst/bufferpoolacquireparams_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/bufferpoolacquireparams_extra_impl.hpp>)
#include <gst/bufferpoolacquireparams_extra_impl.hpp>
#endif
#endif

#endif
