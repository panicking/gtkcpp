// AUTO-GENERATED

#ifndef _GI_GIO_SETTINGSSCHEMASOURCE_HPP_
#define _GI_GIO_SETTINGSSCHEMASOURCE_HPP_


namespace gi {

namespace repository {

namespace Gio {

class SettingsSchema;

class SettingsSchemaSource;

namespace base {


#define GI_GIO_SETTINGSSCHEMASOURCE_BASE base::SettingsSchemaSourceBase
class SettingsSchemaSourceBase : public gi::detail::GBoxedWrapper<SettingsSchemaSourceBase, ::GSettingsSchemaSource>
{
typedef gi::detail::GBoxedWrapper<SettingsSchemaSourceBase, ::GSettingsSchemaSource> super_type;
public:

SettingsSchemaSourceBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_settings_schema_source_get_type(); } 

// GSettingsSchemaSource* g_settings_schema_source_new_from_directory (const gchar* directory, GSettingsSchemaSource* parent, gboolean trusted, GError ** error);
// ::GSettingsSchemaSource* g_settings_schema_source_new_from_directory (const char* directory, ::GSettingsSchemaSource* parent, gboolean trusted, GError ** error);
static GI_INLINE_DECL Gio::SettingsSchemaSource new_from_directory (const std::string & directory, Gio::SettingsSchemaSource parent, gboolean trusted);
static GI_INLINE_DECL Gio::SettingsSchemaSource new_from_directory (const std::string & directory, gboolean trusted);
static GI_INLINE_DECL Gio::SettingsSchemaSource new_from_directory (const std::string & directory, Gio::SettingsSchemaSource parent, gboolean trusted, GLib::Error * _error) noexcept;
static GI_INLINE_DECL Gio::SettingsSchemaSource new_from_directory (const std::string & directory, gboolean trusted, GLib::Error * _error) noexcept;

// void g_settings_schema_source_list_schemas (GSettingsSchemaSource* source, gboolean recursive, gchar*** non_relocatable, gchar*** relocatable);
// void g_settings_schema_source_list_schemas (::GSettingsSchemaSource* source, gboolean recursive, char*** non_relocatable, char*** relocatable);
GI_INLINE_DECL void list_schemas (gboolean recursive, std::vector<std::string> & non_relocatable, std::vector<std::string> & relocatable) noexcept;
GI_INLINE_DECL std::tuple<std::vector<std::string>, std::vector<std::string>> list_schemas (gboolean recursive) noexcept;

// GSettingsSchema* g_settings_schema_source_lookup (GSettingsSchemaSource* source, const gchar* schema_id, gboolean recursive);
// ::GSettingsSchema* g_settings_schema_source_lookup (::GSettingsSchemaSource* source, const char* schema_id, gboolean recursive);
GI_INLINE_DECL Gio::SettingsSchema lookup (const std::string & schema_id, gboolean recursive) noexcept;

// GSettingsSchemaSource* g_settings_schema_source_ref (GSettingsSchemaSource* source);
// ::GSettingsSchemaSource* g_settings_schema_source_ref (::GSettingsSchemaSource* source);
// IGNORE; marked ignore

// void g_settings_schema_source_unref (GSettingsSchemaSource* source);
// void g_settings_schema_source_unref (::GSettingsSchemaSource* source);
// IGNORE; marked ignore

// GSettingsSchemaSource* g_settings_schema_source_get_default ();
// ::GSettingsSchemaSource* g_settings_schema_source_get_default ();
static GI_INLINE_DECL Gio::SettingsSchemaSource get_default () noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/settingsschemasource_extra_def.hpp>)
#include <gio/settingsschemasource_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/settingsschemasource_extra.hpp>)
#include <gio/settingsschemasource_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class SettingsSchemaSource : public GI_GIO_SETTINGSSCHEMASOURCE_BASE
{ typedef GI_GIO_SETTINGSSCHEMASOURCE_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GSettingsSchemaSource>
{ typedef Gio::SettingsSchemaSource type; }; 

} // namespace repository

} // namespace gi

#endif
