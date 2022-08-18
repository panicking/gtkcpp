// AUTO-GENERATED

#ifndef _GI_GIO_SETTINGSSCHEMA_HPP_
#define _GI_GIO_SETTINGSSCHEMA_HPP_


namespace gi {

namespace repository {

namespace Gio {

class SettingsSchemaKey;

class SettingsSchema;

namespace base {


#define GI_GIO_SETTINGSSCHEMA_BASE base::SettingsSchemaBase
class SettingsSchemaBase : public gi::detail::GBoxedWrapper<SettingsSchemaBase, ::GSettingsSchema>
{
typedef gi::detail::GBoxedWrapper<SettingsSchemaBase, ::GSettingsSchema> super_type;
public:

SettingsSchemaBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_settings_schema_get_type(); } 

// const gchar* g_settings_schema_get_id (GSettingsSchema* schema);
// const char* g_settings_schema_get_id (::GSettingsSchema* schema);
GI_INLINE_DECL std::string get_id () noexcept;

// GSettingsSchemaKey* g_settings_schema_get_key (GSettingsSchema* schema, const gchar* name);
// ::GSettingsSchemaKey* g_settings_schema_get_key (::GSettingsSchema* schema, const char* name);
GI_INLINE_DECL Gio::SettingsSchemaKey get_key (const std::string & name) noexcept;

// const gchar* g_settings_schema_get_path (GSettingsSchema* schema);
// const char* g_settings_schema_get_path (::GSettingsSchema* schema);
GI_INLINE_DECL std::string get_path () noexcept;

// gboolean g_settings_schema_has_key (GSettingsSchema* schema, const gchar* name);
// gboolean g_settings_schema_has_key (::GSettingsSchema* schema, const char* name);
GI_INLINE_DECL bool has_key (const std::string & name) noexcept;

// gchar** g_settings_schema_list_children (GSettingsSchema* schema);
// char** g_settings_schema_list_children (::GSettingsSchema* schema);
GI_INLINE_DECL std::vector<std::string> list_children () noexcept;

// gchar** g_settings_schema_list_keys (GSettingsSchema* schema);
// char** g_settings_schema_list_keys (::GSettingsSchema* schema);
GI_INLINE_DECL std::vector<std::string> list_keys () noexcept;

// GSettingsSchema* g_settings_schema_ref (GSettingsSchema* schema);
// ::GSettingsSchema* g_settings_schema_ref (::GSettingsSchema* schema);
// IGNORE; marked ignore

// void g_settings_schema_unref (GSettingsSchema* schema);
// void g_settings_schema_unref (::GSettingsSchema* schema);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/settingsschema_extra_def.hpp>)
#include <gio/settingsschema_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/settingsschema_extra.hpp>)
#include <gio/settingsschema_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class SettingsSchema : public GI_GIO_SETTINGSSCHEMA_BASE
{ typedef GI_GIO_SETTINGSSCHEMA_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GSettingsSchema>
{ typedef Gio::SettingsSchema type; }; 

} // namespace repository

} // namespace gi

#endif
