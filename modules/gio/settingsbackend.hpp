// AUTO-GENERATED

#ifndef _GI_GIO_SETTINGSBACKEND_HPP_
#define _GI_GIO_SETTINGSBACKEND_HPP_


namespace gi {

namespace repository {

namespace Gio {


class SettingsBackend;

namespace base {


#define GI_GIO_SETTINGSBACKEND_BASE base::SettingsBackendBase
class SettingsBackendBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GSettingsBackend BaseObjectType;

SettingsBackendBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_settings_backend_get_type(); } 

// void g_settings_backend_flatten_tree (GTree* tree, gchar** path, const gchar*** keys, GVariant*** values);
// void g_settings_backend_flatten_tree (::GTree* tree, char** path, const char*** keys, ::GVariant*** values);
static GI_INLINE_DECL void flatten_tree (GLib::Tree tree, std::string & path, std::vector<std::string> & keys, std::vector<GLib::Variant> * values = nullptr) noexcept;
static GI_INLINE_DECL std::tuple<std::string, std::vector<std::string>, std::vector<GLib::Variant>> flatten_tree (GLib::Tree tree) noexcept;

// GSettingsBackend* g_settings_backend_get_default ();
// ::GSettingsBackend* g_settings_backend_get_default ();
static GI_INLINE_DECL Gio::SettingsBackend get_default () noexcept;

// void g_settings_backend_changed (GSettingsBackend* backend, const gchar* key, gpointer origin_tag);
// void g_settings_backend_changed (::GSettingsBackend* backend, const char* key, void* origin_tag);
GI_INLINE_DECL void changed (const std::string & key, void* origin_tag) noexcept;

// void g_settings_backend_changed_tree (GSettingsBackend* backend, GTree* tree, gpointer origin_tag);
// void g_settings_backend_changed_tree (::GSettingsBackend* backend, ::GTree* tree, void* origin_tag);
GI_INLINE_DECL void changed_tree (GLib::Tree tree, void* origin_tag) noexcept;

// void g_settings_backend_keys_changed (GSettingsBackend* backend, const gchar* path, const gchar* const* items, gpointer origin_tag);
// void g_settings_backend_keys_changed (::GSettingsBackend* backend, const char* path, const char** items, void* origin_tag);
GI_INLINE_DECL void keys_changed (const std::string & path, const std::vector<std::string> & items, void* origin_tag) noexcept;

// void g_settings_backend_path_changed (GSettingsBackend* backend, const gchar* path, gpointer origin_tag);
// void g_settings_backend_path_changed (::GSettingsBackend* backend, const char* path, void* origin_tag);
GI_INLINE_DECL void path_changed (const std::string & path, void* origin_tag) noexcept;

// void g_settings_backend_path_writable_changed (GSettingsBackend* backend, const gchar* path);
// void g_settings_backend_path_writable_changed (::GSettingsBackend* backend, const char* path);
GI_INLINE_DECL void path_writable_changed (const std::string & path) noexcept;

// void g_settings_backend_writable_changed (GSettingsBackend* backend, const gchar* key);
// void g_settings_backend_writable_changed (::GSettingsBackend* backend, const char* key);
GI_INLINE_DECL void writable_changed (const std::string & key) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/settingsbackend_extra_def.hpp>)
#include <gio/settingsbackend_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/settingsbackend_extra.hpp>)
#include <gio/settingsbackend_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class SettingsBackend : public GI_GIO_SETTINGSBACKEND_BASE
{ typedef GI_GIO_SETTINGSBACKEND_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GSettingsBackend>
{ typedef Gio::SettingsBackend type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class SettingsBackendClassDef
{
typedef SettingsBackendClassDef self;
public:
typedef Gio::SettingsBackend instance_type;
typedef ::GSettingsBackendClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gboolean SettingsBackend::get_writable (GSettingsBackend* backend, const gchar* key);
// gboolean SettingsBackend::get_writable (::GSettingsBackend* backend, const char* key);
virtual bool get_writable_ (const std::string & key) noexcept = 0;

// GVariant* SettingsBackend::read (GSettingsBackend* backend, const gchar* key, const GVariantType* expected_type, gboolean default_value);
// ::GVariant* SettingsBackend::read (::GSettingsBackend* backend, const char* key, const ::GVariantType* expected_type, gboolean default_value);
virtual GLib::Variant read_ (const std::string & key, const GLib::VariantType & expected_type, gboolean default_value) noexcept = 0;

// GVariant* SettingsBackend::read_user_value (GSettingsBackend* backend, const gchar* key, const GVariantType* expected_type);
// ::GVariant* SettingsBackend::read_user_value (::GSettingsBackend* backend, const char* key, const ::GVariantType* expected_type);
virtual GLib::Variant read_user_value_ (const std::string & key, const GLib::VariantType & expected_type) noexcept = 0;

// void SettingsBackend::reset (GSettingsBackend* backend, const gchar* key, gpointer origin_tag);
// void SettingsBackend::reset (::GSettingsBackend* backend, const char* key, void* origin_tag);
virtual void reset_ (const std::string & key, void* origin_tag) noexcept = 0;

// void SettingsBackend::subscribe (GSettingsBackend* backend, const gchar* name);
// void SettingsBackend::subscribe (::GSettingsBackend* backend, const char* name);
virtual void subscribe_ (const std::string & name) noexcept = 0;

// void SettingsBackend::sync (GSettingsBackend* backend);
// void SettingsBackend::sync (::GSettingsBackend* backend);
virtual void sync_ () noexcept = 0;

// void SettingsBackend::unsubscribe (GSettingsBackend* backend, const gchar* name);
// void SettingsBackend::unsubscribe (::GSettingsBackend* backend, const char* name);
virtual void unsubscribe_ (const std::string & name) noexcept = 0;

// gboolean SettingsBackend::write (GSettingsBackend* backend, const gchar* key, GVariant* value, gpointer origin_tag);
// gboolean SettingsBackend::write (::GSettingsBackend* backend, const char* key, ::GVariant* value, void* origin_tag);
virtual bool write_ (const std::string & key, GLib::Variant value, void* origin_tag) noexcept = 0;

// gboolean SettingsBackend::write_tree (GSettingsBackend* backend, GTree* tree, gpointer origin_tag);
// gboolean SettingsBackend::write_tree (::GSettingsBackend* backend, ::GTree* tree, void* origin_tag);
virtual bool write_tree_ (GLib::Tree tree, void* origin_tag) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class SettingsBackendClass: public detail::ClassTemplate<Gio::impl::internal::SettingsBackendClassDef, GObject::impl::internal::ObjectClass>
{
typedef SettingsBackendClass self;
typedef detail::ClassTemplate<Gio::impl::internal::SettingsBackendClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// gboolean SettingsBackend::get_writable (GSettingsBackend* backend, const gchar* key);
// gboolean SettingsBackend::get_writable (::GSettingsBackend* backend, const char* key);
GI_INLINE_DECL bool get_writable_ (const std::string & key) noexcept override;

// GVariant* SettingsBackend::read (GSettingsBackend* backend, const gchar* key, const GVariantType* expected_type, gboolean default_value);
// ::GVariant* SettingsBackend::read (::GSettingsBackend* backend, const char* key, const ::GVariantType* expected_type, gboolean default_value);
GI_INLINE_DECL GLib::Variant read_ (const std::string & key, const GLib::VariantType & expected_type, gboolean default_value) noexcept override;

// GVariant* SettingsBackend::read_user_value (GSettingsBackend* backend, const gchar* key, const GVariantType* expected_type);
// ::GVariant* SettingsBackend::read_user_value (::GSettingsBackend* backend, const char* key, const ::GVariantType* expected_type);
GI_INLINE_DECL GLib::Variant read_user_value_ (const std::string & key, const GLib::VariantType & expected_type) noexcept override;

// void SettingsBackend::reset (GSettingsBackend* backend, const gchar* key, gpointer origin_tag);
// void SettingsBackend::reset (::GSettingsBackend* backend, const char* key, void* origin_tag);
GI_INLINE_DECL void reset_ (const std::string & key, void* origin_tag) noexcept override;

// void SettingsBackend::subscribe (GSettingsBackend* backend, const gchar* name);
// void SettingsBackend::subscribe (::GSettingsBackend* backend, const char* name);
GI_INLINE_DECL void subscribe_ (const std::string & name) noexcept override;

// void SettingsBackend::sync (GSettingsBackend* backend);
// void SettingsBackend::sync (::GSettingsBackend* backend);
GI_INLINE_DECL void sync_ () noexcept override;

// void SettingsBackend::unsubscribe (GSettingsBackend* backend, const gchar* name);
// void SettingsBackend::unsubscribe (::GSettingsBackend* backend, const char* name);
GI_INLINE_DECL void unsubscribe_ (const std::string & name) noexcept override;

// gboolean SettingsBackend::write (GSettingsBackend* backend, const gchar* key, GVariant* value, gpointer origin_tag);
// gboolean SettingsBackend::write (::GSettingsBackend* backend, const char* key, ::GVariant* value, void* origin_tag);
GI_INLINE_DECL bool write_ (const std::string & key, GLib::Variant value, void* origin_tag) noexcept override;

// gboolean SettingsBackend::write_tree (GSettingsBackend* backend, GTree* tree, gpointer origin_tag);
// gboolean SettingsBackend::write_tree (::GSettingsBackend* backend, ::GTree* tree, void* origin_tag);
GI_INLINE_DECL bool write_tree_ (GLib::Tree tree, void* origin_tag) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using SettingsBackendImpl = detail::ObjectImpl<SettingsBackend, internal::SettingsBackendClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
