// AUTO-GENERATED

#ifndef _GI_GIO_SETTINGSSCHEMAKEY_HPP_
#define _GI_GIO_SETTINGSSCHEMAKEY_HPP_


namespace gi {

namespace repository {

namespace Gio {


class SettingsSchemaKey;

namespace base {


#define GI_GIO_SETTINGSSCHEMAKEY_BASE base::SettingsSchemaKeyBase
class SettingsSchemaKeyBase : public gi::detail::GBoxedWrapper<SettingsSchemaKeyBase, ::GSettingsSchemaKey>
{
typedef gi::detail::GBoxedWrapper<SettingsSchemaKeyBase, ::GSettingsSchemaKey> super_type;
public:

SettingsSchemaKeyBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_settings_schema_key_get_type(); } 

// GVariant* g_settings_schema_key_get_default_value (GSettingsSchemaKey* key);
// ::GVariant* g_settings_schema_key_get_default_value (::GSettingsSchemaKey* key);
GI_INLINE_DECL GLib::Variant get_default_value () noexcept;

// const gchar* g_settings_schema_key_get_description (GSettingsSchemaKey* key);
// const char* g_settings_schema_key_get_description (::GSettingsSchemaKey* key);
GI_INLINE_DECL std::string get_description () noexcept;

// const gchar* g_settings_schema_key_get_name (GSettingsSchemaKey* key);
// const char* g_settings_schema_key_get_name (::GSettingsSchemaKey* key);
GI_INLINE_DECL std::string get_name () noexcept;

// GVariant* g_settings_schema_key_get_range (GSettingsSchemaKey* key);
// ::GVariant* g_settings_schema_key_get_range (::GSettingsSchemaKey* key);
GI_INLINE_DECL GLib::Variant get_range () noexcept;

// const gchar* g_settings_schema_key_get_summary (GSettingsSchemaKey* key);
// const char* g_settings_schema_key_get_summary (::GSettingsSchemaKey* key);
GI_INLINE_DECL std::string get_summary () noexcept;

// const GVariantType* g_settings_schema_key_get_value_type (GSettingsSchemaKey* key);
// const ::GVariantType* g_settings_schema_key_get_value_type (::GSettingsSchemaKey* key);
GI_INLINE_DECL GLib::VariantType get_value_type () noexcept;

// gboolean g_settings_schema_key_range_check (GSettingsSchemaKey* key, GVariant* value);
// gboolean g_settings_schema_key_range_check (::GSettingsSchemaKey* key, ::GVariant* value);
GI_INLINE_DECL bool range_check (GLib::Variant value) noexcept;

// GSettingsSchemaKey* g_settings_schema_key_ref (GSettingsSchemaKey* key);
// ::GSettingsSchemaKey* g_settings_schema_key_ref (::GSettingsSchemaKey* key);
// IGNORE; marked ignore

// void g_settings_schema_key_unref (GSettingsSchemaKey* key);
// void g_settings_schema_key_unref (::GSettingsSchemaKey* key);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/settingsschemakey_extra_def.hpp>)
#include <gio/settingsschemakey_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/settingsschemakey_extra.hpp>)
#include <gio/settingsschemakey_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class SettingsSchemaKey : public GI_GIO_SETTINGSSCHEMAKEY_BASE
{ typedef GI_GIO_SETTINGSSCHEMAKEY_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GSettingsSchemaKey>
{ typedef Gio::SettingsSchemaKey type; }; 

} // namespace repository

} // namespace gi

#endif
