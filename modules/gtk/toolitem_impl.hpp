// AUTO-GENERATED

#ifndef _GI_GTK_TOOLITEM_IMPL_HPP_
#define _GI_GTK_TOOLITEM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Activatable ToolItemBase::interface_ (gi::interface_tag<Gtk::Activatable>)
{ return gi::wrap ((Gtk::Activatable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

ToolItemBase::operator Gtk::Activatable ()
{ return interface_ (gi::interface_tag<Gtk::Activatable>()); }

// GtkToolItem* gtk_tool_item_new ();
// ::GtkToolItem* gtk_tool_item_new ();
Gtk::ToolItem base::ToolItemBase::new_ () noexcept
{
  typedef ::GtkToolItem* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_item_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// PangoEllipsizeMode gtk_tool_item_get_ellipsize_mode (GtkToolItem* tool_item);
// ::PangoEllipsizeMode gtk_tool_item_get_ellipsize_mode (::GtkToolItem* tool_item);
Pango::EllipsizeMode base::ToolItemBase::get_ellipsize_mode () noexcept
{
  typedef ::PangoEllipsizeMode (*call_wrap_t) (::GtkToolItem* tool_item);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_item_get_ellipsize_mode;
  auto _temp_ret = call_wrap_v ((::GtkToolItem*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gtk_tool_item_get_expand (GtkToolItem* tool_item);
// gboolean gtk_tool_item_get_expand (::GtkToolItem* tool_item);
bool base::ToolItemBase::get_expand () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkToolItem* tool_item);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_item_get_expand;
  auto _temp_ret = call_wrap_v ((::GtkToolItem*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_tool_item_get_homogeneous (GtkToolItem* tool_item);
// gboolean gtk_tool_item_get_homogeneous (::GtkToolItem* tool_item);
bool base::ToolItemBase::get_homogeneous () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkToolItem* tool_item);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_item_get_homogeneous;
  auto _temp_ret = call_wrap_v ((::GtkToolItem*) (gobj_()));
  return _temp_ret;
}

// GtkIconSize gtk_tool_item_get_icon_size (GtkToolItem* tool_item);
// gint gtk_tool_item_get_icon_size (::GtkToolItem* tool_item);
gint base::ToolItemBase::get_icon_size () noexcept
{
  typedef gint (*call_wrap_t) (::GtkToolItem* tool_item);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_item_get_icon_size;
  auto _temp_ret = call_wrap_v ((::GtkToolItem*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_tool_item_get_is_important (GtkToolItem* tool_item);
// gboolean gtk_tool_item_get_is_important (::GtkToolItem* tool_item);
bool base::ToolItemBase::get_is_important () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkToolItem* tool_item);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_item_get_is_important;
  auto _temp_ret = call_wrap_v ((::GtkToolItem*) (gobj_()));
  return _temp_ret;
}

// GtkOrientation gtk_tool_item_get_orientation (GtkToolItem* tool_item);
// ::GtkOrientation gtk_tool_item_get_orientation (::GtkToolItem* tool_item);
Gtk::Orientation base::ToolItemBase::get_orientation () noexcept
{
  typedef ::GtkOrientation (*call_wrap_t) (::GtkToolItem* tool_item);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_item_get_orientation;
  auto _temp_ret = call_wrap_v ((::GtkToolItem*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkWidget* gtk_tool_item_get_proxy_menu_item (GtkToolItem* tool_item, const gchar* menu_item_id);
// ::GtkWidget* gtk_tool_item_get_proxy_menu_item (::GtkToolItem* tool_item, const char* menu_item_id);
Gtk::Widget base::ToolItemBase::get_proxy_menu_item (const std::string & menu_item_id) noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkToolItem* tool_item, const char* menu_item_id);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_item_get_proxy_menu_item;
  auto menu_item_id_to_c = gi::unwrap (menu_item_id, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkToolItem*) (gobj_()), (const char*) (menu_item_id_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkReliefStyle gtk_tool_item_get_relief_style (GtkToolItem* tool_item);
// ::GtkReliefStyle gtk_tool_item_get_relief_style (::GtkToolItem* tool_item);
Gtk::ReliefStyle base::ToolItemBase::get_relief_style () noexcept
{
  typedef ::GtkReliefStyle (*call_wrap_t) (::GtkToolItem* tool_item);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_item_get_relief_style;
  auto _temp_ret = call_wrap_v ((::GtkToolItem*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gfloat gtk_tool_item_get_text_alignment (GtkToolItem* tool_item);
// gfloat gtk_tool_item_get_text_alignment (::GtkToolItem* tool_item);
gfloat base::ToolItemBase::get_text_alignment () noexcept
{
  typedef gfloat (*call_wrap_t) (::GtkToolItem* tool_item);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_item_get_text_alignment;
  auto _temp_ret = call_wrap_v ((::GtkToolItem*) (gobj_()));
  return _temp_ret;
}

// GtkOrientation gtk_tool_item_get_text_orientation (GtkToolItem* tool_item);
// ::GtkOrientation gtk_tool_item_get_text_orientation (::GtkToolItem* tool_item);
Gtk::Orientation base::ToolItemBase::get_text_orientation () noexcept
{
  typedef ::GtkOrientation (*call_wrap_t) (::GtkToolItem* tool_item);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_item_get_text_orientation;
  auto _temp_ret = call_wrap_v ((::GtkToolItem*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkSizeGroup* gtk_tool_item_get_text_size_group (GtkToolItem* tool_item);
// ::GtkSizeGroup* gtk_tool_item_get_text_size_group (::GtkToolItem* tool_item);
Gtk::SizeGroup base::ToolItemBase::get_text_size_group () noexcept
{
  typedef ::GtkSizeGroup* (*call_wrap_t) (::GtkToolItem* tool_item);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_item_get_text_size_group;
  auto _temp_ret = call_wrap_v ((::GtkToolItem*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkToolbarStyle gtk_tool_item_get_toolbar_style (GtkToolItem* tool_item);
// ::GtkToolbarStyle gtk_tool_item_get_toolbar_style (::GtkToolItem* tool_item);
Gtk::ToolbarStyle base::ToolItemBase::get_toolbar_style () noexcept
{
  typedef ::GtkToolbarStyle (*call_wrap_t) (::GtkToolItem* tool_item);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_item_get_toolbar_style;
  auto _temp_ret = call_wrap_v ((::GtkToolItem*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gtk_tool_item_get_use_drag_window (GtkToolItem* tool_item);
// gboolean gtk_tool_item_get_use_drag_window (::GtkToolItem* tool_item);
bool base::ToolItemBase::get_use_drag_window () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkToolItem* tool_item);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_item_get_use_drag_window;
  auto _temp_ret = call_wrap_v ((::GtkToolItem*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_tool_item_get_visible_horizontal (GtkToolItem* tool_item);
// gboolean gtk_tool_item_get_visible_horizontal (::GtkToolItem* tool_item);
bool base::ToolItemBase::get_visible_horizontal () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkToolItem* tool_item);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_item_get_visible_horizontal;
  auto _temp_ret = call_wrap_v ((::GtkToolItem*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_tool_item_get_visible_vertical (GtkToolItem* tool_item);
// gboolean gtk_tool_item_get_visible_vertical (::GtkToolItem* tool_item);
bool base::ToolItemBase::get_visible_vertical () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkToolItem* tool_item);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_item_get_visible_vertical;
  auto _temp_ret = call_wrap_v ((::GtkToolItem*) (gobj_()));
  return _temp_ret;
}

// void gtk_tool_item_rebuild_menu (GtkToolItem* tool_item);
// void gtk_tool_item_rebuild_menu (::GtkToolItem* tool_item);
void base::ToolItemBase::rebuild_menu () noexcept
{
  typedef void (*call_wrap_t) (::GtkToolItem* tool_item);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_item_rebuild_menu;
  call_wrap_v ((::GtkToolItem*) (gobj_()));
}

// GtkWidget* gtk_tool_item_retrieve_proxy_menu_item (GtkToolItem* tool_item);
// ::GtkWidget* gtk_tool_item_retrieve_proxy_menu_item (::GtkToolItem* tool_item);
Gtk::Widget base::ToolItemBase::retrieve_proxy_menu_item () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkToolItem* tool_item);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_item_retrieve_proxy_menu_item;
  auto _temp_ret = call_wrap_v ((::GtkToolItem*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_tool_item_set_expand (GtkToolItem* tool_item, gboolean expand);
// void gtk_tool_item_set_expand (::GtkToolItem* tool_item, gboolean expand);
void base::ToolItemBase::set_expand (gboolean expand) noexcept
{
  typedef void (*call_wrap_t) (::GtkToolItem* tool_item, gboolean expand);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_item_set_expand;
  auto expand_to_c = expand;
  call_wrap_v ((::GtkToolItem*) (gobj_()), (gboolean) (expand_to_c));
}

// void gtk_tool_item_set_homogeneous (GtkToolItem* tool_item, gboolean homogeneous);
// void gtk_tool_item_set_homogeneous (::GtkToolItem* tool_item, gboolean homogeneous);
void base::ToolItemBase::set_homogeneous (gboolean homogeneous) noexcept
{
  typedef void (*call_wrap_t) (::GtkToolItem* tool_item, gboolean homogeneous);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_item_set_homogeneous;
  auto homogeneous_to_c = homogeneous;
  call_wrap_v ((::GtkToolItem*) (gobj_()), (gboolean) (homogeneous_to_c));
}

// void gtk_tool_item_set_is_important (GtkToolItem* tool_item, gboolean is_important);
// void gtk_tool_item_set_is_important (::GtkToolItem* tool_item, gboolean is_important);
void base::ToolItemBase::set_is_important (gboolean is_important) noexcept
{
  typedef void (*call_wrap_t) (::GtkToolItem* tool_item, gboolean is_important);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_item_set_is_important;
  auto is_important_to_c = is_important;
  call_wrap_v ((::GtkToolItem*) (gobj_()), (gboolean) (is_important_to_c));
}

// void gtk_tool_item_set_proxy_menu_item (GtkToolItem* tool_item, const gchar* menu_item_id, GtkWidget* menu_item);
// void gtk_tool_item_set_proxy_menu_item (::GtkToolItem* tool_item, const char* menu_item_id, ::GtkWidget* menu_item);
void base::ToolItemBase::set_proxy_menu_item (const std::string & menu_item_id, Gtk::Widget menu_item) noexcept
{
  typedef void (*call_wrap_t) (::GtkToolItem* tool_item, const char* menu_item_id, ::GtkWidget* menu_item);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_item_set_proxy_menu_item;
  auto menu_item_to_c = gi::unwrap (menu_item, gi::transfer_none, gi::direction_in);
  auto menu_item_id_to_c = gi::unwrap (menu_item_id, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkToolItem*) (gobj_()), (const char*) (menu_item_id_to_c), (::GtkWidget*) (menu_item_to_c));
}
void base::ToolItemBase::set_proxy_menu_item (const std::string & menu_item_id) noexcept
{
  typedef void (*call_wrap_t) (::GtkToolItem* tool_item, const char* menu_item_id, ::GtkWidget* menu_item);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_item_set_proxy_menu_item;
  auto menu_item_to_c = nullptr;
  auto menu_item_id_to_c = gi::unwrap (menu_item_id, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkToolItem*) (gobj_()), (const char*) (menu_item_id_to_c), (::GtkWidget*) (menu_item_to_c));
}

// void gtk_tool_item_set_tooltip_markup (GtkToolItem* tool_item, const gchar* markup);
// void gtk_tool_item_set_tooltip_markup (::GtkToolItem* tool_item, const char* markup);
void base::ToolItemBase::set_tooltip_markup (const std::string & markup) noexcept
{
  typedef void (*call_wrap_t) (::GtkToolItem* tool_item, const char* markup);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_item_set_tooltip_markup;
  auto markup_to_c = gi::unwrap (markup, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkToolItem*) (gobj_()), (const char*) (markup_to_c));
}

// void gtk_tool_item_set_tooltip_text (GtkToolItem* tool_item, const gchar* text);
// void gtk_tool_item_set_tooltip_text (::GtkToolItem* tool_item, const char* text);
void base::ToolItemBase::set_tooltip_text (const std::string & text) noexcept
{
  typedef void (*call_wrap_t) (::GtkToolItem* tool_item, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_item_set_tooltip_text;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkToolItem*) (gobj_()), (const char*) (text_to_c));
}

// void gtk_tool_item_set_use_drag_window (GtkToolItem* tool_item, gboolean use_drag_window);
// void gtk_tool_item_set_use_drag_window (::GtkToolItem* tool_item, gboolean use_drag_window);
void base::ToolItemBase::set_use_drag_window (gboolean use_drag_window) noexcept
{
  typedef void (*call_wrap_t) (::GtkToolItem* tool_item, gboolean use_drag_window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_item_set_use_drag_window;
  auto use_drag_window_to_c = use_drag_window;
  call_wrap_v ((::GtkToolItem*) (gobj_()), (gboolean) (use_drag_window_to_c));
}

// void gtk_tool_item_set_visible_horizontal (GtkToolItem* tool_item, gboolean visible_horizontal);
// void gtk_tool_item_set_visible_horizontal (::GtkToolItem* tool_item, gboolean visible_horizontal);
void base::ToolItemBase::set_visible_horizontal (gboolean visible_horizontal) noexcept
{
  typedef void (*call_wrap_t) (::GtkToolItem* tool_item, gboolean visible_horizontal);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_item_set_visible_horizontal;
  auto visible_horizontal_to_c = visible_horizontal;
  call_wrap_v ((::GtkToolItem*) (gobj_()), (gboolean) (visible_horizontal_to_c));
}

// void gtk_tool_item_set_visible_vertical (GtkToolItem* tool_item, gboolean visible_vertical);
// void gtk_tool_item_set_visible_vertical (::GtkToolItem* tool_item, gboolean visible_vertical);
void base::ToolItemBase::set_visible_vertical (gboolean visible_vertical) noexcept
{
  typedef void (*call_wrap_t) (::GtkToolItem* tool_item, gboolean visible_vertical);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_item_set_visible_vertical;
  auto visible_vertical_to_c = visible_vertical;
  call_wrap_v ((::GtkToolItem*) (gobj_()), (gboolean) (visible_vertical_to_c));
}

// void gtk_tool_item_toolbar_reconfigured (GtkToolItem* tool_item);
// void gtk_tool_item_toolbar_reconfigured (::GtkToolItem* tool_item);
void base::ToolItemBase::toolbar_reconfigured () noexcept
{
  typedef void (*call_wrap_t) (::GtkToolItem* tool_item);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_item_toolbar_reconfigured;
  call_wrap_v ((::GtkToolItem*) (gobj_()));
}




} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/toolitem_extra_def_impl.hpp>)
#include <gtk/toolitem_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/toolitem_extra_impl.hpp>)
#include <gtk/toolitem_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ToolItemClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkToolItemClass *methods = (::GtkToolItemClass *) class_struct;
  (void) methods;

  methods->create_menu_proxy = (decltype (methods->create_menu_proxy)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::create_menu_proxy_>;
  methods->toolbar_reconfigured = (decltype (methods->toolbar_reconfigured)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::toolbar_reconfigured_>;
}

// gboolean ToolItem::create_menu_proxy (GtkToolItem* tool_item);
// gboolean ToolItem::create_menu_proxy (::GtkToolItem* tool_item);
bool ToolItemClass::create_menu_proxy_ () noexcept
{
  if (!get_struct_()->create_menu_proxy) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkToolItem* tool_item);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->create_menu_proxy;
  auto _temp_ret = call_wrap_v ((::GtkToolItem*) (gobj_()));
  return _temp_ret;
}

// void ToolItem::toolbar_reconfigured (GtkToolItem* tool_item);
// void ToolItem::toolbar_reconfigured (::GtkToolItem* tool_item);
void ToolItemClass::toolbar_reconfigured_ () noexcept
{
  if (!get_struct_()->toolbar_reconfigured) return ;
  typedef void (*call_wrap_t) (::GtkToolItem* tool_item);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->toolbar_reconfigured;
  call_wrap_v ((::GtkToolItem*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
