// AUTO-GENERATED

#ifndef _GI_GTK_ICONSET_HPP_
#define _GI_GTK_ICONSET_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class IconSource;
class Style;
class StyleContext;
class Widget;

class IconSet;

namespace base {


#define GI_GTK_ICONSET_BASE base::IconSetBase
class IconSetBase : public gi::detail::GBoxedWrapper<IconSetBase, ::GtkIconSet>
{
typedef gi::detail::GBoxedWrapper<IconSetBase, ::GtkIconSet> super_type;
public:

IconSetBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gtk_icon_set_get_type(); } 

// GtkIconSet* gtk_icon_set_new ();
// ::GtkIconSet* gtk_icon_set_new ();
// IGNORE; deprecated

// GtkIconSet* gtk_icon_set_new_from_pixbuf (GdkPixbuf* pixbuf);
// ::GtkIconSet* gtk_icon_set_new_from_pixbuf (::GdkPixbuf* pixbuf);
// IGNORE; deprecated

// void gtk_icon_set_add_source (GtkIconSet* icon_set, const GtkIconSource* source);
// void gtk_icon_set_add_source (::GtkIconSet* icon_set, const ::GtkIconSource* source);
// IGNORE; deprecated

// GtkIconSet* gtk_icon_set_copy (GtkIconSet* icon_set);
// ::GtkIconSet* gtk_icon_set_copy (::GtkIconSet* icon_set);
// IGNORE; deprecated

// void gtk_icon_set_get_sizes (GtkIconSet* icon_set, GtkIconSize** sizes, gint* n_sizes);
// void gtk_icon_set_get_sizes (::GtkIconSet* icon_set, gint** sizes, gint* n_sizes);
// IGNORE; deprecated

// GtkIconSet* gtk_icon_set_ref (GtkIconSet* icon_set);
// ::GtkIconSet* gtk_icon_set_ref (::GtkIconSet* icon_set);
// IGNORE; marked ignore

// GdkPixbuf* gtk_icon_set_render_icon (GtkIconSet* icon_set, GtkStyle* style, GtkTextDirection direction, GtkStateType state, GtkIconSize size, GtkWidget* widget, const gchar* detail);
// ::GdkPixbuf* gtk_icon_set_render_icon (::GtkIconSet* icon_set, ::GtkStyle* style, ::GtkTextDirection direction,  state, gint size, ::GtkWidget* widget, const char* detail);
// IGNORE; deprecated

// GdkPixbuf* gtk_icon_set_render_icon_pixbuf (GtkIconSet* icon_set, GtkStyleContext* context, GtkIconSize size);
// ::GdkPixbuf* gtk_icon_set_render_icon_pixbuf (::GtkIconSet* icon_set, ::GtkStyleContext* context, gint size);
// IGNORE; deprecated

// cairo_surface_t* gtk_icon_set_render_icon_surface (GtkIconSet* icon_set, GtkStyleContext* context, GtkIconSize size, int scale, GdkWindow* for_window);
// ::cairo_surface_t* gtk_icon_set_render_icon_surface (::GtkIconSet* icon_set, ::GtkStyleContext* context, gint size, gint scale, ::GdkWindow* for_window);
// IGNORE; deprecated

// void gtk_icon_set_unref (GtkIconSet* icon_set);
// void gtk_icon_set_unref (::GtkIconSet* icon_set);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/iconset_extra_def.hpp>)
#include <gtk/iconset_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/iconset_extra.hpp>)
#include <gtk/iconset_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class IconSet : public GI_GTK_ICONSET_BASE
{ typedef GI_GTK_ICONSET_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkIconSet>
{ typedef Gtk::IconSet type; }; 

} // namespace repository

} // namespace gi

#endif
