// AUTO-GENERATED

#ifndef _GI_GST_PADPROBEINFO_IMPL_HPP_
#define _GI_GST_PADPROBEINFO_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

static ::GstPadProbeType _field_type_get (const ::GstPadProbeInfo* obj) { return (::GstPadProbeType) obj->type; }
// ::GstPadProbeType PadProbeInfo::type (const ::GstPadProbeInfo* obj);
// ::GstPadProbeType PadProbeInfo::type (const ::GstPadProbeInfo* obj);
Gst::PadProbeType base::PadProbeInfoBase::type_ () const noexcept
{
  typedef ::GstPadProbeType (*call_wrap_t) (const ::GstPadProbeInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_get;
  auto _temp_ret = call_wrap_v ((const ::GstPadProbeInfo*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_type_set (::GstPadProbeInfo* obj, ::GstPadProbeType _value) { obj->type = (decltype(obj->type)) _value; }
//  PadProbeInfo::type (::GstPadProbeInfo* obj, ::GstPadProbeType _value);
// void PadProbeInfo::type (::GstPadProbeInfo* obj, ::GstPadProbeType _value);
void base::PadProbeInfoBase::type_ (Gst::PadProbeType _value) noexcept
{
  typedef void (*call_wrap_t) (::GstPadProbeInfo* obj, ::GstPadProbeType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GstPadProbeInfo*) (gobj_()), (::GstPadProbeType) (_value_to_c));
}

static gulong _field_id_get (const ::GstPadProbeInfo* obj) { return (gulong) obj->id; }
// gulong PadProbeInfo::id (const ::GstPadProbeInfo* obj);
// gulong PadProbeInfo::id (const ::GstPadProbeInfo* obj);
gulong base::PadProbeInfoBase::id_ () const noexcept
{
  typedef gulong (*call_wrap_t) (const ::GstPadProbeInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_id_get;
  auto _temp_ret = call_wrap_v ((const ::GstPadProbeInfo*) (gobj_()));
  return _temp_ret;
}

static void _field_id_set (::GstPadProbeInfo* obj, gulong _value) { obj->id = (decltype(obj->id)) _value; }
//  PadProbeInfo::id (::GstPadProbeInfo* obj, gulong _value);
// void PadProbeInfo::id (::GstPadProbeInfo* obj, gulong _value);
void base::PadProbeInfoBase::id_ (gulong _value) noexcept
{
  typedef void (*call_wrap_t) (::GstPadProbeInfo* obj, gulong _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_id_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstPadProbeInfo*) (gobj_()), (gulong) (_value_to_c));
}

static guint64 _field_offset_get (const ::GstPadProbeInfo* obj) { return (guint64) obj->offset; }
// guint64 PadProbeInfo::offset (const ::GstPadProbeInfo* obj);
// guint64 PadProbeInfo::offset (const ::GstPadProbeInfo* obj);
guint64 base::PadProbeInfoBase::offset_ () const noexcept
{
  typedef guint64 (*call_wrap_t) (const ::GstPadProbeInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_offset_get;
  auto _temp_ret = call_wrap_v ((const ::GstPadProbeInfo*) (gobj_()));
  return _temp_ret;
}

static void _field_offset_set (::GstPadProbeInfo* obj, guint64 _value) { obj->offset = (decltype(obj->offset)) _value; }
//  PadProbeInfo::offset (::GstPadProbeInfo* obj, guint64 _value);
// void PadProbeInfo::offset (::GstPadProbeInfo* obj, guint64 _value);
void base::PadProbeInfoBase::offset_ (guint64 _value) noexcept
{
  typedef void (*call_wrap_t) (::GstPadProbeInfo* obj, guint64 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_offset_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstPadProbeInfo*) (gobj_()), (guint64) (_value_to_c));
}

static guint _field_size_get (const ::GstPadProbeInfo* obj) { return (guint) obj->size; }
// guint PadProbeInfo::size (const ::GstPadProbeInfo* obj);
// guint PadProbeInfo::size (const ::GstPadProbeInfo* obj);
guint base::PadProbeInfoBase::size_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GstPadProbeInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_size_get;
  auto _temp_ret = call_wrap_v ((const ::GstPadProbeInfo*) (gobj_()));
  return _temp_ret;
}

static void _field_size_set (::GstPadProbeInfo* obj, guint _value) { obj->size = (decltype(obj->size)) _value; }
//  PadProbeInfo::size (::GstPadProbeInfo* obj, guint _value);
// void PadProbeInfo::size (::GstPadProbeInfo* obj, guint _value);
void base::PadProbeInfoBase::size_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GstPadProbeInfo* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_size_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstPadProbeInfo*) (gobj_()), (guint) (_value_to_c));
}

// GstBuffer* gst_pad_probe_info_get_buffer (GstPadProbeInfo* info);
// ::GstBuffer* gst_pad_probe_info_get_buffer (::GstPadProbeInfo* info);
Gst::Buffer base::PadProbeInfoBase::get_buffer () noexcept
{
  typedef ::GstBuffer* (*call_wrap_t) (::GstPadProbeInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_probe_info_get_buffer;
  auto _temp_ret = call_wrap_v ((::GstPadProbeInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GstBufferList* gst_pad_probe_info_get_buffer_list (GstPadProbeInfo* info);
// ::GstBufferList* gst_pad_probe_info_get_buffer_list (::GstPadProbeInfo* info);
Gst::BufferList base::PadProbeInfoBase::get_buffer_list () noexcept
{
  typedef ::GstBufferList* (*call_wrap_t) (::GstPadProbeInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_probe_info_get_buffer_list;
  auto _temp_ret = call_wrap_v ((::GstPadProbeInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GstEvent* gst_pad_probe_info_get_event (GstPadProbeInfo* info);
// ::GstEvent* gst_pad_probe_info_get_event (::GstPadProbeInfo* info);
Gst::Event base::PadProbeInfoBase::get_event () noexcept
{
  typedef ::GstEvent* (*call_wrap_t) (::GstPadProbeInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_probe_info_get_event;
  auto _temp_ret = call_wrap_v ((::GstPadProbeInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GstQuery* gst_pad_probe_info_get_query (GstPadProbeInfo* info);
// ::GstQuery* gst_pad_probe_info_get_query (::GstPadProbeInfo* info);
Gst::Query base::PadProbeInfoBase::get_query () noexcept
{
  typedef ::GstQuery* (*call_wrap_t) (::GstPadProbeInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_probe_info_get_query;
  auto _temp_ret = call_wrap_v ((::GstPadProbeInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/padprobeinfo_extra_def_impl.hpp>)
#include <gst/padprobeinfo_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/padprobeinfo_extra_impl.hpp>)
#include <gst/padprobeinfo_extra_impl.hpp>
#endif
#endif

#endif
