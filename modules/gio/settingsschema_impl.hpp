// AUTO-GENERATED

#ifndef _GI_GIO_SETTINGSSCHEMA_IMPL_HPP_
#define _GI_GIO_SETTINGSSCHEMA_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// const gchar* g_settings_schema_get_id (GSettingsSchema* schema);
// const char* g_settings_schema_get_id (::GSettingsSchema* schema);
std::string base::SettingsSchemaBase::get_id () noexcept
{
  typedef const char* (*call_wrap_t) (::GSettingsSchema* schema);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_schema_get_id;
  auto _temp_ret = call_wrap_v ((::GSettingsSchema*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GSettingsSchemaKey* g_settings_schema_get_key (GSettingsSchema* schema, const gchar* name);
// ::GSettingsSchemaKey* g_settings_schema_get_key (::GSettingsSchema* schema, const char* name);
Gio::SettingsSchemaKey base::SettingsSchemaBase::get_key (const std::string & name) noexcept
{
  typedef ::GSettingsSchemaKey* (*call_wrap_t) (::GSettingsSchema* schema, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_schema_get_key;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GSettingsSchema*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const gchar* g_settings_schema_get_path (GSettingsSchema* schema);
// const char* g_settings_schema_get_path (::GSettingsSchema* schema);
std::string base::SettingsSchemaBase::get_path () noexcept
{
  typedef const char* (*call_wrap_t) (::GSettingsSchema* schema);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_schema_get_path;
  auto _temp_ret = call_wrap_v ((::GSettingsSchema*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean g_settings_schema_has_key (GSettingsSchema* schema, const gchar* name);
// gboolean g_settings_schema_has_key (::GSettingsSchema* schema, const char* name);
bool base::SettingsSchemaBase::has_key (const std::string & name) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSettingsSchema* schema, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_schema_has_key;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GSettingsSchema*) (gobj_()), (const char*) (name_to_c));
  return _temp_ret;
}

// gchar** g_settings_schema_list_children (GSettingsSchema* schema);
// char** g_settings_schema_list_children (::GSettingsSchema* schema);
std::vector<std::string> base::SettingsSchemaBase::list_children () noexcept
{
  typedef char** (*call_wrap_t) (::GSettingsSchema* schema);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_schema_list_children;
  auto _temp_ret = call_wrap_v ((::GSettingsSchema*) (gobj_()));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// gchar** g_settings_schema_list_keys (GSettingsSchema* schema);
// char** g_settings_schema_list_keys (::GSettingsSchema* schema);
std::vector<std::string> base::SettingsSchemaBase::list_keys () noexcept
{
  typedef char** (*call_wrap_t) (::GSettingsSchema* schema);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_schema_list_keys;
  auto _temp_ret = call_wrap_v ((::GSettingsSchema*) (gobj_()));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// GSettingsSchema* g_settings_schema_ref (GSettingsSchema* schema);
// ::GSettingsSchema* g_settings_schema_ref (::GSettingsSchema* schema);
// IGNORE; marked ignore

// void g_settings_schema_unref (GSettingsSchema* schema);
// void g_settings_schema_unref (::GSettingsSchema* schema);
// IGNORE; marked ignore


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/settingsschema_extra_def_impl.hpp>)
#include <gio/settingsschema_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/settingsschema_extra_impl.hpp>)
#include <gio/settingsschema_extra_impl.hpp>
#endif
#endif

#endif
