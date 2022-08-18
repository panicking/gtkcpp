// AUTO-GENERATED

#ifndef _GI_GTK_CSSPROVIDER_HPP_
#define _GI_GTK_CSSPROVIDER_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class CssSection;
class StyleProvider;

class CssProvider;

namespace base {


#define GI_GTK_CSSPROVIDER_BASE base::CssProviderBase
class CssProviderBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkCssProvider BaseObjectType;

CssProviderBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_css_provider_get_type(); } 

GI_INLINE_DECL Gtk::StyleProvider interface_ (gi::interface_tag<Gtk::StyleProvider>);

GI_INLINE_DECL operator Gtk::StyleProvider ();

// GtkCssProvider* gtk_css_provider_new ();
// ::GtkCssProvider* gtk_css_provider_new ();
static GI_INLINE_DECL Gtk::CssProvider new_ () noexcept;

// GtkCssProvider* gtk_css_provider_get_default ();
// ::GtkCssProvider* gtk_css_provider_get_default ();
// IGNORE; deprecated

// GtkCssProvider* gtk_css_provider_get_named (const gchar* name, const gchar* variant);
// ::GtkCssProvider* gtk_css_provider_get_named (const char* name, const char* variant);
static GI_INLINE_DECL Gtk::CssProvider get_named (const std::string & name, const std::string & variant) noexcept;
static GI_INLINE_DECL Gtk::CssProvider get_named (const std::string & name) noexcept;

// gboolean gtk_css_provider_load_from_data (GtkCssProvider* css_provider, const gchar* data, gssize length, GError ** error);
// gboolean gtk_css_provider_load_from_data (::GtkCssProvider* css_provider, const guint8* data, gssize length, GError ** error);
GI_INLINE_DECL bool load_from_data (guint8 * data, gssize length);
GI_INLINE_DECL bool load_from_data (guint8 * data, gssize length, GLib::Error * _error) noexcept;

// gboolean gtk_css_provider_load_from_file (GtkCssProvider* css_provider, GFile* file, GError ** error);
// gboolean gtk_css_provider_load_from_file (::GtkCssProvider* css_provider, ::GFile* file, GError ** error);
GI_INLINE_DECL bool load_from_file (Gio::File file);
GI_INLINE_DECL bool load_from_file (Gio::File file, GLib::Error * _error) noexcept;

// gboolean gtk_css_provider_load_from_path (GtkCssProvider* css_provider, const gchar* path, GError ** error);
// gboolean gtk_css_provider_load_from_path (::GtkCssProvider* css_provider, const char* path, GError ** error);
GI_INLINE_DECL bool load_from_path (const std::string & path);
GI_INLINE_DECL bool load_from_path (const std::string & path, GLib::Error * _error) noexcept;

// void gtk_css_provider_load_from_resource (GtkCssProvider* css_provider, const gchar* resource_path);
// void gtk_css_provider_load_from_resource (::GtkCssProvider* css_provider, const char* resource_path);
GI_INLINE_DECL void load_from_resource (const std::string & resource_path) noexcept;

// char* gtk_css_provider_to_string (GtkCssProvider* provider);
// char* gtk_css_provider_to_string (::GtkCssProvider* provider);
GI_INLINE_DECL std::string to_string () noexcept;

// signal parsing-error
gi::signal_proxy<void(Gtk::CssProvider, Gtk::CssSection section, GLib::Error error)> signal_parsing_error()
{ return gi::signal_proxy<void(Gtk::CssProvider, Gtk::CssSection section, GLib::Error error)> (*this, "parsing-error"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/cssprovider_extra_def.hpp>)
#include <gtk/cssprovider_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/cssprovider_extra.hpp>)
#include <gtk/cssprovider_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class CssProvider : public GI_GTK_CSSPROVIDER_BASE
{ typedef GI_GTK_CSSPROVIDER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkCssProvider>
{ typedef Gtk::CssProvider type; }; 

} // namespace repository

} // namespace gi

#include "styleprovider.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class CssProviderClassDef
{
typedef CssProviderClassDef self;
public:
typedef Gtk::CssProvider instance_type;
typedef ::GtkCssProviderClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void CssProvider::parsing_error (GtkCssProvider* provider, GtkCssSection* section, const GError* error);
// void CssProvider::parsing_error (::GtkCssProvider* provider, ::GtkCssSection* section, const ::GError* error);
virtual void parsing_error_ (Gtk::CssSection section, const GLib::Error & error) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class CssProviderClass: public detail::ClassTemplate<Gtk::impl::internal::CssProviderClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::StyleProviderIfaceClassImpl>
{
typedef CssProviderClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::CssProviderClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::StyleProviderIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::StyleProviderIfaceClassImpl GtkStyleProviderIface_type;


// void CssProvider::parsing_error (GtkCssProvider* provider, GtkCssSection* section, const GError* error);
// void CssProvider::parsing_error (::GtkCssProvider* provider, ::GtkCssSection* section, const ::GError* error);
GI_INLINE_DECL void parsing_error_ (Gtk::CssSection section, const GLib::Error & error) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using CssProviderImpl = detail::ObjectImpl<CssProvider, internal::CssProviderClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
