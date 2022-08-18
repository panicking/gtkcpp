// AUTO-GENERATED

#ifndef _GI_GTK_BUILDER_HPP_
#define _GI_GTK_BUILDER_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Application;
class Widget;

class Builder;

namespace base {


#define GI_GTK_BUILDER_BASE base::BuilderBase
class BuilderBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkBuilder BaseObjectType;

BuilderBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_builder_get_type(); } 

// GtkBuilder* gtk_builder_new ();
// ::GtkBuilder* gtk_builder_new ();
static GI_INLINE_DECL Gtk::Builder new_ () noexcept;

// GtkBuilder* gtk_builder_new_from_file (const gchar* filename);
// ::GtkBuilder* gtk_builder_new_from_file (const char* filename);
static GI_INLINE_DECL Gtk::Builder new_from_file (const std::string & filename) noexcept;

// GtkBuilder* gtk_builder_new_from_resource (const gchar* resource_path);
// ::GtkBuilder* gtk_builder_new_from_resource (const char* resource_path);
static GI_INLINE_DECL Gtk::Builder new_from_resource (const std::string & resource_path) noexcept;

// GtkBuilder* gtk_builder_new_from_string (const gchar* string, gssize length);
// ::GtkBuilder* gtk_builder_new_from_string (const char* string, gssize length);
static GI_INLINE_DECL Gtk::Builder new_from_string (const std::string & string, gssize length) noexcept;

// void gtk_builder_add_callback_symbol (GtkBuilder* builder, const gchar* callback_name, GCallback callback_symbol);
// void gtk_builder_add_callback_symbol (::GtkBuilder* builder, const char* callback_name,  callback_symbol);
// SKIP; callback_symbol type  not supported

// void gtk_builder_add_callback_symbols (GtkBuilder* builder, const gchar* first_callback_name, GCallback first_callback_symbol);
// void gtk_builder_add_callback_symbols (::GtkBuilder* builder, const char* first_callback_name,  first_callback_symbol);
// IGNORE; not introspectable, varargs not supported

// guint gtk_builder_add_from_file (GtkBuilder* builder, const gchar* filename, GError ** error);
// guint gtk_builder_add_from_file (::GtkBuilder* builder, const char* filename, GError ** error);
GI_INLINE_DECL guint add_from_file (const std::string & filename);
GI_INLINE_DECL guint add_from_file (const std::string & filename, GLib::Error * _error) noexcept;

// guint gtk_builder_add_from_resource (GtkBuilder* builder, const gchar* resource_path, GError ** error);
// guint gtk_builder_add_from_resource (::GtkBuilder* builder, const char* resource_path, GError ** error);
GI_INLINE_DECL guint add_from_resource (const std::string & resource_path);
GI_INLINE_DECL guint add_from_resource (const std::string & resource_path, GLib::Error * _error) noexcept;

// guint gtk_builder_add_from_string (GtkBuilder* builder, const gchar* buffer, gsize length, GError ** error);
// guint gtk_builder_add_from_string (::GtkBuilder* builder, const char* buffer, gsize length, GError ** error);
GI_INLINE_DECL guint add_from_string (const std::string & buffer, gsize length);
GI_INLINE_DECL guint add_from_string (const std::string & buffer, gsize length, GLib::Error * _error) noexcept;

// guint gtk_builder_add_objects_from_file (GtkBuilder* builder, const gchar* filename, gchar** object_ids, GError ** error);
// guint gtk_builder_add_objects_from_file (::GtkBuilder* builder, const char* filename, char** object_ids, GError ** error);
GI_INLINE_DECL guint add_objects_from_file (const std::string & filename, const std::vector<std::string> & object_ids);
GI_INLINE_DECL guint add_objects_from_file (const std::string & filename, const std::vector<std::string> & object_ids, GLib::Error * _error) noexcept;

// guint gtk_builder_add_objects_from_resource (GtkBuilder* builder, const gchar* resource_path, gchar** object_ids, GError ** error);
// guint gtk_builder_add_objects_from_resource (::GtkBuilder* builder, const char* resource_path, char** object_ids, GError ** error);
GI_INLINE_DECL guint add_objects_from_resource (const std::string & resource_path, const std::vector<std::string> & object_ids);
GI_INLINE_DECL guint add_objects_from_resource (const std::string & resource_path, const std::vector<std::string> & object_ids, GLib::Error * _error) noexcept;

// guint gtk_builder_add_objects_from_string (GtkBuilder* builder, const gchar* buffer, gsize length, gchar** object_ids, GError ** error);
// guint gtk_builder_add_objects_from_string (::GtkBuilder* builder, const char* buffer, gsize length, char** object_ids, GError ** error);
GI_INLINE_DECL guint add_objects_from_string (const std::string & buffer, gsize length, const std::vector<std::string> & object_ids);
GI_INLINE_DECL guint add_objects_from_string (const std::string & buffer, gsize length, const std::vector<std::string> & object_ids, GLib::Error * _error) noexcept;

// void gtk_builder_connect_signals (GtkBuilder* builder, gpointer user_data);
// void gtk_builder_connect_signals (::GtkBuilder* builder, void* user_data);
GI_INLINE_DECL void connect_signals (void* user_data) noexcept;

// void gtk_builder_connect_signals_full (GtkBuilder* builder, GtkBuilderConnectFunc func, gpointer user_data);
// void gtk_builder_connect_signals_full (::GtkBuilder* builder, Gtk::BuilderConnectFunc::cfunction_type func, void* user_data);
GI_INLINE_DECL void connect_signals_full (Gtk::BuilderConnectFunc func) noexcept;

// void gtk_builder_expose_object (GtkBuilder* builder, const gchar* name, GObject* object);
// void gtk_builder_expose_object (::GtkBuilder* builder, const char* name, ::GObject* object);
GI_INLINE_DECL void expose_object (const std::string & name, GObject::Object object) noexcept;

// guint gtk_builder_extend_with_template (GtkBuilder* builder, GtkWidget* widget, GType template_type, const gchar* buffer, gsize length, GError ** error);
// guint gtk_builder_extend_with_template (::GtkBuilder* builder, ::GtkWidget* widget, GType template_type, const char* buffer, gsize length, GError ** error);
GI_INLINE_DECL guint extend_with_template (Gtk::Widget widget, GType template_type, const std::string & buffer, gsize length);
GI_INLINE_DECL guint extend_with_template (Gtk::Widget widget, GType template_type, const std::string & buffer, gsize length, GLib::Error * _error) noexcept;

// GtkApplication* gtk_builder_get_application (GtkBuilder* builder);
// ::GtkApplication* gtk_builder_get_application (::GtkBuilder* builder);
GI_INLINE_DECL Gtk::Application get_application () noexcept;

// GObject* gtk_builder_get_object (GtkBuilder* builder, const gchar* name);
// ::GObject* gtk_builder_get_object (::GtkBuilder* builder, const char* name);
GI_INLINE_DECL GObject::Object get_object (const std::string & name) noexcept;

// GSList* gtk_builder_get_objects (GtkBuilder* builder);
// ::GSList* gtk_builder_get_objects (::GtkBuilder* builder);
GI_INLINE_DECL std::vector<GObject::Object> get_objects () noexcept;

// const gchar* gtk_builder_get_translation_domain (GtkBuilder* builder);
// const char* gtk_builder_get_translation_domain (::GtkBuilder* builder);
GI_INLINE_DECL std::string get_translation_domain () noexcept;

// GType gtk_builder_get_type_from_name (GtkBuilder* builder, const char* type_name);
// GType gtk_builder_get_type_from_name (::GtkBuilder* builder, const char* type_name);
GI_INLINE_DECL GType get_type_from_name (const std::string & type_name) noexcept;

// FAILURE on gtk_builder_lookup_callback_symbol; No such node (<xmlattr>.transfer-ownership)
// void gtk_builder_set_application (GtkBuilder* builder, GtkApplication* application);
// void gtk_builder_set_application (::GtkBuilder* builder, ::GtkApplication* application);
GI_INLINE_DECL void set_application (Gtk::Application application) noexcept;

// void gtk_builder_set_translation_domain (GtkBuilder* builder, const gchar* domain);
// void gtk_builder_set_translation_domain (::GtkBuilder* builder, const char* domain);
GI_INLINE_DECL void set_translation_domain (const std::string & domain) noexcept;
GI_INLINE_DECL void set_translation_domain () noexcept;

// gboolean gtk_builder_value_from_string (GtkBuilder* builder, GParamSpec* pspec, const gchar* string, GValue* value, GError ** error);
// gboolean gtk_builder_value_from_string (::GtkBuilder* builder, ::GParamSpec* pspec, const char* string, ::GValue* value, GError ** error);
GI_INLINE_DECL bool value_from_string (GObject::ParamSpec pspec, const std::string & string, GObject::Value & value);
GI_INLINE_DECL bool value_from_string (GObject::ParamSpec pspec, const std::string & string, GObject::Value & value, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, GObject::Value> value_from_string (GObject::ParamSpec pspec, const std::string & string);
GI_INLINE_DECL std::tuple<bool, GObject::Value> value_from_string (GObject::ParamSpec pspec, const std::string & string, GLib::Error * _error) noexcept;

// gboolean gtk_builder_value_from_string_type (GtkBuilder* builder, GType type, const gchar* string, GValue* value, GError ** error);
// gboolean gtk_builder_value_from_string_type (::GtkBuilder* builder, GType type, const char* string, ::GValue* value, GError ** error);
GI_INLINE_DECL bool value_from_string_type (GType type, const std::string & string, GObject::Value & value);
GI_INLINE_DECL bool value_from_string_type (GType type, const std::string & string, GObject::Value & value, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, GObject::Value> value_from_string_type (GType type, const std::string & string);
GI_INLINE_DECL std::tuple<bool, GObject::Value> value_from_string_type (GType type, const std::string & string, GLib::Error * _error) noexcept;

gi::property_proxy<std::string, base::BuilderBase> property_translation_domain()
{ return gi::property_proxy<std::string, base::BuilderBase> (*this, "translation-domain"); }
const gi::property_proxy<std::string, base::BuilderBase> property_translation_domain() const
{ return gi::property_proxy<std::string, base::BuilderBase> (*this, "translation-domain"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/builder_extra_def.hpp>)
#include <gtk/builder_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/builder_extra.hpp>)
#include <gtk/builder_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Builder : public GI_GTK_BUILDER_BASE
{ typedef GI_GTK_BUILDER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkBuilder>
{ typedef Gtk::Builder type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class BuilderClassDef
{
typedef BuilderClassDef self;
public:
typedef Gtk::Builder instance_type;
typedef ::GtkBuilderClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// GType Builder::get_type_from_name (GtkBuilder* builder, const char* type_name);
// GType Builder::get_type_from_name (::GtkBuilder* builder, const char* type_name);
virtual GType get_type_from_name_ (const std::string & type_name) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class BuilderClass: public detail::ClassTemplate<Gtk::impl::internal::BuilderClassDef, GObject::impl::internal::ObjectClass>
{
typedef BuilderClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::BuilderClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// GType Builder::get_type_from_name (GtkBuilder* builder, const char* type_name);
// GType Builder::get_type_from_name (::GtkBuilder* builder, const char* type_name);
GI_INLINE_DECL GType get_type_from_name_ (const std::string & type_name) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using BuilderImpl = detail::ObjectImpl<Builder, internal::BuilderClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
