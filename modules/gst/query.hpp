// AUTO-GENERATED

#ifndef _GI_GST_QUERY_HPP_
#define _GI_GST_QUERY_HPP_


namespace gi {

namespace repository {

namespace Gst {

class AllocationParams;
class Allocator;
class BufferPool;
class Caps;
class Context;
class Structure;

class Query;

namespace base {


#define GI_GST_QUERY_BASE base::QueryBase
class QueryBase : public gi::detail::GBoxedWrapper<QueryBase, ::GstQuery>
{
typedef gi::detail::GBoxedWrapper<QueryBase, ::GstQuery> super_type;
public:

QueryBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gst_query_get_type(); } 

// ::GstQueryType Query::type (const ::GstQuery* obj);
// ::GstQueryType Query::type (const ::GstQuery* obj);
GI_INLINE_DECL Gst::QueryType type_ () const noexcept;

//  Query::type (::GstQuery* obj, ::GstQueryType _value);
// void Query::type (::GstQuery* obj, ::GstQueryType _value);
GI_INLINE_DECL void type_ (Gst::QueryType _value) noexcept;

// GstQuery* gst_query_new_accept_caps (GstCaps* caps);
// ::GstQuery* gst_query_new_accept_caps (::GstCaps* caps);
static GI_INLINE_DECL Gst::Query new_accept_caps (Gst::Caps caps) noexcept;

// GstQuery* gst_query_new_allocation (GstCaps* caps, gboolean need_pool);
// ::GstQuery* gst_query_new_allocation (::GstCaps* caps, gboolean need_pool);
static GI_INLINE_DECL Gst::Query new_allocation (Gst::Caps caps, gboolean need_pool) noexcept;

// GstQuery* gst_query_new_bitrate ();
// ::GstQuery* gst_query_new_bitrate ();
static GI_INLINE_DECL Gst::Query new_bitrate () noexcept;

// GstQuery* gst_query_new_buffering (GstFormat format);
// ::GstQuery* gst_query_new_buffering (::GstFormat format);
static GI_INLINE_DECL Gst::Query new_buffering (Gst::Format format) noexcept;

// GstQuery* gst_query_new_caps (GstCaps* filter);
// ::GstQuery* gst_query_new_caps (::GstCaps* filter);
static GI_INLINE_DECL Gst::Query new_caps (Gst::Caps filter) noexcept;

// GstQuery* gst_query_new_context (const gchar* context_type);
// ::GstQuery* gst_query_new_context (const char* context_type);
static GI_INLINE_DECL Gst::Query new_context (const std::string & context_type) noexcept;

// GstQuery* gst_query_new_convert (GstFormat src_format, gint64 value, GstFormat dest_format);
// ::GstQuery* gst_query_new_convert (::GstFormat src_format, gint64 value, ::GstFormat dest_format);
static GI_INLINE_DECL Gst::Query new_convert (Gst::Format src_format, gint64 value, Gst::Format dest_format) noexcept;

// GstQuery* gst_query_new_custom (GstQueryType type, GstStructure* structure);
// ::GstQuery* gst_query_new_custom (::GstQueryType type, ::GstStructure* structure);
static GI_INLINE_DECL Gst::Query new_custom (Gst::QueryType type, Gst::Structure structure) noexcept;
static GI_INLINE_DECL Gst::Query new_custom (Gst::QueryType type) noexcept;

// GstQuery* gst_query_new_drain ();
// ::GstQuery* gst_query_new_drain ();
static GI_INLINE_DECL Gst::Query new_drain () noexcept;

// GstQuery* gst_query_new_duration (GstFormat format);
// ::GstQuery* gst_query_new_duration (::GstFormat format);
static GI_INLINE_DECL Gst::Query new_duration (Gst::Format format) noexcept;

// GstQuery* gst_query_new_formats ();
// ::GstQuery* gst_query_new_formats ();
static GI_INLINE_DECL Gst::Query new_formats () noexcept;

// GstQuery* gst_query_new_latency ();
// ::GstQuery* gst_query_new_latency ();
static GI_INLINE_DECL Gst::Query new_latency () noexcept;

// GstQuery* gst_query_new_position (GstFormat format);
// ::GstQuery* gst_query_new_position (::GstFormat format);
static GI_INLINE_DECL Gst::Query new_position (Gst::Format format) noexcept;

// GstQuery* gst_query_new_scheduling ();
// ::GstQuery* gst_query_new_scheduling ();
static GI_INLINE_DECL Gst::Query new_scheduling () noexcept;

// GstQuery* gst_query_new_seeking (GstFormat format);
// ::GstQuery* gst_query_new_seeking (::GstFormat format);
static GI_INLINE_DECL Gst::Query new_seeking (Gst::Format format) noexcept;

// GstQuery* gst_query_new_segment (GstFormat format);
// ::GstQuery* gst_query_new_segment (::GstFormat format);
static GI_INLINE_DECL Gst::Query new_segment (Gst::Format format) noexcept;

// GstQuery* gst_query_new_uri ();
// ::GstQuery* gst_query_new_uri ();
static GI_INLINE_DECL Gst::Query new_uri () noexcept;

// void gst_query_add_allocation_meta (GstQuery* query, GType api, const GstStructure* params);
// void gst_query_add_allocation_meta (::GstQuery* query, GType api, const ::GstStructure* params);
GI_INLINE_DECL void add_allocation_meta (GType api, const Gst::Structure & params) noexcept;
GI_INLINE_DECL void add_allocation_meta (GType api) noexcept;

// void gst_query_add_allocation_param (GstQuery* query, GstAllocator* allocator, const GstAllocationParams* params);
// void gst_query_add_allocation_param (::GstQuery* query, ::GstAllocator* allocator, const ::GstAllocationParams* params);
GI_INLINE_DECL void add_allocation_param (Gst::Allocator allocator, const Gst::AllocationParams & params) noexcept;
GI_INLINE_DECL void add_allocation_param () noexcept;

// void gst_query_add_allocation_pool (GstQuery* query, GstBufferPool* pool, guint size, guint min_buffers, guint max_buffers);
// void gst_query_add_allocation_pool (::GstQuery* query, ::GstBufferPool* pool, guint size, guint min_buffers, guint max_buffers);
GI_INLINE_DECL void add_allocation_pool (Gst::BufferPool pool, guint size, guint min_buffers, guint max_buffers) noexcept;
GI_INLINE_DECL void add_allocation_pool (guint size, guint min_buffers, guint max_buffers) noexcept;

// gboolean gst_query_add_buffering_range (GstQuery* query, gint64 start, gint64 stop);
// gboolean gst_query_add_buffering_range (::GstQuery* query, gint64 start, gint64 stop);
GI_INLINE_DECL bool add_buffering_range (gint64 start, gint64 stop) noexcept;

// void gst_query_add_scheduling_mode (GstQuery* query, GstPadMode mode);
// void gst_query_add_scheduling_mode (::GstQuery* query, ::GstPadMode mode);
GI_INLINE_DECL void add_scheduling_mode (Gst::PadMode mode) noexcept;

// gboolean gst_query_find_allocation_meta (GstQuery* query, GType api, guint* index);
// gboolean gst_query_find_allocation_meta (::GstQuery* query, GType api, guint* index);
GI_INLINE_DECL bool find_allocation_meta (GType api, guint * index = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, guint> find_allocation_meta (GType api) noexcept;

// guint gst_query_get_n_allocation_metas (GstQuery* query);
// guint gst_query_get_n_allocation_metas (::GstQuery* query);
GI_INLINE_DECL guint get_n_allocation_metas () noexcept;

// guint gst_query_get_n_allocation_params (GstQuery* query);
// guint gst_query_get_n_allocation_params (::GstQuery* query);
GI_INLINE_DECL guint get_n_allocation_params () noexcept;

// guint gst_query_get_n_allocation_pools (GstQuery* query);
// guint gst_query_get_n_allocation_pools (::GstQuery* query);
GI_INLINE_DECL guint get_n_allocation_pools () noexcept;

// guint gst_query_get_n_buffering_ranges (GstQuery* query);
// guint gst_query_get_n_buffering_ranges (::GstQuery* query);
GI_INLINE_DECL guint get_n_buffering_ranges () noexcept;

// guint gst_query_get_n_scheduling_modes (GstQuery* query);
// guint gst_query_get_n_scheduling_modes (::GstQuery* query);
GI_INLINE_DECL guint get_n_scheduling_modes () noexcept;

// const GstStructure* gst_query_get_structure (GstQuery* query);
// const ::GstStructure* gst_query_get_structure (::GstQuery* query);
GI_INLINE_DECL Gst::Structure get_structure () noexcept;

// gboolean gst_query_has_scheduling_mode (GstQuery* query, GstPadMode mode);
// gboolean gst_query_has_scheduling_mode (::GstQuery* query, ::GstPadMode mode);
GI_INLINE_DECL bool has_scheduling_mode (Gst::PadMode mode) noexcept;

// gboolean gst_query_has_scheduling_mode_with_flags (GstQuery* query, GstPadMode mode, GstSchedulingFlags flags);
// gboolean gst_query_has_scheduling_mode_with_flags (::GstQuery* query, ::GstPadMode mode, ::GstSchedulingFlags flags);
GI_INLINE_DECL bool has_scheduling_mode_with_flags (Gst::PadMode mode, Gst::SchedulingFlags flags) noexcept;

// void gst_query_parse_accept_caps (GstQuery* query, GstCaps** caps);
// void gst_query_parse_accept_caps (::GstQuery* query, ::GstCaps** caps);
GI_INLINE_DECL void parse_accept_caps (Gst::Caps & caps) noexcept;
GI_INLINE_DECL Gst::Caps parse_accept_caps () noexcept;

// void gst_query_parse_accept_caps_result (GstQuery* query, gboolean* result);
// void gst_query_parse_accept_caps_result (::GstQuery* query, gboolean* result);
GI_INLINE_DECL void parse_accept_caps_result (bool * result = nullptr) noexcept;
GI_INLINE_DECL bool parse_accept_caps_result () noexcept;

// void gst_query_parse_allocation (GstQuery* query, GstCaps** caps, gboolean* need_pool);
// void gst_query_parse_allocation (::GstQuery* query, ::GstCaps** caps, gboolean* need_pool);
GI_INLINE_DECL void parse_allocation (Gst::Caps * caps = nullptr, bool * need_pool = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Gst::Caps, bool> parse_allocation () noexcept;

// void gst_query_parse_bitrate (GstQuery* query, guint* nominal_bitrate);
// void gst_query_parse_bitrate (::GstQuery* query, guint* nominal_bitrate);
GI_INLINE_DECL void parse_bitrate (guint * nominal_bitrate = nullptr) noexcept;
GI_INLINE_DECL guint parse_bitrate () noexcept;

// void gst_query_parse_buffering_percent (GstQuery* query, gboolean* busy, gint* percent);
// void gst_query_parse_buffering_percent (::GstQuery* query, gboolean* busy, gint* percent);
GI_INLINE_DECL void parse_buffering_percent (bool * busy = nullptr, gint * percent = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, gint> parse_buffering_percent () noexcept;

// void gst_query_parse_buffering_range (GstQuery* query, GstFormat* format, gint64* start, gint64* stop, gint64* estimated_total);
// void gst_query_parse_buffering_range (::GstQuery* query, ::GstFormat* format, gint64* start, gint64* stop, gint64* estimated_total);
GI_INLINE_DECL void parse_buffering_range (Gst::Format * format = nullptr, gint64 * start = nullptr, gint64 * stop = nullptr, gint64 * estimated_total = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Gst::Format, gint64, gint64, gint64> parse_buffering_range () noexcept;

// void gst_query_parse_buffering_stats (GstQuery* query, GstBufferingMode* mode, gint* avg_in, gint* avg_out, gint64* buffering_left);
// void gst_query_parse_buffering_stats (::GstQuery* query, ::GstBufferingMode* mode, gint* avg_in, gint* avg_out, gint64* buffering_left);
GI_INLINE_DECL void parse_buffering_stats (Gst::BufferingMode * mode = nullptr, gint * avg_in = nullptr, gint * avg_out = nullptr, gint64 * buffering_left = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Gst::BufferingMode, gint, gint, gint64> parse_buffering_stats () noexcept;

// void gst_query_parse_caps (GstQuery* query, GstCaps** filter);
// void gst_query_parse_caps (::GstQuery* query, ::GstCaps** filter);
GI_INLINE_DECL void parse_caps (Gst::Caps & filter) noexcept;
GI_INLINE_DECL Gst::Caps parse_caps () noexcept;

// void gst_query_parse_caps_result (GstQuery* query, GstCaps** caps);
// void gst_query_parse_caps_result (::GstQuery* query, ::GstCaps** caps);
GI_INLINE_DECL void parse_caps_result (Gst::Caps & caps) noexcept;
GI_INLINE_DECL Gst::Caps parse_caps_result () noexcept;

// void gst_query_parse_context (GstQuery* query, GstContext** context);
// void gst_query_parse_context (::GstQuery* query, ::GstContext** context);
GI_INLINE_DECL void parse_context (Gst::Context & context) noexcept;
GI_INLINE_DECL Gst::Context parse_context () noexcept;

// gboolean gst_query_parse_context_type (GstQuery* query, const gchar** context_type);
// gboolean gst_query_parse_context_type (::GstQuery* query, const char** context_type);
GI_INLINE_DECL bool parse_context_type (std::string * context_type = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, std::string> parse_context_type () noexcept;

// void gst_query_parse_convert (GstQuery* query, GstFormat* src_format, gint64* src_value, GstFormat* dest_format, gint64* dest_value);
// void gst_query_parse_convert (::GstQuery* query, ::GstFormat* src_format, gint64* src_value, ::GstFormat* dest_format, gint64* dest_value);
GI_INLINE_DECL void parse_convert (Gst::Format * src_format = nullptr, gint64 * src_value = nullptr, Gst::Format * dest_format = nullptr, gint64 * dest_value = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Gst::Format, gint64, Gst::Format, gint64> parse_convert () noexcept;

// void gst_query_parse_duration (GstQuery* query, GstFormat* format, gint64* duration);
// void gst_query_parse_duration (::GstQuery* query, ::GstFormat* format, gint64* duration);
GI_INLINE_DECL void parse_duration (Gst::Format * format = nullptr, gint64 * duration = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Gst::Format, gint64> parse_duration () noexcept;

// void gst_query_parse_latency (GstQuery* query, gboolean* live, GstClockTime* min_latency, GstClockTime* max_latency);
// void gst_query_parse_latency (::GstQuery* query, gboolean* live, ::GstClockTime* min_latency, ::GstClockTime* max_latency);
GI_INLINE_DECL void parse_latency (bool * live = nullptr, Gst::ClockTime * min_latency = nullptr, Gst::ClockTime * max_latency = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, Gst::ClockTime, Gst::ClockTime> parse_latency () noexcept;

// void gst_query_parse_n_formats (GstQuery* query, guint* n_formats);
// void gst_query_parse_n_formats (::GstQuery* query, guint* n_formats);
GI_INLINE_DECL void parse_n_formats (guint * n_formats = nullptr) noexcept;
GI_INLINE_DECL guint parse_n_formats () noexcept;

// GType gst_query_parse_nth_allocation_meta (GstQuery* query, guint index, const GstStructure** params);
// GType gst_query_parse_nth_allocation_meta (::GstQuery* query, guint index, const ::GstStructure** params);
GI_INLINE_DECL GType parse_nth_allocation_meta (guint index, Gst::Structure * params = nullptr) noexcept;
GI_INLINE_DECL std::tuple<GType, Gst::Structure> parse_nth_allocation_meta (guint index) noexcept;

// void gst_query_parse_nth_allocation_param (GstQuery* query, guint index, GstAllocator** allocator, GstAllocationParams* params);
// void gst_query_parse_nth_allocation_param (::GstQuery* query, guint index, ::GstAllocator** allocator, ::GstAllocationParams* params);
GI_INLINE_DECL void parse_nth_allocation_param (guint index, Gst::Allocator * allocator = nullptr, Gst::AllocationParams * params = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Gst::Allocator, Gst::AllocationParams> parse_nth_allocation_param (guint index) noexcept;

// void gst_query_parse_nth_allocation_pool (GstQuery* query, guint index, GstBufferPool** pool, guint* size, guint* min_buffers, guint* max_buffers);
// void gst_query_parse_nth_allocation_pool (::GstQuery* query, guint index, ::GstBufferPool** pool, guint* size, guint* min_buffers, guint* max_buffers);
GI_INLINE_DECL void parse_nth_allocation_pool (guint index, Gst::BufferPool * pool = nullptr, guint * size = nullptr, guint * min_buffers = nullptr, guint * max_buffers = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Gst::BufferPool, guint, guint, guint> parse_nth_allocation_pool (guint index) noexcept;

// gboolean gst_query_parse_nth_buffering_range (GstQuery* query, guint index, gint64* start, gint64* stop);
// gboolean gst_query_parse_nth_buffering_range (::GstQuery* query, guint index, gint64* start, gint64* stop);
GI_INLINE_DECL bool parse_nth_buffering_range (guint index, gint64 * start = nullptr, gint64 * stop = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, gint64, gint64> parse_nth_buffering_range (guint index) noexcept;

// void gst_query_parse_nth_format (GstQuery* query, guint nth, GstFormat* format);
// void gst_query_parse_nth_format (::GstQuery* query, guint nth, ::GstFormat* format);
GI_INLINE_DECL void parse_nth_format (guint nth, Gst::Format * format = nullptr) noexcept;
GI_INLINE_DECL Gst::Format parse_nth_format (guint nth) noexcept;

// GstPadMode gst_query_parse_nth_scheduling_mode (GstQuery* query, guint index);
// ::GstPadMode gst_query_parse_nth_scheduling_mode (::GstQuery* query, guint index);
GI_INLINE_DECL Gst::PadMode parse_nth_scheduling_mode (guint index) noexcept;

// void gst_query_parse_position (GstQuery* query, GstFormat* format, gint64* cur);
// void gst_query_parse_position (::GstQuery* query, ::GstFormat* format, gint64* cur);
GI_INLINE_DECL void parse_position (Gst::Format * format = nullptr, gint64 * cur = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Gst::Format, gint64> parse_position () noexcept;

// void gst_query_parse_scheduling (GstQuery* query, GstSchedulingFlags* flags, gint* minsize, gint* maxsize, gint* align);
// void gst_query_parse_scheduling (::GstQuery* query, ::GstSchedulingFlags* flags, gint* minsize, gint* maxsize, gint* align);
GI_INLINE_DECL void parse_scheduling (Gst::SchedulingFlags * flags = nullptr, gint * minsize = nullptr, gint * maxsize = nullptr, gint * align = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Gst::SchedulingFlags, gint, gint, gint> parse_scheduling () noexcept;

// void gst_query_parse_seeking (GstQuery* query, GstFormat* format, gboolean* seekable, gint64* segment_start, gint64* segment_end);
// void gst_query_parse_seeking (::GstQuery* query, ::GstFormat* format, gboolean* seekable, gint64* segment_start, gint64* segment_end);
GI_INLINE_DECL void parse_seeking (Gst::Format * format = nullptr, bool * seekable = nullptr, gint64 * segment_start = nullptr, gint64 * segment_end = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Gst::Format, bool, gint64, gint64> parse_seeking () noexcept;

// void gst_query_parse_segment (GstQuery* query, gdouble* rate, GstFormat* format, gint64* start_value, gint64* stop_value);
// void gst_query_parse_segment (::GstQuery* query, gdouble* rate, ::GstFormat* format, gint64* start_value, gint64* stop_value);
GI_INLINE_DECL void parse_segment (gdouble * rate = nullptr, Gst::Format * format = nullptr, gint64 * start_value = nullptr, gint64 * stop_value = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gdouble, Gst::Format, gint64, gint64> parse_segment () noexcept;

// void gst_query_parse_uri (GstQuery* query, gchar** uri);
// void gst_query_parse_uri (::GstQuery* query, char** uri);
GI_INLINE_DECL void parse_uri (std::string * uri = nullptr) noexcept;
GI_INLINE_DECL std::string parse_uri () noexcept;

// void gst_query_parse_uri_redirection (GstQuery* query, gchar** uri);
// void gst_query_parse_uri_redirection (::GstQuery* query, char** uri);
GI_INLINE_DECL void parse_uri_redirection (std::string * uri = nullptr) noexcept;
GI_INLINE_DECL std::string parse_uri_redirection () noexcept;

// void gst_query_parse_uri_redirection_permanent (GstQuery* query, gboolean* permanent);
// void gst_query_parse_uri_redirection_permanent (::GstQuery* query, gboolean* permanent);
GI_INLINE_DECL void parse_uri_redirection_permanent (bool * permanent = nullptr) noexcept;
GI_INLINE_DECL bool parse_uri_redirection_permanent () noexcept;

// void gst_query_remove_nth_allocation_meta (GstQuery* query, guint index);
// void gst_query_remove_nth_allocation_meta (::GstQuery* query, guint index);
GI_INLINE_DECL void remove_nth_allocation_meta (guint index) noexcept;

// void gst_query_remove_nth_allocation_param (GstQuery* query, guint index);
// void gst_query_remove_nth_allocation_param (::GstQuery* query, guint index);
GI_INLINE_DECL void remove_nth_allocation_param (guint index) noexcept;

// void gst_query_remove_nth_allocation_pool (GstQuery* query, guint index);
// void gst_query_remove_nth_allocation_pool (::GstQuery* query, guint index);
GI_INLINE_DECL void remove_nth_allocation_pool (guint index) noexcept;

// void gst_query_set_accept_caps_result (GstQuery* query, gboolean result);
// void gst_query_set_accept_caps_result (::GstQuery* query, gboolean result);
GI_INLINE_DECL void set_accept_caps_result (gboolean result) noexcept;

// void gst_query_set_bitrate (GstQuery* query, guint nominal_bitrate);
// void gst_query_set_bitrate (::GstQuery* query, guint nominal_bitrate);
GI_INLINE_DECL void set_bitrate (guint nominal_bitrate) noexcept;

// void gst_query_set_buffering_percent (GstQuery* query, gboolean busy, gint percent);
// void gst_query_set_buffering_percent (::GstQuery* query, gboolean busy, gint percent);
GI_INLINE_DECL void set_buffering_percent (gboolean busy, gint percent) noexcept;

// void gst_query_set_buffering_range (GstQuery* query, GstFormat format, gint64 start, gint64 stop, gint64 estimated_total);
// void gst_query_set_buffering_range (::GstQuery* query, ::GstFormat format, gint64 start, gint64 stop, gint64 estimated_total);
GI_INLINE_DECL void set_buffering_range (Gst::Format format, gint64 start, gint64 stop, gint64 estimated_total) noexcept;

// void gst_query_set_buffering_stats (GstQuery* query, GstBufferingMode mode, gint avg_in, gint avg_out, gint64 buffering_left);
// void gst_query_set_buffering_stats (::GstQuery* query, ::GstBufferingMode mode, gint avg_in, gint avg_out, gint64 buffering_left);
GI_INLINE_DECL void set_buffering_stats (Gst::BufferingMode mode, gint avg_in, gint avg_out, gint64 buffering_left) noexcept;

// void gst_query_set_caps_result (GstQuery* query, GstCaps* caps);
// void gst_query_set_caps_result (::GstQuery* query, ::GstCaps* caps);
GI_INLINE_DECL void set_caps_result (Gst::Caps caps) noexcept;

// void gst_query_set_context (GstQuery* query, GstContext* context);
// void gst_query_set_context (::GstQuery* query, ::GstContext* context);
GI_INLINE_DECL void set_context (Gst::Context context) noexcept;

// void gst_query_set_convert (GstQuery* query, GstFormat src_format, gint64 src_value, GstFormat dest_format, gint64 dest_value);
// void gst_query_set_convert (::GstQuery* query, ::GstFormat src_format, gint64 src_value, ::GstFormat dest_format, gint64 dest_value);
GI_INLINE_DECL void set_convert (Gst::Format src_format, gint64 src_value, Gst::Format dest_format, gint64 dest_value) noexcept;

// void gst_query_set_duration (GstQuery* query, GstFormat format, gint64 duration);
// void gst_query_set_duration (::GstQuery* query, ::GstFormat format, gint64 duration);
GI_INLINE_DECL void set_duration (Gst::Format format, gint64 duration) noexcept;

// void gst_query_set_formats (GstQuery* query, gint n_formats);
// void gst_query_set_formats (::GstQuery* query, gint n_formats);
// IGNORE; not introspectable, varargs not supported

// void gst_query_set_formatsv (GstQuery* query, gint n_formats, const GstFormat* formats);
// void gst_query_set_formatsv (::GstQuery* query, gint n_formats, const ::GstFormat* formats);
GI_INLINE_DECL void set_formatsv (gint n_formats, Gst::Format * formats) noexcept;

// void gst_query_set_latency (GstQuery* query, gboolean live, GstClockTime min_latency, GstClockTime max_latency);
// void gst_query_set_latency (::GstQuery* query, gboolean live, ::GstClockTime min_latency, ::GstClockTime max_latency);
GI_INLINE_DECL void set_latency (gboolean live, ::GstClockTime min_latency, ::GstClockTime max_latency) noexcept;

// void gst_query_set_nth_allocation_param (GstQuery* query, guint index, GstAllocator* allocator, const GstAllocationParams* params);
// void gst_query_set_nth_allocation_param (::GstQuery* query, guint index, ::GstAllocator* allocator, const ::GstAllocationParams* params);
GI_INLINE_DECL void set_nth_allocation_param (guint index, Gst::Allocator allocator, const Gst::AllocationParams & params) noexcept;
GI_INLINE_DECL void set_nth_allocation_param (guint index) noexcept;

// void gst_query_set_nth_allocation_pool (GstQuery* query, guint index, GstBufferPool* pool, guint size, guint min_buffers, guint max_buffers);
// void gst_query_set_nth_allocation_pool (::GstQuery* query, guint index, ::GstBufferPool* pool, guint size, guint min_buffers, guint max_buffers);
GI_INLINE_DECL void set_nth_allocation_pool (guint index, Gst::BufferPool pool, guint size, guint min_buffers, guint max_buffers) noexcept;
GI_INLINE_DECL void set_nth_allocation_pool (guint index, guint size, guint min_buffers, guint max_buffers) noexcept;

// void gst_query_set_position (GstQuery* query, GstFormat format, gint64 cur);
// void gst_query_set_position (::GstQuery* query, ::GstFormat format, gint64 cur);
GI_INLINE_DECL void set_position (Gst::Format format, gint64 cur) noexcept;

// void gst_query_set_scheduling (GstQuery* query, GstSchedulingFlags flags, gint minsize, gint maxsize, gint align);
// void gst_query_set_scheduling (::GstQuery* query, ::GstSchedulingFlags flags, gint minsize, gint maxsize, gint align);
GI_INLINE_DECL void set_scheduling (Gst::SchedulingFlags flags, gint minsize, gint maxsize, gint align) noexcept;

// void gst_query_set_seeking (GstQuery* query, GstFormat format, gboolean seekable, gint64 segment_start, gint64 segment_end);
// void gst_query_set_seeking (::GstQuery* query, ::GstFormat format, gboolean seekable, gint64 segment_start, gint64 segment_end);
GI_INLINE_DECL void set_seeking (Gst::Format format, gboolean seekable, gint64 segment_start, gint64 segment_end) noexcept;

// void gst_query_set_segment (GstQuery* query, gdouble rate, GstFormat format, gint64 start_value, gint64 stop_value);
// void gst_query_set_segment (::GstQuery* query, gdouble rate, ::GstFormat format, gint64 start_value, gint64 stop_value);
GI_INLINE_DECL void set_segment (gdouble rate, Gst::Format format, gint64 start_value, gint64 stop_value) noexcept;

// void gst_query_set_uri (GstQuery* query, const gchar* uri);
// void gst_query_set_uri (::GstQuery* query, const char* uri);
GI_INLINE_DECL void set_uri (const std::string & uri) noexcept;

// void gst_query_set_uri_redirection (GstQuery* query, const gchar* uri);
// void gst_query_set_uri_redirection (::GstQuery* query, const char* uri);
GI_INLINE_DECL void set_uri_redirection (const std::string & uri) noexcept;

// void gst_query_set_uri_redirection_permanent (GstQuery* query, gboolean permanent);
// void gst_query_set_uri_redirection_permanent (::GstQuery* query, gboolean permanent);
GI_INLINE_DECL void set_uri_redirection_permanent (gboolean permanent) noexcept;

// GstStructure* gst_query_writable_structure (GstQuery* query);
// ::GstStructure* gst_query_writable_structure (::GstQuery* query);
GI_INLINE_DECL Gst::Structure writable_structure () noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/query_extra_def.hpp>)
#include <gst/query_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/query_extra.hpp>)
#include <gst/query_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class Query : public GI_GST_QUERY_BASE
{ typedef GI_GST_QUERY_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstQuery>
{ typedef Gst::Query type; }; 

} // namespace repository

} // namespace gi

#endif
