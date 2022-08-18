// AUTO-GENERATED

#ifndef _GI_GTK_TREEVIEW_HPP_
#define _GI_GTK_TREEVIEW_HPP_

#include "container.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Adjustment;
class CellRenderer;
class Entry;
class Scrollable;
class TargetEntry;
class Tooltip;
class TreeIter;
class TreeModel;
class TreePath;
class TreeSelection;
class TreeViewColumn;

class TreeView;

namespace base {


#define GI_GTK_TREEVIEW_BASE base::TreeViewBase
class TreeViewBase : public Gtk::Container
{
typedef Gtk::Container super_type;
public:
typedef ::GtkTreeView BaseObjectType;

TreeViewBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_tree_view_get_type(); } 

GI_INLINE_DECL Gtk::Scrollable interface_ (gi::interface_tag<Gtk::Scrollable>);

GI_INLINE_DECL operator Gtk::Scrollable ();

// GtkWidget* gtk_tree_view_new ();
// ::GtkTreeView* gtk_tree_view_new ();
static GI_INLINE_DECL Gtk::TreeView new_ () noexcept;

// GtkWidget* gtk_tree_view_new_with_model (GtkTreeModel* model);
// ::GtkTreeView* gtk_tree_view_new_with_model (::GtkTreeModel* model);
static GI_INLINE_DECL Gtk::TreeView new_with_model (Gtk::TreeModel model) noexcept;

// gint gtk_tree_view_append_column (GtkTreeView* tree_view, GtkTreeViewColumn* column);
// gint gtk_tree_view_append_column (::GtkTreeView* tree_view, ::GtkTreeViewColumn* column);
GI_INLINE_DECL gint append_column (Gtk::TreeViewColumn column) noexcept;

// void gtk_tree_view_collapse_all (GtkTreeView* tree_view);
// void gtk_tree_view_collapse_all (::GtkTreeView* tree_view);
GI_INLINE_DECL void collapse_all () noexcept;

// gboolean gtk_tree_view_collapse_row (GtkTreeView* tree_view, GtkTreePath* path);
// gboolean gtk_tree_view_collapse_row (::GtkTreeView* tree_view, ::GtkTreePath* path);
GI_INLINE_DECL bool collapse_row (Gtk::TreePath path) noexcept;

// void gtk_tree_view_columns_autosize (GtkTreeView* tree_view);
// void gtk_tree_view_columns_autosize (::GtkTreeView* tree_view);
GI_INLINE_DECL void columns_autosize () noexcept;

// void gtk_tree_view_convert_bin_window_to_tree_coords (GtkTreeView* tree_view, gint bx, gint by, gint* tx, gint* ty);
// void gtk_tree_view_convert_bin_window_to_tree_coords (::GtkTreeView* tree_view, gint bx, gint by, gint* tx, gint* ty);
GI_INLINE_DECL void convert_bin_window_to_tree_coords (gint bx, gint by, gint & tx, gint & ty) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> convert_bin_window_to_tree_coords (gint bx, gint by) noexcept;

// void gtk_tree_view_convert_bin_window_to_widget_coords (GtkTreeView* tree_view, gint bx, gint by, gint* wx, gint* wy);
// void gtk_tree_view_convert_bin_window_to_widget_coords (::GtkTreeView* tree_view, gint bx, gint by, gint* wx, gint* wy);
GI_INLINE_DECL void convert_bin_window_to_widget_coords (gint bx, gint by, gint & wx, gint & wy) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> convert_bin_window_to_widget_coords (gint bx, gint by) noexcept;

// void gtk_tree_view_convert_tree_to_bin_window_coords (GtkTreeView* tree_view, gint tx, gint ty, gint* bx, gint* by);
// void gtk_tree_view_convert_tree_to_bin_window_coords (::GtkTreeView* tree_view, gint tx, gint ty, gint* bx, gint* by);
GI_INLINE_DECL void convert_tree_to_bin_window_coords (gint tx, gint ty, gint & bx, gint & by) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> convert_tree_to_bin_window_coords (gint tx, gint ty) noexcept;

// void gtk_tree_view_convert_tree_to_widget_coords (GtkTreeView* tree_view, gint tx, gint ty, gint* wx, gint* wy);
// void gtk_tree_view_convert_tree_to_widget_coords (::GtkTreeView* tree_view, gint tx, gint ty, gint* wx, gint* wy);
GI_INLINE_DECL void convert_tree_to_widget_coords (gint tx, gint ty, gint & wx, gint & wy) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> convert_tree_to_widget_coords (gint tx, gint ty) noexcept;

// void gtk_tree_view_convert_widget_to_bin_window_coords (GtkTreeView* tree_view, gint wx, gint wy, gint* bx, gint* by);
// void gtk_tree_view_convert_widget_to_bin_window_coords (::GtkTreeView* tree_view, gint wx, gint wy, gint* bx, gint* by);
GI_INLINE_DECL void convert_widget_to_bin_window_coords (gint wx, gint wy, gint & bx, gint & by) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> convert_widget_to_bin_window_coords (gint wx, gint wy) noexcept;

// void gtk_tree_view_convert_widget_to_tree_coords (GtkTreeView* tree_view, gint wx, gint wy, gint* tx, gint* ty);
// void gtk_tree_view_convert_widget_to_tree_coords (::GtkTreeView* tree_view, gint wx, gint wy, gint* tx, gint* ty);
GI_INLINE_DECL void convert_widget_to_tree_coords (gint wx, gint wy, gint & tx, gint & ty) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> convert_widget_to_tree_coords (gint wx, gint wy) noexcept;

// cairo_surface_t* gtk_tree_view_create_row_drag_icon (GtkTreeView* tree_view, GtkTreePath* path);
// ::cairo_surface_t* gtk_tree_view_create_row_drag_icon (::GtkTreeView* tree_view, ::GtkTreePath* path);
GI_INLINE_DECL cairo::Surface create_row_drag_icon (Gtk::TreePath path) noexcept;

// void gtk_tree_view_enable_model_drag_dest (GtkTreeView* tree_view, const GtkTargetEntry* targets, gint n_targets, GdkDragAction actions);
// void gtk_tree_view_enable_model_drag_dest (::GtkTreeView* tree_view, const ::GtkTargetEntry** targets, gint n_targets, ::GdkDragAction actions);
// SKIP; inconsistent in targets pointer depth (1 vs 2)

// void gtk_tree_view_enable_model_drag_source (GtkTreeView* tree_view, GdkModifierType start_button_mask, const GtkTargetEntry* targets, gint n_targets, GdkDragAction actions);
// void gtk_tree_view_enable_model_drag_source (::GtkTreeView* tree_view, ::GdkModifierType start_button_mask, const ::GtkTargetEntry** targets, gint n_targets, ::GdkDragAction actions);
// SKIP; inconsistent in targets pointer depth (1 vs 2)

// void gtk_tree_view_expand_all (GtkTreeView* tree_view);
// void gtk_tree_view_expand_all (::GtkTreeView* tree_view);
GI_INLINE_DECL void expand_all () noexcept;

// gboolean gtk_tree_view_expand_row (GtkTreeView* tree_view, GtkTreePath* path, gboolean open_all);
// gboolean gtk_tree_view_expand_row (::GtkTreeView* tree_view, ::GtkTreePath* path, gboolean open_all);
GI_INLINE_DECL bool expand_row (Gtk::TreePath path, gboolean open_all) noexcept;

// void gtk_tree_view_expand_to_path (GtkTreeView* tree_view, GtkTreePath* path);
// void gtk_tree_view_expand_to_path (::GtkTreeView* tree_view, ::GtkTreePath* path);
GI_INLINE_DECL void expand_to_path (Gtk::TreePath path) noexcept;

// gboolean gtk_tree_view_get_activate_on_single_click (GtkTreeView* tree_view);
// gboolean gtk_tree_view_get_activate_on_single_click (::GtkTreeView* tree_view);
GI_INLINE_DECL bool get_activate_on_single_click () noexcept;

// void gtk_tree_view_get_background_area (GtkTreeView* tree_view, GtkTreePath* path, GtkTreeViewColumn* column, GdkRectangle* rect);
// void gtk_tree_view_get_background_area (::GtkTreeView* tree_view, ::GtkTreePath* path, ::GtkTreeViewColumn* column, ::GdkRectangle* rect);
GI_INLINE_DECL void get_background_area (Gtk::TreePath path, Gtk::TreeViewColumn column, Gdk::Rectangle & rect) noexcept;
GI_INLINE_DECL void get_background_area (Gdk::Rectangle & rect) noexcept;
GI_INLINE_DECL Gdk::Rectangle get_background_area (Gtk::TreePath path, Gtk::TreeViewColumn column) noexcept;
GI_INLINE_DECL Gdk::Rectangle get_background_area () noexcept;

// GdkWindow* gtk_tree_view_get_bin_window (GtkTreeView* tree_view);
// ::GdkWindow* gtk_tree_view_get_bin_window (::GtkTreeView* tree_view);
GI_INLINE_DECL Gdk::Window get_bin_window () noexcept;

// void gtk_tree_view_get_cell_area (GtkTreeView* tree_view, GtkTreePath* path, GtkTreeViewColumn* column, GdkRectangle* rect);
// void gtk_tree_view_get_cell_area (::GtkTreeView* tree_view, ::GtkTreePath* path, ::GtkTreeViewColumn* column, ::GdkRectangle* rect);
GI_INLINE_DECL void get_cell_area (Gtk::TreePath path, Gtk::TreeViewColumn column, Gdk::Rectangle & rect) noexcept;
GI_INLINE_DECL void get_cell_area (Gdk::Rectangle & rect) noexcept;
GI_INLINE_DECL Gdk::Rectangle get_cell_area (Gtk::TreePath path, Gtk::TreeViewColumn column) noexcept;
GI_INLINE_DECL Gdk::Rectangle get_cell_area () noexcept;

// GtkTreeViewColumn* gtk_tree_view_get_column (GtkTreeView* tree_view, gint n);
// ::GtkTreeViewColumn* gtk_tree_view_get_column (::GtkTreeView* tree_view, gint n);
GI_INLINE_DECL Gtk::TreeViewColumn get_column (gint n) noexcept;

// GList* gtk_tree_view_get_columns (GtkTreeView* tree_view);
// ::GList* gtk_tree_view_get_columns (::GtkTreeView* tree_view);
GI_INLINE_DECL std::vector<Gtk::TreeViewColumn> get_columns () noexcept;

// void gtk_tree_view_get_cursor (GtkTreeView* tree_view, GtkTreePath** path, GtkTreeViewColumn** focus_column);
// void gtk_tree_view_get_cursor (::GtkTreeView* tree_view, ::GtkTreePath** path, ::GtkTreeViewColumn** focus_column);
GI_INLINE_DECL void get_cursor (Gtk::TreePath * path = nullptr, Gtk::TreeViewColumn * focus_column = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Gtk::TreePath, Gtk::TreeViewColumn> get_cursor () noexcept;

// gboolean gtk_tree_view_get_dest_row_at_pos (GtkTreeView* tree_view, gint drag_x, gint drag_y, GtkTreePath** path, GtkTreeViewDropPosition* pos);
// gboolean gtk_tree_view_get_dest_row_at_pos (::GtkTreeView* tree_view, gint drag_x, gint drag_y, ::GtkTreePath** path, ::GtkTreeViewDropPosition* pos);
GI_INLINE_DECL bool get_dest_row_at_pos (gint drag_x, gint drag_y, Gtk::TreePath * path = nullptr, Gtk::TreeViewDropPosition * pos = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TreePath, Gtk::TreeViewDropPosition> get_dest_row_at_pos (gint drag_x, gint drag_y) noexcept;

// void gtk_tree_view_get_drag_dest_row (GtkTreeView* tree_view, GtkTreePath** path, GtkTreeViewDropPosition* pos);
// void gtk_tree_view_get_drag_dest_row (::GtkTreeView* tree_view, ::GtkTreePath** path, ::GtkTreeViewDropPosition* pos);
GI_INLINE_DECL void get_drag_dest_row (Gtk::TreePath * path = nullptr, Gtk::TreeViewDropPosition * pos = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Gtk::TreePath, Gtk::TreeViewDropPosition> get_drag_dest_row () noexcept;

// gboolean gtk_tree_view_get_enable_search (GtkTreeView* tree_view);
// gboolean gtk_tree_view_get_enable_search (::GtkTreeView* tree_view);
GI_INLINE_DECL bool get_enable_search () noexcept;

// gboolean gtk_tree_view_get_enable_tree_lines (GtkTreeView* tree_view);
// gboolean gtk_tree_view_get_enable_tree_lines (::GtkTreeView* tree_view);
GI_INLINE_DECL bool get_enable_tree_lines () noexcept;

// GtkTreeViewColumn* gtk_tree_view_get_expander_column (GtkTreeView* tree_view);
// ::GtkTreeViewColumn* gtk_tree_view_get_expander_column (::GtkTreeView* tree_view);
GI_INLINE_DECL Gtk::TreeViewColumn get_expander_column () noexcept;

// gboolean gtk_tree_view_get_fixed_height_mode (GtkTreeView* tree_view);
// gboolean gtk_tree_view_get_fixed_height_mode (::GtkTreeView* tree_view);
GI_INLINE_DECL bool get_fixed_height_mode () noexcept;

// GtkTreeViewGridLines gtk_tree_view_get_grid_lines (GtkTreeView* tree_view);
// ::GtkTreeViewGridLines gtk_tree_view_get_grid_lines (::GtkTreeView* tree_view);
GI_INLINE_DECL Gtk::TreeViewGridLines get_grid_lines () noexcept;

// GtkAdjustment* gtk_tree_view_get_hadjustment (GtkTreeView* tree_view);
// ::GtkAdjustment* gtk_tree_view_get_hadjustment (::GtkTreeView* tree_view);
// IGNORE; deprecated

// gboolean gtk_tree_view_get_headers_clickable (GtkTreeView* tree_view);
// gboolean gtk_tree_view_get_headers_clickable (::GtkTreeView* tree_view);
GI_INLINE_DECL bool get_headers_clickable () noexcept;

// gboolean gtk_tree_view_get_headers_visible (GtkTreeView* tree_view);
// gboolean gtk_tree_view_get_headers_visible (::GtkTreeView* tree_view);
GI_INLINE_DECL bool get_headers_visible () noexcept;

// gboolean gtk_tree_view_get_hover_expand (GtkTreeView* tree_view);
// gboolean gtk_tree_view_get_hover_expand (::GtkTreeView* tree_view);
GI_INLINE_DECL bool get_hover_expand () noexcept;

// gboolean gtk_tree_view_get_hover_selection (GtkTreeView* tree_view);
// gboolean gtk_tree_view_get_hover_selection (::GtkTreeView* tree_view);
GI_INLINE_DECL bool get_hover_selection () noexcept;

// gint gtk_tree_view_get_level_indentation (GtkTreeView* tree_view);
// gint gtk_tree_view_get_level_indentation (::GtkTreeView* tree_view);
GI_INLINE_DECL gint get_level_indentation () noexcept;

// GtkTreeModel* gtk_tree_view_get_model (GtkTreeView* tree_view);
// ::GtkTreeModel* gtk_tree_view_get_model (::GtkTreeView* tree_view);
GI_INLINE_DECL Gtk::TreeModel get_model () noexcept;

// guint gtk_tree_view_get_n_columns (GtkTreeView* tree_view);
// guint gtk_tree_view_get_n_columns (::GtkTreeView* tree_view);
GI_INLINE_DECL guint get_n_columns () noexcept;

// gboolean gtk_tree_view_get_path_at_pos (GtkTreeView* tree_view, gint x, gint y, GtkTreePath** path, GtkTreeViewColumn** column, gint* cell_x, gint* cell_y);
// gboolean gtk_tree_view_get_path_at_pos (::GtkTreeView* tree_view, gint x, gint y, ::GtkTreePath** path, ::GtkTreeViewColumn** column, gint* cell_x, gint* cell_y);
GI_INLINE_DECL bool get_path_at_pos (gint x, gint y, Gtk::TreePath * path = nullptr, Gtk::TreeViewColumn * column = nullptr, gint * cell_x = nullptr, gint * cell_y = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TreePath, Gtk::TreeViewColumn, gint, gint> get_path_at_pos (gint x, gint y) noexcept;

// gboolean gtk_tree_view_get_reorderable (GtkTreeView* tree_view);
// gboolean gtk_tree_view_get_reorderable (::GtkTreeView* tree_view);
GI_INLINE_DECL bool get_reorderable () noexcept;

// FAILURE on gtk_tree_view_get_row_separator_func; No such node (<xmlattr>.transfer-ownership)
// gboolean gtk_tree_view_get_rubber_banding (GtkTreeView* tree_view);
// gboolean gtk_tree_view_get_rubber_banding (::GtkTreeView* tree_view);
GI_INLINE_DECL bool get_rubber_banding () noexcept;

// gboolean gtk_tree_view_get_rules_hint (GtkTreeView* tree_view);
// gboolean gtk_tree_view_get_rules_hint (::GtkTreeView* tree_view);
// IGNORE; deprecated

// gint gtk_tree_view_get_search_column (GtkTreeView* tree_view);
// gint gtk_tree_view_get_search_column (::GtkTreeView* tree_view);
GI_INLINE_DECL gint get_search_column () noexcept;

// GtkEntry* gtk_tree_view_get_search_entry (GtkTreeView* tree_view);
// ::GtkEntry* gtk_tree_view_get_search_entry (::GtkTreeView* tree_view);
GI_INLINE_DECL Gtk::Entry get_search_entry () noexcept;

// FAILURE on gtk_tree_view_get_search_equal_func; No such node (<xmlattr>.transfer-ownership)
// FAILURE on gtk_tree_view_get_search_position_func; No such node (<xmlattr>.transfer-ownership)
// GtkTreeSelection* gtk_tree_view_get_selection (GtkTreeView* tree_view);
// ::GtkTreeSelection* gtk_tree_view_get_selection (::GtkTreeView* tree_view);
GI_INLINE_DECL Gtk::TreeSelection get_selection () noexcept;

// gboolean gtk_tree_view_get_show_expanders (GtkTreeView* tree_view);
// gboolean gtk_tree_view_get_show_expanders (::GtkTreeView* tree_view);
GI_INLINE_DECL bool get_show_expanders () noexcept;

// gint gtk_tree_view_get_tooltip_column (GtkTreeView* tree_view);
// gint gtk_tree_view_get_tooltip_column (::GtkTreeView* tree_view);
GI_INLINE_DECL gint get_tooltip_column () noexcept;

// gboolean gtk_tree_view_get_tooltip_context (GtkTreeView* tree_view, gint* x, gint* y, gboolean keyboard_tip, GtkTreeModel** model, GtkTreePath** path, GtkTreeIter* iter);
// gboolean gtk_tree_view_get_tooltip_context (::GtkTreeView* tree_view, gint* x, gint* y, gboolean keyboard_tip, ::GtkTreeModel** model, ::GtkTreePath** path, ::GtkTreeIter* iter);
GI_INLINE_DECL bool get_tooltip_context (gint & x, gint & y, gboolean keyboard_tip, Gtk::TreeModel * model = nullptr, Gtk::TreePath * path = nullptr, Gtk::TreeIter * iter = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TreeModel, Gtk::TreePath, Gtk::TreeIter> get_tooltip_context (gint & x, gint & y, gboolean keyboard_tip) noexcept;

// GtkAdjustment* gtk_tree_view_get_vadjustment (GtkTreeView* tree_view);
// ::GtkAdjustment* gtk_tree_view_get_vadjustment (::GtkTreeView* tree_view);
// IGNORE; deprecated

// gboolean gtk_tree_view_get_visible_range (GtkTreeView* tree_view, GtkTreePath** start_path, GtkTreePath** end_path);
// gboolean gtk_tree_view_get_visible_range (::GtkTreeView* tree_view, ::GtkTreePath** start_path, ::GtkTreePath** end_path);
GI_INLINE_DECL bool get_visible_range (Gtk::TreePath * start_path = nullptr, Gtk::TreePath * end_path = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TreePath, Gtk::TreePath> get_visible_range () noexcept;

// void gtk_tree_view_get_visible_rect (GtkTreeView* tree_view, GdkRectangle* visible_rect);
// void gtk_tree_view_get_visible_rect (::GtkTreeView* tree_view, ::GdkRectangle* visible_rect);
GI_INLINE_DECL void get_visible_rect (Gdk::Rectangle & visible_rect) noexcept;
GI_INLINE_DECL Gdk::Rectangle get_visible_rect () noexcept;

// gint gtk_tree_view_insert_column (GtkTreeView* tree_view, GtkTreeViewColumn* column, gint position);
// gint gtk_tree_view_insert_column (::GtkTreeView* tree_view, ::GtkTreeViewColumn* column, gint position);
GI_INLINE_DECL gint insert_column (Gtk::TreeViewColumn column, gint position) noexcept;

// gint gtk_tree_view_insert_column_with_attributes (GtkTreeView* tree_view, gint position, const gchar* title, GtkCellRenderer* cell);
// gint gtk_tree_view_insert_column_with_attributes (::GtkTreeView* tree_view, gint position, const char* title, ::GtkCellRenderer* cell);
// IGNORE; not introspectable, varargs not supported

// gint gtk_tree_view_insert_column_with_data_func (GtkTreeView* tree_view, gint position, const gchar* title, GtkCellRenderer* cell, GtkTreeCellDataFunc func, gpointer data, GDestroyNotify dnotify);
// gint gtk_tree_view_insert_column_with_data_func (::GtkTreeView* tree_view, gint position, const char* title, ::GtkCellRenderer* cell, Gtk::TreeCellDataFunc::cfunction_type func, void* data, GLib::DestroyNotify::cfunction_type dnotify);
GI_INLINE_DECL gint insert_column_with_data_func (gint position, const std::string & title, Gtk::CellRenderer cell, Gtk::TreeCellDataFunc func) noexcept;

// gboolean gtk_tree_view_is_blank_at_pos (GtkTreeView* tree_view, gint x, gint y, GtkTreePath** path, GtkTreeViewColumn** column, gint* cell_x, gint* cell_y);
// gboolean gtk_tree_view_is_blank_at_pos (::GtkTreeView* tree_view, gint x, gint y, ::GtkTreePath** path, ::GtkTreeViewColumn** column, gint* cell_x, gint* cell_y);
GI_INLINE_DECL bool is_blank_at_pos (gint x, gint y, Gtk::TreePath * path = nullptr, Gtk::TreeViewColumn * column = nullptr, gint * cell_x = nullptr, gint * cell_y = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TreePath, Gtk::TreeViewColumn, gint, gint> is_blank_at_pos (gint x, gint y) noexcept;

// gboolean gtk_tree_view_is_rubber_banding_active (GtkTreeView* tree_view);
// gboolean gtk_tree_view_is_rubber_banding_active (::GtkTreeView* tree_view);
GI_INLINE_DECL bool is_rubber_banding_active () noexcept;

// void gtk_tree_view_map_expanded_rows (GtkTreeView* tree_view, GtkTreeViewMappingFunc func, gpointer data);
// void gtk_tree_view_map_expanded_rows (::GtkTreeView* tree_view, Gtk::TreeViewMappingFunc::cfunction_type func, void* data);
GI_INLINE_DECL void map_expanded_rows (Gtk::TreeViewMappingFunc func) noexcept;

// void gtk_tree_view_move_column_after (GtkTreeView* tree_view, GtkTreeViewColumn* column, GtkTreeViewColumn* base_column);
// void gtk_tree_view_move_column_after (::GtkTreeView* tree_view, ::GtkTreeViewColumn* column, ::GtkTreeViewColumn* base_column);
GI_INLINE_DECL void move_column_after (Gtk::TreeViewColumn column, Gtk::TreeViewColumn base_column) noexcept;
GI_INLINE_DECL void move_column_after (Gtk::TreeViewColumn column) noexcept;

// gint gtk_tree_view_remove_column (GtkTreeView* tree_view, GtkTreeViewColumn* column);
// gint gtk_tree_view_remove_column (::GtkTreeView* tree_view, ::GtkTreeViewColumn* column);
GI_INLINE_DECL gint remove_column (Gtk::TreeViewColumn column) noexcept;

// void gtk_tree_view_row_activated (GtkTreeView* tree_view, GtkTreePath* path, GtkTreeViewColumn* column);
// void gtk_tree_view_row_activated (::GtkTreeView* tree_view, ::GtkTreePath* path, ::GtkTreeViewColumn* column);
GI_INLINE_DECL void row_activated (Gtk::TreePath path, Gtk::TreeViewColumn column) noexcept;

// gboolean gtk_tree_view_row_expanded (GtkTreeView* tree_view, GtkTreePath* path);
// gboolean gtk_tree_view_row_expanded (::GtkTreeView* tree_view, ::GtkTreePath* path);
GI_INLINE_DECL bool row_expanded (Gtk::TreePath path) noexcept;

// void gtk_tree_view_scroll_to_cell (GtkTreeView* tree_view, GtkTreePath* path, GtkTreeViewColumn* column, gboolean use_align, gfloat row_align, gfloat col_align);
// void gtk_tree_view_scroll_to_cell (::GtkTreeView* tree_view, ::GtkTreePath* path, ::GtkTreeViewColumn* column, gboolean use_align, gfloat row_align, gfloat col_align);
GI_INLINE_DECL void scroll_to_cell (Gtk::TreePath path, Gtk::TreeViewColumn column, gboolean use_align, gfloat row_align, gfloat col_align) noexcept;
GI_INLINE_DECL void scroll_to_cell (gboolean use_align, gfloat row_align, gfloat col_align) noexcept;

// void gtk_tree_view_scroll_to_point (GtkTreeView* tree_view, gint tree_x, gint tree_y);
// void gtk_tree_view_scroll_to_point (::GtkTreeView* tree_view, gint tree_x, gint tree_y);
GI_INLINE_DECL void scroll_to_point (gint tree_x, gint tree_y) noexcept;

// void gtk_tree_view_set_activate_on_single_click (GtkTreeView* tree_view, gboolean single);
// void gtk_tree_view_set_activate_on_single_click (::GtkTreeView* tree_view, gboolean single);
GI_INLINE_DECL void set_activate_on_single_click (gboolean single) noexcept;

// void gtk_tree_view_set_column_drag_function (GtkTreeView* tree_view, GtkTreeViewColumnDropFunc func, gpointer user_data, GDestroyNotify destroy);
// void gtk_tree_view_set_column_drag_function (::GtkTreeView* tree_view, Gtk::TreeViewColumnDropFunc::cfunction_type func, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
GI_INLINE_DECL void set_column_drag_function (Gtk::TreeViewColumnDropFunc func) noexcept;

// void gtk_tree_view_set_cursor (GtkTreeView* tree_view, GtkTreePath* path, GtkTreeViewColumn* focus_column, gboolean start_editing);
// void gtk_tree_view_set_cursor (::GtkTreeView* tree_view, ::GtkTreePath* path, ::GtkTreeViewColumn* focus_column, gboolean start_editing);
GI_INLINE_DECL void set_cursor (Gtk::TreePath path, Gtk::TreeViewColumn focus_column, gboolean start_editing) noexcept;
GI_INLINE_DECL void set_cursor (Gtk::TreePath path, gboolean start_editing) noexcept;

// void gtk_tree_view_set_cursor_on_cell (GtkTreeView* tree_view, GtkTreePath* path, GtkTreeViewColumn* focus_column, GtkCellRenderer* focus_cell, gboolean start_editing);
// void gtk_tree_view_set_cursor_on_cell (::GtkTreeView* tree_view, ::GtkTreePath* path, ::GtkTreeViewColumn* focus_column, ::GtkCellRenderer* focus_cell, gboolean start_editing);
GI_INLINE_DECL void set_cursor_on_cell (Gtk::TreePath path, Gtk::TreeViewColumn focus_column, Gtk::CellRenderer focus_cell, gboolean start_editing) noexcept;
GI_INLINE_DECL void set_cursor_on_cell (Gtk::TreePath path, gboolean start_editing) noexcept;

// void gtk_tree_view_set_destroy_count_func (GtkTreeView* tree_view, GtkTreeDestroyCountFunc func, gpointer data, GDestroyNotify destroy);
// void gtk_tree_view_set_destroy_count_func (::GtkTreeView* tree_view, Gtk::TreeDestroyCountFunc::cfunction_type func, void* data, GLib::DestroyNotify::cfunction_type destroy);
// IGNORE; deprecated

// void gtk_tree_view_set_drag_dest_row (GtkTreeView* tree_view, GtkTreePath* path, GtkTreeViewDropPosition pos);
// void gtk_tree_view_set_drag_dest_row (::GtkTreeView* tree_view, ::GtkTreePath* path, ::GtkTreeViewDropPosition pos);
GI_INLINE_DECL void set_drag_dest_row (Gtk::TreePath path, Gtk::TreeViewDropPosition pos) noexcept;
GI_INLINE_DECL void set_drag_dest_row (Gtk::TreeViewDropPosition pos) noexcept;

// void gtk_tree_view_set_enable_search (GtkTreeView* tree_view, gboolean enable_search);
// void gtk_tree_view_set_enable_search (::GtkTreeView* tree_view, gboolean enable_search);
GI_INLINE_DECL void set_enable_search (gboolean enable_search) noexcept;

// void gtk_tree_view_set_enable_tree_lines (GtkTreeView* tree_view, gboolean enabled);
// void gtk_tree_view_set_enable_tree_lines (::GtkTreeView* tree_view, gboolean enabled);
GI_INLINE_DECL void set_enable_tree_lines (gboolean enabled) noexcept;

// void gtk_tree_view_set_expander_column (GtkTreeView* tree_view, GtkTreeViewColumn* column);
// void gtk_tree_view_set_expander_column (::GtkTreeView* tree_view, ::GtkTreeViewColumn* column);
GI_INLINE_DECL void set_expander_column (Gtk::TreeViewColumn column) noexcept;
GI_INLINE_DECL void set_expander_column () noexcept;

// void gtk_tree_view_set_fixed_height_mode (GtkTreeView* tree_view, gboolean enable);
// void gtk_tree_view_set_fixed_height_mode (::GtkTreeView* tree_view, gboolean enable);
GI_INLINE_DECL void set_fixed_height_mode (gboolean enable) noexcept;

// void gtk_tree_view_set_grid_lines (GtkTreeView* tree_view, GtkTreeViewGridLines grid_lines);
// void gtk_tree_view_set_grid_lines (::GtkTreeView* tree_view, ::GtkTreeViewGridLines grid_lines);
GI_INLINE_DECL void set_grid_lines (Gtk::TreeViewGridLines grid_lines) noexcept;

// void gtk_tree_view_set_hadjustment (GtkTreeView* tree_view, GtkAdjustment* adjustment);
// void gtk_tree_view_set_hadjustment (::GtkTreeView* tree_view, ::GtkAdjustment* adjustment);
// IGNORE; deprecated

// void gtk_tree_view_set_headers_clickable (GtkTreeView* tree_view, gboolean setting);
// void gtk_tree_view_set_headers_clickable (::GtkTreeView* tree_view, gboolean setting);
GI_INLINE_DECL void set_headers_clickable (gboolean setting) noexcept;

// void gtk_tree_view_set_headers_visible (GtkTreeView* tree_view, gboolean headers_visible);
// void gtk_tree_view_set_headers_visible (::GtkTreeView* tree_view, gboolean headers_visible);
GI_INLINE_DECL void set_headers_visible (gboolean headers_visible) noexcept;

// void gtk_tree_view_set_hover_expand (GtkTreeView* tree_view, gboolean expand);
// void gtk_tree_view_set_hover_expand (::GtkTreeView* tree_view, gboolean expand);
GI_INLINE_DECL void set_hover_expand (gboolean expand) noexcept;

// void gtk_tree_view_set_hover_selection (GtkTreeView* tree_view, gboolean hover);
// void gtk_tree_view_set_hover_selection (::GtkTreeView* tree_view, gboolean hover);
GI_INLINE_DECL void set_hover_selection (gboolean hover) noexcept;

// void gtk_tree_view_set_level_indentation (GtkTreeView* tree_view, gint indentation);
// void gtk_tree_view_set_level_indentation (::GtkTreeView* tree_view, gint indentation);
GI_INLINE_DECL void set_level_indentation (gint indentation) noexcept;

// void gtk_tree_view_set_model (GtkTreeView* tree_view, GtkTreeModel* model);
// void gtk_tree_view_set_model (::GtkTreeView* tree_view, ::GtkTreeModel* model);
GI_INLINE_DECL void set_model (Gtk::TreeModel model) noexcept;
GI_INLINE_DECL void set_model () noexcept;

// void gtk_tree_view_set_reorderable (GtkTreeView* tree_view, gboolean reorderable);
// void gtk_tree_view_set_reorderable (::GtkTreeView* tree_view, gboolean reorderable);
GI_INLINE_DECL void set_reorderable (gboolean reorderable) noexcept;

// void gtk_tree_view_set_row_separator_func (GtkTreeView* tree_view, GtkTreeViewRowSeparatorFunc func, gpointer data, GDestroyNotify destroy);
// void gtk_tree_view_set_row_separator_func (::GtkTreeView* tree_view, Gtk::TreeViewRowSeparatorFunc::cfunction_type func, void* data, GLib::DestroyNotify::cfunction_type destroy);
GI_INLINE_DECL void set_row_separator_func (Gtk::TreeViewRowSeparatorFunc func) noexcept;

// void gtk_tree_view_set_rubber_banding (GtkTreeView* tree_view, gboolean enable);
// void gtk_tree_view_set_rubber_banding (::GtkTreeView* tree_view, gboolean enable);
GI_INLINE_DECL void set_rubber_banding (gboolean enable) noexcept;

// void gtk_tree_view_set_rules_hint (GtkTreeView* tree_view, gboolean setting);
// void gtk_tree_view_set_rules_hint (::GtkTreeView* tree_view, gboolean setting);
// IGNORE; deprecated

// void gtk_tree_view_set_search_column (GtkTreeView* tree_view, gint column);
// void gtk_tree_view_set_search_column (::GtkTreeView* tree_view, gint column);
GI_INLINE_DECL void set_search_column (gint column) noexcept;

// void gtk_tree_view_set_search_entry (GtkTreeView* tree_view, GtkEntry* entry);
// void gtk_tree_view_set_search_entry (::GtkTreeView* tree_view, ::GtkEntry* entry);
GI_INLINE_DECL void set_search_entry (Gtk::Entry entry) noexcept;
GI_INLINE_DECL void set_search_entry () noexcept;

// void gtk_tree_view_set_search_equal_func (GtkTreeView* tree_view, GtkTreeViewSearchEqualFunc search_equal_func, gpointer search_user_data, GDestroyNotify search_destroy);
// void gtk_tree_view_set_search_equal_func (::GtkTreeView* tree_view, Gtk::TreeViewSearchEqualFunc::cfunction_type search_equal_func, void* search_user_data, GLib::DestroyNotify::cfunction_type search_destroy);
GI_INLINE_DECL void set_search_equal_func (Gtk::TreeViewSearchEqualFunc search_equal_func) noexcept;

// void gtk_tree_view_set_search_position_func (GtkTreeView* tree_view, GtkTreeViewSearchPositionFunc func, gpointer data, GDestroyNotify destroy);
// void gtk_tree_view_set_search_position_func (::GtkTreeView* tree_view, Gtk::TreeViewSearchPositionFunc::cfunction_type func, void* data, GLib::DestroyNotify::cfunction_type destroy);
GI_INLINE_DECL void set_search_position_func (Gtk::TreeViewSearchPositionFunc func) noexcept;

// void gtk_tree_view_set_show_expanders (GtkTreeView* tree_view, gboolean enabled);
// void gtk_tree_view_set_show_expanders (::GtkTreeView* tree_view, gboolean enabled);
GI_INLINE_DECL void set_show_expanders (gboolean enabled) noexcept;

// void gtk_tree_view_set_tooltip_cell (GtkTreeView* tree_view, GtkTooltip* tooltip, GtkTreePath* path, GtkTreeViewColumn* column, GtkCellRenderer* cell);
// void gtk_tree_view_set_tooltip_cell (::GtkTreeView* tree_view, ::GtkTooltip* tooltip, ::GtkTreePath* path, ::GtkTreeViewColumn* column, ::GtkCellRenderer* cell);
GI_INLINE_DECL void set_tooltip_cell (Gtk::Tooltip tooltip, Gtk::TreePath path, Gtk::TreeViewColumn column, Gtk::CellRenderer cell) noexcept;
GI_INLINE_DECL void set_tooltip_cell (Gtk::Tooltip tooltip) noexcept;

// void gtk_tree_view_set_tooltip_column (GtkTreeView* tree_view, gint column);
// void gtk_tree_view_set_tooltip_column (::GtkTreeView* tree_view, gint column);
GI_INLINE_DECL void set_tooltip_column (gint column) noexcept;

// void gtk_tree_view_set_tooltip_row (GtkTreeView* tree_view, GtkTooltip* tooltip, GtkTreePath* path);
// void gtk_tree_view_set_tooltip_row (::GtkTreeView* tree_view, ::GtkTooltip* tooltip, ::GtkTreePath* path);
GI_INLINE_DECL void set_tooltip_row (Gtk::Tooltip tooltip, Gtk::TreePath path) noexcept;

// void gtk_tree_view_set_vadjustment (GtkTreeView* tree_view, GtkAdjustment* adjustment);
// void gtk_tree_view_set_vadjustment (::GtkTreeView* tree_view, ::GtkAdjustment* adjustment);
// IGNORE; deprecated

// void gtk_tree_view_unset_rows_drag_dest (GtkTreeView* tree_view);
// void gtk_tree_view_unset_rows_drag_dest (::GtkTreeView* tree_view);
GI_INLINE_DECL void unset_rows_drag_dest () noexcept;

// void gtk_tree_view_unset_rows_drag_source (GtkTreeView* tree_view);
// void gtk_tree_view_unset_rows_drag_source (::GtkTreeView* tree_view);
GI_INLINE_DECL void unset_rows_drag_source () noexcept;

gi::property_proxy<bool, base::TreeViewBase> property_activate_on_single_click()
{ return gi::property_proxy<bool, base::TreeViewBase> (*this, "activate-on-single-click"); }
const gi::property_proxy<bool, base::TreeViewBase> property_activate_on_single_click() const
{ return gi::property_proxy<bool, base::TreeViewBase> (*this, "activate-on-single-click"); }

gi::property_proxy<Gtk::TreeViewGridLines, base::TreeViewBase> property_enable_grid_lines()
{ return gi::property_proxy<Gtk::TreeViewGridLines, base::TreeViewBase> (*this, "enable-grid-lines"); }
const gi::property_proxy<Gtk::TreeViewGridLines, base::TreeViewBase> property_enable_grid_lines() const
{ return gi::property_proxy<Gtk::TreeViewGridLines, base::TreeViewBase> (*this, "enable-grid-lines"); }

gi::property_proxy<bool, base::TreeViewBase> property_enable_search()
{ return gi::property_proxy<bool, base::TreeViewBase> (*this, "enable-search"); }
const gi::property_proxy<bool, base::TreeViewBase> property_enable_search() const
{ return gi::property_proxy<bool, base::TreeViewBase> (*this, "enable-search"); }

gi::property_proxy<bool, base::TreeViewBase> property_enable_tree_lines()
{ return gi::property_proxy<bool, base::TreeViewBase> (*this, "enable-tree-lines"); }
const gi::property_proxy<bool, base::TreeViewBase> property_enable_tree_lines() const
{ return gi::property_proxy<bool, base::TreeViewBase> (*this, "enable-tree-lines"); }

gi::property_proxy<Gtk::TreeViewColumn, base::TreeViewBase> property_expander_column()
{ return gi::property_proxy<Gtk::TreeViewColumn, base::TreeViewBase> (*this, "expander-column"); }
const gi::property_proxy<Gtk::TreeViewColumn, base::TreeViewBase> property_expander_column() const
{ return gi::property_proxy<Gtk::TreeViewColumn, base::TreeViewBase> (*this, "expander-column"); }

gi::property_proxy<bool, base::TreeViewBase> property_fixed_height_mode()
{ return gi::property_proxy<bool, base::TreeViewBase> (*this, "fixed-height-mode"); }
const gi::property_proxy<bool, base::TreeViewBase> property_fixed_height_mode() const
{ return gi::property_proxy<bool, base::TreeViewBase> (*this, "fixed-height-mode"); }

gi::property_proxy<bool, base::TreeViewBase> property_headers_clickable()
{ return gi::property_proxy<bool, base::TreeViewBase> (*this, "headers-clickable"); }
const gi::property_proxy<bool, base::TreeViewBase> property_headers_clickable() const
{ return gi::property_proxy<bool, base::TreeViewBase> (*this, "headers-clickable"); }

gi::property_proxy<bool, base::TreeViewBase> property_headers_visible()
{ return gi::property_proxy<bool, base::TreeViewBase> (*this, "headers-visible"); }
const gi::property_proxy<bool, base::TreeViewBase> property_headers_visible() const
{ return gi::property_proxy<bool, base::TreeViewBase> (*this, "headers-visible"); }

gi::property_proxy<bool, base::TreeViewBase> property_hover_expand()
{ return gi::property_proxy<bool, base::TreeViewBase> (*this, "hover-expand"); }
const gi::property_proxy<bool, base::TreeViewBase> property_hover_expand() const
{ return gi::property_proxy<bool, base::TreeViewBase> (*this, "hover-expand"); }

gi::property_proxy<bool, base::TreeViewBase> property_hover_selection()
{ return gi::property_proxy<bool, base::TreeViewBase> (*this, "hover-selection"); }
const gi::property_proxy<bool, base::TreeViewBase> property_hover_selection() const
{ return gi::property_proxy<bool, base::TreeViewBase> (*this, "hover-selection"); }

gi::property_proxy<gint, base::TreeViewBase> property_level_indentation()
{ return gi::property_proxy<gint, base::TreeViewBase> (*this, "level-indentation"); }
const gi::property_proxy<gint, base::TreeViewBase> property_level_indentation() const
{ return gi::property_proxy<gint, base::TreeViewBase> (*this, "level-indentation"); }

gi::property_proxy<Gtk::TreeModel, base::TreeViewBase> property_model()
{ return gi::property_proxy<Gtk::TreeModel, base::TreeViewBase> (*this, "model"); }
const gi::property_proxy<Gtk::TreeModel, base::TreeViewBase> property_model() const
{ return gi::property_proxy<Gtk::TreeModel, base::TreeViewBase> (*this, "model"); }

gi::property_proxy<bool, base::TreeViewBase> property_reorderable()
{ return gi::property_proxy<bool, base::TreeViewBase> (*this, "reorderable"); }
const gi::property_proxy<bool, base::TreeViewBase> property_reorderable() const
{ return gi::property_proxy<bool, base::TreeViewBase> (*this, "reorderable"); }

gi::property_proxy<bool, base::TreeViewBase> property_rubber_banding()
{ return gi::property_proxy<bool, base::TreeViewBase> (*this, "rubber-banding"); }
const gi::property_proxy<bool, base::TreeViewBase> property_rubber_banding() const
{ return gi::property_proxy<bool, base::TreeViewBase> (*this, "rubber-banding"); }

gi::property_proxy<bool, base::TreeViewBase> property_rules_hint()
{ return gi::property_proxy<bool, base::TreeViewBase> (*this, "rules-hint"); }
const gi::property_proxy<bool, base::TreeViewBase> property_rules_hint() const
{ return gi::property_proxy<bool, base::TreeViewBase> (*this, "rules-hint"); }

gi::property_proxy<gint, base::TreeViewBase> property_search_column()
{ return gi::property_proxy<gint, base::TreeViewBase> (*this, "search-column"); }
const gi::property_proxy<gint, base::TreeViewBase> property_search_column() const
{ return gi::property_proxy<gint, base::TreeViewBase> (*this, "search-column"); }

gi::property_proxy<bool, base::TreeViewBase> property_show_expanders()
{ return gi::property_proxy<bool, base::TreeViewBase> (*this, "show-expanders"); }
const gi::property_proxy<bool, base::TreeViewBase> property_show_expanders() const
{ return gi::property_proxy<bool, base::TreeViewBase> (*this, "show-expanders"); }

gi::property_proxy<gint, base::TreeViewBase> property_tooltip_column()
{ return gi::property_proxy<gint, base::TreeViewBase> (*this, "tooltip-column"); }
const gi::property_proxy<gint, base::TreeViewBase> property_tooltip_column() const
{ return gi::property_proxy<gint, base::TreeViewBase> (*this, "tooltip-column"); }

gi::property_proxy_write<bool, base::TreeViewBase> property_ubuntu_almost_fixed_height_mode()
{ return gi::property_proxy_write<bool, base::TreeViewBase> (*this, "ubuntu-almost-fixed-height-mode"); }

// signal columns-changed
gi::signal_proxy<void(Gtk::TreeView)> signal_columns_changed()
{ return gi::signal_proxy<void(Gtk::TreeView)> (*this, "columns-changed"); }

// signal cursor-changed
gi::signal_proxy<void(Gtk::TreeView)> signal_cursor_changed()
{ return gi::signal_proxy<void(Gtk::TreeView)> (*this, "cursor-changed"); }

// signal expand-collapse-cursor-row
gi::signal_proxy<bool(Gtk::TreeView, gboolean object, gboolean p0, gboolean p1)> signal_expand_collapse_cursor_row()
{ return gi::signal_proxy<bool(Gtk::TreeView, gboolean object, gboolean p0, gboolean p1)> (*this, "expand-collapse-cursor-row"); }

// signal move-cursor
gi::signal_proxy<bool(Gtk::TreeView, Gtk::MovementStep step, gint direction)> signal_move_cursor()
{ return gi::signal_proxy<bool(Gtk::TreeView, Gtk::MovementStep step, gint direction)> (*this, "move-cursor"); }

// signal row-activated
gi::signal_proxy<void(Gtk::TreeView, Gtk::TreePath path, Gtk::TreeViewColumn column)> signal_row_activated()
{ return gi::signal_proxy<void(Gtk::TreeView, Gtk::TreePath path, Gtk::TreeViewColumn column)> (*this, "row-activated"); }

// signal row-collapsed
gi::signal_proxy<void(Gtk::TreeView, Gtk::TreeIter iter, Gtk::TreePath path)> signal_row_collapsed()
{ return gi::signal_proxy<void(Gtk::TreeView, Gtk::TreeIter iter, Gtk::TreePath path)> (*this, "row-collapsed"); }

// signal row-expanded
gi::signal_proxy<void(Gtk::TreeView, Gtk::TreeIter iter, Gtk::TreePath path)> signal_row_expanded()
{ return gi::signal_proxy<void(Gtk::TreeView, Gtk::TreeIter iter, Gtk::TreePath path)> (*this, "row-expanded"); }

// signal select-all
gi::signal_proxy<bool(Gtk::TreeView)> signal_select_all()
{ return gi::signal_proxy<bool(Gtk::TreeView)> (*this, "select-all"); }

// signal select-cursor-parent
gi::signal_proxy<bool(Gtk::TreeView)> signal_select_cursor_parent()
{ return gi::signal_proxy<bool(Gtk::TreeView)> (*this, "select-cursor-parent"); }

// signal select-cursor-row
gi::signal_proxy<bool(Gtk::TreeView, gboolean object)> signal_select_cursor_row()
{ return gi::signal_proxy<bool(Gtk::TreeView, gboolean object)> (*this, "select-cursor-row"); }

// signal start-interactive-search
gi::signal_proxy<bool(Gtk::TreeView)> signal_start_interactive_search()
{ return gi::signal_proxy<bool(Gtk::TreeView)> (*this, "start-interactive-search"); }

// signal test-collapse-row
gi::signal_proxy<bool(Gtk::TreeView, Gtk::TreeIter iter, Gtk::TreePath path)> signal_test_collapse_row()
{ return gi::signal_proxy<bool(Gtk::TreeView, Gtk::TreeIter iter, Gtk::TreePath path)> (*this, "test-collapse-row"); }

// signal test-expand-row
gi::signal_proxy<bool(Gtk::TreeView, Gtk::TreeIter iter, Gtk::TreePath path)> signal_test_expand_row()
{ return gi::signal_proxy<bool(Gtk::TreeView, Gtk::TreeIter iter, Gtk::TreePath path)> (*this, "test-expand-row"); }

// signal toggle-cursor-row
gi::signal_proxy<bool(Gtk::TreeView)> signal_toggle_cursor_row()
{ return gi::signal_proxy<bool(Gtk::TreeView)> (*this, "toggle-cursor-row"); }

// signal unselect-all
gi::signal_proxy<bool(Gtk::TreeView)> signal_unselect_all()
{ return gi::signal_proxy<bool(Gtk::TreeView)> (*this, "unselect-all"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treeview_extra_def.hpp>)
#include <gtk/treeview_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treeview_extra.hpp>)
#include <gtk/treeview_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class TreeView : public GI_GTK_TREEVIEW_BASE
{ typedef GI_GTK_TREEVIEW_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTreeView>
{ typedef Gtk::TreeView type; }; 

} // namespace repository

} // namespace gi

#include "scrollable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class TreeViewClassDef
{
typedef TreeViewClassDef self;
public:
typedef Gtk::TreeView instance_type;
typedef ::GtkTreeViewClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void TreeView::columns_changed (GtkTreeView* tree_view);
// void TreeView::columns_changed (::GtkTreeView* tree_view);
virtual void columns_changed_ () noexcept = 0;

// void TreeView::cursor_changed (GtkTreeView* tree_view);
// void TreeView::cursor_changed (::GtkTreeView* tree_view);
virtual void cursor_changed_ () noexcept = 0;

// gboolean TreeView::expand_collapse_cursor_row (GtkTreeView* tree_view, gboolean logical, gboolean expand, gboolean open_all);
// gboolean TreeView::expand_collapse_cursor_row (::GtkTreeView* tree_view, gboolean logical, gboolean expand, gboolean open_all);
virtual bool expand_collapse_cursor_row_ (gboolean logical, gboolean expand, gboolean open_all) noexcept = 0;

// gboolean TreeView::move_cursor (GtkTreeView* tree_view, GtkMovementStep step, gint count);
// gboolean TreeView::move_cursor (::GtkTreeView* tree_view, ::GtkMovementStep step, gint count);
virtual bool move_cursor_ (Gtk::MovementStep step, gint count) noexcept = 0;

// void TreeView::row_activated (GtkTreeView* tree_view, GtkTreePath* path, GtkTreeViewColumn* column);
// void TreeView::row_activated (::GtkTreeView* tree_view, ::GtkTreePath* path, ::GtkTreeViewColumn* column);
virtual void row_activated_ (Gtk::TreePath path, Gtk::TreeViewColumn column) noexcept = 0;

// void TreeView::row_collapsed (GtkTreeView* tree_view, GtkTreeIter* iter, GtkTreePath* path);
// void TreeView::row_collapsed (::GtkTreeView* tree_view, ::GtkTreeIter* iter, ::GtkTreePath* path);
virtual void row_collapsed_ (Gtk::TreeIter iter, Gtk::TreePath path) noexcept = 0;

// void TreeView::row_expanded (GtkTreeView* tree_view, GtkTreeIter* iter, GtkTreePath* path);
// void TreeView::row_expanded (::GtkTreeView* tree_view, ::GtkTreeIter* iter, ::GtkTreePath* path);
virtual void row_expanded_ (Gtk::TreeIter iter, Gtk::TreePath path) noexcept = 0;

// gboolean TreeView::select_all (GtkTreeView* tree_view);
// gboolean TreeView::select_all (::GtkTreeView* tree_view);
virtual bool select_all_ () noexcept = 0;

// gboolean TreeView::select_cursor_parent (GtkTreeView* tree_view);
// gboolean TreeView::select_cursor_parent (::GtkTreeView* tree_view);
virtual bool select_cursor_parent_ () noexcept = 0;

// gboolean TreeView::select_cursor_row (GtkTreeView* tree_view, gboolean start_editing);
// gboolean TreeView::select_cursor_row (::GtkTreeView* tree_view, gboolean start_editing);
virtual bool select_cursor_row_ (gboolean start_editing) noexcept = 0;

// gboolean TreeView::start_interactive_search (GtkTreeView* tree_view);
// gboolean TreeView::start_interactive_search (::GtkTreeView* tree_view);
virtual bool start_interactive_search_ () noexcept = 0;

// gboolean TreeView::test_collapse_row (GtkTreeView* tree_view, GtkTreeIter* iter, GtkTreePath* path);
// gboolean TreeView::test_collapse_row (::GtkTreeView* tree_view, ::GtkTreeIter* iter, ::GtkTreePath* path);
virtual bool test_collapse_row_ (Gtk::TreeIter iter, Gtk::TreePath path) noexcept = 0;

// gboolean TreeView::test_expand_row (GtkTreeView* tree_view, GtkTreeIter* iter, GtkTreePath* path);
// gboolean TreeView::test_expand_row (::GtkTreeView* tree_view, ::GtkTreeIter* iter, ::GtkTreePath* path);
virtual bool test_expand_row_ (Gtk::TreeIter iter, Gtk::TreePath path) noexcept = 0;

// gboolean TreeView::toggle_cursor_row (GtkTreeView* tree_view);
// gboolean TreeView::toggle_cursor_row (::GtkTreeView* tree_view);
virtual bool toggle_cursor_row_ () noexcept = 0;

// gboolean TreeView::unselect_all (GtkTreeView* tree_view);
// gboolean TreeView::unselect_all (::GtkTreeView* tree_view);
virtual bool unselect_all_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class TreeViewClass: public detail::ClassTemplate<Gtk::impl::internal::TreeViewClassDef, Gtk::impl::internal::ContainerClass, Gtk::impl::internal::ScrollableInterfaceClassImpl>
{
typedef TreeViewClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::TreeViewClassDef, Gtk::impl::internal::ContainerClass, Gtk::impl::internal::ScrollableInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::ScrollableInterfaceClassImpl GtkScrollableInterface_type;


// void TreeView::columns_changed (GtkTreeView* tree_view);
// void TreeView::columns_changed (::GtkTreeView* tree_view);
GI_INLINE_DECL void columns_changed_ () noexcept override;

// void TreeView::cursor_changed (GtkTreeView* tree_view);
// void TreeView::cursor_changed (::GtkTreeView* tree_view);
GI_INLINE_DECL void cursor_changed_ () noexcept override;

// gboolean TreeView::expand_collapse_cursor_row (GtkTreeView* tree_view, gboolean logical, gboolean expand, gboolean open_all);
// gboolean TreeView::expand_collapse_cursor_row (::GtkTreeView* tree_view, gboolean logical, gboolean expand, gboolean open_all);
GI_INLINE_DECL bool expand_collapse_cursor_row_ (gboolean logical, gboolean expand, gboolean open_all) noexcept override;

// gboolean TreeView::move_cursor (GtkTreeView* tree_view, GtkMovementStep step, gint count);
// gboolean TreeView::move_cursor (::GtkTreeView* tree_view, ::GtkMovementStep step, gint count);
GI_INLINE_DECL bool move_cursor_ (Gtk::MovementStep step, gint count) noexcept override;

// void TreeView::row_activated (GtkTreeView* tree_view, GtkTreePath* path, GtkTreeViewColumn* column);
// void TreeView::row_activated (::GtkTreeView* tree_view, ::GtkTreePath* path, ::GtkTreeViewColumn* column);
GI_INLINE_DECL void row_activated_ (Gtk::TreePath path, Gtk::TreeViewColumn column) noexcept override;

// void TreeView::row_collapsed (GtkTreeView* tree_view, GtkTreeIter* iter, GtkTreePath* path);
// void TreeView::row_collapsed (::GtkTreeView* tree_view, ::GtkTreeIter* iter, ::GtkTreePath* path);
GI_INLINE_DECL void row_collapsed_ (Gtk::TreeIter iter, Gtk::TreePath path) noexcept override;

// void TreeView::row_expanded (GtkTreeView* tree_view, GtkTreeIter* iter, GtkTreePath* path);
// void TreeView::row_expanded (::GtkTreeView* tree_view, ::GtkTreeIter* iter, ::GtkTreePath* path);
GI_INLINE_DECL void row_expanded_ (Gtk::TreeIter iter, Gtk::TreePath path) noexcept override;

// gboolean TreeView::select_all (GtkTreeView* tree_view);
// gboolean TreeView::select_all (::GtkTreeView* tree_view);
GI_INLINE_DECL bool select_all_ () noexcept override;

// gboolean TreeView::select_cursor_parent (GtkTreeView* tree_view);
// gboolean TreeView::select_cursor_parent (::GtkTreeView* tree_view);
GI_INLINE_DECL bool select_cursor_parent_ () noexcept override;

// gboolean TreeView::select_cursor_row (GtkTreeView* tree_view, gboolean start_editing);
// gboolean TreeView::select_cursor_row (::GtkTreeView* tree_view, gboolean start_editing);
GI_INLINE_DECL bool select_cursor_row_ (gboolean start_editing) noexcept override;

// gboolean TreeView::start_interactive_search (GtkTreeView* tree_view);
// gboolean TreeView::start_interactive_search (::GtkTreeView* tree_view);
GI_INLINE_DECL bool start_interactive_search_ () noexcept override;

// gboolean TreeView::test_collapse_row (GtkTreeView* tree_view, GtkTreeIter* iter, GtkTreePath* path);
// gboolean TreeView::test_collapse_row (::GtkTreeView* tree_view, ::GtkTreeIter* iter, ::GtkTreePath* path);
GI_INLINE_DECL bool test_collapse_row_ (Gtk::TreeIter iter, Gtk::TreePath path) noexcept override;

// gboolean TreeView::test_expand_row (GtkTreeView* tree_view, GtkTreeIter* iter, GtkTreePath* path);
// gboolean TreeView::test_expand_row (::GtkTreeView* tree_view, ::GtkTreeIter* iter, ::GtkTreePath* path);
GI_INLINE_DECL bool test_expand_row_ (Gtk::TreeIter iter, Gtk::TreePath path) noexcept override;

// gboolean TreeView::toggle_cursor_row (GtkTreeView* tree_view);
// gboolean TreeView::toggle_cursor_row (::GtkTreeView* tree_view);
GI_INLINE_DECL bool toggle_cursor_row_ () noexcept override;

// gboolean TreeView::unselect_all (GtkTreeView* tree_view);
// gboolean TreeView::unselect_all (::GtkTreeView* tree_view);
GI_INLINE_DECL bool unselect_all_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using TreeViewImpl = detail::ObjectImpl<TreeView, internal::TreeViewClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
