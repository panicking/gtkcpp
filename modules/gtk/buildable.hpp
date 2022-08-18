// AUTO-GENERATED

#ifndef _GI_GTK_BUILDABLE_HPP_
#define _GI_GTK_BUILDABLE_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Builder;

class Buildable;

namespace base {


#define GI_GTK_BUILDABLE_BASE base::BuildableBase
class BuildableBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GtkBuildable BaseObjectType;

BuildableBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_buildable_get_type(); } 

// void gtk_buildable_add_child (GtkBuildable* buildable, GtkBuilder* builder, GObject* child, const gchar* type);
// void gtk_buildable_add_child (::GtkBuildable* buildable, ::GtkBuilder* builder, ::GObject* child, const char* type);
GI_INLINE_DECL void add_child (Gtk::Builder builder, GObject::Object child, const std::string & type) noexcept;
GI_INLINE_DECL void add_child (Gtk::Builder builder, GObject::Object child) noexcept;

// GObject* gtk_buildable_construct_child (GtkBuildable* buildable, GtkBuilder* builder, const gchar* name);
// ::GObject* gtk_buildable_construct_child (::GtkBuildable* buildable, ::GtkBuilder* builder, const char* name);
GI_INLINE_DECL GObject::Object construct_child (Gtk::Builder builder, const std::string & name) noexcept;

// void gtk_buildable_custom_finished (GtkBuildable* buildable, GtkBuilder* builder, GObject* child, const gchar* tagname, gpointer data);
// void gtk_buildable_custom_finished (::GtkBuildable* buildable, ::GtkBuilder* builder, ::GObject* child, const char* tagname, void* data);
GI_INLINE_DECL void custom_finished (Gtk::Builder builder, GObject::Object child, const std::string & tagname, void* data) noexcept;
GI_INLINE_DECL void custom_finished (Gtk::Builder builder, const std::string & tagname, void* data) noexcept;

// void gtk_buildable_custom_tag_end (GtkBuildable* buildable, GtkBuilder* builder, GObject* child, const gchar* tagname, gpointer* data);
// void gtk_buildable_custom_tag_end (::GtkBuildable* buildable, ::GtkBuilder* builder, ::GObject* child, const char* tagname, void* data);
// SKIP; inconsistent in data pointer depth (2 vs 1)

// gboolean gtk_buildable_custom_tag_start (GtkBuildable* buildable, GtkBuilder* builder, GObject* child, const gchar* tagname, GMarkupParser* parser, gpointer* data);
// gboolean gtk_buildable_custom_tag_start (::GtkBuildable* buildable, ::GtkBuilder* builder, ::GObject* child, const char* tagname, ::GMarkupParser* parser, void** data);
GI_INLINE_DECL bool custom_tag_start (Gtk::Builder builder, GObject::Object child, const std::string & tagname, GLib::MarkupParser & parser, gpointer & data) noexcept;
GI_INLINE_DECL bool custom_tag_start (Gtk::Builder builder, const std::string & tagname, GLib::MarkupParser & parser, gpointer & data) noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::MarkupParser, gpointer> custom_tag_start (Gtk::Builder builder, GObject::Object child, const std::string & tagname) noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::MarkupParser, gpointer> custom_tag_start (Gtk::Builder builder, const std::string & tagname) noexcept;

// GObject* gtk_buildable_get_internal_child (GtkBuildable* buildable, GtkBuilder* builder, const gchar* childname);
// ::GObject* gtk_buildable_get_internal_child (::GtkBuildable* buildable, ::GtkBuilder* builder, const char* childname);
GI_INLINE_DECL GObject::Object get_internal_child (Gtk::Builder builder, const std::string & childname) noexcept;

// const gchar* gtk_buildable_get_name (GtkBuildable* buildable);
// const char* gtk_buildable_get_name (::GtkBuildable* buildable);
GI_INLINE_DECL std::string get_name () noexcept;

// void gtk_buildable_parser_finished (GtkBuildable* buildable, GtkBuilder* builder);
// void gtk_buildable_parser_finished (::GtkBuildable* buildable, ::GtkBuilder* builder);
GI_INLINE_DECL void parser_finished (Gtk::Builder builder) noexcept;

// void gtk_buildable_set_buildable_property (GtkBuildable* buildable, GtkBuilder* builder, const gchar* name, const GValue* value);
// void gtk_buildable_set_buildable_property (::GtkBuildable* buildable, ::GtkBuilder* builder, const char* name, const ::GValue* value);
GI_INLINE_DECL void set_buildable_property (Gtk::Builder builder, const std::string & name, const GObject::Value & value) noexcept;

// void gtk_buildable_set_name (GtkBuildable* buildable, const gchar* name);
// void gtk_buildable_set_name (::GtkBuildable* buildable, const char* name);
GI_INLINE_DECL void set_name (const std::string & name) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/buildable_extra_def.hpp>)
#include <gtk/buildable_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/buildable_extra.hpp>)
#include <gtk/buildable_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Buildable : public GI_GTK_BUILDABLE_BASE
{ typedef GI_GTK_BUILDABLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkBuildable>
{ typedef Gtk::Buildable type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class BuildableIfaceDef
{
typedef BuildableIfaceDef self;
public:
typedef Gtk::Buildable instance_type;
typedef ::GtkBuildableIface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// void Buildable::add_child (GtkBuildable* buildable, GtkBuilder* builder, GObject* child, const gchar* type);
// void Buildable::add_child (::GtkBuildable* buildable, ::GtkBuilder* builder, ::GObject* child, const char* type);
virtual void add_child_ (Gtk::Builder builder, GObject::Object child, const std::string & type) noexcept = 0;

// GObject* Buildable::construct_child (GtkBuildable* buildable, GtkBuilder* builder, const gchar* name);
// ::GObject* Buildable::construct_child (::GtkBuildable* buildable, ::GtkBuilder* builder, const char* name);
virtual GObject::Object construct_child_ (Gtk::Builder builder, const std::string & name) noexcept = 0;

// void Buildable::custom_finished (GtkBuildable* buildable, GtkBuilder* builder, GObject* child, const gchar* tagname, gpointer data);
// void Buildable::custom_finished (::GtkBuildable* buildable, ::GtkBuilder* builder, ::GObject* child, const char* tagname, void* data);
virtual void custom_finished_ (Gtk::Builder builder, GObject::Object child, const std::string & tagname, void* data) noexcept = 0;

// void Buildable::custom_tag_end (GtkBuildable* buildable, GtkBuilder* builder, GObject* child, const gchar* tagname, gpointer* data);
// void Buildable::custom_tag_end (::GtkBuildable* buildable, ::GtkBuilder* builder, ::GObject* child, const char* tagname, void* data);
// SKIP; inconsistent in data pointer depth (2 vs 1)

// gboolean Buildable::custom_tag_start (GtkBuildable* buildable, GtkBuilder* builder, GObject* child, const gchar* tagname, GMarkupParser* parser, gpointer* data);
// gboolean Buildable::custom_tag_start (::GtkBuildable* buildable, ::GtkBuilder* builder, ::GObject* child, const char* tagname, ::GMarkupParser* parser, void** data);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// GObject* Buildable::get_internal_child (GtkBuildable* buildable, GtkBuilder* builder, const gchar* childname);
// ::GObject* Buildable::get_internal_child (::GtkBuildable* buildable, ::GtkBuilder* builder, const char* childname);
virtual GObject::Object get_internal_child_ (Gtk::Builder builder, const std::string & childname) noexcept = 0;

// const gchar* Buildable::get_name (GtkBuildable* buildable);
// const char* Buildable::get_name (::GtkBuildable* buildable);
// SKIP; invalid callback return transfer none

// void Buildable::parser_finished (GtkBuildable* buildable, GtkBuilder* builder);
// void Buildable::parser_finished (::GtkBuildable* buildable, ::GtkBuilder* builder);
virtual void parser_finished_ (Gtk::Builder builder) noexcept = 0;

// void Buildable::set_buildable_property (GtkBuildable* buildable, GtkBuilder* builder, const gchar* name, const GValue* value);
// void Buildable::set_buildable_property (::GtkBuildable* buildable, ::GtkBuilder* builder, const char* name, const ::GValue* value);
virtual void set_buildable_property_ (Gtk::Builder builder, const std::string & name, const GObject::Value & value) noexcept = 0;

// void Buildable::set_name (GtkBuildable* buildable, const gchar* name);
// void Buildable::set_name (::GtkBuildable* buildable, const char* name);
virtual void set_name_ (const std::string & name) noexcept = 0;


};

using BuildableImpl = detail::InterfaceImpl<BuildableIfaceDef>;

class BuildableIfaceClassImpl: public detail::InterfaceClassImpl<BuildableImpl>
{
typedef BuildableIfaceClassImpl self;
typedef detail::InterfaceClassImpl<BuildableImpl> super;

protected:
using super::super;

// void Buildable::add_child (GtkBuildable* buildable, GtkBuilder* builder, GObject* child, const gchar* type);
// void Buildable::add_child (::GtkBuildable* buildable, ::GtkBuilder* builder, ::GObject* child, const char* type);
GI_INLINE_DECL void add_child_ (Gtk::Builder builder, GObject::Object child, const std::string & type) noexcept override;

// GObject* Buildable::construct_child (GtkBuildable* buildable, GtkBuilder* builder, const gchar* name);
// ::GObject* Buildable::construct_child (::GtkBuildable* buildable, ::GtkBuilder* builder, const char* name);
GI_INLINE_DECL GObject::Object construct_child_ (Gtk::Builder builder, const std::string & name) noexcept override;

// void Buildable::custom_finished (GtkBuildable* buildable, GtkBuilder* builder, GObject* child, const gchar* tagname, gpointer data);
// void Buildable::custom_finished (::GtkBuildable* buildable, ::GtkBuilder* builder, ::GObject* child, const char* tagname, void* data);
GI_INLINE_DECL void custom_finished_ (Gtk::Builder builder, GObject::Object child, const std::string & tagname, void* data) noexcept override;

// void Buildable::custom_tag_end (GtkBuildable* buildable, GtkBuilder* builder, GObject* child, const gchar* tagname, gpointer* data);
// void Buildable::custom_tag_end (::GtkBuildable* buildable, ::GtkBuilder* builder, ::GObject* child, const char* tagname, void* data);
// SKIP; inconsistent in data pointer depth (2 vs 1)

// gboolean Buildable::custom_tag_start (GtkBuildable* buildable, GtkBuilder* builder, GObject* child, const gchar* tagname, GMarkupParser* parser, gpointer* data);
// gboolean Buildable::custom_tag_start (::GtkBuildable* buildable, ::GtkBuilder* builder, ::GObject* child, const char* tagname, ::GMarkupParser* parser, void** data);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// GObject* Buildable::get_internal_child (GtkBuildable* buildable, GtkBuilder* builder, const gchar* childname);
// ::GObject* Buildable::get_internal_child (::GtkBuildable* buildable, ::GtkBuilder* builder, const char* childname);
GI_INLINE_DECL GObject::Object get_internal_child_ (Gtk::Builder builder, const std::string & childname) noexcept override;

// const gchar* Buildable::get_name (GtkBuildable* buildable);
// const char* Buildable::get_name (::GtkBuildable* buildable);
// SKIP; invalid callback return transfer none

// void Buildable::parser_finished (GtkBuildable* buildable, GtkBuilder* builder);
// void Buildable::parser_finished (::GtkBuildable* buildable, ::GtkBuilder* builder);
GI_INLINE_DECL void parser_finished_ (Gtk::Builder builder) noexcept override;

// void Buildable::set_buildable_property (GtkBuildable* buildable, GtkBuilder* builder, const gchar* name, const GValue* value);
// void Buildable::set_buildable_property (::GtkBuildable* buildable, ::GtkBuilder* builder, const char* name, const ::GValue* value);
GI_INLINE_DECL void set_buildable_property_ (Gtk::Builder builder, const std::string & name, const GObject::Value & value) noexcept override;

// void Buildable::set_name (GtkBuildable* buildable, const gchar* name);
// void Buildable::set_name (::GtkBuildable* buildable, const char* name);
GI_INLINE_DECL void set_name_ (const std::string & name) noexcept override;


};

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
