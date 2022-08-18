// AUTO-GENERATED

#ifndef _GI_GTK_TOOLBAR_IMPL_HPP_
#define _GI_GTK_TOOLBAR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Orientable ToolbarBase::interface_ (gi::interface_tag<Gtk::Orientable>)
{ return gi::wrap ((Gtk::Orientable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

ToolbarBase::operator Gtk::Orientable ()
{ return interface_ (gi::interface_tag<Gtk::Orientable>()); }

Gtk::ToolShell ToolbarBase::interface_ (gi::interface_tag<Gtk::ToolShell>)
{ return gi::wrap ((Gtk::ToolShell::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

ToolbarBase::operator Gtk::ToolShell ()
{ return interface_ (gi::interface_tag<Gtk::ToolShell>()); }

// GtkWidget* gtk_toolbar_new ();
// ::GtkToolbar* gtk_toolbar_new ();
Gtk::Toolbar base::ToolbarBase::new_ () noexcept
{
  typedef ::GtkToolbar* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_toolbar_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gint gtk_toolbar_get_drop_index (GtkToolbar* toolbar, gint x, gint y);
// gint gtk_toolbar_get_drop_index (::GtkToolbar* toolbar, gint x, gint y);
gint base::ToolbarBase::get_drop_index (gint x, gint y) noexcept
{
  typedef gint (*call_wrap_t) (::GtkToolbar* toolbar, gint x, gint y);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_toolbar_get_drop_index;
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::GtkToolbar*) (gobj_()), (gint) (x_to_c), (gint) (y_to_c));
  return _temp_ret;
}

// GtkIconSize gtk_toolbar_get_icon_size (GtkToolbar* toolbar);
// ::GtkIconSize gtk_toolbar_get_icon_size (::GtkToolbar* toolbar);
Gtk::IconSize base::ToolbarBase::get_icon_size () noexcept
{
  typedef ::GtkIconSize (*call_wrap_t) (::GtkToolbar* toolbar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_toolbar_get_icon_size;
  auto _temp_ret = call_wrap_v ((::GtkToolbar*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gint gtk_toolbar_get_item_index (GtkToolbar* toolbar, GtkToolItem* item);
// gint gtk_toolbar_get_item_index (::GtkToolbar* toolbar, ::GtkToolItem* item);
gint base::ToolbarBase::get_item_index (Gtk::ToolItem item) noexcept
{
  typedef gint (*call_wrap_t) (::GtkToolbar* toolbar, ::GtkToolItem* item);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_toolbar_get_item_index;
  auto item_to_c = gi::unwrap (item, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkToolbar*) (gobj_()), (::GtkToolItem*) (item_to_c));
  return _temp_ret;
}

// gint gtk_toolbar_get_n_items (GtkToolbar* toolbar);
// gint gtk_toolbar_get_n_items (::GtkToolbar* toolbar);
gint base::ToolbarBase::get_n_items () noexcept
{
  typedef gint (*call_wrap_t) (::GtkToolbar* toolbar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_toolbar_get_n_items;
  auto _temp_ret = call_wrap_v ((::GtkToolbar*) (gobj_()));
  return _temp_ret;
}

// GtkToolItem* gtk_toolbar_get_nth_item (GtkToolbar* toolbar, gint n);
// ::GtkToolItem* gtk_toolbar_get_nth_item (::GtkToolbar* toolbar, gint n);
Gtk::ToolItem base::ToolbarBase::get_nth_item (gint n) noexcept
{
  typedef ::GtkToolItem* (*call_wrap_t) (::GtkToolbar* toolbar, gint n);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_toolbar_get_nth_item;
  auto n_to_c = n;
  auto _temp_ret = call_wrap_v ((::GtkToolbar*) (gobj_()), (gint) (n_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkReliefStyle gtk_toolbar_get_relief_style (GtkToolbar* toolbar);
// ::GtkReliefStyle gtk_toolbar_get_relief_style (::GtkToolbar* toolbar);
Gtk::ReliefStyle base::ToolbarBase::get_relief_style () noexcept
{
  typedef ::GtkReliefStyle (*call_wrap_t) (::GtkToolbar* toolbar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_toolbar_get_relief_style;
  auto _temp_ret = call_wrap_v ((::GtkToolbar*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gtk_toolbar_get_show_arrow (GtkToolbar* toolbar);
// gboolean gtk_toolbar_get_show_arrow (::GtkToolbar* toolbar);
bool base::ToolbarBase::get_show_arrow () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkToolbar* toolbar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_toolbar_get_show_arrow;
  auto _temp_ret = call_wrap_v ((::GtkToolbar*) (gobj_()));
  return _temp_ret;
}

// GtkToolbarStyle gtk_toolbar_get_style (GtkToolbar* toolbar);
// ::GtkToolbarStyle gtk_toolbar_get_style (::GtkToolbar* toolbar);
Gtk::ToolbarStyle base::ToolbarBase::get_style () noexcept
{
  typedef ::GtkToolbarStyle (*call_wrap_t) (::GtkToolbar* toolbar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_toolbar_get_style;
  auto _temp_ret = call_wrap_v ((::GtkToolbar*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void gtk_toolbar_insert (GtkToolbar* toolbar, GtkToolItem* item, gint pos);
// void gtk_toolbar_insert (::GtkToolbar* toolbar, ::GtkToolItem* item, gint pos);
void base::ToolbarBase::insert (Gtk::ToolItem item, gint pos) noexcept
{
  typedef void (*call_wrap_t) (::GtkToolbar* toolbar, ::GtkToolItem* item, gint pos);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_toolbar_insert;
  auto pos_to_c = pos;
  auto item_to_c = gi::unwrap (item, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkToolbar*) (gobj_()), (::GtkToolItem*) (item_to_c), (gint) (pos_to_c));
}

// void gtk_toolbar_set_drop_highlight_item (GtkToolbar* toolbar, GtkToolItem* tool_item, gint index_);
// void gtk_toolbar_set_drop_highlight_item (::GtkToolbar* toolbar, ::GtkToolItem* tool_item, gint index_);
void base::ToolbarBase::set_drop_highlight_item (Gtk::ToolItem tool_item, gint index_) noexcept
{
  typedef void (*call_wrap_t) (::GtkToolbar* toolbar, ::GtkToolItem* tool_item, gint index_);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_toolbar_set_drop_highlight_item;
  auto index__to_c = index_;
  auto tool_item_to_c = gi::unwrap (tool_item, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkToolbar*) (gobj_()), (::GtkToolItem*) (tool_item_to_c), (gint) (index__to_c));
}
void base::ToolbarBase::set_drop_highlight_item (gint index_) noexcept
{
  typedef void (*call_wrap_t) (::GtkToolbar* toolbar, ::GtkToolItem* tool_item, gint index_);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_toolbar_set_drop_highlight_item;
  auto index__to_c = index_;
  auto tool_item_to_c = nullptr;
  call_wrap_v ((::GtkToolbar*) (gobj_()), (::GtkToolItem*) (tool_item_to_c), (gint) (index__to_c));
}

// void gtk_toolbar_set_icon_size (GtkToolbar* toolbar, GtkIconSize icon_size);
// void gtk_toolbar_set_icon_size (::GtkToolbar* toolbar, ::GtkIconSize icon_size);
void base::ToolbarBase::set_icon_size (Gtk::IconSize icon_size) noexcept
{
  typedef void (*call_wrap_t) (::GtkToolbar* toolbar, ::GtkIconSize icon_size);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_toolbar_set_icon_size;
  auto icon_size_to_c = gi::unwrap (icon_size);
  call_wrap_v ((::GtkToolbar*) (gobj_()), (::GtkIconSize) (icon_size_to_c));
}

// void gtk_toolbar_set_show_arrow (GtkToolbar* toolbar, gboolean show_arrow);
// void gtk_toolbar_set_show_arrow (::GtkToolbar* toolbar, gboolean show_arrow);
void base::ToolbarBase::set_show_arrow (gboolean show_arrow) noexcept
{
  typedef void (*call_wrap_t) (::GtkToolbar* toolbar, gboolean show_arrow);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_toolbar_set_show_arrow;
  auto show_arrow_to_c = show_arrow;
  call_wrap_v ((::GtkToolbar*) (gobj_()), (gboolean) (show_arrow_to_c));
}

// void gtk_toolbar_set_style (GtkToolbar* toolbar, GtkToolbarStyle style);
// void gtk_toolbar_set_style (::GtkToolbar* toolbar, ::GtkToolbarStyle style);
void base::ToolbarBase::set_style (Gtk::ToolbarStyle style) noexcept
{
  typedef void (*call_wrap_t) (::GtkToolbar* toolbar, ::GtkToolbarStyle style);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_toolbar_set_style;
  auto style_to_c = gi::unwrap (style);
  call_wrap_v ((::GtkToolbar*) (gobj_()), (::GtkToolbarStyle) (style_to_c));
}

// void gtk_toolbar_unset_icon_size (GtkToolbar* toolbar);
// void gtk_toolbar_unset_icon_size (::GtkToolbar* toolbar);
void base::ToolbarBase::unset_icon_size () noexcept
{
  typedef void (*call_wrap_t) (::GtkToolbar* toolbar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_toolbar_unset_icon_size;
  call_wrap_v ((::GtkToolbar*) (gobj_()));
}

// void gtk_toolbar_unset_style (GtkToolbar* toolbar);
// void gtk_toolbar_unset_style (::GtkToolbar* toolbar);
void base::ToolbarBase::unset_style () noexcept
{
  typedef void (*call_wrap_t) (::GtkToolbar* toolbar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_toolbar_unset_style;
  call_wrap_v ((::GtkToolbar*) (gobj_()));
}






} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/toolbar_extra_def_impl.hpp>)
#include <gtk/toolbar_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/toolbar_extra_impl.hpp>)
#include <gtk/toolbar_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ToolbarClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkToolbarClass *methods = (::GtkToolbarClass *) class_struct;
  (void) methods;

  methods->orientation_changed = (decltype (methods->orientation_changed)) detail::method_wrapper<self, void (*) (Gtk::Orientation orientation), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::orientation_changed_>;
  methods->popup_context_menu = (decltype (methods->popup_context_menu)) detail::method_wrapper<self, bool (*) (gint x, gint y, gint button_number), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::popup_context_menu_>;
  methods->style_changed = (decltype (methods->style_changed)) detail::method_wrapper<self, void (*) (Gtk::ToolbarStyle style), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::style_changed_>;
}

// void Toolbar::orientation_changed (GtkToolbar* toolbar, GtkOrientation orientation);
// void Toolbar::orientation_changed (::GtkToolbar* toolbar, ::GtkOrientation orientation);
void ToolbarClass::orientation_changed_ (Gtk::Orientation orientation) noexcept
{
  if (!get_struct_()->orientation_changed) return ;
  typedef void (*call_wrap_t) (::GtkToolbar* toolbar, ::GtkOrientation orientation);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->orientation_changed;
  auto orientation_to_c = gi::unwrap (orientation);
  call_wrap_v ((::GtkToolbar*) (gobj_()), (::GtkOrientation) (orientation_to_c));
}

// gboolean Toolbar::popup_context_menu (GtkToolbar* toolbar, gint x, gint y, gint button_number);
// gboolean Toolbar::popup_context_menu (::GtkToolbar* toolbar, gint x, gint y, gint button_number);
bool ToolbarClass::popup_context_menu_ (gint x, gint y, gint button_number) noexcept
{
  if (!get_struct_()->popup_context_menu) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkToolbar* toolbar, gint x, gint y, gint button_number);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->popup_context_menu;
  auto button_number_to_c = button_number;
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::GtkToolbar*) (gobj_()), (gint) (x_to_c), (gint) (y_to_c), (gint) (button_number_to_c));
  return _temp_ret;
}

// void Toolbar::style_changed (GtkToolbar* toolbar, GtkToolbarStyle style);
// void Toolbar::style_changed (::GtkToolbar* toolbar, ::GtkToolbarStyle style);
void ToolbarClass::style_changed_ (Gtk::ToolbarStyle style) noexcept
{
  if (!get_struct_()->style_changed) return ;
  typedef void (*call_wrap_t) (::GtkToolbar* toolbar, ::GtkToolbarStyle style);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->style_changed;
  auto style_to_c = gi::unwrap (style);
  call_wrap_v ((::GtkToolbar*) (gobj_()), (::GtkToolbarStyle) (style_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
