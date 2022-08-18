// AUTO-GENERATED

#ifndef _GI_GTK_ICONVIEW_HPP_
#define _GI_GTK_ICONVIEW_HPP_

#include "container.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class CellArea;
class CellLayout;
class CellRenderer;
class Scrollable;
class TargetEntry;
class Tooltip;
class TreeIter;
class TreeModel;
class TreePath;

class IconView;

namespace base {


#define GI_GTK_ICONVIEW_BASE base::IconViewBase
class IconViewBase : public Gtk::Container
{
typedef Gtk::Container super_type;
public:
typedef ::GtkIconView BaseObjectType;

IconViewBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_icon_view_get_type(); } 

GI_INLINE_DECL Gtk::CellLayout interface_ (gi::interface_tag<Gtk::CellLayout>);

GI_INLINE_DECL operator Gtk::CellLayout ();

GI_INLINE_DECL Gtk::Scrollable interface_ (gi::interface_tag<Gtk::Scrollable>);

GI_INLINE_DECL operator Gtk::Scrollable ();

// GtkWidget* gtk_icon_view_new ();
// ::GtkIconView* gtk_icon_view_new ();
static GI_INLINE_DECL Gtk::IconView new_ () noexcept;

// GtkWidget* gtk_icon_view_new_with_area (GtkCellArea* area);
// ::GtkIconView* gtk_icon_view_new_with_area (::GtkCellArea* area);
static GI_INLINE_DECL Gtk::IconView new_with_area (Gtk::CellArea area) noexcept;

// GtkWidget* gtk_icon_view_new_with_model (GtkTreeModel* model);
// ::GtkIconView* gtk_icon_view_new_with_model (::GtkTreeModel* model);
static GI_INLINE_DECL Gtk::IconView new_with_model (Gtk::TreeModel model) noexcept;

// void gtk_icon_view_convert_widget_to_bin_window_coords (GtkIconView* icon_view, gint wx, gint wy, gint* bx, gint* by);
// void gtk_icon_view_convert_widget_to_bin_window_coords (::GtkIconView* icon_view, gint wx, gint wy, gint* bx, gint* by);
GI_INLINE_DECL void convert_widget_to_bin_window_coords (gint wx, gint wy, gint & bx, gint & by) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> convert_widget_to_bin_window_coords (gint wx, gint wy) noexcept;

// cairo_surface_t* gtk_icon_view_create_drag_icon (GtkIconView* icon_view, GtkTreePath* path);
// ::cairo_surface_t* gtk_icon_view_create_drag_icon (::GtkIconView* icon_view, ::GtkTreePath* path);
GI_INLINE_DECL cairo::Surface create_drag_icon (Gtk::TreePath path) noexcept;

// void gtk_icon_view_enable_model_drag_dest (GtkIconView* icon_view, const GtkTargetEntry* targets, gint n_targets, GdkDragAction actions);
// void gtk_icon_view_enable_model_drag_dest (::GtkIconView* icon_view, const ::GtkTargetEntry** targets, gint n_targets, ::GdkDragAction actions);
// SKIP; inconsistent in targets pointer depth (1 vs 2)

// void gtk_icon_view_enable_model_drag_source (GtkIconView* icon_view, GdkModifierType start_button_mask, const GtkTargetEntry* targets, gint n_targets, GdkDragAction actions);
// void gtk_icon_view_enable_model_drag_source (::GtkIconView* icon_view, ::GdkModifierType start_button_mask, const ::GtkTargetEntry** targets, gint n_targets, ::GdkDragAction actions);
// SKIP; inconsistent in targets pointer depth (1 vs 2)

// gboolean gtk_icon_view_get_activate_on_single_click (GtkIconView* icon_view);
// gboolean gtk_icon_view_get_activate_on_single_click (::GtkIconView* icon_view);
GI_INLINE_DECL bool get_activate_on_single_click () noexcept;

// gboolean gtk_icon_view_get_cell_rect (GtkIconView* icon_view, GtkTreePath* path, GtkCellRenderer* cell, GdkRectangle* rect);
// gboolean gtk_icon_view_get_cell_rect (::GtkIconView* icon_view, ::GtkTreePath* path, ::GtkCellRenderer* cell, ::GdkRectangle* rect);
GI_INLINE_DECL bool get_cell_rect (Gtk::TreePath path, Gtk::CellRenderer cell, Gdk::Rectangle & rect) noexcept;
GI_INLINE_DECL bool get_cell_rect (Gtk::TreePath path, Gdk::Rectangle & rect) noexcept;
GI_INLINE_DECL std::tuple<bool, Gdk::Rectangle> get_cell_rect (Gtk::TreePath path, Gtk::CellRenderer cell) noexcept;
GI_INLINE_DECL std::tuple<bool, Gdk::Rectangle> get_cell_rect (Gtk::TreePath path) noexcept;

// gint gtk_icon_view_get_column_spacing (GtkIconView* icon_view);
// gint gtk_icon_view_get_column_spacing (::GtkIconView* icon_view);
GI_INLINE_DECL gint get_column_spacing () noexcept;

// gint gtk_icon_view_get_columns (GtkIconView* icon_view);
// gint gtk_icon_view_get_columns (::GtkIconView* icon_view);
GI_INLINE_DECL gint get_columns () noexcept;

// gboolean gtk_icon_view_get_cursor (GtkIconView* icon_view, GtkTreePath** path, GtkCellRenderer** cell);
// gboolean gtk_icon_view_get_cursor (::GtkIconView* icon_view, ::GtkTreePath** path, ::GtkCellRenderer** cell);
GI_INLINE_DECL bool get_cursor (Gtk::TreePath * path = nullptr, Gtk::CellRenderer * cell = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TreePath, Gtk::CellRenderer> get_cursor () noexcept;

// gboolean gtk_icon_view_get_dest_item_at_pos (GtkIconView* icon_view, gint drag_x, gint drag_y, GtkTreePath** path, GtkIconViewDropPosition* pos);
// gboolean gtk_icon_view_get_dest_item_at_pos (::GtkIconView* icon_view, gint drag_x, gint drag_y, ::GtkTreePath** path, ::GtkIconViewDropPosition* pos);
GI_INLINE_DECL bool get_dest_item_at_pos (gint drag_x, gint drag_y, Gtk::TreePath * path = nullptr, Gtk::IconViewDropPosition * pos = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TreePath, Gtk::IconViewDropPosition> get_dest_item_at_pos (gint drag_x, gint drag_y) noexcept;

// void gtk_icon_view_get_drag_dest_item (GtkIconView* icon_view, GtkTreePath** path, GtkIconViewDropPosition* pos);
// void gtk_icon_view_get_drag_dest_item (::GtkIconView* icon_view, ::GtkTreePath** path, ::GtkIconViewDropPosition* pos);
GI_INLINE_DECL void get_drag_dest_item (Gtk::TreePath * path = nullptr, Gtk::IconViewDropPosition * pos = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Gtk::TreePath, Gtk::IconViewDropPosition> get_drag_dest_item () noexcept;

// gboolean gtk_icon_view_get_item_at_pos (GtkIconView* icon_view, gint x, gint y, GtkTreePath** path, GtkCellRenderer** cell);
// gboolean gtk_icon_view_get_item_at_pos (::GtkIconView* icon_view, gint x, gint y, ::GtkTreePath** path, ::GtkCellRenderer** cell);
GI_INLINE_DECL bool get_item_at_pos (gint x, gint y, Gtk::TreePath * path = nullptr, Gtk::CellRenderer * cell = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TreePath, Gtk::CellRenderer> get_item_at_pos (gint x, gint y) noexcept;

// gint gtk_icon_view_get_item_column (GtkIconView* icon_view, GtkTreePath* path);
// gint gtk_icon_view_get_item_column (::GtkIconView* icon_view, ::GtkTreePath* path);
GI_INLINE_DECL gint get_item_column (Gtk::TreePath path) noexcept;

// GtkOrientation gtk_icon_view_get_item_orientation (GtkIconView* icon_view);
// ::GtkOrientation gtk_icon_view_get_item_orientation (::GtkIconView* icon_view);
GI_INLINE_DECL Gtk::Orientation get_item_orientation () noexcept;

// gint gtk_icon_view_get_item_padding (GtkIconView* icon_view);
// gint gtk_icon_view_get_item_padding (::GtkIconView* icon_view);
GI_INLINE_DECL gint get_item_padding () noexcept;

// gint gtk_icon_view_get_item_row (GtkIconView* icon_view, GtkTreePath* path);
// gint gtk_icon_view_get_item_row (::GtkIconView* icon_view, ::GtkTreePath* path);
GI_INLINE_DECL gint get_item_row (Gtk::TreePath path) noexcept;

// gint gtk_icon_view_get_item_width (GtkIconView* icon_view);
// gint gtk_icon_view_get_item_width (::GtkIconView* icon_view);
GI_INLINE_DECL gint get_item_width () noexcept;

// gint gtk_icon_view_get_margin (GtkIconView* icon_view);
// gint gtk_icon_view_get_margin (::GtkIconView* icon_view);
GI_INLINE_DECL gint get_margin () noexcept;

// gint gtk_icon_view_get_markup_column (GtkIconView* icon_view);
// gint gtk_icon_view_get_markup_column (::GtkIconView* icon_view);
GI_INLINE_DECL gint get_markup_column () noexcept;

// GtkTreeModel* gtk_icon_view_get_model (GtkIconView* icon_view);
// ::GtkTreeModel* gtk_icon_view_get_model (::GtkIconView* icon_view);
GI_INLINE_DECL Gtk::TreeModel get_model () noexcept;

// GtkTreePath* gtk_icon_view_get_path_at_pos (GtkIconView* icon_view, gint x, gint y);
// ::GtkTreePath* gtk_icon_view_get_path_at_pos (::GtkIconView* icon_view, gint x, gint y);
GI_INLINE_DECL Gtk::TreePath get_path_at_pos (gint x, gint y) noexcept;

// gint gtk_icon_view_get_pixbuf_column (GtkIconView* icon_view);
// gint gtk_icon_view_get_pixbuf_column (::GtkIconView* icon_view);
GI_INLINE_DECL gint get_pixbuf_column () noexcept;

// gboolean gtk_icon_view_get_reorderable (GtkIconView* icon_view);
// gboolean gtk_icon_view_get_reorderable (::GtkIconView* icon_view);
GI_INLINE_DECL bool get_reorderable () noexcept;

// gint gtk_icon_view_get_row_spacing (GtkIconView* icon_view);
// gint gtk_icon_view_get_row_spacing (::GtkIconView* icon_view);
GI_INLINE_DECL gint get_row_spacing () noexcept;

// GList* gtk_icon_view_get_selected_items (GtkIconView* icon_view);
// ::GList* gtk_icon_view_get_selected_items (::GtkIconView* icon_view);
GI_INLINE_DECL std::vector<Gtk::TreePath> get_selected_items () noexcept;

// GtkSelectionMode gtk_icon_view_get_selection_mode (GtkIconView* icon_view);
// ::GtkSelectionMode gtk_icon_view_get_selection_mode (::GtkIconView* icon_view);
GI_INLINE_DECL Gtk::SelectionMode get_selection_mode () noexcept;

// gint gtk_icon_view_get_spacing (GtkIconView* icon_view);
// gint gtk_icon_view_get_spacing (::GtkIconView* icon_view);
GI_INLINE_DECL gint get_spacing () noexcept;

// gint gtk_icon_view_get_text_column (GtkIconView* icon_view);
// gint gtk_icon_view_get_text_column (::GtkIconView* icon_view);
GI_INLINE_DECL gint get_text_column () noexcept;

// gint gtk_icon_view_get_tooltip_column (GtkIconView* icon_view);
// gint gtk_icon_view_get_tooltip_column (::GtkIconView* icon_view);
GI_INLINE_DECL gint get_tooltip_column () noexcept;

// gboolean gtk_icon_view_get_tooltip_context (GtkIconView* icon_view, gint* x, gint* y, gboolean keyboard_tip, GtkTreeModel** model, GtkTreePath** path, GtkTreeIter* iter);
// gboolean gtk_icon_view_get_tooltip_context (::GtkIconView* icon_view, gint* x, gint* y, gboolean keyboard_tip, ::GtkTreeModel** model, ::GtkTreePath** path, ::GtkTreeIter* iter);
GI_INLINE_DECL bool get_tooltip_context (gint & x, gint & y, gboolean keyboard_tip, Gtk::TreeModel * model = nullptr, Gtk::TreePath * path = nullptr, Gtk::TreeIter * iter = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TreeModel, Gtk::TreePath, Gtk::TreeIter> get_tooltip_context (gint & x, gint & y, gboolean keyboard_tip) noexcept;

// gboolean gtk_icon_view_get_visible_range (GtkIconView* icon_view, GtkTreePath** start_path, GtkTreePath** end_path);
// gboolean gtk_icon_view_get_visible_range (::GtkIconView* icon_view, ::GtkTreePath** start_path, ::GtkTreePath** end_path);
GI_INLINE_DECL bool get_visible_range (Gtk::TreePath * start_path = nullptr, Gtk::TreePath * end_path = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TreePath, Gtk::TreePath> get_visible_range () noexcept;

// void gtk_icon_view_item_activated (GtkIconView* icon_view, GtkTreePath* path);
// void gtk_icon_view_item_activated (::GtkIconView* icon_view, ::GtkTreePath* path);
GI_INLINE_DECL void item_activated (Gtk::TreePath path) noexcept;

// gboolean gtk_icon_view_path_is_selected (GtkIconView* icon_view, GtkTreePath* path);
// gboolean gtk_icon_view_path_is_selected (::GtkIconView* icon_view, ::GtkTreePath* path);
GI_INLINE_DECL bool path_is_selected (Gtk::TreePath path) noexcept;

// void gtk_icon_view_scroll_to_path (GtkIconView* icon_view, GtkTreePath* path, gboolean use_align, gfloat row_align, gfloat col_align);
// void gtk_icon_view_scroll_to_path (::GtkIconView* icon_view, ::GtkTreePath* path, gboolean use_align, gfloat row_align, gfloat col_align);
GI_INLINE_DECL void scroll_to_path (Gtk::TreePath path, gboolean use_align, gfloat row_align, gfloat col_align) noexcept;

// void gtk_icon_view_select_all (GtkIconView* icon_view);
// void gtk_icon_view_select_all (::GtkIconView* icon_view);
GI_INLINE_DECL void select_all () noexcept;

// void gtk_icon_view_select_path (GtkIconView* icon_view, GtkTreePath* path);
// void gtk_icon_view_select_path (::GtkIconView* icon_view, ::GtkTreePath* path);
GI_INLINE_DECL void select_path (Gtk::TreePath path) noexcept;

// void gtk_icon_view_selected_foreach (GtkIconView* icon_view, GtkIconViewForeachFunc func, gpointer data);
// void gtk_icon_view_selected_foreach (::GtkIconView* icon_view, Gtk::IconViewForeachFunc::cfunction_type func, void* data);
GI_INLINE_DECL void selected_foreach (Gtk::IconViewForeachFunc func) noexcept;

// void gtk_icon_view_set_activate_on_single_click (GtkIconView* icon_view, gboolean single);
// void gtk_icon_view_set_activate_on_single_click (::GtkIconView* icon_view, gboolean single);
GI_INLINE_DECL void set_activate_on_single_click (gboolean single) noexcept;

// void gtk_icon_view_set_column_spacing (GtkIconView* icon_view, gint column_spacing);
// void gtk_icon_view_set_column_spacing (::GtkIconView* icon_view, gint column_spacing);
GI_INLINE_DECL void set_column_spacing (gint column_spacing) noexcept;

// void gtk_icon_view_set_columns (GtkIconView* icon_view, gint columns);
// void gtk_icon_view_set_columns (::GtkIconView* icon_view, gint columns);
GI_INLINE_DECL void set_columns (gint columns) noexcept;

// void gtk_icon_view_set_cursor (GtkIconView* icon_view, GtkTreePath* path, GtkCellRenderer* cell, gboolean start_editing);
// void gtk_icon_view_set_cursor (::GtkIconView* icon_view, ::GtkTreePath* path, ::GtkCellRenderer* cell, gboolean start_editing);
GI_INLINE_DECL void set_cursor (Gtk::TreePath path, Gtk::CellRenderer cell, gboolean start_editing) noexcept;
GI_INLINE_DECL void set_cursor (Gtk::TreePath path, gboolean start_editing) noexcept;

// void gtk_icon_view_set_drag_dest_item (GtkIconView* icon_view, GtkTreePath* path, GtkIconViewDropPosition pos);
// void gtk_icon_view_set_drag_dest_item (::GtkIconView* icon_view, ::GtkTreePath* path, ::GtkIconViewDropPosition pos);
GI_INLINE_DECL void set_drag_dest_item (Gtk::TreePath path, Gtk::IconViewDropPosition pos) noexcept;
GI_INLINE_DECL void set_drag_dest_item (Gtk::IconViewDropPosition pos) noexcept;

// void gtk_icon_view_set_item_orientation (GtkIconView* icon_view, GtkOrientation orientation);
// void gtk_icon_view_set_item_orientation (::GtkIconView* icon_view, ::GtkOrientation orientation);
GI_INLINE_DECL void set_item_orientation (Gtk::Orientation orientation) noexcept;

// void gtk_icon_view_set_item_padding (GtkIconView* icon_view, gint item_padding);
// void gtk_icon_view_set_item_padding (::GtkIconView* icon_view, gint item_padding);
GI_INLINE_DECL void set_item_padding (gint item_padding) noexcept;

// void gtk_icon_view_set_item_width (GtkIconView* icon_view, gint item_width);
// void gtk_icon_view_set_item_width (::GtkIconView* icon_view, gint item_width);
GI_INLINE_DECL void set_item_width (gint item_width) noexcept;

// void gtk_icon_view_set_margin (GtkIconView* icon_view, gint margin);
// void gtk_icon_view_set_margin (::GtkIconView* icon_view, gint margin);
GI_INLINE_DECL void set_margin (gint margin) noexcept;

// void gtk_icon_view_set_markup_column (GtkIconView* icon_view, gint column);
// void gtk_icon_view_set_markup_column (::GtkIconView* icon_view, gint column);
GI_INLINE_DECL void set_markup_column (gint column) noexcept;

// void gtk_icon_view_set_model (GtkIconView* icon_view, GtkTreeModel* model);
// void gtk_icon_view_set_model (::GtkIconView* icon_view, ::GtkTreeModel* model);
GI_INLINE_DECL void set_model (Gtk::TreeModel model) noexcept;
GI_INLINE_DECL void set_model () noexcept;

// void gtk_icon_view_set_pixbuf_column (GtkIconView* icon_view, gint column);
// void gtk_icon_view_set_pixbuf_column (::GtkIconView* icon_view, gint column);
GI_INLINE_DECL void set_pixbuf_column (gint column) noexcept;

// void gtk_icon_view_set_reorderable (GtkIconView* icon_view, gboolean reorderable);
// void gtk_icon_view_set_reorderable (::GtkIconView* icon_view, gboolean reorderable);
GI_INLINE_DECL void set_reorderable (gboolean reorderable) noexcept;

// void gtk_icon_view_set_row_spacing (GtkIconView* icon_view, gint row_spacing);
// void gtk_icon_view_set_row_spacing (::GtkIconView* icon_view, gint row_spacing);
GI_INLINE_DECL void set_row_spacing (gint row_spacing) noexcept;

// void gtk_icon_view_set_selection_mode (GtkIconView* icon_view, GtkSelectionMode mode);
// void gtk_icon_view_set_selection_mode (::GtkIconView* icon_view, ::GtkSelectionMode mode);
GI_INLINE_DECL void set_selection_mode (Gtk::SelectionMode mode) noexcept;

// void gtk_icon_view_set_spacing (GtkIconView* icon_view, gint spacing);
// void gtk_icon_view_set_spacing (::GtkIconView* icon_view, gint spacing);
GI_INLINE_DECL void set_spacing (gint spacing) noexcept;

// void gtk_icon_view_set_text_column (GtkIconView* icon_view, gint column);
// void gtk_icon_view_set_text_column (::GtkIconView* icon_view, gint column);
GI_INLINE_DECL void set_text_column (gint column) noexcept;

// void gtk_icon_view_set_tooltip_cell (GtkIconView* icon_view, GtkTooltip* tooltip, GtkTreePath* path, GtkCellRenderer* cell);
// void gtk_icon_view_set_tooltip_cell (::GtkIconView* icon_view, ::GtkTooltip* tooltip, ::GtkTreePath* path, ::GtkCellRenderer* cell);
GI_INLINE_DECL void set_tooltip_cell (Gtk::Tooltip tooltip, Gtk::TreePath path, Gtk::CellRenderer cell) noexcept;
GI_INLINE_DECL void set_tooltip_cell (Gtk::Tooltip tooltip, Gtk::TreePath path) noexcept;

// void gtk_icon_view_set_tooltip_column (GtkIconView* icon_view, gint column);
// void gtk_icon_view_set_tooltip_column (::GtkIconView* icon_view, gint column);
GI_INLINE_DECL void set_tooltip_column (gint column) noexcept;

// void gtk_icon_view_set_tooltip_item (GtkIconView* icon_view, GtkTooltip* tooltip, GtkTreePath* path);
// void gtk_icon_view_set_tooltip_item (::GtkIconView* icon_view, ::GtkTooltip* tooltip, ::GtkTreePath* path);
GI_INLINE_DECL void set_tooltip_item (Gtk::Tooltip tooltip, Gtk::TreePath path) noexcept;

// void gtk_icon_view_unselect_all (GtkIconView* icon_view);
// void gtk_icon_view_unselect_all (::GtkIconView* icon_view);
GI_INLINE_DECL void unselect_all () noexcept;

// void gtk_icon_view_unselect_path (GtkIconView* icon_view, GtkTreePath* path);
// void gtk_icon_view_unselect_path (::GtkIconView* icon_view, ::GtkTreePath* path);
GI_INLINE_DECL void unselect_path (Gtk::TreePath path) noexcept;

// void gtk_icon_view_unset_model_drag_dest (GtkIconView* icon_view);
// void gtk_icon_view_unset_model_drag_dest (::GtkIconView* icon_view);
GI_INLINE_DECL void unset_model_drag_dest () noexcept;

// void gtk_icon_view_unset_model_drag_source (GtkIconView* icon_view);
// void gtk_icon_view_unset_model_drag_source (::GtkIconView* icon_view);
GI_INLINE_DECL void unset_model_drag_source () noexcept;

gi::property_proxy<bool, base::IconViewBase> property_activate_on_single_click()
{ return gi::property_proxy<bool, base::IconViewBase> (*this, "activate-on-single-click"); }
const gi::property_proxy<bool, base::IconViewBase> property_activate_on_single_click() const
{ return gi::property_proxy<bool, base::IconViewBase> (*this, "activate-on-single-click"); }

gi::property_proxy<Gtk::CellArea, base::IconViewBase> property_cell_area()
{ return gi::property_proxy<Gtk::CellArea, base::IconViewBase> (*this, "cell-area"); }
const gi::property_proxy<Gtk::CellArea, base::IconViewBase> property_cell_area() const
{ return gi::property_proxy<Gtk::CellArea, base::IconViewBase> (*this, "cell-area"); }

gi::property_proxy<gint, base::IconViewBase> property_column_spacing()
{ return gi::property_proxy<gint, base::IconViewBase> (*this, "column-spacing"); }
const gi::property_proxy<gint, base::IconViewBase> property_column_spacing() const
{ return gi::property_proxy<gint, base::IconViewBase> (*this, "column-spacing"); }

gi::property_proxy<gint, base::IconViewBase> property_columns()
{ return gi::property_proxy<gint, base::IconViewBase> (*this, "columns"); }
const gi::property_proxy<gint, base::IconViewBase> property_columns() const
{ return gi::property_proxy<gint, base::IconViewBase> (*this, "columns"); }

gi::property_proxy<Gtk::Orientation, base::IconViewBase> property_item_orientation()
{ return gi::property_proxy<Gtk::Orientation, base::IconViewBase> (*this, "item-orientation"); }
const gi::property_proxy<Gtk::Orientation, base::IconViewBase> property_item_orientation() const
{ return gi::property_proxy<Gtk::Orientation, base::IconViewBase> (*this, "item-orientation"); }

gi::property_proxy<gint, base::IconViewBase> property_item_padding()
{ return gi::property_proxy<gint, base::IconViewBase> (*this, "item-padding"); }
const gi::property_proxy<gint, base::IconViewBase> property_item_padding() const
{ return gi::property_proxy<gint, base::IconViewBase> (*this, "item-padding"); }

gi::property_proxy<gint, base::IconViewBase> property_item_width()
{ return gi::property_proxy<gint, base::IconViewBase> (*this, "item-width"); }
const gi::property_proxy<gint, base::IconViewBase> property_item_width() const
{ return gi::property_proxy<gint, base::IconViewBase> (*this, "item-width"); }

gi::property_proxy<gint, base::IconViewBase> property_margin()
{ return gi::property_proxy<gint, base::IconViewBase> (*this, "margin"); }
const gi::property_proxy<gint, base::IconViewBase> property_margin() const
{ return gi::property_proxy<gint, base::IconViewBase> (*this, "margin"); }

gi::property_proxy<gint, base::IconViewBase> property_markup_column()
{ return gi::property_proxy<gint, base::IconViewBase> (*this, "markup-column"); }
const gi::property_proxy<gint, base::IconViewBase> property_markup_column() const
{ return gi::property_proxy<gint, base::IconViewBase> (*this, "markup-column"); }

gi::property_proxy<Gtk::TreeModel, base::IconViewBase> property_model()
{ return gi::property_proxy<Gtk::TreeModel, base::IconViewBase> (*this, "model"); }
const gi::property_proxy<Gtk::TreeModel, base::IconViewBase> property_model() const
{ return gi::property_proxy<Gtk::TreeModel, base::IconViewBase> (*this, "model"); }

gi::property_proxy<gint, base::IconViewBase> property_pixbuf_column()
{ return gi::property_proxy<gint, base::IconViewBase> (*this, "pixbuf-column"); }
const gi::property_proxy<gint, base::IconViewBase> property_pixbuf_column() const
{ return gi::property_proxy<gint, base::IconViewBase> (*this, "pixbuf-column"); }

gi::property_proxy<bool, base::IconViewBase> property_reorderable()
{ return gi::property_proxy<bool, base::IconViewBase> (*this, "reorderable"); }
const gi::property_proxy<bool, base::IconViewBase> property_reorderable() const
{ return gi::property_proxy<bool, base::IconViewBase> (*this, "reorderable"); }

gi::property_proxy<gint, base::IconViewBase> property_row_spacing()
{ return gi::property_proxy<gint, base::IconViewBase> (*this, "row-spacing"); }
const gi::property_proxy<gint, base::IconViewBase> property_row_spacing() const
{ return gi::property_proxy<gint, base::IconViewBase> (*this, "row-spacing"); }

gi::property_proxy<Gtk::SelectionMode, base::IconViewBase> property_selection_mode()
{ return gi::property_proxy<Gtk::SelectionMode, base::IconViewBase> (*this, "selection-mode"); }
const gi::property_proxy<Gtk::SelectionMode, base::IconViewBase> property_selection_mode() const
{ return gi::property_proxy<Gtk::SelectionMode, base::IconViewBase> (*this, "selection-mode"); }

gi::property_proxy<gint, base::IconViewBase> property_spacing()
{ return gi::property_proxy<gint, base::IconViewBase> (*this, "spacing"); }
const gi::property_proxy<gint, base::IconViewBase> property_spacing() const
{ return gi::property_proxy<gint, base::IconViewBase> (*this, "spacing"); }

gi::property_proxy<gint, base::IconViewBase> property_text_column()
{ return gi::property_proxy<gint, base::IconViewBase> (*this, "text-column"); }
const gi::property_proxy<gint, base::IconViewBase> property_text_column() const
{ return gi::property_proxy<gint, base::IconViewBase> (*this, "text-column"); }

gi::property_proxy<gint, base::IconViewBase> property_tooltip_column()
{ return gi::property_proxy<gint, base::IconViewBase> (*this, "tooltip-column"); }
const gi::property_proxy<gint, base::IconViewBase> property_tooltip_column() const
{ return gi::property_proxy<gint, base::IconViewBase> (*this, "tooltip-column"); }

// signal activate-cursor-item
gi::signal_proxy<bool(Gtk::IconView)> signal_activate_cursor_item()
{ return gi::signal_proxy<bool(Gtk::IconView)> (*this, "activate-cursor-item"); }

// signal item-activated
gi::signal_proxy<void(Gtk::IconView, Gtk::TreePath path)> signal_item_activated()
{ return gi::signal_proxy<void(Gtk::IconView, Gtk::TreePath path)> (*this, "item-activated"); }

// signal move-cursor
gi::signal_proxy<bool(Gtk::IconView, Gtk::MovementStep step, gint count)> signal_move_cursor()
{ return gi::signal_proxy<bool(Gtk::IconView, Gtk::MovementStep step, gint count)> (*this, "move-cursor"); }

// signal select-all
gi::signal_proxy<void(Gtk::IconView)> signal_select_all()
{ return gi::signal_proxy<void(Gtk::IconView)> (*this, "select-all"); }

// signal select-cursor-item
gi::signal_proxy<void(Gtk::IconView)> signal_select_cursor_item()
{ return gi::signal_proxy<void(Gtk::IconView)> (*this, "select-cursor-item"); }

// signal selection-changed
gi::signal_proxy<void(Gtk::IconView)> signal_selection_changed()
{ return gi::signal_proxy<void(Gtk::IconView)> (*this, "selection-changed"); }

// signal toggle-cursor-item
gi::signal_proxy<void(Gtk::IconView)> signal_toggle_cursor_item()
{ return gi::signal_proxy<void(Gtk::IconView)> (*this, "toggle-cursor-item"); }

// signal unselect-all
gi::signal_proxy<void(Gtk::IconView)> signal_unselect_all()
{ return gi::signal_proxy<void(Gtk::IconView)> (*this, "unselect-all"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/iconview_extra_def.hpp>)
#include <gtk/iconview_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/iconview_extra.hpp>)
#include <gtk/iconview_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class IconView : public GI_GTK_ICONVIEW_BASE
{ typedef GI_GTK_ICONVIEW_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkIconView>
{ typedef Gtk::IconView type; }; 

} // namespace repository

} // namespace gi

#include "celllayout.hpp"
#include "scrollable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class IconViewClassDef
{
typedef IconViewClassDef self;
public:
typedef Gtk::IconView instance_type;
typedef ::GtkIconViewClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gboolean IconView::activate_cursor_item (GtkIconView* icon_view);
// gboolean IconView::activate_cursor_item (::GtkIconView* icon_view);
virtual bool activate_cursor_item_ () noexcept = 0;

// void IconView::item_activated (GtkIconView* icon_view, GtkTreePath* path);
// void IconView::item_activated (::GtkIconView* icon_view, ::GtkTreePath* path);
virtual void item_activated_ (Gtk::TreePath path) noexcept = 0;

// gboolean IconView::move_cursor (GtkIconView* icon_view, GtkMovementStep step, gint count);
// gboolean IconView::move_cursor (::GtkIconView* icon_view, ::GtkMovementStep step, gint count);
virtual bool move_cursor_ (Gtk::MovementStep step, gint count) noexcept = 0;

// void IconView::select_all (GtkIconView* icon_view);
// void IconView::select_all (::GtkIconView* icon_view);
virtual void select_all_ () noexcept = 0;

// void IconView::select_cursor_item (GtkIconView* icon_view);
// void IconView::select_cursor_item (::GtkIconView* icon_view);
virtual void select_cursor_item_ () noexcept = 0;

// void IconView::selection_changed (GtkIconView* icon_view);
// void IconView::selection_changed (::GtkIconView* icon_view);
virtual void selection_changed_ () noexcept = 0;

// void IconView::toggle_cursor_item (GtkIconView* icon_view);
// void IconView::toggle_cursor_item (::GtkIconView* icon_view);
virtual void toggle_cursor_item_ () noexcept = 0;

// void IconView::unselect_all (GtkIconView* icon_view);
// void IconView::unselect_all (::GtkIconView* icon_view);
virtual void unselect_all_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class IconViewClass: public detail::ClassTemplate<Gtk::impl::internal::IconViewClassDef, Gtk::impl::internal::ContainerClass, Gtk::impl::internal::CellLayoutIfaceClassImpl, Gtk::impl::internal::ScrollableInterfaceClassImpl>
{
typedef IconViewClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::IconViewClassDef, Gtk::impl::internal::ContainerClass, Gtk::impl::internal::CellLayoutIfaceClassImpl, Gtk::impl::internal::ScrollableInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::CellLayoutIfaceClassImpl GtkCellLayoutIface_type;
typedef Gtk::impl::internal::ScrollableInterfaceClassImpl GtkScrollableInterface_type;


// gboolean IconView::activate_cursor_item (GtkIconView* icon_view);
// gboolean IconView::activate_cursor_item (::GtkIconView* icon_view);
GI_INLINE_DECL bool activate_cursor_item_ () noexcept override;

// void IconView::item_activated (GtkIconView* icon_view, GtkTreePath* path);
// void IconView::item_activated (::GtkIconView* icon_view, ::GtkTreePath* path);
GI_INLINE_DECL void item_activated_ (Gtk::TreePath path) noexcept override;

// gboolean IconView::move_cursor (GtkIconView* icon_view, GtkMovementStep step, gint count);
// gboolean IconView::move_cursor (::GtkIconView* icon_view, ::GtkMovementStep step, gint count);
GI_INLINE_DECL bool move_cursor_ (Gtk::MovementStep step, gint count) noexcept override;

// void IconView::select_all (GtkIconView* icon_view);
// void IconView::select_all (::GtkIconView* icon_view);
GI_INLINE_DECL void select_all_ () noexcept override;

// void IconView::select_cursor_item (GtkIconView* icon_view);
// void IconView::select_cursor_item (::GtkIconView* icon_view);
GI_INLINE_DECL void select_cursor_item_ () noexcept override;

// void IconView::selection_changed (GtkIconView* icon_view);
// void IconView::selection_changed (::GtkIconView* icon_view);
GI_INLINE_DECL void selection_changed_ () noexcept override;

// void IconView::toggle_cursor_item (GtkIconView* icon_view);
// void IconView::toggle_cursor_item (::GtkIconView* icon_view);
GI_INLINE_DECL void toggle_cursor_item_ () noexcept override;

// void IconView::unselect_all (GtkIconView* icon_view);
// void IconView::unselect_all (::GtkIconView* icon_view);
GI_INLINE_DECL void unselect_all_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using IconViewImpl = detail::ObjectImpl<IconView, internal::IconViewClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
