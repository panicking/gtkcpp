// AUTO-GENERATED

#ifndef _GI_GTK_TREEVIEW_IMPL_HPP_
#define _GI_GTK_TREEVIEW_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Scrollable TreeViewBase::interface_ (gi::interface_tag<Gtk::Scrollable>)
{ return gi::wrap ((Gtk::Scrollable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

TreeViewBase::operator Gtk::Scrollable ()
{ return interface_ (gi::interface_tag<Gtk::Scrollable>()); }

// GtkWidget* gtk_tree_view_new ();
// ::GtkTreeView* gtk_tree_view_new ();
Gtk::TreeView base::TreeViewBase::new_ () noexcept
{
  typedef ::GtkTreeView* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_tree_view_new_with_model (GtkTreeModel* model);
// ::GtkTreeView* gtk_tree_view_new_with_model (::GtkTreeModel* model);
Gtk::TreeView base::TreeViewBase::new_with_model (Gtk::TreeModel model) noexcept
{
  typedef ::GtkTreeView* (*call_wrap_t) (::GtkTreeModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_new_with_model;
  auto model_to_c = gi::unwrap (model, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (model_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gint gtk_tree_view_append_column (GtkTreeView* tree_view, GtkTreeViewColumn* column);
// gint gtk_tree_view_append_column (::GtkTreeView* tree_view, ::GtkTreeViewColumn* column);
gint base::TreeViewBase::append_column (Gtk::TreeViewColumn column) noexcept
{
  typedef gint (*call_wrap_t) (::GtkTreeView* tree_view, ::GtkTreeViewColumn* column);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_append_column;
  auto column_to_c = gi::unwrap (column, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()), (::GtkTreeViewColumn*) (column_to_c));
  return _temp_ret;
}

// void gtk_tree_view_collapse_all (GtkTreeView* tree_view);
// void gtk_tree_view_collapse_all (::GtkTreeView* tree_view);
void base::TreeViewBase::collapse_all () noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_collapse_all;
  call_wrap_v ((::GtkTreeView*) (gobj_()));
}

// gboolean gtk_tree_view_collapse_row (GtkTreeView* tree_view, GtkTreePath* path);
// gboolean gtk_tree_view_collapse_row (::GtkTreeView* tree_view, ::GtkTreePath* path);
bool base::TreeViewBase::collapse_row (Gtk::TreePath path) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeView* tree_view, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_collapse_row;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()), (::GtkTreePath*) (path_to_c));
  return _temp_ret;
}

// void gtk_tree_view_columns_autosize (GtkTreeView* tree_view);
// void gtk_tree_view_columns_autosize (::GtkTreeView* tree_view);
void base::TreeViewBase::columns_autosize () noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_columns_autosize;
  call_wrap_v ((::GtkTreeView*) (gobj_()));
}

// void gtk_tree_view_convert_bin_window_to_tree_coords (GtkTreeView* tree_view, gint bx, gint by, gint* tx, gint* ty);
// void gtk_tree_view_convert_bin_window_to_tree_coords (::GtkTreeView* tree_view, gint bx, gint by, gint* tx, gint* ty);
void base::TreeViewBase::convert_bin_window_to_tree_coords (gint bx, gint by, gint & tx, gint & ty) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, gint bx, gint by, gint* tx, gint* ty);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_convert_bin_window_to_tree_coords;
  gint ty_o {};
  gint tx_o {};
  auto by_to_c = by;
  auto bx_to_c = bx;
  call_wrap_v ((::GtkTreeView*) (gobj_()), (gint) (bx_to_c), (gint) (by_to_c), (gint*) (&tx_o), (gint*) (&ty_o));
  ty = ty_o;
  tx = tx_o;
}
std::tuple<gint, gint> base::TreeViewBase::convert_bin_window_to_tree_coords (gint bx, gint by) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, gint bx, gint by, gint* tx, gint* ty);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_convert_bin_window_to_tree_coords;
  gint ty_o {};
  gint tx_o {};
  auto by_to_c = by;
  auto bx_to_c = bx;
  call_wrap_v ((::GtkTreeView*) (gobj_()), (gint) (bx_to_c), (gint) (by_to_c), (gint*) (&tx_o), (gint*) (&ty_o));
  return std::make_tuple (tx_o, ty_o);
}

// void gtk_tree_view_convert_bin_window_to_widget_coords (GtkTreeView* tree_view, gint bx, gint by, gint* wx, gint* wy);
// void gtk_tree_view_convert_bin_window_to_widget_coords (::GtkTreeView* tree_view, gint bx, gint by, gint* wx, gint* wy);
void base::TreeViewBase::convert_bin_window_to_widget_coords (gint bx, gint by, gint & wx, gint & wy) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, gint bx, gint by, gint* wx, gint* wy);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_convert_bin_window_to_widget_coords;
  gint wy_o {};
  gint wx_o {};
  auto by_to_c = by;
  auto bx_to_c = bx;
  call_wrap_v ((::GtkTreeView*) (gobj_()), (gint) (bx_to_c), (gint) (by_to_c), (gint*) (&wx_o), (gint*) (&wy_o));
  wy = wy_o;
  wx = wx_o;
}
std::tuple<gint, gint> base::TreeViewBase::convert_bin_window_to_widget_coords (gint bx, gint by) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, gint bx, gint by, gint* wx, gint* wy);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_convert_bin_window_to_widget_coords;
  gint wy_o {};
  gint wx_o {};
  auto by_to_c = by;
  auto bx_to_c = bx;
  call_wrap_v ((::GtkTreeView*) (gobj_()), (gint) (bx_to_c), (gint) (by_to_c), (gint*) (&wx_o), (gint*) (&wy_o));
  return std::make_tuple (wx_o, wy_o);
}

// void gtk_tree_view_convert_tree_to_bin_window_coords (GtkTreeView* tree_view, gint tx, gint ty, gint* bx, gint* by);
// void gtk_tree_view_convert_tree_to_bin_window_coords (::GtkTreeView* tree_view, gint tx, gint ty, gint* bx, gint* by);
void base::TreeViewBase::convert_tree_to_bin_window_coords (gint tx, gint ty, gint & bx, gint & by) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, gint tx, gint ty, gint* bx, gint* by);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_convert_tree_to_bin_window_coords;
  gint by_o {};
  gint bx_o {};
  auto ty_to_c = ty;
  auto tx_to_c = tx;
  call_wrap_v ((::GtkTreeView*) (gobj_()), (gint) (tx_to_c), (gint) (ty_to_c), (gint*) (&bx_o), (gint*) (&by_o));
  by = by_o;
  bx = bx_o;
}
std::tuple<gint, gint> base::TreeViewBase::convert_tree_to_bin_window_coords (gint tx, gint ty) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, gint tx, gint ty, gint* bx, gint* by);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_convert_tree_to_bin_window_coords;
  gint by_o {};
  gint bx_o {};
  auto ty_to_c = ty;
  auto tx_to_c = tx;
  call_wrap_v ((::GtkTreeView*) (gobj_()), (gint) (tx_to_c), (gint) (ty_to_c), (gint*) (&bx_o), (gint*) (&by_o));
  return std::make_tuple (bx_o, by_o);
}

// void gtk_tree_view_convert_tree_to_widget_coords (GtkTreeView* tree_view, gint tx, gint ty, gint* wx, gint* wy);
// void gtk_tree_view_convert_tree_to_widget_coords (::GtkTreeView* tree_view, gint tx, gint ty, gint* wx, gint* wy);
void base::TreeViewBase::convert_tree_to_widget_coords (gint tx, gint ty, gint & wx, gint & wy) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, gint tx, gint ty, gint* wx, gint* wy);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_convert_tree_to_widget_coords;
  gint wy_o {};
  gint wx_o {};
  auto ty_to_c = ty;
  auto tx_to_c = tx;
  call_wrap_v ((::GtkTreeView*) (gobj_()), (gint) (tx_to_c), (gint) (ty_to_c), (gint*) (&wx_o), (gint*) (&wy_o));
  wy = wy_o;
  wx = wx_o;
}
std::tuple<gint, gint> base::TreeViewBase::convert_tree_to_widget_coords (gint tx, gint ty) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, gint tx, gint ty, gint* wx, gint* wy);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_convert_tree_to_widget_coords;
  gint wy_o {};
  gint wx_o {};
  auto ty_to_c = ty;
  auto tx_to_c = tx;
  call_wrap_v ((::GtkTreeView*) (gobj_()), (gint) (tx_to_c), (gint) (ty_to_c), (gint*) (&wx_o), (gint*) (&wy_o));
  return std::make_tuple (wx_o, wy_o);
}

// void gtk_tree_view_convert_widget_to_bin_window_coords (GtkTreeView* tree_view, gint wx, gint wy, gint* bx, gint* by);
// void gtk_tree_view_convert_widget_to_bin_window_coords (::GtkTreeView* tree_view, gint wx, gint wy, gint* bx, gint* by);
void base::TreeViewBase::convert_widget_to_bin_window_coords (gint wx, gint wy, gint & bx, gint & by) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, gint wx, gint wy, gint* bx, gint* by);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_convert_widget_to_bin_window_coords;
  gint by_o {};
  gint bx_o {};
  auto wy_to_c = wy;
  auto wx_to_c = wx;
  call_wrap_v ((::GtkTreeView*) (gobj_()), (gint) (wx_to_c), (gint) (wy_to_c), (gint*) (&bx_o), (gint*) (&by_o));
  by = by_o;
  bx = bx_o;
}
std::tuple<gint, gint> base::TreeViewBase::convert_widget_to_bin_window_coords (gint wx, gint wy) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, gint wx, gint wy, gint* bx, gint* by);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_convert_widget_to_bin_window_coords;
  gint by_o {};
  gint bx_o {};
  auto wy_to_c = wy;
  auto wx_to_c = wx;
  call_wrap_v ((::GtkTreeView*) (gobj_()), (gint) (wx_to_c), (gint) (wy_to_c), (gint*) (&bx_o), (gint*) (&by_o));
  return std::make_tuple (bx_o, by_o);
}

// void gtk_tree_view_convert_widget_to_tree_coords (GtkTreeView* tree_view, gint wx, gint wy, gint* tx, gint* ty);
// void gtk_tree_view_convert_widget_to_tree_coords (::GtkTreeView* tree_view, gint wx, gint wy, gint* tx, gint* ty);
void base::TreeViewBase::convert_widget_to_tree_coords (gint wx, gint wy, gint & tx, gint & ty) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, gint wx, gint wy, gint* tx, gint* ty);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_convert_widget_to_tree_coords;
  gint ty_o {};
  gint tx_o {};
  auto wy_to_c = wy;
  auto wx_to_c = wx;
  call_wrap_v ((::GtkTreeView*) (gobj_()), (gint) (wx_to_c), (gint) (wy_to_c), (gint*) (&tx_o), (gint*) (&ty_o));
  ty = ty_o;
  tx = tx_o;
}
std::tuple<gint, gint> base::TreeViewBase::convert_widget_to_tree_coords (gint wx, gint wy) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, gint wx, gint wy, gint* tx, gint* ty);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_convert_widget_to_tree_coords;
  gint ty_o {};
  gint tx_o {};
  auto wy_to_c = wy;
  auto wx_to_c = wx;
  call_wrap_v ((::GtkTreeView*) (gobj_()), (gint) (wx_to_c), (gint) (wy_to_c), (gint*) (&tx_o), (gint*) (&ty_o));
  return std::make_tuple (tx_o, ty_o);
}

// cairo_surface_t* gtk_tree_view_create_row_drag_icon (GtkTreeView* tree_view, GtkTreePath* path);
// ::cairo_surface_t* gtk_tree_view_create_row_drag_icon (::GtkTreeView* tree_view, ::GtkTreePath* path);
cairo::Surface base::TreeViewBase::create_row_drag_icon (Gtk::TreePath path) noexcept
{
  typedef ::cairo_surface_t* (*call_wrap_t) (::GtkTreeView* tree_view, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_create_row_drag_icon;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()), (::GtkTreePath*) (path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gtk_tree_view_enable_model_drag_dest (GtkTreeView* tree_view, const GtkTargetEntry* targets, gint n_targets, GdkDragAction actions);
// void gtk_tree_view_enable_model_drag_dest (::GtkTreeView* tree_view, const ::GtkTargetEntry** targets, gint n_targets, ::GdkDragAction actions);
// SKIP; inconsistent in targets pointer depth (1 vs 2)

// void gtk_tree_view_enable_model_drag_source (GtkTreeView* tree_view, GdkModifierType start_button_mask, const GtkTargetEntry* targets, gint n_targets, GdkDragAction actions);
// void gtk_tree_view_enable_model_drag_source (::GtkTreeView* tree_view, ::GdkModifierType start_button_mask, const ::GtkTargetEntry** targets, gint n_targets, ::GdkDragAction actions);
// SKIP; inconsistent in targets pointer depth (1 vs 2)

// void gtk_tree_view_expand_all (GtkTreeView* tree_view);
// void gtk_tree_view_expand_all (::GtkTreeView* tree_view);
void base::TreeViewBase::expand_all () noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_expand_all;
  call_wrap_v ((::GtkTreeView*) (gobj_()));
}

// gboolean gtk_tree_view_expand_row (GtkTreeView* tree_view, GtkTreePath* path, gboolean open_all);
// gboolean gtk_tree_view_expand_row (::GtkTreeView* tree_view, ::GtkTreePath* path, gboolean open_all);
bool base::TreeViewBase::expand_row (Gtk::TreePath path, gboolean open_all) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeView* tree_view, ::GtkTreePath* path, gboolean open_all);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_expand_row;
  auto open_all_to_c = open_all;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()), (::GtkTreePath*) (path_to_c), (gboolean) (open_all_to_c));
  return _temp_ret;
}

// void gtk_tree_view_expand_to_path (GtkTreeView* tree_view, GtkTreePath* path);
// void gtk_tree_view_expand_to_path (::GtkTreeView* tree_view, ::GtkTreePath* path);
void base::TreeViewBase::expand_to_path (Gtk::TreePath path) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_expand_to_path;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeView*) (gobj_()), (::GtkTreePath*) (path_to_c));
}

// gboolean gtk_tree_view_get_activate_on_single_click (GtkTreeView* tree_view);
// gboolean gtk_tree_view_get_activate_on_single_click (::GtkTreeView* tree_view);
bool base::TreeViewBase::get_activate_on_single_click () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeView* tree_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_get_activate_on_single_click;
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()));
  return _temp_ret;
}

// void gtk_tree_view_get_background_area (GtkTreeView* tree_view, GtkTreePath* path, GtkTreeViewColumn* column, GdkRectangle* rect);
// void gtk_tree_view_get_background_area (::GtkTreeView* tree_view, ::GtkTreePath* path, ::GtkTreeViewColumn* column, ::GdkRectangle* rect);
void base::TreeViewBase::get_background_area (Gtk::TreePath path, Gtk::TreeViewColumn column, Gdk::Rectangle & rect) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, ::GtkTreePath* path, ::GtkTreeViewColumn* column, ::GdkRectangle* rect);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_get_background_area;
  traits::unset_wrapper<::GdkRectangle>::type rect_c;
  auto column_to_c = gi::unwrap (column, gi::transfer_none, gi::direction_in);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeView*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkTreeViewColumn*) (column_to_c), (::GdkRectangle*) ((::GdkRectangle*) &rect_c));
  rect = gi::wrap ((::GdkRectangle*) &rect_c, gi::transfer_none, gi::direction_out);
}
void base::TreeViewBase::get_background_area (Gdk::Rectangle & rect) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, ::GtkTreePath* path, ::GtkTreeViewColumn* column, ::GdkRectangle* rect);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_get_background_area;
  traits::unset_wrapper<::GdkRectangle>::type rect_c;
  auto column_to_c = nullptr;
  auto path_to_c = nullptr;
  call_wrap_v ((::GtkTreeView*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkTreeViewColumn*) (column_to_c), (::GdkRectangle*) ((::GdkRectangle*) &rect_c));
  rect = gi::wrap ((::GdkRectangle*) &rect_c, gi::transfer_none, gi::direction_out);
}
Gdk::Rectangle base::TreeViewBase::get_background_area (Gtk::TreePath path, Gtk::TreeViewColumn column) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, ::GtkTreePath* path, ::GtkTreeViewColumn* column, ::GdkRectangle* rect);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_get_background_area;
  traits::unset_wrapper<::GdkRectangle>::type rect_c;
  auto column_to_c = gi::unwrap (column, gi::transfer_none, gi::direction_in);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeView*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkTreeViewColumn*) (column_to_c), (::GdkRectangle*) ((::GdkRectangle*) &rect_c));
  return gi::wrap ((::GdkRectangle*) &rect_c, gi::transfer_none, gi::direction_out);
}
Gdk::Rectangle base::TreeViewBase::get_background_area () noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, ::GtkTreePath* path, ::GtkTreeViewColumn* column, ::GdkRectangle* rect);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_get_background_area;
  traits::unset_wrapper<::GdkRectangle>::type rect_c;
  auto column_to_c = nullptr;
  auto path_to_c = nullptr;
  call_wrap_v ((::GtkTreeView*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkTreeViewColumn*) (column_to_c), (::GdkRectangle*) ((::GdkRectangle*) &rect_c));
  return gi::wrap ((::GdkRectangle*) &rect_c, gi::transfer_none, gi::direction_out);
}

// GdkWindow* gtk_tree_view_get_bin_window (GtkTreeView* tree_view);
// ::GdkWindow* gtk_tree_view_get_bin_window (::GtkTreeView* tree_view);
Gdk::Window base::TreeViewBase::get_bin_window () noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (::GtkTreeView* tree_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_get_bin_window;
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_tree_view_get_cell_area (GtkTreeView* tree_view, GtkTreePath* path, GtkTreeViewColumn* column, GdkRectangle* rect);
// void gtk_tree_view_get_cell_area (::GtkTreeView* tree_view, ::GtkTreePath* path, ::GtkTreeViewColumn* column, ::GdkRectangle* rect);
void base::TreeViewBase::get_cell_area (Gtk::TreePath path, Gtk::TreeViewColumn column, Gdk::Rectangle & rect) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, ::GtkTreePath* path, ::GtkTreeViewColumn* column, ::GdkRectangle* rect);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_get_cell_area;
  traits::unset_wrapper<::GdkRectangle>::type rect_c;
  auto column_to_c = gi::unwrap (column, gi::transfer_none, gi::direction_in);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeView*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkTreeViewColumn*) (column_to_c), (::GdkRectangle*) ((::GdkRectangle*) &rect_c));
  rect = gi::wrap ((::GdkRectangle*) &rect_c, gi::transfer_none, gi::direction_out);
}
void base::TreeViewBase::get_cell_area (Gdk::Rectangle & rect) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, ::GtkTreePath* path, ::GtkTreeViewColumn* column, ::GdkRectangle* rect);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_get_cell_area;
  traits::unset_wrapper<::GdkRectangle>::type rect_c;
  auto column_to_c = nullptr;
  auto path_to_c = nullptr;
  call_wrap_v ((::GtkTreeView*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkTreeViewColumn*) (column_to_c), (::GdkRectangle*) ((::GdkRectangle*) &rect_c));
  rect = gi::wrap ((::GdkRectangle*) &rect_c, gi::transfer_none, gi::direction_out);
}
Gdk::Rectangle base::TreeViewBase::get_cell_area (Gtk::TreePath path, Gtk::TreeViewColumn column) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, ::GtkTreePath* path, ::GtkTreeViewColumn* column, ::GdkRectangle* rect);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_get_cell_area;
  traits::unset_wrapper<::GdkRectangle>::type rect_c;
  auto column_to_c = gi::unwrap (column, gi::transfer_none, gi::direction_in);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeView*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkTreeViewColumn*) (column_to_c), (::GdkRectangle*) ((::GdkRectangle*) &rect_c));
  return gi::wrap ((::GdkRectangle*) &rect_c, gi::transfer_none, gi::direction_out);
}
Gdk::Rectangle base::TreeViewBase::get_cell_area () noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, ::GtkTreePath* path, ::GtkTreeViewColumn* column, ::GdkRectangle* rect);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_get_cell_area;
  traits::unset_wrapper<::GdkRectangle>::type rect_c;
  auto column_to_c = nullptr;
  auto path_to_c = nullptr;
  call_wrap_v ((::GtkTreeView*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkTreeViewColumn*) (column_to_c), (::GdkRectangle*) ((::GdkRectangle*) &rect_c));
  return gi::wrap ((::GdkRectangle*) &rect_c, gi::transfer_none, gi::direction_out);
}

// GtkTreeViewColumn* gtk_tree_view_get_column (GtkTreeView* tree_view, gint n);
// ::GtkTreeViewColumn* gtk_tree_view_get_column (::GtkTreeView* tree_view, gint n);
Gtk::TreeViewColumn base::TreeViewBase::get_column (gint n) noexcept
{
  typedef ::GtkTreeViewColumn* (*call_wrap_t) (::GtkTreeView* tree_view, gint n);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_get_column;
  auto n_to_c = n;
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()), (gint) (n_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GList* gtk_tree_view_get_columns (GtkTreeView* tree_view);
// ::GList* gtk_tree_view_get_columns (::GtkTreeView* tree_view);
std::vector<Gtk::TreeViewColumn> base::TreeViewBase::get_columns () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GtkTreeView* tree_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_get_columns;
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()));
  return gi::detail::wrap_list<Gtk::TreeViewColumn> (_temp_ret, gi::transfer_container);
}

// void gtk_tree_view_get_cursor (GtkTreeView* tree_view, GtkTreePath** path, GtkTreeViewColumn** focus_column);
// void gtk_tree_view_get_cursor (::GtkTreeView* tree_view, ::GtkTreePath** path, ::GtkTreeViewColumn** focus_column);
void base::TreeViewBase::get_cursor (Gtk::TreePath * path, Gtk::TreeViewColumn * focus_column) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, ::GtkTreePath** path, ::GtkTreeViewColumn** focus_column);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_get_cursor;
  ::GtkTreeViewColumn* focus_column_o {};
  ::GtkTreePath* path_o {};
  call_wrap_v ((::GtkTreeView*) (gobj_()), (::GtkTreePath**) (path ? &path_o : nullptr), (::GtkTreeViewColumn**) (focus_column ? &focus_column_o : nullptr));
  if (focus_column) *focus_column = gi::wrap (focus_column_o, gi::transfer_none, gi::direction_out);
  if (path) *path = gi::wrap (path_o, gi::transfer_full, gi::direction_out);
}
std::tuple<Gtk::TreePath, Gtk::TreeViewColumn> base::TreeViewBase::get_cursor () noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, ::GtkTreePath** path, ::GtkTreeViewColumn** focus_column);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_get_cursor;
  ::GtkTreeViewColumn* focus_column_o {};
  ::GtkTreePath* path_o {};
  call_wrap_v ((::GtkTreeView*) (gobj_()), (::GtkTreePath**) (&path_o), (::GtkTreeViewColumn**) (&focus_column_o));
  return std::make_tuple (gi::wrap (path_o, gi::transfer_full, gi::direction_out), gi::wrap (focus_column_o, gi::transfer_none, gi::direction_out));
}

// gboolean gtk_tree_view_get_dest_row_at_pos (GtkTreeView* tree_view, gint drag_x, gint drag_y, GtkTreePath** path, GtkTreeViewDropPosition* pos);
// gboolean gtk_tree_view_get_dest_row_at_pos (::GtkTreeView* tree_view, gint drag_x, gint drag_y, ::GtkTreePath** path, ::GtkTreeViewDropPosition* pos);
bool base::TreeViewBase::get_dest_row_at_pos (gint drag_x, gint drag_y, Gtk::TreePath * path, Gtk::TreeViewDropPosition * pos) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeView* tree_view, gint drag_x, gint drag_y, ::GtkTreePath** path, ::GtkTreeViewDropPosition* pos);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_get_dest_row_at_pos;
  ::GtkTreeViewDropPosition pos_o {};
  ::GtkTreePath* path_o {};
  auto drag_y_to_c = drag_y;
  auto drag_x_to_c = drag_x;
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()), (gint) (drag_x_to_c), (gint) (drag_y_to_c), (::GtkTreePath**) (path ? &path_o : nullptr), (::GtkTreeViewDropPosition*) (pos ? &pos_o : nullptr));
  if (pos) *pos = gi::wrap (pos_o);
  if (path) *path = gi::wrap (path_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Gtk::TreePath, Gtk::TreeViewDropPosition> base::TreeViewBase::get_dest_row_at_pos (gint drag_x, gint drag_y) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeView* tree_view, gint drag_x, gint drag_y, ::GtkTreePath** path, ::GtkTreeViewDropPosition* pos);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_get_dest_row_at_pos;
  ::GtkTreeViewDropPosition pos_o {};
  ::GtkTreePath* path_o {};
  auto drag_y_to_c = drag_y;
  auto drag_x_to_c = drag_x;
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()), (gint) (drag_x_to_c), (gint) (drag_y_to_c), (::GtkTreePath**) (&path_o), (::GtkTreeViewDropPosition*) (&pos_o));
  return std::make_tuple (_temp_ret, gi::wrap (path_o, gi::transfer_full, gi::direction_out), gi::wrap (pos_o));
}

// void gtk_tree_view_get_drag_dest_row (GtkTreeView* tree_view, GtkTreePath** path, GtkTreeViewDropPosition* pos);
// void gtk_tree_view_get_drag_dest_row (::GtkTreeView* tree_view, ::GtkTreePath** path, ::GtkTreeViewDropPosition* pos);
void base::TreeViewBase::get_drag_dest_row (Gtk::TreePath * path, Gtk::TreeViewDropPosition * pos) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, ::GtkTreePath** path, ::GtkTreeViewDropPosition* pos);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_get_drag_dest_row;
  ::GtkTreeViewDropPosition pos_o {};
  ::GtkTreePath* path_o {};
  call_wrap_v ((::GtkTreeView*) (gobj_()), (::GtkTreePath**) (path ? &path_o : nullptr), (::GtkTreeViewDropPosition*) (pos ? &pos_o : nullptr));
  if (pos) *pos = gi::wrap (pos_o);
  if (path) *path = gi::wrap (path_o, gi::transfer_full, gi::direction_out);
}
std::tuple<Gtk::TreePath, Gtk::TreeViewDropPosition> base::TreeViewBase::get_drag_dest_row () noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, ::GtkTreePath** path, ::GtkTreeViewDropPosition* pos);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_get_drag_dest_row;
  ::GtkTreeViewDropPosition pos_o {};
  ::GtkTreePath* path_o {};
  call_wrap_v ((::GtkTreeView*) (gobj_()), (::GtkTreePath**) (&path_o), (::GtkTreeViewDropPosition*) (&pos_o));
  return std::make_tuple (gi::wrap (path_o, gi::transfer_full, gi::direction_out), gi::wrap (pos_o));
}

// gboolean gtk_tree_view_get_enable_search (GtkTreeView* tree_view);
// gboolean gtk_tree_view_get_enable_search (::GtkTreeView* tree_view);
bool base::TreeViewBase::get_enable_search () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeView* tree_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_get_enable_search;
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_tree_view_get_enable_tree_lines (GtkTreeView* tree_view);
// gboolean gtk_tree_view_get_enable_tree_lines (::GtkTreeView* tree_view);
bool base::TreeViewBase::get_enable_tree_lines () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeView* tree_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_get_enable_tree_lines;
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()));
  return _temp_ret;
}

// GtkTreeViewColumn* gtk_tree_view_get_expander_column (GtkTreeView* tree_view);
// ::GtkTreeViewColumn* gtk_tree_view_get_expander_column (::GtkTreeView* tree_view);
Gtk::TreeViewColumn base::TreeViewBase::get_expander_column () noexcept
{
  typedef ::GtkTreeViewColumn* (*call_wrap_t) (::GtkTreeView* tree_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_get_expander_column;
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_tree_view_get_fixed_height_mode (GtkTreeView* tree_view);
// gboolean gtk_tree_view_get_fixed_height_mode (::GtkTreeView* tree_view);
bool base::TreeViewBase::get_fixed_height_mode () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeView* tree_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_get_fixed_height_mode;
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()));
  return _temp_ret;
}

// GtkTreeViewGridLines gtk_tree_view_get_grid_lines (GtkTreeView* tree_view);
// ::GtkTreeViewGridLines gtk_tree_view_get_grid_lines (::GtkTreeView* tree_view);
Gtk::TreeViewGridLines base::TreeViewBase::get_grid_lines () noexcept
{
  typedef ::GtkTreeViewGridLines (*call_wrap_t) (::GtkTreeView* tree_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_get_grid_lines;
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkAdjustment* gtk_tree_view_get_hadjustment (GtkTreeView* tree_view);
// ::GtkAdjustment* gtk_tree_view_get_hadjustment (::GtkTreeView* tree_view);
// IGNORE; deprecated

// gboolean gtk_tree_view_get_headers_clickable (GtkTreeView* tree_view);
// gboolean gtk_tree_view_get_headers_clickable (::GtkTreeView* tree_view);
bool base::TreeViewBase::get_headers_clickable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeView* tree_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_get_headers_clickable;
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_tree_view_get_headers_visible (GtkTreeView* tree_view);
// gboolean gtk_tree_view_get_headers_visible (::GtkTreeView* tree_view);
bool base::TreeViewBase::get_headers_visible () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeView* tree_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_get_headers_visible;
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_tree_view_get_hover_expand (GtkTreeView* tree_view);
// gboolean gtk_tree_view_get_hover_expand (::GtkTreeView* tree_view);
bool base::TreeViewBase::get_hover_expand () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeView* tree_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_get_hover_expand;
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_tree_view_get_hover_selection (GtkTreeView* tree_view);
// gboolean gtk_tree_view_get_hover_selection (::GtkTreeView* tree_view);
bool base::TreeViewBase::get_hover_selection () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeView* tree_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_get_hover_selection;
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()));
  return _temp_ret;
}

// gint gtk_tree_view_get_level_indentation (GtkTreeView* tree_view);
// gint gtk_tree_view_get_level_indentation (::GtkTreeView* tree_view);
gint base::TreeViewBase::get_level_indentation () noexcept
{
  typedef gint (*call_wrap_t) (::GtkTreeView* tree_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_get_level_indentation;
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()));
  return _temp_ret;
}

// GtkTreeModel* gtk_tree_view_get_model (GtkTreeView* tree_view);
// ::GtkTreeModel* gtk_tree_view_get_model (::GtkTreeView* tree_view);
Gtk::TreeModel base::TreeViewBase::get_model () noexcept
{
  typedef ::GtkTreeModel* (*call_wrap_t) (::GtkTreeView* tree_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_get_model;
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// guint gtk_tree_view_get_n_columns (GtkTreeView* tree_view);
// guint gtk_tree_view_get_n_columns (::GtkTreeView* tree_view);
guint base::TreeViewBase::get_n_columns () noexcept
{
  typedef guint (*call_wrap_t) (::GtkTreeView* tree_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_get_n_columns;
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_tree_view_get_path_at_pos (GtkTreeView* tree_view, gint x, gint y, GtkTreePath** path, GtkTreeViewColumn** column, gint* cell_x, gint* cell_y);
// gboolean gtk_tree_view_get_path_at_pos (::GtkTreeView* tree_view, gint x, gint y, ::GtkTreePath** path, ::GtkTreeViewColumn** column, gint* cell_x, gint* cell_y);
bool base::TreeViewBase::get_path_at_pos (gint x, gint y, Gtk::TreePath * path, Gtk::TreeViewColumn * column, gint * cell_x, gint * cell_y) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeView* tree_view, gint x, gint y, ::GtkTreePath** path, ::GtkTreeViewColumn** column, gint* cell_x, gint* cell_y);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_get_path_at_pos;
  gint cell_y_o {};
  gint cell_x_o {};
  ::GtkTreeViewColumn* column_o {};
  ::GtkTreePath* path_o {};
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()), (gint) (x_to_c), (gint) (y_to_c), (::GtkTreePath**) (path ? &path_o : nullptr), (::GtkTreeViewColumn**) (column ? &column_o : nullptr), (gint*) (cell_x ? &cell_x_o : nullptr), (gint*) (cell_y ? &cell_y_o : nullptr));
  if (cell_y) *cell_y = cell_y_o;
  if (cell_x) *cell_x = cell_x_o;
  if (column) *column = gi::wrap (column_o, gi::transfer_none, gi::direction_out);
  if (path) *path = gi::wrap (path_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Gtk::TreePath, Gtk::TreeViewColumn, gint, gint> base::TreeViewBase::get_path_at_pos (gint x, gint y) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeView* tree_view, gint x, gint y, ::GtkTreePath** path, ::GtkTreeViewColumn** column, gint* cell_x, gint* cell_y);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_get_path_at_pos;
  gint cell_y_o {};
  gint cell_x_o {};
  ::GtkTreeViewColumn* column_o {};
  ::GtkTreePath* path_o {};
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()), (gint) (x_to_c), (gint) (y_to_c), (::GtkTreePath**) (&path_o), (::GtkTreeViewColumn**) (&column_o), (gint*) (&cell_x_o), (gint*) (&cell_y_o));
  return std::make_tuple (_temp_ret, gi::wrap (path_o, gi::transfer_full, gi::direction_out), gi::wrap (column_o, gi::transfer_none, gi::direction_out), cell_x_o, cell_y_o);
}

// gboolean gtk_tree_view_get_reorderable (GtkTreeView* tree_view);
// gboolean gtk_tree_view_get_reorderable (::GtkTreeView* tree_view);
bool base::TreeViewBase::get_reorderable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeView* tree_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_get_reorderable;
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()));
  return _temp_ret;
}

// FAILURE on gtk_tree_view_get_row_separator_func; No such node (<xmlattr>.transfer-ownership)
// gboolean gtk_tree_view_get_rubber_banding (GtkTreeView* tree_view);
// gboolean gtk_tree_view_get_rubber_banding (::GtkTreeView* tree_view);
bool base::TreeViewBase::get_rubber_banding () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeView* tree_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_get_rubber_banding;
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_tree_view_get_rules_hint (GtkTreeView* tree_view);
// gboolean gtk_tree_view_get_rules_hint (::GtkTreeView* tree_view);
// IGNORE; deprecated

// gint gtk_tree_view_get_search_column (GtkTreeView* tree_view);
// gint gtk_tree_view_get_search_column (::GtkTreeView* tree_view);
gint base::TreeViewBase::get_search_column () noexcept
{
  typedef gint (*call_wrap_t) (::GtkTreeView* tree_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_get_search_column;
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()));
  return _temp_ret;
}

// GtkEntry* gtk_tree_view_get_search_entry (GtkTreeView* tree_view);
// ::GtkEntry* gtk_tree_view_get_search_entry (::GtkTreeView* tree_view);
Gtk::Entry base::TreeViewBase::get_search_entry () noexcept
{
  typedef ::GtkEntry* (*call_wrap_t) (::GtkTreeView* tree_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_get_search_entry;
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// FAILURE on gtk_tree_view_get_search_equal_func; No such node (<xmlattr>.transfer-ownership)
// FAILURE on gtk_tree_view_get_search_position_func; No such node (<xmlattr>.transfer-ownership)
// GtkTreeSelection* gtk_tree_view_get_selection (GtkTreeView* tree_view);
// ::GtkTreeSelection* gtk_tree_view_get_selection (::GtkTreeView* tree_view);
Gtk::TreeSelection base::TreeViewBase::get_selection () noexcept
{
  typedef ::GtkTreeSelection* (*call_wrap_t) (::GtkTreeView* tree_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_get_selection;
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_tree_view_get_show_expanders (GtkTreeView* tree_view);
// gboolean gtk_tree_view_get_show_expanders (::GtkTreeView* tree_view);
bool base::TreeViewBase::get_show_expanders () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeView* tree_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_get_show_expanders;
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()));
  return _temp_ret;
}

// gint gtk_tree_view_get_tooltip_column (GtkTreeView* tree_view);
// gint gtk_tree_view_get_tooltip_column (::GtkTreeView* tree_view);
gint base::TreeViewBase::get_tooltip_column () noexcept
{
  typedef gint (*call_wrap_t) (::GtkTreeView* tree_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_get_tooltip_column;
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_tree_view_get_tooltip_context (GtkTreeView* tree_view, gint* x, gint* y, gboolean keyboard_tip, GtkTreeModel** model, GtkTreePath** path, GtkTreeIter* iter);
// gboolean gtk_tree_view_get_tooltip_context (::GtkTreeView* tree_view, gint* x, gint* y, gboolean keyboard_tip, ::GtkTreeModel** model, ::GtkTreePath** path, ::GtkTreeIter* iter);
bool base::TreeViewBase::get_tooltip_context (gint & x, gint & y, gboolean keyboard_tip, Gtk::TreeModel * model, Gtk::TreePath * path, Gtk::TreeIter * iter) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeView* tree_view, gint* x, gint* y, gboolean keyboard_tip, ::GtkTreeModel** model, ::GtkTreePath** path, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_get_tooltip_context;
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  ::GtkTreePath* path_o {};
  ::GtkTreeModel* model_o {};
  auto keyboard_tip_to_c = keyboard_tip;
  auto y_to_c = y;
  gint y_o = y_to_c;
  auto x_to_c = x;
  gint x_o = x_to_c;
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()), (gint*) (&x_o), (gint*) (&y_o), (gboolean) (keyboard_tip_to_c), (::GtkTreeModel**) (model ? &model_o : nullptr), (::GtkTreePath**) (path ? &path_o : nullptr), (::GtkTreeIter*) (iter ? (::GtkTreeIter*) &iter_c : nullptr));
  if (iter) *iter = gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out);
  if (path) *path = gi::wrap (path_o, gi::transfer_full, gi::direction_out);
  if (model) *model = gi::wrap (model_o, gi::transfer_none, gi::direction_out);
  y = y_o;
  x = x_o;
  return _temp_ret;
}
std::tuple<bool, Gtk::TreeModel, Gtk::TreePath, Gtk::TreeIter> base::TreeViewBase::get_tooltip_context (gint & x, gint & y, gboolean keyboard_tip) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeView* tree_view, gint* x, gint* y, gboolean keyboard_tip, ::GtkTreeModel** model, ::GtkTreePath** path, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_get_tooltip_context;
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  ::GtkTreePath* path_o {};
  ::GtkTreeModel* model_o {};
  auto keyboard_tip_to_c = keyboard_tip;
  auto y_to_c = y;
  gint y_o = y_to_c;
  auto x_to_c = x;
  gint x_o = x_to_c;
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()), (gint*) (&x_o), (gint*) (&y_o), (gboolean) (keyboard_tip_to_c), (::GtkTreeModel**) (&model_o), (::GtkTreePath**) (&path_o), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c));
  y = y_o;
  x = x_o;
  return std::make_tuple (_temp_ret, gi::wrap (model_o, gi::transfer_none, gi::direction_out), gi::wrap (path_o, gi::transfer_full, gi::direction_out), gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out));
}

// GtkAdjustment* gtk_tree_view_get_vadjustment (GtkTreeView* tree_view);
// ::GtkAdjustment* gtk_tree_view_get_vadjustment (::GtkTreeView* tree_view);
// IGNORE; deprecated

// gboolean gtk_tree_view_get_visible_range (GtkTreeView* tree_view, GtkTreePath** start_path, GtkTreePath** end_path);
// gboolean gtk_tree_view_get_visible_range (::GtkTreeView* tree_view, ::GtkTreePath** start_path, ::GtkTreePath** end_path);
bool base::TreeViewBase::get_visible_range (Gtk::TreePath * start_path, Gtk::TreePath * end_path) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeView* tree_view, ::GtkTreePath** start_path, ::GtkTreePath** end_path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_get_visible_range;
  ::GtkTreePath* end_path_o {};
  ::GtkTreePath* start_path_o {};
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()), (::GtkTreePath**) (start_path ? &start_path_o : nullptr), (::GtkTreePath**) (end_path ? &end_path_o : nullptr));
  if (end_path) *end_path = gi::wrap (end_path_o, gi::transfer_full, gi::direction_out);
  if (start_path) *start_path = gi::wrap (start_path_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Gtk::TreePath, Gtk::TreePath> base::TreeViewBase::get_visible_range () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeView* tree_view, ::GtkTreePath** start_path, ::GtkTreePath** end_path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_get_visible_range;
  ::GtkTreePath* end_path_o {};
  ::GtkTreePath* start_path_o {};
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()), (::GtkTreePath**) (&start_path_o), (::GtkTreePath**) (&end_path_o));
  return std::make_tuple (_temp_ret, gi::wrap (start_path_o, gi::transfer_full, gi::direction_out), gi::wrap (end_path_o, gi::transfer_full, gi::direction_out));
}

// void gtk_tree_view_get_visible_rect (GtkTreeView* tree_view, GdkRectangle* visible_rect);
// void gtk_tree_view_get_visible_rect (::GtkTreeView* tree_view, ::GdkRectangle* visible_rect);
void base::TreeViewBase::get_visible_rect (Gdk::Rectangle & visible_rect) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, ::GdkRectangle* visible_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_get_visible_rect;
  traits::unset_wrapper<::GdkRectangle>::type visible_rect_c;
  call_wrap_v ((::GtkTreeView*) (gobj_()), (::GdkRectangle*) ((::GdkRectangle*) &visible_rect_c));
  visible_rect = gi::wrap ((::GdkRectangle*) &visible_rect_c, gi::transfer_none, gi::direction_out);
}
Gdk::Rectangle base::TreeViewBase::get_visible_rect () noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, ::GdkRectangle* visible_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_get_visible_rect;
  traits::unset_wrapper<::GdkRectangle>::type visible_rect_c;
  call_wrap_v ((::GtkTreeView*) (gobj_()), (::GdkRectangle*) ((::GdkRectangle*) &visible_rect_c));
  return gi::wrap ((::GdkRectangle*) &visible_rect_c, gi::transfer_none, gi::direction_out);
}

// gint gtk_tree_view_insert_column (GtkTreeView* tree_view, GtkTreeViewColumn* column, gint position);
// gint gtk_tree_view_insert_column (::GtkTreeView* tree_view, ::GtkTreeViewColumn* column, gint position);
gint base::TreeViewBase::insert_column (Gtk::TreeViewColumn column, gint position) noexcept
{
  typedef gint (*call_wrap_t) (::GtkTreeView* tree_view, ::GtkTreeViewColumn* column, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_insert_column;
  auto position_to_c = position;
  auto column_to_c = gi::unwrap (column, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()), (::GtkTreeViewColumn*) (column_to_c), (gint) (position_to_c));
  return _temp_ret;
}

// gint gtk_tree_view_insert_column_with_attributes (GtkTreeView* tree_view, gint position, const gchar* title, GtkCellRenderer* cell);
// gint gtk_tree_view_insert_column_with_attributes (::GtkTreeView* tree_view, gint position, const char* title, ::GtkCellRenderer* cell);
// IGNORE; not introspectable, varargs not supported

// gint gtk_tree_view_insert_column_with_data_func (GtkTreeView* tree_view, gint position, const gchar* title, GtkCellRenderer* cell, GtkTreeCellDataFunc func, gpointer data, GDestroyNotify dnotify);
// gint gtk_tree_view_insert_column_with_data_func (::GtkTreeView* tree_view, gint position, const char* title, ::GtkCellRenderer* cell, Gtk::TreeCellDataFunc::cfunction_type func, void* data, GLib::DestroyNotify::cfunction_type dnotify);
gint base::TreeViewBase::insert_column_with_data_func (gint position, const std::string & title, Gtk::CellRenderer cell, Gtk::TreeCellDataFunc func) noexcept
{
  typedef gint (*call_wrap_t) (::GtkTreeView* tree_view, gint position, const char* title, ::GtkCellRenderer* cell, Gtk::TreeCellDataFunc::cfunction_type func, void* data, GLib::DestroyNotify::cfunction_type dnotify);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_insert_column_with_data_func;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_notified) : nullptr;
  auto cell_to_c = gi::unwrap (cell, gi::transfer_none, gi::direction_in);
  auto title_to_c = gi::unwrap (title, gi::transfer_none, gi::direction_in);
  auto position_to_c = position;
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()), (gint) (position_to_c), (const char*) (title_to_c), (::GtkCellRenderer*) (cell_to_c), (Gtk::TreeCellDataFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_), (GLib::DestroyNotify::cfunction_type) (func_wrap_ ? &func_wrap_->destroy : nullptr));
  return _temp_ret;
}

// gboolean gtk_tree_view_is_blank_at_pos (GtkTreeView* tree_view, gint x, gint y, GtkTreePath** path, GtkTreeViewColumn** column, gint* cell_x, gint* cell_y);
// gboolean gtk_tree_view_is_blank_at_pos (::GtkTreeView* tree_view, gint x, gint y, ::GtkTreePath** path, ::GtkTreeViewColumn** column, gint* cell_x, gint* cell_y);
bool base::TreeViewBase::is_blank_at_pos (gint x, gint y, Gtk::TreePath * path, Gtk::TreeViewColumn * column, gint * cell_x, gint * cell_y) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeView* tree_view, gint x, gint y, ::GtkTreePath** path, ::GtkTreeViewColumn** column, gint* cell_x, gint* cell_y);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_is_blank_at_pos;
  gint cell_y_o {};
  gint cell_x_o {};
  ::GtkTreeViewColumn* column_o {};
  ::GtkTreePath* path_o {};
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()), (gint) (x_to_c), (gint) (y_to_c), (::GtkTreePath**) (path ? &path_o : nullptr), (::GtkTreeViewColumn**) (column ? &column_o : nullptr), (gint*) (cell_x ? &cell_x_o : nullptr), (gint*) (cell_y ? &cell_y_o : nullptr));
  if (cell_y) *cell_y = cell_y_o;
  if (cell_x) *cell_x = cell_x_o;
  if (column) *column = gi::wrap (column_o, gi::transfer_none, gi::direction_out);
  if (path) *path = gi::wrap (path_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Gtk::TreePath, Gtk::TreeViewColumn, gint, gint> base::TreeViewBase::is_blank_at_pos (gint x, gint y) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeView* tree_view, gint x, gint y, ::GtkTreePath** path, ::GtkTreeViewColumn** column, gint* cell_x, gint* cell_y);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_is_blank_at_pos;
  gint cell_y_o {};
  gint cell_x_o {};
  ::GtkTreeViewColumn* column_o {};
  ::GtkTreePath* path_o {};
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()), (gint) (x_to_c), (gint) (y_to_c), (::GtkTreePath**) (&path_o), (::GtkTreeViewColumn**) (&column_o), (gint*) (&cell_x_o), (gint*) (&cell_y_o));
  return std::make_tuple (_temp_ret, gi::wrap (path_o, gi::transfer_full, gi::direction_out), gi::wrap (column_o, gi::transfer_none, gi::direction_out), cell_x_o, cell_y_o);
}

// gboolean gtk_tree_view_is_rubber_banding_active (GtkTreeView* tree_view);
// gboolean gtk_tree_view_is_rubber_banding_active (::GtkTreeView* tree_view);
bool base::TreeViewBase::is_rubber_banding_active () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeView* tree_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_is_rubber_banding_active;
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()));
  return _temp_ret;
}

// void gtk_tree_view_map_expanded_rows (GtkTreeView* tree_view, GtkTreeViewMappingFunc func, gpointer data);
// void gtk_tree_view_map_expanded_rows (::GtkTreeView* tree_view, Gtk::TreeViewMappingFunc::cfunction_type func, void* data);
void base::TreeViewBase::map_expanded_rows (Gtk::TreeViewMappingFunc func) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, Gtk::TreeViewMappingFunc::cfunction_type func, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_map_expanded_rows;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(func_wrap_)>::type> func_wrap__sp (func_wrap_);
  call_wrap_v ((::GtkTreeView*) (gobj_()), (Gtk::TreeViewMappingFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_));
}

// void gtk_tree_view_move_column_after (GtkTreeView* tree_view, GtkTreeViewColumn* column, GtkTreeViewColumn* base_column);
// void gtk_tree_view_move_column_after (::GtkTreeView* tree_view, ::GtkTreeViewColumn* column, ::GtkTreeViewColumn* base_column);
void base::TreeViewBase::move_column_after (Gtk::TreeViewColumn column, Gtk::TreeViewColumn base_column) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, ::GtkTreeViewColumn* column, ::GtkTreeViewColumn* base_column);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_move_column_after;
  auto base_column_to_c = gi::unwrap (base_column, gi::transfer_none, gi::direction_in);
  auto column_to_c = gi::unwrap (column, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeView*) (gobj_()), (::GtkTreeViewColumn*) (column_to_c), (::GtkTreeViewColumn*) (base_column_to_c));
}
void base::TreeViewBase::move_column_after (Gtk::TreeViewColumn column) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, ::GtkTreeViewColumn* column, ::GtkTreeViewColumn* base_column);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_move_column_after;
  auto base_column_to_c = nullptr;
  auto column_to_c = gi::unwrap (column, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeView*) (gobj_()), (::GtkTreeViewColumn*) (column_to_c), (::GtkTreeViewColumn*) (base_column_to_c));
}

// gint gtk_tree_view_remove_column (GtkTreeView* tree_view, GtkTreeViewColumn* column);
// gint gtk_tree_view_remove_column (::GtkTreeView* tree_view, ::GtkTreeViewColumn* column);
gint base::TreeViewBase::remove_column (Gtk::TreeViewColumn column) noexcept
{
  typedef gint (*call_wrap_t) (::GtkTreeView* tree_view, ::GtkTreeViewColumn* column);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_remove_column;
  auto column_to_c = gi::unwrap (column, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()), (::GtkTreeViewColumn*) (column_to_c));
  return _temp_ret;
}

// void gtk_tree_view_row_activated (GtkTreeView* tree_view, GtkTreePath* path, GtkTreeViewColumn* column);
// void gtk_tree_view_row_activated (::GtkTreeView* tree_view, ::GtkTreePath* path, ::GtkTreeViewColumn* column);
void base::TreeViewBase::row_activated (Gtk::TreePath path, Gtk::TreeViewColumn column) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, ::GtkTreePath* path, ::GtkTreeViewColumn* column);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_row_activated;
  auto column_to_c = gi::unwrap (column, gi::transfer_none, gi::direction_in);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeView*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkTreeViewColumn*) (column_to_c));
}

// gboolean gtk_tree_view_row_expanded (GtkTreeView* tree_view, GtkTreePath* path);
// gboolean gtk_tree_view_row_expanded (::GtkTreeView* tree_view, ::GtkTreePath* path);
bool base::TreeViewBase::row_expanded (Gtk::TreePath path) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeView* tree_view, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_row_expanded;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()), (::GtkTreePath*) (path_to_c));
  return _temp_ret;
}

// void gtk_tree_view_scroll_to_cell (GtkTreeView* tree_view, GtkTreePath* path, GtkTreeViewColumn* column, gboolean use_align, gfloat row_align, gfloat col_align);
// void gtk_tree_view_scroll_to_cell (::GtkTreeView* tree_view, ::GtkTreePath* path, ::GtkTreeViewColumn* column, gboolean use_align, gfloat row_align, gfloat col_align);
void base::TreeViewBase::scroll_to_cell (Gtk::TreePath path, Gtk::TreeViewColumn column, gboolean use_align, gfloat row_align, gfloat col_align) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, ::GtkTreePath* path, ::GtkTreeViewColumn* column, gboolean use_align, gfloat row_align, gfloat col_align);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_scroll_to_cell;
  auto col_align_to_c = col_align;
  auto row_align_to_c = row_align;
  auto use_align_to_c = use_align;
  auto column_to_c = gi::unwrap (column, gi::transfer_none, gi::direction_in);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeView*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkTreeViewColumn*) (column_to_c), (gboolean) (use_align_to_c), (gfloat) (row_align_to_c), (gfloat) (col_align_to_c));
}
void base::TreeViewBase::scroll_to_cell (gboolean use_align, gfloat row_align, gfloat col_align) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, ::GtkTreePath* path, ::GtkTreeViewColumn* column, gboolean use_align, gfloat row_align, gfloat col_align);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_scroll_to_cell;
  auto col_align_to_c = col_align;
  auto row_align_to_c = row_align;
  auto use_align_to_c = use_align;
  auto column_to_c = nullptr;
  auto path_to_c = nullptr;
  call_wrap_v ((::GtkTreeView*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkTreeViewColumn*) (column_to_c), (gboolean) (use_align_to_c), (gfloat) (row_align_to_c), (gfloat) (col_align_to_c));
}

// void gtk_tree_view_scroll_to_point (GtkTreeView* tree_view, gint tree_x, gint tree_y);
// void gtk_tree_view_scroll_to_point (::GtkTreeView* tree_view, gint tree_x, gint tree_y);
void base::TreeViewBase::scroll_to_point (gint tree_x, gint tree_y) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, gint tree_x, gint tree_y);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_scroll_to_point;
  auto tree_y_to_c = tree_y;
  auto tree_x_to_c = tree_x;
  call_wrap_v ((::GtkTreeView*) (gobj_()), (gint) (tree_x_to_c), (gint) (tree_y_to_c));
}

// void gtk_tree_view_set_activate_on_single_click (GtkTreeView* tree_view, gboolean single);
// void gtk_tree_view_set_activate_on_single_click (::GtkTreeView* tree_view, gboolean single);
void base::TreeViewBase::set_activate_on_single_click (gboolean single) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, gboolean single);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_set_activate_on_single_click;
  auto single_to_c = single;
  call_wrap_v ((::GtkTreeView*) (gobj_()), (gboolean) (single_to_c));
}

// void gtk_tree_view_set_column_drag_function (GtkTreeView* tree_view, GtkTreeViewColumnDropFunc func, gpointer user_data, GDestroyNotify destroy);
// void gtk_tree_view_set_column_drag_function (::GtkTreeView* tree_view, Gtk::TreeViewColumnDropFunc::cfunction_type func, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
void base::TreeViewBase::set_column_drag_function (Gtk::TreeViewColumnDropFunc func) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, Gtk::TreeViewColumnDropFunc::cfunction_type func, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_set_column_drag_function;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_notified) : nullptr;
  call_wrap_v ((::GtkTreeView*) (gobj_()), (Gtk::TreeViewColumnDropFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_), (GLib::DestroyNotify::cfunction_type) (func_wrap_ ? &func_wrap_->destroy : nullptr));
}

// void gtk_tree_view_set_cursor (GtkTreeView* tree_view, GtkTreePath* path, GtkTreeViewColumn* focus_column, gboolean start_editing);
// void gtk_tree_view_set_cursor (::GtkTreeView* tree_view, ::GtkTreePath* path, ::GtkTreeViewColumn* focus_column, gboolean start_editing);
void base::TreeViewBase::set_cursor (Gtk::TreePath path, Gtk::TreeViewColumn focus_column, gboolean start_editing) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, ::GtkTreePath* path, ::GtkTreeViewColumn* focus_column, gboolean start_editing);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_set_cursor;
  auto start_editing_to_c = start_editing;
  auto focus_column_to_c = gi::unwrap (focus_column, gi::transfer_none, gi::direction_in);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeView*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkTreeViewColumn*) (focus_column_to_c), (gboolean) (start_editing_to_c));
}
void base::TreeViewBase::set_cursor (Gtk::TreePath path, gboolean start_editing) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, ::GtkTreePath* path, ::GtkTreeViewColumn* focus_column, gboolean start_editing);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_set_cursor;
  auto start_editing_to_c = start_editing;
  auto focus_column_to_c = nullptr;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeView*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkTreeViewColumn*) (focus_column_to_c), (gboolean) (start_editing_to_c));
}

// void gtk_tree_view_set_cursor_on_cell (GtkTreeView* tree_view, GtkTreePath* path, GtkTreeViewColumn* focus_column, GtkCellRenderer* focus_cell, gboolean start_editing);
// void gtk_tree_view_set_cursor_on_cell (::GtkTreeView* tree_view, ::GtkTreePath* path, ::GtkTreeViewColumn* focus_column, ::GtkCellRenderer* focus_cell, gboolean start_editing);
void base::TreeViewBase::set_cursor_on_cell (Gtk::TreePath path, Gtk::TreeViewColumn focus_column, Gtk::CellRenderer focus_cell, gboolean start_editing) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, ::GtkTreePath* path, ::GtkTreeViewColumn* focus_column, ::GtkCellRenderer* focus_cell, gboolean start_editing);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_set_cursor_on_cell;
  auto start_editing_to_c = start_editing;
  auto focus_cell_to_c = gi::unwrap (focus_cell, gi::transfer_none, gi::direction_in);
  auto focus_column_to_c = gi::unwrap (focus_column, gi::transfer_none, gi::direction_in);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeView*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkTreeViewColumn*) (focus_column_to_c), (::GtkCellRenderer*) (focus_cell_to_c), (gboolean) (start_editing_to_c));
}
void base::TreeViewBase::set_cursor_on_cell (Gtk::TreePath path, gboolean start_editing) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, ::GtkTreePath* path, ::GtkTreeViewColumn* focus_column, ::GtkCellRenderer* focus_cell, gboolean start_editing);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_set_cursor_on_cell;
  auto start_editing_to_c = start_editing;
  auto focus_cell_to_c = nullptr;
  auto focus_column_to_c = nullptr;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeView*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkTreeViewColumn*) (focus_column_to_c), (::GtkCellRenderer*) (focus_cell_to_c), (gboolean) (start_editing_to_c));
}

// void gtk_tree_view_set_destroy_count_func (GtkTreeView* tree_view, GtkTreeDestroyCountFunc func, gpointer data, GDestroyNotify destroy);
// void gtk_tree_view_set_destroy_count_func (::GtkTreeView* tree_view, Gtk::TreeDestroyCountFunc::cfunction_type func, void* data, GLib::DestroyNotify::cfunction_type destroy);
// IGNORE; deprecated

// void gtk_tree_view_set_drag_dest_row (GtkTreeView* tree_view, GtkTreePath* path, GtkTreeViewDropPosition pos);
// void gtk_tree_view_set_drag_dest_row (::GtkTreeView* tree_view, ::GtkTreePath* path, ::GtkTreeViewDropPosition pos);
void base::TreeViewBase::set_drag_dest_row (Gtk::TreePath path, Gtk::TreeViewDropPosition pos) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, ::GtkTreePath* path, ::GtkTreeViewDropPosition pos);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_set_drag_dest_row;
  auto pos_to_c = gi::unwrap (pos);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeView*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkTreeViewDropPosition) (pos_to_c));
}
void base::TreeViewBase::set_drag_dest_row (Gtk::TreeViewDropPosition pos) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, ::GtkTreePath* path, ::GtkTreeViewDropPosition pos);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_set_drag_dest_row;
  auto pos_to_c = gi::unwrap (pos);
  auto path_to_c = nullptr;
  call_wrap_v ((::GtkTreeView*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkTreeViewDropPosition) (pos_to_c));
}

// void gtk_tree_view_set_enable_search (GtkTreeView* tree_view, gboolean enable_search);
// void gtk_tree_view_set_enable_search (::GtkTreeView* tree_view, gboolean enable_search);
void base::TreeViewBase::set_enable_search (gboolean enable_search) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, gboolean enable_search);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_set_enable_search;
  auto enable_search_to_c = enable_search;
  call_wrap_v ((::GtkTreeView*) (gobj_()), (gboolean) (enable_search_to_c));
}

// void gtk_tree_view_set_enable_tree_lines (GtkTreeView* tree_view, gboolean enabled);
// void gtk_tree_view_set_enable_tree_lines (::GtkTreeView* tree_view, gboolean enabled);
void base::TreeViewBase::set_enable_tree_lines (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_set_enable_tree_lines;
  auto enabled_to_c = enabled;
  call_wrap_v ((::GtkTreeView*) (gobj_()), (gboolean) (enabled_to_c));
}

// void gtk_tree_view_set_expander_column (GtkTreeView* tree_view, GtkTreeViewColumn* column);
// void gtk_tree_view_set_expander_column (::GtkTreeView* tree_view, ::GtkTreeViewColumn* column);
void base::TreeViewBase::set_expander_column (Gtk::TreeViewColumn column) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, ::GtkTreeViewColumn* column);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_set_expander_column;
  auto column_to_c = gi::unwrap (column, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeView*) (gobj_()), (::GtkTreeViewColumn*) (column_to_c));
}
void base::TreeViewBase::set_expander_column () noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, ::GtkTreeViewColumn* column);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_set_expander_column;
  auto column_to_c = nullptr;
  call_wrap_v ((::GtkTreeView*) (gobj_()), (::GtkTreeViewColumn*) (column_to_c));
}

// void gtk_tree_view_set_fixed_height_mode (GtkTreeView* tree_view, gboolean enable);
// void gtk_tree_view_set_fixed_height_mode (::GtkTreeView* tree_view, gboolean enable);
void base::TreeViewBase::set_fixed_height_mode (gboolean enable) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, gboolean enable);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_set_fixed_height_mode;
  auto enable_to_c = enable;
  call_wrap_v ((::GtkTreeView*) (gobj_()), (gboolean) (enable_to_c));
}

// void gtk_tree_view_set_grid_lines (GtkTreeView* tree_view, GtkTreeViewGridLines grid_lines);
// void gtk_tree_view_set_grid_lines (::GtkTreeView* tree_view, ::GtkTreeViewGridLines grid_lines);
void base::TreeViewBase::set_grid_lines (Gtk::TreeViewGridLines grid_lines) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, ::GtkTreeViewGridLines grid_lines);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_set_grid_lines;
  auto grid_lines_to_c = gi::unwrap (grid_lines);
  call_wrap_v ((::GtkTreeView*) (gobj_()), (::GtkTreeViewGridLines) (grid_lines_to_c));
}

// void gtk_tree_view_set_hadjustment (GtkTreeView* tree_view, GtkAdjustment* adjustment);
// void gtk_tree_view_set_hadjustment (::GtkTreeView* tree_view, ::GtkAdjustment* adjustment);
// IGNORE; deprecated

// void gtk_tree_view_set_headers_clickable (GtkTreeView* tree_view, gboolean setting);
// void gtk_tree_view_set_headers_clickable (::GtkTreeView* tree_view, gboolean setting);
void base::TreeViewBase::set_headers_clickable (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_set_headers_clickable;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkTreeView*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_tree_view_set_headers_visible (GtkTreeView* tree_view, gboolean headers_visible);
// void gtk_tree_view_set_headers_visible (::GtkTreeView* tree_view, gboolean headers_visible);
void base::TreeViewBase::set_headers_visible (gboolean headers_visible) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, gboolean headers_visible);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_set_headers_visible;
  auto headers_visible_to_c = headers_visible;
  call_wrap_v ((::GtkTreeView*) (gobj_()), (gboolean) (headers_visible_to_c));
}

// void gtk_tree_view_set_hover_expand (GtkTreeView* tree_view, gboolean expand);
// void gtk_tree_view_set_hover_expand (::GtkTreeView* tree_view, gboolean expand);
void base::TreeViewBase::set_hover_expand (gboolean expand) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, gboolean expand);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_set_hover_expand;
  auto expand_to_c = expand;
  call_wrap_v ((::GtkTreeView*) (gobj_()), (gboolean) (expand_to_c));
}

// void gtk_tree_view_set_hover_selection (GtkTreeView* tree_view, gboolean hover);
// void gtk_tree_view_set_hover_selection (::GtkTreeView* tree_view, gboolean hover);
void base::TreeViewBase::set_hover_selection (gboolean hover) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, gboolean hover);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_set_hover_selection;
  auto hover_to_c = hover;
  call_wrap_v ((::GtkTreeView*) (gobj_()), (gboolean) (hover_to_c));
}

// void gtk_tree_view_set_level_indentation (GtkTreeView* tree_view, gint indentation);
// void gtk_tree_view_set_level_indentation (::GtkTreeView* tree_view, gint indentation);
void base::TreeViewBase::set_level_indentation (gint indentation) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, gint indentation);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_set_level_indentation;
  auto indentation_to_c = indentation;
  call_wrap_v ((::GtkTreeView*) (gobj_()), (gint) (indentation_to_c));
}

// void gtk_tree_view_set_model (GtkTreeView* tree_view, GtkTreeModel* model);
// void gtk_tree_view_set_model (::GtkTreeView* tree_view, ::GtkTreeModel* model);
void base::TreeViewBase::set_model (Gtk::TreeModel model) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, ::GtkTreeModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_set_model;
  auto model_to_c = gi::unwrap (model, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeView*) (gobj_()), (::GtkTreeModel*) (model_to_c));
}
void base::TreeViewBase::set_model () noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, ::GtkTreeModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_set_model;
  auto model_to_c = nullptr;
  call_wrap_v ((::GtkTreeView*) (gobj_()), (::GtkTreeModel*) (model_to_c));
}

// void gtk_tree_view_set_reorderable (GtkTreeView* tree_view, gboolean reorderable);
// void gtk_tree_view_set_reorderable (::GtkTreeView* tree_view, gboolean reorderable);
void base::TreeViewBase::set_reorderable (gboolean reorderable) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, gboolean reorderable);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_set_reorderable;
  auto reorderable_to_c = reorderable;
  call_wrap_v ((::GtkTreeView*) (gobj_()), (gboolean) (reorderable_to_c));
}

// void gtk_tree_view_set_row_separator_func (GtkTreeView* tree_view, GtkTreeViewRowSeparatorFunc func, gpointer data, GDestroyNotify destroy);
// void gtk_tree_view_set_row_separator_func (::GtkTreeView* tree_view, Gtk::TreeViewRowSeparatorFunc::cfunction_type func, void* data, GLib::DestroyNotify::cfunction_type destroy);
void base::TreeViewBase::set_row_separator_func (Gtk::TreeViewRowSeparatorFunc func) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, Gtk::TreeViewRowSeparatorFunc::cfunction_type func, void* data, GLib::DestroyNotify::cfunction_type destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_set_row_separator_func;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_notified) : nullptr;
  call_wrap_v ((::GtkTreeView*) (gobj_()), (Gtk::TreeViewRowSeparatorFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_), (GLib::DestroyNotify::cfunction_type) (func_wrap_ ? &func_wrap_->destroy : nullptr));
}

// void gtk_tree_view_set_rubber_banding (GtkTreeView* tree_view, gboolean enable);
// void gtk_tree_view_set_rubber_banding (::GtkTreeView* tree_view, gboolean enable);
void base::TreeViewBase::set_rubber_banding (gboolean enable) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, gboolean enable);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_set_rubber_banding;
  auto enable_to_c = enable;
  call_wrap_v ((::GtkTreeView*) (gobj_()), (gboolean) (enable_to_c));
}

// void gtk_tree_view_set_rules_hint (GtkTreeView* tree_view, gboolean setting);
// void gtk_tree_view_set_rules_hint (::GtkTreeView* tree_view, gboolean setting);
// IGNORE; deprecated

// void gtk_tree_view_set_search_column (GtkTreeView* tree_view, gint column);
// void gtk_tree_view_set_search_column (::GtkTreeView* tree_view, gint column);
void base::TreeViewBase::set_search_column (gint column) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, gint column);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_set_search_column;
  auto column_to_c = column;
  call_wrap_v ((::GtkTreeView*) (gobj_()), (gint) (column_to_c));
}

// void gtk_tree_view_set_search_entry (GtkTreeView* tree_view, GtkEntry* entry);
// void gtk_tree_view_set_search_entry (::GtkTreeView* tree_view, ::GtkEntry* entry);
void base::TreeViewBase::set_search_entry (Gtk::Entry entry) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, ::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_set_search_entry;
  auto entry_to_c = gi::unwrap (entry, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeView*) (gobj_()), (::GtkEntry*) (entry_to_c));
}
void base::TreeViewBase::set_search_entry () noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, ::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_set_search_entry;
  auto entry_to_c = nullptr;
  call_wrap_v ((::GtkTreeView*) (gobj_()), (::GtkEntry*) (entry_to_c));
}

// void gtk_tree_view_set_search_equal_func (GtkTreeView* tree_view, GtkTreeViewSearchEqualFunc search_equal_func, gpointer search_user_data, GDestroyNotify search_destroy);
// void gtk_tree_view_set_search_equal_func (::GtkTreeView* tree_view, Gtk::TreeViewSearchEqualFunc::cfunction_type search_equal_func, void* search_user_data, GLib::DestroyNotify::cfunction_type search_destroy);
void base::TreeViewBase::set_search_equal_func (Gtk::TreeViewSearchEqualFunc search_equal_func) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, Gtk::TreeViewSearchEqualFunc::cfunction_type search_equal_func, void* search_user_data, GLib::DestroyNotify::cfunction_type search_destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_set_search_equal_func;
  auto search_equal_func_wrap_ = search_equal_func ? unwrap (std::move (search_equal_func), gi::scope_notified) : nullptr;
  call_wrap_v ((::GtkTreeView*) (gobj_()), (Gtk::TreeViewSearchEqualFunc::cfunction_type) (search_equal_func_wrap_ ? &search_equal_func_wrap_->wrapper : nullptr), (void*) (search_equal_func_wrap_), (GLib::DestroyNotify::cfunction_type) (search_equal_func_wrap_ ? &search_equal_func_wrap_->destroy : nullptr));
}

// void gtk_tree_view_set_search_position_func (GtkTreeView* tree_view, GtkTreeViewSearchPositionFunc func, gpointer data, GDestroyNotify destroy);
// void gtk_tree_view_set_search_position_func (::GtkTreeView* tree_view, Gtk::TreeViewSearchPositionFunc::cfunction_type func, void* data, GLib::DestroyNotify::cfunction_type destroy);
void base::TreeViewBase::set_search_position_func (Gtk::TreeViewSearchPositionFunc func) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, Gtk::TreeViewSearchPositionFunc::cfunction_type func, void* data, GLib::DestroyNotify::cfunction_type destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_set_search_position_func;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_notified) : nullptr;
  call_wrap_v ((::GtkTreeView*) (gobj_()), (Gtk::TreeViewSearchPositionFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_), (GLib::DestroyNotify::cfunction_type) (func_wrap_ ? &func_wrap_->destroy : nullptr));
}

// void gtk_tree_view_set_show_expanders (GtkTreeView* tree_view, gboolean enabled);
// void gtk_tree_view_set_show_expanders (::GtkTreeView* tree_view, gboolean enabled);
void base::TreeViewBase::set_show_expanders (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_set_show_expanders;
  auto enabled_to_c = enabled;
  call_wrap_v ((::GtkTreeView*) (gobj_()), (gboolean) (enabled_to_c));
}

// void gtk_tree_view_set_tooltip_cell (GtkTreeView* tree_view, GtkTooltip* tooltip, GtkTreePath* path, GtkTreeViewColumn* column, GtkCellRenderer* cell);
// void gtk_tree_view_set_tooltip_cell (::GtkTreeView* tree_view, ::GtkTooltip* tooltip, ::GtkTreePath* path, ::GtkTreeViewColumn* column, ::GtkCellRenderer* cell);
void base::TreeViewBase::set_tooltip_cell (Gtk::Tooltip tooltip, Gtk::TreePath path, Gtk::TreeViewColumn column, Gtk::CellRenderer cell) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, ::GtkTooltip* tooltip, ::GtkTreePath* path, ::GtkTreeViewColumn* column, ::GtkCellRenderer* cell);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_set_tooltip_cell;
  auto cell_to_c = gi::unwrap (cell, gi::transfer_none, gi::direction_in);
  auto column_to_c = gi::unwrap (column, gi::transfer_none, gi::direction_in);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto tooltip_to_c = gi::unwrap (tooltip, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeView*) (gobj_()), (::GtkTooltip*) (tooltip_to_c), (::GtkTreePath*) (path_to_c), (::GtkTreeViewColumn*) (column_to_c), (::GtkCellRenderer*) (cell_to_c));
}
void base::TreeViewBase::set_tooltip_cell (Gtk::Tooltip tooltip) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, ::GtkTooltip* tooltip, ::GtkTreePath* path, ::GtkTreeViewColumn* column, ::GtkCellRenderer* cell);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_set_tooltip_cell;
  auto cell_to_c = nullptr;
  auto column_to_c = nullptr;
  auto path_to_c = nullptr;
  auto tooltip_to_c = gi::unwrap (tooltip, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeView*) (gobj_()), (::GtkTooltip*) (tooltip_to_c), (::GtkTreePath*) (path_to_c), (::GtkTreeViewColumn*) (column_to_c), (::GtkCellRenderer*) (cell_to_c));
}

// void gtk_tree_view_set_tooltip_column (GtkTreeView* tree_view, gint column);
// void gtk_tree_view_set_tooltip_column (::GtkTreeView* tree_view, gint column);
void base::TreeViewBase::set_tooltip_column (gint column) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, gint column);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_set_tooltip_column;
  auto column_to_c = column;
  call_wrap_v ((::GtkTreeView*) (gobj_()), (gint) (column_to_c));
}

// void gtk_tree_view_set_tooltip_row (GtkTreeView* tree_view, GtkTooltip* tooltip, GtkTreePath* path);
// void gtk_tree_view_set_tooltip_row (::GtkTreeView* tree_view, ::GtkTooltip* tooltip, ::GtkTreePath* path);
void base::TreeViewBase::set_tooltip_row (Gtk::Tooltip tooltip, Gtk::TreePath path) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, ::GtkTooltip* tooltip, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_set_tooltip_row;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto tooltip_to_c = gi::unwrap (tooltip, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeView*) (gobj_()), (::GtkTooltip*) (tooltip_to_c), (::GtkTreePath*) (path_to_c));
}

// void gtk_tree_view_set_vadjustment (GtkTreeView* tree_view, GtkAdjustment* adjustment);
// void gtk_tree_view_set_vadjustment (::GtkTreeView* tree_view, ::GtkAdjustment* adjustment);
// IGNORE; deprecated

// void gtk_tree_view_unset_rows_drag_dest (GtkTreeView* tree_view);
// void gtk_tree_view_unset_rows_drag_dest (::GtkTreeView* tree_view);
void base::TreeViewBase::unset_rows_drag_dest () noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_unset_rows_drag_dest;
  call_wrap_v ((::GtkTreeView*) (gobj_()));
}

// void gtk_tree_view_unset_rows_drag_source (GtkTreeView* tree_view);
// void gtk_tree_view_unset_rows_drag_source (::GtkTreeView* tree_view);
void base::TreeViewBase::unset_rows_drag_source () noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_unset_rows_drag_source;
  call_wrap_v ((::GtkTreeView*) (gobj_()));
}

















} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treeview_extra_def_impl.hpp>)
#include <gtk/treeview_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treeview_extra_impl.hpp>)
#include <gtk/treeview_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void TreeViewClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkTreeViewClass *methods = (::GtkTreeViewClass *) class_struct;
  (void) methods;

  methods->columns_changed = (decltype (methods->columns_changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::columns_changed_>;
  methods->cursor_changed = (decltype (methods->cursor_changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::cursor_changed_>;
  methods->expand_collapse_cursor_row = (decltype (methods->expand_collapse_cursor_row)) detail::method_wrapper<self, bool (*) (gboolean logical, gboolean expand, gboolean open_all), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::expand_collapse_cursor_row_>;
  methods->move_cursor = (decltype (methods->move_cursor)) detail::method_wrapper<self, bool (*) (Gtk::MovementStep step, gint count), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::move_cursor_>;
  methods->row_activated = (decltype (methods->row_activated)) detail::method_wrapper<self, void (*) (Gtk::TreePath path, Gtk::TreeViewColumn column), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::row_activated_>;
  methods->row_collapsed = (decltype (methods->row_collapsed)) detail::method_wrapper<self, void (*) (Gtk::TreeIter iter, Gtk::TreePath path), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::row_collapsed_>;
  methods->row_expanded = (decltype (methods->row_expanded)) detail::method_wrapper<self, void (*) (Gtk::TreeIter iter, Gtk::TreePath path), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::row_expanded_>;
  methods->select_all = (decltype (methods->select_all)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::select_all_>;
  methods->select_cursor_parent = (decltype (methods->select_cursor_parent)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::select_cursor_parent_>;
  methods->select_cursor_row = (decltype (methods->select_cursor_row)) detail::method_wrapper<self, bool (*) (gboolean start_editing), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::select_cursor_row_>;
  methods->start_interactive_search = (decltype (methods->start_interactive_search)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::start_interactive_search_>;
  methods->test_collapse_row = (decltype (methods->test_collapse_row)) detail::method_wrapper<self, bool (*) (Gtk::TreeIter iter, Gtk::TreePath path), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::test_collapse_row_>;
  methods->test_expand_row = (decltype (methods->test_expand_row)) detail::method_wrapper<self, bool (*) (Gtk::TreeIter iter, Gtk::TreePath path), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::test_expand_row_>;
  methods->toggle_cursor_row = (decltype (methods->toggle_cursor_row)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::toggle_cursor_row_>;
  methods->unselect_all = (decltype (methods->unselect_all)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::unselect_all_>;
}

// void TreeView::columns_changed (GtkTreeView* tree_view);
// void TreeView::columns_changed (::GtkTreeView* tree_view);
void TreeViewClass::columns_changed_ () noexcept
{
  if (!get_struct_()->columns_changed) return ;
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->columns_changed;
  call_wrap_v ((::GtkTreeView*) (gobj_()));
}

// void TreeView::cursor_changed (GtkTreeView* tree_view);
// void TreeView::cursor_changed (::GtkTreeView* tree_view);
void TreeViewClass::cursor_changed_ () noexcept
{
  if (!get_struct_()->cursor_changed) return ;
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->cursor_changed;
  call_wrap_v ((::GtkTreeView*) (gobj_()));
}

// gboolean TreeView::expand_collapse_cursor_row (GtkTreeView* tree_view, gboolean logical, gboolean expand, gboolean open_all);
// gboolean TreeView::expand_collapse_cursor_row (::GtkTreeView* tree_view, gboolean logical, gboolean expand, gboolean open_all);
bool TreeViewClass::expand_collapse_cursor_row_ (gboolean logical, gboolean expand, gboolean open_all) noexcept
{
  if (!get_struct_()->expand_collapse_cursor_row) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkTreeView* tree_view, gboolean logical, gboolean expand, gboolean open_all);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->expand_collapse_cursor_row;
  auto open_all_to_c = open_all;
  auto expand_to_c = expand;
  auto logical_to_c = logical;
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()), (gboolean) (logical_to_c), (gboolean) (expand_to_c), (gboolean) (open_all_to_c));
  return _temp_ret;
}

// gboolean TreeView::move_cursor (GtkTreeView* tree_view, GtkMovementStep step, gint count);
// gboolean TreeView::move_cursor (::GtkTreeView* tree_view, ::GtkMovementStep step, gint count);
bool TreeViewClass::move_cursor_ (Gtk::MovementStep step, gint count) noexcept
{
  if (!get_struct_()->move_cursor) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkTreeView* tree_view, ::GtkMovementStep step, gint count);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->move_cursor;
  auto count_to_c = count;
  auto step_to_c = gi::unwrap (step);
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()), (::GtkMovementStep) (step_to_c), (gint) (count_to_c));
  return _temp_ret;
}

// void TreeView::row_activated (GtkTreeView* tree_view, GtkTreePath* path, GtkTreeViewColumn* column);
// void TreeView::row_activated (::GtkTreeView* tree_view, ::GtkTreePath* path, ::GtkTreeViewColumn* column);
void TreeViewClass::row_activated_ (Gtk::TreePath path, Gtk::TreeViewColumn column) noexcept
{
  if (!get_struct_()->row_activated) return ;
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, ::GtkTreePath* path, ::GtkTreeViewColumn* column);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->row_activated;
  auto column_to_c = gi::unwrap (column, gi::transfer_none, gi::direction_in);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeView*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkTreeViewColumn*) (column_to_c));
}

// void TreeView::row_collapsed (GtkTreeView* tree_view, GtkTreeIter* iter, GtkTreePath* path);
// void TreeView::row_collapsed (::GtkTreeView* tree_view, ::GtkTreeIter* iter, ::GtkTreePath* path);
void TreeViewClass::row_collapsed_ (Gtk::TreeIter iter, Gtk::TreePath path) noexcept
{
  if (!get_struct_()->row_collapsed) return ;
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, ::GtkTreeIter* iter, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->row_collapsed;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeView*) (gobj_()), (::GtkTreeIter*) (iter_to_c), (::GtkTreePath*) (path_to_c));
}

// void TreeView::row_expanded (GtkTreeView* tree_view, GtkTreeIter* iter, GtkTreePath* path);
// void TreeView::row_expanded (::GtkTreeView* tree_view, ::GtkTreeIter* iter, ::GtkTreePath* path);
void TreeViewClass::row_expanded_ (Gtk::TreeIter iter, Gtk::TreePath path) noexcept
{
  if (!get_struct_()->row_expanded) return ;
  typedef void (*call_wrap_t) (::GtkTreeView* tree_view, ::GtkTreeIter* iter, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->row_expanded;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeView*) (gobj_()), (::GtkTreeIter*) (iter_to_c), (::GtkTreePath*) (path_to_c));
}

// gboolean TreeView::select_all (GtkTreeView* tree_view);
// gboolean TreeView::select_all (::GtkTreeView* tree_view);
bool TreeViewClass::select_all_ () noexcept
{
  if (!get_struct_()->select_all) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkTreeView* tree_view);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->select_all;
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()));
  return _temp_ret;
}

// gboolean TreeView::select_cursor_parent (GtkTreeView* tree_view);
// gboolean TreeView::select_cursor_parent (::GtkTreeView* tree_view);
bool TreeViewClass::select_cursor_parent_ () noexcept
{
  if (!get_struct_()->select_cursor_parent) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkTreeView* tree_view);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->select_cursor_parent;
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()));
  return _temp_ret;
}

// gboolean TreeView::select_cursor_row (GtkTreeView* tree_view, gboolean start_editing);
// gboolean TreeView::select_cursor_row (::GtkTreeView* tree_view, gboolean start_editing);
bool TreeViewClass::select_cursor_row_ (gboolean start_editing) noexcept
{
  if (!get_struct_()->select_cursor_row) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkTreeView* tree_view, gboolean start_editing);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->select_cursor_row;
  auto start_editing_to_c = start_editing;
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()), (gboolean) (start_editing_to_c));
  return _temp_ret;
}

// gboolean TreeView::start_interactive_search (GtkTreeView* tree_view);
// gboolean TreeView::start_interactive_search (::GtkTreeView* tree_view);
bool TreeViewClass::start_interactive_search_ () noexcept
{
  if (!get_struct_()->start_interactive_search) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkTreeView* tree_view);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->start_interactive_search;
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()));
  return _temp_ret;
}

// gboolean TreeView::test_collapse_row (GtkTreeView* tree_view, GtkTreeIter* iter, GtkTreePath* path);
// gboolean TreeView::test_collapse_row (::GtkTreeView* tree_view, ::GtkTreeIter* iter, ::GtkTreePath* path);
bool TreeViewClass::test_collapse_row_ (Gtk::TreeIter iter, Gtk::TreePath path) noexcept
{
  if (!get_struct_()->test_collapse_row) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkTreeView* tree_view, ::GtkTreeIter* iter, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->test_collapse_row;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()), (::GtkTreeIter*) (iter_to_c), (::GtkTreePath*) (path_to_c));
  return _temp_ret;
}

// gboolean TreeView::test_expand_row (GtkTreeView* tree_view, GtkTreeIter* iter, GtkTreePath* path);
// gboolean TreeView::test_expand_row (::GtkTreeView* tree_view, ::GtkTreeIter* iter, ::GtkTreePath* path);
bool TreeViewClass::test_expand_row_ (Gtk::TreeIter iter, Gtk::TreePath path) noexcept
{
  if (!get_struct_()->test_expand_row) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkTreeView* tree_view, ::GtkTreeIter* iter, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->test_expand_row;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()), (::GtkTreeIter*) (iter_to_c), (::GtkTreePath*) (path_to_c));
  return _temp_ret;
}

// gboolean TreeView::toggle_cursor_row (GtkTreeView* tree_view);
// gboolean TreeView::toggle_cursor_row (::GtkTreeView* tree_view);
bool TreeViewClass::toggle_cursor_row_ () noexcept
{
  if (!get_struct_()->toggle_cursor_row) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkTreeView* tree_view);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->toggle_cursor_row;
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()));
  return _temp_ret;
}

// gboolean TreeView::unselect_all (GtkTreeView* tree_view);
// gboolean TreeView::unselect_all (::GtkTreeView* tree_view);
bool TreeViewClass::unselect_all_ () noexcept
{
  if (!get_struct_()->unselect_all) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkTreeView* tree_view);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->unselect_all;
  auto _temp_ret = call_wrap_v ((::GtkTreeView*) (gobj_()));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
