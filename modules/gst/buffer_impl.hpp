// AUTO-GENERATED

#ifndef _GI_GST_BUFFER_IMPL_HPP_
#define _GI_GST_BUFFER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

static ::GstBufferPool* _field_pool_get (const ::GstBuffer* obj) { return (::GstBufferPool*) obj->pool; }
// ::GstBufferPool* Buffer::pool (const ::GstBuffer* obj);
// ::GstBufferPool* Buffer::pool (const ::GstBuffer* obj);
Gst::BufferPool base::BufferBase::pool_ () const noexcept
{
  typedef ::GstBufferPool* (*call_wrap_t) (const ::GstBuffer* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_pool_get;
  auto _temp_ret = call_wrap_v ((const ::GstBuffer*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static ::GstClockTime _field_pts_get (const ::GstBuffer* obj) { return (::GstClockTime) obj->pts; }
// ::GstClockTime Buffer::pts (const ::GstBuffer* obj);
// ::GstClockTime Buffer::pts (const ::GstBuffer* obj);
Gst::ClockTime base::BufferBase::pts_ () const noexcept
{
  typedef ::GstClockTime (*call_wrap_t) (const ::GstBuffer* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_pts_get;
  auto _temp_ret = call_wrap_v ((const ::GstBuffer*) (gobj_()));
  return _temp_ret;
}

static void _field_pts_set (::GstBuffer* obj, ::GstClockTime _value) { obj->pts = (decltype(obj->pts)) _value; }
//  Buffer::pts (::GstBuffer* obj, ::GstClockTime _value);
// void Buffer::pts (::GstBuffer* obj, ::GstClockTime _value);
void base::BufferBase::pts_ (::GstClockTime _value) noexcept
{
  typedef void (*call_wrap_t) (::GstBuffer* obj, ::GstClockTime _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_pts_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstBuffer*) (gobj_()), (::GstClockTime) (_value_to_c));
}

static ::GstClockTime _field_dts_get (const ::GstBuffer* obj) { return (::GstClockTime) obj->dts; }
// ::GstClockTime Buffer::dts (const ::GstBuffer* obj);
// ::GstClockTime Buffer::dts (const ::GstBuffer* obj);
Gst::ClockTime base::BufferBase::dts_ () const noexcept
{
  typedef ::GstClockTime (*call_wrap_t) (const ::GstBuffer* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_dts_get;
  auto _temp_ret = call_wrap_v ((const ::GstBuffer*) (gobj_()));
  return _temp_ret;
}

static void _field_dts_set (::GstBuffer* obj, ::GstClockTime _value) { obj->dts = (decltype(obj->dts)) _value; }
//  Buffer::dts (::GstBuffer* obj, ::GstClockTime _value);
// void Buffer::dts (::GstBuffer* obj, ::GstClockTime _value);
void base::BufferBase::dts_ (::GstClockTime _value) noexcept
{
  typedef void (*call_wrap_t) (::GstBuffer* obj, ::GstClockTime _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_dts_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstBuffer*) (gobj_()), (::GstClockTime) (_value_to_c));
}

static ::GstClockTime _field_duration_get (const ::GstBuffer* obj) { return (::GstClockTime) obj->duration; }
// ::GstClockTime Buffer::duration (const ::GstBuffer* obj);
// ::GstClockTime Buffer::duration (const ::GstBuffer* obj);
Gst::ClockTime base::BufferBase::duration_ () const noexcept
{
  typedef ::GstClockTime (*call_wrap_t) (const ::GstBuffer* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_duration_get;
  auto _temp_ret = call_wrap_v ((const ::GstBuffer*) (gobj_()));
  return _temp_ret;
}

static void _field_duration_set (::GstBuffer* obj, ::GstClockTime _value) { obj->duration = (decltype(obj->duration)) _value; }
//  Buffer::duration (::GstBuffer* obj, ::GstClockTime _value);
// void Buffer::duration (::GstBuffer* obj, ::GstClockTime _value);
void base::BufferBase::duration_ (::GstClockTime _value) noexcept
{
  typedef void (*call_wrap_t) (::GstBuffer* obj, ::GstClockTime _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_duration_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstBuffer*) (gobj_()), (::GstClockTime) (_value_to_c));
}

static guint64 _field_offset_get (const ::GstBuffer* obj) { return (guint64) obj->offset; }
// guint64 Buffer::offset (const ::GstBuffer* obj);
// guint64 Buffer::offset (const ::GstBuffer* obj);
guint64 base::BufferBase::offset_ () const noexcept
{
  typedef guint64 (*call_wrap_t) (const ::GstBuffer* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_offset_get;
  auto _temp_ret = call_wrap_v ((const ::GstBuffer*) (gobj_()));
  return _temp_ret;
}

static void _field_offset_set (::GstBuffer* obj, guint64 _value) { obj->offset = (decltype(obj->offset)) _value; }
//  Buffer::offset (::GstBuffer* obj, guint64 _value);
// void Buffer::offset (::GstBuffer* obj, guint64 _value);
void base::BufferBase::offset_ (guint64 _value) noexcept
{
  typedef void (*call_wrap_t) (::GstBuffer* obj, guint64 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_offset_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstBuffer*) (gobj_()), (guint64) (_value_to_c));
}

static guint64 _field_offset_end_get (const ::GstBuffer* obj) { return (guint64) obj->offset_end; }
// guint64 Buffer::offset_end (const ::GstBuffer* obj);
// guint64 Buffer::offset_end (const ::GstBuffer* obj);
guint64 base::BufferBase::offset_end_ () const noexcept
{
  typedef guint64 (*call_wrap_t) (const ::GstBuffer* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_offset_end_get;
  auto _temp_ret = call_wrap_v ((const ::GstBuffer*) (gobj_()));
  return _temp_ret;
}

static void _field_offset_end_set (::GstBuffer* obj, guint64 _value) { obj->offset_end = (decltype(obj->offset_end)) _value; }
//  Buffer::offset_end (::GstBuffer* obj, guint64 _value);
// void Buffer::offset_end (::GstBuffer* obj, guint64 _value);
void base::BufferBase::offset_end_ (guint64 _value) noexcept
{
  typedef void (*call_wrap_t) (::GstBuffer* obj, guint64 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_offset_end_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstBuffer*) (gobj_()), (guint64) (_value_to_c));
}

// GstBuffer* gst_buffer_new ();
// ::GstBuffer* gst_buffer_new ();
Gst::Buffer base::BufferBase::new_ () noexcept
{
  typedef ::GstBuffer* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstBuffer* gst_buffer_new_allocate (GstAllocator* allocator, gsize size, GstAllocationParams* params);
// ::GstBuffer* gst_buffer_new_allocate (::GstAllocator* allocator, gsize size, ::GstAllocationParams* params);
Gst::Buffer base::BufferBase::new_allocate (Gst::Allocator allocator, gsize size, Gst::AllocationParams params) noexcept
{
  typedef ::GstBuffer* (*call_wrap_t) (::GstAllocator* allocator, gsize size, ::GstAllocationParams* params);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_new_allocate;
  auto params_to_c = gi::unwrap (params, gi::transfer_none, gi::direction_in);
  auto size_to_c = size;
  auto allocator_to_c = gi::unwrap (allocator, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstAllocator*) (allocator_to_c), (gsize) (size_to_c), (::GstAllocationParams*) (params_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::Buffer base::BufferBase::new_allocate (gsize size) noexcept
{
  typedef ::GstBuffer* (*call_wrap_t) (::GstAllocator* allocator, gsize size, ::GstAllocationParams* params);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_new_allocate;
  auto params_to_c = nullptr;
  auto size_to_c = size;
  auto allocator_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstAllocator*) (allocator_to_c), (gsize) (size_to_c), (::GstAllocationParams*) (params_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstBuffer* gst_buffer_new_memdup (gconstpointer data, gsize size);
// ::GstBuffer* gst_buffer_new_memdup (const guint8* data, gsize size);
Gst::Buffer base::BufferBase::new_memdup (guint8 * data, gsize size) noexcept
{
  typedef ::GstBuffer* (*call_wrap_t) (const guint8* data, gsize size);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_new_memdup;
  auto data_i = detail::make_list_unwrap_range (data, size, false);
  auto data_w = unwrap (data_i, gi::transfer_none, direction_in);
  auto data_to_c = data_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((const guint8*) (data_to_c), (gsize) (data_w.size()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstBuffer* gst_buffer_new_wrapped (gpointer data, gsize size);
// ::GstBuffer* gst_buffer_new_wrapped (guint8* data, gsize size);
Gst::Buffer base::BufferBase::new_wrapped (guint8 * data, gsize size) noexcept
{
  typedef ::GstBuffer* (*call_wrap_t) (guint8* data, gsize size);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_new_wrapped;
  auto data_i = detail::make_list_unwrap_range (data, size, false);
  auto data_w = unwrap (data_i, gi::transfer_full, direction_in);
  auto data_to_c = data_w.gobj_(true);
  auto _temp_ret = call_wrap_v ((guint8*) (data_to_c), (gsize) (data_w.size()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstBuffer* gst_buffer_new_wrapped_bytes (GBytes* bytes);
// ::GstBuffer* gst_buffer_new_wrapped_bytes (::GBytes* bytes);
Gst::Buffer base::BufferBase::new_wrapped_bytes (GLib::Bytes bytes) noexcept
{
  typedef ::GstBuffer* (*call_wrap_t) (::GBytes* bytes);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_new_wrapped_bytes;
  auto bytes_to_c = gi::unwrap (bytes, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GBytes*) (bytes_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstBuffer* gst_buffer_new_wrapped_full (GstMemoryFlags flags, gpointer data, gsize maxsize, gsize offset, gsize size, gpointer user_data, GDestroyNotify notify);
// ::GstBuffer* gst_buffer_new_wrapped_full (::GstMemoryFlags flags, guint8* data, gsize maxsize, gsize offset, gsize size, void* user_data, GLib::DestroyNotify::cfunction_type notify);
Gst::Buffer base::BufferBase::new_wrapped_full (Gst::MemoryFlags flags, guint8 * data, gsize maxsize, gsize offset, gsize size, GLib::DestroyNotify notify) noexcept
{
  typedef ::GstBuffer* (*call_wrap_t) (::GstMemoryFlags flags, guint8* data, gsize maxsize, gsize offset, gsize size, void* user_data, GLib::DestroyNotify::cfunction_type notify);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_new_wrapped_full;
  auto notify_wrap_ = notify ? unwrap (std::move (notify), gi::scope_async) : nullptr;
  auto offset_to_c = offset;
  auto maxsize_to_c = maxsize;
  auto data_i = detail::make_list_unwrap_range (data, size, false);
  auto data_w = unwrap (data_i, gi::transfer_none, direction_in);
  auto data_to_c = data_w.gobj_(false);
  auto flags_to_c = gi::unwrap (flags);
  auto _temp_ret = call_wrap_v ((::GstMemoryFlags) (flags_to_c), (guint8*) (data_to_c), (gsize) (maxsize_to_c), (gsize) (offset_to_c), (gsize) (data_w.size()), (void*) (notify_wrap_), (GLib::DestroyNotify::cfunction_type) (notify_wrap_ ? &notify_wrap_->wrapper : nullptr));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstCustomMeta* gst_buffer_add_custom_meta (GstBuffer* buffer, const gchar* name);
// ::GstCustomMeta* gst_buffer_add_custom_meta (::GstBuffer* buffer, const char* name);
Gst::CustomMeta base::BufferBase::add_custom_meta (const std::string & name) noexcept
{
  typedef ::GstCustomMeta* (*call_wrap_t) (::GstBuffer* buffer, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_add_custom_meta;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstBuffer*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GstMeta* gst_buffer_add_meta (GstBuffer* buffer, const GstMetaInfo* info, gpointer params);
// ::GstMeta* gst_buffer_add_meta (::GstBuffer* buffer, const ::GstMetaInfo* info, void* params);
Gst::Meta base::BufferBase::add_meta (const Gst::MetaInfo & info, void* params) noexcept
{
  typedef ::GstMeta* (*call_wrap_t) (::GstBuffer* buffer, const ::GstMetaInfo* info, void* params);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_add_meta;
  auto params_to_c = params;
  auto info_to_c = gi::unwrap (info, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstBuffer*) (gobj_()), (const ::GstMetaInfo*) (info_to_c), (void*) (params_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GstParentBufferMeta* gst_buffer_add_parent_buffer_meta (GstBuffer* buffer, GstBuffer* ref);
// ::GstParentBufferMeta* gst_buffer_add_parent_buffer_meta (::GstBuffer* buffer, ::GstBuffer* ref);
Gst::ParentBufferMeta base::BufferBase::add_parent_buffer_meta (Gst::Buffer ref) noexcept
{
  typedef ::GstParentBufferMeta* (*call_wrap_t) (::GstBuffer* buffer, ::GstBuffer* ref);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_add_parent_buffer_meta;
  auto ref_to_c = gi::unwrap (ref, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstBuffer*) (gobj_()), (::GstBuffer*) (ref_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GstProtectionMeta* gst_buffer_add_protection_meta (GstBuffer* buffer, GstStructure* info);
// ::GstProtectionMeta* gst_buffer_add_protection_meta (::GstBuffer* buffer, ::GstStructure* info);
Gst::ProtectionMeta base::BufferBase::add_protection_meta (Gst::Structure info) noexcept
{
  typedef ::GstProtectionMeta* (*call_wrap_t) (::GstBuffer* buffer, ::GstStructure* info);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_add_protection_meta;
  auto info_to_c = gi::unwrap (info, gi::transfer_full, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstBuffer*) (gobj_()), (::GstStructure*) (info_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GstReferenceTimestampMeta* gst_buffer_add_reference_timestamp_meta (GstBuffer* buffer, GstCaps* reference, GstClockTime timestamp, GstClockTime duration);
// ::GstReferenceTimestampMeta* gst_buffer_add_reference_timestamp_meta (::GstBuffer* buffer, ::GstCaps* reference, ::GstClockTime timestamp, ::GstClockTime duration);
Gst::ReferenceTimestampMeta base::BufferBase::add_reference_timestamp_meta (Gst::Caps reference, ::GstClockTime timestamp, ::GstClockTime duration) noexcept
{
  typedef ::GstReferenceTimestampMeta* (*call_wrap_t) (::GstBuffer* buffer, ::GstCaps* reference, ::GstClockTime timestamp, ::GstClockTime duration);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_add_reference_timestamp_meta;
  auto duration_to_c = duration;
  auto timestamp_to_c = timestamp;
  auto reference_to_c = gi::unwrap (reference, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstBuffer*) (gobj_()), (::GstCaps*) (reference_to_c), (::GstClockTime) (timestamp_to_c), (::GstClockTime) (duration_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GstBuffer* gst_buffer_append (GstBuffer* buf1, GstBuffer* buf2);
// ::GstBuffer* gst_buffer_append (::GstBuffer* buf1, ::GstBuffer* buf2);
Gst::Buffer base::BufferBase::append (Gst::Buffer buf2) noexcept
{
  typedef ::GstBuffer* (*call_wrap_t) (::GstBuffer* buf1, ::GstBuffer* buf2);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_append;
  auto buf2_to_c = gi::unwrap (buf2, gi::transfer_full, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstBuffer*) (gobj_()), (::GstBuffer*) (buf2_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gst_buffer_append_memory (GstBuffer* buffer, GstMemory* mem);
// void gst_buffer_append_memory (::GstBuffer* buffer, ::GstMemory* mem);
void base::BufferBase::append_memory (Gst::Memory mem) noexcept
{
  typedef void (*call_wrap_t) (::GstBuffer* buffer, ::GstMemory* mem);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_append_memory;
  auto mem_to_c = gi::unwrap (mem, gi::transfer_full, gi::direction_in);
  call_wrap_v ((::GstBuffer*) (gobj_()), (::GstMemory*) (mem_to_c));
}

// GstBuffer* gst_buffer_append_region (GstBuffer* buf1, GstBuffer* buf2, gssize offset, gssize size);
// ::GstBuffer* gst_buffer_append_region (::GstBuffer* buf1, ::GstBuffer* buf2, gssize offset, gssize size);
Gst::Buffer base::BufferBase::append_region (Gst::Buffer buf2, gssize offset, gssize size) noexcept
{
  typedef ::GstBuffer* (*call_wrap_t) (::GstBuffer* buf1, ::GstBuffer* buf2, gssize offset, gssize size);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_append_region;
  auto size_to_c = size;
  auto offset_to_c = offset;
  auto buf2_to_c = gi::unwrap (buf2, gi::transfer_full, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstBuffer*) (gobj_()), (::GstBuffer*) (buf2_to_c), (gssize) (offset_to_c), (gssize) (size_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstBuffer* gst_buffer_copy_deep (const GstBuffer* buf);
// ::GstBuffer* gst_buffer_copy_deep (const ::GstBuffer* buf);
Gst::Buffer base::BufferBase::copy_deep () const noexcept
{
  typedef ::GstBuffer* (*call_wrap_t) (const ::GstBuffer* buf);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_copy_deep;
  auto _temp_ret = call_wrap_v ((const ::GstBuffer*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gst_buffer_copy_into (GstBuffer* dest, GstBuffer* src, GstBufferCopyFlags flags, gsize offset, gsize size);
// gboolean gst_buffer_copy_into (::GstBuffer* dest, ::GstBuffer* src, ::GstBufferCopyFlags flags, gsize offset, gsize size);
bool base::BufferBase::copy_into (Gst::Buffer src, Gst::BufferCopyFlags flags, gsize offset, gsize size) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstBuffer* dest, ::GstBuffer* src, ::GstBufferCopyFlags flags, gsize offset, gsize size);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_copy_into;
  auto size_to_c = size;
  auto offset_to_c = offset;
  auto flags_to_c = gi::unwrap (flags);
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstBuffer*) (gobj_()), (::GstBuffer*) (src_to_c), (::GstBufferCopyFlags) (flags_to_c), (gsize) (offset_to_c), (gsize) (size_to_c));
  return _temp_ret;
}

// GstBuffer* gst_buffer_copy_region (GstBuffer* parent, GstBufferCopyFlags flags, gsize offset, gsize size);
// ::GstBuffer* gst_buffer_copy_region (::GstBuffer* parent, ::GstBufferCopyFlags flags, gsize offset, gsize size);
Gst::Buffer base::BufferBase::copy_region (Gst::BufferCopyFlags flags, gsize offset, gsize size) noexcept
{
  typedef ::GstBuffer* (*call_wrap_t) (::GstBuffer* parent, ::GstBufferCopyFlags flags, gsize offset, gsize size);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_copy_region;
  auto size_to_c = size;
  auto offset_to_c = offset;
  auto flags_to_c = gi::unwrap (flags);
  auto _temp_ret = call_wrap_v ((::GstBuffer*) (gobj_()), (::GstBufferCopyFlags) (flags_to_c), (gsize) (offset_to_c), (gsize) (size_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gsize gst_buffer_extract (GstBuffer* buffer, gsize offset, gpointer dest, gsize size);
// gsize gst_buffer_extract (::GstBuffer* buffer, gsize offset, guint8* dest, gsize size);
gsize base::BufferBase::extract (gsize offset, guint8 * dest, gsize size) noexcept
{
  typedef gsize (*call_wrap_t) (::GstBuffer* buffer, gsize offset, guint8* dest, gsize size);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_extract;
  auto offset_to_c = offset;
  auto _temp_ret = call_wrap_v ((::GstBuffer*) (gobj_()), (gsize) (offset_to_c), (guint8*) (dest), (gsize) (size));
  return _temp_ret;
}

// void gst_buffer_extract_dup (GstBuffer* buffer, gsize offset, gsize size, gpointer* dest, gsize* dest_size);
// void gst_buffer_extract_dup (::GstBuffer* buffer, gsize offset, gsize size, guint8** dest, gsize* dest_size);
void base::BufferBase::extract_dup (gsize offset, gsize size, std::vector<guint8> & dest) noexcept
{
  typedef void (*call_wrap_t) (::GstBuffer* buffer, gsize offset, gsize size, guint8** dest, gsize* dest_size);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_extract_dup;
  typedef guint8 dest_cpptype;
  typedef traits::ctype<dest_cpptype>::type dest_ctype;
  dest_ctype *dest_o;
  gsize dest_size;
  auto size_to_c = size;
  auto offset_to_c = offset;
  call_wrap_v ((::GstBuffer*) (gobj_()), (gsize) (offset_to_c), (gsize) (size_to_c), (guint8**) ((guint8**) &dest_o), (gsize*) (&dest_size));
  dest.resize(dest_size);
  detail::wrap_array (dest_o, gi::transfer_full, dest_size, dest.data());
  g_free (dest_o);
}

// gsize gst_buffer_fill (GstBuffer* buffer, gsize offset, gconstpointer src, gsize size);
// gsize gst_buffer_fill (::GstBuffer* buffer, gsize offset, const guint8* src, gsize size);
gsize base::BufferBase::fill (gsize offset, guint8 * src, gsize size) noexcept
{
  typedef gsize (*call_wrap_t) (::GstBuffer* buffer, gsize offset, const guint8* src, gsize size);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_fill;
  auto src_i = detail::make_list_unwrap_range (src, size, false);
  auto src_w = unwrap (src_i, gi::transfer_none, direction_in);
  auto src_to_c = src_w.gobj_(false);
  auto offset_to_c = offset;
  auto _temp_ret = call_wrap_v ((::GstBuffer*) (gobj_()), (gsize) (offset_to_c), (const guint8*) (src_to_c), (gsize) (src_w.size()));
  return _temp_ret;
}

// gboolean gst_buffer_find_memory (GstBuffer* buffer, gsize offset, gsize size, guint* idx, guint* length, gsize* skip);
// gboolean gst_buffer_find_memory (::GstBuffer* buffer, gsize offset, gsize size, guint* idx, guint* length, gsize* skip);
bool base::BufferBase::find_memory (gsize offset, gsize size, guint & idx, guint & length, gsize & skip) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstBuffer* buffer, gsize offset, gsize size, guint* idx, guint* length, gsize* skip);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_find_memory;
  gsize skip_o {};
  guint length_o {};
  guint idx_o {};
  auto size_to_c = size;
  auto offset_to_c = offset;
  auto _temp_ret = call_wrap_v ((::GstBuffer*) (gobj_()), (gsize) (offset_to_c), (gsize) (size_to_c), (guint*) (&idx_o), (guint*) (&length_o), (gsize*) (&skip_o));
  skip = skip_o;
  length = length_o;
  idx = idx_o;
  return _temp_ret;
}
std::tuple<bool, guint, guint, gsize> base::BufferBase::find_memory (gsize offset, gsize size) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstBuffer* buffer, gsize offset, gsize size, guint* idx, guint* length, gsize* skip);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_find_memory;
  gsize skip_o {};
  guint length_o {};
  guint idx_o {};
  auto size_to_c = size;
  auto offset_to_c = offset;
  auto _temp_ret = call_wrap_v ((::GstBuffer*) (gobj_()), (gsize) (offset_to_c), (gsize) (size_to_c), (guint*) (&idx_o), (guint*) (&length_o), (gsize*) (&skip_o));
  return std::make_tuple (_temp_ret, idx_o, length_o, skip_o);
}

// gboolean gst_buffer_foreach_meta (GstBuffer* buffer, GstBufferForeachMetaFunc func, gpointer user_data);
// gboolean gst_buffer_foreach_meta (::GstBuffer* buffer,  func, void* user_data);
// SKIP; func type  not supported

// GstMemory* gst_buffer_get_all_memory (GstBuffer* buffer);
// ::GstMemory* gst_buffer_get_all_memory (::GstBuffer* buffer);
Gst::Memory base::BufferBase::get_all_memory () noexcept
{
  typedef ::GstMemory* (*call_wrap_t) (::GstBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_get_all_memory;
  auto _temp_ret = call_wrap_v ((::GstBuffer*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstCustomMeta* gst_buffer_get_custom_meta (GstBuffer* buffer, const gchar* name);
// ::GstCustomMeta* gst_buffer_get_custom_meta (::GstBuffer* buffer, const char* name);
Gst::CustomMeta base::BufferBase::get_custom_meta (const std::string & name) noexcept
{
  typedef ::GstCustomMeta* (*call_wrap_t) (::GstBuffer* buffer, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_get_custom_meta;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstBuffer*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GstBufferFlags gst_buffer_get_flags (GstBuffer* buffer);
// ::GstBufferFlags gst_buffer_get_flags (::GstBuffer* buffer);
Gst::BufferFlags base::BufferBase::get_flags () noexcept
{
  typedef ::GstBufferFlags (*call_wrap_t) (::GstBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_get_flags;
  auto _temp_ret = call_wrap_v ((::GstBuffer*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GstMemory* gst_buffer_get_memory (GstBuffer* buffer, guint idx);
// ::GstMemory* gst_buffer_get_memory (::GstBuffer* buffer, guint idx);
Gst::Memory base::BufferBase::get_memory (guint idx) noexcept
{
  typedef ::GstMemory* (*call_wrap_t) (::GstBuffer* buffer, guint idx);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_get_memory;
  auto idx_to_c = idx;
  auto _temp_ret = call_wrap_v ((::GstBuffer*) (gobj_()), (guint) (idx_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMemory* gst_buffer_get_memory_range (GstBuffer* buffer, guint idx, gint length);
// ::GstMemory* gst_buffer_get_memory_range (::GstBuffer* buffer, guint idx, gint length);
Gst::Memory base::BufferBase::get_memory_range (guint idx, gint length) noexcept
{
  typedef ::GstMemory* (*call_wrap_t) (::GstBuffer* buffer, guint idx, gint length);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_get_memory_range;
  auto length_to_c = length;
  auto idx_to_c = idx;
  auto _temp_ret = call_wrap_v ((::GstBuffer*) (gobj_()), (guint) (idx_to_c), (gint) (length_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMeta* gst_buffer_get_meta (GstBuffer* buffer, GType api);
// ::GstMeta* gst_buffer_get_meta (::GstBuffer* buffer, GType api);
Gst::Meta base::BufferBase::get_meta (GType api) noexcept
{
  typedef ::GstMeta* (*call_wrap_t) (::GstBuffer* buffer, GType api);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_get_meta;
  auto api_to_c = api;
  auto _temp_ret = call_wrap_v ((::GstBuffer*) (gobj_()), (GType) (api_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// guint gst_buffer_get_n_meta (GstBuffer* buffer, GType api_type);
// guint gst_buffer_get_n_meta (::GstBuffer* buffer, GType api_type);
guint base::BufferBase::get_n_meta (GType api_type) noexcept
{
  typedef guint (*call_wrap_t) (::GstBuffer* buffer, GType api_type);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_get_n_meta;
  auto api_type_to_c = api_type;
  auto _temp_ret = call_wrap_v ((::GstBuffer*) (gobj_()), (GType) (api_type_to_c));
  return _temp_ret;
}

// GstReferenceTimestampMeta* gst_buffer_get_reference_timestamp_meta (GstBuffer* buffer, GstCaps* reference);
// ::GstReferenceTimestampMeta* gst_buffer_get_reference_timestamp_meta (::GstBuffer* buffer, ::GstCaps* reference);
Gst::ReferenceTimestampMeta base::BufferBase::get_reference_timestamp_meta (Gst::Caps reference) noexcept
{
  typedef ::GstReferenceTimestampMeta* (*call_wrap_t) (::GstBuffer* buffer, ::GstCaps* reference);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_get_reference_timestamp_meta;
  auto reference_to_c = gi::unwrap (reference, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstBuffer*) (gobj_()), (::GstCaps*) (reference_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gst::ReferenceTimestampMeta base::BufferBase::get_reference_timestamp_meta () noexcept
{
  typedef ::GstReferenceTimestampMeta* (*call_wrap_t) (::GstBuffer* buffer, ::GstCaps* reference);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_get_reference_timestamp_meta;
  auto reference_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstBuffer*) (gobj_()), (::GstCaps*) (reference_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gsize gst_buffer_get_size (GstBuffer* buffer);
// gsize gst_buffer_get_size (::GstBuffer* buffer);
gsize base::BufferBase::get_size () noexcept
{
  typedef gsize (*call_wrap_t) (::GstBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_get_size;
  auto _temp_ret = call_wrap_v ((::GstBuffer*) (gobj_()));
  return _temp_ret;
}

// gsize gst_buffer_get_sizes (GstBuffer* buffer, gsize* offset, gsize* maxsize);
// gsize gst_buffer_get_sizes (::GstBuffer* buffer, gsize* offset, gsize* maxsize);
gsize base::BufferBase::get_sizes (gsize * offset, gsize * maxsize) noexcept
{
  typedef gsize (*call_wrap_t) (::GstBuffer* buffer, gsize* offset, gsize* maxsize);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_get_sizes;
  gsize maxsize_o {};
  gsize offset_o {};
  auto _temp_ret = call_wrap_v ((::GstBuffer*) (gobj_()), (gsize*) (offset ? &offset_o : nullptr), (gsize*) (maxsize ? &maxsize_o : nullptr));
  if (maxsize) *maxsize = maxsize_o;
  if (offset) *offset = offset_o;
  return _temp_ret;
}
std::tuple<gsize, gsize, gsize> base::BufferBase::get_sizes () noexcept
{
  typedef gsize (*call_wrap_t) (::GstBuffer* buffer, gsize* offset, gsize* maxsize);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_get_sizes;
  gsize maxsize_o {};
  gsize offset_o {};
  auto _temp_ret = call_wrap_v ((::GstBuffer*) (gobj_()), (gsize*) (&offset_o), (gsize*) (&maxsize_o));
  return std::make_tuple (_temp_ret, offset_o, maxsize_o);
}

// gsize gst_buffer_get_sizes_range (GstBuffer* buffer, guint idx, gint length, gsize* offset, gsize* maxsize);
// gsize gst_buffer_get_sizes_range (::GstBuffer* buffer, guint idx, gint length, gsize* offset, gsize* maxsize);
gsize base::BufferBase::get_sizes_range (guint idx, gint length, gsize * offset, gsize * maxsize) noexcept
{
  typedef gsize (*call_wrap_t) (::GstBuffer* buffer, guint idx, gint length, gsize* offset, gsize* maxsize);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_get_sizes_range;
  gsize maxsize_o {};
  gsize offset_o {};
  auto length_to_c = length;
  auto idx_to_c = idx;
  auto _temp_ret = call_wrap_v ((::GstBuffer*) (gobj_()), (guint) (idx_to_c), (gint) (length_to_c), (gsize*) (offset ? &offset_o : nullptr), (gsize*) (maxsize ? &maxsize_o : nullptr));
  if (maxsize) *maxsize = maxsize_o;
  if (offset) *offset = offset_o;
  return _temp_ret;
}
std::tuple<gsize, gsize, gsize> base::BufferBase::get_sizes_range (guint idx, gint length) noexcept
{
  typedef gsize (*call_wrap_t) (::GstBuffer* buffer, guint idx, gint length, gsize* offset, gsize* maxsize);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_get_sizes_range;
  gsize maxsize_o {};
  gsize offset_o {};
  auto length_to_c = length;
  auto idx_to_c = idx;
  auto _temp_ret = call_wrap_v ((::GstBuffer*) (gobj_()), (guint) (idx_to_c), (gint) (length_to_c), (gsize*) (&offset_o), (gsize*) (&maxsize_o));
  return std::make_tuple (_temp_ret, offset_o, maxsize_o);
}

// gboolean gst_buffer_has_flags (GstBuffer* buffer, GstBufferFlags flags);
// gboolean gst_buffer_has_flags (::GstBuffer* buffer, ::GstBufferFlags flags);
bool base::BufferBase::has_flags (Gst::BufferFlags flags) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstBuffer* buffer, ::GstBufferFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_has_flags;
  auto flags_to_c = gi::unwrap (flags);
  auto _temp_ret = call_wrap_v ((::GstBuffer*) (gobj_()), (::GstBufferFlags) (flags_to_c));
  return _temp_ret;
}

// void gst_buffer_insert_memory (GstBuffer* buffer, gint idx, GstMemory* mem);
// void gst_buffer_insert_memory (::GstBuffer* buffer, gint idx, ::GstMemory* mem);
void base::BufferBase::insert_memory (gint idx, Gst::Memory mem) noexcept
{
  typedef void (*call_wrap_t) (::GstBuffer* buffer, gint idx, ::GstMemory* mem);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_insert_memory;
  auto mem_to_c = gi::unwrap (mem, gi::transfer_full, gi::direction_in);
  auto idx_to_c = idx;
  call_wrap_v ((::GstBuffer*) (gobj_()), (gint) (idx_to_c), (::GstMemory*) (mem_to_c));
}

// gboolean gst_buffer_is_all_memory_writable (GstBuffer* buffer);
// gboolean gst_buffer_is_all_memory_writable (::GstBuffer* buffer);
bool base::BufferBase::is_all_memory_writable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GstBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_is_all_memory_writable;
  auto _temp_ret = call_wrap_v ((::GstBuffer*) (gobj_()));
  return _temp_ret;
}

// gboolean gst_buffer_is_memory_range_writable (GstBuffer* buffer, guint idx, gint length);
// gboolean gst_buffer_is_memory_range_writable (::GstBuffer* buffer, guint idx, gint length);
bool base::BufferBase::is_memory_range_writable (guint idx, gint length) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstBuffer* buffer, guint idx, gint length);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_is_memory_range_writable;
  auto length_to_c = length;
  auto idx_to_c = idx;
  auto _temp_ret = call_wrap_v ((::GstBuffer*) (gobj_()), (guint) (idx_to_c), (gint) (length_to_c));
  return _temp_ret;
}

// GstMeta* gst_buffer_iterate_meta (GstBuffer* buffer, gpointer* state);
// ::GstMeta* gst_buffer_iterate_meta (::GstBuffer* buffer, void* state);
// IGNORE; not introspectable, inconsistent out state pointer depth (2 vs 1)

// GstMeta* gst_buffer_iterate_meta_filtered (GstBuffer* buffer, gpointer* state, GType meta_api_type);
// ::GstMeta* gst_buffer_iterate_meta_filtered (::GstBuffer* buffer, void* state, GType meta_api_type);
// IGNORE; not introspectable, inconsistent out state pointer depth (2 vs 1)

// gboolean gst_buffer_map (GstBuffer* buffer, GstMapInfo* info, GstMapFlags flags);
// gboolean gst_buffer_map (::GstBuffer* buffer, ::GstMapInfo* info, ::GstMapFlags flags);
bool base::BufferBase::map (Gst::MapInfo & info, Gst::MapFlags flags) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstBuffer* buffer, ::GstMapInfo* info, ::GstMapFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_map;
  auto flags_to_c = gi::unwrap (flags);
  traits::unset_wrapper<::GstMapInfo>::type info_c;
  auto _temp_ret = call_wrap_v ((::GstBuffer*) (gobj_()), (::GstMapInfo*) ((::GstMapInfo*) &info_c), (::GstMapFlags) (flags_to_c));
  info = gi::wrap ((::GstMapInfo*) &info_c, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Gst::MapInfo> base::BufferBase::map (Gst::MapFlags flags) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstBuffer* buffer, ::GstMapInfo* info, ::GstMapFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_map;
  auto flags_to_c = gi::unwrap (flags);
  traits::unset_wrapper<::GstMapInfo>::type info_c;
  auto _temp_ret = call_wrap_v ((::GstBuffer*) (gobj_()), (::GstMapInfo*) ((::GstMapInfo*) &info_c), (::GstMapFlags) (flags_to_c));
  return std::make_tuple (_temp_ret, gi::wrap ((::GstMapInfo*) &info_c, gi::transfer_none, gi::direction_out));
}

// gboolean gst_buffer_map_range (GstBuffer* buffer, guint idx, gint length, GstMapInfo* info, GstMapFlags flags);
// gboolean gst_buffer_map_range (::GstBuffer* buffer, guint idx, gint length, ::GstMapInfo* info, ::GstMapFlags flags);
bool base::BufferBase::map_range (guint idx, gint length, Gst::MapInfo & info, Gst::MapFlags flags) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstBuffer* buffer, guint idx, gint length, ::GstMapInfo* info, ::GstMapFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_map_range;
  auto flags_to_c = gi::unwrap (flags);
  traits::unset_wrapper<::GstMapInfo>::type info_c;
  auto length_to_c = length;
  auto idx_to_c = idx;
  auto _temp_ret = call_wrap_v ((::GstBuffer*) (gobj_()), (guint) (idx_to_c), (gint) (length_to_c), (::GstMapInfo*) ((::GstMapInfo*) &info_c), (::GstMapFlags) (flags_to_c));
  info = gi::wrap ((::GstMapInfo*) &info_c, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Gst::MapInfo> base::BufferBase::map_range (guint idx, gint length, Gst::MapFlags flags) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstBuffer* buffer, guint idx, gint length, ::GstMapInfo* info, ::GstMapFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_map_range;
  auto flags_to_c = gi::unwrap (flags);
  traits::unset_wrapper<::GstMapInfo>::type info_c;
  auto length_to_c = length;
  auto idx_to_c = idx;
  auto _temp_ret = call_wrap_v ((::GstBuffer*) (gobj_()), (guint) (idx_to_c), (gint) (length_to_c), (::GstMapInfo*) ((::GstMapInfo*) &info_c), (::GstMapFlags) (flags_to_c));
  return std::make_tuple (_temp_ret, gi::wrap ((::GstMapInfo*) &info_c, gi::transfer_none, gi::direction_out));
}

// gint gst_buffer_memcmp (GstBuffer* buffer, gsize offset, gconstpointer mem, gsize size);
// gint gst_buffer_memcmp (::GstBuffer* buffer, gsize offset, const guint8* mem, gsize size);
gint base::BufferBase::memcmp (gsize offset, guint8 * mem, gsize size) noexcept
{
  typedef gint (*call_wrap_t) (::GstBuffer* buffer, gsize offset, const guint8* mem, gsize size);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_memcmp;
  auto mem_i = detail::make_list_unwrap_range (mem, size, false);
  auto mem_w = unwrap (mem_i, gi::transfer_none, direction_in);
  auto mem_to_c = mem_w.gobj_(false);
  auto offset_to_c = offset;
  auto _temp_ret = call_wrap_v ((::GstBuffer*) (gobj_()), (gsize) (offset_to_c), (const guint8*) (mem_to_c), (gsize) (mem_w.size()));
  return _temp_ret;
}

// gsize gst_buffer_memset (GstBuffer* buffer, gsize offset, guint8 val, gsize size);
// gsize gst_buffer_memset (::GstBuffer* buffer, gsize offset, guint8 val, gsize size);
gsize base::BufferBase::memset (gsize offset, guint8 val, gsize size) noexcept
{
  typedef gsize (*call_wrap_t) (::GstBuffer* buffer, gsize offset, guint8 val, gsize size);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_memset;
  auto size_to_c = size;
  auto val_to_c = val;
  auto offset_to_c = offset;
  auto _temp_ret = call_wrap_v ((::GstBuffer*) (gobj_()), (gsize) (offset_to_c), (guint8) (val_to_c), (gsize) (size_to_c));
  return _temp_ret;
}

// guint gst_buffer_n_memory (GstBuffer* buffer);
// guint gst_buffer_n_memory (::GstBuffer* buffer);
guint base::BufferBase::n_memory () noexcept
{
  typedef guint (*call_wrap_t) (::GstBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_n_memory;
  auto _temp_ret = call_wrap_v ((::GstBuffer*) (gobj_()));
  return _temp_ret;
}

// GstMemory* gst_buffer_peek_memory (GstBuffer* buffer, guint idx);
// ::GstMemory* gst_buffer_peek_memory (::GstBuffer* buffer, guint idx);
Gst::Memory base::BufferBase::peek_memory (guint idx) noexcept
{
  typedef ::GstMemory* (*call_wrap_t) (::GstBuffer* buffer, guint idx);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_peek_memory;
  auto idx_to_c = idx;
  auto _temp_ret = call_wrap_v ((::GstBuffer*) (gobj_()), (guint) (idx_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gst_buffer_prepend_memory (GstBuffer* buffer, GstMemory* mem);
// void gst_buffer_prepend_memory (::GstBuffer* buffer, ::GstMemory* mem);
void base::BufferBase::prepend_memory (Gst::Memory mem) noexcept
{
  typedef void (*call_wrap_t) (::GstBuffer* buffer, ::GstMemory* mem);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_prepend_memory;
  auto mem_to_c = gi::unwrap (mem, gi::transfer_full, gi::direction_in);
  call_wrap_v ((::GstBuffer*) (gobj_()), (::GstMemory*) (mem_to_c));
}

// void gst_buffer_remove_all_memory (GstBuffer* buffer);
// void gst_buffer_remove_all_memory (::GstBuffer* buffer);
void base::BufferBase::remove_all_memory () noexcept
{
  typedef void (*call_wrap_t) (::GstBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_remove_all_memory;
  call_wrap_v ((::GstBuffer*) (gobj_()));
}

// void gst_buffer_remove_memory (GstBuffer* buffer, guint idx);
// void gst_buffer_remove_memory (::GstBuffer* buffer, guint idx);
void base::BufferBase::remove_memory (guint idx) noexcept
{
  typedef void (*call_wrap_t) (::GstBuffer* buffer, guint idx);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_remove_memory;
  auto idx_to_c = idx;
  call_wrap_v ((::GstBuffer*) (gobj_()), (guint) (idx_to_c));
}

// void gst_buffer_remove_memory_range (GstBuffer* buffer, guint idx, gint length);
// void gst_buffer_remove_memory_range (::GstBuffer* buffer, guint idx, gint length);
void base::BufferBase::remove_memory_range (guint idx, gint length) noexcept
{
  typedef void (*call_wrap_t) (::GstBuffer* buffer, guint idx, gint length);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_remove_memory_range;
  auto length_to_c = length;
  auto idx_to_c = idx;
  call_wrap_v ((::GstBuffer*) (gobj_()), (guint) (idx_to_c), (gint) (length_to_c));
}

// gboolean gst_buffer_remove_meta (GstBuffer* buffer, GstMeta* meta);
// gboolean gst_buffer_remove_meta (::GstBuffer* buffer, ::GstMeta* meta);
bool base::BufferBase::remove_meta (Gst::Meta meta) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstBuffer* buffer, ::GstMeta* meta);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_remove_meta;
  auto meta_to_c = gi::unwrap (meta, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstBuffer*) (gobj_()), (::GstMeta*) (meta_to_c));
  return _temp_ret;
}

// void gst_buffer_replace_all_memory (GstBuffer* buffer, GstMemory* mem);
// void gst_buffer_replace_all_memory (::GstBuffer* buffer, ::GstMemory* mem);
void base::BufferBase::replace_all_memory (Gst::Memory mem) noexcept
{
  typedef void (*call_wrap_t) (::GstBuffer* buffer, ::GstMemory* mem);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_replace_all_memory;
  auto mem_to_c = gi::unwrap (mem, gi::transfer_full, gi::direction_in);
  call_wrap_v ((::GstBuffer*) (gobj_()), (::GstMemory*) (mem_to_c));
}

// void gst_buffer_replace_memory (GstBuffer* buffer, guint idx, GstMemory* mem);
// void gst_buffer_replace_memory (::GstBuffer* buffer, guint idx, ::GstMemory* mem);
void base::BufferBase::replace_memory (guint idx, Gst::Memory mem) noexcept
{
  typedef void (*call_wrap_t) (::GstBuffer* buffer, guint idx, ::GstMemory* mem);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_replace_memory;
  auto mem_to_c = gi::unwrap (mem, gi::transfer_full, gi::direction_in);
  auto idx_to_c = idx;
  call_wrap_v ((::GstBuffer*) (gobj_()), (guint) (idx_to_c), (::GstMemory*) (mem_to_c));
}

// void gst_buffer_replace_memory_range (GstBuffer* buffer, guint idx, gint length, GstMemory* mem);
// void gst_buffer_replace_memory_range (::GstBuffer* buffer, guint idx, gint length, ::GstMemory* mem);
void base::BufferBase::replace_memory_range (guint idx, gint length, Gst::Memory mem) noexcept
{
  typedef void (*call_wrap_t) (::GstBuffer* buffer, guint idx, gint length, ::GstMemory* mem);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_replace_memory_range;
  auto mem_to_c = gi::unwrap (mem, gi::transfer_full, gi::direction_in);
  auto length_to_c = length;
  auto idx_to_c = idx;
  call_wrap_v ((::GstBuffer*) (gobj_()), (guint) (idx_to_c), (gint) (length_to_c), (::GstMemory*) (mem_to_c));
}

// void gst_buffer_resize (GstBuffer* buffer, gssize offset, gssize size);
// void gst_buffer_resize (::GstBuffer* buffer, gssize offset, gssize size);
void base::BufferBase::resize (gssize offset, gssize size) noexcept
{
  typedef void (*call_wrap_t) (::GstBuffer* buffer, gssize offset, gssize size);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_resize;
  auto size_to_c = size;
  auto offset_to_c = offset;
  call_wrap_v ((::GstBuffer*) (gobj_()), (gssize) (offset_to_c), (gssize) (size_to_c));
}

// gboolean gst_buffer_resize_range (GstBuffer* buffer, guint idx, gint length, gssize offset, gssize size);
// gboolean gst_buffer_resize_range (::GstBuffer* buffer, guint idx, gint length, gssize offset, gssize size);
bool base::BufferBase::resize_range (guint idx, gint length, gssize offset, gssize size) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstBuffer* buffer, guint idx, gint length, gssize offset, gssize size);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_resize_range;
  auto size_to_c = size;
  auto offset_to_c = offset;
  auto length_to_c = length;
  auto idx_to_c = idx;
  auto _temp_ret = call_wrap_v ((::GstBuffer*) (gobj_()), (guint) (idx_to_c), (gint) (length_to_c), (gssize) (offset_to_c), (gssize) (size_to_c));
  return _temp_ret;
}

// gboolean gst_buffer_set_flags (GstBuffer* buffer, GstBufferFlags flags);
// gboolean gst_buffer_set_flags (::GstBuffer* buffer, ::GstBufferFlags flags);
bool base::BufferBase::set_flags (Gst::BufferFlags flags) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstBuffer* buffer, ::GstBufferFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_set_flags;
  auto flags_to_c = gi::unwrap (flags);
  auto _temp_ret = call_wrap_v ((::GstBuffer*) (gobj_()), (::GstBufferFlags) (flags_to_c));
  return _temp_ret;
}

// void gst_buffer_set_size (GstBuffer* buffer, gssize size);
// void gst_buffer_set_size (::GstBuffer* buffer, gssize size);
void base::BufferBase::set_size (gssize size) noexcept
{
  typedef void (*call_wrap_t) (::GstBuffer* buffer, gssize size);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_set_size;
  auto size_to_c = size;
  call_wrap_v ((::GstBuffer*) (gobj_()), (gssize) (size_to_c));
}

// void gst_buffer_unmap (GstBuffer* buffer, GstMapInfo* info);
// void gst_buffer_unmap (::GstBuffer* buffer, ::GstMapInfo* info);
void base::BufferBase::unmap (Gst::MapInfo info) noexcept
{
  typedef void (*call_wrap_t) (::GstBuffer* buffer, ::GstMapInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_unmap;
  auto info_to_c = gi::unwrap (info, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstBuffer*) (gobj_()), (::GstMapInfo*) (info_to_c));
}

// gboolean gst_buffer_unset_flags (GstBuffer* buffer, GstBufferFlags flags);
// gboolean gst_buffer_unset_flags (::GstBuffer* buffer, ::GstBufferFlags flags);
bool base::BufferBase::unset_flags (Gst::BufferFlags flags) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstBuffer* buffer, ::GstBufferFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_unset_flags;
  auto flags_to_c = gi::unwrap (flags);
  auto _temp_ret = call_wrap_v ((::GstBuffer*) (gobj_()), (::GstBufferFlags) (flags_to_c));
  return _temp_ret;
}

// guint gst_buffer_get_max_memory ();
// guint gst_buffer_get_max_memory ();
guint base::BufferBase::get_max_memory () noexcept
{
  typedef guint (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_get_max_memory;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/buffer_extra_def_impl.hpp>)
#include <gst/buffer_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/buffer_extra_impl.hpp>)
#include <gst/buffer_extra_impl.hpp>
#endif
#endif

#endif
