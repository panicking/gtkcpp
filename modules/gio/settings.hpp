// AUTO-GENERATED

#ifndef _GI_GIO_SETTINGS_HPP_
#define _GI_GIO_SETTINGS_HPP_


namespace gi {

namespace repository {

namespace Gio {

class Action;
class SettingsBackend;
class SettingsSchema;

class Settings;

namespace base {


#define GI_GIO_SETTINGS_BASE base::SettingsBase
class SettingsBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GSettings BaseObjectType;

SettingsBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_settings_get_type(); } 

// GSettings* g_settings_new (const gchar* schema_id);
// ::GSettings* g_settings_new (const char* schema_id);
static GI_INLINE_DECL Gio::Settings new_ (const std::string & schema_id) noexcept;

// GSettings* g_settings_new_full (GSettingsSchema* schema, GSettingsBackend* backend, const gchar* path);
// ::GSettings* g_settings_new_full (::GSettingsSchema* schema, ::GSettingsBackend* backend, const char* path);
static GI_INLINE_DECL Gio::Settings new_full (Gio::SettingsSchema schema, Gio::SettingsBackend backend, const std::string & path) noexcept;
static GI_INLINE_DECL Gio::Settings new_full (Gio::SettingsSchema schema) noexcept;

// GSettings* g_settings_new_with_backend (const gchar* schema_id, GSettingsBackend* backend);
// ::GSettings* g_settings_new_with_backend (const char* schema_id, ::GSettingsBackend* backend);
static GI_INLINE_DECL Gio::Settings new_with_backend (const std::string & schema_id, Gio::SettingsBackend backend) noexcept;

// GSettings* g_settings_new_with_backend_and_path (const gchar* schema_id, GSettingsBackend* backend, const gchar* path);
// ::GSettings* g_settings_new_with_backend_and_path (const char* schema_id, ::GSettingsBackend* backend, const char* path);
static GI_INLINE_DECL Gio::Settings new_with_backend_and_path (const std::string & schema_id, Gio::SettingsBackend backend, const std::string & path) noexcept;

// GSettings* g_settings_new_with_path (const gchar* schema_id, const gchar* path);
// ::GSettings* g_settings_new_with_path (const char* schema_id, const char* path);
static GI_INLINE_DECL Gio::Settings new_with_path (const std::string & schema_id, const std::string & path) noexcept;

// const gchar* const* g_settings_list_relocatable_schemas ();
// const char** g_settings_list_relocatable_schemas ();
// IGNORE; deprecated

// const gchar* const* g_settings_list_schemas ();
// const char** g_settings_list_schemas ();
// IGNORE; deprecated

// void g_settings_sync ();
// void g_settings_sync ();
static GI_INLINE_DECL void sync () noexcept;

// void g_settings_unbind (gpointer object, const gchar* property);
// void g_settings_unbind (::GObject* object, const char* property);
static GI_INLINE_DECL void unbind (GObject::Object object, const std::string & property) noexcept;

// void g_settings_apply (GSettings* settings);
// void g_settings_apply (::GSettings* settings);
GI_INLINE_DECL void apply () noexcept;

// void g_settings_bind (GSettings* settings, const gchar* key, gpointer object, const gchar* property, GSettingsBindFlags flags);
// void g_settings_bind (::GSettings* settings, const char* key, ::GObject* object, const char* property, ::GSettingsBindFlags flags);
GI_INLINE_DECL void bind (const std::string & key, GObject::Object object, const std::string & property, Gio::SettingsBindFlags flags) noexcept;

// void g_settings_bind_with_mapping (GSettings* settings, const gchar* key, gpointer object, const gchar* property, GSettingsBindFlags flags, GSettingsBindGetMapping get_mapping, GSettingsBindSetMapping set_mapping, gpointer user_data, GDestroyNotify destroy);
// void g_settings_bind_with_mapping (::GSettings* settings, const char* key, ::GObject* object, const char* property, ::GSettingsBindFlags flags, Gio::SettingsBindGetMapping::cfunction_type get_mapping, Gio::SettingsBindSetMapping::cfunction_type set_mapping, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
// IGNORE; not introspectable, callback misses closure info

// void g_settings_bind_writable (GSettings* settings, const gchar* key, gpointer object, const gchar* property, gboolean inverted);
// void g_settings_bind_writable (::GSettings* settings, const char* key, ::GObject* object, const char* property, gboolean inverted);
GI_INLINE_DECL void bind_writable (const std::string & key, GObject::Object object, const std::string & property, gboolean inverted) noexcept;

// GAction* g_settings_create_action (GSettings* settings, const gchar* key);
// ::GAction* g_settings_create_action (::GSettings* settings, const char* key);
GI_INLINE_DECL Gio::Action create_action (const std::string & key) noexcept;

// void g_settings_delay (GSettings* settings);
// void g_settings_delay (::GSettings* settings);
GI_INLINE_DECL void delay () noexcept;

// void g_settings_get (GSettings* settings, const gchar* key, const gchar* format);
// void g_settings_get (::GSettings* settings, const char* key, const char* format);
// IGNORE; not introspectable, varargs not supported

// gboolean g_settings_get_boolean (GSettings* settings, const gchar* key);
// gboolean g_settings_get_boolean (::GSettings* settings, const char* key);
GI_INLINE_DECL bool get_boolean (const std::string & key) noexcept;

// GSettings* g_settings_get_child (GSettings* settings, const gchar* name);
// ::GSettings* g_settings_get_child (::GSettings* settings, const char* name);
GI_INLINE_DECL Gio::Settings get_child (const std::string & name) noexcept;

// GVariant* g_settings_get_default_value (GSettings* settings, const gchar* key);
// ::GVariant* g_settings_get_default_value (::GSettings* settings, const char* key);
GI_INLINE_DECL GLib::Variant get_default_value (const std::string & key) noexcept;

// gdouble g_settings_get_double (GSettings* settings, const gchar* key);
// gdouble g_settings_get_double (::GSettings* settings, const char* key);
GI_INLINE_DECL gdouble get_double (const std::string & key) noexcept;

// gint g_settings_get_enum (GSettings* settings, const gchar* key);
// gint g_settings_get_enum (::GSettings* settings, const char* key);
GI_INLINE_DECL gint get_enum (const std::string & key) noexcept;

// guint g_settings_get_flags (GSettings* settings, const gchar* key);
// guint g_settings_get_flags (::GSettings* settings, const char* key);
GI_INLINE_DECL guint get_flags (const std::string & key) noexcept;

// gboolean g_settings_get_has_unapplied (GSettings* settings);
// gboolean g_settings_get_has_unapplied (::GSettings* settings);
GI_INLINE_DECL bool get_has_unapplied () noexcept;

// gint g_settings_get_int (GSettings* settings, const gchar* key);
// gint g_settings_get_int (::GSettings* settings, const char* key);
GI_INLINE_DECL gint get_int (const std::string & key) noexcept;

// gint64 g_settings_get_int64 (GSettings* settings, const gchar* key);
// gint64 g_settings_get_int64 (::GSettings* settings, const char* key);
GI_INLINE_DECL gint64 get_int64 (const std::string & key) noexcept;

// gpointer g_settings_get_mapped (GSettings* settings, const gchar* key, GSettingsGetMapping mapping, gpointer user_data);
// void* g_settings_get_mapped (::GSettings* settings, const char* key,  mapping, void* user_data);
// SKIP; mapping type  not supported

// GVariant* g_settings_get_range (GSettings* settings, const gchar* key);
// ::GVariant* g_settings_get_range (::GSettings* settings, const char* key);
// IGNORE; deprecated

// gchar* g_settings_get_string (GSettings* settings, const gchar* key);
// char* g_settings_get_string (::GSettings* settings, const char* key);
GI_INLINE_DECL std::string get_string (const std::string & key) noexcept;

// gchar** g_settings_get_strv (GSettings* settings, const gchar* key);
// char** g_settings_get_strv (::GSettings* settings, const char* key);
GI_INLINE_DECL std::vector<std::string> get_strv (const std::string & key) noexcept;

// guint g_settings_get_uint (GSettings* settings, const gchar* key);
// guint g_settings_get_uint (::GSettings* settings, const char* key);
GI_INLINE_DECL guint get_uint (const std::string & key) noexcept;

// guint64 g_settings_get_uint64 (GSettings* settings, const gchar* key);
// guint64 g_settings_get_uint64 (::GSettings* settings, const char* key);
GI_INLINE_DECL guint64 get_uint64 (const std::string & key) noexcept;

// GVariant* g_settings_get_user_value (GSettings* settings, const gchar* key);
// ::GVariant* g_settings_get_user_value (::GSettings* settings, const char* key);
GI_INLINE_DECL GLib::Variant get_user_value (const std::string & key) noexcept;

// GVariant* g_settings_get_value (GSettings* settings, const gchar* key);
// ::GVariant* g_settings_get_value (::GSettings* settings, const char* key);
GI_INLINE_DECL GLib::Variant get_value (const std::string & key) noexcept;

// gboolean g_settings_is_writable (GSettings* settings, const gchar* name);
// gboolean g_settings_is_writable (::GSettings* settings, const char* name);
GI_INLINE_DECL bool is_writable (const std::string & name) noexcept;

// gchar** g_settings_list_children (GSettings* settings);
// char** g_settings_list_children (::GSettings* settings);
GI_INLINE_DECL std::vector<std::string> list_children () noexcept;

// gchar** g_settings_list_keys (GSettings* settings);
// char** g_settings_list_keys (::GSettings* settings);
// IGNORE; marked ignore

// gboolean g_settings_range_check (GSettings* settings, const gchar* key, GVariant* value);
// gboolean g_settings_range_check (::GSettings* settings, const char* key, ::GVariant* value);
// IGNORE; deprecated

// void g_settings_reset (GSettings* settings, const gchar* key);
// void g_settings_reset (::GSettings* settings, const char* key);
GI_INLINE_DECL void reset (const std::string & key) noexcept;

// void g_settings_revert (GSettings* settings);
// void g_settings_revert (::GSettings* settings);
GI_INLINE_DECL void revert () noexcept;

// gboolean g_settings_set (GSettings* settings, const gchar* key, const gchar* format);
// gboolean g_settings_set (::GSettings* settings, const char* key, const char* format);
// IGNORE; not introspectable, varargs not supported

// gboolean g_settings_set_boolean (GSettings* settings, const gchar* key, gboolean value);
// gboolean g_settings_set_boolean (::GSettings* settings, const char* key, gboolean value);
GI_INLINE_DECL bool set_boolean (const std::string & key, gboolean value) noexcept;

// gboolean g_settings_set_double (GSettings* settings, const gchar* key, gdouble value);
// gboolean g_settings_set_double (::GSettings* settings, const char* key, gdouble value);
GI_INLINE_DECL bool set_double (const std::string & key, gdouble value) noexcept;

// gboolean g_settings_set_enum (GSettings* settings, const gchar* key, gint value);
// gboolean g_settings_set_enum (::GSettings* settings, const char* key, gint value);
GI_INLINE_DECL bool set_enum (const std::string & key, gint value) noexcept;

// gboolean g_settings_set_flags (GSettings* settings, const gchar* key, guint value);
// gboolean g_settings_set_flags (::GSettings* settings, const char* key, guint value);
GI_INLINE_DECL bool set_flags (const std::string & key, guint value) noexcept;

// gboolean g_settings_set_int (GSettings* settings, const gchar* key, gint value);
// gboolean g_settings_set_int (::GSettings* settings, const char* key, gint value);
GI_INLINE_DECL bool set_int (const std::string & key, gint value) noexcept;

// gboolean g_settings_set_int64 (GSettings* settings, const gchar* key, gint64 value);
// gboolean g_settings_set_int64 (::GSettings* settings, const char* key, gint64 value);
GI_INLINE_DECL bool set_int64 (const std::string & key, gint64 value) noexcept;

// gboolean g_settings_set_string (GSettings* settings, const gchar* key, const gchar* value);
// gboolean g_settings_set_string (::GSettings* settings, const char* key, const char* value);
GI_INLINE_DECL bool set_string (const std::string & key, const std::string & value) noexcept;

// gboolean g_settings_set_strv (GSettings* settings, const gchar* key, const gchar* const* value);
// gboolean g_settings_set_strv (::GSettings* settings, const char* key, const char** value);
GI_INLINE_DECL bool set_strv (const std::string & key, const std::vector<std::string> & value) noexcept;

// gboolean g_settings_set_uint (GSettings* settings, const gchar* key, guint value);
// gboolean g_settings_set_uint (::GSettings* settings, const char* key, guint value);
GI_INLINE_DECL bool set_uint (const std::string & key, guint value) noexcept;

// gboolean g_settings_set_uint64 (GSettings* settings, const gchar* key, guint64 value);
// gboolean g_settings_set_uint64 (::GSettings* settings, const char* key, guint64 value);
GI_INLINE_DECL bool set_uint64 (const std::string & key, guint64 value) noexcept;

// gboolean g_settings_set_value (GSettings* settings, const gchar* key, GVariant* value);
// gboolean g_settings_set_value (::GSettings* settings, const char* key, ::GVariant* value);
GI_INLINE_DECL bool set_value (const std::string & key, GLib::Variant value) noexcept;

gi::property_proxy<Gio::SettingsBackend, base::SettingsBase> property_backend()
{ return gi::property_proxy<Gio::SettingsBackend, base::SettingsBase> (*this, "backend"); }
const gi::property_proxy<Gio::SettingsBackend, base::SettingsBase> property_backend() const
{ return gi::property_proxy<Gio::SettingsBackend, base::SettingsBase> (*this, "backend"); }

gi::property_proxy<bool, base::SettingsBase> property_delay_apply()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "delay-apply"); }
const gi::property_proxy<bool, base::SettingsBase> property_delay_apply() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "delay-apply"); }

gi::property_proxy<bool, base::SettingsBase> property_has_unapplied()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "has-unapplied"); }
const gi::property_proxy<bool, base::SettingsBase> property_has_unapplied() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "has-unapplied"); }

gi::property_proxy<std::string, base::SettingsBase> property_path()
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "path"); }
const gi::property_proxy<std::string, base::SettingsBase> property_path() const
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "path"); }

gi::property_proxy<std::string, base::SettingsBase> property_schema()
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "schema"); }
const gi::property_proxy<std::string, base::SettingsBase> property_schema() const
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "schema"); }

gi::property_proxy<std::string, base::SettingsBase> property_schema_id()
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "schema-id"); }
const gi::property_proxy<std::string, base::SettingsBase> property_schema_id() const
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "schema-id"); }

gi::property_proxy<Gio::SettingsSchema, base::SettingsBase> property_settings_schema()
{ return gi::property_proxy<Gio::SettingsSchema, base::SettingsBase> (*this, "settings-schema"); }
const gi::property_proxy<Gio::SettingsSchema, base::SettingsBase> property_settings_schema() const
{ return gi::property_proxy<Gio::SettingsSchema, base::SettingsBase> (*this, "settings-schema"); }

// signal change-event
// SKIP; glib:signal container parameter not supported

// signal changed
gi::signal_proxy<void(Gio::Settings, const std::string & key)> signal_changed()
{ return gi::signal_proxy<void(Gio::Settings, const std::string & key)> (*this, "changed"); }

// signal writable-change-event
gi::signal_proxy<bool(Gio::Settings, guint key)> signal_writable_change_event()
{ return gi::signal_proxy<bool(Gio::Settings, guint key)> (*this, "writable-change-event"); }

// signal writable-changed
gi::signal_proxy<void(Gio::Settings, const std::string & key)> signal_writable_changed()
{ return gi::signal_proxy<void(Gio::Settings, const std::string & key)> (*this, "writable-changed"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/settings_extra_def.hpp>)
#include <gio/settings_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/settings_extra.hpp>)
#include <gio/settings_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class Settings : public GI_GIO_SETTINGS_BASE
{ typedef GI_GIO_SETTINGS_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GSettings>
{ typedef Gio::Settings type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class SettingsClassDef
{
typedef SettingsClassDef self;
public:
typedef Gio::Settings instance_type;
typedef ::GSettingsClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gboolean Settings::change_event (GSettings* settings, const GQuark* keys, gint n_keys);
// gboolean Settings::change_event (::GSettings* settings, const ::GQuark keys, gint n_keys);
// SKIP; inconsistent in keys pointer depth (1 vs 0)

// void Settings::changed (GSettings* settings, const gchar* key);
// void Settings::changed (::GSettings* settings, const char* key);
virtual void changed_ (const std::string & key) noexcept = 0;

// gboolean Settings::writable_change_event (GSettings* settings, GQuark key);
// gboolean Settings::writable_change_event (::GSettings* settings, ::GQuark key);
virtual bool writable_change_event_ (::GQuark key) noexcept = 0;

// void Settings::writable_changed (GSettings* settings, const gchar* key);
// void Settings::writable_changed (::GSettings* settings, const char* key);
virtual void writable_changed_ (const std::string & key) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class SettingsClass: public detail::ClassTemplate<Gio::impl::internal::SettingsClassDef, GObject::impl::internal::ObjectClass>
{
typedef SettingsClass self;
typedef detail::ClassTemplate<Gio::impl::internal::SettingsClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// gboolean Settings::change_event (GSettings* settings, const GQuark* keys, gint n_keys);
// gboolean Settings::change_event (::GSettings* settings, const ::GQuark keys, gint n_keys);
// SKIP; inconsistent in keys pointer depth (1 vs 0)

// void Settings::changed (GSettings* settings, const gchar* key);
// void Settings::changed (::GSettings* settings, const char* key);
GI_INLINE_DECL void changed_ (const std::string & key) noexcept override;

// gboolean Settings::writable_change_event (GSettings* settings, GQuark key);
// gboolean Settings::writable_change_event (::GSettings* settings, ::GQuark key);
GI_INLINE_DECL bool writable_change_event_ (::GQuark key) noexcept override;

// void Settings::writable_changed (GSettings* settings, const gchar* key);
// void Settings::writable_changed (::GSettings* settings, const char* key);
GI_INLINE_DECL void writable_changed_ (const std::string & key) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using SettingsImpl = detail::ObjectImpl<Settings, internal::SettingsClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
