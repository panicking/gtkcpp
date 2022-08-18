// AUTO-GENERATED

#ifndef _GI_GTK_ICONSOURCE_HPP_
#define _GI_GTK_ICONSOURCE_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class IconSource;

namespace base {


#define GI_GTK_ICONSOURCE_BASE base::IconSourceBase
class IconSourceBase : public gi::detail::GBoxedWrapper<IconSourceBase, ::GtkIconSource>
{
typedef gi::detail::GBoxedWrapper<IconSourceBase, ::GtkIconSource> super_type;
public:

IconSourceBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gtk_icon_source_get_type(); } 

// GtkIconSource* gtk_icon_source_new ();
// ::GtkIconSource* gtk_icon_source_new ();
// IGNORE; deprecated

// GtkIconSource* gtk_icon_source_copy (const GtkIconSource* source);
// ::GtkIconSource* gtk_icon_source_copy (const ::GtkIconSource* source);
// IGNORE; deprecated

// void gtk_icon_source_free (GtkIconSource* source);
// void gtk_icon_source_free (::GtkIconSource* source);
// IGNORE; marked ignore

// GtkTextDirection gtk_icon_source_get_direction (const GtkIconSource* source);
// ::GtkTextDirection gtk_icon_source_get_direction (const ::GtkIconSource* source);
// IGNORE; deprecated

// gboolean gtk_icon_source_get_direction_wildcarded (const GtkIconSource* source);
// gboolean gtk_icon_source_get_direction_wildcarded (const ::GtkIconSource* source);
// IGNORE; deprecated

// const gchar* gtk_icon_source_get_filename (const GtkIconSource* source);
// const char* gtk_icon_source_get_filename (const ::GtkIconSource* source);
// IGNORE; deprecated

// const gchar* gtk_icon_source_get_icon_name (const GtkIconSource* source);
// const char* gtk_icon_source_get_icon_name (const ::GtkIconSource* source);
// IGNORE; deprecated

// GdkPixbuf* gtk_icon_source_get_pixbuf (const GtkIconSource* source);
// ::GdkPixbuf* gtk_icon_source_get_pixbuf (const ::GtkIconSource* source);
// IGNORE; deprecated

// GtkIconSize gtk_icon_source_get_size (const GtkIconSource* source);
// gint gtk_icon_source_get_size (const ::GtkIconSource* source);
// IGNORE; deprecated

// gboolean gtk_icon_source_get_size_wildcarded (const GtkIconSource* source);
// gboolean gtk_icon_source_get_size_wildcarded (const ::GtkIconSource* source);
// IGNORE; deprecated

// GtkStateType gtk_icon_source_get_state (const GtkIconSource* source);
//  gtk_icon_source_get_state (const ::GtkIconSource* source);
// IGNORE; deprecated

// gboolean gtk_icon_source_get_state_wildcarded (const GtkIconSource* source);
// gboolean gtk_icon_source_get_state_wildcarded (const ::GtkIconSource* source);
// IGNORE; deprecated

// void gtk_icon_source_set_direction (GtkIconSource* source, GtkTextDirection direction);
// void gtk_icon_source_set_direction (::GtkIconSource* source, ::GtkTextDirection direction);
// IGNORE; deprecated

// void gtk_icon_source_set_direction_wildcarded (GtkIconSource* source, gboolean setting);
// void gtk_icon_source_set_direction_wildcarded (::GtkIconSource* source, gboolean setting);
// IGNORE; deprecated

// void gtk_icon_source_set_filename (GtkIconSource* source, const gchar* filename);
// void gtk_icon_source_set_filename (::GtkIconSource* source, const char* filename);
// IGNORE; deprecated

// void gtk_icon_source_set_icon_name (GtkIconSource* source, const gchar* icon_name);
// void gtk_icon_source_set_icon_name (::GtkIconSource* source, const char* icon_name);
// IGNORE; deprecated

// void gtk_icon_source_set_pixbuf (GtkIconSource* source, GdkPixbuf* pixbuf);
// void gtk_icon_source_set_pixbuf (::GtkIconSource* source, ::GdkPixbuf* pixbuf);
// IGNORE; deprecated

// void gtk_icon_source_set_size (GtkIconSource* source, GtkIconSize size);
// void gtk_icon_source_set_size (::GtkIconSource* source, gint size);
// IGNORE; deprecated

// void gtk_icon_source_set_size_wildcarded (GtkIconSource* source, gboolean setting);
// void gtk_icon_source_set_size_wildcarded (::GtkIconSource* source, gboolean setting);
// IGNORE; deprecated

// void gtk_icon_source_set_state (GtkIconSource* source, GtkStateType state);
// void gtk_icon_source_set_state (::GtkIconSource* source,  state);
// IGNORE; deprecated

// void gtk_icon_source_set_state_wildcarded (GtkIconSource* source, gboolean setting);
// void gtk_icon_source_set_state_wildcarded (::GtkIconSource* source, gboolean setting);
// IGNORE; deprecated

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/iconsource_extra_def.hpp>)
#include <gtk/iconsource_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/iconsource_extra.hpp>)
#include <gtk/iconsource_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class IconSource : public GI_GTK_ICONSOURCE_BASE
{ typedef GI_GTK_ICONSOURCE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkIconSource>
{ typedef Gtk::IconSource type; }; 

} // namespace repository

} // namespace gi

#endif
