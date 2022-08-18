// AUTO-GENERATED

#ifndef _GI_GTK_WIDGETPATH_HPP_
#define _GI_GTK_WIDGETPATH_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class WidgetPath;

namespace base {


#define GI_GTK_WIDGETPATH_BASE base::WidgetPathBase
class WidgetPathBase : public gi::detail::GBoxedWrapper<WidgetPathBase, ::GtkWidgetPath>
{
typedef gi::detail::GBoxedWrapper<WidgetPathBase, ::GtkWidgetPath> super_type;
public:

WidgetPathBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gtk_widget_path_get_type(); } 

// GtkWidgetPath* gtk_widget_path_new ();
// ::GtkWidgetPath* gtk_widget_path_new ();
static GI_INLINE_DECL Gtk::WidgetPath new_ () noexcept;

// gint gtk_widget_path_append_for_widget (GtkWidgetPath* path, GtkWidget* widget);
// gint gtk_widget_path_append_for_widget (::GtkWidgetPath* path, ::GtkWidget* widget);
GI_INLINE_DECL gint append_for_widget (Gtk::Widget widget) noexcept;

// gint gtk_widget_path_append_type (GtkWidgetPath* path, GType type);
// gint gtk_widget_path_append_type (::GtkWidgetPath* path, GType type);
GI_INLINE_DECL gint append_type (GType type) noexcept;

// gint gtk_widget_path_append_with_siblings (GtkWidgetPath* path, GtkWidgetPath* siblings, guint sibling_index);
// gint gtk_widget_path_append_with_siblings (::GtkWidgetPath* path, ::GtkWidgetPath* siblings, guint sibling_index);
GI_INLINE_DECL gint append_with_siblings (Gtk::WidgetPath siblings, guint sibling_index) noexcept;

// GtkWidgetPath* gtk_widget_path_copy (const GtkWidgetPath* path);
// ::GtkWidgetPath* gtk_widget_path_copy (const ::GtkWidgetPath* path);
GI_INLINE_DECL Gtk::WidgetPath copy () const noexcept;

// void gtk_widget_path_free (GtkWidgetPath* path);
// void gtk_widget_path_free (::GtkWidgetPath* path);
// IGNORE; marked ignore

// GType gtk_widget_path_get_object_type (const GtkWidgetPath* path);
// GType gtk_widget_path_get_object_type (const ::GtkWidgetPath* path);
GI_INLINE_DECL GType get_object_type () const noexcept;

// gboolean gtk_widget_path_has_parent (const GtkWidgetPath* path, GType type);
// gboolean gtk_widget_path_has_parent (const ::GtkWidgetPath* path, GType type);
GI_INLINE_DECL bool has_parent (GType type) const noexcept;

// gboolean gtk_widget_path_is_type (const GtkWidgetPath* path, GType type);
// gboolean gtk_widget_path_is_type (const ::GtkWidgetPath* path, GType type);
GI_INLINE_DECL bool is_type (GType type) const noexcept;

// void gtk_widget_path_iter_add_class (GtkWidgetPath* path, gint pos, const gchar* name);
// void gtk_widget_path_iter_add_class (::GtkWidgetPath* path, gint pos, const char* name);
GI_INLINE_DECL void iter_add_class (gint pos, const std::string & name) noexcept;

// void gtk_widget_path_iter_add_region (GtkWidgetPath* path, gint pos, const gchar* name, GtkRegionFlags flags);
// void gtk_widget_path_iter_add_region (::GtkWidgetPath* path, gint pos, const char* name, ::GtkRegionFlags flags);
// IGNORE; deprecated

// void gtk_widget_path_iter_clear_classes (GtkWidgetPath* path, gint pos);
// void gtk_widget_path_iter_clear_classes (::GtkWidgetPath* path, gint pos);
GI_INLINE_DECL void iter_clear_classes (gint pos) noexcept;

// void gtk_widget_path_iter_clear_regions (GtkWidgetPath* path, gint pos);
// void gtk_widget_path_iter_clear_regions (::GtkWidgetPath* path, gint pos);
// IGNORE; deprecated

// const gchar* gtk_widget_path_iter_get_name (const GtkWidgetPath* path, gint pos);
// const char* gtk_widget_path_iter_get_name (const ::GtkWidgetPath* path, gint pos);
GI_INLINE_DECL std::string iter_get_name (gint pos) const noexcept;

// const char* gtk_widget_path_iter_get_object_name (const GtkWidgetPath* path, gint pos);
// const char* gtk_widget_path_iter_get_object_name (const ::GtkWidgetPath* path, gint pos);
GI_INLINE_DECL std::string iter_get_object_name (gint pos) const noexcept;

// GType gtk_widget_path_iter_get_object_type (const GtkWidgetPath* path, gint pos);
// GType gtk_widget_path_iter_get_object_type (const ::GtkWidgetPath* path, gint pos);
GI_INLINE_DECL GType iter_get_object_type (gint pos) const noexcept;

// guint gtk_widget_path_iter_get_sibling_index (const GtkWidgetPath* path, gint pos);
// guint gtk_widget_path_iter_get_sibling_index (const ::GtkWidgetPath* path, gint pos);
GI_INLINE_DECL guint iter_get_sibling_index (gint pos) const noexcept;

// const GtkWidgetPath* gtk_widget_path_iter_get_siblings (const GtkWidgetPath* path, gint pos);
// const ::GtkWidgetPath* gtk_widget_path_iter_get_siblings (const ::GtkWidgetPath* path, gint pos);
GI_INLINE_DECL Gtk::WidgetPath iter_get_siblings (gint pos) const noexcept;

// GtkStateFlags gtk_widget_path_iter_get_state (const GtkWidgetPath* path, gint pos);
// ::GtkStateFlags gtk_widget_path_iter_get_state (const ::GtkWidgetPath* path, gint pos);
GI_INLINE_DECL Gtk::StateFlags iter_get_state (gint pos) const noexcept;

// gboolean gtk_widget_path_iter_has_class (const GtkWidgetPath* path, gint pos, const gchar* name);
// gboolean gtk_widget_path_iter_has_class (const ::GtkWidgetPath* path, gint pos, const char* name);
GI_INLINE_DECL bool iter_has_class (gint pos, const std::string & name) const noexcept;

// gboolean gtk_widget_path_iter_has_name (const GtkWidgetPath* path, gint pos, const gchar* name);
// gboolean gtk_widget_path_iter_has_name (const ::GtkWidgetPath* path, gint pos, const char* name);
GI_INLINE_DECL bool iter_has_name (gint pos, const std::string & name) const noexcept;

// gboolean gtk_widget_path_iter_has_qclass (const GtkWidgetPath* path, gint pos, GQuark qname);
// gboolean gtk_widget_path_iter_has_qclass (const ::GtkWidgetPath* path, gint pos, ::GQuark qname);
GI_INLINE_DECL bool iter_has_qclass (gint pos, ::GQuark qname) const noexcept;

// gboolean gtk_widget_path_iter_has_qname (const GtkWidgetPath* path, gint pos, GQuark qname);
// gboolean gtk_widget_path_iter_has_qname (const ::GtkWidgetPath* path, gint pos, ::GQuark qname);
GI_INLINE_DECL bool iter_has_qname (gint pos, ::GQuark qname) const noexcept;

// gboolean gtk_widget_path_iter_has_qregion (const GtkWidgetPath* path, gint pos, GQuark qname, GtkRegionFlags* flags);
// gboolean gtk_widget_path_iter_has_qregion (const ::GtkWidgetPath* path, gint pos, ::GQuark qname, ::GtkRegionFlags* flags);
// IGNORE; deprecated

// gboolean gtk_widget_path_iter_has_region (const GtkWidgetPath* path, gint pos, const gchar* name, GtkRegionFlags* flags);
// gboolean gtk_widget_path_iter_has_region (const ::GtkWidgetPath* path, gint pos, const char* name, ::GtkRegionFlags* flags);
// IGNORE; deprecated

// GSList* gtk_widget_path_iter_list_classes (const GtkWidgetPath* path, gint pos);
// ::GSList* gtk_widget_path_iter_list_classes (const ::GtkWidgetPath* path, gint pos);
GI_INLINE_DECL std::vector<std::string> iter_list_classes (gint pos) const noexcept;

// GSList* gtk_widget_path_iter_list_regions (const GtkWidgetPath* path, gint pos);
// ::GSList* gtk_widget_path_iter_list_regions (const ::GtkWidgetPath* path, gint pos);
// IGNORE; deprecated

// void gtk_widget_path_iter_remove_class (GtkWidgetPath* path, gint pos, const gchar* name);
// void gtk_widget_path_iter_remove_class (::GtkWidgetPath* path, gint pos, const char* name);
GI_INLINE_DECL void iter_remove_class (gint pos, const std::string & name) noexcept;

// void gtk_widget_path_iter_remove_region (GtkWidgetPath* path, gint pos, const gchar* name);
// void gtk_widget_path_iter_remove_region (::GtkWidgetPath* path, gint pos, const char* name);
// IGNORE; deprecated

// void gtk_widget_path_iter_set_name (GtkWidgetPath* path, gint pos, const gchar* name);
// void gtk_widget_path_iter_set_name (::GtkWidgetPath* path, gint pos, const char* name);
GI_INLINE_DECL void iter_set_name (gint pos, const std::string & name) noexcept;

// void gtk_widget_path_iter_set_object_name (GtkWidgetPath* path, gint pos, const char* name);
// void gtk_widget_path_iter_set_object_name (::GtkWidgetPath* path, gint pos, const char* name);
GI_INLINE_DECL void iter_set_object_name (gint pos, const std::string & name) noexcept;
GI_INLINE_DECL void iter_set_object_name (gint pos) noexcept;

// void gtk_widget_path_iter_set_object_type (GtkWidgetPath* path, gint pos, GType type);
// void gtk_widget_path_iter_set_object_type (::GtkWidgetPath* path, gint pos, GType type);
GI_INLINE_DECL void iter_set_object_type (gint pos, GType type) noexcept;

// void gtk_widget_path_iter_set_state (GtkWidgetPath* path, gint pos, GtkStateFlags state);
// void gtk_widget_path_iter_set_state (::GtkWidgetPath* path, gint pos, ::GtkStateFlags state);
GI_INLINE_DECL void iter_set_state (gint pos, Gtk::StateFlags state) noexcept;

// gint gtk_widget_path_length (const GtkWidgetPath* path);
// gint gtk_widget_path_length (const ::GtkWidgetPath* path);
GI_INLINE_DECL gint length () const noexcept;

// void gtk_widget_path_prepend_type (GtkWidgetPath* path, GType type);
// void gtk_widget_path_prepend_type (::GtkWidgetPath* path, GType type);
GI_INLINE_DECL void prepend_type (GType type) noexcept;

// GtkWidgetPath* gtk_widget_path_ref (GtkWidgetPath* path);
// ::GtkWidgetPath* gtk_widget_path_ref (::GtkWidgetPath* path);
// IGNORE; marked ignore

// char* gtk_widget_path_to_string (const GtkWidgetPath* path);
// char* gtk_widget_path_to_string (const ::GtkWidgetPath* path);
GI_INLINE_DECL std::string to_string () const noexcept;

// void gtk_widget_path_unref (GtkWidgetPath* path);
// void gtk_widget_path_unref (::GtkWidgetPath* path);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/widgetpath_extra_def.hpp>)
#include <gtk/widgetpath_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/widgetpath_extra.hpp>)
#include <gtk/widgetpath_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class WidgetPath : public GI_GTK_WIDGETPATH_BASE
{ typedef GI_GTK_WIDGETPATH_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkWidgetPath>
{ typedef Gtk::WidgetPath type; }; 

} // namespace repository

} // namespace gi

#endif
