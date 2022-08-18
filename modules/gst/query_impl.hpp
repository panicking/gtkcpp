// AUTO-GENERATED

#ifndef _GI_GST_QUERY_IMPL_HPP_
#define _GI_GST_QUERY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

static ::GstQueryType _field_type_get (const ::GstQuery* obj) { return (::GstQueryType) obj->type; }
// ::GstQueryType Query::type (const ::GstQuery* obj);
// ::GstQueryType Query::type (const ::GstQuery* obj);
Gst::QueryType base::QueryBase::type_ () const noexcept
{
  typedef ::GstQueryType (*call_wrap_t) (const ::GstQuery* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_get;
  auto _temp_ret = call_wrap_v ((const ::GstQuery*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_type_set (::GstQuery* obj, ::GstQueryType _value) { obj->type = (decltype(obj->type)) _value; }
//  Query::type (::GstQuery* obj, ::GstQueryType _value);
// void Query::type (::GstQuery* obj, ::GstQueryType _value);
void base::QueryBase::type_ (Gst::QueryType _value) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* obj, ::GstQueryType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GstQuery*) (gobj_()), (::GstQueryType) (_value_to_c));
}

// GstQuery* gst_query_new_accept_caps (GstCaps* caps);
// ::GstQuery* gst_query_new_accept_caps (::GstCaps* caps);
Gst::Query base::QueryBase::new_accept_caps (Gst::Caps caps) noexcept
{
  typedef ::GstQuery* (*call_wrap_t) (::GstCaps* caps);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_new_accept_caps;
  auto caps_to_c = gi::unwrap (caps, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstCaps*) (caps_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstQuery* gst_query_new_allocation (GstCaps* caps, gboolean need_pool);
// ::GstQuery* gst_query_new_allocation (::GstCaps* caps, gboolean need_pool);
Gst::Query base::QueryBase::new_allocation (Gst::Caps caps, gboolean need_pool) noexcept
{
  typedef ::GstQuery* (*call_wrap_t) (::GstCaps* caps, gboolean need_pool);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_new_allocation;
  auto need_pool_to_c = need_pool;
  auto caps_to_c = gi::unwrap (caps, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstCaps*) (caps_to_c), (gboolean) (need_pool_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstQuery* gst_query_new_bitrate ();
// ::GstQuery* gst_query_new_bitrate ();
Gst::Query base::QueryBase::new_bitrate () noexcept
{
  typedef ::GstQuery* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_new_bitrate;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstQuery* gst_query_new_buffering (GstFormat format);
// ::GstQuery* gst_query_new_buffering (::GstFormat format);
Gst::Query base::QueryBase::new_buffering (Gst::Format format) noexcept
{
  typedef ::GstQuery* (*call_wrap_t) (::GstFormat format);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_new_buffering;
  auto format_to_c = gi::unwrap (format);
  auto _temp_ret = call_wrap_v ((::GstFormat) (format_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstQuery* gst_query_new_caps (GstCaps* filter);
// ::GstQuery* gst_query_new_caps (::GstCaps* filter);
Gst::Query base::QueryBase::new_caps (Gst::Caps filter) noexcept
{
  typedef ::GstQuery* (*call_wrap_t) (::GstCaps* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_new_caps;
  auto filter_to_c = gi::unwrap (filter, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstCaps*) (filter_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstQuery* gst_query_new_context (const gchar* context_type);
// ::GstQuery* gst_query_new_context (const char* context_type);
Gst::Query base::QueryBase::new_context (const std::string & context_type) noexcept
{
  typedef ::GstQuery* (*call_wrap_t) (const char* context_type);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_new_context;
  auto context_type_to_c = gi::unwrap (context_type, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (context_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstQuery* gst_query_new_convert (GstFormat src_format, gint64 value, GstFormat dest_format);
// ::GstQuery* gst_query_new_convert (::GstFormat src_format, gint64 value, ::GstFormat dest_format);
Gst::Query base::QueryBase::new_convert (Gst::Format src_format, gint64 value, Gst::Format dest_format) noexcept
{
  typedef ::GstQuery* (*call_wrap_t) (::GstFormat src_format, gint64 value, ::GstFormat dest_format);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_new_convert;
  auto dest_format_to_c = gi::unwrap (dest_format);
  auto value_to_c = value;
  auto src_format_to_c = gi::unwrap (src_format);
  auto _temp_ret = call_wrap_v ((::GstFormat) (src_format_to_c), (gint64) (value_to_c), (::GstFormat) (dest_format_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstQuery* gst_query_new_custom (GstQueryType type, GstStructure* structure);
// ::GstQuery* gst_query_new_custom (::GstQueryType type, ::GstStructure* structure);
Gst::Query base::QueryBase::new_custom (Gst::QueryType type, Gst::Structure structure) noexcept
{
  typedef ::GstQuery* (*call_wrap_t) (::GstQueryType type, ::GstStructure* structure);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_new_custom;
  auto structure_to_c = gi::unwrap (structure, gi::transfer_full, gi::direction_in);
  auto type_to_c = gi::unwrap (type);
  auto _temp_ret = call_wrap_v ((::GstQueryType) (type_to_c), (::GstStructure*) (structure_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::Query base::QueryBase::new_custom (Gst::QueryType type) noexcept
{
  typedef ::GstQuery* (*call_wrap_t) (::GstQueryType type, ::GstStructure* structure);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_new_custom;
  auto structure_to_c = nullptr;
  auto type_to_c = gi::unwrap (type);
  auto _temp_ret = call_wrap_v ((::GstQueryType) (type_to_c), (::GstStructure*) (structure_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstQuery* gst_query_new_drain ();
// ::GstQuery* gst_query_new_drain ();
Gst::Query base::QueryBase::new_drain () noexcept
{
  typedef ::GstQuery* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_new_drain;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstQuery* gst_query_new_duration (GstFormat format);
// ::GstQuery* gst_query_new_duration (::GstFormat format);
Gst::Query base::QueryBase::new_duration (Gst::Format format) noexcept
{
  typedef ::GstQuery* (*call_wrap_t) (::GstFormat format);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_new_duration;
  auto format_to_c = gi::unwrap (format);
  auto _temp_ret = call_wrap_v ((::GstFormat) (format_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstQuery* gst_query_new_formats ();
// ::GstQuery* gst_query_new_formats ();
Gst::Query base::QueryBase::new_formats () noexcept
{
  typedef ::GstQuery* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_new_formats;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstQuery* gst_query_new_latency ();
// ::GstQuery* gst_query_new_latency ();
Gst::Query base::QueryBase::new_latency () noexcept
{
  typedef ::GstQuery* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_new_latency;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstQuery* gst_query_new_position (GstFormat format);
// ::GstQuery* gst_query_new_position (::GstFormat format);
Gst::Query base::QueryBase::new_position (Gst::Format format) noexcept
{
  typedef ::GstQuery* (*call_wrap_t) (::GstFormat format);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_new_position;
  auto format_to_c = gi::unwrap (format);
  auto _temp_ret = call_wrap_v ((::GstFormat) (format_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstQuery* gst_query_new_scheduling ();
// ::GstQuery* gst_query_new_scheduling ();
Gst::Query base::QueryBase::new_scheduling () noexcept
{
  typedef ::GstQuery* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_new_scheduling;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstQuery* gst_query_new_seeking (GstFormat format);
// ::GstQuery* gst_query_new_seeking (::GstFormat format);
Gst::Query base::QueryBase::new_seeking (Gst::Format format) noexcept
{
  typedef ::GstQuery* (*call_wrap_t) (::GstFormat format);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_new_seeking;
  auto format_to_c = gi::unwrap (format);
  auto _temp_ret = call_wrap_v ((::GstFormat) (format_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstQuery* gst_query_new_segment (GstFormat format);
// ::GstQuery* gst_query_new_segment (::GstFormat format);
Gst::Query base::QueryBase::new_segment (Gst::Format format) noexcept
{
  typedef ::GstQuery* (*call_wrap_t) (::GstFormat format);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_new_segment;
  auto format_to_c = gi::unwrap (format);
  auto _temp_ret = call_wrap_v ((::GstFormat) (format_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstQuery* gst_query_new_uri ();
// ::GstQuery* gst_query_new_uri ();
Gst::Query base::QueryBase::new_uri () noexcept
{
  typedef ::GstQuery* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_new_uri;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gst_query_add_allocation_meta (GstQuery* query, GType api, const GstStructure* params);
// void gst_query_add_allocation_meta (::GstQuery* query, GType api, const ::GstStructure* params);
void base::QueryBase::add_allocation_meta (GType api, const Gst::Structure & params) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, GType api, const ::GstStructure* params);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_add_allocation_meta;
  auto params_to_c = gi::unwrap (params, gi::transfer_none, gi::direction_in);
  auto api_to_c = api;
  call_wrap_v ((::GstQuery*) (gobj_()), (GType) (api_to_c), (const ::GstStructure*) (params_to_c));
}
void base::QueryBase::add_allocation_meta (GType api) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, GType api, const ::GstStructure* params);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_add_allocation_meta;
  auto params_to_c = nullptr;
  auto api_to_c = api;
  call_wrap_v ((::GstQuery*) (gobj_()), (GType) (api_to_c), (const ::GstStructure*) (params_to_c));
}

// void gst_query_add_allocation_param (GstQuery* query, GstAllocator* allocator, const GstAllocationParams* params);
// void gst_query_add_allocation_param (::GstQuery* query, ::GstAllocator* allocator, const ::GstAllocationParams* params);
void base::QueryBase::add_allocation_param (Gst::Allocator allocator, const Gst::AllocationParams & params) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, ::GstAllocator* allocator, const ::GstAllocationParams* params);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_add_allocation_param;
  auto params_to_c = gi::unwrap (params, gi::transfer_none, gi::direction_in);
  auto allocator_to_c = gi::unwrap (allocator, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstQuery*) (gobj_()), (::GstAllocator*) (allocator_to_c), (const ::GstAllocationParams*) (params_to_c));
}
void base::QueryBase::add_allocation_param () noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, ::GstAllocator* allocator, const ::GstAllocationParams* params);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_add_allocation_param;
  auto params_to_c = nullptr;
  auto allocator_to_c = nullptr;
  call_wrap_v ((::GstQuery*) (gobj_()), (::GstAllocator*) (allocator_to_c), (const ::GstAllocationParams*) (params_to_c));
}

// void gst_query_add_allocation_pool (GstQuery* query, GstBufferPool* pool, guint size, guint min_buffers, guint max_buffers);
// void gst_query_add_allocation_pool (::GstQuery* query, ::GstBufferPool* pool, guint size, guint min_buffers, guint max_buffers);
void base::QueryBase::add_allocation_pool (Gst::BufferPool pool, guint size, guint min_buffers, guint max_buffers) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, ::GstBufferPool* pool, guint size, guint min_buffers, guint max_buffers);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_add_allocation_pool;
  auto max_buffers_to_c = max_buffers;
  auto min_buffers_to_c = min_buffers;
  auto size_to_c = size;
  auto pool_to_c = gi::unwrap (pool, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstQuery*) (gobj_()), (::GstBufferPool*) (pool_to_c), (guint) (size_to_c), (guint) (min_buffers_to_c), (guint) (max_buffers_to_c));
}
void base::QueryBase::add_allocation_pool (guint size, guint min_buffers, guint max_buffers) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, ::GstBufferPool* pool, guint size, guint min_buffers, guint max_buffers);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_add_allocation_pool;
  auto max_buffers_to_c = max_buffers;
  auto min_buffers_to_c = min_buffers;
  auto size_to_c = size;
  auto pool_to_c = nullptr;
  call_wrap_v ((::GstQuery*) (gobj_()), (::GstBufferPool*) (pool_to_c), (guint) (size_to_c), (guint) (min_buffers_to_c), (guint) (max_buffers_to_c));
}

// gboolean gst_query_add_buffering_range (GstQuery* query, gint64 start, gint64 stop);
// gboolean gst_query_add_buffering_range (::GstQuery* query, gint64 start, gint64 stop);
bool base::QueryBase::add_buffering_range (gint64 start, gint64 stop) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstQuery* query, gint64 start, gint64 stop);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_add_buffering_range;
  auto stop_to_c = stop;
  auto start_to_c = start;
  auto _temp_ret = call_wrap_v ((::GstQuery*) (gobj_()), (gint64) (start_to_c), (gint64) (stop_to_c));
  return _temp_ret;
}

// void gst_query_add_scheduling_mode (GstQuery* query, GstPadMode mode);
// void gst_query_add_scheduling_mode (::GstQuery* query, ::GstPadMode mode);
void base::QueryBase::add_scheduling_mode (Gst::PadMode mode) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, ::GstPadMode mode);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_add_scheduling_mode;
  auto mode_to_c = gi::unwrap (mode);
  call_wrap_v ((::GstQuery*) (gobj_()), (::GstPadMode) (mode_to_c));
}

// gboolean gst_query_find_allocation_meta (GstQuery* query, GType api, guint* index);
// gboolean gst_query_find_allocation_meta (::GstQuery* query, GType api, guint* index);
bool base::QueryBase::find_allocation_meta (GType api, guint * index) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstQuery* query, GType api, guint* index);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_find_allocation_meta;
  guint index_o {};
  auto api_to_c = api;
  auto _temp_ret = call_wrap_v ((::GstQuery*) (gobj_()), (GType) (api_to_c), (guint*) (index ? &index_o : nullptr));
  if (index) *index = index_o;
  return _temp_ret;
}
std::tuple<bool, guint> base::QueryBase::find_allocation_meta (GType api) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstQuery* query, GType api, guint* index);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_find_allocation_meta;
  guint index_o {};
  auto api_to_c = api;
  auto _temp_ret = call_wrap_v ((::GstQuery*) (gobj_()), (GType) (api_to_c), (guint*) (&index_o));
  return std::make_tuple (_temp_ret, index_o);
}

// guint gst_query_get_n_allocation_metas (GstQuery* query);
// guint gst_query_get_n_allocation_metas (::GstQuery* query);
guint base::QueryBase::get_n_allocation_metas () noexcept
{
  typedef guint (*call_wrap_t) (::GstQuery* query);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_get_n_allocation_metas;
  auto _temp_ret = call_wrap_v ((::GstQuery*) (gobj_()));
  return _temp_ret;
}

// guint gst_query_get_n_allocation_params (GstQuery* query);
// guint gst_query_get_n_allocation_params (::GstQuery* query);
guint base::QueryBase::get_n_allocation_params () noexcept
{
  typedef guint (*call_wrap_t) (::GstQuery* query);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_get_n_allocation_params;
  auto _temp_ret = call_wrap_v ((::GstQuery*) (gobj_()));
  return _temp_ret;
}

// guint gst_query_get_n_allocation_pools (GstQuery* query);
// guint gst_query_get_n_allocation_pools (::GstQuery* query);
guint base::QueryBase::get_n_allocation_pools () noexcept
{
  typedef guint (*call_wrap_t) (::GstQuery* query);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_get_n_allocation_pools;
  auto _temp_ret = call_wrap_v ((::GstQuery*) (gobj_()));
  return _temp_ret;
}

// guint gst_query_get_n_buffering_ranges (GstQuery* query);
// guint gst_query_get_n_buffering_ranges (::GstQuery* query);
guint base::QueryBase::get_n_buffering_ranges () noexcept
{
  typedef guint (*call_wrap_t) (::GstQuery* query);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_get_n_buffering_ranges;
  auto _temp_ret = call_wrap_v ((::GstQuery*) (gobj_()));
  return _temp_ret;
}

// guint gst_query_get_n_scheduling_modes (GstQuery* query);
// guint gst_query_get_n_scheduling_modes (::GstQuery* query);
guint base::QueryBase::get_n_scheduling_modes () noexcept
{
  typedef guint (*call_wrap_t) (::GstQuery* query);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_get_n_scheduling_modes;
  auto _temp_ret = call_wrap_v ((::GstQuery*) (gobj_()));
  return _temp_ret;
}

// const GstStructure* gst_query_get_structure (GstQuery* query);
// const ::GstStructure* gst_query_get_structure (::GstQuery* query);
Gst::Structure base::QueryBase::get_structure () noexcept
{
  typedef const ::GstStructure* (*call_wrap_t) (::GstQuery* query);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_get_structure;
  auto _temp_ret = call_wrap_v ((::GstQuery*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gst_query_has_scheduling_mode (GstQuery* query, GstPadMode mode);
// gboolean gst_query_has_scheduling_mode (::GstQuery* query, ::GstPadMode mode);
bool base::QueryBase::has_scheduling_mode (Gst::PadMode mode) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstQuery* query, ::GstPadMode mode);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_has_scheduling_mode;
  auto mode_to_c = gi::unwrap (mode);
  auto _temp_ret = call_wrap_v ((::GstQuery*) (gobj_()), (::GstPadMode) (mode_to_c));
  return _temp_ret;
}

// gboolean gst_query_has_scheduling_mode_with_flags (GstQuery* query, GstPadMode mode, GstSchedulingFlags flags);
// gboolean gst_query_has_scheduling_mode_with_flags (::GstQuery* query, ::GstPadMode mode, ::GstSchedulingFlags flags);
bool base::QueryBase::has_scheduling_mode_with_flags (Gst::PadMode mode, Gst::SchedulingFlags flags) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstQuery* query, ::GstPadMode mode, ::GstSchedulingFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_has_scheduling_mode_with_flags;
  auto flags_to_c = gi::unwrap (flags);
  auto mode_to_c = gi::unwrap (mode);
  auto _temp_ret = call_wrap_v ((::GstQuery*) (gobj_()), (::GstPadMode) (mode_to_c), (::GstSchedulingFlags) (flags_to_c));
  return _temp_ret;
}

// void gst_query_parse_accept_caps (GstQuery* query, GstCaps** caps);
// void gst_query_parse_accept_caps (::GstQuery* query, ::GstCaps** caps);
void base::QueryBase::parse_accept_caps (Gst::Caps & caps) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, ::GstCaps** caps);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_accept_caps;
  ::GstCaps* caps_o {};
  call_wrap_v ((::GstQuery*) (gobj_()), (::GstCaps**) (&caps_o));
  caps = gi::wrap (caps_o, gi::transfer_none, gi::direction_out);
}
Gst::Caps base::QueryBase::parse_accept_caps () noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, ::GstCaps** caps);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_accept_caps;
  ::GstCaps* caps_o {};
  call_wrap_v ((::GstQuery*) (gobj_()), (::GstCaps**) (&caps_o));
  return gi::wrap (caps_o, gi::transfer_none, gi::direction_out);
}

// void gst_query_parse_accept_caps_result (GstQuery* query, gboolean* result);
// void gst_query_parse_accept_caps_result (::GstQuery* query, gboolean* result);
void base::QueryBase::parse_accept_caps_result (bool * result) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, gboolean* result);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_accept_caps_result;
  gboolean result_o {};
  call_wrap_v ((::GstQuery*) (gobj_()), (gboolean*) (result ? &result_o : nullptr));
  if (result) *result = result_o;
}
bool base::QueryBase::parse_accept_caps_result () noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, gboolean* result);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_accept_caps_result;
  gboolean result_o {};
  call_wrap_v ((::GstQuery*) (gobj_()), (gboolean*) (&result_o));
  return result_o;
}

// void gst_query_parse_allocation (GstQuery* query, GstCaps** caps, gboolean* need_pool);
// void gst_query_parse_allocation (::GstQuery* query, ::GstCaps** caps, gboolean* need_pool);
void base::QueryBase::parse_allocation (Gst::Caps * caps, bool * need_pool) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, ::GstCaps** caps, gboolean* need_pool);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_allocation;
  gboolean need_pool_o {};
  ::GstCaps* caps_o {};
  call_wrap_v ((::GstQuery*) (gobj_()), (::GstCaps**) (caps ? &caps_o : nullptr), (gboolean*) (need_pool ? &need_pool_o : nullptr));
  if (need_pool) *need_pool = need_pool_o;
  if (caps) *caps = gi::wrap (caps_o, gi::transfer_none, gi::direction_out);
}
std::tuple<Gst::Caps, bool> base::QueryBase::parse_allocation () noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, ::GstCaps** caps, gboolean* need_pool);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_allocation;
  gboolean need_pool_o {};
  ::GstCaps* caps_o {};
  call_wrap_v ((::GstQuery*) (gobj_()), (::GstCaps**) (&caps_o), (gboolean*) (&need_pool_o));
  return std::make_tuple (gi::wrap (caps_o, gi::transfer_none, gi::direction_out), need_pool_o);
}

// void gst_query_parse_bitrate (GstQuery* query, guint* nominal_bitrate);
// void gst_query_parse_bitrate (::GstQuery* query, guint* nominal_bitrate);
void base::QueryBase::parse_bitrate (guint * nominal_bitrate) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, guint* nominal_bitrate);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_bitrate;
  guint nominal_bitrate_o {};
  call_wrap_v ((::GstQuery*) (gobj_()), (guint*) (nominal_bitrate ? &nominal_bitrate_o : nullptr));
  if (nominal_bitrate) *nominal_bitrate = nominal_bitrate_o;
}
guint base::QueryBase::parse_bitrate () noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, guint* nominal_bitrate);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_bitrate;
  guint nominal_bitrate_o {};
  call_wrap_v ((::GstQuery*) (gobj_()), (guint*) (&nominal_bitrate_o));
  return nominal_bitrate_o;
}

// void gst_query_parse_buffering_percent (GstQuery* query, gboolean* busy, gint* percent);
// void gst_query_parse_buffering_percent (::GstQuery* query, gboolean* busy, gint* percent);
void base::QueryBase::parse_buffering_percent (bool * busy, gint * percent) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, gboolean* busy, gint* percent);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_buffering_percent;
  gint percent_o {};
  gboolean busy_o {};
  call_wrap_v ((::GstQuery*) (gobj_()), (gboolean*) (busy ? &busy_o : nullptr), (gint*) (percent ? &percent_o : nullptr));
  if (percent) *percent = percent_o;
  if (busy) *busy = busy_o;
}
std::tuple<bool, gint> base::QueryBase::parse_buffering_percent () noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, gboolean* busy, gint* percent);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_buffering_percent;
  gint percent_o {};
  gboolean busy_o {};
  call_wrap_v ((::GstQuery*) (gobj_()), (gboolean*) (&busy_o), (gint*) (&percent_o));
  return std::make_tuple (busy_o, percent_o);
}

// void gst_query_parse_buffering_range (GstQuery* query, GstFormat* format, gint64* start, gint64* stop, gint64* estimated_total);
// void gst_query_parse_buffering_range (::GstQuery* query, ::GstFormat* format, gint64* start, gint64* stop, gint64* estimated_total);
void base::QueryBase::parse_buffering_range (Gst::Format * format, gint64 * start, gint64 * stop, gint64 * estimated_total) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, ::GstFormat* format, gint64* start, gint64* stop, gint64* estimated_total);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_buffering_range;
  gint64 estimated_total_o {};
  gint64 stop_o {};
  gint64 start_o {};
  ::GstFormat format_o {};
  call_wrap_v ((::GstQuery*) (gobj_()), (::GstFormat*) (format ? &format_o : nullptr), (gint64*) (start ? &start_o : nullptr), (gint64*) (stop ? &stop_o : nullptr), (gint64*) (estimated_total ? &estimated_total_o : nullptr));
  if (estimated_total) *estimated_total = estimated_total_o;
  if (stop) *stop = stop_o;
  if (start) *start = start_o;
  if (format) *format = gi::wrap (format_o);
}
std::tuple<Gst::Format, gint64, gint64, gint64> base::QueryBase::parse_buffering_range () noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, ::GstFormat* format, gint64* start, gint64* stop, gint64* estimated_total);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_buffering_range;
  gint64 estimated_total_o {};
  gint64 stop_o {};
  gint64 start_o {};
  ::GstFormat format_o {};
  call_wrap_v ((::GstQuery*) (gobj_()), (::GstFormat*) (&format_o), (gint64*) (&start_o), (gint64*) (&stop_o), (gint64*) (&estimated_total_o));
  return std::make_tuple (gi::wrap (format_o), start_o, stop_o, estimated_total_o);
}

// void gst_query_parse_buffering_stats (GstQuery* query, GstBufferingMode* mode, gint* avg_in, gint* avg_out, gint64* buffering_left);
// void gst_query_parse_buffering_stats (::GstQuery* query, ::GstBufferingMode* mode, gint* avg_in, gint* avg_out, gint64* buffering_left);
void base::QueryBase::parse_buffering_stats (Gst::BufferingMode * mode, gint * avg_in, gint * avg_out, gint64 * buffering_left) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, ::GstBufferingMode* mode, gint* avg_in, gint* avg_out, gint64* buffering_left);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_buffering_stats;
  gint64 buffering_left_o {};
  gint avg_out_o {};
  gint avg_in_o {};
  ::GstBufferingMode mode_o {};
  call_wrap_v ((::GstQuery*) (gobj_()), (::GstBufferingMode*) (mode ? &mode_o : nullptr), (gint*) (avg_in ? &avg_in_o : nullptr), (gint*) (avg_out ? &avg_out_o : nullptr), (gint64*) (buffering_left ? &buffering_left_o : nullptr));
  if (buffering_left) *buffering_left = buffering_left_o;
  if (avg_out) *avg_out = avg_out_o;
  if (avg_in) *avg_in = avg_in_o;
  if (mode) *mode = gi::wrap (mode_o);
}
std::tuple<Gst::BufferingMode, gint, gint, gint64> base::QueryBase::parse_buffering_stats () noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, ::GstBufferingMode* mode, gint* avg_in, gint* avg_out, gint64* buffering_left);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_buffering_stats;
  gint64 buffering_left_o {};
  gint avg_out_o {};
  gint avg_in_o {};
  ::GstBufferingMode mode_o {};
  call_wrap_v ((::GstQuery*) (gobj_()), (::GstBufferingMode*) (&mode_o), (gint*) (&avg_in_o), (gint*) (&avg_out_o), (gint64*) (&buffering_left_o));
  return std::make_tuple (gi::wrap (mode_o), avg_in_o, avg_out_o, buffering_left_o);
}

// void gst_query_parse_caps (GstQuery* query, GstCaps** filter);
// void gst_query_parse_caps (::GstQuery* query, ::GstCaps** filter);
void base::QueryBase::parse_caps (Gst::Caps & filter) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, ::GstCaps** filter);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_caps;
  ::GstCaps* filter_o {};
  call_wrap_v ((::GstQuery*) (gobj_()), (::GstCaps**) (&filter_o));
  filter = gi::wrap (filter_o, gi::transfer_none, gi::direction_out);
}
Gst::Caps base::QueryBase::parse_caps () noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, ::GstCaps** filter);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_caps;
  ::GstCaps* filter_o {};
  call_wrap_v ((::GstQuery*) (gobj_()), (::GstCaps**) (&filter_o));
  return gi::wrap (filter_o, gi::transfer_none, gi::direction_out);
}

// void gst_query_parse_caps_result (GstQuery* query, GstCaps** caps);
// void gst_query_parse_caps_result (::GstQuery* query, ::GstCaps** caps);
void base::QueryBase::parse_caps_result (Gst::Caps & caps) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, ::GstCaps** caps);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_caps_result;
  ::GstCaps* caps_o {};
  call_wrap_v ((::GstQuery*) (gobj_()), (::GstCaps**) (&caps_o));
  caps = gi::wrap (caps_o, gi::transfer_none, gi::direction_out);
}
Gst::Caps base::QueryBase::parse_caps_result () noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, ::GstCaps** caps);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_caps_result;
  ::GstCaps* caps_o {};
  call_wrap_v ((::GstQuery*) (gobj_()), (::GstCaps**) (&caps_o));
  return gi::wrap (caps_o, gi::transfer_none, gi::direction_out);
}

// void gst_query_parse_context (GstQuery* query, GstContext** context);
// void gst_query_parse_context (::GstQuery* query, ::GstContext** context);
void base::QueryBase::parse_context (Gst::Context & context) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, ::GstContext** context);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_context;
  ::GstContext* context_o {};
  call_wrap_v ((::GstQuery*) (gobj_()), (::GstContext**) (&context_o));
  context = gi::wrap (context_o, gi::transfer_none, gi::direction_out);
}
Gst::Context base::QueryBase::parse_context () noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, ::GstContext** context);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_context;
  ::GstContext* context_o {};
  call_wrap_v ((::GstQuery*) (gobj_()), (::GstContext**) (&context_o));
  return gi::wrap (context_o, gi::transfer_none, gi::direction_out);
}

// gboolean gst_query_parse_context_type (GstQuery* query, const gchar** context_type);
// gboolean gst_query_parse_context_type (::GstQuery* query, const char** context_type);
bool base::QueryBase::parse_context_type (std::string * context_type) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstQuery* query, const char** context_type);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_context_type;
  const char* context_type_o {};
  auto _temp_ret = call_wrap_v ((::GstQuery*) (gobj_()), (const char**) (context_type ? &context_type_o : nullptr));
  if (context_type) *context_type = gi::wrap (context_type_o, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, std::string> base::QueryBase::parse_context_type () noexcept
{
  typedef gboolean (*call_wrap_t) (::GstQuery* query, const char** context_type);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_context_type;
  const char* context_type_o {};
  auto _temp_ret = call_wrap_v ((::GstQuery*) (gobj_()), (const char**) (&context_type_o));
  return std::make_tuple (_temp_ret, gi::wrap (context_type_o, gi::transfer_none, gi::direction_out));
}

// void gst_query_parse_convert (GstQuery* query, GstFormat* src_format, gint64* src_value, GstFormat* dest_format, gint64* dest_value);
// void gst_query_parse_convert (::GstQuery* query, ::GstFormat* src_format, gint64* src_value, ::GstFormat* dest_format, gint64* dest_value);
void base::QueryBase::parse_convert (Gst::Format * src_format, gint64 * src_value, Gst::Format * dest_format, gint64 * dest_value) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, ::GstFormat* src_format, gint64* src_value, ::GstFormat* dest_format, gint64* dest_value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_convert;
  gint64 dest_value_o {};
  ::GstFormat dest_format_o {};
  gint64 src_value_o {};
  ::GstFormat src_format_o {};
  call_wrap_v ((::GstQuery*) (gobj_()), (::GstFormat*) (src_format ? &src_format_o : nullptr), (gint64*) (src_value ? &src_value_o : nullptr), (::GstFormat*) (dest_format ? &dest_format_o : nullptr), (gint64*) (dest_value ? &dest_value_o : nullptr));
  if (dest_value) *dest_value = dest_value_o;
  if (dest_format) *dest_format = gi::wrap (dest_format_o);
  if (src_value) *src_value = src_value_o;
  if (src_format) *src_format = gi::wrap (src_format_o);
}
std::tuple<Gst::Format, gint64, Gst::Format, gint64> base::QueryBase::parse_convert () noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, ::GstFormat* src_format, gint64* src_value, ::GstFormat* dest_format, gint64* dest_value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_convert;
  gint64 dest_value_o {};
  ::GstFormat dest_format_o {};
  gint64 src_value_o {};
  ::GstFormat src_format_o {};
  call_wrap_v ((::GstQuery*) (gobj_()), (::GstFormat*) (&src_format_o), (gint64*) (&src_value_o), (::GstFormat*) (&dest_format_o), (gint64*) (&dest_value_o));
  return std::make_tuple (gi::wrap (src_format_o), src_value_o, gi::wrap (dest_format_o), dest_value_o);
}

// void gst_query_parse_duration (GstQuery* query, GstFormat* format, gint64* duration);
// void gst_query_parse_duration (::GstQuery* query, ::GstFormat* format, gint64* duration);
void base::QueryBase::parse_duration (Gst::Format * format, gint64 * duration) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, ::GstFormat* format, gint64* duration);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_duration;
  gint64 duration_o {};
  ::GstFormat format_o {};
  call_wrap_v ((::GstQuery*) (gobj_()), (::GstFormat*) (format ? &format_o : nullptr), (gint64*) (duration ? &duration_o : nullptr));
  if (duration) *duration = duration_o;
  if (format) *format = gi::wrap (format_o);
}
std::tuple<Gst::Format, gint64> base::QueryBase::parse_duration () noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, ::GstFormat* format, gint64* duration);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_duration;
  gint64 duration_o {};
  ::GstFormat format_o {};
  call_wrap_v ((::GstQuery*) (gobj_()), (::GstFormat*) (&format_o), (gint64*) (&duration_o));
  return std::make_tuple (gi::wrap (format_o), duration_o);
}

// void gst_query_parse_latency (GstQuery* query, gboolean* live, GstClockTime* min_latency, GstClockTime* max_latency);
// void gst_query_parse_latency (::GstQuery* query, gboolean* live, ::GstClockTime* min_latency, ::GstClockTime* max_latency);
void base::QueryBase::parse_latency (bool * live, Gst::ClockTime * min_latency, Gst::ClockTime * max_latency) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, gboolean* live, ::GstClockTime* min_latency, ::GstClockTime* max_latency);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_latency;
  ::GstClockTime max_latency_o {};
  ::GstClockTime min_latency_o {};
  gboolean live_o {};
  call_wrap_v ((::GstQuery*) (gobj_()), (gboolean*) (live ? &live_o : nullptr), (::GstClockTime*) (min_latency ? &min_latency_o : nullptr), (::GstClockTime*) (max_latency ? &max_latency_o : nullptr));
  if (max_latency) *max_latency = max_latency_o;
  if (min_latency) *min_latency = min_latency_o;
  if (live) *live = live_o;
}
std::tuple<bool, Gst::ClockTime, Gst::ClockTime> base::QueryBase::parse_latency () noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, gboolean* live, ::GstClockTime* min_latency, ::GstClockTime* max_latency);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_latency;
  ::GstClockTime max_latency_o {};
  ::GstClockTime min_latency_o {};
  gboolean live_o {};
  call_wrap_v ((::GstQuery*) (gobj_()), (gboolean*) (&live_o), (::GstClockTime*) (&min_latency_o), (::GstClockTime*) (&max_latency_o));
  return std::make_tuple (live_o, min_latency_o, max_latency_o);
}

// void gst_query_parse_n_formats (GstQuery* query, guint* n_formats);
// void gst_query_parse_n_formats (::GstQuery* query, guint* n_formats);
void base::QueryBase::parse_n_formats (guint * n_formats) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, guint* n_formats);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_n_formats;
  guint n_formats_o {};
  call_wrap_v ((::GstQuery*) (gobj_()), (guint*) (n_formats ? &n_formats_o : nullptr));
  if (n_formats) *n_formats = n_formats_o;
}
guint base::QueryBase::parse_n_formats () noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, guint* n_formats);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_n_formats;
  guint n_formats_o {};
  call_wrap_v ((::GstQuery*) (gobj_()), (guint*) (&n_formats_o));
  return n_formats_o;
}

// GType gst_query_parse_nth_allocation_meta (GstQuery* query, guint index, const GstStructure** params);
// GType gst_query_parse_nth_allocation_meta (::GstQuery* query, guint index, const ::GstStructure** params);
GType base::QueryBase::parse_nth_allocation_meta (guint index, Gst::Structure * params) noexcept
{
  typedef GType (*call_wrap_t) (::GstQuery* query, guint index, const ::GstStructure** params);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_nth_allocation_meta;
  const ::GstStructure* params_o {};
  auto index_to_c = index;
  auto _temp_ret = call_wrap_v ((::GstQuery*) (gobj_()), (guint) (index_to_c), (const ::GstStructure**) (params ? &params_o : nullptr));
  if (params) *params = gi::wrap (params_o, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<GType, Gst::Structure> base::QueryBase::parse_nth_allocation_meta (guint index) noexcept
{
  typedef GType (*call_wrap_t) (::GstQuery* query, guint index, const ::GstStructure** params);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_nth_allocation_meta;
  const ::GstStructure* params_o {};
  auto index_to_c = index;
  auto _temp_ret = call_wrap_v ((::GstQuery*) (gobj_()), (guint) (index_to_c), (const ::GstStructure**) (&params_o));
  return std::make_tuple (_temp_ret, gi::wrap (params_o, gi::transfer_none, gi::direction_out));
}

// void gst_query_parse_nth_allocation_param (GstQuery* query, guint index, GstAllocator** allocator, GstAllocationParams* params);
// void gst_query_parse_nth_allocation_param (::GstQuery* query, guint index, ::GstAllocator** allocator, ::GstAllocationParams* params);
void base::QueryBase::parse_nth_allocation_param (guint index, Gst::Allocator * allocator, Gst::AllocationParams * params) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, guint index, ::GstAllocator** allocator, ::GstAllocationParams* params);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_nth_allocation_param;
  traits::unset_wrapper<::GstAllocationParams>::type params_c;
  ::GstAllocator* allocator_o {};
  auto index_to_c = index;
  call_wrap_v ((::GstQuery*) (gobj_()), (guint) (index_to_c), (::GstAllocator**) (allocator ? &allocator_o : nullptr), (::GstAllocationParams*) (params ? (::GstAllocationParams*) &params_c : nullptr));
  if (params) *params = gi::wrap ((::GstAllocationParams*) &params_c, gi::transfer_none, gi::direction_out);
  if (allocator) *allocator = gi::wrap (allocator_o, gi::transfer_full, gi::direction_out);
}
std::tuple<Gst::Allocator, Gst::AllocationParams> base::QueryBase::parse_nth_allocation_param (guint index) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, guint index, ::GstAllocator** allocator, ::GstAllocationParams* params);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_nth_allocation_param;
  traits::unset_wrapper<::GstAllocationParams>::type params_c;
  ::GstAllocator* allocator_o {};
  auto index_to_c = index;
  call_wrap_v ((::GstQuery*) (gobj_()), (guint) (index_to_c), (::GstAllocator**) (&allocator_o), (::GstAllocationParams*) ((::GstAllocationParams*) &params_c));
  return std::make_tuple (gi::wrap (allocator_o, gi::transfer_full, gi::direction_out), gi::wrap ((::GstAllocationParams*) &params_c, gi::transfer_none, gi::direction_out));
}

// void gst_query_parse_nth_allocation_pool (GstQuery* query, guint index, GstBufferPool** pool, guint* size, guint* min_buffers, guint* max_buffers);
// void gst_query_parse_nth_allocation_pool (::GstQuery* query, guint index, ::GstBufferPool** pool, guint* size, guint* min_buffers, guint* max_buffers);
void base::QueryBase::parse_nth_allocation_pool (guint index, Gst::BufferPool * pool, guint * size, guint * min_buffers, guint * max_buffers) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, guint index, ::GstBufferPool** pool, guint* size, guint* min_buffers, guint* max_buffers);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_nth_allocation_pool;
  guint max_buffers_o {};
  guint min_buffers_o {};
  guint size_o {};
  ::GstBufferPool* pool_o {};
  auto index_to_c = index;
  call_wrap_v ((::GstQuery*) (gobj_()), (guint) (index_to_c), (::GstBufferPool**) (pool ? &pool_o : nullptr), (guint*) (size ? &size_o : nullptr), (guint*) (min_buffers ? &min_buffers_o : nullptr), (guint*) (max_buffers ? &max_buffers_o : nullptr));
  if (max_buffers) *max_buffers = max_buffers_o;
  if (min_buffers) *min_buffers = min_buffers_o;
  if (size) *size = size_o;
  if (pool) *pool = gi::wrap (pool_o, gi::transfer_full, gi::direction_out);
}
std::tuple<Gst::BufferPool, guint, guint, guint> base::QueryBase::parse_nth_allocation_pool (guint index) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, guint index, ::GstBufferPool** pool, guint* size, guint* min_buffers, guint* max_buffers);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_nth_allocation_pool;
  guint max_buffers_o {};
  guint min_buffers_o {};
  guint size_o {};
  ::GstBufferPool* pool_o {};
  auto index_to_c = index;
  call_wrap_v ((::GstQuery*) (gobj_()), (guint) (index_to_c), (::GstBufferPool**) (&pool_o), (guint*) (&size_o), (guint*) (&min_buffers_o), (guint*) (&max_buffers_o));
  return std::make_tuple (gi::wrap (pool_o, gi::transfer_full, gi::direction_out), size_o, min_buffers_o, max_buffers_o);
}

// gboolean gst_query_parse_nth_buffering_range (GstQuery* query, guint index, gint64* start, gint64* stop);
// gboolean gst_query_parse_nth_buffering_range (::GstQuery* query, guint index, gint64* start, gint64* stop);
bool base::QueryBase::parse_nth_buffering_range (guint index, gint64 * start, gint64 * stop) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstQuery* query, guint index, gint64* start, gint64* stop);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_nth_buffering_range;
  gint64 stop_o {};
  gint64 start_o {};
  auto index_to_c = index;
  auto _temp_ret = call_wrap_v ((::GstQuery*) (gobj_()), (guint) (index_to_c), (gint64*) (start ? &start_o : nullptr), (gint64*) (stop ? &stop_o : nullptr));
  if (stop) *stop = stop_o;
  if (start) *start = start_o;
  return _temp_ret;
}
std::tuple<bool, gint64, gint64> base::QueryBase::parse_nth_buffering_range (guint index) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstQuery* query, guint index, gint64* start, gint64* stop);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_nth_buffering_range;
  gint64 stop_o {};
  gint64 start_o {};
  auto index_to_c = index;
  auto _temp_ret = call_wrap_v ((::GstQuery*) (gobj_()), (guint) (index_to_c), (gint64*) (&start_o), (gint64*) (&stop_o));
  return std::make_tuple (_temp_ret, start_o, stop_o);
}

// void gst_query_parse_nth_format (GstQuery* query, guint nth, GstFormat* format);
// void gst_query_parse_nth_format (::GstQuery* query, guint nth, ::GstFormat* format);
void base::QueryBase::parse_nth_format (guint nth, Gst::Format * format) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, guint nth, ::GstFormat* format);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_nth_format;
  ::GstFormat format_o {};
  auto nth_to_c = nth;
  call_wrap_v ((::GstQuery*) (gobj_()), (guint) (nth_to_c), (::GstFormat*) (format ? &format_o : nullptr));
  if (format) *format = gi::wrap (format_o);
}
Gst::Format base::QueryBase::parse_nth_format (guint nth) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, guint nth, ::GstFormat* format);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_nth_format;
  ::GstFormat format_o {};
  auto nth_to_c = nth;
  call_wrap_v ((::GstQuery*) (gobj_()), (guint) (nth_to_c), (::GstFormat*) (&format_o));
  return gi::wrap (format_o);
}

// GstPadMode gst_query_parse_nth_scheduling_mode (GstQuery* query, guint index);
// ::GstPadMode gst_query_parse_nth_scheduling_mode (::GstQuery* query, guint index);
Gst::PadMode base::QueryBase::parse_nth_scheduling_mode (guint index) noexcept
{
  typedef ::GstPadMode (*call_wrap_t) (::GstQuery* query, guint index);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_nth_scheduling_mode;
  auto index_to_c = index;
  auto _temp_ret = call_wrap_v ((::GstQuery*) (gobj_()), (guint) (index_to_c));
  return gi::wrap (_temp_ret);
}

// void gst_query_parse_position (GstQuery* query, GstFormat* format, gint64* cur);
// void gst_query_parse_position (::GstQuery* query, ::GstFormat* format, gint64* cur);
void base::QueryBase::parse_position (Gst::Format * format, gint64 * cur) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, ::GstFormat* format, gint64* cur);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_position;
  gint64 cur_o {};
  ::GstFormat format_o {};
  call_wrap_v ((::GstQuery*) (gobj_()), (::GstFormat*) (format ? &format_o : nullptr), (gint64*) (cur ? &cur_o : nullptr));
  if (cur) *cur = cur_o;
  if (format) *format = gi::wrap (format_o);
}
std::tuple<Gst::Format, gint64> base::QueryBase::parse_position () noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, ::GstFormat* format, gint64* cur);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_position;
  gint64 cur_o {};
  ::GstFormat format_o {};
  call_wrap_v ((::GstQuery*) (gobj_()), (::GstFormat*) (&format_o), (gint64*) (&cur_o));
  return std::make_tuple (gi::wrap (format_o), cur_o);
}

// void gst_query_parse_scheduling (GstQuery* query, GstSchedulingFlags* flags, gint* minsize, gint* maxsize, gint* align);
// void gst_query_parse_scheduling (::GstQuery* query, ::GstSchedulingFlags* flags, gint* minsize, gint* maxsize, gint* align);
void base::QueryBase::parse_scheduling (Gst::SchedulingFlags * flags, gint * minsize, gint * maxsize, gint * align) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, ::GstSchedulingFlags* flags, gint* minsize, gint* maxsize, gint* align);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_scheduling;
  gint align_o {};
  gint maxsize_o {};
  gint minsize_o {};
  ::GstSchedulingFlags flags_o {};
  call_wrap_v ((::GstQuery*) (gobj_()), (::GstSchedulingFlags*) (flags ? &flags_o : nullptr), (gint*) (minsize ? &minsize_o : nullptr), (gint*) (maxsize ? &maxsize_o : nullptr), (gint*) (align ? &align_o : nullptr));
  if (align) *align = align_o;
  if (maxsize) *maxsize = maxsize_o;
  if (minsize) *minsize = minsize_o;
  if (flags) *flags = gi::wrap (flags_o);
}
std::tuple<Gst::SchedulingFlags, gint, gint, gint> base::QueryBase::parse_scheduling () noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, ::GstSchedulingFlags* flags, gint* minsize, gint* maxsize, gint* align);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_scheduling;
  gint align_o {};
  gint maxsize_o {};
  gint minsize_o {};
  ::GstSchedulingFlags flags_o {};
  call_wrap_v ((::GstQuery*) (gobj_()), (::GstSchedulingFlags*) (&flags_o), (gint*) (&minsize_o), (gint*) (&maxsize_o), (gint*) (&align_o));
  return std::make_tuple (gi::wrap (flags_o), minsize_o, maxsize_o, align_o);
}

// void gst_query_parse_seeking (GstQuery* query, GstFormat* format, gboolean* seekable, gint64* segment_start, gint64* segment_end);
// void gst_query_parse_seeking (::GstQuery* query, ::GstFormat* format, gboolean* seekable, gint64* segment_start, gint64* segment_end);
void base::QueryBase::parse_seeking (Gst::Format * format, bool * seekable, gint64 * segment_start, gint64 * segment_end) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, ::GstFormat* format, gboolean* seekable, gint64* segment_start, gint64* segment_end);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_seeking;
  gint64 segment_end_o {};
  gint64 segment_start_o {};
  gboolean seekable_o {};
  ::GstFormat format_o {};
  call_wrap_v ((::GstQuery*) (gobj_()), (::GstFormat*) (format ? &format_o : nullptr), (gboolean*) (seekable ? &seekable_o : nullptr), (gint64*) (segment_start ? &segment_start_o : nullptr), (gint64*) (segment_end ? &segment_end_o : nullptr));
  if (segment_end) *segment_end = segment_end_o;
  if (segment_start) *segment_start = segment_start_o;
  if (seekable) *seekable = seekable_o;
  if (format) *format = gi::wrap (format_o);
}
std::tuple<Gst::Format, bool, gint64, gint64> base::QueryBase::parse_seeking () noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, ::GstFormat* format, gboolean* seekable, gint64* segment_start, gint64* segment_end);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_seeking;
  gint64 segment_end_o {};
  gint64 segment_start_o {};
  gboolean seekable_o {};
  ::GstFormat format_o {};
  call_wrap_v ((::GstQuery*) (gobj_()), (::GstFormat*) (&format_o), (gboolean*) (&seekable_o), (gint64*) (&segment_start_o), (gint64*) (&segment_end_o));
  return std::make_tuple (gi::wrap (format_o), seekable_o, segment_start_o, segment_end_o);
}

// void gst_query_parse_segment (GstQuery* query, gdouble* rate, GstFormat* format, gint64* start_value, gint64* stop_value);
// void gst_query_parse_segment (::GstQuery* query, gdouble* rate, ::GstFormat* format, gint64* start_value, gint64* stop_value);
void base::QueryBase::parse_segment (gdouble * rate, Gst::Format * format, gint64 * start_value, gint64 * stop_value) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, gdouble* rate, ::GstFormat* format, gint64* start_value, gint64* stop_value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_segment;
  gint64 stop_value_o {};
  gint64 start_value_o {};
  ::GstFormat format_o {};
  gdouble rate_o {};
  call_wrap_v ((::GstQuery*) (gobj_()), (gdouble*) (rate ? &rate_o : nullptr), (::GstFormat*) (format ? &format_o : nullptr), (gint64*) (start_value ? &start_value_o : nullptr), (gint64*) (stop_value ? &stop_value_o : nullptr));
  if (stop_value) *stop_value = stop_value_o;
  if (start_value) *start_value = start_value_o;
  if (format) *format = gi::wrap (format_o);
  if (rate) *rate = rate_o;
}
std::tuple<gdouble, Gst::Format, gint64, gint64> base::QueryBase::parse_segment () noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, gdouble* rate, ::GstFormat* format, gint64* start_value, gint64* stop_value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_segment;
  gint64 stop_value_o {};
  gint64 start_value_o {};
  ::GstFormat format_o {};
  gdouble rate_o {};
  call_wrap_v ((::GstQuery*) (gobj_()), (gdouble*) (&rate_o), (::GstFormat*) (&format_o), (gint64*) (&start_value_o), (gint64*) (&stop_value_o));
  return std::make_tuple (rate_o, gi::wrap (format_o), start_value_o, stop_value_o);
}

// void gst_query_parse_uri (GstQuery* query, gchar** uri);
// void gst_query_parse_uri (::GstQuery* query, char** uri);
void base::QueryBase::parse_uri (std::string * uri) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, char** uri);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_uri;
  char* uri_o {};
  call_wrap_v ((::GstQuery*) (gobj_()), (char**) (uri ? &uri_o : nullptr));
  if (uri) *uri = gi::wrap (uri_o, gi::transfer_full, gi::direction_out);
}
std::string base::QueryBase::parse_uri () noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, char** uri);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_uri;
  char* uri_o {};
  call_wrap_v ((::GstQuery*) (gobj_()), (char**) (&uri_o));
  return gi::wrap (uri_o, gi::transfer_full, gi::direction_out);
}

// void gst_query_parse_uri_redirection (GstQuery* query, gchar** uri);
// void gst_query_parse_uri_redirection (::GstQuery* query, char** uri);
void base::QueryBase::parse_uri_redirection (std::string * uri) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, char** uri);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_uri_redirection;
  char* uri_o {};
  call_wrap_v ((::GstQuery*) (gobj_()), (char**) (uri ? &uri_o : nullptr));
  if (uri) *uri = gi::wrap (uri_o, gi::transfer_full, gi::direction_out);
}
std::string base::QueryBase::parse_uri_redirection () noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, char** uri);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_uri_redirection;
  char* uri_o {};
  call_wrap_v ((::GstQuery*) (gobj_()), (char**) (&uri_o));
  return gi::wrap (uri_o, gi::transfer_full, gi::direction_out);
}

// void gst_query_parse_uri_redirection_permanent (GstQuery* query, gboolean* permanent);
// void gst_query_parse_uri_redirection_permanent (::GstQuery* query, gboolean* permanent);
void base::QueryBase::parse_uri_redirection_permanent (bool * permanent) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, gboolean* permanent);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_uri_redirection_permanent;
  gboolean permanent_o {};
  call_wrap_v ((::GstQuery*) (gobj_()), (gboolean*) (permanent ? &permanent_o : nullptr));
  if (permanent) *permanent = permanent_o;
}
bool base::QueryBase::parse_uri_redirection_permanent () noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, gboolean* permanent);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_parse_uri_redirection_permanent;
  gboolean permanent_o {};
  call_wrap_v ((::GstQuery*) (gobj_()), (gboolean*) (&permanent_o));
  return permanent_o;
}

// void gst_query_remove_nth_allocation_meta (GstQuery* query, guint index);
// void gst_query_remove_nth_allocation_meta (::GstQuery* query, guint index);
void base::QueryBase::remove_nth_allocation_meta (guint index) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, guint index);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_remove_nth_allocation_meta;
  auto index_to_c = index;
  call_wrap_v ((::GstQuery*) (gobj_()), (guint) (index_to_c));
}

// void gst_query_remove_nth_allocation_param (GstQuery* query, guint index);
// void gst_query_remove_nth_allocation_param (::GstQuery* query, guint index);
void base::QueryBase::remove_nth_allocation_param (guint index) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, guint index);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_remove_nth_allocation_param;
  auto index_to_c = index;
  call_wrap_v ((::GstQuery*) (gobj_()), (guint) (index_to_c));
}

// void gst_query_remove_nth_allocation_pool (GstQuery* query, guint index);
// void gst_query_remove_nth_allocation_pool (::GstQuery* query, guint index);
void base::QueryBase::remove_nth_allocation_pool (guint index) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, guint index);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_remove_nth_allocation_pool;
  auto index_to_c = index;
  call_wrap_v ((::GstQuery*) (gobj_()), (guint) (index_to_c));
}

// void gst_query_set_accept_caps_result (GstQuery* query, gboolean result);
// void gst_query_set_accept_caps_result (::GstQuery* query, gboolean result);
void base::QueryBase::set_accept_caps_result (gboolean result) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, gboolean result);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_set_accept_caps_result;
  auto result_to_c = result;
  call_wrap_v ((::GstQuery*) (gobj_()), (gboolean) (result_to_c));
}

// void gst_query_set_bitrate (GstQuery* query, guint nominal_bitrate);
// void gst_query_set_bitrate (::GstQuery* query, guint nominal_bitrate);
void base::QueryBase::set_bitrate (guint nominal_bitrate) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, guint nominal_bitrate);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_set_bitrate;
  auto nominal_bitrate_to_c = nominal_bitrate;
  call_wrap_v ((::GstQuery*) (gobj_()), (guint) (nominal_bitrate_to_c));
}

// void gst_query_set_buffering_percent (GstQuery* query, gboolean busy, gint percent);
// void gst_query_set_buffering_percent (::GstQuery* query, gboolean busy, gint percent);
void base::QueryBase::set_buffering_percent (gboolean busy, gint percent) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, gboolean busy, gint percent);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_set_buffering_percent;
  auto percent_to_c = percent;
  auto busy_to_c = busy;
  call_wrap_v ((::GstQuery*) (gobj_()), (gboolean) (busy_to_c), (gint) (percent_to_c));
}

// void gst_query_set_buffering_range (GstQuery* query, GstFormat format, gint64 start, gint64 stop, gint64 estimated_total);
// void gst_query_set_buffering_range (::GstQuery* query, ::GstFormat format, gint64 start, gint64 stop, gint64 estimated_total);
void base::QueryBase::set_buffering_range (Gst::Format format, gint64 start, gint64 stop, gint64 estimated_total) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, ::GstFormat format, gint64 start, gint64 stop, gint64 estimated_total);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_set_buffering_range;
  auto estimated_total_to_c = estimated_total;
  auto stop_to_c = stop;
  auto start_to_c = start;
  auto format_to_c = gi::unwrap (format);
  call_wrap_v ((::GstQuery*) (gobj_()), (::GstFormat) (format_to_c), (gint64) (start_to_c), (gint64) (stop_to_c), (gint64) (estimated_total_to_c));
}

// void gst_query_set_buffering_stats (GstQuery* query, GstBufferingMode mode, gint avg_in, gint avg_out, gint64 buffering_left);
// void gst_query_set_buffering_stats (::GstQuery* query, ::GstBufferingMode mode, gint avg_in, gint avg_out, gint64 buffering_left);
void base::QueryBase::set_buffering_stats (Gst::BufferingMode mode, gint avg_in, gint avg_out, gint64 buffering_left) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, ::GstBufferingMode mode, gint avg_in, gint avg_out, gint64 buffering_left);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_set_buffering_stats;
  auto buffering_left_to_c = buffering_left;
  auto avg_out_to_c = avg_out;
  auto avg_in_to_c = avg_in;
  auto mode_to_c = gi::unwrap (mode);
  call_wrap_v ((::GstQuery*) (gobj_()), (::GstBufferingMode) (mode_to_c), (gint) (avg_in_to_c), (gint) (avg_out_to_c), (gint64) (buffering_left_to_c));
}

// void gst_query_set_caps_result (GstQuery* query, GstCaps* caps);
// void gst_query_set_caps_result (::GstQuery* query, ::GstCaps* caps);
void base::QueryBase::set_caps_result (Gst::Caps caps) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, ::GstCaps* caps);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_set_caps_result;
  auto caps_to_c = gi::unwrap (caps, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstQuery*) (gobj_()), (::GstCaps*) (caps_to_c));
}

// void gst_query_set_context (GstQuery* query, GstContext* context);
// void gst_query_set_context (::GstQuery* query, ::GstContext* context);
void base::QueryBase::set_context (Gst::Context context) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, ::GstContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_set_context;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstQuery*) (gobj_()), (::GstContext*) (context_to_c));
}

// void gst_query_set_convert (GstQuery* query, GstFormat src_format, gint64 src_value, GstFormat dest_format, gint64 dest_value);
// void gst_query_set_convert (::GstQuery* query, ::GstFormat src_format, gint64 src_value, ::GstFormat dest_format, gint64 dest_value);
void base::QueryBase::set_convert (Gst::Format src_format, gint64 src_value, Gst::Format dest_format, gint64 dest_value) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, ::GstFormat src_format, gint64 src_value, ::GstFormat dest_format, gint64 dest_value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_set_convert;
  auto dest_value_to_c = dest_value;
  auto dest_format_to_c = gi::unwrap (dest_format);
  auto src_value_to_c = src_value;
  auto src_format_to_c = gi::unwrap (src_format);
  call_wrap_v ((::GstQuery*) (gobj_()), (::GstFormat) (src_format_to_c), (gint64) (src_value_to_c), (::GstFormat) (dest_format_to_c), (gint64) (dest_value_to_c));
}

// void gst_query_set_duration (GstQuery* query, GstFormat format, gint64 duration);
// void gst_query_set_duration (::GstQuery* query, ::GstFormat format, gint64 duration);
void base::QueryBase::set_duration (Gst::Format format, gint64 duration) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, ::GstFormat format, gint64 duration);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_set_duration;
  auto duration_to_c = duration;
  auto format_to_c = gi::unwrap (format);
  call_wrap_v ((::GstQuery*) (gobj_()), (::GstFormat) (format_to_c), (gint64) (duration_to_c));
}

// void gst_query_set_formats (GstQuery* query, gint n_formats);
// void gst_query_set_formats (::GstQuery* query, gint n_formats);
// IGNORE; not introspectable, varargs not supported

// void gst_query_set_formatsv (GstQuery* query, gint n_formats, const GstFormat* formats);
// void gst_query_set_formatsv (::GstQuery* query, gint n_formats, const ::GstFormat* formats);
void base::QueryBase::set_formatsv (gint n_formats, Gst::Format * formats) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, gint n_formats, const ::GstFormat* formats);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_set_formatsv;
  auto formats_i = detail::make_list_unwrap_range (formats, n_formats, false);
  auto formats_w = unwrap (formats_i, gi::transfer_none, direction_in);
  auto formats_to_c = formats_w.gobj_(false);
  call_wrap_v ((::GstQuery*) (gobj_()), (gint) (formats_w.size()), (const ::GstFormat*) (formats_to_c));
}

// void gst_query_set_latency (GstQuery* query, gboolean live, GstClockTime min_latency, GstClockTime max_latency);
// void gst_query_set_latency (::GstQuery* query, gboolean live, ::GstClockTime min_latency, ::GstClockTime max_latency);
void base::QueryBase::set_latency (gboolean live, ::GstClockTime min_latency, ::GstClockTime max_latency) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, gboolean live, ::GstClockTime min_latency, ::GstClockTime max_latency);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_set_latency;
  auto max_latency_to_c = max_latency;
  auto min_latency_to_c = min_latency;
  auto live_to_c = live;
  call_wrap_v ((::GstQuery*) (gobj_()), (gboolean) (live_to_c), (::GstClockTime) (min_latency_to_c), (::GstClockTime) (max_latency_to_c));
}

// void gst_query_set_nth_allocation_param (GstQuery* query, guint index, GstAllocator* allocator, const GstAllocationParams* params);
// void gst_query_set_nth_allocation_param (::GstQuery* query, guint index, ::GstAllocator* allocator, const ::GstAllocationParams* params);
void base::QueryBase::set_nth_allocation_param (guint index, Gst::Allocator allocator, const Gst::AllocationParams & params) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, guint index, ::GstAllocator* allocator, const ::GstAllocationParams* params);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_set_nth_allocation_param;
  auto params_to_c = gi::unwrap (params, gi::transfer_none, gi::direction_in);
  auto allocator_to_c = gi::unwrap (allocator, gi::transfer_none, gi::direction_in);
  auto index_to_c = index;
  call_wrap_v ((::GstQuery*) (gobj_()), (guint) (index_to_c), (::GstAllocator*) (allocator_to_c), (const ::GstAllocationParams*) (params_to_c));
}
void base::QueryBase::set_nth_allocation_param (guint index) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, guint index, ::GstAllocator* allocator, const ::GstAllocationParams* params);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_set_nth_allocation_param;
  auto params_to_c = nullptr;
  auto allocator_to_c = nullptr;
  auto index_to_c = index;
  call_wrap_v ((::GstQuery*) (gobj_()), (guint) (index_to_c), (::GstAllocator*) (allocator_to_c), (const ::GstAllocationParams*) (params_to_c));
}

// void gst_query_set_nth_allocation_pool (GstQuery* query, guint index, GstBufferPool* pool, guint size, guint min_buffers, guint max_buffers);
// void gst_query_set_nth_allocation_pool (::GstQuery* query, guint index, ::GstBufferPool* pool, guint size, guint min_buffers, guint max_buffers);
void base::QueryBase::set_nth_allocation_pool (guint index, Gst::BufferPool pool, guint size, guint min_buffers, guint max_buffers) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, guint index, ::GstBufferPool* pool, guint size, guint min_buffers, guint max_buffers);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_set_nth_allocation_pool;
  auto max_buffers_to_c = max_buffers;
  auto min_buffers_to_c = min_buffers;
  auto size_to_c = size;
  auto pool_to_c = gi::unwrap (pool, gi::transfer_none, gi::direction_in);
  auto index_to_c = index;
  call_wrap_v ((::GstQuery*) (gobj_()), (guint) (index_to_c), (::GstBufferPool*) (pool_to_c), (guint) (size_to_c), (guint) (min_buffers_to_c), (guint) (max_buffers_to_c));
}
void base::QueryBase::set_nth_allocation_pool (guint index, guint size, guint min_buffers, guint max_buffers) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, guint index, ::GstBufferPool* pool, guint size, guint min_buffers, guint max_buffers);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_set_nth_allocation_pool;
  auto max_buffers_to_c = max_buffers;
  auto min_buffers_to_c = min_buffers;
  auto size_to_c = size;
  auto pool_to_c = nullptr;
  auto index_to_c = index;
  call_wrap_v ((::GstQuery*) (gobj_()), (guint) (index_to_c), (::GstBufferPool*) (pool_to_c), (guint) (size_to_c), (guint) (min_buffers_to_c), (guint) (max_buffers_to_c));
}

// void gst_query_set_position (GstQuery* query, GstFormat format, gint64 cur);
// void gst_query_set_position (::GstQuery* query, ::GstFormat format, gint64 cur);
void base::QueryBase::set_position (Gst::Format format, gint64 cur) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, ::GstFormat format, gint64 cur);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_set_position;
  auto cur_to_c = cur;
  auto format_to_c = gi::unwrap (format);
  call_wrap_v ((::GstQuery*) (gobj_()), (::GstFormat) (format_to_c), (gint64) (cur_to_c));
}

// void gst_query_set_scheduling (GstQuery* query, GstSchedulingFlags flags, gint minsize, gint maxsize, gint align);
// void gst_query_set_scheduling (::GstQuery* query, ::GstSchedulingFlags flags, gint minsize, gint maxsize, gint align);
void base::QueryBase::set_scheduling (Gst::SchedulingFlags flags, gint minsize, gint maxsize, gint align) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, ::GstSchedulingFlags flags, gint minsize, gint maxsize, gint align);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_set_scheduling;
  auto align_to_c = align;
  auto maxsize_to_c = maxsize;
  auto minsize_to_c = minsize;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GstQuery*) (gobj_()), (::GstSchedulingFlags) (flags_to_c), (gint) (minsize_to_c), (gint) (maxsize_to_c), (gint) (align_to_c));
}

// void gst_query_set_seeking (GstQuery* query, GstFormat format, gboolean seekable, gint64 segment_start, gint64 segment_end);
// void gst_query_set_seeking (::GstQuery* query, ::GstFormat format, gboolean seekable, gint64 segment_start, gint64 segment_end);
void base::QueryBase::set_seeking (Gst::Format format, gboolean seekable, gint64 segment_start, gint64 segment_end) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, ::GstFormat format, gboolean seekable, gint64 segment_start, gint64 segment_end);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_set_seeking;
  auto segment_end_to_c = segment_end;
  auto segment_start_to_c = segment_start;
  auto seekable_to_c = seekable;
  auto format_to_c = gi::unwrap (format);
  call_wrap_v ((::GstQuery*) (gobj_()), (::GstFormat) (format_to_c), (gboolean) (seekable_to_c), (gint64) (segment_start_to_c), (gint64) (segment_end_to_c));
}

// void gst_query_set_segment (GstQuery* query, gdouble rate, GstFormat format, gint64 start_value, gint64 stop_value);
// void gst_query_set_segment (::GstQuery* query, gdouble rate, ::GstFormat format, gint64 start_value, gint64 stop_value);
void base::QueryBase::set_segment (gdouble rate, Gst::Format format, gint64 start_value, gint64 stop_value) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, gdouble rate, ::GstFormat format, gint64 start_value, gint64 stop_value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_set_segment;
  auto stop_value_to_c = stop_value;
  auto start_value_to_c = start_value;
  auto format_to_c = gi::unwrap (format);
  auto rate_to_c = rate;
  call_wrap_v ((::GstQuery*) (gobj_()), (gdouble) (rate_to_c), (::GstFormat) (format_to_c), (gint64) (start_value_to_c), (gint64) (stop_value_to_c));
}

// void gst_query_set_uri (GstQuery* query, const gchar* uri);
// void gst_query_set_uri (::GstQuery* query, const char* uri);
void base::QueryBase::set_uri (const std::string & uri) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, const char* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_set_uri;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstQuery*) (gobj_()), (const char*) (uri_to_c));
}

// void gst_query_set_uri_redirection (GstQuery* query, const gchar* uri);
// void gst_query_set_uri_redirection (::GstQuery* query, const char* uri);
void base::QueryBase::set_uri_redirection (const std::string & uri) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, const char* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_set_uri_redirection;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstQuery*) (gobj_()), (const char*) (uri_to_c));
}

// void gst_query_set_uri_redirection_permanent (GstQuery* query, gboolean permanent);
// void gst_query_set_uri_redirection_permanent (::GstQuery* query, gboolean permanent);
void base::QueryBase::set_uri_redirection_permanent (gboolean permanent) noexcept
{
  typedef void (*call_wrap_t) (::GstQuery* query, gboolean permanent);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_set_uri_redirection_permanent;
  auto permanent_to_c = permanent;
  call_wrap_v ((::GstQuery*) (gobj_()), (gboolean) (permanent_to_c));
}

// GstStructure* gst_query_writable_structure (GstQuery* query);
// ::GstStructure* gst_query_writable_structure (::GstQuery* query);
Gst::Structure base::QueryBase::writable_structure () noexcept
{
  typedef ::GstStructure* (*call_wrap_t) (::GstQuery* query);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_writable_structure;
  auto _temp_ret = call_wrap_v ((::GstQuery*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/query_extra_def_impl.hpp>)
#include <gst/query_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/query_extra_impl.hpp>)
#include <gst/query_extra_impl.hpp>
#endif
#endif

#endif
