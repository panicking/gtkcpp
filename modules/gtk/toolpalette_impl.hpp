// AUTO-GENERATED

#ifndef _GI_GTK_TOOLPALETTE_IMPL_HPP_
#define _GI_GTK_TOOLPALETTE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Orientable ToolPaletteBase::interface_ (gi::interface_tag<Gtk::Orientable>)
{ return gi::wrap ((Gtk::Orientable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

ToolPaletteBase::operator Gtk::Orientable ()
{ return interface_ (gi::interface_tag<Gtk::Orientable>()); }

Gtk::Scrollable ToolPaletteBase::interface_ (gi::interface_tag<Gtk::Scrollable>)
{ return gi::wrap ((Gtk::Scrollable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

ToolPaletteBase::operator Gtk::Scrollable ()
{ return interface_ (gi::interface_tag<Gtk::Scrollable>()); }

// GtkWidget* gtk_tool_palette_new ();
// ::GtkToolPalette* gtk_tool_palette_new ();
Gtk::ToolPalette base::ToolPaletteBase::new_ () noexcept
{
  typedef ::GtkToolPalette* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_palette_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const GtkTargetEntry* gtk_tool_palette_get_drag_target_group ();
// const ::GtkTargetEntry* gtk_tool_palette_get_drag_target_group ();
Gtk::TargetEntry base::ToolPaletteBase::get_drag_target_group () noexcept
{
  typedef const ::GtkTargetEntry* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_palette_get_drag_target_group;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const GtkTargetEntry* gtk_tool_palette_get_drag_target_item ();
// const ::GtkTargetEntry* gtk_tool_palette_get_drag_target_item ();
Gtk::TargetEntry base::ToolPaletteBase::get_drag_target_item () noexcept
{
  typedef const ::GtkTargetEntry* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_palette_get_drag_target_item;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_tool_palette_add_drag_dest (GtkToolPalette* palette, GtkWidget* widget, GtkDestDefaults flags, GtkToolPaletteDragTargets targets, GdkDragAction actions);
// void gtk_tool_palette_add_drag_dest (::GtkToolPalette* palette, ::GtkWidget* widget, ::GtkDestDefaults flags, ::GtkToolPaletteDragTargets targets, ::GdkDragAction actions);
void base::ToolPaletteBase::add_drag_dest (Gtk::Widget widget, Gtk::DestDefaults flags, Gtk::ToolPaletteDragTargets targets, Gdk::DragAction actions) noexcept
{
  typedef void (*call_wrap_t) (::GtkToolPalette* palette, ::GtkWidget* widget, ::GtkDestDefaults flags, ::GtkToolPaletteDragTargets targets, ::GdkDragAction actions);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_palette_add_drag_dest;
  auto actions_to_c = gi::unwrap (actions);
  auto targets_to_c = gi::unwrap (targets);
  auto flags_to_c = gi::unwrap (flags);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkToolPalette*) (gobj_()), (::GtkWidget*) (widget_to_c), (::GtkDestDefaults) (flags_to_c), (::GtkToolPaletteDragTargets) (targets_to_c), (::GdkDragAction) (actions_to_c));
}

// GtkWidget* gtk_tool_palette_get_drag_item (GtkToolPalette* palette, const GtkSelectionData* selection);
// ::GtkWidget* gtk_tool_palette_get_drag_item (::GtkToolPalette* palette, const ::GtkSelectionData* selection);
Gtk::Widget base::ToolPaletteBase::get_drag_item (const Gtk::SelectionData & selection) noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkToolPalette* palette, const ::GtkSelectionData* selection);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_palette_get_drag_item;
  auto selection_to_c = gi::unwrap (selection, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkToolPalette*) (gobj_()), (const ::GtkSelectionData*) (selection_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkToolItemGroup* gtk_tool_palette_get_drop_group (GtkToolPalette* palette, gint x, gint y);
// ::GtkToolItemGroup* gtk_tool_palette_get_drop_group (::GtkToolPalette* palette, gint x, gint y);
Gtk::ToolItemGroup base::ToolPaletteBase::get_drop_group (gint x, gint y) noexcept
{
  typedef ::GtkToolItemGroup* (*call_wrap_t) (::GtkToolPalette* palette, gint x, gint y);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_palette_get_drop_group;
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::GtkToolPalette*) (gobj_()), (gint) (x_to_c), (gint) (y_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkToolItem* gtk_tool_palette_get_drop_item (GtkToolPalette* palette, gint x, gint y);
// ::GtkToolItem* gtk_tool_palette_get_drop_item (::GtkToolPalette* palette, gint x, gint y);
Gtk::ToolItem base::ToolPaletteBase::get_drop_item (gint x, gint y) noexcept
{
  typedef ::GtkToolItem* (*call_wrap_t) (::GtkToolPalette* palette, gint x, gint y);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_palette_get_drop_item;
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::GtkToolPalette*) (gobj_()), (gint) (x_to_c), (gint) (y_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_tool_palette_get_exclusive (GtkToolPalette* palette, GtkToolItemGroup* group);
// gboolean gtk_tool_palette_get_exclusive (::GtkToolPalette* palette, ::GtkToolItemGroup* group);
bool base::ToolPaletteBase::get_exclusive (Gtk::ToolItemGroup group) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkToolPalette* palette, ::GtkToolItemGroup* group);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_palette_get_exclusive;
  auto group_to_c = gi::unwrap (group, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkToolPalette*) (gobj_()), (::GtkToolItemGroup*) (group_to_c));
  return _temp_ret;
}

// gboolean gtk_tool_palette_get_expand (GtkToolPalette* palette, GtkToolItemGroup* group);
// gboolean gtk_tool_palette_get_expand (::GtkToolPalette* palette, ::GtkToolItemGroup* group);
bool base::ToolPaletteBase::get_expand (Gtk::ToolItemGroup group) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkToolPalette* palette, ::GtkToolItemGroup* group);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_palette_get_expand;
  auto group_to_c = gi::unwrap (group, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkToolPalette*) (gobj_()), (::GtkToolItemGroup*) (group_to_c));
  return _temp_ret;
}

// gint gtk_tool_palette_get_group_position (GtkToolPalette* palette, GtkToolItemGroup* group);
// gint gtk_tool_palette_get_group_position (::GtkToolPalette* palette, ::GtkToolItemGroup* group);
gint base::ToolPaletteBase::get_group_position (Gtk::ToolItemGroup group) noexcept
{
  typedef gint (*call_wrap_t) (::GtkToolPalette* palette, ::GtkToolItemGroup* group);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_palette_get_group_position;
  auto group_to_c = gi::unwrap (group, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkToolPalette*) (gobj_()), (::GtkToolItemGroup*) (group_to_c));
  return _temp_ret;
}

// GtkAdjustment* gtk_tool_palette_get_hadjustment (GtkToolPalette* palette);
// ::GtkAdjustment* gtk_tool_palette_get_hadjustment (::GtkToolPalette* palette);
// IGNORE; deprecated

// GtkIconSize gtk_tool_palette_get_icon_size (GtkToolPalette* palette);
// gint gtk_tool_palette_get_icon_size (::GtkToolPalette* palette);
gint base::ToolPaletteBase::get_icon_size () noexcept
{
  typedef gint (*call_wrap_t) (::GtkToolPalette* palette);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_palette_get_icon_size;
  auto _temp_ret = call_wrap_v ((::GtkToolPalette*) (gobj_()));
  return _temp_ret;
}

// GtkToolbarStyle gtk_tool_palette_get_style (GtkToolPalette* palette);
// ::GtkToolbarStyle gtk_tool_palette_get_style (::GtkToolPalette* palette);
Gtk::ToolbarStyle base::ToolPaletteBase::get_style () noexcept
{
  typedef ::GtkToolbarStyle (*call_wrap_t) (::GtkToolPalette* palette);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_palette_get_style;
  auto _temp_ret = call_wrap_v ((::GtkToolPalette*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkAdjustment* gtk_tool_palette_get_vadjustment (GtkToolPalette* palette);
// ::GtkAdjustment* gtk_tool_palette_get_vadjustment (::GtkToolPalette* palette);
// IGNORE; deprecated

// void gtk_tool_palette_set_drag_source (GtkToolPalette* palette, GtkToolPaletteDragTargets targets);
// void gtk_tool_palette_set_drag_source (::GtkToolPalette* palette, ::GtkToolPaletteDragTargets targets);
void base::ToolPaletteBase::set_drag_source (Gtk::ToolPaletteDragTargets targets) noexcept
{
  typedef void (*call_wrap_t) (::GtkToolPalette* palette, ::GtkToolPaletteDragTargets targets);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_palette_set_drag_source;
  auto targets_to_c = gi::unwrap (targets);
  call_wrap_v ((::GtkToolPalette*) (gobj_()), (::GtkToolPaletteDragTargets) (targets_to_c));
}

// void gtk_tool_palette_set_exclusive (GtkToolPalette* palette, GtkToolItemGroup* group, gboolean exclusive);
// void gtk_tool_palette_set_exclusive (::GtkToolPalette* palette, ::GtkToolItemGroup* group, gboolean exclusive);
void base::ToolPaletteBase::set_exclusive (Gtk::ToolItemGroup group, gboolean exclusive) noexcept
{
  typedef void (*call_wrap_t) (::GtkToolPalette* palette, ::GtkToolItemGroup* group, gboolean exclusive);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_palette_set_exclusive;
  auto exclusive_to_c = exclusive;
  auto group_to_c = gi::unwrap (group, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkToolPalette*) (gobj_()), (::GtkToolItemGroup*) (group_to_c), (gboolean) (exclusive_to_c));
}

// void gtk_tool_palette_set_expand (GtkToolPalette* palette, GtkToolItemGroup* group, gboolean expand);
// void gtk_tool_palette_set_expand (::GtkToolPalette* palette, ::GtkToolItemGroup* group, gboolean expand);
void base::ToolPaletteBase::set_expand (Gtk::ToolItemGroup group, gboolean expand) noexcept
{
  typedef void (*call_wrap_t) (::GtkToolPalette* palette, ::GtkToolItemGroup* group, gboolean expand);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_palette_set_expand;
  auto expand_to_c = expand;
  auto group_to_c = gi::unwrap (group, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkToolPalette*) (gobj_()), (::GtkToolItemGroup*) (group_to_c), (gboolean) (expand_to_c));
}

// void gtk_tool_palette_set_group_position (GtkToolPalette* palette, GtkToolItemGroup* group, gint position);
// void gtk_tool_palette_set_group_position (::GtkToolPalette* palette, ::GtkToolItemGroup* group, gint position);
void base::ToolPaletteBase::set_group_position (Gtk::ToolItemGroup group, gint position) noexcept
{
  typedef void (*call_wrap_t) (::GtkToolPalette* palette, ::GtkToolItemGroup* group, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_palette_set_group_position;
  auto position_to_c = position;
  auto group_to_c = gi::unwrap (group, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkToolPalette*) (gobj_()), (::GtkToolItemGroup*) (group_to_c), (gint) (position_to_c));
}

// void gtk_tool_palette_set_icon_size (GtkToolPalette* palette, GtkIconSize icon_size);
// void gtk_tool_palette_set_icon_size (::GtkToolPalette* palette, gint icon_size);
void base::ToolPaletteBase::set_icon_size (gint icon_size) noexcept
{
  typedef void (*call_wrap_t) (::GtkToolPalette* palette, gint icon_size);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_palette_set_icon_size;
  auto icon_size_to_c = icon_size;
  call_wrap_v ((::GtkToolPalette*) (gobj_()), (gint) (icon_size_to_c));
}

// void gtk_tool_palette_set_style (GtkToolPalette* palette, GtkToolbarStyle style);
// void gtk_tool_palette_set_style (::GtkToolPalette* palette, ::GtkToolbarStyle style);
void base::ToolPaletteBase::set_style (Gtk::ToolbarStyle style) noexcept
{
  typedef void (*call_wrap_t) (::GtkToolPalette* palette, ::GtkToolbarStyle style);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_palette_set_style;
  auto style_to_c = gi::unwrap (style);
  call_wrap_v ((::GtkToolPalette*) (gobj_()), (::GtkToolbarStyle) (style_to_c));
}

// void gtk_tool_palette_unset_icon_size (GtkToolPalette* palette);
// void gtk_tool_palette_unset_icon_size (::GtkToolPalette* palette);
void base::ToolPaletteBase::unset_icon_size () noexcept
{
  typedef void (*call_wrap_t) (::GtkToolPalette* palette);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_palette_unset_icon_size;
  call_wrap_v ((::GtkToolPalette*) (gobj_()));
}

// void gtk_tool_palette_unset_style (GtkToolPalette* palette);
// void gtk_tool_palette_unset_style (::GtkToolPalette* palette);
void base::ToolPaletteBase::unset_style () noexcept
{
  typedef void (*call_wrap_t) (::GtkToolPalette* palette);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_palette_unset_style;
  call_wrap_v ((::GtkToolPalette*) (gobj_()));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/toolpalette_extra_def_impl.hpp>)
#include <gtk/toolpalette_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/toolpalette_extra_impl.hpp>)
#include <gtk/toolpalette_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ToolPaletteClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkToolPaletteClass *methods = (::GtkToolPaletteClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
