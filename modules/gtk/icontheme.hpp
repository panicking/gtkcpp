// AUTO-GENERATED

#ifndef _GI_GTK_ICONTHEME_HPP_
#define _GI_GTK_ICONTHEME_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class IconInfo;

class IconTheme;

namespace base {


#define GI_GTK_ICONTHEME_BASE base::IconThemeBase
class IconThemeBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkIconTheme BaseObjectType;

IconThemeBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_icon_theme_get_type(); } 

// GtkIconTheme* gtk_icon_theme_new ();
// ::GtkIconTheme* gtk_icon_theme_new ();
static GI_INLINE_DECL Gtk::IconTheme new_ () noexcept;

// void gtk_icon_theme_add_builtin_icon (const gchar* icon_name, gint size, GdkPixbuf* pixbuf);
// void gtk_icon_theme_add_builtin_icon (const char* icon_name, gint size, ::GdkPixbuf* pixbuf);
// IGNORE; deprecated

// GtkIconTheme* gtk_icon_theme_get_default ();
// ::GtkIconTheme* gtk_icon_theme_get_default ();
static GI_INLINE_DECL Gtk::IconTheme get_default () noexcept;

// GtkIconTheme* gtk_icon_theme_get_for_screen (GdkScreen* screen);
// ::GtkIconTheme* gtk_icon_theme_get_for_screen (::GdkScreen* screen);
static GI_INLINE_DECL Gtk::IconTheme get_for_screen (Gdk::Screen screen) noexcept;

// void gtk_icon_theme_add_resource_path (GtkIconTheme* icon_theme, const gchar* path);
// void gtk_icon_theme_add_resource_path (::GtkIconTheme* icon_theme, const char* path);
GI_INLINE_DECL void add_resource_path (const std::string & path) noexcept;

// void gtk_icon_theme_append_search_path (GtkIconTheme* icon_theme, const gchar* path);
// void gtk_icon_theme_append_search_path (::GtkIconTheme* icon_theme, const char* path);
GI_INLINE_DECL void append_search_path (const std::string & path) noexcept;

// GtkIconInfo* gtk_icon_theme_choose_icon (GtkIconTheme* icon_theme, const gchar** icon_names, gint size, GtkIconLookupFlags flags);
// ::GtkIconInfo* gtk_icon_theme_choose_icon (::GtkIconTheme* icon_theme, const char** icon_names, gint size, ::GtkIconLookupFlags flags);
GI_INLINE_DECL Gtk::IconInfo choose_icon (const std::vector<std::string> & icon_names, gint size, Gtk::IconLookupFlags flags) noexcept;

// GtkIconInfo* gtk_icon_theme_choose_icon_for_scale (GtkIconTheme* icon_theme, const gchar** icon_names, gint size, gint scale, GtkIconLookupFlags flags);
// ::GtkIconInfo* gtk_icon_theme_choose_icon_for_scale (::GtkIconTheme* icon_theme, const char** icon_names, gint size, gint scale, ::GtkIconLookupFlags flags);
GI_INLINE_DECL Gtk::IconInfo choose_icon_for_scale (const std::vector<std::string> & icon_names, gint size, gint scale, Gtk::IconLookupFlags flags) noexcept;

// char* gtk_icon_theme_get_example_icon_name (GtkIconTheme* icon_theme);
// char* gtk_icon_theme_get_example_icon_name (::GtkIconTheme* icon_theme);
GI_INLINE_DECL std::string get_example_icon_name () noexcept;

// gint* gtk_icon_theme_get_icon_sizes (GtkIconTheme* icon_theme, const gchar* icon_name);
// gint* gtk_icon_theme_get_icon_sizes (::GtkIconTheme* icon_theme, const char* icon_name);
GI_INLINE_DECL std::vector<gint> get_icon_sizes (const std::string & icon_name) noexcept;

// void gtk_icon_theme_get_search_path (GtkIconTheme* icon_theme, gchar*** path, gint* n_elements);
// void gtk_icon_theme_get_search_path (::GtkIconTheme* icon_theme, char*** path, gint* n_elements);
GI_INLINE_DECL void get_search_path (std::vector<std::string> & path) noexcept;

// gboolean gtk_icon_theme_has_icon (GtkIconTheme* icon_theme, const gchar* icon_name);
// gboolean gtk_icon_theme_has_icon (::GtkIconTheme* icon_theme, const char* icon_name);
GI_INLINE_DECL bool has_icon (const std::string & icon_name) noexcept;

// GList* gtk_icon_theme_list_contexts (GtkIconTheme* icon_theme);
// ::GList* gtk_icon_theme_list_contexts (::GtkIconTheme* icon_theme);
GI_INLINE_DECL std::vector<std::string> list_contexts () noexcept;

// GList* gtk_icon_theme_list_icons (GtkIconTheme* icon_theme, const gchar* context);
// ::GList* gtk_icon_theme_list_icons (::GtkIconTheme* icon_theme, const char* context);
GI_INLINE_DECL std::vector<std::string> list_icons (const std::string & context) noexcept;
GI_INLINE_DECL std::vector<std::string> list_icons () noexcept;

// GdkPixbuf* gtk_icon_theme_load_icon (GtkIconTheme* icon_theme, const gchar* icon_name, gint size, GtkIconLookupFlags flags, GError ** error);
// ::GdkPixbuf* gtk_icon_theme_load_icon (::GtkIconTheme* icon_theme, const char* icon_name, gint size, ::GtkIconLookupFlags flags, GError ** error);
GI_INLINE_DECL GdkPixbuf::Pixbuf load_icon (const std::string & icon_name, gint size, Gtk::IconLookupFlags flags);
GI_INLINE_DECL GdkPixbuf::Pixbuf load_icon (const std::string & icon_name, gint size, Gtk::IconLookupFlags flags, GLib::Error * _error) noexcept;

// GdkPixbuf* gtk_icon_theme_load_icon_for_scale (GtkIconTheme* icon_theme, const gchar* icon_name, gint size, gint scale, GtkIconLookupFlags flags, GError ** error);
// ::GdkPixbuf* gtk_icon_theme_load_icon_for_scale (::GtkIconTheme* icon_theme, const char* icon_name, gint size, gint scale, ::GtkIconLookupFlags flags, GError ** error);
GI_INLINE_DECL GdkPixbuf::Pixbuf load_icon_for_scale (const std::string & icon_name, gint size, gint scale, Gtk::IconLookupFlags flags);
GI_INLINE_DECL GdkPixbuf::Pixbuf load_icon_for_scale (const std::string & icon_name, gint size, gint scale, Gtk::IconLookupFlags flags, GLib::Error * _error) noexcept;

// cairo_surface_t* gtk_icon_theme_load_surface (GtkIconTheme* icon_theme, const gchar* icon_name, gint size, gint scale, GdkWindow* for_window, GtkIconLookupFlags flags, GError ** error);
// ::cairo_surface_t* gtk_icon_theme_load_surface (::GtkIconTheme* icon_theme, const char* icon_name, gint size, gint scale, ::GdkWindow* for_window, ::GtkIconLookupFlags flags, GError ** error);
GI_INLINE_DECL cairo::Surface load_surface (const std::string & icon_name, gint size, gint scale, Gdk::Window for_window, Gtk::IconLookupFlags flags);
GI_INLINE_DECL cairo::Surface load_surface (const std::string & icon_name, gint size, gint scale, Gtk::IconLookupFlags flags);
GI_INLINE_DECL cairo::Surface load_surface (const std::string & icon_name, gint size, gint scale, Gdk::Window for_window, Gtk::IconLookupFlags flags, GLib::Error * _error) noexcept;
GI_INLINE_DECL cairo::Surface load_surface (const std::string & icon_name, gint size, gint scale, Gtk::IconLookupFlags flags, GLib::Error * _error) noexcept;

// GtkIconInfo* gtk_icon_theme_lookup_by_gicon (GtkIconTheme* icon_theme, GIcon* icon, gint size, GtkIconLookupFlags flags);
// ::GtkIconInfo* gtk_icon_theme_lookup_by_gicon (::GtkIconTheme* icon_theme, ::GIcon* icon, gint size, ::GtkIconLookupFlags flags);
GI_INLINE_DECL Gtk::IconInfo lookup_by_gicon (Gio::Icon icon, gint size, Gtk::IconLookupFlags flags) noexcept;

// GtkIconInfo* gtk_icon_theme_lookup_by_gicon_for_scale (GtkIconTheme* icon_theme, GIcon* icon, gint size, gint scale, GtkIconLookupFlags flags);
// ::GtkIconInfo* gtk_icon_theme_lookup_by_gicon_for_scale (::GtkIconTheme* icon_theme, ::GIcon* icon, gint size, gint scale, ::GtkIconLookupFlags flags);
GI_INLINE_DECL Gtk::IconInfo lookup_by_gicon_for_scale (Gio::Icon icon, gint size, gint scale, Gtk::IconLookupFlags flags) noexcept;

// GtkIconInfo* gtk_icon_theme_lookup_icon (GtkIconTheme* icon_theme, const gchar* icon_name, gint size, GtkIconLookupFlags flags);
// ::GtkIconInfo* gtk_icon_theme_lookup_icon (::GtkIconTheme* icon_theme, const char* icon_name, gint size, ::GtkIconLookupFlags flags);
GI_INLINE_DECL Gtk::IconInfo lookup_icon (const std::string & icon_name, gint size, Gtk::IconLookupFlags flags) noexcept;

// GtkIconInfo* gtk_icon_theme_lookup_icon_for_scale (GtkIconTheme* icon_theme, const gchar* icon_name, gint size, gint scale, GtkIconLookupFlags flags);
// ::GtkIconInfo* gtk_icon_theme_lookup_icon_for_scale (::GtkIconTheme* icon_theme, const char* icon_name, gint size, gint scale, ::GtkIconLookupFlags flags);
GI_INLINE_DECL Gtk::IconInfo lookup_icon_for_scale (const std::string & icon_name, gint size, gint scale, Gtk::IconLookupFlags flags) noexcept;

// void gtk_icon_theme_prepend_search_path (GtkIconTheme* icon_theme, const gchar* path);
// void gtk_icon_theme_prepend_search_path (::GtkIconTheme* icon_theme, const char* path);
GI_INLINE_DECL void prepend_search_path (const std::string & path) noexcept;

// gboolean gtk_icon_theme_rescan_if_needed (GtkIconTheme* icon_theme);
// gboolean gtk_icon_theme_rescan_if_needed (::GtkIconTheme* icon_theme);
GI_INLINE_DECL bool rescan_if_needed () noexcept;

// void gtk_icon_theme_set_custom_theme (GtkIconTheme* icon_theme, const gchar* theme_name);
// void gtk_icon_theme_set_custom_theme (::GtkIconTheme* icon_theme, const char* theme_name);
GI_INLINE_DECL void set_custom_theme (const std::string & theme_name) noexcept;
GI_INLINE_DECL void set_custom_theme () noexcept;

// void gtk_icon_theme_set_screen (GtkIconTheme* icon_theme, GdkScreen* screen);
// void gtk_icon_theme_set_screen (::GtkIconTheme* icon_theme, ::GdkScreen* screen);
GI_INLINE_DECL void set_screen (Gdk::Screen screen) noexcept;

// void gtk_icon_theme_set_search_path (GtkIconTheme* icon_theme, const gchar** path, gint n_elements);
// void gtk_icon_theme_set_search_path (::GtkIconTheme* icon_theme, const char** path, gint n_elements);
GI_INLINE_DECL void set_search_path (std::string * path, gint n_elements) noexcept;

// signal changed
gi::signal_proxy<void(Gtk::IconTheme)> signal_changed()
{ return gi::signal_proxy<void(Gtk::IconTheme)> (*this, "changed"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/icontheme_extra_def.hpp>)
#include <gtk/icontheme_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/icontheme_extra.hpp>)
#include <gtk/icontheme_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class IconTheme : public GI_GTK_ICONTHEME_BASE
{ typedef GI_GTK_ICONTHEME_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkIconTheme>
{ typedef Gtk::IconTheme type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class IconThemeClassDef
{
typedef IconThemeClassDef self;
public:
typedef Gtk::IconTheme instance_type;
typedef ::GtkIconThemeClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void IconTheme::changed (GtkIconTheme* icon_theme);
// void IconTheme::changed (::GtkIconTheme* icon_theme);
virtual void changed_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class IconThemeClass: public detail::ClassTemplate<Gtk::impl::internal::IconThemeClassDef, GObject::impl::internal::ObjectClass>
{
typedef IconThemeClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::IconThemeClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void IconTheme::changed (GtkIconTheme* icon_theme);
// void IconTheme::changed (::GtkIconTheme* icon_theme);
GI_INLINE_DECL void changed_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using IconThemeImpl = detail::ObjectImpl<IconTheme, internal::IconThemeClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
