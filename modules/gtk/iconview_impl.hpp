// AUTO-GENERATED

#ifndef _GI_GTK_ICONVIEW_IMPL_HPP_
#define _GI_GTK_ICONVIEW_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::CellLayout IconViewBase::interface_ (gi::interface_tag<Gtk::CellLayout>)
{ return gi::wrap ((Gtk::CellLayout::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

IconViewBase::operator Gtk::CellLayout ()
{ return interface_ (gi::interface_tag<Gtk::CellLayout>()); }

Gtk::Scrollable IconViewBase::interface_ (gi::interface_tag<Gtk::Scrollable>)
{ return gi::wrap ((Gtk::Scrollable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

IconViewBase::operator Gtk::Scrollable ()
{ return interface_ (gi::interface_tag<Gtk::Scrollable>()); }

// GtkWidget* gtk_icon_view_new ();
// ::GtkIconView* gtk_icon_view_new ();
Gtk::IconView base::IconViewBase::new_ () noexcept
{
  typedef ::GtkIconView* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_icon_view_new_with_area (GtkCellArea* area);
// ::GtkIconView* gtk_icon_view_new_with_area (::GtkCellArea* area);
Gtk::IconView base::IconViewBase::new_with_area (Gtk::CellArea area) noexcept
{
  typedef ::GtkIconView* (*call_wrap_t) (::GtkCellArea* area);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_new_with_area;
  auto area_to_c = gi::unwrap (area, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (area_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_icon_view_new_with_model (GtkTreeModel* model);
// ::GtkIconView* gtk_icon_view_new_with_model (::GtkTreeModel* model);
Gtk::IconView base::IconViewBase::new_with_model (Gtk::TreeModel model) noexcept
{
  typedef ::GtkIconView* (*call_wrap_t) (::GtkTreeModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_new_with_model;
  auto model_to_c = gi::unwrap (model, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (model_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_icon_view_convert_widget_to_bin_window_coords (GtkIconView* icon_view, gint wx, gint wy, gint* bx, gint* by);
// void gtk_icon_view_convert_widget_to_bin_window_coords (::GtkIconView* icon_view, gint wx, gint wy, gint* bx, gint* by);
void base::IconViewBase::convert_widget_to_bin_window_coords (gint wx, gint wy, gint & bx, gint & by) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, gint wx, gint wy, gint* bx, gint* by);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_convert_widget_to_bin_window_coords;
  gint by_o {};
  gint bx_o {};
  auto wy_to_c = wy;
  auto wx_to_c = wx;
  call_wrap_v ((::GtkIconView*) (gobj_()), (gint) (wx_to_c), (gint) (wy_to_c), (gint*) (&bx_o), (gint*) (&by_o));
  by = by_o;
  bx = bx_o;
}
std::tuple<gint, gint> base::IconViewBase::convert_widget_to_bin_window_coords (gint wx, gint wy) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, gint wx, gint wy, gint* bx, gint* by);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_convert_widget_to_bin_window_coords;
  gint by_o {};
  gint bx_o {};
  auto wy_to_c = wy;
  auto wx_to_c = wx;
  call_wrap_v ((::GtkIconView*) (gobj_()), (gint) (wx_to_c), (gint) (wy_to_c), (gint*) (&bx_o), (gint*) (&by_o));
  return std::make_tuple (bx_o, by_o);
}

// cairo_surface_t* gtk_icon_view_create_drag_icon (GtkIconView* icon_view, GtkTreePath* path);
// ::cairo_surface_t* gtk_icon_view_create_drag_icon (::GtkIconView* icon_view, ::GtkTreePath* path);
cairo::Surface base::IconViewBase::create_drag_icon (Gtk::TreePath path) noexcept
{
  typedef ::cairo_surface_t* (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_create_drag_icon;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTreePath*) (path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gtk_icon_view_enable_model_drag_dest (GtkIconView* icon_view, const GtkTargetEntry* targets, gint n_targets, GdkDragAction actions);
// void gtk_icon_view_enable_model_drag_dest (::GtkIconView* icon_view, const ::GtkTargetEntry** targets, gint n_targets, ::GdkDragAction actions);
// SKIP; inconsistent in targets pointer depth (1 vs 2)

// void gtk_icon_view_enable_model_drag_source (GtkIconView* icon_view, GdkModifierType start_button_mask, const GtkTargetEntry* targets, gint n_targets, GdkDragAction actions);
// void gtk_icon_view_enable_model_drag_source (::GtkIconView* icon_view, ::GdkModifierType start_button_mask, const ::GtkTargetEntry** targets, gint n_targets, ::GdkDragAction actions);
// SKIP; inconsistent in targets pointer depth (1 vs 2)

// gboolean gtk_icon_view_get_activate_on_single_click (GtkIconView* icon_view);
// gboolean gtk_icon_view_get_activate_on_single_click (::GtkIconView* icon_view);
bool base::IconViewBase::get_activate_on_single_click () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIconView* icon_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_get_activate_on_single_click;
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_icon_view_get_cell_rect (GtkIconView* icon_view, GtkTreePath* path, GtkCellRenderer* cell, GdkRectangle* rect);
// gboolean gtk_icon_view_get_cell_rect (::GtkIconView* icon_view, ::GtkTreePath* path, ::GtkCellRenderer* cell, ::GdkRectangle* rect);
bool base::IconViewBase::get_cell_rect (Gtk::TreePath path, Gtk::CellRenderer cell, Gdk::Rectangle & rect) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTreePath* path, ::GtkCellRenderer* cell, ::GdkRectangle* rect);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_get_cell_rect;
  traits::unset_wrapper<::GdkRectangle>::type rect_c;
  auto cell_to_c = gi::unwrap (cell, gi::transfer_none, gi::direction_in);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkCellRenderer*) (cell_to_c), (::GdkRectangle*) ((::GdkRectangle*) &rect_c));
  rect = gi::wrap ((::GdkRectangle*) &rect_c, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
bool base::IconViewBase::get_cell_rect (Gtk::TreePath path, Gdk::Rectangle & rect) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTreePath* path, ::GtkCellRenderer* cell, ::GdkRectangle* rect);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_get_cell_rect;
  traits::unset_wrapper<::GdkRectangle>::type rect_c;
  auto cell_to_c = nullptr;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkCellRenderer*) (cell_to_c), (::GdkRectangle*) ((::GdkRectangle*) &rect_c));
  rect = gi::wrap ((::GdkRectangle*) &rect_c, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Gdk::Rectangle> base::IconViewBase::get_cell_rect (Gtk::TreePath path, Gtk::CellRenderer cell) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTreePath* path, ::GtkCellRenderer* cell, ::GdkRectangle* rect);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_get_cell_rect;
  traits::unset_wrapper<::GdkRectangle>::type rect_c;
  auto cell_to_c = gi::unwrap (cell, gi::transfer_none, gi::direction_in);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkCellRenderer*) (cell_to_c), (::GdkRectangle*) ((::GdkRectangle*) &rect_c));
  return std::make_tuple (_temp_ret, gi::wrap ((::GdkRectangle*) &rect_c, gi::transfer_none, gi::direction_out));
}
std::tuple<bool, Gdk::Rectangle> base::IconViewBase::get_cell_rect (Gtk::TreePath path) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTreePath* path, ::GtkCellRenderer* cell, ::GdkRectangle* rect);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_get_cell_rect;
  traits::unset_wrapper<::GdkRectangle>::type rect_c;
  auto cell_to_c = nullptr;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkCellRenderer*) (cell_to_c), (::GdkRectangle*) ((::GdkRectangle*) &rect_c));
  return std::make_tuple (_temp_ret, gi::wrap ((::GdkRectangle*) &rect_c, gi::transfer_none, gi::direction_out));
}

// gint gtk_icon_view_get_column_spacing (GtkIconView* icon_view);
// gint gtk_icon_view_get_column_spacing (::GtkIconView* icon_view);
gint base::IconViewBase::get_column_spacing () noexcept
{
  typedef gint (*call_wrap_t) (::GtkIconView* icon_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_get_column_spacing;
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()));
  return _temp_ret;
}

// gint gtk_icon_view_get_columns (GtkIconView* icon_view);
// gint gtk_icon_view_get_columns (::GtkIconView* icon_view);
gint base::IconViewBase::get_columns () noexcept
{
  typedef gint (*call_wrap_t) (::GtkIconView* icon_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_get_columns;
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_icon_view_get_cursor (GtkIconView* icon_view, GtkTreePath** path, GtkCellRenderer** cell);
// gboolean gtk_icon_view_get_cursor (::GtkIconView* icon_view, ::GtkTreePath** path, ::GtkCellRenderer** cell);
bool base::IconViewBase::get_cursor (Gtk::TreePath * path, Gtk::CellRenderer * cell) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTreePath** path, ::GtkCellRenderer** cell);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_get_cursor;
  ::GtkCellRenderer* cell_o {};
  ::GtkTreePath* path_o {};
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTreePath**) (path ? &path_o : nullptr), (::GtkCellRenderer**) (cell ? &cell_o : nullptr));
  if (cell) *cell = gi::wrap (cell_o, gi::transfer_none, gi::direction_out);
  if (path) *path = gi::wrap (path_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Gtk::TreePath, Gtk::CellRenderer> base::IconViewBase::get_cursor () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTreePath** path, ::GtkCellRenderer** cell);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_get_cursor;
  ::GtkCellRenderer* cell_o {};
  ::GtkTreePath* path_o {};
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTreePath**) (&path_o), (::GtkCellRenderer**) (&cell_o));
  return std::make_tuple (_temp_ret, gi::wrap (path_o, gi::transfer_full, gi::direction_out), gi::wrap (cell_o, gi::transfer_none, gi::direction_out));
}

// gboolean gtk_icon_view_get_dest_item_at_pos (GtkIconView* icon_view, gint drag_x, gint drag_y, GtkTreePath** path, GtkIconViewDropPosition* pos);
// gboolean gtk_icon_view_get_dest_item_at_pos (::GtkIconView* icon_view, gint drag_x, gint drag_y, ::GtkTreePath** path, ::GtkIconViewDropPosition* pos);
bool base::IconViewBase::get_dest_item_at_pos (gint drag_x, gint drag_y, Gtk::TreePath * path, Gtk::IconViewDropPosition * pos) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIconView* icon_view, gint drag_x, gint drag_y, ::GtkTreePath** path, ::GtkIconViewDropPosition* pos);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_get_dest_item_at_pos;
  ::GtkIconViewDropPosition pos_o {};
  ::GtkTreePath* path_o {};
  auto drag_y_to_c = drag_y;
  auto drag_x_to_c = drag_x;
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()), (gint) (drag_x_to_c), (gint) (drag_y_to_c), (::GtkTreePath**) (path ? &path_o : nullptr), (::GtkIconViewDropPosition*) (pos ? &pos_o : nullptr));
  if (pos) *pos = gi::wrap (pos_o);
  if (path) *path = gi::wrap (path_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Gtk::TreePath, Gtk::IconViewDropPosition> base::IconViewBase::get_dest_item_at_pos (gint drag_x, gint drag_y) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIconView* icon_view, gint drag_x, gint drag_y, ::GtkTreePath** path, ::GtkIconViewDropPosition* pos);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_get_dest_item_at_pos;
  ::GtkIconViewDropPosition pos_o {};
  ::GtkTreePath* path_o {};
  auto drag_y_to_c = drag_y;
  auto drag_x_to_c = drag_x;
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()), (gint) (drag_x_to_c), (gint) (drag_y_to_c), (::GtkTreePath**) (&path_o), (::GtkIconViewDropPosition*) (&pos_o));
  return std::make_tuple (_temp_ret, gi::wrap (path_o, gi::transfer_full, gi::direction_out), gi::wrap (pos_o));
}

// void gtk_icon_view_get_drag_dest_item (GtkIconView* icon_view, GtkTreePath** path, GtkIconViewDropPosition* pos);
// void gtk_icon_view_get_drag_dest_item (::GtkIconView* icon_view, ::GtkTreePath** path, ::GtkIconViewDropPosition* pos);
void base::IconViewBase::get_drag_dest_item (Gtk::TreePath * path, Gtk::IconViewDropPosition * pos) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTreePath** path, ::GtkIconViewDropPosition* pos);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_get_drag_dest_item;
  ::GtkIconViewDropPosition pos_o {};
  ::GtkTreePath* path_o {};
  call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTreePath**) (path ? &path_o : nullptr), (::GtkIconViewDropPosition*) (pos ? &pos_o : nullptr));
  if (pos) *pos = gi::wrap (pos_o);
  if (path) *path = gi::wrap (path_o, gi::transfer_full, gi::direction_out);
}
std::tuple<Gtk::TreePath, Gtk::IconViewDropPosition> base::IconViewBase::get_drag_dest_item () noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTreePath** path, ::GtkIconViewDropPosition* pos);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_get_drag_dest_item;
  ::GtkIconViewDropPosition pos_o {};
  ::GtkTreePath* path_o {};
  call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTreePath**) (&path_o), (::GtkIconViewDropPosition*) (&pos_o));
  return std::make_tuple (gi::wrap (path_o, gi::transfer_full, gi::direction_out), gi::wrap (pos_o));
}

// gboolean gtk_icon_view_get_item_at_pos (GtkIconView* icon_view, gint x, gint y, GtkTreePath** path, GtkCellRenderer** cell);
// gboolean gtk_icon_view_get_item_at_pos (::GtkIconView* icon_view, gint x, gint y, ::GtkTreePath** path, ::GtkCellRenderer** cell);
bool base::IconViewBase::get_item_at_pos (gint x, gint y, Gtk::TreePath * path, Gtk::CellRenderer * cell) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIconView* icon_view, gint x, gint y, ::GtkTreePath** path, ::GtkCellRenderer** cell);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_get_item_at_pos;
  ::GtkCellRenderer* cell_o {};
  ::GtkTreePath* path_o {};
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()), (gint) (x_to_c), (gint) (y_to_c), (::GtkTreePath**) (path ? &path_o : nullptr), (::GtkCellRenderer**) (cell ? &cell_o : nullptr));
  if (cell) *cell = gi::wrap (cell_o, gi::transfer_none, gi::direction_out);
  if (path) *path = gi::wrap (path_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Gtk::TreePath, Gtk::CellRenderer> base::IconViewBase::get_item_at_pos (gint x, gint y) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIconView* icon_view, gint x, gint y, ::GtkTreePath** path, ::GtkCellRenderer** cell);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_get_item_at_pos;
  ::GtkCellRenderer* cell_o {};
  ::GtkTreePath* path_o {};
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()), (gint) (x_to_c), (gint) (y_to_c), (::GtkTreePath**) (&path_o), (::GtkCellRenderer**) (&cell_o));
  return std::make_tuple (_temp_ret, gi::wrap (path_o, gi::transfer_full, gi::direction_out), gi::wrap (cell_o, gi::transfer_none, gi::direction_out));
}

// gint gtk_icon_view_get_item_column (GtkIconView* icon_view, GtkTreePath* path);
// gint gtk_icon_view_get_item_column (::GtkIconView* icon_view, ::GtkTreePath* path);
gint base::IconViewBase::get_item_column (Gtk::TreePath path) noexcept
{
  typedef gint (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_get_item_column;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTreePath*) (path_to_c));
  return _temp_ret;
}

// GtkOrientation gtk_icon_view_get_item_orientation (GtkIconView* icon_view);
// ::GtkOrientation gtk_icon_view_get_item_orientation (::GtkIconView* icon_view);
Gtk::Orientation base::IconViewBase::get_item_orientation () noexcept
{
  typedef ::GtkOrientation (*call_wrap_t) (::GtkIconView* icon_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_get_item_orientation;
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gint gtk_icon_view_get_item_padding (GtkIconView* icon_view);
// gint gtk_icon_view_get_item_padding (::GtkIconView* icon_view);
gint base::IconViewBase::get_item_padding () noexcept
{
  typedef gint (*call_wrap_t) (::GtkIconView* icon_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_get_item_padding;
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()));
  return _temp_ret;
}

// gint gtk_icon_view_get_item_row (GtkIconView* icon_view, GtkTreePath* path);
// gint gtk_icon_view_get_item_row (::GtkIconView* icon_view, ::GtkTreePath* path);
gint base::IconViewBase::get_item_row (Gtk::TreePath path) noexcept
{
  typedef gint (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_get_item_row;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTreePath*) (path_to_c));
  return _temp_ret;
}

// gint gtk_icon_view_get_item_width (GtkIconView* icon_view);
// gint gtk_icon_view_get_item_width (::GtkIconView* icon_view);
gint base::IconViewBase::get_item_width () noexcept
{
  typedef gint (*call_wrap_t) (::GtkIconView* icon_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_get_item_width;
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()));
  return _temp_ret;
}

// gint gtk_icon_view_get_margin (GtkIconView* icon_view);
// gint gtk_icon_view_get_margin (::GtkIconView* icon_view);
gint base::IconViewBase::get_margin () noexcept
{
  typedef gint (*call_wrap_t) (::GtkIconView* icon_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_get_margin;
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()));
  return _temp_ret;
}

// gint gtk_icon_view_get_markup_column (GtkIconView* icon_view);
// gint gtk_icon_view_get_markup_column (::GtkIconView* icon_view);
gint base::IconViewBase::get_markup_column () noexcept
{
  typedef gint (*call_wrap_t) (::GtkIconView* icon_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_get_markup_column;
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()));
  return _temp_ret;
}

// GtkTreeModel* gtk_icon_view_get_model (GtkIconView* icon_view);
// ::GtkTreeModel* gtk_icon_view_get_model (::GtkIconView* icon_view);
Gtk::TreeModel base::IconViewBase::get_model () noexcept
{
  typedef ::GtkTreeModel* (*call_wrap_t) (::GtkIconView* icon_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_get_model;
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkTreePath* gtk_icon_view_get_path_at_pos (GtkIconView* icon_view, gint x, gint y);
// ::GtkTreePath* gtk_icon_view_get_path_at_pos (::GtkIconView* icon_view, gint x, gint y);
Gtk::TreePath base::IconViewBase::get_path_at_pos (gint x, gint y) noexcept
{
  typedef ::GtkTreePath* (*call_wrap_t) (::GtkIconView* icon_view, gint x, gint y);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_get_path_at_pos;
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()), (gint) (x_to_c), (gint) (y_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gint gtk_icon_view_get_pixbuf_column (GtkIconView* icon_view);
// gint gtk_icon_view_get_pixbuf_column (::GtkIconView* icon_view);
gint base::IconViewBase::get_pixbuf_column () noexcept
{
  typedef gint (*call_wrap_t) (::GtkIconView* icon_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_get_pixbuf_column;
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_icon_view_get_reorderable (GtkIconView* icon_view);
// gboolean gtk_icon_view_get_reorderable (::GtkIconView* icon_view);
bool base::IconViewBase::get_reorderable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIconView* icon_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_get_reorderable;
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()));
  return _temp_ret;
}

// gint gtk_icon_view_get_row_spacing (GtkIconView* icon_view);
// gint gtk_icon_view_get_row_spacing (::GtkIconView* icon_view);
gint base::IconViewBase::get_row_spacing () noexcept
{
  typedef gint (*call_wrap_t) (::GtkIconView* icon_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_get_row_spacing;
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()));
  return _temp_ret;
}

// GList* gtk_icon_view_get_selected_items (GtkIconView* icon_view);
// ::GList* gtk_icon_view_get_selected_items (::GtkIconView* icon_view);
std::vector<Gtk::TreePath> base::IconViewBase::get_selected_items () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GtkIconView* icon_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_get_selected_items;
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()));
  return gi::detail::wrap_list<Gtk::TreePath> (_temp_ret, gi::transfer_full);
}

// GtkSelectionMode gtk_icon_view_get_selection_mode (GtkIconView* icon_view);
// ::GtkSelectionMode gtk_icon_view_get_selection_mode (::GtkIconView* icon_view);
Gtk::SelectionMode base::IconViewBase::get_selection_mode () noexcept
{
  typedef ::GtkSelectionMode (*call_wrap_t) (::GtkIconView* icon_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_get_selection_mode;
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gint gtk_icon_view_get_spacing (GtkIconView* icon_view);
// gint gtk_icon_view_get_spacing (::GtkIconView* icon_view);
gint base::IconViewBase::get_spacing () noexcept
{
  typedef gint (*call_wrap_t) (::GtkIconView* icon_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_get_spacing;
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()));
  return _temp_ret;
}

// gint gtk_icon_view_get_text_column (GtkIconView* icon_view);
// gint gtk_icon_view_get_text_column (::GtkIconView* icon_view);
gint base::IconViewBase::get_text_column () noexcept
{
  typedef gint (*call_wrap_t) (::GtkIconView* icon_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_get_text_column;
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()));
  return _temp_ret;
}

// gint gtk_icon_view_get_tooltip_column (GtkIconView* icon_view);
// gint gtk_icon_view_get_tooltip_column (::GtkIconView* icon_view);
gint base::IconViewBase::get_tooltip_column () noexcept
{
  typedef gint (*call_wrap_t) (::GtkIconView* icon_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_get_tooltip_column;
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_icon_view_get_tooltip_context (GtkIconView* icon_view, gint* x, gint* y, gboolean keyboard_tip, GtkTreeModel** model, GtkTreePath** path, GtkTreeIter* iter);
// gboolean gtk_icon_view_get_tooltip_context (::GtkIconView* icon_view, gint* x, gint* y, gboolean keyboard_tip, ::GtkTreeModel** model, ::GtkTreePath** path, ::GtkTreeIter* iter);
bool base::IconViewBase::get_tooltip_context (gint & x, gint & y, gboolean keyboard_tip, Gtk::TreeModel * model, Gtk::TreePath * path, Gtk::TreeIter * iter) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIconView* icon_view, gint* x, gint* y, gboolean keyboard_tip, ::GtkTreeModel** model, ::GtkTreePath** path, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_get_tooltip_context;
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  ::GtkTreePath* path_o {};
  ::GtkTreeModel* model_o {};
  auto keyboard_tip_to_c = keyboard_tip;
  auto y_to_c = y;
  gint y_o = y_to_c;
  auto x_to_c = x;
  gint x_o = x_to_c;
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()), (gint*) (&x_o), (gint*) (&y_o), (gboolean) (keyboard_tip_to_c), (::GtkTreeModel**) (model ? &model_o : nullptr), (::GtkTreePath**) (path ? &path_o : nullptr), (::GtkTreeIter*) (iter ? (::GtkTreeIter*) &iter_c : nullptr));
  if (iter) *iter = gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out);
  if (path) *path = gi::wrap (path_o, gi::transfer_full, gi::direction_out);
  if (model) *model = gi::wrap (model_o, gi::transfer_none, gi::direction_out);
  y = y_o;
  x = x_o;
  return _temp_ret;
}
std::tuple<bool, Gtk::TreeModel, Gtk::TreePath, Gtk::TreeIter> base::IconViewBase::get_tooltip_context (gint & x, gint & y, gboolean keyboard_tip) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIconView* icon_view, gint* x, gint* y, gboolean keyboard_tip, ::GtkTreeModel** model, ::GtkTreePath** path, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_get_tooltip_context;
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  ::GtkTreePath* path_o {};
  ::GtkTreeModel* model_o {};
  auto keyboard_tip_to_c = keyboard_tip;
  auto y_to_c = y;
  gint y_o = y_to_c;
  auto x_to_c = x;
  gint x_o = x_to_c;
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()), (gint*) (&x_o), (gint*) (&y_o), (gboolean) (keyboard_tip_to_c), (::GtkTreeModel**) (&model_o), (::GtkTreePath**) (&path_o), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c));
  y = y_o;
  x = x_o;
  return std::make_tuple (_temp_ret, gi::wrap (model_o, gi::transfer_none, gi::direction_out), gi::wrap (path_o, gi::transfer_full, gi::direction_out), gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out));
}

// gboolean gtk_icon_view_get_visible_range (GtkIconView* icon_view, GtkTreePath** start_path, GtkTreePath** end_path);
// gboolean gtk_icon_view_get_visible_range (::GtkIconView* icon_view, ::GtkTreePath** start_path, ::GtkTreePath** end_path);
bool base::IconViewBase::get_visible_range (Gtk::TreePath * start_path, Gtk::TreePath * end_path) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTreePath** start_path, ::GtkTreePath** end_path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_get_visible_range;
  ::GtkTreePath* end_path_o {};
  ::GtkTreePath* start_path_o {};
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTreePath**) (start_path ? &start_path_o : nullptr), (::GtkTreePath**) (end_path ? &end_path_o : nullptr));
  if (end_path) *end_path = gi::wrap (end_path_o, gi::transfer_full, gi::direction_out);
  if (start_path) *start_path = gi::wrap (start_path_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Gtk::TreePath, Gtk::TreePath> base::IconViewBase::get_visible_range () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTreePath** start_path, ::GtkTreePath** end_path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_get_visible_range;
  ::GtkTreePath* end_path_o {};
  ::GtkTreePath* start_path_o {};
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTreePath**) (&start_path_o), (::GtkTreePath**) (&end_path_o));
  return std::make_tuple (_temp_ret, gi::wrap (start_path_o, gi::transfer_full, gi::direction_out), gi::wrap (end_path_o, gi::transfer_full, gi::direction_out));
}

// void gtk_icon_view_item_activated (GtkIconView* icon_view, GtkTreePath* path);
// void gtk_icon_view_item_activated (::GtkIconView* icon_view, ::GtkTreePath* path);
void base::IconViewBase::item_activated (Gtk::TreePath path) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_item_activated;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTreePath*) (path_to_c));
}

// gboolean gtk_icon_view_path_is_selected (GtkIconView* icon_view, GtkTreePath* path);
// gboolean gtk_icon_view_path_is_selected (::GtkIconView* icon_view, ::GtkTreePath* path);
bool base::IconViewBase::path_is_selected (Gtk::TreePath path) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_path_is_selected;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTreePath*) (path_to_c));
  return _temp_ret;
}

// void gtk_icon_view_scroll_to_path (GtkIconView* icon_view, GtkTreePath* path, gboolean use_align, gfloat row_align, gfloat col_align);
// void gtk_icon_view_scroll_to_path (::GtkIconView* icon_view, ::GtkTreePath* path, gboolean use_align, gfloat row_align, gfloat col_align);
void base::IconViewBase::scroll_to_path (Gtk::TreePath path, gboolean use_align, gfloat row_align, gfloat col_align) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTreePath* path, gboolean use_align, gfloat row_align, gfloat col_align);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_scroll_to_path;
  auto col_align_to_c = col_align;
  auto row_align_to_c = row_align;
  auto use_align_to_c = use_align;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTreePath*) (path_to_c), (gboolean) (use_align_to_c), (gfloat) (row_align_to_c), (gfloat) (col_align_to_c));
}

// void gtk_icon_view_select_all (GtkIconView* icon_view);
// void gtk_icon_view_select_all (::GtkIconView* icon_view);
void base::IconViewBase::select_all () noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_select_all;
  call_wrap_v ((::GtkIconView*) (gobj_()));
}

// void gtk_icon_view_select_path (GtkIconView* icon_view, GtkTreePath* path);
// void gtk_icon_view_select_path (::GtkIconView* icon_view, ::GtkTreePath* path);
void base::IconViewBase::select_path (Gtk::TreePath path) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_select_path;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTreePath*) (path_to_c));
}

// void gtk_icon_view_selected_foreach (GtkIconView* icon_view, GtkIconViewForeachFunc func, gpointer data);
// void gtk_icon_view_selected_foreach (::GtkIconView* icon_view, Gtk::IconViewForeachFunc::cfunction_type func, void* data);
void base::IconViewBase::selected_foreach (Gtk::IconViewForeachFunc func) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, Gtk::IconViewForeachFunc::cfunction_type func, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_selected_foreach;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(func_wrap_)>::type> func_wrap__sp (func_wrap_);
  call_wrap_v ((::GtkIconView*) (gobj_()), (Gtk::IconViewForeachFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_));
}

// void gtk_icon_view_set_activate_on_single_click (GtkIconView* icon_view, gboolean single);
// void gtk_icon_view_set_activate_on_single_click (::GtkIconView* icon_view, gboolean single);
void base::IconViewBase::set_activate_on_single_click (gboolean single) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, gboolean single);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_set_activate_on_single_click;
  auto single_to_c = single;
  call_wrap_v ((::GtkIconView*) (gobj_()), (gboolean) (single_to_c));
}

// void gtk_icon_view_set_column_spacing (GtkIconView* icon_view, gint column_spacing);
// void gtk_icon_view_set_column_spacing (::GtkIconView* icon_view, gint column_spacing);
void base::IconViewBase::set_column_spacing (gint column_spacing) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, gint column_spacing);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_set_column_spacing;
  auto column_spacing_to_c = column_spacing;
  call_wrap_v ((::GtkIconView*) (gobj_()), (gint) (column_spacing_to_c));
}

// void gtk_icon_view_set_columns (GtkIconView* icon_view, gint columns);
// void gtk_icon_view_set_columns (::GtkIconView* icon_view, gint columns);
void base::IconViewBase::set_columns (gint columns) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, gint columns);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_set_columns;
  auto columns_to_c = columns;
  call_wrap_v ((::GtkIconView*) (gobj_()), (gint) (columns_to_c));
}

// void gtk_icon_view_set_cursor (GtkIconView* icon_view, GtkTreePath* path, GtkCellRenderer* cell, gboolean start_editing);
// void gtk_icon_view_set_cursor (::GtkIconView* icon_view, ::GtkTreePath* path, ::GtkCellRenderer* cell, gboolean start_editing);
void base::IconViewBase::set_cursor (Gtk::TreePath path, Gtk::CellRenderer cell, gboolean start_editing) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTreePath* path, ::GtkCellRenderer* cell, gboolean start_editing);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_set_cursor;
  auto start_editing_to_c = start_editing;
  auto cell_to_c = gi::unwrap (cell, gi::transfer_none, gi::direction_in);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkCellRenderer*) (cell_to_c), (gboolean) (start_editing_to_c));
}
void base::IconViewBase::set_cursor (Gtk::TreePath path, gboolean start_editing) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTreePath* path, ::GtkCellRenderer* cell, gboolean start_editing);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_set_cursor;
  auto start_editing_to_c = start_editing;
  auto cell_to_c = nullptr;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkCellRenderer*) (cell_to_c), (gboolean) (start_editing_to_c));
}

// void gtk_icon_view_set_drag_dest_item (GtkIconView* icon_view, GtkTreePath* path, GtkIconViewDropPosition pos);
// void gtk_icon_view_set_drag_dest_item (::GtkIconView* icon_view, ::GtkTreePath* path, ::GtkIconViewDropPosition pos);
void base::IconViewBase::set_drag_dest_item (Gtk::TreePath path, Gtk::IconViewDropPosition pos) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTreePath* path, ::GtkIconViewDropPosition pos);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_set_drag_dest_item;
  auto pos_to_c = gi::unwrap (pos);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkIconViewDropPosition) (pos_to_c));
}
void base::IconViewBase::set_drag_dest_item (Gtk::IconViewDropPosition pos) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTreePath* path, ::GtkIconViewDropPosition pos);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_set_drag_dest_item;
  auto pos_to_c = gi::unwrap (pos);
  auto path_to_c = nullptr;
  call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkIconViewDropPosition) (pos_to_c));
}

// void gtk_icon_view_set_item_orientation (GtkIconView* icon_view, GtkOrientation orientation);
// void gtk_icon_view_set_item_orientation (::GtkIconView* icon_view, ::GtkOrientation orientation);
void base::IconViewBase::set_item_orientation (Gtk::Orientation orientation) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, ::GtkOrientation orientation);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_set_item_orientation;
  auto orientation_to_c = gi::unwrap (orientation);
  call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkOrientation) (orientation_to_c));
}

// void gtk_icon_view_set_item_padding (GtkIconView* icon_view, gint item_padding);
// void gtk_icon_view_set_item_padding (::GtkIconView* icon_view, gint item_padding);
void base::IconViewBase::set_item_padding (gint item_padding) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, gint item_padding);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_set_item_padding;
  auto item_padding_to_c = item_padding;
  call_wrap_v ((::GtkIconView*) (gobj_()), (gint) (item_padding_to_c));
}

// void gtk_icon_view_set_item_width (GtkIconView* icon_view, gint item_width);
// void gtk_icon_view_set_item_width (::GtkIconView* icon_view, gint item_width);
void base::IconViewBase::set_item_width (gint item_width) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, gint item_width);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_set_item_width;
  auto item_width_to_c = item_width;
  call_wrap_v ((::GtkIconView*) (gobj_()), (gint) (item_width_to_c));
}

// void gtk_icon_view_set_margin (GtkIconView* icon_view, gint margin);
// void gtk_icon_view_set_margin (::GtkIconView* icon_view, gint margin);
void base::IconViewBase::set_margin (gint margin) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, gint margin);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_set_margin;
  auto margin_to_c = margin;
  call_wrap_v ((::GtkIconView*) (gobj_()), (gint) (margin_to_c));
}

// void gtk_icon_view_set_markup_column (GtkIconView* icon_view, gint column);
// void gtk_icon_view_set_markup_column (::GtkIconView* icon_view, gint column);
void base::IconViewBase::set_markup_column (gint column) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, gint column);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_set_markup_column;
  auto column_to_c = column;
  call_wrap_v ((::GtkIconView*) (gobj_()), (gint) (column_to_c));
}

// void gtk_icon_view_set_model (GtkIconView* icon_view, GtkTreeModel* model);
// void gtk_icon_view_set_model (::GtkIconView* icon_view, ::GtkTreeModel* model);
void base::IconViewBase::set_model (Gtk::TreeModel model) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTreeModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_set_model;
  auto model_to_c = gi::unwrap (model, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTreeModel*) (model_to_c));
}
void base::IconViewBase::set_model () noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTreeModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_set_model;
  auto model_to_c = nullptr;
  call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTreeModel*) (model_to_c));
}

// void gtk_icon_view_set_pixbuf_column (GtkIconView* icon_view, gint column);
// void gtk_icon_view_set_pixbuf_column (::GtkIconView* icon_view, gint column);
void base::IconViewBase::set_pixbuf_column (gint column) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, gint column);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_set_pixbuf_column;
  auto column_to_c = column;
  call_wrap_v ((::GtkIconView*) (gobj_()), (gint) (column_to_c));
}

// void gtk_icon_view_set_reorderable (GtkIconView* icon_view, gboolean reorderable);
// void gtk_icon_view_set_reorderable (::GtkIconView* icon_view, gboolean reorderable);
void base::IconViewBase::set_reorderable (gboolean reorderable) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, gboolean reorderable);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_set_reorderable;
  auto reorderable_to_c = reorderable;
  call_wrap_v ((::GtkIconView*) (gobj_()), (gboolean) (reorderable_to_c));
}

// void gtk_icon_view_set_row_spacing (GtkIconView* icon_view, gint row_spacing);
// void gtk_icon_view_set_row_spacing (::GtkIconView* icon_view, gint row_spacing);
void base::IconViewBase::set_row_spacing (gint row_spacing) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, gint row_spacing);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_set_row_spacing;
  auto row_spacing_to_c = row_spacing;
  call_wrap_v ((::GtkIconView*) (gobj_()), (gint) (row_spacing_to_c));
}

// void gtk_icon_view_set_selection_mode (GtkIconView* icon_view, GtkSelectionMode mode);
// void gtk_icon_view_set_selection_mode (::GtkIconView* icon_view, ::GtkSelectionMode mode);
void base::IconViewBase::set_selection_mode (Gtk::SelectionMode mode) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, ::GtkSelectionMode mode);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_set_selection_mode;
  auto mode_to_c = gi::unwrap (mode);
  call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkSelectionMode) (mode_to_c));
}

// void gtk_icon_view_set_spacing (GtkIconView* icon_view, gint spacing);
// void gtk_icon_view_set_spacing (::GtkIconView* icon_view, gint spacing);
void base::IconViewBase::set_spacing (gint spacing) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, gint spacing);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_set_spacing;
  auto spacing_to_c = spacing;
  call_wrap_v ((::GtkIconView*) (gobj_()), (gint) (spacing_to_c));
}

// void gtk_icon_view_set_text_column (GtkIconView* icon_view, gint column);
// void gtk_icon_view_set_text_column (::GtkIconView* icon_view, gint column);
void base::IconViewBase::set_text_column (gint column) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, gint column);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_set_text_column;
  auto column_to_c = column;
  call_wrap_v ((::GtkIconView*) (gobj_()), (gint) (column_to_c));
}

// void gtk_icon_view_set_tooltip_cell (GtkIconView* icon_view, GtkTooltip* tooltip, GtkTreePath* path, GtkCellRenderer* cell);
// void gtk_icon_view_set_tooltip_cell (::GtkIconView* icon_view, ::GtkTooltip* tooltip, ::GtkTreePath* path, ::GtkCellRenderer* cell);
void base::IconViewBase::set_tooltip_cell (Gtk::Tooltip tooltip, Gtk::TreePath path, Gtk::CellRenderer cell) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTooltip* tooltip, ::GtkTreePath* path, ::GtkCellRenderer* cell);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_set_tooltip_cell;
  auto cell_to_c = gi::unwrap (cell, gi::transfer_none, gi::direction_in);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto tooltip_to_c = gi::unwrap (tooltip, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTooltip*) (tooltip_to_c), (::GtkTreePath*) (path_to_c), (::GtkCellRenderer*) (cell_to_c));
}
void base::IconViewBase::set_tooltip_cell (Gtk::Tooltip tooltip, Gtk::TreePath path) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTooltip* tooltip, ::GtkTreePath* path, ::GtkCellRenderer* cell);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_set_tooltip_cell;
  auto cell_to_c = nullptr;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto tooltip_to_c = gi::unwrap (tooltip, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTooltip*) (tooltip_to_c), (::GtkTreePath*) (path_to_c), (::GtkCellRenderer*) (cell_to_c));
}

// void gtk_icon_view_set_tooltip_column (GtkIconView* icon_view, gint column);
// void gtk_icon_view_set_tooltip_column (::GtkIconView* icon_view, gint column);
void base::IconViewBase::set_tooltip_column (gint column) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, gint column);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_set_tooltip_column;
  auto column_to_c = column;
  call_wrap_v ((::GtkIconView*) (gobj_()), (gint) (column_to_c));
}

// void gtk_icon_view_set_tooltip_item (GtkIconView* icon_view, GtkTooltip* tooltip, GtkTreePath* path);
// void gtk_icon_view_set_tooltip_item (::GtkIconView* icon_view, ::GtkTooltip* tooltip, ::GtkTreePath* path);
void base::IconViewBase::set_tooltip_item (Gtk::Tooltip tooltip, Gtk::TreePath path) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTooltip* tooltip, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_set_tooltip_item;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto tooltip_to_c = gi::unwrap (tooltip, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTooltip*) (tooltip_to_c), (::GtkTreePath*) (path_to_c));
}

// void gtk_icon_view_unselect_all (GtkIconView* icon_view);
// void gtk_icon_view_unselect_all (::GtkIconView* icon_view);
void base::IconViewBase::unselect_all () noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_unselect_all;
  call_wrap_v ((::GtkIconView*) (gobj_()));
}

// void gtk_icon_view_unselect_path (GtkIconView* icon_view, GtkTreePath* path);
// void gtk_icon_view_unselect_path (::GtkIconView* icon_view, ::GtkTreePath* path);
void base::IconViewBase::unselect_path (Gtk::TreePath path) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_unselect_path;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTreePath*) (path_to_c));
}

// void gtk_icon_view_unset_model_drag_dest (GtkIconView* icon_view);
// void gtk_icon_view_unset_model_drag_dest (::GtkIconView* icon_view);
void base::IconViewBase::unset_model_drag_dest () noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_unset_model_drag_dest;
  call_wrap_v ((::GtkIconView*) (gobj_()));
}

// void gtk_icon_view_unset_model_drag_source (GtkIconView* icon_view);
// void gtk_icon_view_unset_model_drag_source (::GtkIconView* icon_view);
void base::IconViewBase::unset_model_drag_source () noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_unset_model_drag_source;
  call_wrap_v ((::GtkIconView*) (gobj_()));
}










} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/iconview_extra_def_impl.hpp>)
#include <gtk/iconview_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/iconview_extra_impl.hpp>)
#include <gtk/iconview_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void IconViewClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkIconViewClass *methods = (::GtkIconViewClass *) class_struct;
  (void) methods;

  methods->activate_cursor_item = (decltype (methods->activate_cursor_item)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::activate_cursor_item_>;
  methods->item_activated = (decltype (methods->item_activated)) detail::method_wrapper<self, void (*) (Gtk::TreePath path), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::item_activated_>;
  methods->move_cursor = (decltype (methods->move_cursor)) detail::method_wrapper<self, bool (*) (Gtk::MovementStep step, gint count), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::move_cursor_>;
  methods->select_all = (decltype (methods->select_all)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::select_all_>;
  methods->select_cursor_item = (decltype (methods->select_cursor_item)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::select_cursor_item_>;
  methods->selection_changed = (decltype (methods->selection_changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::selection_changed_>;
  methods->toggle_cursor_item = (decltype (methods->toggle_cursor_item)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::toggle_cursor_item_>;
  methods->unselect_all = (decltype (methods->unselect_all)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::unselect_all_>;
}

// gboolean IconView::activate_cursor_item (GtkIconView* icon_view);
// gboolean IconView::activate_cursor_item (::GtkIconView* icon_view);
bool IconViewClass::activate_cursor_item_ () noexcept
{
  if (!get_struct_()->activate_cursor_item) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkIconView* icon_view);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->activate_cursor_item;
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()));
  return _temp_ret;
}

// void IconView::item_activated (GtkIconView* icon_view, GtkTreePath* path);
// void IconView::item_activated (::GtkIconView* icon_view, ::GtkTreePath* path);
void IconViewClass::item_activated_ (Gtk::TreePath path) noexcept
{
  if (!get_struct_()->item_activated) return ;
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->item_activated;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTreePath*) (path_to_c));
}

// gboolean IconView::move_cursor (GtkIconView* icon_view, GtkMovementStep step, gint count);
// gboolean IconView::move_cursor (::GtkIconView* icon_view, ::GtkMovementStep step, gint count);
bool IconViewClass::move_cursor_ (Gtk::MovementStep step, gint count) noexcept
{
  if (!get_struct_()->move_cursor) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkIconView* icon_view, ::GtkMovementStep step, gint count);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->move_cursor;
  auto count_to_c = count;
  auto step_to_c = gi::unwrap (step);
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkMovementStep) (step_to_c), (gint) (count_to_c));
  return _temp_ret;
}

// void IconView::select_all (GtkIconView* icon_view);
// void IconView::select_all (::GtkIconView* icon_view);
void IconViewClass::select_all_ () noexcept
{
  if (!get_struct_()->select_all) return ;
  typedef void (*call_wrap_t) (::GtkIconView* icon_view);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->select_all;
  call_wrap_v ((::GtkIconView*) (gobj_()));
}

// void IconView::select_cursor_item (GtkIconView* icon_view);
// void IconView::select_cursor_item (::GtkIconView* icon_view);
void IconViewClass::select_cursor_item_ () noexcept
{
  if (!get_struct_()->select_cursor_item) return ;
  typedef void (*call_wrap_t) (::GtkIconView* icon_view);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->select_cursor_item;
  call_wrap_v ((::GtkIconView*) (gobj_()));
}

// void IconView::selection_changed (GtkIconView* icon_view);
// void IconView::selection_changed (::GtkIconView* icon_view);
void IconViewClass::selection_changed_ () noexcept
{
  if (!get_struct_()->selection_changed) return ;
  typedef void (*call_wrap_t) (::GtkIconView* icon_view);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->selection_changed;
  call_wrap_v ((::GtkIconView*) (gobj_()));
}

// void IconView::toggle_cursor_item (GtkIconView* icon_view);
// void IconView::toggle_cursor_item (::GtkIconView* icon_view);
void IconViewClass::toggle_cursor_item_ () noexcept
{
  if (!get_struct_()->toggle_cursor_item) return ;
  typedef void (*call_wrap_t) (::GtkIconView* icon_view);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->toggle_cursor_item;
  call_wrap_v ((::GtkIconView*) (gobj_()));
}

// void IconView::unselect_all (GtkIconView* icon_view);
// void IconView::unselect_all (::GtkIconView* icon_view);
void IconViewClass::unselect_all_ () noexcept
{
  if (!get_struct_()->unselect_all) return ;
  typedef void (*call_wrap_t) (::GtkIconView* icon_view);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->unselect_all;
  call_wrap_v ((::GtkIconView*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
