// AUTO-GENERATED

#ifndef _GI_GTK_TOOLITEMGROUP_IMPL_HPP_
#define _GI_GTK_TOOLITEMGROUP_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::ToolShell ToolItemGroupBase::interface_ (gi::interface_tag<Gtk::ToolShell>)
{ return gi::wrap ((Gtk::ToolShell::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

ToolItemGroupBase::operator Gtk::ToolShell ()
{ return interface_ (gi::interface_tag<Gtk::ToolShell>()); }

// GtkWidget* gtk_tool_item_group_new (const gchar* label);
// ::GtkToolItemGroup* gtk_tool_item_group_new (const char* label);
Gtk::ToolItemGroup base::ToolItemGroupBase::new_ (const std::string & label) noexcept
{
  typedef ::GtkToolItemGroup* (*call_wrap_t) (const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_item_group_new;
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_tool_item_group_get_collapsed (GtkToolItemGroup* group);
// gboolean gtk_tool_item_group_get_collapsed (::GtkToolItemGroup* group);
bool base::ToolItemGroupBase::get_collapsed () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkToolItemGroup* group);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_item_group_get_collapsed;
  auto _temp_ret = call_wrap_v ((::GtkToolItemGroup*) (gobj_()));
  return _temp_ret;
}

// GtkToolItem* gtk_tool_item_group_get_drop_item (GtkToolItemGroup* group, gint x, gint y);
// ::GtkToolItem* gtk_tool_item_group_get_drop_item (::GtkToolItemGroup* group, gint x, gint y);
Gtk::ToolItem base::ToolItemGroupBase::get_drop_item (gint x, gint y) noexcept
{
  typedef ::GtkToolItem* (*call_wrap_t) (::GtkToolItemGroup* group, gint x, gint y);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_item_group_get_drop_item;
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::GtkToolItemGroup*) (gobj_()), (gint) (x_to_c), (gint) (y_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// PangoEllipsizeMode gtk_tool_item_group_get_ellipsize (GtkToolItemGroup* group);
// ::PangoEllipsizeMode gtk_tool_item_group_get_ellipsize (::GtkToolItemGroup* group);
Pango::EllipsizeMode base::ToolItemGroupBase::get_ellipsize () noexcept
{
  typedef ::PangoEllipsizeMode (*call_wrap_t) (::GtkToolItemGroup* group);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_item_group_get_ellipsize;
  auto _temp_ret = call_wrap_v ((::GtkToolItemGroup*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkReliefStyle gtk_tool_item_group_get_header_relief (GtkToolItemGroup* group);
// ::GtkReliefStyle gtk_tool_item_group_get_header_relief (::GtkToolItemGroup* group);
Gtk::ReliefStyle base::ToolItemGroupBase::get_header_relief () noexcept
{
  typedef ::GtkReliefStyle (*call_wrap_t) (::GtkToolItemGroup* group);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_item_group_get_header_relief;
  auto _temp_ret = call_wrap_v ((::GtkToolItemGroup*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gint gtk_tool_item_group_get_item_position (GtkToolItemGroup* group, GtkToolItem* item);
// gint gtk_tool_item_group_get_item_position (::GtkToolItemGroup* group, ::GtkToolItem* item);
gint base::ToolItemGroupBase::get_item_position (Gtk::ToolItem item) noexcept
{
  typedef gint (*call_wrap_t) (::GtkToolItemGroup* group, ::GtkToolItem* item);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_item_group_get_item_position;
  auto item_to_c = gi::unwrap (item, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkToolItemGroup*) (gobj_()), (::GtkToolItem*) (item_to_c));
  return _temp_ret;
}

// const gchar* gtk_tool_item_group_get_label (GtkToolItemGroup* group);
// const char* gtk_tool_item_group_get_label (::GtkToolItemGroup* group);
std::string base::ToolItemGroupBase::get_label () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkToolItemGroup* group);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_item_group_get_label;
  auto _temp_ret = call_wrap_v ((::GtkToolItemGroup*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_tool_item_group_get_label_widget (GtkToolItemGroup* group);
// ::GtkWidget* gtk_tool_item_group_get_label_widget (::GtkToolItemGroup* group);
Gtk::Widget base::ToolItemGroupBase::get_label_widget () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkToolItemGroup* group);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_item_group_get_label_widget;
  auto _temp_ret = call_wrap_v ((::GtkToolItemGroup*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// guint gtk_tool_item_group_get_n_items (GtkToolItemGroup* group);
// guint gtk_tool_item_group_get_n_items (::GtkToolItemGroup* group);
guint base::ToolItemGroupBase::get_n_items () noexcept
{
  typedef guint (*call_wrap_t) (::GtkToolItemGroup* group);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_item_group_get_n_items;
  auto _temp_ret = call_wrap_v ((::GtkToolItemGroup*) (gobj_()));
  return _temp_ret;
}

// GtkToolItem* gtk_tool_item_group_get_nth_item (GtkToolItemGroup* group, guint index);
// ::GtkToolItem* gtk_tool_item_group_get_nth_item (::GtkToolItemGroup* group, guint index);
Gtk::ToolItem base::ToolItemGroupBase::get_nth_item (guint index) noexcept
{
  typedef ::GtkToolItem* (*call_wrap_t) (::GtkToolItemGroup* group, guint index);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_item_group_get_nth_item;
  auto index_to_c = index;
  auto _temp_ret = call_wrap_v ((::GtkToolItemGroup*) (gobj_()), (guint) (index_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_tool_item_group_insert (GtkToolItemGroup* group, GtkToolItem* item, gint position);
// void gtk_tool_item_group_insert (::GtkToolItemGroup* group, ::GtkToolItem* item, gint position);
void base::ToolItemGroupBase::insert (Gtk::ToolItem item, gint position) noexcept
{
  typedef void (*call_wrap_t) (::GtkToolItemGroup* group, ::GtkToolItem* item, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_item_group_insert;
  auto position_to_c = position;
  auto item_to_c = gi::unwrap (item, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkToolItemGroup*) (gobj_()), (::GtkToolItem*) (item_to_c), (gint) (position_to_c));
}

// void gtk_tool_item_group_set_collapsed (GtkToolItemGroup* group, gboolean collapsed);
// void gtk_tool_item_group_set_collapsed (::GtkToolItemGroup* group, gboolean collapsed);
void base::ToolItemGroupBase::set_collapsed (gboolean collapsed) noexcept
{
  typedef void (*call_wrap_t) (::GtkToolItemGroup* group, gboolean collapsed);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_item_group_set_collapsed;
  auto collapsed_to_c = collapsed;
  call_wrap_v ((::GtkToolItemGroup*) (gobj_()), (gboolean) (collapsed_to_c));
}

// void gtk_tool_item_group_set_ellipsize (GtkToolItemGroup* group, PangoEllipsizeMode ellipsize);
// void gtk_tool_item_group_set_ellipsize (::GtkToolItemGroup* group, ::PangoEllipsizeMode ellipsize);
void base::ToolItemGroupBase::set_ellipsize (Pango::EllipsizeMode ellipsize) noexcept
{
  typedef void (*call_wrap_t) (::GtkToolItemGroup* group, ::PangoEllipsizeMode ellipsize);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_item_group_set_ellipsize;
  auto ellipsize_to_c = gi::unwrap (ellipsize);
  call_wrap_v ((::GtkToolItemGroup*) (gobj_()), (::PangoEllipsizeMode) (ellipsize_to_c));
}

// void gtk_tool_item_group_set_header_relief (GtkToolItemGroup* group, GtkReliefStyle style);
// void gtk_tool_item_group_set_header_relief (::GtkToolItemGroup* group, ::GtkReliefStyle style);
void base::ToolItemGroupBase::set_header_relief (Gtk::ReliefStyle style) noexcept
{
  typedef void (*call_wrap_t) (::GtkToolItemGroup* group, ::GtkReliefStyle style);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_item_group_set_header_relief;
  auto style_to_c = gi::unwrap (style);
  call_wrap_v ((::GtkToolItemGroup*) (gobj_()), (::GtkReliefStyle) (style_to_c));
}

// void gtk_tool_item_group_set_item_position (GtkToolItemGroup* group, GtkToolItem* item, gint position);
// void gtk_tool_item_group_set_item_position (::GtkToolItemGroup* group, ::GtkToolItem* item, gint position);
void base::ToolItemGroupBase::set_item_position (Gtk::ToolItem item, gint position) noexcept
{
  typedef void (*call_wrap_t) (::GtkToolItemGroup* group, ::GtkToolItem* item, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_item_group_set_item_position;
  auto position_to_c = position;
  auto item_to_c = gi::unwrap (item, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkToolItemGroup*) (gobj_()), (::GtkToolItem*) (item_to_c), (gint) (position_to_c));
}

// void gtk_tool_item_group_set_label (GtkToolItemGroup* group, const gchar* label);
// void gtk_tool_item_group_set_label (::GtkToolItemGroup* group, const char* label);
void base::ToolItemGroupBase::set_label (const std::string & label) noexcept
{
  typedef void (*call_wrap_t) (::GtkToolItemGroup* group, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_item_group_set_label;
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkToolItemGroup*) (gobj_()), (const char*) (label_to_c));
}

// void gtk_tool_item_group_set_label_widget (GtkToolItemGroup* group, GtkWidget* label_widget);
// void gtk_tool_item_group_set_label_widget (::GtkToolItemGroup* group, ::GtkWidget* label_widget);
void base::ToolItemGroupBase::set_label_widget (Gtk::Widget label_widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkToolItemGroup* group, ::GtkWidget* label_widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_item_group_set_label_widget;
  auto label_widget_to_c = gi::unwrap (label_widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkToolItemGroup*) (gobj_()), (::GtkWidget*) (label_widget_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/toolitemgroup_extra_def_impl.hpp>)
#include <gtk/toolitemgroup_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/toolitemgroup_extra_impl.hpp>)
#include <gtk/toolitemgroup_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ToolItemGroupClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkToolItemGroupClass *methods = (::GtkToolItemGroupClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
