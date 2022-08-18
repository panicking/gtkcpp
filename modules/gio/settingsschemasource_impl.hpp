// AUTO-GENERATED

#ifndef _GI_GIO_SETTINGSSCHEMASOURCE_IMPL_HPP_
#define _GI_GIO_SETTINGSSCHEMASOURCE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GSettingsSchemaSource* g_settings_schema_source_new_from_directory (const gchar* directory, GSettingsSchemaSource* parent, gboolean trusted, GError ** error);
// ::GSettingsSchemaSource* g_settings_schema_source_new_from_directory (const char* directory, ::GSettingsSchemaSource* parent, gboolean trusted, GError ** error);
Gio::SettingsSchemaSource base::SettingsSchemaSourceBase::new_from_directory (const std::string & directory, Gio::SettingsSchemaSource parent, gboolean trusted)
{
  typedef ::GSettingsSchemaSource* (*call_wrap_t) (const char* directory, ::GSettingsSchemaSource* parent, gboolean trusted, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_schema_source_new_from_directory;
  auto trusted_to_c = trusted;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  auto directory_to_c = gi::unwrap (directory, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (directory_to_c), (::GSettingsSchemaSource*) (parent_to_c), (gboolean) (trusted_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::SettingsSchemaSource base::SettingsSchemaSourceBase::new_from_directory (const std::string & directory, gboolean trusted)
{
  typedef ::GSettingsSchemaSource* (*call_wrap_t) (const char* directory, ::GSettingsSchemaSource* parent, gboolean trusted, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_schema_source_new_from_directory;
  auto trusted_to_c = trusted;
  auto parent_to_c = nullptr;
  auto directory_to_c = gi::unwrap (directory, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (directory_to_c), (::GSettingsSchemaSource*) (parent_to_c), (gboolean) (trusted_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::SettingsSchemaSource base::SettingsSchemaSourceBase::new_from_directory (const std::string & directory, Gio::SettingsSchemaSource parent, gboolean trusted, GLib::Error * _error) noexcept
{
  typedef ::GSettingsSchemaSource* (*call_wrap_t) (const char* directory, ::GSettingsSchemaSource* parent, gboolean trusted, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_schema_source_new_from_directory;
  auto trusted_to_c = trusted;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  auto directory_to_c = gi::unwrap (directory, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (directory_to_c), (::GSettingsSchemaSource*) (parent_to_c), (gboolean) (trusted_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::SettingsSchemaSource base::SettingsSchemaSourceBase::new_from_directory (const std::string & directory, gboolean trusted, GLib::Error * _error) noexcept
{
  typedef ::GSettingsSchemaSource* (*call_wrap_t) (const char* directory, ::GSettingsSchemaSource* parent, gboolean trusted, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_schema_source_new_from_directory;
  auto trusted_to_c = trusted;
  auto parent_to_c = nullptr;
  auto directory_to_c = gi::unwrap (directory, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (directory_to_c), (::GSettingsSchemaSource*) (parent_to_c), (gboolean) (trusted_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_settings_schema_source_list_schemas (GSettingsSchemaSource* source, gboolean recursive, gchar*** non_relocatable, gchar*** relocatable);
// void g_settings_schema_source_list_schemas (::GSettingsSchemaSource* source, gboolean recursive, char*** non_relocatable, char*** relocatable);
void base::SettingsSchemaSourceBase::list_schemas (gboolean recursive, std::vector<std::string> & non_relocatable, std::vector<std::string> & relocatable) noexcept
{
  typedef void (*call_wrap_t) (::GSettingsSchemaSource* source, gboolean recursive, char*** non_relocatable, char*** relocatable);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_schema_source_list_schemas;
  char** relocatable_o {};
  char** non_relocatable_o {};
  auto recursive_to_c = recursive;
  call_wrap_v ((::GSettingsSchemaSource*) (gobj_()), (gboolean) (recursive_to_c), (char***) (&non_relocatable_o), (char***) (&relocatable_o));
  relocatable = gi::detail::wrap_list<std::string> (relocatable_o, gi::transfer_full);
  non_relocatable = gi::detail::wrap_list<std::string> (non_relocatable_o, gi::transfer_full);
}
std::tuple<std::vector<std::string>, std::vector<std::string>> base::SettingsSchemaSourceBase::list_schemas (gboolean recursive) noexcept
{
  typedef void (*call_wrap_t) (::GSettingsSchemaSource* source, gboolean recursive, char*** non_relocatable, char*** relocatable);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_schema_source_list_schemas;
  char** relocatable_o {};
  char** non_relocatable_o {};
  auto recursive_to_c = recursive;
  call_wrap_v ((::GSettingsSchemaSource*) (gobj_()), (gboolean) (recursive_to_c), (char***) (&non_relocatable_o), (char***) (&relocatable_o));
  return std::make_tuple (gi::detail::wrap_list<std::string> (non_relocatable_o, gi::transfer_full), gi::detail::wrap_list<std::string> (relocatable_o, gi::transfer_full));
}

// GSettingsSchema* g_settings_schema_source_lookup (GSettingsSchemaSource* source, const gchar* schema_id, gboolean recursive);
// ::GSettingsSchema* g_settings_schema_source_lookup (::GSettingsSchemaSource* source, const char* schema_id, gboolean recursive);
Gio::SettingsSchema base::SettingsSchemaSourceBase::lookup (const std::string & schema_id, gboolean recursive) noexcept
{
  typedef ::GSettingsSchema* (*call_wrap_t) (::GSettingsSchemaSource* source, const char* schema_id, gboolean recursive);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_schema_source_lookup;
  auto recursive_to_c = recursive;
  auto schema_id_to_c = gi::unwrap (schema_id, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GSettingsSchemaSource*) (gobj_()), (const char*) (schema_id_to_c), (gboolean) (recursive_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GSettingsSchemaSource* g_settings_schema_source_ref (GSettingsSchemaSource* source);
// ::GSettingsSchemaSource* g_settings_schema_source_ref (::GSettingsSchemaSource* source);
// IGNORE; marked ignore

// void g_settings_schema_source_unref (GSettingsSchemaSource* source);
// void g_settings_schema_source_unref (::GSettingsSchemaSource* source);
// IGNORE; marked ignore

// GSettingsSchemaSource* g_settings_schema_source_get_default ();
// ::GSettingsSchemaSource* g_settings_schema_source_get_default ();
Gio::SettingsSchemaSource base::SettingsSchemaSourceBase::get_default () noexcept
{
  typedef ::GSettingsSchemaSource* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_schema_source_get_default;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/settingsschemasource_extra_def_impl.hpp>)
#include <gio/settingsschemasource_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/settingsschemasource_extra_impl.hpp>)
#include <gio/settingsschemasource_extra_impl.hpp>
#endif
#endif

#endif
