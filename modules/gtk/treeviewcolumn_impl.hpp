// AUTO-GENERATED

#ifndef _GI_GTK_TREEVIEWCOLUMN_IMPL_HPP_
#define _GI_GTK_TREEVIEWCOLUMN_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Buildable TreeViewColumnBase::interface_ (gi::interface_tag<Gtk::Buildable>)
{ return gi::wrap ((Gtk::Buildable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

TreeViewColumnBase::operator Gtk::Buildable ()
{ return interface_ (gi::interface_tag<Gtk::Buildable>()); }

Gtk::CellLayout TreeViewColumnBase::interface_ (gi::interface_tag<Gtk::CellLayout>)
{ return gi::wrap ((Gtk::CellLayout::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

TreeViewColumnBase::operator Gtk::CellLayout ()
{ return interface_ (gi::interface_tag<Gtk::CellLayout>()); }

// GtkTreeViewColumn* gtk_tree_view_column_new ();
// ::GtkTreeViewColumn* gtk_tree_view_column_new ();
Gtk::TreeViewColumn base::TreeViewColumnBase::new_ () noexcept
{
  typedef ::GtkTreeViewColumn* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkTreeViewColumn* gtk_tree_view_column_new_with_area (GtkCellArea* area);
// ::GtkTreeViewColumn* gtk_tree_view_column_new_with_area (::GtkCellArea* area);
Gtk::TreeViewColumn base::TreeViewColumnBase::new_with_area (Gtk::CellArea area) noexcept
{
  typedef ::GtkTreeViewColumn* (*call_wrap_t) (::GtkCellArea* area);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_new_with_area;
  auto area_to_c = gi::unwrap (area, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (area_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkTreeViewColumn* gtk_tree_view_column_new_with_attributes (const gchar* title, GtkCellRenderer* cell);
// ::GtkTreeViewColumn* gtk_tree_view_column_new_with_attributes (const char* title, ::GtkCellRenderer* cell);
// IGNORE; not introspectable, varargs not supported

// void gtk_tree_view_column_add_attribute (GtkTreeViewColumn* tree_column, GtkCellRenderer* cell_renderer, const gchar* attribute, gint column);
// void gtk_tree_view_column_add_attribute (::GtkTreeViewColumn* tree_column, ::GtkCellRenderer* cell_renderer, const char* attribute, gint column);
void base::TreeViewColumnBase::add_attribute (Gtk::CellRenderer cell_renderer, const std::string & attribute, gint column) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeViewColumn* tree_column, ::GtkCellRenderer* cell_renderer, const char* attribute, gint column);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_add_attribute;
  auto column_to_c = column;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none, gi::direction_in);
  auto cell_renderer_to_c = gi::unwrap (cell_renderer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeViewColumn*) (gobj_()), (::GtkCellRenderer*) (cell_renderer_to_c), (const char*) (attribute_to_c), (gint) (column_to_c));
}

// gboolean gtk_tree_view_column_cell_get_position (GtkTreeViewColumn* tree_column, GtkCellRenderer* cell_renderer, gint* x_offset, gint* width);
// gboolean gtk_tree_view_column_cell_get_position (::GtkTreeViewColumn* tree_column, ::GtkCellRenderer* cell_renderer, gint* x_offset, gint* width);
bool base::TreeViewColumnBase::cell_get_position (Gtk::CellRenderer cell_renderer, gint * x_offset, gint * width) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeViewColumn* tree_column, ::GtkCellRenderer* cell_renderer, gint* x_offset, gint* width);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_cell_get_position;
  gint width_o {};
  gint x_offset_o {};
  auto cell_renderer_to_c = gi::unwrap (cell_renderer, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeViewColumn*) (gobj_()), (::GtkCellRenderer*) (cell_renderer_to_c), (gint*) (x_offset ? &x_offset_o : nullptr), (gint*) (width ? &width_o : nullptr));
  if (width) *width = width_o;
  if (x_offset) *x_offset = x_offset_o;
  return _temp_ret;
}
std::tuple<bool, gint, gint> base::TreeViewColumnBase::cell_get_position (Gtk::CellRenderer cell_renderer) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeViewColumn* tree_column, ::GtkCellRenderer* cell_renderer, gint* x_offset, gint* width);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_cell_get_position;
  gint width_o {};
  gint x_offset_o {};
  auto cell_renderer_to_c = gi::unwrap (cell_renderer, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeViewColumn*) (gobj_()), (::GtkCellRenderer*) (cell_renderer_to_c), (gint*) (&x_offset_o), (gint*) (&width_o));
  return std::make_tuple (_temp_ret, x_offset_o, width_o);
}

// void gtk_tree_view_column_cell_get_size (GtkTreeViewColumn* tree_column, const GdkRectangle* cell_area, gint* x_offset, gint* y_offset, gint* width, gint* height);
// void gtk_tree_view_column_cell_get_size (::GtkTreeViewColumn* tree_column, const ::GdkRectangle* cell_area, gint* x_offset, gint* y_offset, gint* width, gint* height);
void base::TreeViewColumnBase::cell_get_size (const Gdk::Rectangle & cell_area, gint * x_offset, gint * y_offset, gint * width, gint * height) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeViewColumn* tree_column, const ::GdkRectangle* cell_area, gint* x_offset, gint* y_offset, gint* width, gint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_cell_get_size;
  gint height_o {};
  gint width_o {};
  gint y_offset_o {};
  gint x_offset_o {};
  auto cell_area_to_c = gi::unwrap (cell_area, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeViewColumn*) (gobj_()), (const ::GdkRectangle*) (cell_area_to_c), (gint*) (x_offset ? &x_offset_o : nullptr), (gint*) (y_offset ? &y_offset_o : nullptr), (gint*) (width ? &width_o : nullptr), (gint*) (height ? &height_o : nullptr));
  if (height) *height = height_o;
  if (width) *width = width_o;
  if (y_offset) *y_offset = y_offset_o;
  if (x_offset) *x_offset = x_offset_o;
}
void base::TreeViewColumnBase::cell_get_size (gint * x_offset, gint * y_offset, gint * width, gint * height) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeViewColumn* tree_column, const ::GdkRectangle* cell_area, gint* x_offset, gint* y_offset, gint* width, gint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_cell_get_size;
  gint height_o {};
  gint width_o {};
  gint y_offset_o {};
  gint x_offset_o {};
  auto cell_area_to_c = nullptr;
  call_wrap_v ((::GtkTreeViewColumn*) (gobj_()), (const ::GdkRectangle*) (cell_area_to_c), (gint*) (x_offset ? &x_offset_o : nullptr), (gint*) (y_offset ? &y_offset_o : nullptr), (gint*) (width ? &width_o : nullptr), (gint*) (height ? &height_o : nullptr));
  if (height) *height = height_o;
  if (width) *width = width_o;
  if (y_offset) *y_offset = y_offset_o;
  if (x_offset) *x_offset = x_offset_o;
}
std::tuple<gint, gint, gint, gint> base::TreeViewColumnBase::cell_get_size (const Gdk::Rectangle & cell_area) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeViewColumn* tree_column, const ::GdkRectangle* cell_area, gint* x_offset, gint* y_offset, gint* width, gint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_cell_get_size;
  gint height_o {};
  gint width_o {};
  gint y_offset_o {};
  gint x_offset_o {};
  auto cell_area_to_c = gi::unwrap (cell_area, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeViewColumn*) (gobj_()), (const ::GdkRectangle*) (cell_area_to_c), (gint*) (&x_offset_o), (gint*) (&y_offset_o), (gint*) (&width_o), (gint*) (&height_o));
  return std::make_tuple (x_offset_o, y_offset_o, width_o, height_o);
}
std::tuple<gint, gint, gint, gint> base::TreeViewColumnBase::cell_get_size () noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeViewColumn* tree_column, const ::GdkRectangle* cell_area, gint* x_offset, gint* y_offset, gint* width, gint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_cell_get_size;
  gint height_o {};
  gint width_o {};
  gint y_offset_o {};
  gint x_offset_o {};
  auto cell_area_to_c = nullptr;
  call_wrap_v ((::GtkTreeViewColumn*) (gobj_()), (const ::GdkRectangle*) (cell_area_to_c), (gint*) (&x_offset_o), (gint*) (&y_offset_o), (gint*) (&width_o), (gint*) (&height_o));
  return std::make_tuple (x_offset_o, y_offset_o, width_o, height_o);
}

// gboolean gtk_tree_view_column_cell_is_visible (GtkTreeViewColumn* tree_column);
// gboolean gtk_tree_view_column_cell_is_visible (::GtkTreeViewColumn* tree_column);
bool base::TreeViewColumnBase::cell_is_visible () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeViewColumn* tree_column);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_cell_is_visible;
  auto _temp_ret = call_wrap_v ((::GtkTreeViewColumn*) (gobj_()));
  return _temp_ret;
}

// void gtk_tree_view_column_cell_set_cell_data (GtkTreeViewColumn* tree_column, GtkTreeModel* tree_model, GtkTreeIter* iter, gboolean is_expander, gboolean is_expanded);
// void gtk_tree_view_column_cell_set_cell_data (::GtkTreeViewColumn* tree_column, ::GtkTreeModel* tree_model, ::GtkTreeIter* iter, gboolean is_expander, gboolean is_expanded);
void base::TreeViewColumnBase::cell_set_cell_data (Gtk::TreeModel tree_model, Gtk::TreeIter iter, gboolean is_expander, gboolean is_expanded) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeViewColumn* tree_column, ::GtkTreeModel* tree_model, ::GtkTreeIter* iter, gboolean is_expander, gboolean is_expanded);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_cell_set_cell_data;
  auto is_expanded_to_c = is_expanded;
  auto is_expander_to_c = is_expander;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  auto tree_model_to_c = gi::unwrap (tree_model, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeViewColumn*) (gobj_()), (::GtkTreeModel*) (tree_model_to_c), (::GtkTreeIter*) (iter_to_c), (gboolean) (is_expander_to_c), (gboolean) (is_expanded_to_c));
}

// void gtk_tree_view_column_clear (GtkTreeViewColumn* tree_column);
// void gtk_tree_view_column_clear (::GtkTreeViewColumn* tree_column);
void base::TreeViewColumnBase::clear () noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeViewColumn* tree_column);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_clear;
  call_wrap_v ((::GtkTreeViewColumn*) (gobj_()));
}

// void gtk_tree_view_column_clear_attributes (GtkTreeViewColumn* tree_column, GtkCellRenderer* cell_renderer);
// void gtk_tree_view_column_clear_attributes (::GtkTreeViewColumn* tree_column, ::GtkCellRenderer* cell_renderer);
void base::TreeViewColumnBase::clear_attributes (Gtk::CellRenderer cell_renderer) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeViewColumn* tree_column, ::GtkCellRenderer* cell_renderer);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_clear_attributes;
  auto cell_renderer_to_c = gi::unwrap (cell_renderer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeViewColumn*) (gobj_()), (::GtkCellRenderer*) (cell_renderer_to_c));
}

// void gtk_tree_view_column_clicked (GtkTreeViewColumn* tree_column);
// void gtk_tree_view_column_clicked (::GtkTreeViewColumn* tree_column);
void base::TreeViewColumnBase::clicked () noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeViewColumn* tree_column);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_clicked;
  call_wrap_v ((::GtkTreeViewColumn*) (gobj_()));
}

// void gtk_tree_view_column_focus_cell (GtkTreeViewColumn* tree_column, GtkCellRenderer* cell);
// void gtk_tree_view_column_focus_cell (::GtkTreeViewColumn* tree_column, ::GtkCellRenderer* cell);
void base::TreeViewColumnBase::focus_cell (Gtk::CellRenderer cell) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeViewColumn* tree_column, ::GtkCellRenderer* cell);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_focus_cell;
  auto cell_to_c = gi::unwrap (cell, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeViewColumn*) (gobj_()), (::GtkCellRenderer*) (cell_to_c));
}

// gfloat gtk_tree_view_column_get_alignment (GtkTreeViewColumn* tree_column);
// gfloat gtk_tree_view_column_get_alignment (::GtkTreeViewColumn* tree_column);
gfloat base::TreeViewColumnBase::get_alignment () noexcept
{
  typedef gfloat (*call_wrap_t) (::GtkTreeViewColumn* tree_column);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_get_alignment;
  auto _temp_ret = call_wrap_v ((::GtkTreeViewColumn*) (gobj_()));
  return _temp_ret;
}

// GtkWidget* gtk_tree_view_column_get_button (GtkTreeViewColumn* tree_column);
// ::GtkWidget* gtk_tree_view_column_get_button (::GtkTreeViewColumn* tree_column);
Gtk::Widget base::TreeViewColumnBase::get_button () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkTreeViewColumn* tree_column);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_get_button;
  auto _temp_ret = call_wrap_v ((::GtkTreeViewColumn*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_tree_view_column_get_clickable (GtkTreeViewColumn* tree_column);
// gboolean gtk_tree_view_column_get_clickable (::GtkTreeViewColumn* tree_column);
bool base::TreeViewColumnBase::get_clickable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeViewColumn* tree_column);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_get_clickable;
  auto _temp_ret = call_wrap_v ((::GtkTreeViewColumn*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_tree_view_column_get_expand (GtkTreeViewColumn* tree_column);
// gboolean gtk_tree_view_column_get_expand (::GtkTreeViewColumn* tree_column);
bool base::TreeViewColumnBase::get_expand () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeViewColumn* tree_column);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_get_expand;
  auto _temp_ret = call_wrap_v ((::GtkTreeViewColumn*) (gobj_()));
  return _temp_ret;
}

// gint gtk_tree_view_column_get_fixed_width (GtkTreeViewColumn* tree_column);
// gint gtk_tree_view_column_get_fixed_width (::GtkTreeViewColumn* tree_column);
gint base::TreeViewColumnBase::get_fixed_width () noexcept
{
  typedef gint (*call_wrap_t) (::GtkTreeViewColumn* tree_column);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_get_fixed_width;
  auto _temp_ret = call_wrap_v ((::GtkTreeViewColumn*) (gobj_()));
  return _temp_ret;
}

// gint gtk_tree_view_column_get_max_width (GtkTreeViewColumn* tree_column);
// gint gtk_tree_view_column_get_max_width (::GtkTreeViewColumn* tree_column);
gint base::TreeViewColumnBase::get_max_width () noexcept
{
  typedef gint (*call_wrap_t) (::GtkTreeViewColumn* tree_column);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_get_max_width;
  auto _temp_ret = call_wrap_v ((::GtkTreeViewColumn*) (gobj_()));
  return _temp_ret;
}

// gint gtk_tree_view_column_get_min_width (GtkTreeViewColumn* tree_column);
// gint gtk_tree_view_column_get_min_width (::GtkTreeViewColumn* tree_column);
gint base::TreeViewColumnBase::get_min_width () noexcept
{
  typedef gint (*call_wrap_t) (::GtkTreeViewColumn* tree_column);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_get_min_width;
  auto _temp_ret = call_wrap_v ((::GtkTreeViewColumn*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_tree_view_column_get_reorderable (GtkTreeViewColumn* tree_column);
// gboolean gtk_tree_view_column_get_reorderable (::GtkTreeViewColumn* tree_column);
bool base::TreeViewColumnBase::get_reorderable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeViewColumn* tree_column);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_get_reorderable;
  auto _temp_ret = call_wrap_v ((::GtkTreeViewColumn*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_tree_view_column_get_resizable (GtkTreeViewColumn* tree_column);
// gboolean gtk_tree_view_column_get_resizable (::GtkTreeViewColumn* tree_column);
bool base::TreeViewColumnBase::get_resizable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeViewColumn* tree_column);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_get_resizable;
  auto _temp_ret = call_wrap_v ((::GtkTreeViewColumn*) (gobj_()));
  return _temp_ret;
}

// GtkTreeViewColumnSizing gtk_tree_view_column_get_sizing (GtkTreeViewColumn* tree_column);
// ::GtkTreeViewColumnSizing gtk_tree_view_column_get_sizing (::GtkTreeViewColumn* tree_column);
Gtk::TreeViewColumnSizing base::TreeViewColumnBase::get_sizing () noexcept
{
  typedef ::GtkTreeViewColumnSizing (*call_wrap_t) (::GtkTreeViewColumn* tree_column);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_get_sizing;
  auto _temp_ret = call_wrap_v ((::GtkTreeViewColumn*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gint gtk_tree_view_column_get_sort_column_id (GtkTreeViewColumn* tree_column);
// gint gtk_tree_view_column_get_sort_column_id (::GtkTreeViewColumn* tree_column);
gint base::TreeViewColumnBase::get_sort_column_id () noexcept
{
  typedef gint (*call_wrap_t) (::GtkTreeViewColumn* tree_column);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_get_sort_column_id;
  auto _temp_ret = call_wrap_v ((::GtkTreeViewColumn*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_tree_view_column_get_sort_indicator (GtkTreeViewColumn* tree_column);
// gboolean gtk_tree_view_column_get_sort_indicator (::GtkTreeViewColumn* tree_column);
bool base::TreeViewColumnBase::get_sort_indicator () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeViewColumn* tree_column);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_get_sort_indicator;
  auto _temp_ret = call_wrap_v ((::GtkTreeViewColumn*) (gobj_()));
  return _temp_ret;
}

// GtkSortType gtk_tree_view_column_get_sort_order (GtkTreeViewColumn* tree_column);
// ::GtkSortType gtk_tree_view_column_get_sort_order (::GtkTreeViewColumn* tree_column);
Gtk::SortType base::TreeViewColumnBase::get_sort_order () noexcept
{
  typedef ::GtkSortType (*call_wrap_t) (::GtkTreeViewColumn* tree_column);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_get_sort_order;
  auto _temp_ret = call_wrap_v ((::GtkTreeViewColumn*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gint gtk_tree_view_column_get_spacing (GtkTreeViewColumn* tree_column);
// gint gtk_tree_view_column_get_spacing (::GtkTreeViewColumn* tree_column);
gint base::TreeViewColumnBase::get_spacing () noexcept
{
  typedef gint (*call_wrap_t) (::GtkTreeViewColumn* tree_column);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_get_spacing;
  auto _temp_ret = call_wrap_v ((::GtkTreeViewColumn*) (gobj_()));
  return _temp_ret;
}

// const gchar* gtk_tree_view_column_get_title (GtkTreeViewColumn* tree_column);
// const char* gtk_tree_view_column_get_title (::GtkTreeViewColumn* tree_column);
std::string base::TreeViewColumnBase::get_title () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkTreeViewColumn* tree_column);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_get_title;
  auto _temp_ret = call_wrap_v ((::GtkTreeViewColumn*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_tree_view_column_get_tree_view (GtkTreeViewColumn* tree_column);
// ::GtkWidget* gtk_tree_view_column_get_tree_view (::GtkTreeViewColumn* tree_column);
Gtk::Widget base::TreeViewColumnBase::get_tree_view () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkTreeViewColumn* tree_column);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_get_tree_view;
  auto _temp_ret = call_wrap_v ((::GtkTreeViewColumn*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_tree_view_column_get_visible (GtkTreeViewColumn* tree_column);
// gboolean gtk_tree_view_column_get_visible (::GtkTreeViewColumn* tree_column);
bool base::TreeViewColumnBase::get_visible () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeViewColumn* tree_column);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_get_visible;
  auto _temp_ret = call_wrap_v ((::GtkTreeViewColumn*) (gobj_()));
  return _temp_ret;
}

// GtkWidget* gtk_tree_view_column_get_widget (GtkTreeViewColumn* tree_column);
// ::GtkWidget* gtk_tree_view_column_get_widget (::GtkTreeViewColumn* tree_column);
Gtk::Widget base::TreeViewColumnBase::get_widget () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkTreeViewColumn* tree_column);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_get_widget;
  auto _temp_ret = call_wrap_v ((::GtkTreeViewColumn*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gint gtk_tree_view_column_get_width (GtkTreeViewColumn* tree_column);
// gint gtk_tree_view_column_get_width (::GtkTreeViewColumn* tree_column);
gint base::TreeViewColumnBase::get_width () noexcept
{
  typedef gint (*call_wrap_t) (::GtkTreeViewColumn* tree_column);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_get_width;
  auto _temp_ret = call_wrap_v ((::GtkTreeViewColumn*) (gobj_()));
  return _temp_ret;
}

// gint gtk_tree_view_column_get_x_offset (GtkTreeViewColumn* tree_column);
// gint gtk_tree_view_column_get_x_offset (::GtkTreeViewColumn* tree_column);
gint base::TreeViewColumnBase::get_x_offset () noexcept
{
  typedef gint (*call_wrap_t) (::GtkTreeViewColumn* tree_column);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_get_x_offset;
  auto _temp_ret = call_wrap_v ((::GtkTreeViewColumn*) (gobj_()));
  return _temp_ret;
}

// void gtk_tree_view_column_pack_end (GtkTreeViewColumn* tree_column, GtkCellRenderer* cell, gboolean expand);
// void gtk_tree_view_column_pack_end (::GtkTreeViewColumn* tree_column, ::GtkCellRenderer* cell, gboolean expand);
void base::TreeViewColumnBase::pack_end (Gtk::CellRenderer cell, gboolean expand) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeViewColumn* tree_column, ::GtkCellRenderer* cell, gboolean expand);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_pack_end;
  auto expand_to_c = expand;
  auto cell_to_c = gi::unwrap (cell, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeViewColumn*) (gobj_()), (::GtkCellRenderer*) (cell_to_c), (gboolean) (expand_to_c));
}

// void gtk_tree_view_column_pack_start (GtkTreeViewColumn* tree_column, GtkCellRenderer* cell, gboolean expand);
// void gtk_tree_view_column_pack_start (::GtkTreeViewColumn* tree_column, ::GtkCellRenderer* cell, gboolean expand);
void base::TreeViewColumnBase::pack_start (Gtk::CellRenderer cell, gboolean expand) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeViewColumn* tree_column, ::GtkCellRenderer* cell, gboolean expand);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_pack_start;
  auto expand_to_c = expand;
  auto cell_to_c = gi::unwrap (cell, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeViewColumn*) (gobj_()), (::GtkCellRenderer*) (cell_to_c), (gboolean) (expand_to_c));
}

// void gtk_tree_view_column_queue_resize (GtkTreeViewColumn* tree_column);
// void gtk_tree_view_column_queue_resize (::GtkTreeViewColumn* tree_column);
void base::TreeViewColumnBase::queue_resize () noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeViewColumn* tree_column);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_queue_resize;
  call_wrap_v ((::GtkTreeViewColumn*) (gobj_()));
}

// void gtk_tree_view_column_set_alignment (GtkTreeViewColumn* tree_column, gfloat xalign);
// void gtk_tree_view_column_set_alignment (::GtkTreeViewColumn* tree_column, gfloat xalign);
void base::TreeViewColumnBase::set_alignment (gfloat xalign) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeViewColumn* tree_column, gfloat xalign);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_set_alignment;
  auto xalign_to_c = xalign;
  call_wrap_v ((::GtkTreeViewColumn*) (gobj_()), (gfloat) (xalign_to_c));
}

// void gtk_tree_view_column_set_attributes (GtkTreeViewColumn* tree_column, GtkCellRenderer* cell_renderer);
// void gtk_tree_view_column_set_attributes (::GtkTreeViewColumn* tree_column, ::GtkCellRenderer* cell_renderer);
// IGNORE; not introspectable, varargs not supported

// void gtk_tree_view_column_set_cell_data_func (GtkTreeViewColumn* tree_column, GtkCellRenderer* cell_renderer, GtkTreeCellDataFunc func, gpointer func_data, GDestroyNotify destroy);
// void gtk_tree_view_column_set_cell_data_func (::GtkTreeViewColumn* tree_column, ::GtkCellRenderer* cell_renderer, Gtk::TreeCellDataFunc::cfunction_type func, void* func_data, GLib::DestroyNotify::cfunction_type destroy);
void base::TreeViewColumnBase::set_cell_data_func (Gtk::CellRenderer cell_renderer, Gtk::TreeCellDataFunc func) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeViewColumn* tree_column, ::GtkCellRenderer* cell_renderer, Gtk::TreeCellDataFunc::cfunction_type func, void* func_data, GLib::DestroyNotify::cfunction_type destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_set_cell_data_func;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_notified) : nullptr;
  auto cell_renderer_to_c = gi::unwrap (cell_renderer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeViewColumn*) (gobj_()), (::GtkCellRenderer*) (cell_renderer_to_c), (Gtk::TreeCellDataFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_), (GLib::DestroyNotify::cfunction_type) (func_wrap_ ? &func_wrap_->destroy : nullptr));
}

// void gtk_tree_view_column_set_clickable (GtkTreeViewColumn* tree_column, gboolean clickable);
// void gtk_tree_view_column_set_clickable (::GtkTreeViewColumn* tree_column, gboolean clickable);
void base::TreeViewColumnBase::set_clickable (gboolean clickable) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeViewColumn* tree_column, gboolean clickable);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_set_clickable;
  auto clickable_to_c = clickable;
  call_wrap_v ((::GtkTreeViewColumn*) (gobj_()), (gboolean) (clickable_to_c));
}

// void gtk_tree_view_column_set_expand (GtkTreeViewColumn* tree_column, gboolean expand);
// void gtk_tree_view_column_set_expand (::GtkTreeViewColumn* tree_column, gboolean expand);
void base::TreeViewColumnBase::set_expand (gboolean expand) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeViewColumn* tree_column, gboolean expand);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_set_expand;
  auto expand_to_c = expand;
  call_wrap_v ((::GtkTreeViewColumn*) (gobj_()), (gboolean) (expand_to_c));
}

// void gtk_tree_view_column_set_fixed_width (GtkTreeViewColumn* tree_column, gint fixed_width);
// void gtk_tree_view_column_set_fixed_width (::GtkTreeViewColumn* tree_column, gint fixed_width);
void base::TreeViewColumnBase::set_fixed_width (gint fixed_width) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeViewColumn* tree_column, gint fixed_width);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_set_fixed_width;
  auto fixed_width_to_c = fixed_width;
  call_wrap_v ((::GtkTreeViewColumn*) (gobj_()), (gint) (fixed_width_to_c));
}

// void gtk_tree_view_column_set_max_width (GtkTreeViewColumn* tree_column, gint max_width);
// void gtk_tree_view_column_set_max_width (::GtkTreeViewColumn* tree_column, gint max_width);
void base::TreeViewColumnBase::set_max_width (gint max_width) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeViewColumn* tree_column, gint max_width);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_set_max_width;
  auto max_width_to_c = max_width;
  call_wrap_v ((::GtkTreeViewColumn*) (gobj_()), (gint) (max_width_to_c));
}

// void gtk_tree_view_column_set_min_width (GtkTreeViewColumn* tree_column, gint min_width);
// void gtk_tree_view_column_set_min_width (::GtkTreeViewColumn* tree_column, gint min_width);
void base::TreeViewColumnBase::set_min_width (gint min_width) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeViewColumn* tree_column, gint min_width);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_set_min_width;
  auto min_width_to_c = min_width;
  call_wrap_v ((::GtkTreeViewColumn*) (gobj_()), (gint) (min_width_to_c));
}

// void gtk_tree_view_column_set_reorderable (GtkTreeViewColumn* tree_column, gboolean reorderable);
// void gtk_tree_view_column_set_reorderable (::GtkTreeViewColumn* tree_column, gboolean reorderable);
void base::TreeViewColumnBase::set_reorderable (gboolean reorderable) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeViewColumn* tree_column, gboolean reorderable);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_set_reorderable;
  auto reorderable_to_c = reorderable;
  call_wrap_v ((::GtkTreeViewColumn*) (gobj_()), (gboolean) (reorderable_to_c));
}

// void gtk_tree_view_column_set_resizable (GtkTreeViewColumn* tree_column, gboolean resizable);
// void gtk_tree_view_column_set_resizable (::GtkTreeViewColumn* tree_column, gboolean resizable);
void base::TreeViewColumnBase::set_resizable (gboolean resizable) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeViewColumn* tree_column, gboolean resizable);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_set_resizable;
  auto resizable_to_c = resizable;
  call_wrap_v ((::GtkTreeViewColumn*) (gobj_()), (gboolean) (resizable_to_c));
}

// void gtk_tree_view_column_set_sizing (GtkTreeViewColumn* tree_column, GtkTreeViewColumnSizing type);
// void gtk_tree_view_column_set_sizing (::GtkTreeViewColumn* tree_column, ::GtkTreeViewColumnSizing type);
void base::TreeViewColumnBase::set_sizing (Gtk::TreeViewColumnSizing type) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeViewColumn* tree_column, ::GtkTreeViewColumnSizing type);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_set_sizing;
  auto type_to_c = gi::unwrap (type);
  call_wrap_v ((::GtkTreeViewColumn*) (gobj_()), (::GtkTreeViewColumnSizing) (type_to_c));
}

// void gtk_tree_view_column_set_sort_column_id (GtkTreeViewColumn* tree_column, gint sort_column_id);
// void gtk_tree_view_column_set_sort_column_id (::GtkTreeViewColumn* tree_column, gint sort_column_id);
void base::TreeViewColumnBase::set_sort_column_id (gint sort_column_id) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeViewColumn* tree_column, gint sort_column_id);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_set_sort_column_id;
  auto sort_column_id_to_c = sort_column_id;
  call_wrap_v ((::GtkTreeViewColumn*) (gobj_()), (gint) (sort_column_id_to_c));
}

// void gtk_tree_view_column_set_sort_indicator (GtkTreeViewColumn* tree_column, gboolean setting);
// void gtk_tree_view_column_set_sort_indicator (::GtkTreeViewColumn* tree_column, gboolean setting);
void base::TreeViewColumnBase::set_sort_indicator (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeViewColumn* tree_column, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_set_sort_indicator;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkTreeViewColumn*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_tree_view_column_set_sort_order (GtkTreeViewColumn* tree_column, GtkSortType order);
// void gtk_tree_view_column_set_sort_order (::GtkTreeViewColumn* tree_column, ::GtkSortType order);
void base::TreeViewColumnBase::set_sort_order (Gtk::SortType order) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeViewColumn* tree_column, ::GtkSortType order);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_set_sort_order;
  auto order_to_c = gi::unwrap (order);
  call_wrap_v ((::GtkTreeViewColumn*) (gobj_()), (::GtkSortType) (order_to_c));
}

// void gtk_tree_view_column_set_spacing (GtkTreeViewColumn* tree_column, gint spacing);
// void gtk_tree_view_column_set_spacing (::GtkTreeViewColumn* tree_column, gint spacing);
void base::TreeViewColumnBase::set_spacing (gint spacing) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeViewColumn* tree_column, gint spacing);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_set_spacing;
  auto spacing_to_c = spacing;
  call_wrap_v ((::GtkTreeViewColumn*) (gobj_()), (gint) (spacing_to_c));
}

// void gtk_tree_view_column_set_title (GtkTreeViewColumn* tree_column, const gchar* title);
// void gtk_tree_view_column_set_title (::GtkTreeViewColumn* tree_column, const char* title);
void base::TreeViewColumnBase::set_title (const std::string & title) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeViewColumn* tree_column, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_set_title;
  auto title_to_c = gi::unwrap (title, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeViewColumn*) (gobj_()), (const char*) (title_to_c));
}

// void gtk_tree_view_column_set_visible (GtkTreeViewColumn* tree_column, gboolean visible);
// void gtk_tree_view_column_set_visible (::GtkTreeViewColumn* tree_column, gboolean visible);
void base::TreeViewColumnBase::set_visible (gboolean visible) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeViewColumn* tree_column, gboolean visible);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_set_visible;
  auto visible_to_c = visible;
  call_wrap_v ((::GtkTreeViewColumn*) (gobj_()), (gboolean) (visible_to_c));
}

// void gtk_tree_view_column_set_widget (GtkTreeViewColumn* tree_column, GtkWidget* widget);
// void gtk_tree_view_column_set_widget (::GtkTreeViewColumn* tree_column, ::GtkWidget* widget);
void base::TreeViewColumnBase::set_widget (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeViewColumn* tree_column, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_set_widget;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeViewColumn*) (gobj_()), (::GtkWidget*) (widget_to_c));
}
void base::TreeViewColumnBase::set_widget () noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeViewColumn* tree_column, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_view_column_set_widget;
  auto widget_to_c = nullptr;
  call_wrap_v ((::GtkTreeViewColumn*) (gobj_()), (::GtkWidget*) (widget_to_c));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treeviewcolumn_extra_def_impl.hpp>)
#include <gtk/treeviewcolumn_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treeviewcolumn_extra_impl.hpp>)
#include <gtk/treeviewcolumn_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void TreeViewColumnClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkTreeViewColumnClass *methods = (::GtkTreeViewColumnClass *) class_struct;
  (void) methods;

  methods->clicked = (decltype (methods->clicked)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::clicked_>;
}

// void TreeViewColumn::clicked (GtkTreeViewColumn* tree_column);
// void TreeViewColumn::clicked (::GtkTreeViewColumn* tree_column);
void TreeViewColumnClass::clicked_ () noexcept
{
  if (!get_struct_()->clicked) return ;
  typedef void (*call_wrap_t) (::GtkTreeViewColumn* tree_column);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->clicked;
  call_wrap_v ((::GtkTreeViewColumn*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
