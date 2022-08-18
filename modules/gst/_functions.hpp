// AUTO-GENERATED

#ifndef _GI_GST__FUNCTIONS_HPP_
#define _GI_GST__FUNCTIONS_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace CoreErrorNS_ {

// GQuark gst_core_error_quark ();
// ::GQuark gst_core_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

} // namespace CoreErrorNS_

namespace DebugLevelNS_ {

// const gchar* gst_debug_level_get_name (GstDebugLevel level);
// const char* gst_debug_level_get_name (::GstDebugLevel level);
GI_INLINE_DECL std::string get_name (Gst::DebugLevel level) noexcept;

} // namespace DebugLevelNS_

namespace EventTypeNS_ {

// GstEventTypeFlags gst_event_type_get_flags (GstEventType type);
// ::GstEventTypeFlags gst_event_type_get_flags (::GstEventType type);
GI_INLINE_DECL Gst::EventTypeFlags get_flags (Gst::EventType type) noexcept;

// const gchar* gst_event_type_get_name (GstEventType type);
// const char* gst_event_type_get_name (::GstEventType type);
GI_INLINE_DECL std::string get_name (Gst::EventType type) noexcept;

// GQuark gst_event_type_to_quark (GstEventType type);
// ::GQuark gst_event_type_to_quark (::GstEventType type);
GI_INLINE_DECL GLib::Quark to_quark (Gst::EventType type) noexcept;

} // namespace EventTypeNS_

namespace FormatNS_ {

// GstFormat gst_format_get_by_nick (const gchar* nick);
// ::GstFormat gst_format_get_by_nick (const char* nick);
GI_INLINE_DECL Gst::Format get_by_nick (const std::string & nick) noexcept;

// const GstFormatDefinition* gst_format_get_details (GstFormat format);
// const ::GstFormatDefinition* gst_format_get_details (::GstFormat format);
GI_INLINE_DECL Gst::FormatDefinition get_details (Gst::Format format) noexcept;

// const gchar* gst_format_get_name (GstFormat format);
// const char* gst_format_get_name (::GstFormat format);
GI_INLINE_DECL std::string get_name (Gst::Format format) noexcept;

// GstIterator* gst_format_iterate_definitions ();
// ::GstIterator* gst_format_iterate_definitions ();
GI_INLINE_DECL Gst::Iterator iterate_definitions () noexcept;

// GstFormat gst_format_register (const gchar* nick, const gchar* description);
// ::GstFormat gst_format_register (const char* nick, const char* description);
GI_INLINE_DECL Gst::Format register_ (const std::string & nick, const std::string & description) noexcept;

// GQuark gst_format_to_quark (GstFormat format);
// ::GQuark gst_format_to_quark (::GstFormat format);
GI_INLINE_DECL GLib::Quark to_quark (Gst::Format format) noexcept;

} // namespace FormatNS_

namespace LibraryErrorNS_ {

// GQuark gst_library_error_quark ();
// ::GQuark gst_library_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

} // namespace LibraryErrorNS_

namespace MessageTypeNS_ {

// const gchar* gst_message_type_get_name (GstMessageType type);
// const char* gst_message_type_get_name (::GstMessageType type);
GI_INLINE_DECL std::string get_name (Gst::MessageType type) noexcept;

// GQuark gst_message_type_to_quark (GstMessageType type);
// ::GQuark gst_message_type_to_quark (::GstMessageType type);
GI_INLINE_DECL GLib::Quark to_quark (Gst::MessageType type) noexcept;

} // namespace MessageTypeNS_

namespace PadModeNS_ {

// const gchar* gst_pad_mode_get_name (GstPadMode mode);
// const char* gst_pad_mode_get_name (::GstPadMode mode);
GI_INLINE_DECL std::string get_name (Gst::PadMode mode) noexcept;

} // namespace PadModeNS_

namespace ParseErrorNS_ {

// GQuark gst_parse_error_quark ();
// ::GQuark gst_parse_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

} // namespace ParseErrorNS_

namespace PluginErrorNS_ {

// GQuark gst_plugin_error_quark ();
// ::GQuark gst_plugin_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

} // namespace PluginErrorNS_

namespace QueryTypeNS_ {

// GstQueryTypeFlags gst_query_type_get_flags (GstQueryType type);
// ::GstQueryTypeFlags gst_query_type_get_flags (::GstQueryType type);
GI_INLINE_DECL Gst::QueryTypeFlags get_flags (Gst::QueryType type) noexcept;

// const gchar* gst_query_type_get_name (GstQueryType type);
// const char* gst_query_type_get_name (::GstQueryType type);
GI_INLINE_DECL std::string get_name (Gst::QueryType type) noexcept;

// GQuark gst_query_type_to_quark (GstQueryType type);
// ::GQuark gst_query_type_to_quark (::GstQueryType type);
GI_INLINE_DECL GLib::Quark to_quark (Gst::QueryType type) noexcept;

} // namespace QueryTypeNS_

namespace ResourceErrorNS_ {

// GQuark gst_resource_error_quark ();
// ::GQuark gst_resource_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

} // namespace ResourceErrorNS_

namespace StateChangeNS_ {

// const gchar* gst_state_change_get_name (GstStateChange transition);
// const char* gst_state_change_get_name (::GstStateChange transition);
GI_INLINE_DECL std::string get_name (Gst::StateChange transition) noexcept;

} // namespace StateChangeNS_

namespace StreamErrorNS_ {

// GQuark gst_stream_error_quark ();
// ::GQuark gst_stream_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

} // namespace StreamErrorNS_

namespace StreamTypeNS_ {

// const gchar* gst_stream_type_get_name (GstStreamType stype);
// const char* gst_stream_type_get_name (::GstStreamType stype);
GI_INLINE_DECL std::string get_name (Gst::StreamType stype) noexcept;

} // namespace StreamTypeNS_

namespace TocEntryTypeNS_ {

// const gchar* gst_toc_entry_type_get_nick (GstTocEntryType type);
// const char* gst_toc_entry_type_get_nick (::GstTocEntryType type);
GI_INLINE_DECL std::string get_nick (Gst::TocEntryType type) noexcept;

} // namespace TocEntryTypeNS_

namespace URIErrorNS_ {

// GQuark gst_uri_error_quark ();
// ::GQuark gst_uri_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

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
GI_INLINE_DECL void debug_add_ring_buffer_logger (guint max_size_per_thread, guint thread_timeout) noexcept;

// gchar* gst_debug_bin_to_dot_data (GstBin* bin, GstDebugGraphDetails details);
// char* gst_debug_bin_to_dot_data (::GstBin* bin, ::GstDebugGraphDetails details);
GI_INLINE_DECL std::string debug_bin_to_dot_data (Gst::Bin bin, Gst::DebugGraphDetails details) noexcept;

// void gst_debug_bin_to_dot_file (GstBin* bin, GstDebugGraphDetails details, const gchar* file_name);
// void gst_debug_bin_to_dot_file (::GstBin* bin, ::GstDebugGraphDetails details, const char* file_name);
GI_INLINE_DECL void debug_bin_to_dot_file (Gst::Bin bin, Gst::DebugGraphDetails details, const std::string & file_name) noexcept;

// void gst_debug_bin_to_dot_file_with_ts (GstBin* bin, GstDebugGraphDetails details, const gchar* file_name);
// void gst_debug_bin_to_dot_file_with_ts (::GstBin* bin, ::GstDebugGraphDetails details, const char* file_name);
GI_INLINE_DECL void debug_bin_to_dot_file_with_ts (Gst::Bin bin, Gst::DebugGraphDetails details, const std::string & file_name) noexcept;

// gchar* gst_debug_construct_term_color (guint colorinfo);
// char* gst_debug_construct_term_color (guint colorinfo);
GI_INLINE_DECL std::string debug_construct_term_color (guint colorinfo) noexcept;

// gint gst_debug_construct_win_color (guint colorinfo);
// gint gst_debug_construct_win_color (guint colorinfo);
GI_INLINE_DECL gint debug_construct_win_color (guint colorinfo) noexcept;

// GSList* gst_debug_get_all_categories ();
// ::GSList* gst_debug_get_all_categories ();
GI_INLINE_DECL std::vector<Gst::DebugCategory> debug_get_all_categories () noexcept;

// GstDebugColorMode gst_debug_get_color_mode ();
// ::GstDebugColorMode gst_debug_get_color_mode ();
GI_INLINE_DECL Gst::DebugColorMode debug_get_color_mode () noexcept;

// GstDebugLevel gst_debug_get_default_threshold ();
// ::GstDebugLevel gst_debug_get_default_threshold ();
GI_INLINE_DECL Gst::DebugLevel debug_get_default_threshold () noexcept;

// gchar* gst_debug_get_stack_trace (GstStackTraceFlags flags);
// char* gst_debug_get_stack_trace (::GstStackTraceFlags flags);
GI_INLINE_DECL std::string debug_get_stack_trace (Gst::StackTraceFlags flags) noexcept;

// gboolean gst_debug_is_active ();
// gboolean gst_debug_is_active ();
GI_INLINE_DECL bool debug_is_active () noexcept;

// gboolean gst_debug_is_colored ();
// gboolean gst_debug_is_colored ();
GI_INLINE_DECL bool debug_is_colored () noexcept;

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
GI_INLINE_DECL void debug_log_literal (Gst::DebugCategory category, Gst::DebugLevel level, const std::string & file, const std::string & function, gint line, GObject::Object object, const std::string & message_string) noexcept;
GI_INLINE_DECL void debug_log_literal (Gst::DebugCategory category, Gst::DebugLevel level, const std::string & file, const std::string & function, gint line, const std::string & message_string) noexcept;

// void gst_debug_log_valist (GstDebugCategory* category, GstDebugLevel level, const gchar* file, const gchar* function, gint line, GObject* object, const gchar* format, va_list args);
// void gst_debug_log_valist (::GstDebugCategory* category, ::GstDebugLevel level, const char* file, const char* function, gint line, ::GObject* object, const char* format,  args);
// IGNORE; not introspectable, args type  not supported

// void gst_debug_print_stack_trace ();
// void gst_debug_print_stack_trace ();
GI_INLINE_DECL void debug_print_stack_trace () noexcept;

// guint gst_debug_remove_log_function (GstLogFunction func);
// guint gst_debug_remove_log_function ( func);
// SKIP; func type  not supported

// guint gst_debug_remove_log_function_by_data (gpointer data);
// guint gst_debug_remove_log_function_by_data (void* data);
GI_INLINE_DECL guint debug_remove_log_function_by_data (void* data) noexcept;

// void gst_debug_remove_ring_buffer_logger ();
// void gst_debug_remove_ring_buffer_logger ();
GI_INLINE_DECL void debug_remove_ring_buffer_logger () noexcept;

// gchar** gst_debug_ring_buffer_logger_get_logs ();
// char** gst_debug_ring_buffer_logger_get_logs ();
GI_INLINE_DECL std::vector<std::string> debug_ring_buffer_logger_get_logs () noexcept;

// void gst_debug_set_active (gboolean active);
// void gst_debug_set_active (gboolean active);
GI_INLINE_DECL void debug_set_active (gboolean active) noexcept;

// void gst_debug_set_color_mode (GstDebugColorMode mode);
// void gst_debug_set_color_mode (::GstDebugColorMode mode);
GI_INLINE_DECL void debug_set_color_mode (Gst::DebugColorMode mode) noexcept;

// void gst_debug_set_color_mode_from_string (const gchar* mode);
// void gst_debug_set_color_mode_from_string (const char* mode);
GI_INLINE_DECL void debug_set_color_mode_from_string (const std::string & mode) noexcept;

// void gst_debug_set_colored (gboolean colored);
// void gst_debug_set_colored (gboolean colored);
GI_INLINE_DECL void debug_set_colored (gboolean colored) noexcept;

// void gst_debug_set_default_threshold (GstDebugLevel level);
// void gst_debug_set_default_threshold (::GstDebugLevel level);
GI_INLINE_DECL void debug_set_default_threshold (Gst::DebugLevel level) noexcept;

// void gst_debug_set_threshold_for_name (const gchar* name, GstDebugLevel level);
// void gst_debug_set_threshold_for_name (const char* name, ::GstDebugLevel level);
GI_INLINE_DECL void debug_set_threshold_for_name (const std::string & name, Gst::DebugLevel level) noexcept;

// void gst_debug_set_threshold_from_string (const gchar* list, gboolean reset);
// void gst_debug_set_threshold_from_string (const char* list, gboolean reset);
GI_INLINE_DECL void debug_set_threshold_from_string (const std::string & list, gboolean reset) noexcept;

// void gst_debug_unset_threshold_for_name (const gchar* name);
// void gst_debug_unset_threshold_for_name (const char* name);
GI_INLINE_DECL void debug_unset_threshold_for_name (const std::string & name) noexcept;

// void gst_deinit ();
// void gst_deinit ();
GI_INLINE_DECL void deinit () noexcept;

// gboolean gst_dynamic_type_register (GstPlugin* plugin, GType type);
// gboolean gst_dynamic_type_register (::GstPlugin* plugin, GType type);
GI_INLINE_DECL bool dynamic_type_register (Gst::Plugin plugin, GType type) noexcept;

// gchar* gst_error_get_message (GQuark domain, gint code);
// char* gst_error_get_message (::GQuark domain, gint code);
GI_INLINE_DECL std::string error_get_message (::GQuark domain, gint code) noexcept;

// gchar* gst_filename_to_uri (const gchar* filename, GError ** error);
// char* gst_filename_to_uri (const char* filename, GError ** error);
GI_INLINE_DECL std::string filename_to_uri (const std::string & filename);
GI_INLINE_DECL std::string filename_to_uri (const std::string & filename, GLib::Error * _error) noexcept;

// const gchar* gst_flow_get_name (GstFlowReturn ret);
// const char* gst_flow_get_name (::GstFlowReturn ret);
GI_INLINE_DECL std::string flow_get_name (Gst::FlowReturn ret) noexcept;

// GQuark gst_flow_to_quark (GstFlowReturn ret);
// ::GQuark gst_flow_to_quark (::GstFlowReturn ret);
GI_INLINE_DECL GLib::Quark flow_to_quark (Gst::FlowReturn ret) noexcept;

// gboolean gst_formats_contains (const GstFormat* formats, GstFormat format);
// gboolean gst_formats_contains (const ::GstFormat* formats, ::GstFormat format);
GI_INLINE_DECL bool formats_contains (const std::vector<Gst::Format> & formats, Gst::Format format) noexcept;

// const gchar* gst_get_main_executable_path ();
// const char* gst_get_main_executable_path ();
GI_INLINE_DECL std::string get_main_executable_path () noexcept;

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
GI_INLINE_DECL GLib::OptionGroup init_get_option_group () noexcept;

// gboolean gst_is_caps_features (gconstpointer obj);
// gboolean gst_is_caps_features (const void* obj);
GI_INLINE_DECL bool is_caps_features (const void* obj) noexcept;

// gboolean gst_is_initialized ();
// gboolean gst_is_initialized ();
GI_INLINE_DECL bool is_initialized () noexcept;

// GstStructure* gst_make_element_message_details (const char* name);
// ::GstStructure* gst_make_element_message_details (const char* name);
// IGNORE; not introspectable, varargs not supported

// GParamSpec* gst_param_spec_array (const gchar* name, const gchar* nick, const gchar* blurb, GParamSpec* element_spec, GParamFlags flags);
// ::GParamSpec* gst_param_spec_array (const char* name, const char* nick, const char* blurb, ::GParamSpec* element_spec, ::GParamFlags flags);
GI_INLINE_DECL GObject::ParamSpec param_spec_array (const std::string & name, const std::string & nick, const std::string & blurb, GObject::ParamSpec element_spec, GObject::ParamFlags flags) noexcept;

// GParamSpec* gst_param_spec_fraction (const gchar* name, const gchar* nick, const gchar* blurb, gint min_num, gint min_denom, gint max_num, gint max_denom, gint default_num, gint default_denom, GParamFlags flags);
// ::GParamSpec* gst_param_spec_fraction (const char* name, const char* nick, const char* blurb, gint min_num, gint min_denom, gint max_num, gint max_denom, gint default_num, gint default_denom, ::GParamFlags flags);
GI_INLINE_DECL GObject::ParamSpec param_spec_fraction (const std::string & name, const std::string & nick, const std::string & blurb, gint min_num, gint min_denom, gint max_num, gint max_denom, gint default_num, gint default_denom, GObject::ParamFlags flags) noexcept;

// GType gst_parent_buffer_meta_api_get_type ();
// GType gst_parent_buffer_meta_api_get_type ();
GI_INLINE_DECL GType parent_buffer_meta_api_get_type () noexcept;

// GstElement* gst_parse_bin_from_description (const gchar* bin_description, gboolean ghost_unlinked_pads, GError ** error);
// ::GstBin* gst_parse_bin_from_description (const char* bin_description, gboolean ghost_unlinked_pads, GError ** error);
GI_INLINE_DECL Gst::Bin parse_bin_from_description (const std::string & bin_description, gboolean ghost_unlinked_pads);
GI_INLINE_DECL Gst::Bin parse_bin_from_description (const std::string & bin_description, gboolean ghost_unlinked_pads, GLib::Error * _error) noexcept;

// GstElement* gst_parse_bin_from_description_full (const gchar* bin_description, gboolean ghost_unlinked_pads, GstParseContext* context, GstParseFlags flags, GError ** error);
// ::GstElement* gst_parse_bin_from_description_full (const char* bin_description, gboolean ghost_unlinked_pads, ::GstParseContext* context, ::GstParseFlags flags, GError ** error);
GI_INLINE_DECL Gst::Element parse_bin_from_description_full (const std::string & bin_description, gboolean ghost_unlinked_pads, Gst::ParseContext context, Gst::ParseFlags flags);
GI_INLINE_DECL Gst::Element parse_bin_from_description_full (const std::string & bin_description, gboolean ghost_unlinked_pads, Gst::ParseFlags flags);
GI_INLINE_DECL Gst::Element parse_bin_from_description_full (const std::string & bin_description, gboolean ghost_unlinked_pads, Gst::ParseContext context, Gst::ParseFlags flags, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gst::Element parse_bin_from_description_full (const std::string & bin_description, gboolean ghost_unlinked_pads, Gst::ParseFlags flags, GLib::Error * _error) noexcept;

// GstElement* gst_parse_launch (const gchar* pipeline_description, GError ** error);
// ::GstElement* gst_parse_launch (const char* pipeline_description, GError ** error);
GI_INLINE_DECL Gst::Element parse_launch (const std::string & pipeline_description);
GI_INLINE_DECL Gst::Element parse_launch (const std::string & pipeline_description, GLib::Error * _error) noexcept;

// GstElement* gst_parse_launch_full (const gchar* pipeline_description, GstParseContext* context, GstParseFlags flags, GError ** error);
// ::GstElement* gst_parse_launch_full (const char* pipeline_description, ::GstParseContext* context, ::GstParseFlags flags, GError ** error);
GI_INLINE_DECL Gst::Element parse_launch_full (const std::string & pipeline_description, Gst::ParseContext context, Gst::ParseFlags flags);
GI_INLINE_DECL Gst::Element parse_launch_full (const std::string & pipeline_description, Gst::ParseFlags flags);
GI_INLINE_DECL Gst::Element parse_launch_full (const std::string & pipeline_description, Gst::ParseContext context, Gst::ParseFlags flags, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gst::Element parse_launch_full (const std::string & pipeline_description, Gst::ParseFlags flags, GLib::Error * _error) noexcept;

// GstElement* gst_parse_launchv (const gchar** argv, GError ** error);
// ::GstElement* gst_parse_launchv (const char** argv, GError ** error);
GI_INLINE_DECL Gst::Element parse_launchv (const std::vector<std::string> & argv);
GI_INLINE_DECL Gst::Element parse_launchv (const std::vector<std::string> & argv, GLib::Error * _error) noexcept;

// GstElement* gst_parse_launchv_full (const gchar** argv, GstParseContext* context, GstParseFlags flags, GError ** error);
// ::GstElement* gst_parse_launchv_full (const char** argv, ::GstParseContext* context, ::GstParseFlags flags, GError ** error);
GI_INLINE_DECL Gst::Element parse_launchv_full (const std::vector<std::string> & argv, Gst::ParseContext context, Gst::ParseFlags flags);
GI_INLINE_DECL Gst::Element parse_launchv_full (const std::vector<std::string> & argv, Gst::ParseFlags flags);
GI_INLINE_DECL Gst::Element parse_launchv_full (const std::vector<std::string> & argv, Gst::ParseContext context, Gst::ParseFlags flags, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gst::Element parse_launchv_full (const std::vector<std::string> & argv, Gst::ParseFlags flags, GLib::Error * _error) noexcept;

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
GI_INLINE_DECL std::vector<std::string> protection_filter_systems_by_available_decryptors (const std::vector<std::string> & system_identifiers) noexcept;

// GType gst_protection_meta_api_get_type ();
// GType gst_protection_meta_api_get_type ();
GI_INLINE_DECL GType protection_meta_api_get_type () noexcept;

// const gchar* gst_protection_select_system (const gchar** system_identifiers);
// const char* gst_protection_select_system (const char** system_identifiers);
GI_INLINE_DECL std::string protection_select_system (const std::vector<std::string> & system_identifiers) noexcept;

// GType gst_reference_timestamp_meta_api_get_type ();
// GType gst_reference_timestamp_meta_api_get_type ();
GI_INLINE_DECL GType reference_timestamp_meta_api_get_type () noexcept;

// gboolean gst_segtrap_is_enabled ();
// gboolean gst_segtrap_is_enabled ();
GI_INLINE_DECL bool segtrap_is_enabled () noexcept;

// void gst_segtrap_set_enabled (gboolean enabled);
// void gst_segtrap_set_enabled (gboolean enabled);
GI_INLINE_DECL void segtrap_set_enabled (gboolean enabled) noexcept;

// GType gst_static_caps_get_type ();
// GType gst_static_caps_get_type ();
GI_INLINE_DECL GType static_caps_get_type () noexcept;

// GType gst_static_pad_template_get_type ();
// GType gst_static_pad_template_get_type ();
GI_INLINE_DECL GType static_pad_template_get_type () noexcept;

// gboolean gst_tag_exists (const gchar* tag);
// gboolean gst_tag_exists (const char* tag);
GI_INLINE_DECL bool tag_exists (const std::string & tag) noexcept;

// const gchar* gst_tag_get_description (const gchar* tag);
// const char* gst_tag_get_description (const char* tag);
GI_INLINE_DECL std::string tag_get_description (const std::string & tag) noexcept;

// GstTagFlag gst_tag_get_flag (const gchar* tag);
// ::GstTagFlag gst_tag_get_flag (const char* tag);
GI_INLINE_DECL Gst::TagFlag tag_get_flag (const std::string & tag) noexcept;

// const gchar* gst_tag_get_nick (const gchar* tag);
// const char* gst_tag_get_nick (const char* tag);
GI_INLINE_DECL std::string tag_get_nick (const std::string & tag) noexcept;

// GType gst_tag_get_type (const gchar* tag);
// GType gst_tag_get_type (const char* tag);
GI_INLINE_DECL GType tag_get_type (const std::string & tag) noexcept;

// gboolean gst_tag_is_fixed (const gchar* tag);
// gboolean gst_tag_is_fixed (const char* tag);
GI_INLINE_DECL bool tag_is_fixed (const std::string & tag) noexcept;

// void gst_tag_merge_strings_with_comma (GValue* dest, const GValue* src);
// void gst_tag_merge_strings_with_comma (::GValue* dest, const ::GValue* src);
GI_INLINE_DECL void tag_merge_strings_with_comma (GObject::Value & dest, const GObject::Value & src) noexcept;
GI_INLINE_DECL GObject::Value tag_merge_strings_with_comma (const GObject::Value & src) noexcept;

// void gst_tag_merge_use_first (GValue* dest, const GValue* src);
// void gst_tag_merge_use_first (::GValue* dest, const ::GValue* src);
GI_INLINE_DECL void tag_merge_use_first (GObject::Value & dest, const GObject::Value & src) noexcept;
GI_INLINE_DECL GObject::Value tag_merge_use_first (const GObject::Value & src) noexcept;

// void gst_tag_register (const gchar* name, GstTagFlag flag, GType type, const gchar* nick, const gchar* blurb, GstTagMergeFunc func);
// void gst_tag_register (const char* name, ::GstTagFlag flag, GType type, const char* nick, const char* blurb,  func);
// IGNORE; not introspectable, func type  not supported

// void gst_tag_register_static (const gchar* name, GstTagFlag flag, GType type, const gchar* nick, const gchar* blurb, GstTagMergeFunc func);
// void gst_tag_register_static (const char* name, ::GstTagFlag flag, GType type, const char* nick, const char* blurb,  func);
// IGNORE; not introspectable, func type  not supported

// GList* gst_tracing_get_active_tracers ();
// ::GList* gst_tracing_get_active_tracers ();
GI_INLINE_DECL std::vector<Gst::Tracer> tracing_get_active_tracers () noexcept;

// void gst_tracing_register_hook (GstTracer* tracer, const gchar* detail, GCallback func);
// void gst_tracing_register_hook (::GstTracer* tracer, const char* detail,  func);
// SKIP; func type  not supported

// GType gst_type_find_get_type ();
// GType gst_type_find_get_type ();
GI_INLINE_DECL GType type_find_get_type () noexcept;

// gboolean gst_type_is_plugin_api (GType type, GstPluginAPIFlags* flags);
// gboolean gst_type_is_plugin_api (GType type, ::GstPluginAPIFlags* flags);
GI_INLINE_DECL bool type_is_plugin_api (GType type, Gst::PluginAPIFlags & flags) noexcept;
GI_INLINE_DECL std::tuple<bool, Gst::PluginAPIFlags> type_is_plugin_api (GType type) noexcept;

// void gst_type_mark_as_plugin_api (GType type, GstPluginAPIFlags flags);
// void gst_type_mark_as_plugin_api (GType type, ::GstPluginAPIFlags flags);
GI_INLINE_DECL void type_mark_as_plugin_api (GType type, Gst::PluginAPIFlags flags) noexcept;

// gboolean gst_update_registry ();
// gboolean gst_update_registry ();
GI_INLINE_DECL bool update_registry () noexcept;

// gpointer gst_util_array_binary_search (gpointer array, guint num_elements, gsize element_size, GCompareDataFunc search_func, GstSearchMode mode, gconstpointer search_data, gpointer user_data);
// void* gst_util_array_binary_search (void* array, guint num_elements, gsize element_size, GLib::CompareDataFunc::cfunction_type search_func, ::GstSearchMode mode, const void* search_data, void* user_data);
GI_INLINE_DECL gpointer util_array_binary_search (void* array, guint num_elements, gsize element_size, GLib::CompareDataFunc search_func, Gst::SearchMode mode, const void* search_data) noexcept;

// void gst_util_double_to_fraction (gdouble src, gint* dest_n, gint* dest_d);
// void gst_util_double_to_fraction (gdouble src, gint* dest_n, gint* dest_d);
GI_INLINE_DECL void util_double_to_fraction (gdouble src, gint & dest_n, gint & dest_d) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> util_double_to_fraction (gdouble src) noexcept;

// void gst_util_dump_buffer (GstBuffer* buf);
// void gst_util_dump_buffer (::GstBuffer* buf);
GI_INLINE_DECL void util_dump_buffer (Gst::Buffer buf) noexcept;

// void gst_util_dump_mem (const guchar* mem, guint size);
// void gst_util_dump_mem (const guint8* mem, guint size);
GI_INLINE_DECL void util_dump_mem (guint8 * mem, guint size) noexcept;

// gboolean gst_util_fraction_add (gint a_n, gint a_d, gint b_n, gint b_d, gint* res_n, gint* res_d);
// gboolean gst_util_fraction_add (gint a_n, gint a_d, gint b_n, gint b_d, gint* res_n, gint* res_d);
GI_INLINE_DECL bool util_fraction_add (gint a_n, gint a_d, gint b_n, gint b_d, gint & res_n, gint & res_d) noexcept;
GI_INLINE_DECL std::tuple<bool, gint, gint> util_fraction_add (gint a_n, gint a_d, gint b_n, gint b_d) noexcept;

// gint gst_util_fraction_compare (gint a_n, gint a_d, gint b_n, gint b_d);
// gint gst_util_fraction_compare (gint a_n, gint a_d, gint b_n, gint b_d);
GI_INLINE_DECL gint util_fraction_compare (gint a_n, gint a_d, gint b_n, gint b_d) noexcept;

// gboolean gst_util_fraction_multiply (gint a_n, gint a_d, gint b_n, gint b_d, gint* res_n, gint* res_d);
// gboolean gst_util_fraction_multiply (gint a_n, gint a_d, gint b_n, gint b_d, gint* res_n, gint* res_d);
GI_INLINE_DECL bool util_fraction_multiply (gint a_n, gint a_d, gint b_n, gint b_d, gint & res_n, gint & res_d) noexcept;
GI_INLINE_DECL std::tuple<bool, gint, gint> util_fraction_multiply (gint a_n, gint a_d, gint b_n, gint b_d) noexcept;

// void gst_util_fraction_to_double (gint src_n, gint src_d, gdouble* dest);
// void gst_util_fraction_to_double (gint src_n, gint src_d, gdouble* dest);
GI_INLINE_DECL void util_fraction_to_double (gint src_n, gint src_d, gdouble & dest) noexcept;
GI_INLINE_DECL gdouble util_fraction_to_double (gint src_n, gint src_d) noexcept;

// guint64 gst_util_gdouble_to_guint64 (gdouble value);
// guint64 gst_util_gdouble_to_guint64 (gdouble value);
GI_INLINE_DECL guint64 util_gdouble_to_guint64 (gdouble value) noexcept;

// gboolean gst_util_get_object_array (GObject* object, const gchar* name, GValueArray** array);
// gboolean gst_util_get_object_array (::GObject* object, const char* name, * array);
// SKIP; array type  not supported

// GstClockTime gst_util_get_timestamp ();
// ::GstClockTime gst_util_get_timestamp ();
GI_INLINE_DECL Gst::ClockTime util_get_timestamp () noexcept;

// gint gst_util_greatest_common_divisor (gint a, gint b);
// gint gst_util_greatest_common_divisor (gint a, gint b);
GI_INLINE_DECL gint util_greatest_common_divisor (gint a, gint b) noexcept;

// gint64 gst_util_greatest_common_divisor_int64 (gint64 a, gint64 b);
// gint64 gst_util_greatest_common_divisor_int64 (gint64 a, gint64 b);
GI_INLINE_DECL gint64 util_greatest_common_divisor_int64 (gint64 a, gint64 b) noexcept;

// guint gst_util_group_id_next ();
// guint gst_util_group_id_next ();
GI_INLINE_DECL guint util_group_id_next () noexcept;

// gdouble gst_util_guint64_to_gdouble (guint64 value);
// gdouble gst_util_guint64_to_gdouble (guint64 value);
GI_INLINE_DECL gdouble util_guint64_to_gdouble (guint64 value) noexcept;

// gint32 gst_util_seqnum_compare (guint32 s1, guint32 s2);
// gint32 gst_util_seqnum_compare (guint32 s1, guint32 s2);
GI_INLINE_DECL gint32 util_seqnum_compare (guint32 s1, guint32 s2) noexcept;

// guint32 gst_util_seqnum_next ();
// guint32 gst_util_seqnum_next ();
GI_INLINE_DECL guint32 util_seqnum_next () noexcept;

// void gst_util_set_object_arg (GObject* object, const gchar* name, const gchar* value);
// void gst_util_set_object_arg (::GObject* object, const char* name, const char* value);
GI_INLINE_DECL void util_set_object_arg (GObject::Object object, const std::string & name, const std::string & value) noexcept;

// gboolean gst_util_set_object_array (GObject* object, const gchar* name, const GValueArray* array);
// gboolean gst_util_set_object_array (::GObject* object, const char* name, const  array);
// SKIP; array type  not supported

// void gst_util_set_value_from_string (GValue* value, const gchar* value_str);
// void gst_util_set_value_from_string (::GValue* value, const char* value_str);
GI_INLINE_DECL void util_set_value_from_string (GObject::Value & value, const std::string & value_str) noexcept;
GI_INLINE_DECL GObject::Value util_set_value_from_string (const std::string & value_str) noexcept;

// guint64 gst_util_uint64_scale (guint64 val, guint64 num, guint64 denom);
// guint64 gst_util_uint64_scale (guint64 val, guint64 num, guint64 denom);
GI_INLINE_DECL guint64 util_uint64_scale (guint64 val, guint64 num, guint64 denom) noexcept;

// guint64 gst_util_uint64_scale_ceil (guint64 val, guint64 num, guint64 denom);
// guint64 gst_util_uint64_scale_ceil (guint64 val, guint64 num, guint64 denom);
GI_INLINE_DECL guint64 util_uint64_scale_ceil (guint64 val, guint64 num, guint64 denom) noexcept;

// guint64 gst_util_uint64_scale_int (guint64 val, gint num, gint denom);
// guint64 gst_util_uint64_scale_int (guint64 val, gint num, gint denom);
GI_INLINE_DECL guint64 util_uint64_scale_int (guint64 val, gint num, gint denom) noexcept;

// guint64 gst_util_uint64_scale_int_ceil (guint64 val, gint num, gint denom);
// guint64 gst_util_uint64_scale_int_ceil (guint64 val, gint num, gint denom);
GI_INLINE_DECL guint64 util_uint64_scale_int_ceil (guint64 val, gint num, gint denom) noexcept;

// guint64 gst_util_uint64_scale_int_round (guint64 val, gint num, gint denom);
// guint64 gst_util_uint64_scale_int_round (guint64 val, gint num, gint denom);
GI_INLINE_DECL guint64 util_uint64_scale_int_round (guint64 val, gint num, gint denom) noexcept;

// guint64 gst_util_uint64_scale_round (guint64 val, guint64 num, guint64 denom);
// guint64 gst_util_uint64_scale_round (guint64 val, guint64 num, guint64 denom);
GI_INLINE_DECL guint64 util_uint64_scale_round (guint64 val, guint64 num, guint64 denom) noexcept;

// gboolean gst_value_can_compare (const GValue* value1, const GValue* value2);
// gboolean gst_value_can_compare (const ::GValue* value1, const ::GValue* value2);
GI_INLINE_DECL bool value_can_compare (const GObject::Value & value1, const GObject::Value & value2) noexcept;

// gboolean gst_value_can_intersect (const GValue* value1, const GValue* value2);
// gboolean gst_value_can_intersect (const ::GValue* value1, const ::GValue* value2);
GI_INLINE_DECL bool value_can_intersect (const GObject::Value & value1, const GObject::Value & value2) noexcept;

// gboolean gst_value_can_subtract (const GValue* minuend, const GValue* subtrahend);
// gboolean gst_value_can_subtract (const ::GValue* minuend, const ::GValue* subtrahend);
GI_INLINE_DECL bool value_can_subtract (const GObject::Value & minuend, const GObject::Value & subtrahend) noexcept;

// gboolean gst_value_can_union (const GValue* value1, const GValue* value2);
// gboolean gst_value_can_union (const ::GValue* value1, const ::GValue* value2);
GI_INLINE_DECL bool value_can_union (const GObject::Value & value1, const GObject::Value & value2) noexcept;

// gint gst_value_compare (const GValue* value1, const GValue* value2);
// gint gst_value_compare (const ::GValue* value1, const ::GValue* value2);
GI_INLINE_DECL gint value_compare (const GObject::Value & value1, const GObject::Value & value2) noexcept;

// gboolean gst_value_deserialize (GValue* dest, const gchar* src);
// gboolean gst_value_deserialize (::GValue* dest, const char* src);
GI_INLINE_DECL bool value_deserialize (GObject::Value & dest, const std::string & src) noexcept;
GI_INLINE_DECL std::tuple<bool, GObject::Value> value_deserialize (const std::string & src) noexcept;

// gboolean gst_value_deserialize_with_pspec (GValue* dest, const gchar* src, GParamSpec* pspec);
// gboolean gst_value_deserialize_with_pspec (::GValue* dest, const char* src, ::GParamSpec* pspec);
GI_INLINE_DECL bool value_deserialize_with_pspec (GObject::Value & dest, const std::string & src, GObject::ParamSpec pspec) noexcept;
GI_INLINE_DECL bool value_deserialize_with_pspec (GObject::Value & dest, const std::string & src) noexcept;
GI_INLINE_DECL std::tuple<bool, GObject::Value> value_deserialize_with_pspec (const std::string & src, GObject::ParamSpec pspec) noexcept;
GI_INLINE_DECL std::tuple<bool, GObject::Value> value_deserialize_with_pspec (const std::string & src) noexcept;

// gboolean gst_value_fixate (GValue* dest, const GValue* src);
// gboolean gst_value_fixate (::GValue* dest, const ::GValue* src);
GI_INLINE_DECL bool value_fixate (GObject::Value dest, const GObject::Value & src) noexcept;

// gboolean gst_value_fraction_multiply (GValue* product, const GValue* factor1, const GValue* factor2);
// gboolean gst_value_fraction_multiply (::GValue* product, const ::GValue* factor1, const ::GValue* factor2);
GI_INLINE_DECL bool value_fraction_multiply (GObject::Value product, const GObject::Value & factor1, const GObject::Value & factor2) noexcept;

// gboolean gst_value_fraction_subtract (GValue* dest, const GValue* minuend, const GValue* subtrahend);
// gboolean gst_value_fraction_subtract (::GValue* dest, const ::GValue* minuend, const ::GValue* subtrahend);
GI_INLINE_DECL bool value_fraction_subtract (GObject::Value dest, const GObject::Value & minuend, const GObject::Value & subtrahend) noexcept;

// guint64 gst_value_get_bitmask (const GValue* value);
// guint64 gst_value_get_bitmask (const ::GValue* value);
GI_INLINE_DECL guint64 value_get_bitmask (const GObject::Value & value) noexcept;

// const GstCaps* gst_value_get_caps (const GValue* value);
// const ::GstCaps* gst_value_get_caps (const ::GValue* value);
GI_INLINE_DECL Gst::Caps value_get_caps (const GObject::Value & value) noexcept;

// const GstCapsFeatures* gst_value_get_caps_features (const GValue* value);
// const ::GstCapsFeatures* gst_value_get_caps_features (const ::GValue* value);
GI_INLINE_DECL Gst::CapsFeatures value_get_caps_features (const GObject::Value & value) noexcept;

// gdouble gst_value_get_double_range_max (const GValue* value);
// gdouble gst_value_get_double_range_max (const ::GValue* value);
GI_INLINE_DECL gdouble value_get_double_range_max (const GObject::Value & value) noexcept;

// gdouble gst_value_get_double_range_min (const GValue* value);
// gdouble gst_value_get_double_range_min (const ::GValue* value);
GI_INLINE_DECL gdouble value_get_double_range_min (const GObject::Value & value) noexcept;

// guint gst_value_get_flagset_flags (const GValue* value);
// guint gst_value_get_flagset_flags (const ::GValue* value);
GI_INLINE_DECL guint value_get_flagset_flags (const GObject::Value & value) noexcept;

// guint gst_value_get_flagset_mask (const GValue* value);
// guint gst_value_get_flagset_mask (const ::GValue* value);
GI_INLINE_DECL guint value_get_flagset_mask (const GObject::Value & value) noexcept;

// gint gst_value_get_fraction_denominator (const GValue* value);
// gint gst_value_get_fraction_denominator (const ::GValue* value);
GI_INLINE_DECL gint value_get_fraction_denominator (const GObject::Value & value) noexcept;

// gint gst_value_get_fraction_numerator (const GValue* value);
// gint gst_value_get_fraction_numerator (const ::GValue* value);
GI_INLINE_DECL gint value_get_fraction_numerator (const GObject::Value & value) noexcept;

// const GValue* gst_value_get_fraction_range_max (const GValue* value);
// const ::GValue* gst_value_get_fraction_range_max (const ::GValue* value);
GI_INLINE_DECL GObject::Value value_get_fraction_range_max (const GObject::Value & value) noexcept;

// const GValue* gst_value_get_fraction_range_min (const GValue* value);
// const ::GValue* gst_value_get_fraction_range_min (const ::GValue* value);
GI_INLINE_DECL GObject::Value value_get_fraction_range_min (const GObject::Value & value) noexcept;

// gint64 gst_value_get_int64_range_max (const GValue* value);
// gint64 gst_value_get_int64_range_max (const ::GValue* value);
GI_INLINE_DECL gint64 value_get_int64_range_max (const GObject::Value & value) noexcept;

// gint64 gst_value_get_int64_range_min (const GValue* value);
// gint64 gst_value_get_int64_range_min (const ::GValue* value);
GI_INLINE_DECL gint64 value_get_int64_range_min (const GObject::Value & value) noexcept;

// gint64 gst_value_get_int64_range_step (const GValue* value);
// gint64 gst_value_get_int64_range_step (const ::GValue* value);
GI_INLINE_DECL gint64 value_get_int64_range_step (const GObject::Value & value) noexcept;

// gint gst_value_get_int_range_max (const GValue* value);
// gint gst_value_get_int_range_max (const ::GValue* value);
GI_INLINE_DECL gint value_get_int_range_max (const GObject::Value & value) noexcept;

// gint gst_value_get_int_range_min (const GValue* value);
// gint gst_value_get_int_range_min (const ::GValue* value);
GI_INLINE_DECL gint value_get_int_range_min (const GObject::Value & value) noexcept;

// gint gst_value_get_int_range_step (const GValue* value);
// gint gst_value_get_int_range_step (const ::GValue* value);
GI_INLINE_DECL gint value_get_int_range_step (const GObject::Value & value) noexcept;

// const GstStructure* gst_value_get_structure (const GValue* value);
// const ::GstStructure* gst_value_get_structure (const ::GValue* value);
GI_INLINE_DECL Gst::Structure value_get_structure (const GObject::Value & value) noexcept;

// void gst_value_init_and_copy (GValue* dest, const GValue* src);
// void gst_value_init_and_copy (::GValue* dest, const ::GValue* src);
GI_INLINE_DECL void value_init_and_copy (GObject::Value & dest, const GObject::Value & src) noexcept;
GI_INLINE_DECL GObject::Value value_init_and_copy (const GObject::Value & src) noexcept;

// gboolean gst_value_intersect (GValue* dest, const GValue* value1, const GValue* value2);
// gboolean gst_value_intersect (::GValue* dest, const ::GValue* value1, const ::GValue* value2);
GI_INLINE_DECL bool value_intersect (GObject::Value * dest, const GObject::Value & value1, const GObject::Value & value2) noexcept;
GI_INLINE_DECL std::tuple<bool, GObject::Value> value_intersect (const GObject::Value & value1, const GObject::Value & value2) noexcept;

// gboolean gst_value_is_fixed (const GValue* value);
// gboolean gst_value_is_fixed (const ::GValue* value);
GI_INLINE_DECL bool value_is_fixed (const GObject::Value & value) noexcept;

// gboolean gst_value_is_subset (const GValue* value1, const GValue* value2);
// gboolean gst_value_is_subset (const ::GValue* value1, const ::GValue* value2);
GI_INLINE_DECL bool value_is_subset (const GObject::Value & value1, const GObject::Value & value2) noexcept;

// void gst_value_register (const GstValueTable* table);
// void gst_value_register (const ::GstValueTable* table);
GI_INLINE_DECL void value_register (const Gst::ValueTable & table) noexcept;

// gchar* gst_value_serialize (const GValue* value);
// char* gst_value_serialize (const ::GValue* value);
GI_INLINE_DECL std::string value_serialize (const GObject::Value & value) noexcept;

// void gst_value_set_bitmask (GValue* value, guint64 bitmask);
// void gst_value_set_bitmask (::GValue* value, guint64 bitmask);
GI_INLINE_DECL void value_set_bitmask (GObject::Value value, guint64 bitmask) noexcept;

// void gst_value_set_caps (GValue* value, const GstCaps* caps);
// void gst_value_set_caps (::GValue* value, const ::GstCaps* caps);
GI_INLINE_DECL void value_set_caps (GObject::Value value, const Gst::Caps & caps) noexcept;

// void gst_value_set_caps_features (GValue* value, const GstCapsFeatures* features);
// void gst_value_set_caps_features (::GValue* value, const ::GstCapsFeatures* features);
GI_INLINE_DECL void value_set_caps_features (GObject::Value value, const Gst::CapsFeatures & features) noexcept;

// void gst_value_set_double_range (GValue* value, gdouble start, gdouble end);
// void gst_value_set_double_range (::GValue* value, gdouble start, gdouble end);
GI_INLINE_DECL void value_set_double_range (GObject::Value value, gdouble start, gdouble end) noexcept;

// void gst_value_set_flagset (GValue* value, guint flags, guint mask);
// void gst_value_set_flagset (::GValue* value, guint flags, guint mask);
GI_INLINE_DECL void value_set_flagset (GObject::Value value, guint flags, guint mask) noexcept;

// void gst_value_set_fraction (GValue* value, gint numerator, gint denominator);
// void gst_value_set_fraction (::GValue* value, gint numerator, gint denominator);
GI_INLINE_DECL void value_set_fraction (GObject::Value value, gint numerator, gint denominator) noexcept;

// void gst_value_set_fraction_range (GValue* value, const GValue* start, const GValue* end);
// void gst_value_set_fraction_range (::GValue* value, const ::GValue* start, const ::GValue* end);
GI_INLINE_DECL void value_set_fraction_range (GObject::Value value, const GObject::Value & start, const GObject::Value & end) noexcept;

// void gst_value_set_fraction_range_full (GValue* value, gint numerator_start, gint denominator_start, gint numerator_end, gint denominator_end);
// void gst_value_set_fraction_range_full (::GValue* value, gint numerator_start, gint denominator_start, gint numerator_end, gint denominator_end);
GI_INLINE_DECL void value_set_fraction_range_full (GObject::Value value, gint numerator_start, gint denominator_start, gint numerator_end, gint denominator_end) noexcept;

// void gst_value_set_int64_range (GValue* value, gint64 start, gint64 end);
// void gst_value_set_int64_range (::GValue* value, gint64 start, gint64 end);
GI_INLINE_DECL void value_set_int64_range (GObject::Value value, gint64 start, gint64 end) noexcept;

// void gst_value_set_int64_range_step (GValue* value, gint64 start, gint64 end, gint64 step);
// void gst_value_set_int64_range_step (::GValue* value, gint64 start, gint64 end, gint64 step);
GI_INLINE_DECL void value_set_int64_range_step (GObject::Value value, gint64 start, gint64 end, gint64 step) noexcept;

// void gst_value_set_int_range (GValue* value, gint start, gint end);
// void gst_value_set_int_range (::GValue* value, gint start, gint end);
GI_INLINE_DECL void value_set_int_range (GObject::Value value, gint start, gint end) noexcept;

// void gst_value_set_int_range_step (GValue* value, gint start, gint end, gint step);
// void gst_value_set_int_range_step (::GValue* value, gint start, gint end, gint step);
GI_INLINE_DECL void value_set_int_range_step (GObject::Value value, gint start, gint end, gint step) noexcept;

// void gst_value_set_structure (GValue* value, const GstStructure* structure);
// void gst_value_set_structure (::GValue* value, const ::GstStructure* structure);
GI_INLINE_DECL void value_set_structure (GObject::Value value, const Gst::Structure & structure) noexcept;

// gboolean gst_value_subtract (GValue* dest, const GValue* minuend, const GValue* subtrahend);
// gboolean gst_value_subtract (::GValue* dest, const ::GValue* minuend, const ::GValue* subtrahend);
GI_INLINE_DECL bool value_subtract (GObject::Value * dest, const GObject::Value & minuend, const GObject::Value & subtrahend) noexcept;
GI_INLINE_DECL std::tuple<bool, GObject::Value> value_subtract (const GObject::Value & minuend, const GObject::Value & subtrahend) noexcept;

// gboolean gst_value_union (GValue* dest, const GValue* value1, const GValue* value2);
// gboolean gst_value_union (::GValue* dest, const ::GValue* value1, const ::GValue* value2);
GI_INLINE_DECL bool value_union (GObject::Value & dest, const GObject::Value & value1, const GObject::Value & value2) noexcept;
GI_INLINE_DECL std::tuple<bool, GObject::Value> value_union (const GObject::Value & value1, const GObject::Value & value2) noexcept;

// void gst_version (guint* major, guint* minor, guint* micro, guint* nano);
// void gst_version (guint* major, guint* minor, guint* micro, guint* nano);
GI_INLINE_DECL void version (guint & major, guint & minor, guint & micro, guint & nano) noexcept;
GI_INLINE_DECL std::tuple<guint, guint, guint, guint> version () noexcept;

// gchar* gst_version_string ();
// char* gst_version_string ();
GI_INLINE_DECL std::string version_string () noexcept;

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
