// AUTO-GENERATED

#ifndef _GI_GIO_SETTINGSSCHEMAKEY_IMPL_HPP_
#define _GI_GIO_SETTINGSSCHEMAKEY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GVariant* g_settings_schema_key_get_default_value (GSettingsSchemaKey* key);
// ::GVariant* g_settings_schema_key_get_default_value (::GSettingsSchemaKey* key);
GLib::Variant base::SettingsSchemaKeyBase::get_default_value () noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GSettingsSchemaKey* key);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_schema_key_get_default_value;
  auto _temp_ret = call_wrap_v ((::GSettingsSchemaKey*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const gchar* g_settings_schema_key_get_description (GSettingsSchemaKey* key);
// const char* g_settings_schema_key_get_description (::GSettingsSchemaKey* key);
std::string base::SettingsSchemaKeyBase::get_description () noexcept
{
  typedef const char* (*call_wrap_t) (::GSettingsSchemaKey* key);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_schema_key_get_description;
  auto _temp_ret = call_wrap_v ((::GSettingsSchemaKey*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* g_settings_schema_key_get_name (GSettingsSchemaKey* key);
// const char* g_settings_schema_key_get_name (::GSettingsSchemaKey* key);
std::string base::SettingsSchemaKeyBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GSettingsSchemaKey* key);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_schema_key_get_name;
  auto _temp_ret = call_wrap_v ((::GSettingsSchemaKey*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GVariant* g_settings_schema_key_get_range (GSettingsSchemaKey* key);
// ::GVariant* g_settings_schema_key_get_range (::GSettingsSchemaKey* key);
GLib::Variant base::SettingsSchemaKeyBase::get_range () noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GSettingsSchemaKey* key);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_schema_key_get_range;
  auto _temp_ret = call_wrap_v ((::GSettingsSchemaKey*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const gchar* g_settings_schema_key_get_summary (GSettingsSchemaKey* key);
// const char* g_settings_schema_key_get_summary (::GSettingsSchemaKey* key);
std::string base::SettingsSchemaKeyBase::get_summary () noexcept
{
  typedef const char* (*call_wrap_t) (::GSettingsSchemaKey* key);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_schema_key_get_summary;
  auto _temp_ret = call_wrap_v ((::GSettingsSchemaKey*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const GVariantType* g_settings_schema_key_get_value_type (GSettingsSchemaKey* key);
// const ::GVariantType* g_settings_schema_key_get_value_type (::GSettingsSchemaKey* key);
GLib::VariantType base::SettingsSchemaKeyBase::get_value_type () noexcept
{
  typedef const ::GVariantType* (*call_wrap_t) (::GSettingsSchemaKey* key);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_schema_key_get_value_type;
  auto _temp_ret = call_wrap_v ((::GSettingsSchemaKey*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean g_settings_schema_key_range_check (GSettingsSchemaKey* key, GVariant* value);
// gboolean g_settings_schema_key_range_check (::GSettingsSchemaKey* key, ::GVariant* value);
bool base::SettingsSchemaKeyBase::range_check (GLib::Variant value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSettingsSchemaKey* key, ::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_schema_key_range_check;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GSettingsSchemaKey*) (gobj_()), (::GVariant*) (value_to_c));
  return _temp_ret;
}

// GSettingsSchemaKey* g_settings_schema_key_ref (GSettingsSchemaKey* key);
// ::GSettingsSchemaKey* g_settings_schema_key_ref (::GSettingsSchemaKey* key);
// IGNORE; marked ignore

// void g_settings_schema_key_unref (GSettingsSchemaKey* key);
// void g_settings_schema_key_unref (::GSettingsSchemaKey* key);
// IGNORE; marked ignore


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/settingsschemakey_extra_def_impl.hpp>)
#include <gio/settingsschemakey_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/settingsschemakey_extra_impl.hpp>)
#include <gio/settingsschemakey_extra_impl.hpp>
#endif
#endif

#endif
