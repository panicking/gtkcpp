// AUTO-GENERATED

#ifndef _GI_JAVASCRIPTCORE__FUNCTIONS_IMPL_HPP_
#define _GI_JAVASCRIPTCORE__FUNCTIONS_IMPL_HPP_

namespace gi {

namespace repository {

namespace JavaScriptCore {

// guint jsc_get_major_version ();
// guint jsc_get_major_version ();
guint get_major_version () noexcept
{
  typedef guint (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_get_major_version;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// guint jsc_get_micro_version ();
// guint jsc_get_micro_version ();
guint get_micro_version () noexcept
{
  typedef guint (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_get_micro_version;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// guint jsc_get_minor_version ();
// guint jsc_get_minor_version ();
guint get_minor_version () noexcept
{
  typedef guint (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_get_minor_version;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// void jsc_options_foreach (JSCOptionsFunc function, gpointer user_data);
// void jsc_options_foreach (JavaScriptCore::OptionsFunc::cfunction_type function, void* user_data);
void options_foreach (JavaScriptCore::OptionsFunc function) noexcept
{
  typedef void (*call_wrap_t) (JavaScriptCore::OptionsFunc::cfunction_type function, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_options_foreach;
  auto function_wrap_ = function ? unwrap (std::move (function), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(function_wrap_)>::type> function_wrap__sp (function_wrap_);
  call_wrap_v ((JavaScriptCore::OptionsFunc::cfunction_type) (function_wrap_ ? &function_wrap_->wrapper : nullptr), (void*) (function_wrap_));
}

// gboolean jsc_options_get_boolean (const char* option, gboolean* value);
// gboolean jsc_options_get_boolean (const char* option, gboolean* value);
bool options_get_boolean (const std::string & option, bool & value) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* option, gboolean* value);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_options_get_boolean;
  gboolean value_o {};
  auto option_to_c = gi::unwrap (option, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (option_to_c), (gboolean*) (&value_o));
  value = value_o;
  return _temp_ret;
}
std::tuple<bool, bool> options_get_boolean (const std::string & option) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* option, gboolean* value);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_options_get_boolean;
  gboolean value_o {};
  auto option_to_c = gi::unwrap (option, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (option_to_c), (gboolean*) (&value_o));
  return std::make_tuple (_temp_ret, value_o);
}

// gboolean jsc_options_get_double (const char* option, gdouble* value);
// gboolean jsc_options_get_double (const char* option, gdouble* value);
bool options_get_double (const std::string & option, gdouble & value) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* option, gdouble* value);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_options_get_double;
  gdouble value_o {};
  auto option_to_c = gi::unwrap (option, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (option_to_c), (gdouble*) (&value_o));
  value = value_o;
  return _temp_ret;
}
std::tuple<bool, gdouble> options_get_double (const std::string & option) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* option, gdouble* value);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_options_get_double;
  gdouble value_o {};
  auto option_to_c = gi::unwrap (option, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (option_to_c), (gdouble*) (&value_o));
  return std::make_tuple (_temp_ret, value_o);
}

// gboolean jsc_options_get_int (const char* option, gint* value);
// gboolean jsc_options_get_int (const char* option, gint* value);
bool options_get_int (const std::string & option, gint & value) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* option, gint* value);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_options_get_int;
  gint value_o {};
  auto option_to_c = gi::unwrap (option, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (option_to_c), (gint*) (&value_o));
  value = value_o;
  return _temp_ret;
}
std::tuple<bool, gint> options_get_int (const std::string & option) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* option, gint* value);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_options_get_int;
  gint value_o {};
  auto option_to_c = gi::unwrap (option, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (option_to_c), (gint*) (&value_o));
  return std::make_tuple (_temp_ret, value_o);
}

// GOptionGroup* jsc_options_get_option_group ();
// ::GOptionGroup* jsc_options_get_option_group ();
GLib::OptionGroup options_get_option_group () noexcept
{
  typedef ::GOptionGroup* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_options_get_option_group;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean jsc_options_get_range_string (const char* option, char** value);
// gboolean jsc_options_get_range_string (const char* option, char** value);
bool options_get_range_string (const std::string & option, std::string & value) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* option, char** value);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_options_get_range_string;
  char* value_o {};
  auto option_to_c = gi::unwrap (option, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (option_to_c), (char**) (&value_o));
  value = gi::wrap (value_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, std::string> options_get_range_string (const std::string & option) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* option, char** value);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_options_get_range_string;
  char* value_o {};
  auto option_to_c = gi::unwrap (option, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (option_to_c), (char**) (&value_o));
  return std::make_tuple (_temp_ret, gi::wrap (value_o, gi::transfer_full, gi::direction_out));
}

// gboolean jsc_options_get_size (const char* option, gsize* value);
// gboolean jsc_options_get_size (const char* option, gsize* value);
bool options_get_size (const std::string & option, gsize & value) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* option, gsize* value);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_options_get_size;
  gsize value_o {};
  auto option_to_c = gi::unwrap (option, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (option_to_c), (gsize*) (&value_o));
  value = value_o;
  return _temp_ret;
}
std::tuple<bool, gsize> options_get_size (const std::string & option) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* option, gsize* value);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_options_get_size;
  gsize value_o {};
  auto option_to_c = gi::unwrap (option, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (option_to_c), (gsize*) (&value_o));
  return std::make_tuple (_temp_ret, value_o);
}

// gboolean jsc_options_get_string (const char* option, char** value);
// gboolean jsc_options_get_string (const char* option, char** value);
bool options_get_string (const std::string & option, std::string & value) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* option, char** value);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_options_get_string;
  char* value_o {};
  auto option_to_c = gi::unwrap (option, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (option_to_c), (char**) (&value_o));
  value = gi::wrap (value_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, std::string> options_get_string (const std::string & option) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* option, char** value);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_options_get_string;
  char* value_o {};
  auto option_to_c = gi::unwrap (option, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (option_to_c), (char**) (&value_o));
  return std::make_tuple (_temp_ret, gi::wrap (value_o, gi::transfer_full, gi::direction_out));
}

// gboolean jsc_options_get_uint (const char* option, guint* value);
// gboolean jsc_options_get_uint (const char* option, guint* value);
bool options_get_uint (const std::string & option, guint & value) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* option, guint* value);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_options_get_uint;
  guint value_o {};
  auto option_to_c = gi::unwrap (option, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (option_to_c), (guint*) (&value_o));
  value = value_o;
  return _temp_ret;
}
std::tuple<bool, guint> options_get_uint (const std::string & option) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* option, guint* value);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_options_get_uint;
  guint value_o {};
  auto option_to_c = gi::unwrap (option, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (option_to_c), (guint*) (&value_o));
  return std::make_tuple (_temp_ret, value_o);
}

// gboolean jsc_options_set_boolean (const char* option, gboolean value);
// gboolean jsc_options_set_boolean (const char* option, gboolean value);
bool options_set_boolean (const std::string & option, gboolean value) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* option, gboolean value);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_options_set_boolean;
  auto value_to_c = value;
  auto option_to_c = gi::unwrap (option, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (option_to_c), (gboolean) (value_to_c));
  return _temp_ret;
}

// gboolean jsc_options_set_double (const char* option, gdouble value);
// gboolean jsc_options_set_double (const char* option, gdouble value);
bool options_set_double (const std::string & option, gdouble value) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* option, gdouble value);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_options_set_double;
  auto value_to_c = value;
  auto option_to_c = gi::unwrap (option, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (option_to_c), (gdouble) (value_to_c));
  return _temp_ret;
}

// gboolean jsc_options_set_int (const char* option, gint value);
// gboolean jsc_options_set_int (const char* option, gint value);
bool options_set_int (const std::string & option, gint value) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* option, gint value);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_options_set_int;
  auto value_to_c = value;
  auto option_to_c = gi::unwrap (option, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (option_to_c), (gint) (value_to_c));
  return _temp_ret;
}

// gboolean jsc_options_set_range_string (const char* option, const char* value);
// gboolean jsc_options_set_range_string (const char* option, const char* value);
bool options_set_range_string (const std::string & option, const std::string & value) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* option, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_options_set_range_string;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto option_to_c = gi::unwrap (option, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (option_to_c), (const char*) (value_to_c));
  return _temp_ret;
}

// gboolean jsc_options_set_size (const char* option, gsize value);
// gboolean jsc_options_set_size (const char* option, gsize value);
bool options_set_size (const std::string & option, gsize value) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* option, gsize value);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_options_set_size;
  auto value_to_c = value;
  auto option_to_c = gi::unwrap (option, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (option_to_c), (gsize) (value_to_c));
  return _temp_ret;
}

// gboolean jsc_options_set_string (const char* option, const char* value);
// gboolean jsc_options_set_string (const char* option, const char* value);
bool options_set_string (const std::string & option, const std::string & value) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* option, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_options_set_string;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto option_to_c = gi::unwrap (option, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (option_to_c), (const char*) (value_to_c));
  return _temp_ret;
}

// gboolean jsc_options_set_uint (const char* option, guint value);
// gboolean jsc_options_set_uint (const char* option, guint value);
bool options_set_uint (const std::string & option, guint value) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* option, guint value);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_options_set_uint;
  auto value_to_c = value;
  auto option_to_c = gi::unwrap (option, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (option_to_c), (guint) (value_to_c));
  return _temp_ret;
}

} // namespace JavaScriptCore

} // namespace repository

} // namespace gi

#endif
