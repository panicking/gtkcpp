// AUTO-GENERATED

#ifndef _GI_GST__FUNCTIONS_IMPL_HPP_
#define _GI_GST__FUNCTIONS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace CoreErrorNS_ {

// GQuark gst_core_error_quark ();
// ::GQuark gst_core_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_core_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace CoreErrorNS_

namespace DebugLevelNS_ {

// const gchar* gst_debug_level_get_name (GstDebugLevel level);
// const char* gst_debug_level_get_name (::GstDebugLevel level);
std::string get_name (Gst::DebugLevel level) noexcept
{
  typedef const char* (*call_wrap_t) (::GstDebugLevel level);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_debug_level_get_name;
  auto level_to_c = gi::unwrap (level);
  auto _temp_ret = call_wrap_v ((::GstDebugLevel) (level_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

} // namespace DebugLevelNS_

namespace EventTypeNS_ {

// GstEventTypeFlags gst_event_type_get_flags (GstEventType type);
// ::GstEventTypeFlags gst_event_type_get_flags (::GstEventType type);
Gst::EventTypeFlags get_flags (Gst::EventType type) noexcept
{
  typedef ::GstEventTypeFlags (*call_wrap_t) (::GstEventType type);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_type_get_flags;
  auto type_to_c = gi::unwrap (type);
  auto _temp_ret = call_wrap_v ((::GstEventType) (type_to_c));
  return gi::wrap (_temp_ret);
}

// const gchar* gst_event_type_get_name (GstEventType type);
// const char* gst_event_type_get_name (::GstEventType type);
std::string get_name (Gst::EventType type) noexcept
{
  typedef const char* (*call_wrap_t) (::GstEventType type);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_type_get_name;
  auto type_to_c = gi::unwrap (type);
  auto _temp_ret = call_wrap_v ((::GstEventType) (type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GQuark gst_event_type_to_quark (GstEventType type);
// ::GQuark gst_event_type_to_quark (::GstEventType type);
GLib::Quark to_quark (Gst::EventType type) noexcept
{
  typedef ::GQuark (*call_wrap_t) (::GstEventType type);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_type_to_quark;
  auto type_to_c = gi::unwrap (type);
  auto _temp_ret = call_wrap_v ((::GstEventType) (type_to_c));
  return _temp_ret;
}

} // namespace EventTypeNS_

namespace FormatNS_ {

// GstFormat gst_format_get_by_nick (const gchar* nick);
// ::GstFormat gst_format_get_by_nick (const char* nick);
Gst::Format get_by_nick (const std::string & nick) noexcept
{
  typedef ::GstFormat (*call_wrap_t) (const char* nick);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_format_get_by_nick;
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (nick_to_c));
  return gi::wrap (_temp_ret);
}

// const GstFormatDefinition* gst_format_get_details (GstFormat format);
// const ::GstFormatDefinition* gst_format_get_details (::GstFormat format);
Gst::FormatDefinition get_details (Gst::Format format) noexcept
{
  typedef const ::GstFormatDefinition* (*call_wrap_t) (::GstFormat format);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_format_get_details;
  auto format_to_c = gi::unwrap (format);
  auto _temp_ret = call_wrap_v ((::GstFormat) (format_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* gst_format_get_name (GstFormat format);
// const char* gst_format_get_name (::GstFormat format);
std::string get_name (Gst::Format format) noexcept
{
  typedef const char* (*call_wrap_t) (::GstFormat format);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_format_get_name;
  auto format_to_c = gi::unwrap (format);
  auto _temp_ret = call_wrap_v ((::GstFormat) (format_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GstIterator* gst_format_iterate_definitions ();
// ::GstIterator* gst_format_iterate_definitions ();
Gst::Iterator iterate_definitions () noexcept
{
  typedef ::GstIterator* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_format_iterate_definitions;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstFormat gst_format_register (const gchar* nick, const gchar* description);
// ::GstFormat gst_format_register (const char* nick, const char* description);
Gst::Format register_ (const std::string & nick, const std::string & description) noexcept
{
  typedef ::GstFormat (*call_wrap_t) (const char* nick, const char* description);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_format_register;
  auto description_to_c = gi::unwrap (description, gi::transfer_none, gi::direction_in);
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (nick_to_c), (const char*) (description_to_c));
  return gi::wrap (_temp_ret);
}

// GQuark gst_format_to_quark (GstFormat format);
// ::GQuark gst_format_to_quark (::GstFormat format);
GLib::Quark to_quark (Gst::Format format) noexcept
{
  typedef ::GQuark (*call_wrap_t) (::GstFormat format);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_format_to_quark;
  auto format_to_c = gi::unwrap (format);
  auto _temp_ret = call_wrap_v ((::GstFormat) (format_to_c));
  return _temp_ret;
}

} // namespace FormatNS_

namespace LibraryErrorNS_ {

// GQuark gst_library_error_quark ();
// ::GQuark gst_library_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_library_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace LibraryErrorNS_

namespace MessageTypeNS_ {

// const gchar* gst_message_type_get_name (GstMessageType type);
// const char* gst_message_type_get_name (::GstMessageType type);
std::string get_name (Gst::MessageType type) noexcept
{
  typedef const char* (*call_wrap_t) (::GstMessageType type);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_type_get_name;
  auto type_to_c = gi::unwrap (type);
  auto _temp_ret = call_wrap_v ((::GstMessageType) (type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GQuark gst_message_type_to_quark (GstMessageType type);
// ::GQuark gst_message_type_to_quark (::GstMessageType type);
GLib::Quark to_quark (Gst::MessageType type) noexcept
{
  typedef ::GQuark (*call_wrap_t) (::GstMessageType type);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_type_to_quark;
  auto type_to_c = gi::unwrap (type);
  auto _temp_ret = call_wrap_v ((::GstMessageType) (type_to_c));
  return _temp_ret;
}

} // namespace MessageTypeNS_

namespace PadModeNS_ {

// const gchar* gst_pad_mode_get_name (GstPadMode mode);
// const char* gst_pad_mode_get_name (::GstPadMode mode);
std::string get_name (Gst::PadMode mode) noexcept
{
  typedef const char* (*call_wrap_t) (::GstPadMode mode);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_mode_get_name;
  auto mode_to_c = gi::unwrap (mode);
  auto _temp_ret = call_wrap_v ((::GstPadMode) (mode_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

} // namespace PadModeNS_

namespace ParseErrorNS_ {

// GQuark gst_parse_error_quark ();
// ::GQuark gst_parse_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_parse_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace ParseErrorNS_

namespace PluginErrorNS_ {

// GQuark gst_plugin_error_quark ();
// ::GQuark gst_plugin_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_plugin_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace PluginErrorNS_

namespace QueryTypeNS_ {

// GstQueryTypeFlags gst_query_type_get_flags (GstQueryType type);
// ::GstQueryTypeFlags gst_query_type_get_flags (::GstQueryType type);
Gst::QueryTypeFlags get_flags (Gst::QueryType type) noexcept
{
  typedef ::GstQueryTypeFlags (*call_wrap_t) (::GstQueryType type);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_type_get_flags;
  auto type_to_c = gi::unwrap (type);
  auto _temp_ret = call_wrap_v ((::GstQueryType) (type_to_c));
  return gi::wrap (_temp_ret);
}

// const gchar* gst_query_type_get_name (GstQueryType type);
// const char* gst_query_type_get_name (::GstQueryType type);
std::string get_name (Gst::QueryType type) noexcept
{
  typedef const char* (*call_wrap_t) (::GstQueryType type);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_type_get_name;
  auto type_to_c = gi::unwrap (type);
  auto _temp_ret = call_wrap_v ((::GstQueryType) (type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GQuark gst_query_type_to_quark (GstQueryType type);
// ::GQuark gst_query_type_to_quark (::GstQueryType type);
GLib::Quark to_quark (Gst::QueryType type) noexcept
{
  typedef ::GQuark (*call_wrap_t) (::GstQueryType type);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_query_type_to_quark;
  auto type_to_c = gi::unwrap (type);
  auto _temp_ret = call_wrap_v ((::GstQueryType) (type_to_c));
  return _temp_ret;
}

} // namespace QueryTypeNS_

namespace ResourceErrorNS_ {

// GQuark gst_resource_error_quark ();
// ::GQuark gst_resource_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_resource_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace ResourceErrorNS_

namespace StateChangeNS_ {

// const gchar* gst_state_change_get_name (GstStateChange transition);
// const char* gst_state_change_get_name (::GstStateChange transition);
std::string get_name (Gst::StateChange transition) noexcept
{
  typedef const char* (*call_wrap_t) (::GstStateChange transition);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_state_change_get_name;
  auto transition_to_c = gi::unwrap (transition);
  auto _temp_ret = call_wrap_v ((::GstStateChange) (transition_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

} // namespace StateChangeNS_

namespace StreamErrorNS_ {

// GQuark gst_stream_error_quark ();
// ::GQuark gst_stream_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_stream_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace StreamErrorNS_

namespace StreamTypeNS_ {

// const gchar* gst_stream_type_get_name (GstStreamType stype);
// const char* gst_stream_type_get_name (::GstStreamType stype);
std::string get_name (Gst::StreamType stype) noexcept
{
  typedef const char* (*call_wrap_t) (::GstStreamType stype);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_stream_type_get_name;
  auto stype_to_c = gi::unwrap (stype);
  auto _temp_ret = call_wrap_v ((::GstStreamType) (stype_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

} // namespace StreamTypeNS_

namespace TocEntryTypeNS_ {

// const gchar* gst_toc_entry_type_get_nick (GstTocEntryType type);
// const char* gst_toc_entry_type_get_nick (::GstTocEntryType type);
std::string get_nick (Gst::TocEntryType type) noexcept
{
  typedef const char* (*call_wrap_t) (::GstTocEntryType type);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_toc_entry_type_get_nick;
  auto type_to_c = gi::unwrap (type);
  auto _temp_ret = call_wrap_v ((::GstTocEntryType) (type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

} // namespace TocEntryTypeNS_

namespace URIErrorNS_ {

// GQuark gst_uri_error_quark ();
// ::GQuark gst_uri_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace URIErrorNS_

// gboolean gst_calculate_linear_regression (const GstClockTime* xy, GstClockTime* temp, guint n, GstClockTime* m_num, GstClockTime* m_denom, GstClockTime* b, GstClockTime* xbase, gdouble* r_squared);
// gboolean gst_calculate_linear_regression (const ::GstClockTime xy, ::GstClockTime temp, guint n, ::GstClockTime* m_num, ::GstClockTime* m_denom, ::GstClockTime* b, ::GstClockTime* xbase, gdouble* r_squared);
// IGNORE; not introspectable, inconsistent in temp pointer depth (1 vs 0), inconsistent in xy pointer depth (1 vs 0)

// void gst_clear_mini_object (GstMiniObject** object_ptr);
// void gst_clear_mini_object (::GstMiniObject* object_ptr);
// IGNORE; not introspectable, inconsistent in object_ptr pointer depth (2 vs 1)

// void gst_clear_object (GstObject** object_ptr);
// void gst_clear_object (::GstObject* object_ptr);
// IGNORE; not introspectable, inconsistent in object_ptr pointer depth (2 vs 1)

// void gst_clear_structure (GstStructure** structure_ptr);
// void gst_clear_structure (::GstStructure* structure_ptr);
// IGNORE; not introspectable, inconsistent in structure_ptr pointer depth (2 vs 1)

// void gst_debug_add_log_function (GstLogFunction func, gpointer user_data, GDestroyNotify notify);
// void gst_debug_add_log_function ( func, void* user_data, GLib::DestroyNotify::cfunction_type notify);
// SKIP; func type  not supported

// void gst_debug_add_ring_buffer_logger (guint max_size_per_thread, guint thread_timeout);
// void gst_debug_add_ring_buffer_logger (guint max_size_per_thread, guint thread_timeout);
void debug_add_ring_buffer_logger (guint max_size_per_thread, guint thread_timeout) noexcept
{
  typedef void (*call_wrap_t) (guint max_size_per_thread, guint thread_timeout);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_debug_add_ring_buffer_logger;
  auto thread_timeout_to_c = thread_timeout;
  auto max_size_per_thread_to_c = max_size_per_thread;
  call_wrap_v ((guint) (max_size_per_thread_to_c), (guint) (thread_timeout_to_c));
}

// gchar* gst_debug_bin_to_dot_data (GstBin* bin, GstDebugGraphDetails details);
// char* gst_debug_bin_to_dot_data (::GstBin* bin, ::GstDebugGraphDetails details);
std::string debug_bin_to_dot_data (Gst::Bin bin, Gst::DebugGraphDetails details) noexcept
{
  typedef char* (*call_wrap_t) (::GstBin* bin, ::GstDebugGraphDetails details);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_debug_bin_to_dot_data;
  auto details_to_c = gi::unwrap (details);
  auto bin_to_c = gi::unwrap (bin, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstBin*) (bin_to_c), (::GstDebugGraphDetails) (details_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gst_debug_bin_to_dot_file (GstBin* bin, GstDebugGraphDetails details, const gchar* file_name);
// void gst_debug_bin_to_dot_file (::GstBin* bin, ::GstDebugGraphDetails details, const char* file_name);
void debug_bin_to_dot_file (Gst::Bin bin, Gst::DebugGraphDetails details, const std::string & file_name) noexcept
{
  typedef void (*call_wrap_t) (::GstBin* bin, ::GstDebugGraphDetails details, const char* file_name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_debug_bin_to_dot_file;
  auto file_name_to_c = gi::unwrap (file_name, gi::transfer_none, gi::direction_in);
  auto details_to_c = gi::unwrap (details);
  auto bin_to_c = gi::unwrap (bin, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstBin*) (bin_to_c), (::GstDebugGraphDetails) (details_to_c), (const char*) (file_name_to_c));
}

// void gst_debug_bin_to_dot_file_with_ts (GstBin* bin, GstDebugGraphDetails details, const gchar* file_name);
// void gst_debug_bin_to_dot_file_with_ts (::GstBin* bin, ::GstDebugGraphDetails details, const char* file_name);
void debug_bin_to_dot_file_with_ts (Gst::Bin bin, Gst::DebugGraphDetails details, const std::string & file_name) noexcept
{
  typedef void (*call_wrap_t) (::GstBin* bin, ::GstDebugGraphDetails details, const char* file_name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_debug_bin_to_dot_file_with_ts;
  auto file_name_to_c = gi::unwrap (file_name, gi::transfer_none, gi::direction_in);
  auto details_to_c = gi::unwrap (details);
  auto bin_to_c = gi::unwrap (bin, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstBin*) (bin_to_c), (::GstDebugGraphDetails) (details_to_c), (const char*) (file_name_to_c));
}

// gchar* gst_debug_construct_term_color (guint colorinfo);
// char* gst_debug_construct_term_color (guint colorinfo);
std::string debug_construct_term_color (guint colorinfo) noexcept
{
  typedef char* (*call_wrap_t) (guint colorinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_debug_construct_term_color;
  auto colorinfo_to_c = colorinfo;
  auto _temp_ret = call_wrap_v ((guint) (colorinfo_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gint gst_debug_construct_win_color (guint colorinfo);
// gint gst_debug_construct_win_color (guint colorinfo);
gint debug_construct_win_color (guint colorinfo) noexcept
{
  typedef gint (*call_wrap_t) (guint colorinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_debug_construct_win_color;
  auto colorinfo_to_c = colorinfo;
  auto _temp_ret = call_wrap_v ((guint) (colorinfo_to_c));
  return _temp_ret;
}

// GSList* gst_debug_get_all_categories ();
// ::GSList* gst_debug_get_all_categories ();
std::vector<Gst::DebugCategory> debug_get_all_categories () noexcept
{
  typedef ::GSList* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_debug_get_all_categories;
  auto _temp_ret = call_wrap_v ();
  return gi::detail::wrap_list<Gst::DebugCategory> (_temp_ret, gi::transfer_container);
}

// GstDebugColorMode gst_debug_get_color_mode ();
// ::GstDebugColorMode gst_debug_get_color_mode ();
Gst::DebugColorMode debug_get_color_mode () noexcept
{
  typedef ::GstDebugColorMode (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_debug_get_color_mode;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret);
}

// GstDebugLevel gst_debug_get_default_threshold ();
// ::GstDebugLevel gst_debug_get_default_threshold ();
Gst::DebugLevel debug_get_default_threshold () noexcept
{
  typedef ::GstDebugLevel (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_debug_get_default_threshold;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret);
}

// gchar* gst_debug_get_stack_trace (GstStackTraceFlags flags);
// char* gst_debug_get_stack_trace (::GstStackTraceFlags flags);
std::string debug_get_stack_trace (Gst::StackTraceFlags flags) noexcept
{
  typedef char* (*call_wrap_t) (::GstStackTraceFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_debug_get_stack_trace;
  auto flags_to_c = gi::unwrap (flags);
  auto _temp_ret = call_wrap_v ((::GstStackTraceFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gst_debug_is_active ();
// gboolean gst_debug_is_active ();
bool debug_is_active () noexcept
{
  typedef gboolean (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_debug_is_active;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// gboolean gst_debug_is_colored ();
// gboolean gst_debug_is_colored ();
bool debug_is_colored () noexcept
{
  typedef gboolean (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_debug_is_colored;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// void gst_debug_log (GstDebugCategory* category, GstDebugLevel level, const gchar* file, const gchar* function, gint line, GObject* object, const gchar* format);
// void gst_debug_log (::GstDebugCategory* category, ::GstDebugLevel level, const char* file, const char* function, gint line, ::GObject* object, const char* format);
// IGNORE; not introspectable, varargs not supported

// void gst_debug_log_default (GstDebugCategory* category, GstDebugLevel level, const gchar* file, const gchar* function, gint line, GObject* object, GstDebugMessage* message, gpointer user_data);
// void gst_debug_log_default (::GstDebugCategory* category, ::GstDebugLevel level, const char* file, const char* function, gint line, ::GObject* object,  message, void* user_data);
// SKIP; message type  not supported

// gchar* gst_debug_log_get_line (GstDebugCategory* category, GstDebugLevel level, const gchar* file, const gchar* function, gint line, GObject* object, GstDebugMessage* message);
// char* gst_debug_log_get_line (::GstDebugCategory* category, ::GstDebugLevel level, const char* file, const char* function, gint line, ::GObject* object,  message);
// SKIP; message type  not supported

// void gst_debug_log_literal (GstDebugCategory* category, GstDebugLevel level, const gchar* file, const gchar* function, gint line, GObject* object, const gchar* message_string);
// void gst_debug_log_literal (::GstDebugCategory* category, ::GstDebugLevel level, const char* file, const char* function, gint line, ::GObject* object, const char* message_string);
void debug_log_literal (Gst::DebugCategory category, Gst::DebugLevel level, const std::string & file, const std::string & function, gint line, GObject::Object object, const std::string & message_string) noexcept
{
  typedef void (*call_wrap_t) (::GstDebugCategory* category, ::GstDebugLevel level, const char* file, const char* function, gint line, ::GObject* object, const char* message_string);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_debug_log_literal;
  auto message_string_to_c = gi::unwrap (message_string, gi::transfer_none, gi::direction_in);
  auto object_to_c = gi::unwrap (object, gi::transfer_none, gi::direction_in);
  auto line_to_c = line;
  auto function_to_c = gi::unwrap (function, gi::transfer_none, gi::direction_in);
  auto file_to_c = gi::unwrap (file, gi::transfer_none, gi::direction_in);
  auto level_to_c = gi::unwrap (level);
  auto category_to_c = gi::unwrap (category, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstDebugCategory*) (category_to_c), (::GstDebugLevel) (level_to_c), (const char*) (file_to_c), (const char*) (function_to_c), (gint) (line_to_c), (::GObject*) (object_to_c), (const char*) (message_string_to_c));
}
void debug_log_literal (Gst::DebugCategory category, Gst::DebugLevel level, const std::string & file, const std::string & function, gint line, const std::string & message_string) noexcept
{
  typedef void (*call_wrap_t) (::GstDebugCategory* category, ::GstDebugLevel level, const char* file, const char* function, gint line, ::GObject* object, const char* message_string);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_debug_log_literal;
  auto message_string_to_c = gi::unwrap (message_string, gi::transfer_none, gi::direction_in);
  auto object_to_c = nullptr;
  auto line_to_c = line;
  auto function_to_c = gi::unwrap (function, gi::transfer_none, gi::direction_in);
  auto file_to_c = gi::unwrap (file, gi::transfer_none, gi::direction_in);
  auto level_to_c = gi::unwrap (level);
  auto category_to_c = gi::unwrap (category, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstDebugCategory*) (category_to_c), (::GstDebugLevel) (level_to_c), (const char*) (file_to_c), (const char*) (function_to_c), (gint) (line_to_c), (::GObject*) (object_to_c), (const char*) (message_string_to_c));
}

// void gst_debug_log_valist (GstDebugCategory* category, GstDebugLevel level, const gchar* file, const gchar* function, gint line, GObject* object, const gchar* format, va_list args);
// void gst_debug_log_valist (::GstDebugCategory* category, ::GstDebugLevel level, const char* file, const char* function, gint line, ::GObject* object, const char* format,  args);
// IGNORE; not introspectable, args type  not supported

// void gst_debug_print_stack_trace ();
// void gst_debug_print_stack_trace ();
void debug_print_stack_trace () noexcept
{
  typedef void (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_debug_print_stack_trace;
  call_wrap_v ();
}

// guint gst_debug_remove_log_function (GstLogFunction func);
// guint gst_debug_remove_log_function ( func);
// SKIP; func type  not supported

// guint gst_debug_remove_log_function_by_data (gpointer data);
// guint gst_debug_remove_log_function_by_data (void* data);
guint debug_remove_log_function_by_data (void* data) noexcept
{
  typedef guint (*call_wrap_t) (void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_debug_remove_log_function_by_data;
  auto data_to_c = data;
  auto _temp_ret = call_wrap_v ((void*) (data_to_c));
  return _temp_ret;
}

// void gst_debug_remove_ring_buffer_logger ();
// void gst_debug_remove_ring_buffer_logger ();
void debug_remove_ring_buffer_logger () noexcept
{
  typedef void (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_debug_remove_ring_buffer_logger;
  call_wrap_v ();
}

// gchar** gst_debug_ring_buffer_logger_get_logs ();
// char** gst_debug_ring_buffer_logger_get_logs ();
std::vector<std::string> debug_ring_buffer_logger_get_logs () noexcept
{
  typedef char** (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_debug_ring_buffer_logger_get_logs;
  auto _temp_ret = call_wrap_v ();
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// void gst_debug_set_active (gboolean active);
// void gst_debug_set_active (gboolean active);
void debug_set_active (gboolean active) noexcept
{
  typedef void (*call_wrap_t) (gboolean active);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_debug_set_active;
  auto active_to_c = active;
  call_wrap_v ((gboolean) (active_to_c));
}

// void gst_debug_set_color_mode (GstDebugColorMode mode);
// void gst_debug_set_color_mode (::GstDebugColorMode mode);
void debug_set_color_mode (Gst::DebugColorMode mode) noexcept
{
  typedef void (*call_wrap_t) (::GstDebugColorMode mode);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_debug_set_color_mode;
  auto mode_to_c = gi::unwrap (mode);
  call_wrap_v ((::GstDebugColorMode) (mode_to_c));
}

// void gst_debug_set_color_mode_from_string (const gchar* mode);
// void gst_debug_set_color_mode_from_string (const char* mode);
void debug_set_color_mode_from_string (const std::string & mode) noexcept
{
  typedef void (*call_wrap_t) (const char* mode);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_debug_set_color_mode_from_string;
  auto mode_to_c = gi::unwrap (mode, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (mode_to_c));
}

// void gst_debug_set_colored (gboolean colored);
// void gst_debug_set_colored (gboolean colored);
void debug_set_colored (gboolean colored) noexcept
{
  typedef void (*call_wrap_t) (gboolean colored);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_debug_set_colored;
  auto colored_to_c = colored;
  call_wrap_v ((gboolean) (colored_to_c));
}

// void gst_debug_set_default_threshold (GstDebugLevel level);
// void gst_debug_set_default_threshold (::GstDebugLevel level);
void debug_set_default_threshold (Gst::DebugLevel level) noexcept
{
  typedef void (*call_wrap_t) (::GstDebugLevel level);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_debug_set_default_threshold;
  auto level_to_c = gi::unwrap (level);
  call_wrap_v ((::GstDebugLevel) (level_to_c));
}

// void gst_debug_set_threshold_for_name (const gchar* name, GstDebugLevel level);
// void gst_debug_set_threshold_for_name (const char* name, ::GstDebugLevel level);
void debug_set_threshold_for_name (const std::string & name, Gst::DebugLevel level) noexcept
{
  typedef void (*call_wrap_t) (const char* name, ::GstDebugLevel level);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_debug_set_threshold_for_name;
  auto level_to_c = gi::unwrap (level);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (name_to_c), (::GstDebugLevel) (level_to_c));
}

// void gst_debug_set_threshold_from_string (const gchar* list, gboolean reset);
// void gst_debug_set_threshold_from_string (const char* list, gboolean reset);
void debug_set_threshold_from_string (const std::string & list, gboolean reset) noexcept
{
  typedef void (*call_wrap_t) (const char* list, gboolean reset);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_debug_set_threshold_from_string;
  auto reset_to_c = reset;
  auto list_to_c = gi::unwrap (list, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (list_to_c), (gboolean) (reset_to_c));
}

// void gst_debug_unset_threshold_for_name (const gchar* name);
// void gst_debug_unset_threshold_for_name (const char* name);
void debug_unset_threshold_for_name (const std::string & name) noexcept
{
  typedef void (*call_wrap_t) (const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_debug_unset_threshold_for_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (name_to_c));
}

// void gst_deinit ();
// void gst_deinit ();
void deinit () noexcept
{
  typedef void (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_deinit;
  call_wrap_v ();
}

// gboolean gst_dynamic_type_register (GstPlugin* plugin, GType type);
// gboolean gst_dynamic_type_register (::GstPlugin* plugin, GType type);
bool dynamic_type_register (Gst::Plugin plugin, GType type) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPlugin* plugin, GType type);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_dynamic_type_register;
  auto type_to_c = type;
  auto plugin_to_c = gi::unwrap (plugin, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPlugin*) (plugin_to_c), (GType) (type_to_c));
  return _temp_ret;
}

// gchar* gst_error_get_message (GQuark domain, gint code);
// char* gst_error_get_message (::GQuark domain, gint code);
std::string error_get_message (::GQuark domain, gint code) noexcept
{
  typedef char* (*call_wrap_t) (::GQuark domain, gint code);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_error_get_message;
  auto code_to_c = code;
  auto domain_to_c = domain;
  auto _temp_ret = call_wrap_v ((::GQuark) (domain_to_c), (gint) (code_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* gst_filename_to_uri (const gchar* filename, GError ** error);
// char* gst_filename_to_uri (const char* filename, GError ** error);
std::string filename_to_uri (const std::string & filename)
{
  typedef char* (*call_wrap_t) (const char* filename, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_filename_to_uri;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string filename_to_uri (const std::string & filename, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (const char* filename, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_filename_to_uri;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const gchar* gst_flow_get_name (GstFlowReturn ret);
// const char* gst_flow_get_name (::GstFlowReturn ret);
std::string flow_get_name (Gst::FlowReturn ret) noexcept
{
  typedef const char* (*call_wrap_t) (::GstFlowReturn ret);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_flow_get_name;
  auto ret_to_c = gi::unwrap (ret);
  auto _temp_ret = call_wrap_v ((::GstFlowReturn) (ret_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GQuark gst_flow_to_quark (GstFlowReturn ret);
// ::GQuark gst_flow_to_quark (::GstFlowReturn ret);
GLib::Quark flow_to_quark (Gst::FlowReturn ret) noexcept
{
  typedef ::GQuark (*call_wrap_t) (::GstFlowReturn ret);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_flow_to_quark;
  auto ret_to_c = gi::unwrap (ret);
  auto _temp_ret = call_wrap_v ((::GstFlowReturn) (ret_to_c));
  return _temp_ret;
}

// gboolean gst_formats_contains (const GstFormat* formats, GstFormat format);
// gboolean gst_formats_contains (const ::GstFormat* formats, ::GstFormat format);
bool formats_contains (const std::vector<Gst::Format> & formats, Gst::Format format) noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstFormat* formats, ::GstFormat format);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_formats_contains;
  auto format_to_c = gi::unwrap (format);
  auto formats_i = detail::make_list_unwrap_range<traits::ctype<Gst::Format>::type> (formats);
  auto formats_w = unwrap (formats_i, gi::transfer_none, direction_in);
  auto formats_to_c = formats_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((const ::GstFormat*) (formats_to_c), (::GstFormat) (format_to_c));
  return _temp_ret;
}

// const gchar* gst_get_main_executable_path ();
// const char* gst_get_main_executable_path ();
std::string get_main_executable_path () noexcept
{
  typedef const char* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_get_main_executable_path;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gchar* gst_info_strdup_printf (const gchar* format);
// char* gst_info_strdup_printf (const char* format);
// IGNORE; not introspectable, varargs not supported

// gchar* gst_info_strdup_vprintf (const gchar* format, va_list args);
// char* gst_info_strdup_vprintf (const char* format,  args);
// IGNORE; not introspectable, args type  not supported

// gint gst_info_vasprintf (gchar** result, const gchar* format, va_list args);
// gint gst_info_vasprintf (char** result, const char* format,  args);
// IGNORE; not introspectable, args type  not supported

// gboolean gst_init_check (int* argc, char*** argv, GError ** error);
// gboolean gst_init_check (gint* argc, char*** argv, GError ** error);
// SKIP; inout array not supported

// GOptionGroup* gst_init_get_option_group ();
// ::GOptionGroup* gst_init_get_option_group ();
GLib::OptionGroup init_get_option_group () noexcept
{
  typedef ::GOptionGroup* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_init_get_option_group;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gst_is_caps_features (gconstpointer obj);
// gboolean gst_is_caps_features (const void* obj);
bool is_caps_features (const void* obj) noexcept
{
  typedef gboolean (*call_wrap_t) (const void* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_is_caps_features;
  auto obj_to_c = obj;
  auto _temp_ret = call_wrap_v ((const void*) (obj_to_c));
  return _temp_ret;
}

// gboolean gst_is_initialized ();
// gboolean gst_is_initialized ();
bool is_initialized () noexcept
{
  typedef gboolean (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_is_initialized;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// GstStructure* gst_make_element_message_details (const char* name);
// ::GstStructure* gst_make_element_message_details (const char* name);
// IGNORE; not introspectable, varargs not supported

// GParamSpec* gst_param_spec_array (const gchar* name, const gchar* nick, const gchar* blurb, GParamSpec* element_spec, GParamFlags flags);
// ::GParamSpec* gst_param_spec_array (const char* name, const char* nick, const char* blurb, ::GParamSpec* element_spec, ::GParamFlags flags);
GObject::ParamSpec param_spec_array (const std::string & name, const std::string & nick, const std::string & blurb, GObject::ParamSpec element_spec, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, ::GParamSpec* element_spec, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_param_spec_array;
  auto flags_to_c = gi::unwrap (flags);
  auto element_spec_to_c = gi::unwrap (element_spec, gi::transfer_none, gi::direction_in);
  auto blurb_to_c = gi::unwrap (blurb, gi::transfer_none, gi::direction_in);
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (::GParamSpec*) (element_spec_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GParamSpec* gst_param_spec_fraction (const gchar* name, const gchar* nick, const gchar* blurb, gint min_num, gint min_denom, gint max_num, gint max_denom, gint default_num, gint default_denom, GParamFlags flags);
// ::GParamSpec* gst_param_spec_fraction (const char* name, const char* nick, const char* blurb, gint min_num, gint min_denom, gint max_num, gint max_denom, gint default_num, gint default_denom, ::GParamFlags flags);
GObject::ParamSpec param_spec_fraction (const std::string & name, const std::string & nick, const std::string & blurb, gint min_num, gint min_denom, gint max_num, gint max_denom, gint default_num, gint default_denom, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, gint min_num, gint min_denom, gint max_num, gint max_denom, gint default_num, gint default_denom, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_param_spec_fraction;
  auto flags_to_c = gi::unwrap (flags);
  auto default_denom_to_c = default_denom;
  auto default_num_to_c = default_num;
  auto max_denom_to_c = max_denom;
  auto max_num_to_c = max_num;
  auto min_denom_to_c = min_denom;
  auto min_num_to_c = min_num;
  auto blurb_to_c = gi::unwrap (blurb, gi::transfer_none, gi::direction_in);
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (gint) (min_num_to_c), (gint) (min_denom_to_c), (gint) (max_num_to_c), (gint) (max_denom_to_c), (gint) (default_num_to_c), (gint) (default_denom_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GType gst_parent_buffer_meta_api_get_type ();
// GType gst_parent_buffer_meta_api_get_type ();
GType parent_buffer_meta_api_get_type () noexcept
{
  typedef GType (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_parent_buffer_meta_api_get_type;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// GstElement* gst_parse_bin_from_description (const gchar* bin_description, gboolean ghost_unlinked_pads, GError ** error);
// ::GstBin* gst_parse_bin_from_description (const char* bin_description, gboolean ghost_unlinked_pads, GError ** error);
Gst::Bin parse_bin_from_description (const std::string & bin_description, gboolean ghost_unlinked_pads)
{
  typedef ::GstBin* (*call_wrap_t) (const char* bin_description, gboolean ghost_unlinked_pads, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_parse_bin_from_description;
  auto ghost_unlinked_pads_to_c = ghost_unlinked_pads;
  auto bin_description_to_c = gi::unwrap (bin_description, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (bin_description_to_c), (gboolean) (ghost_unlinked_pads_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gst::Bin parse_bin_from_description (const std::string & bin_description, gboolean ghost_unlinked_pads, GLib::Error * _error) noexcept
{
  typedef ::GstBin* (*call_wrap_t) (const char* bin_description, gboolean ghost_unlinked_pads, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_parse_bin_from_description;
  auto ghost_unlinked_pads_to_c = ghost_unlinked_pads;
  auto bin_description_to_c = gi::unwrap (bin_description, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (bin_description_to_c), (gboolean) (ghost_unlinked_pads_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GstElement* gst_parse_bin_from_description_full (const gchar* bin_description, gboolean ghost_unlinked_pads, GstParseContext* context, GstParseFlags flags, GError ** error);
// ::GstElement* gst_parse_bin_from_description_full (const char* bin_description, gboolean ghost_unlinked_pads, ::GstParseContext* context, ::GstParseFlags flags, GError ** error);
Gst::Element parse_bin_from_description_full (const std::string & bin_description, gboolean ghost_unlinked_pads, Gst::ParseContext context, Gst::ParseFlags flags)
{
  typedef ::GstElement* (*call_wrap_t) (const char* bin_description, gboolean ghost_unlinked_pads, ::GstParseContext* context, ::GstParseFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_parse_bin_from_description_full;
  auto flags_to_c = gi::unwrap (flags);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto ghost_unlinked_pads_to_c = ghost_unlinked_pads;
  auto bin_description_to_c = gi::unwrap (bin_description, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (bin_description_to_c), (gboolean) (ghost_unlinked_pads_to_c), (::GstParseContext*) (context_to_c), (::GstParseFlags) (flags_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gst::Element parse_bin_from_description_full (const std::string & bin_description, gboolean ghost_unlinked_pads, Gst::ParseFlags flags)
{
  typedef ::GstElement* (*call_wrap_t) (const char* bin_description, gboolean ghost_unlinked_pads, ::GstParseContext* context, ::GstParseFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_parse_bin_from_description_full;
  auto flags_to_c = gi::unwrap (flags);
  auto context_to_c = nullptr;
  auto ghost_unlinked_pads_to_c = ghost_unlinked_pads;
  auto bin_description_to_c = gi::unwrap (bin_description, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (bin_description_to_c), (gboolean) (ghost_unlinked_pads_to_c), (::GstParseContext*) (context_to_c), (::GstParseFlags) (flags_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gst::Element parse_bin_from_description_full (const std::string & bin_description, gboolean ghost_unlinked_pads, Gst::ParseContext context, Gst::ParseFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GstElement* (*call_wrap_t) (const char* bin_description, gboolean ghost_unlinked_pads, ::GstParseContext* context, ::GstParseFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_parse_bin_from_description_full;
  auto flags_to_c = gi::unwrap (flags);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto ghost_unlinked_pads_to_c = ghost_unlinked_pads;
  auto bin_description_to_c = gi::unwrap (bin_description, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (bin_description_to_c), (gboolean) (ghost_unlinked_pads_to_c), (::GstParseContext*) (context_to_c), (::GstParseFlags) (flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gst::Element parse_bin_from_description_full (const std::string & bin_description, gboolean ghost_unlinked_pads, Gst::ParseFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GstElement* (*call_wrap_t) (const char* bin_description, gboolean ghost_unlinked_pads, ::GstParseContext* context, ::GstParseFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_parse_bin_from_description_full;
  auto flags_to_c = gi::unwrap (flags);
  auto context_to_c = nullptr;
  auto ghost_unlinked_pads_to_c = ghost_unlinked_pads;
  auto bin_description_to_c = gi::unwrap (bin_description, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (bin_description_to_c), (gboolean) (ghost_unlinked_pads_to_c), (::GstParseContext*) (context_to_c), (::GstParseFlags) (flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GstElement* gst_parse_launch (const gchar* pipeline_description, GError ** error);
// ::GstElement* gst_parse_launch (const char* pipeline_description, GError ** error);
Gst::Element parse_launch (const std::string & pipeline_description)
{
  typedef ::GstElement* (*call_wrap_t) (const char* pipeline_description, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_parse_launch;
  auto pipeline_description_to_c = gi::unwrap (pipeline_description, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (pipeline_description_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gst::Element parse_launch (const std::string & pipeline_description, GLib::Error * _error) noexcept
{
  typedef ::GstElement* (*call_wrap_t) (const char* pipeline_description, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_parse_launch;
  auto pipeline_description_to_c = gi::unwrap (pipeline_description, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (pipeline_description_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GstElement* gst_parse_launch_full (const gchar* pipeline_description, GstParseContext* context, GstParseFlags flags, GError ** error);
// ::GstElement* gst_parse_launch_full (const char* pipeline_description, ::GstParseContext* context, ::GstParseFlags flags, GError ** error);
Gst::Element parse_launch_full (const std::string & pipeline_description, Gst::ParseContext context, Gst::ParseFlags flags)
{
  typedef ::GstElement* (*call_wrap_t) (const char* pipeline_description, ::GstParseContext* context, ::GstParseFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_parse_launch_full;
  auto flags_to_c = gi::unwrap (flags);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto pipeline_description_to_c = gi::unwrap (pipeline_description, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (pipeline_description_to_c), (::GstParseContext*) (context_to_c), (::GstParseFlags) (flags_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gst::Element parse_launch_full (const std::string & pipeline_description, Gst::ParseFlags flags)
{
  typedef ::GstElement* (*call_wrap_t) (const char* pipeline_description, ::GstParseContext* context, ::GstParseFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_parse_launch_full;
  auto flags_to_c = gi::unwrap (flags);
  auto context_to_c = nullptr;
  auto pipeline_description_to_c = gi::unwrap (pipeline_description, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (pipeline_description_to_c), (::GstParseContext*) (context_to_c), (::GstParseFlags) (flags_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gst::Element parse_launch_full (const std::string & pipeline_description, Gst::ParseContext context, Gst::ParseFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GstElement* (*call_wrap_t) (const char* pipeline_description, ::GstParseContext* context, ::GstParseFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_parse_launch_full;
  auto flags_to_c = gi::unwrap (flags);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto pipeline_description_to_c = gi::unwrap (pipeline_description, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (pipeline_description_to_c), (::GstParseContext*) (context_to_c), (::GstParseFlags) (flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gst::Element parse_launch_full (const std::string & pipeline_description, Gst::ParseFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GstElement* (*call_wrap_t) (const char* pipeline_description, ::GstParseContext* context, ::GstParseFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_parse_launch_full;
  auto flags_to_c = gi::unwrap (flags);
  auto context_to_c = nullptr;
  auto pipeline_description_to_c = gi::unwrap (pipeline_description, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (pipeline_description_to_c), (::GstParseContext*) (context_to_c), (::GstParseFlags) (flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GstElement* gst_parse_launchv (const gchar** argv, GError ** error);
// ::GstElement* gst_parse_launchv (const char** argv, GError ** error);
Gst::Element parse_launchv (const std::vector<std::string> & argv)
{
  typedef ::GstElement* (*call_wrap_t) (const char** argv, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_parse_launchv;
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char**) (argv_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gst::Element parse_launchv (const std::vector<std::string> & argv, GLib::Error * _error) noexcept
{
  typedef ::GstElement* (*call_wrap_t) (const char** argv, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_parse_launchv;
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char**) (argv_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GstElement* gst_parse_launchv_full (const gchar** argv, GstParseContext* context, GstParseFlags flags, GError ** error);
// ::GstElement* gst_parse_launchv_full (const char** argv, ::GstParseContext* context, ::GstParseFlags flags, GError ** error);
Gst::Element parse_launchv_full (const std::vector<std::string> & argv, Gst::ParseContext context, Gst::ParseFlags flags)
{
  typedef ::GstElement* (*call_wrap_t) (const char** argv, ::GstParseContext* context, ::GstParseFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_parse_launchv_full;
  auto flags_to_c = gi::unwrap (flags);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char**) (argv_to_c), (::GstParseContext*) (context_to_c), (::GstParseFlags) (flags_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gst::Element parse_launchv_full (const std::vector<std::string> & argv, Gst::ParseFlags flags)
{
  typedef ::GstElement* (*call_wrap_t) (const char** argv, ::GstParseContext* context, ::GstParseFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_parse_launchv_full;
  auto flags_to_c = gi::unwrap (flags);
  auto context_to_c = nullptr;
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char**) (argv_to_c), (::GstParseContext*) (context_to_c), (::GstParseFlags) (flags_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gst::Element parse_launchv_full (const std::vector<std::string> & argv, Gst::ParseContext context, Gst::ParseFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GstElement* (*call_wrap_t) (const char** argv, ::GstParseContext* context, ::GstParseFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_parse_launchv_full;
  auto flags_to_c = gi::unwrap (flags);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char**) (argv_to_c), (::GstParseContext*) (context_to_c), (::GstParseFlags) (flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gst::Element parse_launchv_full (const std::vector<std::string> & argv, Gst::ParseFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GstElement* (*call_wrap_t) (const char** argv, ::GstParseContext* context, ::GstParseFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_parse_launchv_full;
  auto flags_to_c = gi::unwrap (flags);
  auto context_to_c = nullptr;
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char**) (argv_to_c), (::GstParseContext*) (context_to_c), (::GstParseFlags) (flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gst_print (const gchar* format);
// void gst_print (const char* format);
// IGNORE; not introspectable, varargs not supported

// void gst_printerr (const gchar* format);
// void gst_printerr (const char* format);
// IGNORE; not introspectable, varargs not supported

// void gst_printerrln (const gchar* format);
// void gst_printerrln (const char* format);
// IGNORE; not introspectable, varargs not supported

// void gst_println (const gchar* format);
// void gst_println (const char* format);
// IGNORE; not introspectable, varargs not supported

// gchar** gst_protection_filter_systems_by_available_decryptors (const gchar** system_identifiers);
// char** gst_protection_filter_systems_by_available_decryptors (const char** system_identifiers);
std::vector<std::string> protection_filter_systems_by_available_decryptors (const std::vector<std::string> & system_identifiers) noexcept
{
  typedef char** (*call_wrap_t) (const char** system_identifiers);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_protection_filter_systems_by_available_decryptors;
  auto system_identifiers_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (system_identifiers);
  auto system_identifiers_w = unwrap (system_identifiers_i, gi::transfer_none, direction_in);
  auto system_identifiers_to_c = system_identifiers_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((const char**) (system_identifiers_to_c));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// GType gst_protection_meta_api_get_type ();
// GType gst_protection_meta_api_get_type ();
GType protection_meta_api_get_type () noexcept
{
  typedef GType (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_protection_meta_api_get_type;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// const gchar* gst_protection_select_system (const gchar** system_identifiers);
// const char* gst_protection_select_system (const char** system_identifiers);
std::string protection_select_system (const std::vector<std::string> & system_identifiers) noexcept
{
  typedef const char* (*call_wrap_t) (const char** system_identifiers);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_protection_select_system;
  auto system_identifiers_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (system_identifiers);
  auto system_identifiers_w = unwrap (system_identifiers_i, gi::transfer_none, direction_in);
  auto system_identifiers_to_c = system_identifiers_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((const char**) (system_identifiers_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GType gst_reference_timestamp_meta_api_get_type ();
// GType gst_reference_timestamp_meta_api_get_type ();
GType reference_timestamp_meta_api_get_type () noexcept
{
  typedef GType (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_reference_timestamp_meta_api_get_type;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// gboolean gst_segtrap_is_enabled ();
// gboolean gst_segtrap_is_enabled ();
bool segtrap_is_enabled () noexcept
{
  typedef gboolean (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_segtrap_is_enabled;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// void gst_segtrap_set_enabled (gboolean enabled);
// void gst_segtrap_set_enabled (gboolean enabled);
void segtrap_set_enabled (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_segtrap_set_enabled;
  auto enabled_to_c = enabled;
  call_wrap_v ((gboolean) (enabled_to_c));
}

// GType gst_static_caps_get_type ();
// GType gst_static_caps_get_type ();
GType static_caps_get_type () noexcept
{
  typedef GType (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_static_caps_get_type;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// GType gst_static_pad_template_get_type ();
// GType gst_static_pad_template_get_type ();
GType static_pad_template_get_type () noexcept
{
  typedef GType (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_static_pad_template_get_type;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// gboolean gst_tag_exists (const gchar* tag);
// gboolean gst_tag_exists (const char* tag);
bool tag_exists (const std::string & tag) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* tag);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_exists;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (tag_to_c));
  return _temp_ret;
}

// const gchar* gst_tag_get_description (const gchar* tag);
// const char* gst_tag_get_description (const char* tag);
std::string tag_get_description (const std::string & tag) noexcept
{
  typedef const char* (*call_wrap_t) (const char* tag);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_get_description;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (tag_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GstTagFlag gst_tag_get_flag (const gchar* tag);
// ::GstTagFlag gst_tag_get_flag (const char* tag);
Gst::TagFlag tag_get_flag (const std::string & tag) noexcept
{
  typedef ::GstTagFlag (*call_wrap_t) (const char* tag);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_get_flag;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (tag_to_c));
  return gi::wrap (_temp_ret);
}

// const gchar* gst_tag_get_nick (const gchar* tag);
// const char* gst_tag_get_nick (const char* tag);
std::string tag_get_nick (const std::string & tag) noexcept
{
  typedef const char* (*call_wrap_t) (const char* tag);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_get_nick;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (tag_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GType gst_tag_get_type (const gchar* tag);
// GType gst_tag_get_type (const char* tag);
GType tag_get_type (const std::string & tag) noexcept
{
  typedef GType (*call_wrap_t) (const char* tag);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_get_type;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (tag_to_c));
  return _temp_ret;
}

// gboolean gst_tag_is_fixed (const gchar* tag);
// gboolean gst_tag_is_fixed (const char* tag);
bool tag_is_fixed (const std::string & tag) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* tag);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_is_fixed;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (tag_to_c));
  return _temp_ret;
}

// void gst_tag_merge_strings_with_comma (GValue* dest, const GValue* src);
// void gst_tag_merge_strings_with_comma (::GValue* dest, const ::GValue* src);
void tag_merge_strings_with_comma (GObject::Value & dest, const GObject::Value & src) noexcept
{
  typedef void (*call_wrap_t) (::GValue* dest, const ::GValue* src);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_merge_strings_with_comma;
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<GValue>::type dest_c;
  call_wrap_v ((::GValue*) ((GValue*) &dest_c), (const ::GValue*) (src_to_c));
  dest = gi::wrap ((GValue*) &dest_c, gi::transfer_none, gi::direction_out);
}
GObject::Value tag_merge_strings_with_comma (const GObject::Value & src) noexcept
{
  typedef void (*call_wrap_t) (::GValue* dest, const ::GValue* src);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_merge_strings_with_comma;
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<GValue>::type dest_c;
  call_wrap_v ((::GValue*) ((GValue*) &dest_c), (const ::GValue*) (src_to_c));
  return gi::wrap ((GValue*) &dest_c, gi::transfer_none, gi::direction_out);
}

// void gst_tag_merge_use_first (GValue* dest, const GValue* src);
// void gst_tag_merge_use_first (::GValue* dest, const ::GValue* src);
void tag_merge_use_first (GObject::Value & dest, const GObject::Value & src) noexcept
{
  typedef void (*call_wrap_t) (::GValue* dest, const ::GValue* src);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_merge_use_first;
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<GValue>::type dest_c;
  call_wrap_v ((::GValue*) ((GValue*) &dest_c), (const ::GValue*) (src_to_c));
  dest = gi::wrap ((GValue*) &dest_c, gi::transfer_none, gi::direction_out);
}
GObject::Value tag_merge_use_first (const GObject::Value & src) noexcept
{
  typedef void (*call_wrap_t) (::GValue* dest, const ::GValue* src);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_merge_use_first;
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<GValue>::type dest_c;
  call_wrap_v ((::GValue*) ((GValue*) &dest_c), (const ::GValue*) (src_to_c));
  return gi::wrap ((GValue*) &dest_c, gi::transfer_none, gi::direction_out);
}

// void gst_tag_register (const gchar* name, GstTagFlag flag, GType type, const gchar* nick, const gchar* blurb, GstTagMergeFunc func);
// void gst_tag_register (const char* name, ::GstTagFlag flag, GType type, const char* nick, const char* blurb,  func);
// IGNORE; not introspectable, func type  not supported

// void gst_tag_register_static (const gchar* name, GstTagFlag flag, GType type, const gchar* nick, const gchar* blurb, GstTagMergeFunc func);
// void gst_tag_register_static (const char* name, ::GstTagFlag flag, GType type, const char* nick, const char* blurb,  func);
// IGNORE; not introspectable, func type  not supported

// GList* gst_tracing_get_active_tracers ();
// ::GList* gst_tracing_get_active_tracers ();
std::vector<Gst::Tracer> tracing_get_active_tracers () noexcept
{
  typedef ::GList* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tracing_get_active_tracers;
  auto _temp_ret = call_wrap_v ();
  return gi::detail::wrap_list<Gst::Tracer> (_temp_ret, gi::transfer_full);
}

// void gst_tracing_register_hook (GstTracer* tracer, const gchar* detail, GCallback func);
// void gst_tracing_register_hook (::GstTracer* tracer, const char* detail,  func);
// SKIP; func type  not supported

// GType gst_type_find_get_type ();
// GType gst_type_find_get_type ();
GType type_find_get_type () noexcept
{
  typedef GType (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_type_find_get_type;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// gboolean gst_type_is_plugin_api (GType type, GstPluginAPIFlags* flags);
// gboolean gst_type_is_plugin_api (GType type, ::GstPluginAPIFlags* flags);
bool type_is_plugin_api (GType type, Gst::PluginAPIFlags & flags) noexcept
{
  typedef gboolean (*call_wrap_t) (GType type, ::GstPluginAPIFlags* flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_type_is_plugin_api;
  ::GstPluginAPIFlags flags_o {};
  auto type_to_c = type;
  auto _temp_ret = call_wrap_v ((GType) (type_to_c), (::GstPluginAPIFlags*) (&flags_o));
  flags = gi::wrap (flags_o);
  return _temp_ret;
}
std::tuple<bool, Gst::PluginAPIFlags> type_is_plugin_api (GType type) noexcept
{
  typedef gboolean (*call_wrap_t) (GType type, ::GstPluginAPIFlags* flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_type_is_plugin_api;
  ::GstPluginAPIFlags flags_o {};
  auto type_to_c = type;
  auto _temp_ret = call_wrap_v ((GType) (type_to_c), (::GstPluginAPIFlags*) (&flags_o));
  return std::make_tuple (_temp_ret, gi::wrap (flags_o));
}

// void gst_type_mark_as_plugin_api (GType type, GstPluginAPIFlags flags);
// void gst_type_mark_as_plugin_api (GType type, ::GstPluginAPIFlags flags);
void type_mark_as_plugin_api (GType type, Gst::PluginAPIFlags flags) noexcept
{
  typedef void (*call_wrap_t) (GType type, ::GstPluginAPIFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_type_mark_as_plugin_api;
  auto flags_to_c = gi::unwrap (flags);
  auto type_to_c = type;
  call_wrap_v ((GType) (type_to_c), (::GstPluginAPIFlags) (flags_to_c));
}

// gboolean gst_update_registry ();
// gboolean gst_update_registry ();
bool update_registry () noexcept
{
  typedef gboolean (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_update_registry;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// gpointer gst_util_array_binary_search (gpointer array, guint num_elements, gsize element_size, GCompareDataFunc search_func, GstSearchMode mode, gconstpointer search_data, gpointer user_data);
// void* gst_util_array_binary_search (void* array, guint num_elements, gsize element_size, GLib::CompareDataFunc::cfunction_type search_func, ::GstSearchMode mode, const void* search_data, void* user_data);
gpointer util_array_binary_search (void* array, guint num_elements, gsize element_size, GLib::CompareDataFunc search_func, Gst::SearchMode mode, const void* search_data) noexcept
{
  typedef void* (*call_wrap_t) (void* array, guint num_elements, gsize element_size, GLib::CompareDataFunc::cfunction_type search_func, ::GstSearchMode mode, const void* search_data, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_util_array_binary_search;
  auto search_data_to_c = search_data;
  auto mode_to_c = gi::unwrap (mode);
  auto search_func_wrap_ = search_func ? unwrap (std::move (search_func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(search_func_wrap_)>::type> search_func_wrap__sp (search_func_wrap_);
  auto element_size_to_c = element_size;
  auto num_elements_to_c = num_elements;
  auto array_to_c = array;
  auto _temp_ret = call_wrap_v ((void*) (array_to_c), (guint) (num_elements_to_c), (gsize) (element_size_to_c), (GLib::CompareDataFunc::cfunction_type) (search_func_wrap_ ? &search_func_wrap_->wrapper : nullptr), (::GstSearchMode) (mode_to_c), (const void*) (search_data_to_c), (void*) (search_func_wrap_));
  return _temp_ret;
}

// void gst_util_double_to_fraction (gdouble src, gint* dest_n, gint* dest_d);
// void gst_util_double_to_fraction (gdouble src, gint* dest_n, gint* dest_d);
void util_double_to_fraction (gdouble src, gint & dest_n, gint & dest_d) noexcept
{
  typedef void (*call_wrap_t) (gdouble src, gint* dest_n, gint* dest_d);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_util_double_to_fraction;
  gint dest_d_o {};
  gint dest_n_o {};
  auto src_to_c = src;
  call_wrap_v ((gdouble) (src_to_c), (gint*) (&dest_n_o), (gint*) (&dest_d_o));
  dest_d = dest_d_o;
  dest_n = dest_n_o;
}
std::tuple<gint, gint> util_double_to_fraction (gdouble src) noexcept
{
  typedef void (*call_wrap_t) (gdouble src, gint* dest_n, gint* dest_d);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_util_double_to_fraction;
  gint dest_d_o {};
  gint dest_n_o {};
  auto src_to_c = src;
  call_wrap_v ((gdouble) (src_to_c), (gint*) (&dest_n_o), (gint*) (&dest_d_o));
  return std::make_tuple (dest_n_o, dest_d_o);
}

// void gst_util_dump_buffer (GstBuffer* buf);
// void gst_util_dump_buffer (::GstBuffer* buf);
void util_dump_buffer (Gst::Buffer buf) noexcept
{
  typedef void (*call_wrap_t) (::GstBuffer* buf);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_util_dump_buffer;
  auto buf_to_c = gi::unwrap (buf, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstBuffer*) (buf_to_c));
}

// void gst_util_dump_mem (const guchar* mem, guint size);
// void gst_util_dump_mem (const guint8* mem, guint size);
void util_dump_mem (guint8 * mem, guint size) noexcept
{
  typedef void (*call_wrap_t) (const guint8* mem, guint size);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_util_dump_mem;
  auto mem_i = detail::make_list_unwrap_range (mem, size, false);
  auto mem_w = unwrap (mem_i, gi::transfer_none, direction_in);
  auto mem_to_c = mem_w.gobj_(false);
  call_wrap_v ((const guint8*) (mem_to_c), (guint) (mem_w.size()));
}

// gboolean gst_util_fraction_add (gint a_n, gint a_d, gint b_n, gint b_d, gint* res_n, gint* res_d);
// gboolean gst_util_fraction_add (gint a_n, gint a_d, gint b_n, gint b_d, gint* res_n, gint* res_d);
bool util_fraction_add (gint a_n, gint a_d, gint b_n, gint b_d, gint & res_n, gint & res_d) noexcept
{
  typedef gboolean (*call_wrap_t) (gint a_n, gint a_d, gint b_n, gint b_d, gint* res_n, gint* res_d);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_util_fraction_add;
  gint res_d_o {};
  gint res_n_o {};
  auto b_d_to_c = b_d;
  auto b_n_to_c = b_n;
  auto a_d_to_c = a_d;
  auto a_n_to_c = a_n;
  auto _temp_ret = call_wrap_v ((gint) (a_n_to_c), (gint) (a_d_to_c), (gint) (b_n_to_c), (gint) (b_d_to_c), (gint*) (&res_n_o), (gint*) (&res_d_o));
  res_d = res_d_o;
  res_n = res_n_o;
  return _temp_ret;
}
std::tuple<bool, gint, gint> util_fraction_add (gint a_n, gint a_d, gint b_n, gint b_d) noexcept
{
  typedef gboolean (*call_wrap_t) (gint a_n, gint a_d, gint b_n, gint b_d, gint* res_n, gint* res_d);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_util_fraction_add;
  gint res_d_o {};
  gint res_n_o {};
  auto b_d_to_c = b_d;
  auto b_n_to_c = b_n;
  auto a_d_to_c = a_d;
  auto a_n_to_c = a_n;
  auto _temp_ret = call_wrap_v ((gint) (a_n_to_c), (gint) (a_d_to_c), (gint) (b_n_to_c), (gint) (b_d_to_c), (gint*) (&res_n_o), (gint*) (&res_d_o));
  return std::make_tuple (_temp_ret, res_n_o, res_d_o);
}

// gint gst_util_fraction_compare (gint a_n, gint a_d, gint b_n, gint b_d);
// gint gst_util_fraction_compare (gint a_n, gint a_d, gint b_n, gint b_d);
gint util_fraction_compare (gint a_n, gint a_d, gint b_n, gint b_d) noexcept
{
  typedef gint (*call_wrap_t) (gint a_n, gint a_d, gint b_n, gint b_d);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_util_fraction_compare;
  auto b_d_to_c = b_d;
  auto b_n_to_c = b_n;
  auto a_d_to_c = a_d;
  auto a_n_to_c = a_n;
  auto _temp_ret = call_wrap_v ((gint) (a_n_to_c), (gint) (a_d_to_c), (gint) (b_n_to_c), (gint) (b_d_to_c));
  return _temp_ret;
}

// gboolean gst_util_fraction_multiply (gint a_n, gint a_d, gint b_n, gint b_d, gint* res_n, gint* res_d);
// gboolean gst_util_fraction_multiply (gint a_n, gint a_d, gint b_n, gint b_d, gint* res_n, gint* res_d);
bool util_fraction_multiply (gint a_n, gint a_d, gint b_n, gint b_d, gint & res_n, gint & res_d) noexcept
{
  typedef gboolean (*call_wrap_t) (gint a_n, gint a_d, gint b_n, gint b_d, gint* res_n, gint* res_d);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_util_fraction_multiply;
  gint res_d_o {};
  gint res_n_o {};
  auto b_d_to_c = b_d;
  auto b_n_to_c = b_n;
  auto a_d_to_c = a_d;
  auto a_n_to_c = a_n;
  auto _temp_ret = call_wrap_v ((gint) (a_n_to_c), (gint) (a_d_to_c), (gint) (b_n_to_c), (gint) (b_d_to_c), (gint*) (&res_n_o), (gint*) (&res_d_o));
  res_d = res_d_o;
  res_n = res_n_o;
  return _temp_ret;
}
std::tuple<bool, gint, gint> util_fraction_multiply (gint a_n, gint a_d, gint b_n, gint b_d) noexcept
{
  typedef gboolean (*call_wrap_t) (gint a_n, gint a_d, gint b_n, gint b_d, gint* res_n, gint* res_d);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_util_fraction_multiply;
  gint res_d_o {};
  gint res_n_o {};
  auto b_d_to_c = b_d;
  auto b_n_to_c = b_n;
  auto a_d_to_c = a_d;
  auto a_n_to_c = a_n;
  auto _temp_ret = call_wrap_v ((gint) (a_n_to_c), (gint) (a_d_to_c), (gint) (b_n_to_c), (gint) (b_d_to_c), (gint*) (&res_n_o), (gint*) (&res_d_o));
  return std::make_tuple (_temp_ret, res_n_o, res_d_o);
}

// void gst_util_fraction_to_double (gint src_n, gint src_d, gdouble* dest);
// void gst_util_fraction_to_double (gint src_n, gint src_d, gdouble* dest);
void util_fraction_to_double (gint src_n, gint src_d, gdouble & dest) noexcept
{
  typedef void (*call_wrap_t) (gint src_n, gint src_d, gdouble* dest);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_util_fraction_to_double;
  gdouble dest_o {};
  auto src_d_to_c = src_d;
  auto src_n_to_c = src_n;
  call_wrap_v ((gint) (src_n_to_c), (gint) (src_d_to_c), (gdouble*) (&dest_o));
  dest = dest_o;
}
gdouble util_fraction_to_double (gint src_n, gint src_d) noexcept
{
  typedef void (*call_wrap_t) (gint src_n, gint src_d, gdouble* dest);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_util_fraction_to_double;
  gdouble dest_o {};
  auto src_d_to_c = src_d;
  auto src_n_to_c = src_n;
  call_wrap_v ((gint) (src_n_to_c), (gint) (src_d_to_c), (gdouble*) (&dest_o));
  return dest_o;
}

// guint64 gst_util_gdouble_to_guint64 (gdouble value);
// guint64 gst_util_gdouble_to_guint64 (gdouble value);
guint64 util_gdouble_to_guint64 (gdouble value) noexcept
{
  typedef guint64 (*call_wrap_t) (gdouble value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_util_gdouble_to_guint64;
  auto value_to_c = value;
  auto _temp_ret = call_wrap_v ((gdouble) (value_to_c));
  return _temp_ret;
}

// gboolean gst_util_get_object_array (GObject* object, const gchar* name, GValueArray** array);
// gboolean gst_util_get_object_array (::GObject* object, const char* name, * array);
// SKIP; array type  not supported

// GstClockTime gst_util_get_timestamp ();
// ::GstClockTime gst_util_get_timestamp ();
Gst::ClockTime util_get_timestamp () noexcept
{
  typedef ::GstClockTime (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_util_get_timestamp;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// gint gst_util_greatest_common_divisor (gint a, gint b);
// gint gst_util_greatest_common_divisor (gint a, gint b);
gint util_greatest_common_divisor (gint a, gint b) noexcept
{
  typedef gint (*call_wrap_t) (gint a, gint b);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_util_greatest_common_divisor;
  auto b_to_c = b;
  auto a_to_c = a;
  auto _temp_ret = call_wrap_v ((gint) (a_to_c), (gint) (b_to_c));
  return _temp_ret;
}

// gint64 gst_util_greatest_common_divisor_int64 (gint64 a, gint64 b);
// gint64 gst_util_greatest_common_divisor_int64 (gint64 a, gint64 b);
gint64 util_greatest_common_divisor_int64 (gint64 a, gint64 b) noexcept
{
  typedef gint64 (*call_wrap_t) (gint64 a, gint64 b);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_util_greatest_common_divisor_int64;
  auto b_to_c = b;
  auto a_to_c = a;
  auto _temp_ret = call_wrap_v ((gint64) (a_to_c), (gint64) (b_to_c));
  return _temp_ret;
}

// guint gst_util_group_id_next ();
// guint gst_util_group_id_next ();
guint util_group_id_next () noexcept
{
  typedef guint (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_util_group_id_next;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// gdouble gst_util_guint64_to_gdouble (guint64 value);
// gdouble gst_util_guint64_to_gdouble (guint64 value);
gdouble util_guint64_to_gdouble (guint64 value) noexcept
{
  typedef gdouble (*call_wrap_t) (guint64 value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_util_guint64_to_gdouble;
  auto value_to_c = value;
  auto _temp_ret = call_wrap_v ((guint64) (value_to_c));
  return _temp_ret;
}

// gint32 gst_util_seqnum_compare (guint32 s1, guint32 s2);
// gint32 gst_util_seqnum_compare (guint32 s1, guint32 s2);
gint32 util_seqnum_compare (guint32 s1, guint32 s2) noexcept
{
  typedef gint32 (*call_wrap_t) (guint32 s1, guint32 s2);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_util_seqnum_compare;
  auto s2_to_c = s2;
  auto s1_to_c = s1;
  auto _temp_ret = call_wrap_v ((guint32) (s1_to_c), (guint32) (s2_to_c));
  return _temp_ret;
}

// guint32 gst_util_seqnum_next ();
// guint32 gst_util_seqnum_next ();
guint32 util_seqnum_next () noexcept
{
  typedef guint32 (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_util_seqnum_next;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// void gst_util_set_object_arg (GObject* object, const gchar* name, const gchar* value);
// void gst_util_set_object_arg (::GObject* object, const char* name, const char* value);
void util_set_object_arg (GObject::Object object, const std::string & name, const std::string & value) noexcept
{
  typedef void (*call_wrap_t) (::GObject* object, const char* name, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_util_set_object_arg;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto object_to_c = gi::unwrap (object, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GObject*) (object_to_c), (const char*) (name_to_c), (const char*) (value_to_c));
}

// gboolean gst_util_set_object_array (GObject* object, const gchar* name, const GValueArray* array);
// gboolean gst_util_set_object_array (::GObject* object, const char* name, const  array);
// SKIP; array type  not supported

// void gst_util_set_value_from_string (GValue* value, const gchar* value_str);
// void gst_util_set_value_from_string (::GValue* value, const char* value_str);
void util_set_value_from_string (GObject::Value & value, const std::string & value_str) noexcept
{
  typedef void (*call_wrap_t) (::GValue* value, const char* value_str);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_util_set_value_from_string;
  auto value_str_to_c = gi::unwrap (value_str, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<GValue>::type value_c;
  call_wrap_v ((::GValue*) ((GValue*) &value_c), (const char*) (value_str_to_c));
  value = gi::wrap ((GValue*) &value_c, gi::transfer_none, gi::direction_out);
}
GObject::Value util_set_value_from_string (const std::string & value_str) noexcept
{
  typedef void (*call_wrap_t) (::GValue* value, const char* value_str);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_util_set_value_from_string;
  auto value_str_to_c = gi::unwrap (value_str, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<GValue>::type value_c;
  call_wrap_v ((::GValue*) ((GValue*) &value_c), (const char*) (value_str_to_c));
  return gi::wrap ((GValue*) &value_c, gi::transfer_none, gi::direction_out);
}

// guint64 gst_util_uint64_scale (guint64 val, guint64 num, guint64 denom);
// guint64 gst_util_uint64_scale (guint64 val, guint64 num, guint64 denom);
guint64 util_uint64_scale (guint64 val, guint64 num, guint64 denom) noexcept
{
  typedef guint64 (*call_wrap_t) (guint64 val, guint64 num, guint64 denom);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_util_uint64_scale;
  auto denom_to_c = denom;
  auto num_to_c = num;
  auto val_to_c = val;
  auto _temp_ret = call_wrap_v ((guint64) (val_to_c), (guint64) (num_to_c), (guint64) (denom_to_c));
  return _temp_ret;
}

// guint64 gst_util_uint64_scale_ceil (guint64 val, guint64 num, guint64 denom);
// guint64 gst_util_uint64_scale_ceil (guint64 val, guint64 num, guint64 denom);
guint64 util_uint64_scale_ceil (guint64 val, guint64 num, guint64 denom) noexcept
{
  typedef guint64 (*call_wrap_t) (guint64 val, guint64 num, guint64 denom);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_util_uint64_scale_ceil;
  auto denom_to_c = denom;
  auto num_to_c = num;
  auto val_to_c = val;
  auto _temp_ret = call_wrap_v ((guint64) (val_to_c), (guint64) (num_to_c), (guint64) (denom_to_c));
  return _temp_ret;
}

// guint64 gst_util_uint64_scale_int (guint64 val, gint num, gint denom);
// guint64 gst_util_uint64_scale_int (guint64 val, gint num, gint denom);
guint64 util_uint64_scale_int (guint64 val, gint num, gint denom) noexcept
{
  typedef guint64 (*call_wrap_t) (guint64 val, gint num, gint denom);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_util_uint64_scale_int;
  auto denom_to_c = denom;
  auto num_to_c = num;
  auto val_to_c = val;
  auto _temp_ret = call_wrap_v ((guint64) (val_to_c), (gint) (num_to_c), (gint) (denom_to_c));
  return _temp_ret;
}

// guint64 gst_util_uint64_scale_int_ceil (guint64 val, gint num, gint denom);
// guint64 gst_util_uint64_scale_int_ceil (guint64 val, gint num, gint denom);
guint64 util_uint64_scale_int_ceil (guint64 val, gint num, gint denom) noexcept
{
  typedef guint64 (*call_wrap_t) (guint64 val, gint num, gint denom);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_util_uint64_scale_int_ceil;
  auto denom_to_c = denom;
  auto num_to_c = num;
  auto val_to_c = val;
  auto _temp_ret = call_wrap_v ((guint64) (val_to_c), (gint) (num_to_c), (gint) (denom_to_c));
  return _temp_ret;
}

// guint64 gst_util_uint64_scale_int_round (guint64 val, gint num, gint denom);
// guint64 gst_util_uint64_scale_int_round (guint64 val, gint num, gint denom);
guint64 util_uint64_scale_int_round (guint64 val, gint num, gint denom) noexcept
{
  typedef guint64 (*call_wrap_t) (guint64 val, gint num, gint denom);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_util_uint64_scale_int_round;
  auto denom_to_c = denom;
  auto num_to_c = num;
  auto val_to_c = val;
  auto _temp_ret = call_wrap_v ((guint64) (val_to_c), (gint) (num_to_c), (gint) (denom_to_c));
  return _temp_ret;
}

// guint64 gst_util_uint64_scale_round (guint64 val, guint64 num, guint64 denom);
// guint64 gst_util_uint64_scale_round (guint64 val, guint64 num, guint64 denom);
guint64 util_uint64_scale_round (guint64 val, guint64 num, guint64 denom) noexcept
{
  typedef guint64 (*call_wrap_t) (guint64 val, guint64 num, guint64 denom);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_util_uint64_scale_round;
  auto denom_to_c = denom;
  auto num_to_c = num;
  auto val_to_c = val;
  auto _temp_ret = call_wrap_v ((guint64) (val_to_c), (guint64) (num_to_c), (guint64) (denom_to_c));
  return _temp_ret;
}

// gboolean gst_value_can_compare (const GValue* value1, const GValue* value2);
// gboolean gst_value_can_compare (const ::GValue* value1, const ::GValue* value2);
bool value_can_compare (const GObject::Value & value1, const GObject::Value & value2) noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GValue* value1, const ::GValue* value2);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_can_compare;
  auto value2_to_c = gi::unwrap (value2, gi::transfer_none, gi::direction_in);
  auto value1_to_c = gi::unwrap (value1, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GValue*) (value1_to_c), (const ::GValue*) (value2_to_c));
  return _temp_ret;
}

// gboolean gst_value_can_intersect (const GValue* value1, const GValue* value2);
// gboolean gst_value_can_intersect (const ::GValue* value1, const ::GValue* value2);
bool value_can_intersect (const GObject::Value & value1, const GObject::Value & value2) noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GValue* value1, const ::GValue* value2);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_can_intersect;
  auto value2_to_c = gi::unwrap (value2, gi::transfer_none, gi::direction_in);
  auto value1_to_c = gi::unwrap (value1, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GValue*) (value1_to_c), (const ::GValue*) (value2_to_c));
  return _temp_ret;
}

// gboolean gst_value_can_subtract (const GValue* minuend, const GValue* subtrahend);
// gboolean gst_value_can_subtract (const ::GValue* minuend, const ::GValue* subtrahend);
bool value_can_subtract (const GObject::Value & minuend, const GObject::Value & subtrahend) noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GValue* minuend, const ::GValue* subtrahend);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_can_subtract;
  auto subtrahend_to_c = gi::unwrap (subtrahend, gi::transfer_none, gi::direction_in);
  auto minuend_to_c = gi::unwrap (minuend, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GValue*) (minuend_to_c), (const ::GValue*) (subtrahend_to_c));
  return _temp_ret;
}

// gboolean gst_value_can_union (const GValue* value1, const GValue* value2);
// gboolean gst_value_can_union (const ::GValue* value1, const ::GValue* value2);
bool value_can_union (const GObject::Value & value1, const GObject::Value & value2) noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GValue* value1, const ::GValue* value2);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_can_union;
  auto value2_to_c = gi::unwrap (value2, gi::transfer_none, gi::direction_in);
  auto value1_to_c = gi::unwrap (value1, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GValue*) (value1_to_c), (const ::GValue*) (value2_to_c));
  return _temp_ret;
}

// gint gst_value_compare (const GValue* value1, const GValue* value2);
// gint gst_value_compare (const ::GValue* value1, const ::GValue* value2);
gint value_compare (const GObject::Value & value1, const GObject::Value & value2) noexcept
{
  typedef gint (*call_wrap_t) (const ::GValue* value1, const ::GValue* value2);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_compare;
  auto value2_to_c = gi::unwrap (value2, gi::transfer_none, gi::direction_in);
  auto value1_to_c = gi::unwrap (value1, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GValue*) (value1_to_c), (const ::GValue*) (value2_to_c));
  return _temp_ret;
}

// gboolean gst_value_deserialize (GValue* dest, const gchar* src);
// gboolean gst_value_deserialize (::GValue* dest, const char* src);
bool value_deserialize (GObject::Value & dest, const std::string & src) noexcept
{
  typedef gboolean (*call_wrap_t) (::GValue* dest, const char* src);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_deserialize;
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<GValue>::type dest_c;
  auto _temp_ret = call_wrap_v ((::GValue*) ((GValue*) &dest_c), (const char*) (src_to_c));
  dest = gi::wrap ((GValue*) &dest_c, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, GObject::Value> value_deserialize (const std::string & src) noexcept
{
  typedef gboolean (*call_wrap_t) (::GValue* dest, const char* src);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_deserialize;
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<GValue>::type dest_c;
  auto _temp_ret = call_wrap_v ((::GValue*) ((GValue*) &dest_c), (const char*) (src_to_c));
  return std::make_tuple (_temp_ret, gi::wrap ((GValue*) &dest_c, gi::transfer_none, gi::direction_out));
}

// gboolean gst_value_deserialize_with_pspec (GValue* dest, const gchar* src, GParamSpec* pspec);
// gboolean gst_value_deserialize_with_pspec (::GValue* dest, const char* src, ::GParamSpec* pspec);
bool value_deserialize_with_pspec (GObject::Value & dest, const std::string & src, GObject::ParamSpec pspec) noexcept
{
  typedef gboolean (*call_wrap_t) (::GValue* dest, const char* src, ::GParamSpec* pspec);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_deserialize_with_pspec;
  auto pspec_to_c = gi::unwrap (pspec, gi::transfer_none, gi::direction_in);
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<GValue>::type dest_c;
  auto _temp_ret = call_wrap_v ((::GValue*) ((GValue*) &dest_c), (const char*) (src_to_c), (::GParamSpec*) (pspec_to_c));
  dest = gi::wrap ((GValue*) &dest_c, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
bool value_deserialize_with_pspec (GObject::Value & dest, const std::string & src) noexcept
{
  typedef gboolean (*call_wrap_t) (::GValue* dest, const char* src, ::GParamSpec* pspec);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_deserialize_with_pspec;
  auto pspec_to_c = nullptr;
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<GValue>::type dest_c;
  auto _temp_ret = call_wrap_v ((::GValue*) ((GValue*) &dest_c), (const char*) (src_to_c), (::GParamSpec*) (pspec_to_c));
  dest = gi::wrap ((GValue*) &dest_c, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, GObject::Value> value_deserialize_with_pspec (const std::string & src, GObject::ParamSpec pspec) noexcept
{
  typedef gboolean (*call_wrap_t) (::GValue* dest, const char* src, ::GParamSpec* pspec);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_deserialize_with_pspec;
  auto pspec_to_c = gi::unwrap (pspec, gi::transfer_none, gi::direction_in);
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<GValue>::type dest_c;
  auto _temp_ret = call_wrap_v ((::GValue*) ((GValue*) &dest_c), (const char*) (src_to_c), (::GParamSpec*) (pspec_to_c));
  return std::make_tuple (_temp_ret, gi::wrap ((GValue*) &dest_c, gi::transfer_none, gi::direction_out));
}
std::tuple<bool, GObject::Value> value_deserialize_with_pspec (const std::string & src) noexcept
{
  typedef gboolean (*call_wrap_t) (::GValue* dest, const char* src, ::GParamSpec* pspec);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_deserialize_with_pspec;
  auto pspec_to_c = nullptr;
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<GValue>::type dest_c;
  auto _temp_ret = call_wrap_v ((::GValue*) ((GValue*) &dest_c), (const char*) (src_to_c), (::GParamSpec*) (pspec_to_c));
  return std::make_tuple (_temp_ret, gi::wrap ((GValue*) &dest_c, gi::transfer_none, gi::direction_out));
}

// gboolean gst_value_fixate (GValue* dest, const GValue* src);
// gboolean gst_value_fixate (::GValue* dest, const ::GValue* src);
bool value_fixate (GObject::Value dest, const GObject::Value & src) noexcept
{
  typedef gboolean (*call_wrap_t) (::GValue* dest, const ::GValue* src);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_fixate;
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto dest_to_c = gi::unwrap (dest, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GValue*) (dest_to_c), (const ::GValue*) (src_to_c));
  return _temp_ret;
}

// gboolean gst_value_fraction_multiply (GValue* product, const GValue* factor1, const GValue* factor2);
// gboolean gst_value_fraction_multiply (::GValue* product, const ::GValue* factor1, const ::GValue* factor2);
bool value_fraction_multiply (GObject::Value product, const GObject::Value & factor1, const GObject::Value & factor2) noexcept
{
  typedef gboolean (*call_wrap_t) (::GValue* product, const ::GValue* factor1, const ::GValue* factor2);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_fraction_multiply;
  auto factor2_to_c = gi::unwrap (factor2, gi::transfer_none, gi::direction_in);
  auto factor1_to_c = gi::unwrap (factor1, gi::transfer_none, gi::direction_in);
  auto product_to_c = gi::unwrap (product, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GValue*) (product_to_c), (const ::GValue*) (factor1_to_c), (const ::GValue*) (factor2_to_c));
  return _temp_ret;
}

// gboolean gst_value_fraction_subtract (GValue* dest, const GValue* minuend, const GValue* subtrahend);
// gboolean gst_value_fraction_subtract (::GValue* dest, const ::GValue* minuend, const ::GValue* subtrahend);
bool value_fraction_subtract (GObject::Value dest, const GObject::Value & minuend, const GObject::Value & subtrahend) noexcept
{
  typedef gboolean (*call_wrap_t) (::GValue* dest, const ::GValue* minuend, const ::GValue* subtrahend);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_fraction_subtract;
  auto subtrahend_to_c = gi::unwrap (subtrahend, gi::transfer_none, gi::direction_in);
  auto minuend_to_c = gi::unwrap (minuend, gi::transfer_none, gi::direction_in);
  auto dest_to_c = gi::unwrap (dest, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GValue*) (dest_to_c), (const ::GValue*) (minuend_to_c), (const ::GValue*) (subtrahend_to_c));
  return _temp_ret;
}

// guint64 gst_value_get_bitmask (const GValue* value);
// guint64 gst_value_get_bitmask (const ::GValue* value);
guint64 value_get_bitmask (const GObject::Value & value) noexcept
{
  typedef guint64 (*call_wrap_t) (const ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_get_bitmask;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GValue*) (value_to_c));
  return _temp_ret;
}

// const GstCaps* gst_value_get_caps (const GValue* value);
// const ::GstCaps* gst_value_get_caps (const ::GValue* value);
Gst::Caps value_get_caps (const GObject::Value & value) noexcept
{
  typedef const ::GstCaps* (*call_wrap_t) (const ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_get_caps;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GValue*) (value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const GstCapsFeatures* gst_value_get_caps_features (const GValue* value);
// const ::GstCapsFeatures* gst_value_get_caps_features (const ::GValue* value);
Gst::CapsFeatures value_get_caps_features (const GObject::Value & value) noexcept
{
  typedef const ::GstCapsFeatures* (*call_wrap_t) (const ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_get_caps_features;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GValue*) (value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gdouble gst_value_get_double_range_max (const GValue* value);
// gdouble gst_value_get_double_range_max (const ::GValue* value);
gdouble value_get_double_range_max (const GObject::Value & value) noexcept
{
  typedef gdouble (*call_wrap_t) (const ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_get_double_range_max;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GValue*) (value_to_c));
  return _temp_ret;
}

// gdouble gst_value_get_double_range_min (const GValue* value);
// gdouble gst_value_get_double_range_min (const ::GValue* value);
gdouble value_get_double_range_min (const GObject::Value & value) noexcept
{
  typedef gdouble (*call_wrap_t) (const ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_get_double_range_min;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GValue*) (value_to_c));
  return _temp_ret;
}

// guint gst_value_get_flagset_flags (const GValue* value);
// guint gst_value_get_flagset_flags (const ::GValue* value);
guint value_get_flagset_flags (const GObject::Value & value) noexcept
{
  typedef guint (*call_wrap_t) (const ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_get_flagset_flags;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GValue*) (value_to_c));
  return _temp_ret;
}

// guint gst_value_get_flagset_mask (const GValue* value);
// guint gst_value_get_flagset_mask (const ::GValue* value);
guint value_get_flagset_mask (const GObject::Value & value) noexcept
{
  typedef guint (*call_wrap_t) (const ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_get_flagset_mask;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GValue*) (value_to_c));
  return _temp_ret;
}

// gint gst_value_get_fraction_denominator (const GValue* value);
// gint gst_value_get_fraction_denominator (const ::GValue* value);
gint value_get_fraction_denominator (const GObject::Value & value) noexcept
{
  typedef gint (*call_wrap_t) (const ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_get_fraction_denominator;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GValue*) (value_to_c));
  return _temp_ret;
}

// gint gst_value_get_fraction_numerator (const GValue* value);
// gint gst_value_get_fraction_numerator (const ::GValue* value);
gint value_get_fraction_numerator (const GObject::Value & value) noexcept
{
  typedef gint (*call_wrap_t) (const ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_get_fraction_numerator;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GValue*) (value_to_c));
  return _temp_ret;
}

// const GValue* gst_value_get_fraction_range_max (const GValue* value);
// const ::GValue* gst_value_get_fraction_range_max (const ::GValue* value);
GObject::Value value_get_fraction_range_max (const GObject::Value & value) noexcept
{
  typedef const ::GValue* (*call_wrap_t) (const ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_get_fraction_range_max;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GValue*) (value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const GValue* gst_value_get_fraction_range_min (const GValue* value);
// const ::GValue* gst_value_get_fraction_range_min (const ::GValue* value);
GObject::Value value_get_fraction_range_min (const GObject::Value & value) noexcept
{
  typedef const ::GValue* (*call_wrap_t) (const ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_get_fraction_range_min;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GValue*) (value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gint64 gst_value_get_int64_range_max (const GValue* value);
// gint64 gst_value_get_int64_range_max (const ::GValue* value);
gint64 value_get_int64_range_max (const GObject::Value & value) noexcept
{
  typedef gint64 (*call_wrap_t) (const ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_get_int64_range_max;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GValue*) (value_to_c));
  return _temp_ret;
}

// gint64 gst_value_get_int64_range_min (const GValue* value);
// gint64 gst_value_get_int64_range_min (const ::GValue* value);
gint64 value_get_int64_range_min (const GObject::Value & value) noexcept
{
  typedef gint64 (*call_wrap_t) (const ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_get_int64_range_min;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GValue*) (value_to_c));
  return _temp_ret;
}

// gint64 gst_value_get_int64_range_step (const GValue* value);
// gint64 gst_value_get_int64_range_step (const ::GValue* value);
gint64 value_get_int64_range_step (const GObject::Value & value) noexcept
{
  typedef gint64 (*call_wrap_t) (const ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_get_int64_range_step;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GValue*) (value_to_c));
  return _temp_ret;
}

// gint gst_value_get_int_range_max (const GValue* value);
// gint gst_value_get_int_range_max (const ::GValue* value);
gint value_get_int_range_max (const GObject::Value & value) noexcept
{
  typedef gint (*call_wrap_t) (const ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_get_int_range_max;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GValue*) (value_to_c));
  return _temp_ret;
}

// gint gst_value_get_int_range_min (const GValue* value);
// gint gst_value_get_int_range_min (const ::GValue* value);
gint value_get_int_range_min (const GObject::Value & value) noexcept
{
  typedef gint (*call_wrap_t) (const ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_get_int_range_min;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GValue*) (value_to_c));
  return _temp_ret;
}

// gint gst_value_get_int_range_step (const GValue* value);
// gint gst_value_get_int_range_step (const ::GValue* value);
gint value_get_int_range_step (const GObject::Value & value) noexcept
{
  typedef gint (*call_wrap_t) (const ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_get_int_range_step;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GValue*) (value_to_c));
  return _temp_ret;
}

// const GstStructure* gst_value_get_structure (const GValue* value);
// const ::GstStructure* gst_value_get_structure (const ::GValue* value);
Gst::Structure value_get_structure (const GObject::Value & value) noexcept
{
  typedef const ::GstStructure* (*call_wrap_t) (const ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_get_structure;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GValue*) (value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gst_value_init_and_copy (GValue* dest, const GValue* src);
// void gst_value_init_and_copy (::GValue* dest, const ::GValue* src);
void value_init_and_copy (GObject::Value & dest, const GObject::Value & src) noexcept
{
  typedef void (*call_wrap_t) (::GValue* dest, const ::GValue* src);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_init_and_copy;
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<GValue>::type dest_c;
  call_wrap_v ((::GValue*) ((GValue*) &dest_c), (const ::GValue*) (src_to_c));
  dest = gi::wrap ((GValue*) &dest_c, gi::transfer_none, gi::direction_out);
}
GObject::Value value_init_and_copy (const GObject::Value & src) noexcept
{
  typedef void (*call_wrap_t) (::GValue* dest, const ::GValue* src);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_init_and_copy;
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<GValue>::type dest_c;
  call_wrap_v ((::GValue*) ((GValue*) &dest_c), (const ::GValue*) (src_to_c));
  return gi::wrap ((GValue*) &dest_c, gi::transfer_none, gi::direction_out);
}

// gboolean gst_value_intersect (GValue* dest, const GValue* value1, const GValue* value2);
// gboolean gst_value_intersect (::GValue* dest, const ::GValue* value1, const ::GValue* value2);
bool value_intersect (GObject::Value * dest, const GObject::Value & value1, const GObject::Value & value2) noexcept
{
  typedef gboolean (*call_wrap_t) (::GValue* dest, const ::GValue* value1, const ::GValue* value2);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_intersect;
  auto value2_to_c = gi::unwrap (value2, gi::transfer_none, gi::direction_in);
  auto value1_to_c = gi::unwrap (value1, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<GValue>::type dest_c;
  auto _temp_ret = call_wrap_v ((::GValue*) (dest ? (GValue*) &dest_c : nullptr), (const ::GValue*) (value1_to_c), (const ::GValue*) (value2_to_c));
  if (dest) *dest = gi::wrap ((GValue*) &dest_c, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, GObject::Value> value_intersect (const GObject::Value & value1, const GObject::Value & value2) noexcept
{
  typedef gboolean (*call_wrap_t) (::GValue* dest, const ::GValue* value1, const ::GValue* value2);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_intersect;
  auto value2_to_c = gi::unwrap (value2, gi::transfer_none, gi::direction_in);
  auto value1_to_c = gi::unwrap (value1, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<GValue>::type dest_c;
  auto _temp_ret = call_wrap_v ((::GValue*) ((GValue*) &dest_c), (const ::GValue*) (value1_to_c), (const ::GValue*) (value2_to_c));
  return std::make_tuple (_temp_ret, gi::wrap ((GValue*) &dest_c, gi::transfer_none, gi::direction_out));
}

// gboolean gst_value_is_fixed (const GValue* value);
// gboolean gst_value_is_fixed (const ::GValue* value);
bool value_is_fixed (const GObject::Value & value) noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_is_fixed;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GValue*) (value_to_c));
  return _temp_ret;
}

// gboolean gst_value_is_subset (const GValue* value1, const GValue* value2);
// gboolean gst_value_is_subset (const ::GValue* value1, const ::GValue* value2);
bool value_is_subset (const GObject::Value & value1, const GObject::Value & value2) noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GValue* value1, const ::GValue* value2);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_is_subset;
  auto value2_to_c = gi::unwrap (value2, gi::transfer_none, gi::direction_in);
  auto value1_to_c = gi::unwrap (value1, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GValue*) (value1_to_c), (const ::GValue*) (value2_to_c));
  return _temp_ret;
}

// void gst_value_register (const GstValueTable* table);
// void gst_value_register (const ::GstValueTable* table);
void value_register (const Gst::ValueTable & table) noexcept
{
  typedef void (*call_wrap_t) (const ::GstValueTable* table);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_register;
  auto table_to_c = gi::unwrap (table, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const ::GstValueTable*) (table_to_c));
}

// gchar* gst_value_serialize (const GValue* value);
// char* gst_value_serialize (const ::GValue* value);
std::string value_serialize (const GObject::Value & value) noexcept
{
  typedef char* (*call_wrap_t) (const ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_serialize;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GValue*) (value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gst_value_set_bitmask (GValue* value, guint64 bitmask);
// void gst_value_set_bitmask (::GValue* value, guint64 bitmask);
void value_set_bitmask (GObject::Value value, guint64 bitmask) noexcept
{
  typedef void (*call_wrap_t) (::GValue* value, guint64 bitmask);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_set_bitmask;
  auto bitmask_to_c = bitmask;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GValue*) (value_to_c), (guint64) (bitmask_to_c));
}

// void gst_value_set_caps (GValue* value, const GstCaps* caps);
// void gst_value_set_caps (::GValue* value, const ::GstCaps* caps);
void value_set_caps (GObject::Value value, const Gst::Caps & caps) noexcept
{
  typedef void (*call_wrap_t) (::GValue* value, const ::GstCaps* caps);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_set_caps;
  auto caps_to_c = gi::unwrap (caps, gi::transfer_none, gi::direction_in);
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GValue*) (value_to_c), (const ::GstCaps*) (caps_to_c));
}

// void gst_value_set_caps_features (GValue* value, const GstCapsFeatures* features);
// void gst_value_set_caps_features (::GValue* value, const ::GstCapsFeatures* features);
void value_set_caps_features (GObject::Value value, const Gst::CapsFeatures & features) noexcept
{
  typedef void (*call_wrap_t) (::GValue* value, const ::GstCapsFeatures* features);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_set_caps_features;
  auto features_to_c = gi::unwrap (features, gi::transfer_none, gi::direction_in);
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GValue*) (value_to_c), (const ::GstCapsFeatures*) (features_to_c));
}

// void gst_value_set_double_range (GValue* value, gdouble start, gdouble end);
// void gst_value_set_double_range (::GValue* value, gdouble start, gdouble end);
void value_set_double_range (GObject::Value value, gdouble start, gdouble end) noexcept
{
  typedef void (*call_wrap_t) (::GValue* value, gdouble start, gdouble end);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_set_double_range;
  auto end_to_c = end;
  auto start_to_c = start;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GValue*) (value_to_c), (gdouble) (start_to_c), (gdouble) (end_to_c));
}

// void gst_value_set_flagset (GValue* value, guint flags, guint mask);
// void gst_value_set_flagset (::GValue* value, guint flags, guint mask);
void value_set_flagset (GObject::Value value, guint flags, guint mask) noexcept
{
  typedef void (*call_wrap_t) (::GValue* value, guint flags, guint mask);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_set_flagset;
  auto mask_to_c = mask;
  auto flags_to_c = flags;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GValue*) (value_to_c), (guint) (flags_to_c), (guint) (mask_to_c));
}

// void gst_value_set_fraction (GValue* value, gint numerator, gint denominator);
// void gst_value_set_fraction (::GValue* value, gint numerator, gint denominator);
void value_set_fraction (GObject::Value value, gint numerator, gint denominator) noexcept
{
  typedef void (*call_wrap_t) (::GValue* value, gint numerator, gint denominator);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_set_fraction;
  auto denominator_to_c = denominator;
  auto numerator_to_c = numerator;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GValue*) (value_to_c), (gint) (numerator_to_c), (gint) (denominator_to_c));
}

// void gst_value_set_fraction_range (GValue* value, const GValue* start, const GValue* end);
// void gst_value_set_fraction_range (::GValue* value, const ::GValue* start, const ::GValue* end);
void value_set_fraction_range (GObject::Value value, const GObject::Value & start, const GObject::Value & end) noexcept
{
  typedef void (*call_wrap_t) (::GValue* value, const ::GValue* start, const ::GValue* end);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_set_fraction_range;
  auto end_to_c = gi::unwrap (end, gi::transfer_none, gi::direction_in);
  auto start_to_c = gi::unwrap (start, gi::transfer_none, gi::direction_in);
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GValue*) (value_to_c), (const ::GValue*) (start_to_c), (const ::GValue*) (end_to_c));
}

// void gst_value_set_fraction_range_full (GValue* value, gint numerator_start, gint denominator_start, gint numerator_end, gint denominator_end);
// void gst_value_set_fraction_range_full (::GValue* value, gint numerator_start, gint denominator_start, gint numerator_end, gint denominator_end);
void value_set_fraction_range_full (GObject::Value value, gint numerator_start, gint denominator_start, gint numerator_end, gint denominator_end) noexcept
{
  typedef void (*call_wrap_t) (::GValue* value, gint numerator_start, gint denominator_start, gint numerator_end, gint denominator_end);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_set_fraction_range_full;
  auto denominator_end_to_c = denominator_end;
  auto numerator_end_to_c = numerator_end;
  auto denominator_start_to_c = denominator_start;
  auto numerator_start_to_c = numerator_start;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GValue*) (value_to_c), (gint) (numerator_start_to_c), (gint) (denominator_start_to_c), (gint) (numerator_end_to_c), (gint) (denominator_end_to_c));
}

// void gst_value_set_int64_range (GValue* value, gint64 start, gint64 end);
// void gst_value_set_int64_range (::GValue* value, gint64 start, gint64 end);
void value_set_int64_range (GObject::Value value, gint64 start, gint64 end) noexcept
{
  typedef void (*call_wrap_t) (::GValue* value, gint64 start, gint64 end);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_set_int64_range;
  auto end_to_c = end;
  auto start_to_c = start;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GValue*) (value_to_c), (gint64) (start_to_c), (gint64) (end_to_c));
}

// void gst_value_set_int64_range_step (GValue* value, gint64 start, gint64 end, gint64 step);
// void gst_value_set_int64_range_step (::GValue* value, gint64 start, gint64 end, gint64 step);
void value_set_int64_range_step (GObject::Value value, gint64 start, gint64 end, gint64 step) noexcept
{
  typedef void (*call_wrap_t) (::GValue* value, gint64 start, gint64 end, gint64 step);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_set_int64_range_step;
  auto step_to_c = step;
  auto end_to_c = end;
  auto start_to_c = start;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GValue*) (value_to_c), (gint64) (start_to_c), (gint64) (end_to_c), (gint64) (step_to_c));
}

// void gst_value_set_int_range (GValue* value, gint start, gint end);
// void gst_value_set_int_range (::GValue* value, gint start, gint end);
void value_set_int_range (GObject::Value value, gint start, gint end) noexcept
{
  typedef void (*call_wrap_t) (::GValue* value, gint start, gint end);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_set_int_range;
  auto end_to_c = end;
  auto start_to_c = start;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GValue*) (value_to_c), (gint) (start_to_c), (gint) (end_to_c));
}

// void gst_value_set_int_range_step (GValue* value, gint start, gint end, gint step);
// void gst_value_set_int_range_step (::GValue* value, gint start, gint end, gint step);
void value_set_int_range_step (GObject::Value value, gint start, gint end, gint step) noexcept
{
  typedef void (*call_wrap_t) (::GValue* value, gint start, gint end, gint step);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_set_int_range_step;
  auto step_to_c = step;
  auto end_to_c = end;
  auto start_to_c = start;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GValue*) (value_to_c), (gint) (start_to_c), (gint) (end_to_c), (gint) (step_to_c));
}

// void gst_value_set_structure (GValue* value, const GstStructure* structure);
// void gst_value_set_structure (::GValue* value, const ::GstStructure* structure);
void value_set_structure (GObject::Value value, const Gst::Structure & structure) noexcept
{
  typedef void (*call_wrap_t) (::GValue* value, const ::GstStructure* structure);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_set_structure;
  auto structure_to_c = gi::unwrap (structure, gi::transfer_none, gi::direction_in);
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GValue*) (value_to_c), (const ::GstStructure*) (structure_to_c));
}

// gboolean gst_value_subtract (GValue* dest, const GValue* minuend, const GValue* subtrahend);
// gboolean gst_value_subtract (::GValue* dest, const ::GValue* minuend, const ::GValue* subtrahend);
bool value_subtract (GObject::Value * dest, const GObject::Value & minuend, const GObject::Value & subtrahend) noexcept
{
  typedef gboolean (*call_wrap_t) (::GValue* dest, const ::GValue* minuend, const ::GValue* subtrahend);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_subtract;
  auto subtrahend_to_c = gi::unwrap (subtrahend, gi::transfer_none, gi::direction_in);
  auto minuend_to_c = gi::unwrap (minuend, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<GValue>::type dest_c;
  auto _temp_ret = call_wrap_v ((::GValue*) (dest ? (GValue*) &dest_c : nullptr), (const ::GValue*) (minuend_to_c), (const ::GValue*) (subtrahend_to_c));
  if (dest) *dest = gi::wrap ((GValue*) &dest_c, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, GObject::Value> value_subtract (const GObject::Value & minuend, const GObject::Value & subtrahend) noexcept
{
  typedef gboolean (*call_wrap_t) (::GValue* dest, const ::GValue* minuend, const ::GValue* subtrahend);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_subtract;
  auto subtrahend_to_c = gi::unwrap (subtrahend, gi::transfer_none, gi::direction_in);
  auto minuend_to_c = gi::unwrap (minuend, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<GValue>::type dest_c;
  auto _temp_ret = call_wrap_v ((::GValue*) ((GValue*) &dest_c), (const ::GValue*) (minuend_to_c), (const ::GValue*) (subtrahend_to_c));
  return std::make_tuple (_temp_ret, gi::wrap ((GValue*) &dest_c, gi::transfer_none, gi::direction_out));
}

// gboolean gst_value_union (GValue* dest, const GValue* value1, const GValue* value2);
// gboolean gst_value_union (::GValue* dest, const ::GValue* value1, const ::GValue* value2);
bool value_union (GObject::Value & dest, const GObject::Value & value1, const GObject::Value & value2) noexcept
{
  typedef gboolean (*call_wrap_t) (::GValue* dest, const ::GValue* value1, const ::GValue* value2);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_union;
  auto value2_to_c = gi::unwrap (value2, gi::transfer_none, gi::direction_in);
  auto value1_to_c = gi::unwrap (value1, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<GValue>::type dest_c;
  auto _temp_ret = call_wrap_v ((::GValue*) ((GValue*) &dest_c), (const ::GValue*) (value1_to_c), (const ::GValue*) (value2_to_c));
  dest = gi::wrap ((GValue*) &dest_c, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, GObject::Value> value_union (const GObject::Value & value1, const GObject::Value & value2) noexcept
{
  typedef gboolean (*call_wrap_t) (::GValue* dest, const ::GValue* value1, const ::GValue* value2);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_value_union;
  auto value2_to_c = gi::unwrap (value2, gi::transfer_none, gi::direction_in);
  auto value1_to_c = gi::unwrap (value1, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<GValue>::type dest_c;
  auto _temp_ret = call_wrap_v ((::GValue*) ((GValue*) &dest_c), (const ::GValue*) (value1_to_c), (const ::GValue*) (value2_to_c));
  return std::make_tuple (_temp_ret, gi::wrap ((GValue*) &dest_c, gi::transfer_none, gi::direction_out));
}

// void gst_version (guint* major, guint* minor, guint* micro, guint* nano);
// void gst_version (guint* major, guint* minor, guint* micro, guint* nano);
void version (guint & major, guint & minor, guint & micro, guint & nano) noexcept
{
  typedef void (*call_wrap_t) (guint* major, guint* minor, guint* micro, guint* nano);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_version;
  guint nano_o {};
  guint micro_o {};
  guint minor_o {};
  guint major_o {};
  call_wrap_v ((guint*) (&major_o), (guint*) (&minor_o), (guint*) (&micro_o), (guint*) (&nano_o));
  nano = nano_o;
  micro = micro_o;
  minor = minor_o;
  major = major_o;
}
std::tuple<guint, guint, guint, guint> version () noexcept
{
  typedef void (*call_wrap_t) (guint* major, guint* minor, guint* micro, guint* nano);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_version;
  guint nano_o {};
  guint micro_o {};
  guint minor_o {};
  guint major_o {};
  call_wrap_v ((guint*) (&major_o), (guint*) (&minor_o), (guint*) (&micro_o), (guint*) (&nano_o));
  return std::make_tuple (major_o, minor_o, micro_o, nano_o);
}

// gchar* gst_version_string ();
// char* gst_version_string ();
std::string version_string () noexcept
{
  typedef char* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_version_string;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
