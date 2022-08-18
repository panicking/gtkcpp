// AUTO-GENERATED

#ifndef _GI_GLIB_KEYFILE_IMPL_HPP_
#define _GI_GLIB_KEYFILE_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// GKeyFile* g_key_file_new ();
// ::GKeyFile* g_key_file_new ();
GLib::KeyFile base::KeyFileBase::new_ () noexcept
{
  typedef ::GKeyFile* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_key_file_free (GKeyFile* key_file);
// void g_key_file_free (::GKeyFile* key_file);
// IGNORE; marked ignore

// gboolean g_key_file_get_boolean (GKeyFile* key_file, const gchar* group_name, const gchar* key, GError ** error);
// gboolean g_key_file_get_boolean (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
bool base::KeyFileBase::get_boolean (const std::string & group_name, const std::string & key)
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_get_boolean;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::KeyFileBase::get_boolean (const std::string & group_name, const std::string & key, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_get_boolean;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean* g_key_file_get_boolean_list (GKeyFile* key_file, const gchar* group_name, const gchar* key, gsize* length, GError ** error);
// gboolean* g_key_file_get_boolean_list (::GKeyFile* key_file, const char* group_name, const char* key, gsize* length, GError ** error);
std::vector<gboolean> base::KeyFileBase::get_boolean_list (const std::string & group_name, const std::string & key)
{
  typedef gboolean* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_get_boolean_list;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  gsize length;
  std::vector<gboolean> _temp_ret;
  GError *error = NULL;
  auto _ret_o = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (gsize*) (&length), &error);
  _temp_ret.resize(length);
  detail::wrap_array (_ret_o, gi::transfer_container, length, _temp_ret.data());
  g_free (_ret_o);
  gi::check_error (error);
  return _temp_ret;
}
std::vector<gboolean> base::KeyFileBase::get_boolean_list (const std::string & group_name, const std::string & key, GLib::Error * _error) noexcept
{
  typedef gboolean* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_get_boolean_list;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  gsize length;
  std::vector<gboolean> _temp_ret;
  GError* _error_o {};
  auto _ret_o = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (gsize*) (&length), _error ? &_error_o : nullptr);
  _temp_ret.resize(length);
  detail::wrap_array (_ret_o, gi::transfer_container, length, _temp_ret.data());
  g_free (_ret_o);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gchar* g_key_file_get_comment (GKeyFile* key_file, const gchar* group_name, const gchar* key, GError ** error);
// char* g_key_file_get_comment (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
std::string base::KeyFileBase::get_comment (const std::string & group_name, const std::string & key)
{
  typedef char* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_get_comment;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string base::KeyFileBase::get_comment ()
{
  typedef char* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_get_comment;
  auto key_to_c = nullptr;
  auto group_name_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string base::KeyFileBase::get_comment (const std::string & group_name, const std::string & key, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_get_comment;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string base::KeyFileBase::get_comment (GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_get_comment;
  auto key_to_c = nullptr;
  auto group_name_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gdouble g_key_file_get_double (GKeyFile* key_file, const gchar* group_name, const gchar* key, GError ** error);
// gdouble g_key_file_get_double (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
gdouble base::KeyFileBase::get_double (const std::string & group_name, const std::string & key)
{
  typedef gdouble (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_get_double;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gdouble base::KeyFileBase::get_double (const std::string & group_name, const std::string & key, GLib::Error * _error) noexcept
{
  typedef gdouble (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_get_double;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gdouble* g_key_file_get_double_list (GKeyFile* key_file, const gchar* group_name, const gchar* key, gsize* length, GError ** error);
// gdouble* g_key_file_get_double_list (::GKeyFile* key_file, const char* group_name, const char* key, gsize* length, GError ** error);
std::vector<gdouble> base::KeyFileBase::get_double_list (const std::string & group_name, const std::string & key)
{
  typedef gdouble* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_get_double_list;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  gsize length;
  std::vector<gdouble> _temp_ret;
  GError *error = NULL;
  auto _ret_o = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (gsize*) (&length), &error);
  _temp_ret.resize(length);
  detail::wrap_array (_ret_o, gi::transfer_container, length, _temp_ret.data());
  g_free (_ret_o);
  gi::check_error (error);
  return _temp_ret;
}
std::vector<gdouble> base::KeyFileBase::get_double_list (const std::string & group_name, const std::string & key, GLib::Error * _error) noexcept
{
  typedef gdouble* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_get_double_list;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  gsize length;
  std::vector<gdouble> _temp_ret;
  GError* _error_o {};
  auto _ret_o = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (gsize*) (&length), _error ? &_error_o : nullptr);
  _temp_ret.resize(length);
  detail::wrap_array (_ret_o, gi::transfer_container, length, _temp_ret.data());
  g_free (_ret_o);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gchar** g_key_file_get_groups (GKeyFile* key_file, gsize* length);
// char** g_key_file_get_groups (::GKeyFile* key_file, gsize* length);
std::vector<std::string> base::KeyFileBase::get_groups (gsize * length) noexcept
{
  typedef char** (*call_wrap_t) (::GKeyFile* key_file, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_get_groups;
  gsize length_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (gsize*) (length ? &length_o : nullptr));
  if (length) *length = length_o;
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}
std::tuple<std::vector<std::string>, gsize> base::KeyFileBase::get_groups () noexcept
{
  typedef char** (*call_wrap_t) (::GKeyFile* key_file, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_get_groups;
  gsize length_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (gsize*) (&length_o));
  return std::make_tuple (gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full), length_o);
}

// gint64 g_key_file_get_int64 (GKeyFile* key_file, const gchar* group_name, const gchar* key, GError ** error);
// gint64 g_key_file_get_int64 (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
gint64 base::KeyFileBase::get_int64 (const std::string & group_name, const std::string & key)
{
  typedef gint64 (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_get_int64;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gint64 base::KeyFileBase::get_int64 (const std::string & group_name, const std::string & key, GLib::Error * _error) noexcept
{
  typedef gint64 (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_get_int64;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gint g_key_file_get_integer (GKeyFile* key_file, const gchar* group_name, const gchar* key, GError ** error);
// gint g_key_file_get_integer (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
gint base::KeyFileBase::get_integer (const std::string & group_name, const std::string & key)
{
  typedef gint (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_get_integer;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gint base::KeyFileBase::get_integer (const std::string & group_name, const std::string & key, GLib::Error * _error) noexcept
{
  typedef gint (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_get_integer;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gint* g_key_file_get_integer_list (GKeyFile* key_file, const gchar* group_name, const gchar* key, gsize* length, GError ** error);
// gint* g_key_file_get_integer_list (::GKeyFile* key_file, const char* group_name, const char* key, gsize* length, GError ** error);
std::vector<gint> base::KeyFileBase::get_integer_list (const std::string & group_name, const std::string & key)
{
  typedef gint* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_get_integer_list;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  gsize length;
  std::vector<gint> _temp_ret;
  GError *error = NULL;
  auto _ret_o = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (gsize*) (&length), &error);
  _temp_ret.resize(length);
  detail::wrap_array (_ret_o, gi::transfer_container, length, _temp_ret.data());
  g_free (_ret_o);
  gi::check_error (error);
  return _temp_ret;
}
std::vector<gint> base::KeyFileBase::get_integer_list (const std::string & group_name, const std::string & key, GLib::Error * _error) noexcept
{
  typedef gint* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_get_integer_list;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  gsize length;
  std::vector<gint> _temp_ret;
  GError* _error_o {};
  auto _ret_o = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (gsize*) (&length), _error ? &_error_o : nullptr);
  _temp_ret.resize(length);
  detail::wrap_array (_ret_o, gi::transfer_container, length, _temp_ret.data());
  g_free (_ret_o);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gchar** g_key_file_get_keys (GKeyFile* key_file, const gchar* group_name, gsize* length, GError ** error);
// char** g_key_file_get_keys (::GKeyFile* key_file, const char* group_name, gsize* length, GError ** error);
std::vector<std::string> base::KeyFileBase::get_keys (const std::string & group_name, gsize * length)
{
  typedef char** (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_get_keys;
  gsize length_o {};
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (gsize*) (length ? &length_o : nullptr), &error);
  if (length) *length = length_o;
  gi::check_error (error);
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}
std::vector<std::string> base::KeyFileBase::get_keys (const std::string & group_name, gsize * length, GLib::Error * _error) noexcept
{
  typedef char** (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_get_keys;
  gsize length_o {};
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (gsize*) (length ? &length_o : nullptr), _error ? &_error_o : nullptr);
  if (length) *length = length_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}
std::tuple<std::vector<std::string>, gsize> base::KeyFileBase::get_keys (const std::string & group_name)
{
  typedef char** (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_get_keys;
  gsize length_o {};
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (gsize*) (&length_o), &error);
  gi::check_error (error);
  return std::make_tuple (gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full), length_o);
}
std::tuple<std::vector<std::string>, gsize> base::KeyFileBase::get_keys (const std::string & group_name, GLib::Error * _error) noexcept
{
  typedef char** (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_get_keys;
  gsize length_o {};
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (gsize*) (&length_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full), length_o);
}

// gchar* g_key_file_get_locale_for_key (GKeyFile* key_file, const gchar* group_name, const gchar* key, const gchar* locale);
// char* g_key_file_get_locale_for_key (::GKeyFile* key_file, const char* group_name, const char* key, const char* locale);
std::string base::KeyFileBase::get_locale_for_key (const std::string & group_name, const std::string & key, const std::string & locale) noexcept
{
  typedef char* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, const char* locale);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_get_locale_for_key;
  auto locale_to_c = gi::unwrap (locale, gi::transfer_none, gi::direction_in);
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (const char*) (locale_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string base::KeyFileBase::get_locale_for_key (const std::string & group_name, const std::string & key) noexcept
{
  typedef char* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, const char* locale);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_get_locale_for_key;
  auto locale_to_c = nullptr;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (const char*) (locale_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_key_file_get_locale_string (GKeyFile* key_file, const gchar* group_name, const gchar* key, const gchar* locale, GError ** error);
// char* g_key_file_get_locale_string (::GKeyFile* key_file, const char* group_name, const char* key, const char* locale, GError ** error);
std::string base::KeyFileBase::get_locale_string (const std::string & group_name, const std::string & key, const std::string & locale)
{
  typedef char* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, const char* locale, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_get_locale_string;
  auto locale_to_c = gi::unwrap (locale, gi::transfer_none, gi::direction_in);
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (const char*) (locale_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string base::KeyFileBase::get_locale_string (const std::string & group_name, const std::string & key)
{
  typedef char* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, const char* locale, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_get_locale_string;
  auto locale_to_c = nullptr;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (const char*) (locale_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string base::KeyFileBase::get_locale_string (const std::string & group_name, const std::string & key, const std::string & locale, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, const char* locale, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_get_locale_string;
  auto locale_to_c = gi::unwrap (locale, gi::transfer_none, gi::direction_in);
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (const char*) (locale_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string base::KeyFileBase::get_locale_string (const std::string & group_name, const std::string & key, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, const char* locale, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_get_locale_string;
  auto locale_to_c = nullptr;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (const char*) (locale_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar** g_key_file_get_locale_string_list (GKeyFile* key_file, const gchar* group_name, const gchar* key, const gchar* locale, gsize* length, GError ** error);
// char** g_key_file_get_locale_string_list (::GKeyFile* key_file, const char* group_name, const char* key, const char* locale, gsize* length, GError ** error);
std::vector<std::string> base::KeyFileBase::get_locale_string_list (const std::string & group_name, const std::string & key, const std::string & locale, gsize * length)
{
  typedef char** (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, const char* locale, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_get_locale_string_list;
  gsize length_o {};
  auto locale_to_c = gi::unwrap (locale, gi::transfer_none, gi::direction_in);
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (const char*) (locale_to_c), (gsize*) (length ? &length_o : nullptr), &error);
  if (length) *length = length_o;
  gi::check_error (error);
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}
std::vector<std::string> base::KeyFileBase::get_locale_string_list (const std::string & group_name, const std::string & key, gsize * length)
{
  typedef char** (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, const char* locale, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_get_locale_string_list;
  gsize length_o {};
  auto locale_to_c = nullptr;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (const char*) (locale_to_c), (gsize*) (length ? &length_o : nullptr), &error);
  if (length) *length = length_o;
  gi::check_error (error);
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}
std::vector<std::string> base::KeyFileBase::get_locale_string_list (const std::string & group_name, const std::string & key, const std::string & locale, gsize * length, GLib::Error * _error) noexcept
{
  typedef char** (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, const char* locale, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_get_locale_string_list;
  gsize length_o {};
  auto locale_to_c = gi::unwrap (locale, gi::transfer_none, gi::direction_in);
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (const char*) (locale_to_c), (gsize*) (length ? &length_o : nullptr), _error ? &_error_o : nullptr);
  if (length) *length = length_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}
std::vector<std::string> base::KeyFileBase::get_locale_string_list (const std::string & group_name, const std::string & key, gsize * length, GLib::Error * _error) noexcept
{
  typedef char** (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, const char* locale, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_get_locale_string_list;
  gsize length_o {};
  auto locale_to_c = nullptr;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (const char*) (locale_to_c), (gsize*) (length ? &length_o : nullptr), _error ? &_error_o : nullptr);
  if (length) *length = length_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}
std::tuple<std::vector<std::string>, gsize> base::KeyFileBase::get_locale_string_list (const std::string & group_name, const std::string & key, const std::string & locale)
{
  typedef char** (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, const char* locale, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_get_locale_string_list;
  gsize length_o {};
  auto locale_to_c = gi::unwrap (locale, gi::transfer_none, gi::direction_in);
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (const char*) (locale_to_c), (gsize*) (&length_o), &error);
  gi::check_error (error);
  return std::make_tuple (gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full), length_o);
}
std::tuple<std::vector<std::string>, gsize> base::KeyFileBase::get_locale_string_list (const std::string & group_name, const std::string & key)
{
  typedef char** (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, const char* locale, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_get_locale_string_list;
  gsize length_o {};
  auto locale_to_c = nullptr;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (const char*) (locale_to_c), (gsize*) (&length_o), &error);
  gi::check_error (error);
  return std::make_tuple (gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full), length_o);
}
std::tuple<std::vector<std::string>, gsize> base::KeyFileBase::get_locale_string_list (const std::string & group_name, const std::string & key, const std::string & locale, GLib::Error * _error) noexcept
{
  typedef char** (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, const char* locale, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_get_locale_string_list;
  gsize length_o {};
  auto locale_to_c = gi::unwrap (locale, gi::transfer_none, gi::direction_in);
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (const char*) (locale_to_c), (gsize*) (&length_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full), length_o);
}
std::tuple<std::vector<std::string>, gsize> base::KeyFileBase::get_locale_string_list (const std::string & group_name, const std::string & key, GLib::Error * _error) noexcept
{
  typedef char** (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, const char* locale, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_get_locale_string_list;
  gsize length_o {};
  auto locale_to_c = nullptr;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (const char*) (locale_to_c), (gsize*) (&length_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full), length_o);
}

// gchar* g_key_file_get_start_group (GKeyFile* key_file);
// char* g_key_file_get_start_group (::GKeyFile* key_file);
std::string base::KeyFileBase::get_start_group () noexcept
{
  typedef char* (*call_wrap_t) (::GKeyFile* key_file);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_get_start_group;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_key_file_get_string (GKeyFile* key_file, const gchar* group_name, const gchar* key, GError ** error);
// char* g_key_file_get_string (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
std::string base::KeyFileBase::get_string (const std::string & group_name, const std::string & key)
{
  typedef char* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_get_string;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string base::KeyFileBase::get_string (const std::string & group_name, const std::string & key, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_get_string;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar** g_key_file_get_string_list (GKeyFile* key_file, const gchar* group_name, const gchar* key, gsize* length, GError ** error);
// char** g_key_file_get_string_list (::GKeyFile* key_file, const char* group_name, const char* key, gsize* length, GError ** error);
std::vector<std::string> base::KeyFileBase::get_string_list (const std::string & group_name, const std::string & key, gsize * length)
{
  typedef char** (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_get_string_list;
  gsize length_o {};
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (gsize*) (length ? &length_o : nullptr), &error);
  if (length) *length = length_o;
  gi::check_error (error);
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}
std::vector<std::string> base::KeyFileBase::get_string_list (const std::string & group_name, const std::string & key, gsize * length, GLib::Error * _error) noexcept
{
  typedef char** (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_get_string_list;
  gsize length_o {};
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (gsize*) (length ? &length_o : nullptr), _error ? &_error_o : nullptr);
  if (length) *length = length_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}
std::tuple<std::vector<std::string>, gsize> base::KeyFileBase::get_string_list (const std::string & group_name, const std::string & key)
{
  typedef char** (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_get_string_list;
  gsize length_o {};
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (gsize*) (&length_o), &error);
  gi::check_error (error);
  return std::make_tuple (gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full), length_o);
}
std::tuple<std::vector<std::string>, gsize> base::KeyFileBase::get_string_list (const std::string & group_name, const std::string & key, GLib::Error * _error) noexcept
{
  typedef char** (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_get_string_list;
  gsize length_o {};
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (gsize*) (&length_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full), length_o);
}

// guint64 g_key_file_get_uint64 (GKeyFile* key_file, const gchar* group_name, const gchar* key, GError ** error);
// guint64 g_key_file_get_uint64 (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
guint64 base::KeyFileBase::get_uint64 (const std::string & group_name, const std::string & key)
{
  typedef guint64 (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_get_uint64;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
guint64 base::KeyFileBase::get_uint64 (const std::string & group_name, const std::string & key, GLib::Error * _error) noexcept
{
  typedef guint64 (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_get_uint64;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gchar* g_key_file_get_value (GKeyFile* key_file, const gchar* group_name, const gchar* key, GError ** error);
// char* g_key_file_get_value (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
std::string base::KeyFileBase::get_value (const std::string & group_name, const std::string & key)
{
  typedef char* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_get_value;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string base::KeyFileBase::get_value (const std::string & group_name, const std::string & key, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_get_value;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean g_key_file_has_group (GKeyFile* key_file, const gchar* group_name);
// gboolean g_key_file_has_group (::GKeyFile* key_file, const char* group_name);
bool base::KeyFileBase::has_group (const std::string & group_name) noexcept
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* group_name);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_has_group;
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c));
  return _temp_ret;
}

// gboolean g_key_file_has_key (GKeyFile* key_file, const gchar* group_name, const gchar* key, GError ** error);
// gboolean g_key_file_has_key (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
bool base::KeyFileBase::has_key (const std::string & group_name, const std::string & key)
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_has_key;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::KeyFileBase::has_key (const std::string & group_name, const std::string & key, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_has_key;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_key_file_load_from_bytes (GKeyFile* key_file, GBytes* bytes, GKeyFileFlags flags, GError ** error);
// gboolean g_key_file_load_from_bytes (::GKeyFile* key_file, ::GBytes* bytes, ::GKeyFileFlags flags, GError ** error);
bool base::KeyFileBase::load_from_bytes (GLib::Bytes bytes, GLib::KeyFileFlags flags)
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, ::GBytes* bytes, ::GKeyFileFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_load_from_bytes;
  auto flags_to_c = gi::unwrap (flags);
  auto bytes_to_c = gi::unwrap (bytes, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (::GBytes*) (bytes_to_c), (::GKeyFileFlags) (flags_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::KeyFileBase::load_from_bytes (GLib::Bytes bytes, GLib::KeyFileFlags flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, ::GBytes* bytes, ::GKeyFileFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_load_from_bytes;
  auto flags_to_c = gi::unwrap (flags);
  auto bytes_to_c = gi::unwrap (bytes, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (::GBytes*) (bytes_to_c), (::GKeyFileFlags) (flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_key_file_load_from_data (GKeyFile* key_file, const gchar* data, gsize length, GKeyFileFlags flags, GError ** error);
// gboolean g_key_file_load_from_data (::GKeyFile* key_file, const char* data, gsize length, ::GKeyFileFlags flags, GError ** error);
bool base::KeyFileBase::load_from_data (const std::string & data, gsize length, GLib::KeyFileFlags flags)
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* data, gsize length, ::GKeyFileFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_load_from_data;
  auto flags_to_c = gi::unwrap (flags);
  auto length_to_c = length;
  auto data_to_c = gi::unwrap (data, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (data_to_c), (gsize) (length_to_c), (::GKeyFileFlags) (flags_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::KeyFileBase::load_from_data (const std::string & data, gsize length, GLib::KeyFileFlags flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* data, gsize length, ::GKeyFileFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_load_from_data;
  auto flags_to_c = gi::unwrap (flags);
  auto length_to_c = length;
  auto data_to_c = gi::unwrap (data, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (data_to_c), (gsize) (length_to_c), (::GKeyFileFlags) (flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_key_file_load_from_data_dirs (GKeyFile* key_file, const gchar* file, gchar** full_path, GKeyFileFlags flags, GError ** error);
// gboolean g_key_file_load_from_data_dirs (::GKeyFile* key_file, const char* file, char** full_path, ::GKeyFileFlags flags, GError ** error);
bool base::KeyFileBase::load_from_data_dirs (const std::string & file, std::string * full_path, GLib::KeyFileFlags flags)
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* file, char** full_path, ::GKeyFileFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_load_from_data_dirs;
  auto flags_to_c = gi::unwrap (flags);
  char* full_path_o {};
  auto file_to_c = gi::unwrap (file, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (file_to_c), (char**) (full_path ? &full_path_o : nullptr), (::GKeyFileFlags) (flags_to_c), &error);
  if (full_path) *full_path = gi::wrap (full_path_o, gi::transfer_full, gi::direction_out);
  gi::check_error (error);
  return _temp_ret;
}
bool base::KeyFileBase::load_from_data_dirs (const std::string & file, std::string * full_path, GLib::KeyFileFlags flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* file, char** full_path, ::GKeyFileFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_load_from_data_dirs;
  auto flags_to_c = gi::unwrap (flags);
  char* full_path_o {};
  auto file_to_c = gi::unwrap (file, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (file_to_c), (char**) (full_path ? &full_path_o : nullptr), (::GKeyFileFlags) (flags_to_c), _error ? &_error_o : nullptr);
  if (full_path) *full_path = gi::wrap (full_path_o, gi::transfer_full, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, std::string> base::KeyFileBase::load_from_data_dirs (const std::string & file, GLib::KeyFileFlags flags)
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* file, char** full_path, ::GKeyFileFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_load_from_data_dirs;
  auto flags_to_c = gi::unwrap (flags);
  char* full_path_o {};
  auto file_to_c = gi::unwrap (file, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (file_to_c), (char**) (&full_path_o), (::GKeyFileFlags) (flags_to_c), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, gi::wrap (full_path_o, gi::transfer_full, gi::direction_out));
}
std::tuple<bool, std::string> base::KeyFileBase::load_from_data_dirs (const std::string & file, GLib::KeyFileFlags flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* file, char** full_path, ::GKeyFileFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_load_from_data_dirs;
  auto flags_to_c = gi::unwrap (flags);
  char* full_path_o {};
  auto file_to_c = gi::unwrap (file, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (file_to_c), (char**) (&full_path_o), (::GKeyFileFlags) (flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, gi::wrap (full_path_o, gi::transfer_full, gi::direction_out));
}

// gboolean g_key_file_load_from_dirs (GKeyFile* key_file, const gchar* file, const gchar** search_dirs, gchar** full_path, GKeyFileFlags flags, GError ** error);
// gboolean g_key_file_load_from_dirs (::GKeyFile* key_file, const char* file, const char** search_dirs, char** full_path, ::GKeyFileFlags flags, GError ** error);
bool base::KeyFileBase::load_from_dirs (const std::string & file, const std::vector<std::string> & search_dirs, std::string * full_path, GLib::KeyFileFlags flags)
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* file, const char** search_dirs, char** full_path, ::GKeyFileFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_load_from_dirs;
  auto flags_to_c = gi::unwrap (flags);
  char* full_path_o {};
  auto search_dirs_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (search_dirs);
  auto search_dirs_w = unwrap (search_dirs_i, gi::transfer_none, direction_in);
  auto search_dirs_to_c = search_dirs_w.gobj_(false);
  auto file_to_c = gi::unwrap (file, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (file_to_c), (const char**) (search_dirs_to_c), (char**) (full_path ? &full_path_o : nullptr), (::GKeyFileFlags) (flags_to_c), &error);
  if (full_path) *full_path = gi::wrap (full_path_o, gi::transfer_full, gi::direction_out);
  gi::check_error (error);
  return _temp_ret;
}
bool base::KeyFileBase::load_from_dirs (const std::string & file, const std::vector<std::string> & search_dirs, std::string * full_path, GLib::KeyFileFlags flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* file, const char** search_dirs, char** full_path, ::GKeyFileFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_load_from_dirs;
  auto flags_to_c = gi::unwrap (flags);
  char* full_path_o {};
  auto search_dirs_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (search_dirs);
  auto search_dirs_w = unwrap (search_dirs_i, gi::transfer_none, direction_in);
  auto search_dirs_to_c = search_dirs_w.gobj_(false);
  auto file_to_c = gi::unwrap (file, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (file_to_c), (const char**) (search_dirs_to_c), (char**) (full_path ? &full_path_o : nullptr), (::GKeyFileFlags) (flags_to_c), _error ? &_error_o : nullptr);
  if (full_path) *full_path = gi::wrap (full_path_o, gi::transfer_full, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, std::string> base::KeyFileBase::load_from_dirs (const std::string & file, const std::vector<std::string> & search_dirs, GLib::KeyFileFlags flags)
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* file, const char** search_dirs, char** full_path, ::GKeyFileFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_load_from_dirs;
  auto flags_to_c = gi::unwrap (flags);
  char* full_path_o {};
  auto search_dirs_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (search_dirs);
  auto search_dirs_w = unwrap (search_dirs_i, gi::transfer_none, direction_in);
  auto search_dirs_to_c = search_dirs_w.gobj_(false);
  auto file_to_c = gi::unwrap (file, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (file_to_c), (const char**) (search_dirs_to_c), (char**) (&full_path_o), (::GKeyFileFlags) (flags_to_c), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, gi::wrap (full_path_o, gi::transfer_full, gi::direction_out));
}
std::tuple<bool, std::string> base::KeyFileBase::load_from_dirs (const std::string & file, const std::vector<std::string> & search_dirs, GLib::KeyFileFlags flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* file, const char** search_dirs, char** full_path, ::GKeyFileFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_load_from_dirs;
  auto flags_to_c = gi::unwrap (flags);
  char* full_path_o {};
  auto search_dirs_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (search_dirs);
  auto search_dirs_w = unwrap (search_dirs_i, gi::transfer_none, direction_in);
  auto search_dirs_to_c = search_dirs_w.gobj_(false);
  auto file_to_c = gi::unwrap (file, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (file_to_c), (const char**) (search_dirs_to_c), (char**) (&full_path_o), (::GKeyFileFlags) (flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, gi::wrap (full_path_o, gi::transfer_full, gi::direction_out));
}

// gboolean g_key_file_load_from_file (GKeyFile* key_file, const gchar* file, GKeyFileFlags flags, GError ** error);
// gboolean g_key_file_load_from_file (::GKeyFile* key_file, const char* file, ::GKeyFileFlags flags, GError ** error);
bool base::KeyFileBase::load_from_file (const std::string & file, GLib::KeyFileFlags flags)
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* file, ::GKeyFileFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_load_from_file;
  auto flags_to_c = gi::unwrap (flags);
  auto file_to_c = gi::unwrap (file, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (file_to_c), (::GKeyFileFlags) (flags_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::KeyFileBase::load_from_file (const std::string & file, GLib::KeyFileFlags flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* file, ::GKeyFileFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_load_from_file;
  auto flags_to_c = gi::unwrap (flags);
  auto file_to_c = gi::unwrap (file, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (file_to_c), (::GKeyFileFlags) (flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// GKeyFile* g_key_file_ref (GKeyFile* key_file);
// ::GKeyFile* g_key_file_ref (::GKeyFile* key_file);
// IGNORE; marked ignore

// gboolean g_key_file_remove_comment (GKeyFile* key_file, const gchar* group_name, const gchar* key, GError ** error);
// gboolean g_key_file_remove_comment (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
bool base::KeyFileBase::remove_comment (const std::string & group_name, const std::string & key)
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_remove_comment;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::KeyFileBase::remove_comment ()
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_remove_comment;
  auto key_to_c = nullptr;
  auto group_name_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::KeyFileBase::remove_comment (const std::string & group_name, const std::string & key, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_remove_comment;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::KeyFileBase::remove_comment (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_remove_comment;
  auto key_to_c = nullptr;
  auto group_name_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_key_file_remove_group (GKeyFile* key_file, const gchar* group_name, GError ** error);
// gboolean g_key_file_remove_group (::GKeyFile* key_file, const char* group_name, GError ** error);
bool base::KeyFileBase::remove_group (const std::string & group_name)
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_remove_group;
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::KeyFileBase::remove_group (const std::string & group_name, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_remove_group;
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_key_file_remove_key (GKeyFile* key_file, const gchar* group_name, const gchar* key, GError ** error);
// gboolean g_key_file_remove_key (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
bool base::KeyFileBase::remove_key (const std::string & group_name, const std::string & key)
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_remove_key;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::KeyFileBase::remove_key (const std::string & group_name, const std::string & key, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_remove_key;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_key_file_save_to_file (GKeyFile* key_file, const gchar* filename, GError ** error);
// gboolean g_key_file_save_to_file (::GKeyFile* key_file, const char* filename, GError ** error);
bool base::KeyFileBase::save_to_file (const std::string & filename)
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* filename, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_save_to_file;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (filename_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::KeyFileBase::save_to_file (const std::string & filename, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* filename, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_save_to_file;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (filename_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_key_file_set_boolean (GKeyFile* key_file, const gchar* group_name, const gchar* key, gboolean value);
// void g_key_file_set_boolean (::GKeyFile* key_file, const char* group_name, const char* key, gboolean value);
void base::KeyFileBase::set_boolean (const std::string & group_name, const std::string & key, gboolean value) noexcept
{
  typedef void (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, gboolean value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_set_boolean;
  auto value_to_c = value;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (gboolean) (value_to_c));
}

// void g_key_file_set_boolean_list (GKeyFile* key_file, const gchar* group_name, const gchar* key, gboolean* list, gsize length);
// void g_key_file_set_boolean_list (::GKeyFile* key_file, const char* group_name, const char* key, gboolean* list, gsize length);
void base::KeyFileBase::set_boolean_list (const std::string & group_name, const std::string & key, gboolean * list, gsize length) noexcept
{
  typedef void (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, gboolean* list, gsize length);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_set_boolean_list;
  auto list_i = detail::make_list_unwrap_range (list, length, false);
  auto list_w = unwrap (list_i, gi::transfer_none, direction_in);
  auto list_to_c = list_w.gobj_(false);
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (gboolean*) (list_to_c), (gsize) (list_w.size()));
}

// gboolean g_key_file_set_comment (GKeyFile* key_file, const gchar* group_name, const gchar* key, const gchar* comment, GError ** error);
// gboolean g_key_file_set_comment (::GKeyFile* key_file, const char* group_name, const char* key, const char* comment, GError ** error);
bool base::KeyFileBase::set_comment (const std::string & group_name, const std::string & key, const std::string & comment)
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, const char* comment, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_set_comment;
  auto comment_to_c = gi::unwrap (comment, gi::transfer_none, gi::direction_in);
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (const char*) (comment_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::KeyFileBase::set_comment (const std::string & comment)
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, const char* comment, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_set_comment;
  auto comment_to_c = gi::unwrap (comment, gi::transfer_none, gi::direction_in);
  auto key_to_c = nullptr;
  auto group_name_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (const char*) (comment_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::KeyFileBase::set_comment (const std::string & group_name, const std::string & key, const std::string & comment, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, const char* comment, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_set_comment;
  auto comment_to_c = gi::unwrap (comment, gi::transfer_none, gi::direction_in);
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (const char*) (comment_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::KeyFileBase::set_comment (const std::string & comment, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, const char* comment, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_set_comment;
  auto comment_to_c = gi::unwrap (comment, gi::transfer_none, gi::direction_in);
  auto key_to_c = nullptr;
  auto group_name_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (const char*) (comment_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_key_file_set_double (GKeyFile* key_file, const gchar* group_name, const gchar* key, gdouble value);
// void g_key_file_set_double (::GKeyFile* key_file, const char* group_name, const char* key, gdouble value);
void base::KeyFileBase::set_double (const std::string & group_name, const std::string & key, gdouble value) noexcept
{
  typedef void (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, gdouble value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_set_double;
  auto value_to_c = value;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (gdouble) (value_to_c));
}

// void g_key_file_set_double_list (GKeyFile* key_file, const gchar* group_name, const gchar* key, gdouble* list, gsize length);
// void g_key_file_set_double_list (::GKeyFile* key_file, const char* group_name, const char* key, gdouble* list, gsize length);
void base::KeyFileBase::set_double_list (const std::string & group_name, const std::string & key, gdouble * list, gsize length) noexcept
{
  typedef void (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, gdouble* list, gsize length);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_set_double_list;
  auto list_i = detail::make_list_unwrap_range (list, length, false);
  auto list_w = unwrap (list_i, gi::transfer_none, direction_in);
  auto list_to_c = list_w.gobj_(false);
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (gdouble*) (list_to_c), (gsize) (list_w.size()));
}

// void g_key_file_set_int64 (GKeyFile* key_file, const gchar* group_name, const gchar* key, gint64 value);
// void g_key_file_set_int64 (::GKeyFile* key_file, const char* group_name, const char* key, gint64 value);
void base::KeyFileBase::set_int64 (const std::string & group_name, const std::string & key, gint64 value) noexcept
{
  typedef void (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, gint64 value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_set_int64;
  auto value_to_c = value;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (gint64) (value_to_c));
}

// void g_key_file_set_integer (GKeyFile* key_file, const gchar* group_name, const gchar* key, gint value);
// void g_key_file_set_integer (::GKeyFile* key_file, const char* group_name, const char* key, gint value);
void base::KeyFileBase::set_integer (const std::string & group_name, const std::string & key, gint value) noexcept
{
  typedef void (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, gint value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_set_integer;
  auto value_to_c = value;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (gint) (value_to_c));
}

// void g_key_file_set_integer_list (GKeyFile* key_file, const gchar* group_name, const gchar* key, gint* list, gsize length);
// void g_key_file_set_integer_list (::GKeyFile* key_file, const char* group_name, const char* key, gint* list, gsize length);
void base::KeyFileBase::set_integer_list (const std::string & group_name, const std::string & key, gint * list, gsize length) noexcept
{
  typedef void (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, gint* list, gsize length);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_set_integer_list;
  auto list_i = detail::make_list_unwrap_range (list, length, false);
  auto list_w = unwrap (list_i, gi::transfer_none, direction_in);
  auto list_to_c = list_w.gobj_(false);
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (gint*) (list_to_c), (gsize) (list_w.size()));
}

// void g_key_file_set_list_separator (GKeyFile* key_file, gchar separator);
// void g_key_file_set_list_separator (::GKeyFile* key_file, gchar separator);
void base::KeyFileBase::set_list_separator (gchar separator) noexcept
{
  typedef void (*call_wrap_t) (::GKeyFile* key_file, gchar separator);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_set_list_separator;
  auto separator_to_c = separator;
  call_wrap_v ((::GKeyFile*) (gobj_()), (gchar) (separator_to_c));
}

// void g_key_file_set_locale_string (GKeyFile* key_file, const gchar* group_name, const gchar* key, const gchar* locale, const gchar* string);
// void g_key_file_set_locale_string (::GKeyFile* key_file, const char* group_name, const char* key, const char* locale, const char* string);
void base::KeyFileBase::set_locale_string (const std::string & group_name, const std::string & key, const std::string & locale, const std::string & string) noexcept
{
  typedef void (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, const char* locale, const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_set_locale_string;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto locale_to_c = gi::unwrap (locale, gi::transfer_none, gi::direction_in);
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (const char*) (locale_to_c), (const char*) (string_to_c));
}

// void g_key_file_set_locale_string_list (GKeyFile* key_file, const gchar* group_name, const gchar* key, const gchar* locale, const gchar* const* list, gsize length);
// void g_key_file_set_locale_string_list (::GKeyFile* key_file, const char* group_name, const char* key, const char* locale, const char** list, gsize length);
void base::KeyFileBase::set_locale_string_list (const std::string & group_name, const std::string & key, const std::string & locale, const std::vector<std::string> & list, gsize length) noexcept
{
  typedef void (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, const char* locale, const char** list, gsize length);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_set_locale_string_list;
  auto length_to_c = length;
  auto list_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (list);
  auto list_w = unwrap (list_i, gi::transfer_none, direction_in);
  auto list_to_c = list_w.gobj_(false);
  auto locale_to_c = gi::unwrap (locale, gi::transfer_none, gi::direction_in);
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (const char*) (locale_to_c), (const char**) (list_to_c), (gsize) (length_to_c));
}

// void g_key_file_set_string (GKeyFile* key_file, const gchar* group_name, const gchar* key, const gchar* string);
// void g_key_file_set_string (::GKeyFile* key_file, const char* group_name, const char* key, const char* string);
void base::KeyFileBase::set_string (const std::string & group_name, const std::string & key, const std::string & string) noexcept
{
  typedef void (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_set_string;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (const char*) (string_to_c));
}

// void g_key_file_set_string_list (GKeyFile* key_file, const gchar* group_name, const gchar* key, const gchar* const* list, gsize length);
// void g_key_file_set_string_list (::GKeyFile* key_file, const char* group_name, const char* key, const char** list, gsize length);
void base::KeyFileBase::set_string_list (const std::string & group_name, const std::string & key, const std::vector<std::string> & list, gsize length) noexcept
{
  typedef void (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, const char** list, gsize length);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_set_string_list;
  auto length_to_c = length;
  auto list_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (list);
  auto list_w = unwrap (list_i, gi::transfer_none, direction_in);
  auto list_to_c = list_w.gobj_(false);
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (const char**) (list_to_c), (gsize) (length_to_c));
}

// void g_key_file_set_uint64 (GKeyFile* key_file, const gchar* group_name, const gchar* key, guint64 value);
// void g_key_file_set_uint64 (::GKeyFile* key_file, const char* group_name, const char* key, guint64 value);
void base::KeyFileBase::set_uint64 (const std::string & group_name, const std::string & key, guint64 value) noexcept
{
  typedef void (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, guint64 value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_set_uint64;
  auto value_to_c = value;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (guint64) (value_to_c));
}

// void g_key_file_set_value (GKeyFile* key_file, const gchar* group_name, const gchar* key, const gchar* value);
// void g_key_file_set_value (::GKeyFile* key_file, const char* group_name, const char* key, const char* value);
void base::KeyFileBase::set_value (const std::string & group_name, const std::string & key, const std::string & value) noexcept
{
  typedef void (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_set_value;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (const char*) (value_to_c));
}

// gchar* g_key_file_to_data (GKeyFile* key_file, gsize* length, GError ** error);
// char* g_key_file_to_data (::GKeyFile* key_file, gsize* length, GError ** error);
std::string base::KeyFileBase::to_data (gsize * length)
{
  typedef char* (*call_wrap_t) (::GKeyFile* key_file, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_to_data;
  gsize length_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (gsize*) (length ? &length_o : nullptr), &error);
  if (length) *length = length_o;
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string base::KeyFileBase::to_data (gsize * length, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GKeyFile* key_file, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_to_data;
  gsize length_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (gsize*) (length ? &length_o : nullptr), _error ? &_error_o : nullptr);
  if (length) *length = length_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::tuple<std::string, gsize> base::KeyFileBase::to_data ()
{
  typedef char* (*call_wrap_t) (::GKeyFile* key_file, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_to_data;
  gsize length_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (gsize*) (&length_o), &error);
  gi::check_error (error);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), length_o);
}
std::tuple<std::string, gsize> base::KeyFileBase::to_data (GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GKeyFile* key_file, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_to_data;
  gsize length_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (gsize*) (&length_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), length_o);
}

// void g_key_file_unref (GKeyFile* key_file);
// void g_key_file_unref (::GKeyFile* key_file);
// IGNORE; marked ignore

// GQuark g_key_file_error_quark ();
// ::GQuark g_key_file_error_quark ();
GLib::Quark base::KeyFileBase::error_quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/keyfile_extra_def_impl.hpp>)
#include <glib/keyfile_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/keyfile_extra_impl.hpp>)
#include <glib/keyfile_extra_impl.hpp>
#endif
#endif

#endif
