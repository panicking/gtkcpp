// AUTO-GENERATED

#ifndef _GI_JAVASCRIPTCORE__FUNCTIONS_HPP_
#define _GI_JAVASCRIPTCORE__FUNCTIONS_HPP_

namespace gi {

namespace repository {

namespace JavaScriptCore {

// guint jsc_get_major_version ();
// guint jsc_get_major_version ();
GI_INLINE_DECL guint get_major_version () noexcept;

// guint jsc_get_micro_version ();
// guint jsc_get_micro_version ();
GI_INLINE_DECL guint get_micro_version () noexcept;

// guint jsc_get_minor_version ();
// guint jsc_get_minor_version ();
GI_INLINE_DECL guint get_minor_version () noexcept;

// void jsc_options_foreach (JSCOptionsFunc function, gpointer user_data);
// void jsc_options_foreach (JavaScriptCore::OptionsFunc::cfunction_type function, void* user_data);
GI_INLINE_DECL void options_foreach (JavaScriptCore::OptionsFunc function) noexcept;

// gboolean jsc_options_get_boolean (const char* option, gboolean* value);
// gboolean jsc_options_get_boolean (const char* option, gboolean* value);
GI_INLINE_DECL bool options_get_boolean (const std::string & option, bool & value) noexcept;
GI_INLINE_DECL std::tuple<bool, bool> options_get_boolean (const std::string & option) noexcept;

// gboolean jsc_options_get_double (const char* option, gdouble* value);
// gboolean jsc_options_get_double (const char* option, gdouble* value);
GI_INLINE_DECL bool options_get_double (const std::string & option, gdouble & value) noexcept;
GI_INLINE_DECL std::tuple<bool, gdouble> options_get_double (const std::string & option) noexcept;

// gboolean jsc_options_get_int (const char* option, gint* value);
// gboolean jsc_options_get_int (const char* option, gint* value);
GI_INLINE_DECL bool options_get_int (const std::string & option, gint & value) noexcept;
GI_INLINE_DECL std::tuple<bool, gint> options_get_int (const std::string & option) noexcept;

// GOptionGroup* jsc_options_get_option_group ();
// ::GOptionGroup* jsc_options_get_option_group ();
GI_INLINE_DECL GLib::OptionGroup options_get_option_group () noexcept;

// gboolean jsc_options_get_range_string (const char* option, char** value);
// gboolean jsc_options_get_range_string (const char* option, char** value);
GI_INLINE_DECL bool options_get_range_string (const std::string & option, std::string & value) noexcept;
GI_INLINE_DECL std::tuple<bool, std::string> options_get_range_string (const std::string & option) noexcept;

// gboolean jsc_options_get_size (const char* option, gsize* value);
// gboolean jsc_options_get_size (const char* option, gsize* value);
GI_INLINE_DECL bool options_get_size (const std::string & option, gsize & value) noexcept;
GI_INLINE_DECL std::tuple<bool, gsize> options_get_size (const std::string & option) noexcept;

// gboolean jsc_options_get_string (const char* option, char** value);
// gboolean jsc_options_get_string (const char* option, char** value);
GI_INLINE_DECL bool options_get_string (const std::string & option, std::string & value) noexcept;
GI_INLINE_DECL std::tuple<bool, std::string> options_get_string (const std::string & option) noexcept;

// gboolean jsc_options_get_uint (const char* option, guint* value);
// gboolean jsc_options_get_uint (const char* option, guint* value);
GI_INLINE_DECL bool options_get_uint (const std::string & option, guint & value) noexcept;
GI_INLINE_DECL std::tuple<bool, guint> options_get_uint (const std::string & option) noexcept;

// gboolean jsc_options_set_boolean (const char* option, gboolean value);
// gboolean jsc_options_set_boolean (const char* option, gboolean value);
GI_INLINE_DECL bool options_set_boolean (const std::string & option, gboolean value) noexcept;

// gboolean jsc_options_set_double (const char* option, gdouble value);
// gboolean jsc_options_set_double (const char* option, gdouble value);
GI_INLINE_DECL bool options_set_double (const std::string & option, gdouble value) noexcept;

// gboolean jsc_options_set_int (const char* option, gint value);
// gboolean jsc_options_set_int (const char* option, gint value);
GI_INLINE_DECL bool options_set_int (const std::string & option, gint value) noexcept;

// gboolean jsc_options_set_range_string (const char* option, const char* value);
// gboolean jsc_options_set_range_string (const char* option, const char* value);
GI_INLINE_DECL bool options_set_range_string (const std::string & option, const std::string & value) noexcept;

// gboolean jsc_options_set_size (const char* option, gsize value);
// gboolean jsc_options_set_size (const char* option, gsize value);
GI_INLINE_DECL bool options_set_size (const std::string & option, gsize value) noexcept;

// gboolean jsc_options_set_string (const char* option, const char* value);
// gboolean jsc_options_set_string (const char* option, const char* value);
GI_INLINE_DECL bool options_set_string (const std::string & option, const std::string & value) noexcept;

// gboolean jsc_options_set_uint (const char* option, guint value);
// gboolean jsc_options_set_uint (const char* option, guint value);
GI_INLINE_DECL bool options_set_uint (const std::string & option, guint value) noexcept;

} // namespace JavaScriptCore

} // namespace repository

} // namespace gi

#endif
