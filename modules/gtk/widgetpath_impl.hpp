// AUTO-GENERATED

#ifndef _GI_GTK_WIDGETPATH_IMPL_HPP_
#define _GI_GTK_WIDGETPATH_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidgetPath* gtk_widget_path_new ();
// ::GtkWidgetPath* gtk_widget_path_new ();
Gtk::WidgetPath base::WidgetPathBase::new_ () noexcept
{
  typedef ::GtkWidgetPath* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_path_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gint gtk_widget_path_append_for_widget (GtkWidgetPath* path, GtkWidget* widget);
// gint gtk_widget_path_append_for_widget (::GtkWidgetPath* path, ::GtkWidget* widget);
gint base::WidgetPathBase::append_for_widget (Gtk::Widget widget) noexcept
{
  typedef gint (*call_wrap_t) (::GtkWidgetPath* path, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_path_append_for_widget;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidgetPath*) (gobj_()), (::GtkWidget*) (widget_to_c));
  return _temp_ret;
}

// gint gtk_widget_path_append_type (GtkWidgetPath* path, GType type);
// gint gtk_widget_path_append_type (::GtkWidgetPath* path, GType type);
gint base::WidgetPathBase::append_type (GType type) noexcept
{
  typedef gint (*call_wrap_t) (::GtkWidgetPath* path, GType type);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_path_append_type;
  auto type_to_c = type;
  auto _temp_ret = call_wrap_v ((::GtkWidgetPath*) (gobj_()), (GType) (type_to_c));
  return _temp_ret;
}

// gint gtk_widget_path_append_with_siblings (GtkWidgetPath* path, GtkWidgetPath* siblings, guint sibling_index);
// gint gtk_widget_path_append_with_siblings (::GtkWidgetPath* path, ::GtkWidgetPath* siblings, guint sibling_index);
gint base::WidgetPathBase::append_with_siblings (Gtk::WidgetPath siblings, guint sibling_index) noexcept
{
  typedef gint (*call_wrap_t) (::GtkWidgetPath* path, ::GtkWidgetPath* siblings, guint sibling_index);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_path_append_with_siblings;
  auto sibling_index_to_c = sibling_index;
  auto siblings_to_c = gi::unwrap (siblings, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidgetPath*) (gobj_()), (::GtkWidgetPath*) (siblings_to_c), (guint) (sibling_index_to_c));
  return _temp_ret;
}

// GtkWidgetPath* gtk_widget_path_copy (const GtkWidgetPath* path);
// ::GtkWidgetPath* gtk_widget_path_copy (const ::GtkWidgetPath* path);
Gtk::WidgetPath base::WidgetPathBase::copy () const noexcept
{
  typedef ::GtkWidgetPath* (*call_wrap_t) (const ::GtkWidgetPath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_path_copy;
  auto _temp_ret = call_wrap_v ((const ::GtkWidgetPath*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gtk_widget_path_free (GtkWidgetPath* path);
// void gtk_widget_path_free (::GtkWidgetPath* path);
// IGNORE; marked ignore

// GType gtk_widget_path_get_object_type (const GtkWidgetPath* path);
// GType gtk_widget_path_get_object_type (const ::GtkWidgetPath* path);
GType base::WidgetPathBase::get_object_type () const noexcept
{
  typedef GType (*call_wrap_t) (const ::GtkWidgetPath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_path_get_object_type;
  auto _temp_ret = call_wrap_v ((const ::GtkWidgetPath*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_widget_path_has_parent (const GtkWidgetPath* path, GType type);
// gboolean gtk_widget_path_has_parent (const ::GtkWidgetPath* path, GType type);
bool base::WidgetPathBase::has_parent (GType type) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GtkWidgetPath* path, GType type);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_path_has_parent;
  auto type_to_c = type;
  auto _temp_ret = call_wrap_v ((const ::GtkWidgetPath*) (gobj_()), (GType) (type_to_c));
  return _temp_ret;
}

// gboolean gtk_widget_path_is_type (const GtkWidgetPath* path, GType type);
// gboolean gtk_widget_path_is_type (const ::GtkWidgetPath* path, GType type);
bool base::WidgetPathBase::is_type (GType type) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GtkWidgetPath* path, GType type);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_path_is_type;
  auto type_to_c = type;
  auto _temp_ret = call_wrap_v ((const ::GtkWidgetPath*) (gobj_()), (GType) (type_to_c));
  return _temp_ret;
}

// void gtk_widget_path_iter_add_class (GtkWidgetPath* path, gint pos, const gchar* name);
// void gtk_widget_path_iter_add_class (::GtkWidgetPath* path, gint pos, const char* name);
void base::WidgetPathBase::iter_add_class (gint pos, const std::string & name) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidgetPath* path, gint pos, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_path_iter_add_class;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto pos_to_c = pos;
  call_wrap_v ((::GtkWidgetPath*) (gobj_()), (gint) (pos_to_c), (const char*) (name_to_c));
}

// void gtk_widget_path_iter_add_region (GtkWidgetPath* path, gint pos, const gchar* name, GtkRegionFlags flags);
// void gtk_widget_path_iter_add_region (::GtkWidgetPath* path, gint pos, const char* name, ::GtkRegionFlags flags);
// IGNORE; deprecated

// void gtk_widget_path_iter_clear_classes (GtkWidgetPath* path, gint pos);
// void gtk_widget_path_iter_clear_classes (::GtkWidgetPath* path, gint pos);
void base::WidgetPathBase::iter_clear_classes (gint pos) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidgetPath* path, gint pos);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_path_iter_clear_classes;
  auto pos_to_c = pos;
  call_wrap_v ((::GtkWidgetPath*) (gobj_()), (gint) (pos_to_c));
}

// void gtk_widget_path_iter_clear_regions (GtkWidgetPath* path, gint pos);
// void gtk_widget_path_iter_clear_regions (::GtkWidgetPath* path, gint pos);
// IGNORE; deprecated

// const gchar* gtk_widget_path_iter_get_name (const GtkWidgetPath* path, gint pos);
// const char* gtk_widget_path_iter_get_name (const ::GtkWidgetPath* path, gint pos);
std::string base::WidgetPathBase::iter_get_name (gint pos) const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GtkWidgetPath* path, gint pos);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_path_iter_get_name;
  auto pos_to_c = pos;
  auto _temp_ret = call_wrap_v ((const ::GtkWidgetPath*) (gobj_()), (gint) (pos_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const char* gtk_widget_path_iter_get_object_name (const GtkWidgetPath* path, gint pos);
// const char* gtk_widget_path_iter_get_object_name (const ::GtkWidgetPath* path, gint pos);
std::string base::WidgetPathBase::iter_get_object_name (gint pos) const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GtkWidgetPath* path, gint pos);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_path_iter_get_object_name;
  auto pos_to_c = pos;
  auto _temp_ret = call_wrap_v ((const ::GtkWidgetPath*) (gobj_()), (gint) (pos_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GType gtk_widget_path_iter_get_object_type (const GtkWidgetPath* path, gint pos);
// GType gtk_widget_path_iter_get_object_type (const ::GtkWidgetPath* path, gint pos);
GType base::WidgetPathBase::iter_get_object_type (gint pos) const noexcept
{
  typedef GType (*call_wrap_t) (const ::GtkWidgetPath* path, gint pos);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_path_iter_get_object_type;
  auto pos_to_c = pos;
  auto _temp_ret = call_wrap_v ((const ::GtkWidgetPath*) (gobj_()), (gint) (pos_to_c));
  return _temp_ret;
}

// guint gtk_widget_path_iter_get_sibling_index (const GtkWidgetPath* path, gint pos);
// guint gtk_widget_path_iter_get_sibling_index (const ::GtkWidgetPath* path, gint pos);
guint base::WidgetPathBase::iter_get_sibling_index (gint pos) const noexcept
{
  typedef guint (*call_wrap_t) (const ::GtkWidgetPath* path, gint pos);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_path_iter_get_sibling_index;
  auto pos_to_c = pos;
  auto _temp_ret = call_wrap_v ((const ::GtkWidgetPath*) (gobj_()), (gint) (pos_to_c));
  return _temp_ret;
}

// const GtkWidgetPath* gtk_widget_path_iter_get_siblings (const GtkWidgetPath* path, gint pos);
// const ::GtkWidgetPath* gtk_widget_path_iter_get_siblings (const ::GtkWidgetPath* path, gint pos);
Gtk::WidgetPath base::WidgetPathBase::iter_get_siblings (gint pos) const noexcept
{
  typedef const ::GtkWidgetPath* (*call_wrap_t) (const ::GtkWidgetPath* path, gint pos);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_path_iter_get_siblings;
  auto pos_to_c = pos;
  auto _temp_ret = call_wrap_v ((const ::GtkWidgetPath*) (gobj_()), (gint) (pos_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkStateFlags gtk_widget_path_iter_get_state (const GtkWidgetPath* path, gint pos);
// ::GtkStateFlags gtk_widget_path_iter_get_state (const ::GtkWidgetPath* path, gint pos);
Gtk::StateFlags base::WidgetPathBase::iter_get_state (gint pos) const noexcept
{
  typedef ::GtkStateFlags (*call_wrap_t) (const ::GtkWidgetPath* path, gint pos);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_path_iter_get_state;
  auto pos_to_c = pos;
  auto _temp_ret = call_wrap_v ((const ::GtkWidgetPath*) (gobj_()), (gint) (pos_to_c));
  return gi::wrap (_temp_ret);
}

// gboolean gtk_widget_path_iter_has_class (const GtkWidgetPath* path, gint pos, const gchar* name);
// gboolean gtk_widget_path_iter_has_class (const ::GtkWidgetPath* path, gint pos, const char* name);
bool base::WidgetPathBase::iter_has_class (gint pos, const std::string & name) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GtkWidgetPath* path, gint pos, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_path_iter_has_class;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto pos_to_c = pos;
  auto _temp_ret = call_wrap_v ((const ::GtkWidgetPath*) (gobj_()), (gint) (pos_to_c), (const char*) (name_to_c));
  return _temp_ret;
}

// gboolean gtk_widget_path_iter_has_name (const GtkWidgetPath* path, gint pos, const gchar* name);
// gboolean gtk_widget_path_iter_has_name (const ::GtkWidgetPath* path, gint pos, const char* name);
bool base::WidgetPathBase::iter_has_name (gint pos, const std::string & name) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GtkWidgetPath* path, gint pos, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_path_iter_has_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto pos_to_c = pos;
  auto _temp_ret = call_wrap_v ((const ::GtkWidgetPath*) (gobj_()), (gint) (pos_to_c), (const char*) (name_to_c));
  return _temp_ret;
}

// gboolean gtk_widget_path_iter_has_qclass (const GtkWidgetPath* path, gint pos, GQuark qname);
// gboolean gtk_widget_path_iter_has_qclass (const ::GtkWidgetPath* path, gint pos, ::GQuark qname);
bool base::WidgetPathBase::iter_has_qclass (gint pos, ::GQuark qname) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GtkWidgetPath* path, gint pos, ::GQuark qname);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_path_iter_has_qclass;
  auto qname_to_c = qname;
  auto pos_to_c = pos;
  auto _temp_ret = call_wrap_v ((const ::GtkWidgetPath*) (gobj_()), (gint) (pos_to_c), (::GQuark) (qname_to_c));
  return _temp_ret;
}

// gboolean gtk_widget_path_iter_has_qname (const GtkWidgetPath* path, gint pos, GQuark qname);
// gboolean gtk_widget_path_iter_has_qname (const ::GtkWidgetPath* path, gint pos, ::GQuark qname);
bool base::WidgetPathBase::iter_has_qname (gint pos, ::GQuark qname) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GtkWidgetPath* path, gint pos, ::GQuark qname);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_path_iter_has_qname;
  auto qname_to_c = qname;
  auto pos_to_c = pos;
  auto _temp_ret = call_wrap_v ((const ::GtkWidgetPath*) (gobj_()), (gint) (pos_to_c), (::GQuark) (qname_to_c));
  return _temp_ret;
}

// gboolean gtk_widget_path_iter_has_qregion (const GtkWidgetPath* path, gint pos, GQuark qname, GtkRegionFlags* flags);
// gboolean gtk_widget_path_iter_has_qregion (const ::GtkWidgetPath* path, gint pos, ::GQuark qname, ::GtkRegionFlags* flags);
// IGNORE; deprecated

// gboolean gtk_widget_path_iter_has_region (const GtkWidgetPath* path, gint pos, const gchar* name, GtkRegionFlags* flags);
// gboolean gtk_widget_path_iter_has_region (const ::GtkWidgetPath* path, gint pos, const char* name, ::GtkRegionFlags* flags);
// IGNORE; deprecated

// GSList* gtk_widget_path_iter_list_classes (const GtkWidgetPath* path, gint pos);
// ::GSList* gtk_widget_path_iter_list_classes (const ::GtkWidgetPath* path, gint pos);
std::vector<std::string> base::WidgetPathBase::iter_list_classes (gint pos) const noexcept
{
  typedef ::GSList* (*call_wrap_t) (const ::GtkWidgetPath* path, gint pos);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_path_iter_list_classes;
  auto pos_to_c = pos;
  auto _temp_ret = call_wrap_v ((const ::GtkWidgetPath*) (gobj_()), (gint) (pos_to_c));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_container);
}

// GSList* gtk_widget_path_iter_list_regions (const GtkWidgetPath* path, gint pos);
// ::GSList* gtk_widget_path_iter_list_regions (const ::GtkWidgetPath* path, gint pos);
// IGNORE; deprecated

// void gtk_widget_path_iter_remove_class (GtkWidgetPath* path, gint pos, const gchar* name);
// void gtk_widget_path_iter_remove_class (::GtkWidgetPath* path, gint pos, const char* name);
void base::WidgetPathBase::iter_remove_class (gint pos, const std::string & name) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidgetPath* path, gint pos, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_path_iter_remove_class;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto pos_to_c = pos;
  call_wrap_v ((::GtkWidgetPath*) (gobj_()), (gint) (pos_to_c), (const char*) (name_to_c));
}

// void gtk_widget_path_iter_remove_region (GtkWidgetPath* path, gint pos, const gchar* name);
// void gtk_widget_path_iter_remove_region (::GtkWidgetPath* path, gint pos, const char* name);
// IGNORE; deprecated

// void gtk_widget_path_iter_set_name (GtkWidgetPath* path, gint pos, const gchar* name);
// void gtk_widget_path_iter_set_name (::GtkWidgetPath* path, gint pos, const char* name);
void base::WidgetPathBase::iter_set_name (gint pos, const std::string & name) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidgetPath* path, gint pos, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_path_iter_set_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto pos_to_c = pos;
  call_wrap_v ((::GtkWidgetPath*) (gobj_()), (gint) (pos_to_c), (const char*) (name_to_c));
}

// void gtk_widget_path_iter_set_object_name (GtkWidgetPath* path, gint pos, const char* name);
// void gtk_widget_path_iter_set_object_name (::GtkWidgetPath* path, gint pos, const char* name);
void base::WidgetPathBase::iter_set_object_name (gint pos, const std::string & name) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidgetPath* path, gint pos, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_path_iter_set_object_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto pos_to_c = pos;
  call_wrap_v ((::GtkWidgetPath*) (gobj_()), (gint) (pos_to_c), (const char*) (name_to_c));
}
void base::WidgetPathBase::iter_set_object_name (gint pos) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidgetPath* path, gint pos, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_path_iter_set_object_name;
  auto name_to_c = nullptr;
  auto pos_to_c = pos;
  call_wrap_v ((::GtkWidgetPath*) (gobj_()), (gint) (pos_to_c), (const char*) (name_to_c));
}

// void gtk_widget_path_iter_set_object_type (GtkWidgetPath* path, gint pos, GType type);
// void gtk_widget_path_iter_set_object_type (::GtkWidgetPath* path, gint pos, GType type);
void base::WidgetPathBase::iter_set_object_type (gint pos, GType type) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidgetPath* path, gint pos, GType type);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_path_iter_set_object_type;
  auto type_to_c = type;
  auto pos_to_c = pos;
  call_wrap_v ((::GtkWidgetPath*) (gobj_()), (gint) (pos_to_c), (GType) (type_to_c));
}

// void gtk_widget_path_iter_set_state (GtkWidgetPath* path, gint pos, GtkStateFlags state);
// void gtk_widget_path_iter_set_state (::GtkWidgetPath* path, gint pos, ::GtkStateFlags state);
void base::WidgetPathBase::iter_set_state (gint pos, Gtk::StateFlags state) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidgetPath* path, gint pos, ::GtkStateFlags state);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_path_iter_set_state;
  auto state_to_c = gi::unwrap (state);
  auto pos_to_c = pos;
  call_wrap_v ((::GtkWidgetPath*) (gobj_()), (gint) (pos_to_c), (::GtkStateFlags) (state_to_c));
}

// gint gtk_widget_path_length (const GtkWidgetPath* path);
// gint gtk_widget_path_length (const ::GtkWidgetPath* path);
gint base::WidgetPathBase::length () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GtkWidgetPath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_path_length;
  auto _temp_ret = call_wrap_v ((const ::GtkWidgetPath*) (gobj_()));
  return _temp_ret;
}

// void gtk_widget_path_prepend_type (GtkWidgetPath* path, GType type);
// void gtk_widget_path_prepend_type (::GtkWidgetPath* path, GType type);
void base::WidgetPathBase::prepend_type (GType type) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidgetPath* path, GType type);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_path_prepend_type;
  auto type_to_c = type;
  call_wrap_v ((::GtkWidgetPath*) (gobj_()), (GType) (type_to_c));
}

// GtkWidgetPath* gtk_widget_path_ref (GtkWidgetPath* path);
// ::GtkWidgetPath* gtk_widget_path_ref (::GtkWidgetPath* path);
// IGNORE; marked ignore

// char* gtk_widget_path_to_string (const GtkWidgetPath* path);
// char* gtk_widget_path_to_string (const ::GtkWidgetPath* path);
std::string base::WidgetPathBase::to_string () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GtkWidgetPath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_path_to_string;
  auto _temp_ret = call_wrap_v ((const ::GtkWidgetPath*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gtk_widget_path_unref (GtkWidgetPath* path);
// void gtk_widget_path_unref (::GtkWidgetPath* path);
// IGNORE; marked ignore


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/widgetpath_extra_def_impl.hpp>)
#include <gtk/widgetpath_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/widgetpath_extra_impl.hpp>)
#include <gtk/widgetpath_extra_impl.hpp>
#endif
#endif

#endif
