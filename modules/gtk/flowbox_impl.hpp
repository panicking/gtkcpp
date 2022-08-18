// AUTO-GENERATED

#ifndef _GI_GTK_FLOWBOX_IMPL_HPP_
#define _GI_GTK_FLOWBOX_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Orientable FlowBoxBase::interface_ (gi::interface_tag<Gtk::Orientable>)
{ return gi::wrap ((Gtk::Orientable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

FlowBoxBase::operator Gtk::Orientable ()
{ return interface_ (gi::interface_tag<Gtk::Orientable>()); }

// GtkWidget* gtk_flow_box_new ();
// ::GtkFlowBox* gtk_flow_box_new ();
Gtk::FlowBox base::FlowBoxBase::new_ () noexcept
{
  typedef ::GtkFlowBox* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_flow_box_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_flow_box_bind_model (GtkFlowBox* box, GListModel* model, GtkFlowBoxCreateWidgetFunc create_widget_func, gpointer user_data, GDestroyNotify user_data_free_func);
// void gtk_flow_box_bind_model (::GtkFlowBox* box, ::GListModel* model, Gtk::FlowBoxCreateWidgetFunc::cfunction_type create_widget_func, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func);
void base::FlowBoxBase::bind_model (Gio::ListModel model, Gtk::FlowBoxCreateWidgetFunc create_widget_func) noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBox* box, ::GListModel* model, Gtk::FlowBoxCreateWidgetFunc::cfunction_type create_widget_func, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_flow_box_bind_model;
  auto create_widget_func_wrap_ = create_widget_func ? unwrap (std::move (create_widget_func), gi::scope_notified) : nullptr;
  auto model_to_c = gi::unwrap (model, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkFlowBox*) (gobj_()), (::GListModel*) (model_to_c), (Gtk::FlowBoxCreateWidgetFunc::cfunction_type) (create_widget_func_wrap_ ? &create_widget_func_wrap_->wrapper : nullptr), (void*) (create_widget_func_wrap_), (GLib::DestroyNotify::cfunction_type) (create_widget_func_wrap_ ? &create_widget_func_wrap_->destroy : nullptr));
}
void base::FlowBoxBase::bind_model (Gtk::FlowBoxCreateWidgetFunc create_widget_func) noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBox* box, ::GListModel* model, Gtk::FlowBoxCreateWidgetFunc::cfunction_type create_widget_func, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_flow_box_bind_model;
  auto create_widget_func_wrap_ = create_widget_func ? unwrap (std::move (create_widget_func), gi::scope_notified) : nullptr;
  auto model_to_c = nullptr;
  call_wrap_v ((::GtkFlowBox*) (gobj_()), (::GListModel*) (model_to_c), (Gtk::FlowBoxCreateWidgetFunc::cfunction_type) (create_widget_func_wrap_ ? &create_widget_func_wrap_->wrapper : nullptr), (void*) (create_widget_func_wrap_), (GLib::DestroyNotify::cfunction_type) (create_widget_func_wrap_ ? &create_widget_func_wrap_->destroy : nullptr));
}

// gboolean gtk_flow_box_get_activate_on_single_click (GtkFlowBox* box);
// gboolean gtk_flow_box_get_activate_on_single_click (::GtkFlowBox* box);
bool base::FlowBoxBase::get_activate_on_single_click () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFlowBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_flow_box_get_activate_on_single_click;
  auto _temp_ret = call_wrap_v ((::GtkFlowBox*) (gobj_()));
  return _temp_ret;
}

// GtkFlowBoxChild* gtk_flow_box_get_child_at_index (GtkFlowBox* box, gint idx);
// ::GtkFlowBoxChild* gtk_flow_box_get_child_at_index (::GtkFlowBox* box, gint idx);
Gtk::FlowBoxChild base::FlowBoxBase::get_child_at_index (gint idx) noexcept
{
  typedef ::GtkFlowBoxChild* (*call_wrap_t) (::GtkFlowBox* box, gint idx);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_flow_box_get_child_at_index;
  auto idx_to_c = idx;
  auto _temp_ret = call_wrap_v ((::GtkFlowBox*) (gobj_()), (gint) (idx_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkFlowBoxChild* gtk_flow_box_get_child_at_pos (GtkFlowBox* box, gint x, gint y);
// ::GtkFlowBoxChild* gtk_flow_box_get_child_at_pos (::GtkFlowBox* box, gint x, gint y);
Gtk::FlowBoxChild base::FlowBoxBase::get_child_at_pos (gint x, gint y) noexcept
{
  typedef ::GtkFlowBoxChild* (*call_wrap_t) (::GtkFlowBox* box, gint x, gint y);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_flow_box_get_child_at_pos;
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::GtkFlowBox*) (gobj_()), (gint) (x_to_c), (gint) (y_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// guint gtk_flow_box_get_column_spacing (GtkFlowBox* box);
// guint gtk_flow_box_get_column_spacing (::GtkFlowBox* box);
guint base::FlowBoxBase::get_column_spacing () noexcept
{
  typedef guint (*call_wrap_t) (::GtkFlowBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_flow_box_get_column_spacing;
  auto _temp_ret = call_wrap_v ((::GtkFlowBox*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_flow_box_get_homogeneous (GtkFlowBox* box);
// gboolean gtk_flow_box_get_homogeneous (::GtkFlowBox* box);
bool base::FlowBoxBase::get_homogeneous () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFlowBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_flow_box_get_homogeneous;
  auto _temp_ret = call_wrap_v ((::GtkFlowBox*) (gobj_()));
  return _temp_ret;
}

// guint gtk_flow_box_get_max_children_per_line (GtkFlowBox* box);
// guint gtk_flow_box_get_max_children_per_line (::GtkFlowBox* box);
guint base::FlowBoxBase::get_max_children_per_line () noexcept
{
  typedef guint (*call_wrap_t) (::GtkFlowBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_flow_box_get_max_children_per_line;
  auto _temp_ret = call_wrap_v ((::GtkFlowBox*) (gobj_()));
  return _temp_ret;
}

// guint gtk_flow_box_get_min_children_per_line (GtkFlowBox* box);
// guint gtk_flow_box_get_min_children_per_line (::GtkFlowBox* box);
guint base::FlowBoxBase::get_min_children_per_line () noexcept
{
  typedef guint (*call_wrap_t) (::GtkFlowBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_flow_box_get_min_children_per_line;
  auto _temp_ret = call_wrap_v ((::GtkFlowBox*) (gobj_()));
  return _temp_ret;
}

// guint gtk_flow_box_get_row_spacing (GtkFlowBox* box);
// guint gtk_flow_box_get_row_spacing (::GtkFlowBox* box);
guint base::FlowBoxBase::get_row_spacing () noexcept
{
  typedef guint (*call_wrap_t) (::GtkFlowBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_flow_box_get_row_spacing;
  auto _temp_ret = call_wrap_v ((::GtkFlowBox*) (gobj_()));
  return _temp_ret;
}

// GList* gtk_flow_box_get_selected_children (GtkFlowBox* box);
// ::GList* gtk_flow_box_get_selected_children (::GtkFlowBox* box);
std::vector<Gtk::FlowBoxChild> base::FlowBoxBase::get_selected_children () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GtkFlowBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_flow_box_get_selected_children;
  auto _temp_ret = call_wrap_v ((::GtkFlowBox*) (gobj_()));
  return gi::detail::wrap_list<Gtk::FlowBoxChild> (_temp_ret, gi::transfer_container);
}

// GtkSelectionMode gtk_flow_box_get_selection_mode (GtkFlowBox* box);
// ::GtkSelectionMode gtk_flow_box_get_selection_mode (::GtkFlowBox* box);
Gtk::SelectionMode base::FlowBoxBase::get_selection_mode () noexcept
{
  typedef ::GtkSelectionMode (*call_wrap_t) (::GtkFlowBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_flow_box_get_selection_mode;
  auto _temp_ret = call_wrap_v ((::GtkFlowBox*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void gtk_flow_box_insert (GtkFlowBox* box, GtkWidget* widget, gint position);
// void gtk_flow_box_insert (::GtkFlowBox* box, ::GtkWidget* widget, gint position);
void base::FlowBoxBase::insert (Gtk::Widget widget, gint position) noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBox* box, ::GtkWidget* widget, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_flow_box_insert;
  auto position_to_c = position;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkFlowBox*) (gobj_()), (::GtkWidget*) (widget_to_c), (gint) (position_to_c));
}

// void gtk_flow_box_invalidate_filter (GtkFlowBox* box);
// void gtk_flow_box_invalidate_filter (::GtkFlowBox* box);
void base::FlowBoxBase::invalidate_filter () noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_flow_box_invalidate_filter;
  call_wrap_v ((::GtkFlowBox*) (gobj_()));
}

// void gtk_flow_box_invalidate_sort (GtkFlowBox* box);
// void gtk_flow_box_invalidate_sort (::GtkFlowBox* box);
void base::FlowBoxBase::invalidate_sort () noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_flow_box_invalidate_sort;
  call_wrap_v ((::GtkFlowBox*) (gobj_()));
}

// void gtk_flow_box_select_all (GtkFlowBox* box);
// void gtk_flow_box_select_all (::GtkFlowBox* box);
void base::FlowBoxBase::select_all () noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_flow_box_select_all;
  call_wrap_v ((::GtkFlowBox*) (gobj_()));
}

// void gtk_flow_box_select_child (GtkFlowBox* box, GtkFlowBoxChild* child);
// void gtk_flow_box_select_child (::GtkFlowBox* box, ::GtkFlowBoxChild* child);
void base::FlowBoxBase::select_child (Gtk::FlowBoxChild child) noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBox* box, ::GtkFlowBoxChild* child);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_flow_box_select_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkFlowBox*) (gobj_()), (::GtkFlowBoxChild*) (child_to_c));
}

// void gtk_flow_box_selected_foreach (GtkFlowBox* box, GtkFlowBoxForeachFunc func, gpointer data);
// void gtk_flow_box_selected_foreach (::GtkFlowBox* box, Gtk::FlowBoxForeachFunc::cfunction_type func, void* data);
void base::FlowBoxBase::selected_foreach (Gtk::FlowBoxForeachFunc func) noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBox* box, Gtk::FlowBoxForeachFunc::cfunction_type func, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_flow_box_selected_foreach;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(func_wrap_)>::type> func_wrap__sp (func_wrap_);
  call_wrap_v ((::GtkFlowBox*) (gobj_()), (Gtk::FlowBoxForeachFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_));
}

// void gtk_flow_box_set_activate_on_single_click (GtkFlowBox* box, gboolean single);
// void gtk_flow_box_set_activate_on_single_click (::GtkFlowBox* box, gboolean single);
void base::FlowBoxBase::set_activate_on_single_click (gboolean single) noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBox* box, gboolean single);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_flow_box_set_activate_on_single_click;
  auto single_to_c = single;
  call_wrap_v ((::GtkFlowBox*) (gobj_()), (gboolean) (single_to_c));
}

// void gtk_flow_box_set_column_spacing (GtkFlowBox* box, guint spacing);
// void gtk_flow_box_set_column_spacing (::GtkFlowBox* box, guint spacing);
void base::FlowBoxBase::set_column_spacing (guint spacing) noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBox* box, guint spacing);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_flow_box_set_column_spacing;
  auto spacing_to_c = spacing;
  call_wrap_v ((::GtkFlowBox*) (gobj_()), (guint) (spacing_to_c));
}

// void gtk_flow_box_set_filter_func (GtkFlowBox* box, GtkFlowBoxFilterFunc filter_func, gpointer user_data, GDestroyNotify destroy);
// void gtk_flow_box_set_filter_func (::GtkFlowBox* box, Gtk::FlowBoxFilterFunc::cfunction_type filter_func, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
void base::FlowBoxBase::set_filter_func (Gtk::FlowBoxFilterFunc filter_func) noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBox* box, Gtk::FlowBoxFilterFunc::cfunction_type filter_func, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_flow_box_set_filter_func;
  auto filter_func_wrap_ = filter_func ? unwrap (std::move (filter_func), gi::scope_notified) : nullptr;
  call_wrap_v ((::GtkFlowBox*) (gobj_()), (Gtk::FlowBoxFilterFunc::cfunction_type) (filter_func_wrap_ ? &filter_func_wrap_->wrapper : nullptr), (void*) (filter_func_wrap_), (GLib::DestroyNotify::cfunction_type) (filter_func_wrap_ ? &filter_func_wrap_->destroy : nullptr));
}

// void gtk_flow_box_set_hadjustment (GtkFlowBox* box, GtkAdjustment* adjustment);
// void gtk_flow_box_set_hadjustment (::GtkFlowBox* box, ::GtkAdjustment* adjustment);
void base::FlowBoxBase::set_hadjustment (Gtk::Adjustment adjustment) noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBox* box, ::GtkAdjustment* adjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_flow_box_set_hadjustment;
  auto adjustment_to_c = gi::unwrap (adjustment, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkFlowBox*) (gobj_()), (::GtkAdjustment*) (adjustment_to_c));
}

// void gtk_flow_box_set_homogeneous (GtkFlowBox* box, gboolean homogeneous);
// void gtk_flow_box_set_homogeneous (::GtkFlowBox* box, gboolean homogeneous);
void base::FlowBoxBase::set_homogeneous (gboolean homogeneous) noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBox* box, gboolean homogeneous);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_flow_box_set_homogeneous;
  auto homogeneous_to_c = homogeneous;
  call_wrap_v ((::GtkFlowBox*) (gobj_()), (gboolean) (homogeneous_to_c));
}

// void gtk_flow_box_set_max_children_per_line (GtkFlowBox* box, guint n_children);
// void gtk_flow_box_set_max_children_per_line (::GtkFlowBox* box, guint n_children);
void base::FlowBoxBase::set_max_children_per_line (guint n_children) noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBox* box, guint n_children);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_flow_box_set_max_children_per_line;
  auto n_children_to_c = n_children;
  call_wrap_v ((::GtkFlowBox*) (gobj_()), (guint) (n_children_to_c));
}

// void gtk_flow_box_set_min_children_per_line (GtkFlowBox* box, guint n_children);
// void gtk_flow_box_set_min_children_per_line (::GtkFlowBox* box, guint n_children);
void base::FlowBoxBase::set_min_children_per_line (guint n_children) noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBox* box, guint n_children);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_flow_box_set_min_children_per_line;
  auto n_children_to_c = n_children;
  call_wrap_v ((::GtkFlowBox*) (gobj_()), (guint) (n_children_to_c));
}

// void gtk_flow_box_set_row_spacing (GtkFlowBox* box, guint spacing);
// void gtk_flow_box_set_row_spacing (::GtkFlowBox* box, guint spacing);
void base::FlowBoxBase::set_row_spacing (guint spacing) noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBox* box, guint spacing);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_flow_box_set_row_spacing;
  auto spacing_to_c = spacing;
  call_wrap_v ((::GtkFlowBox*) (gobj_()), (guint) (spacing_to_c));
}

// void gtk_flow_box_set_selection_mode (GtkFlowBox* box, GtkSelectionMode mode);
// void gtk_flow_box_set_selection_mode (::GtkFlowBox* box, ::GtkSelectionMode mode);
void base::FlowBoxBase::set_selection_mode (Gtk::SelectionMode mode) noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBox* box, ::GtkSelectionMode mode);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_flow_box_set_selection_mode;
  auto mode_to_c = gi::unwrap (mode);
  call_wrap_v ((::GtkFlowBox*) (gobj_()), (::GtkSelectionMode) (mode_to_c));
}

// void gtk_flow_box_set_sort_func (GtkFlowBox* box, GtkFlowBoxSortFunc sort_func, gpointer user_data, GDestroyNotify destroy);
// void gtk_flow_box_set_sort_func (::GtkFlowBox* box, Gtk::FlowBoxSortFunc::cfunction_type sort_func, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
void base::FlowBoxBase::set_sort_func (Gtk::FlowBoxSortFunc sort_func) noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBox* box, Gtk::FlowBoxSortFunc::cfunction_type sort_func, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_flow_box_set_sort_func;
  auto sort_func_wrap_ = sort_func ? unwrap (std::move (sort_func), gi::scope_notified) : nullptr;
  call_wrap_v ((::GtkFlowBox*) (gobj_()), (Gtk::FlowBoxSortFunc::cfunction_type) (sort_func_wrap_ ? &sort_func_wrap_->wrapper : nullptr), (void*) (sort_func_wrap_), (GLib::DestroyNotify::cfunction_type) (sort_func_wrap_ ? &sort_func_wrap_->destroy : nullptr));
}

// void gtk_flow_box_set_vadjustment (GtkFlowBox* box, GtkAdjustment* adjustment);
// void gtk_flow_box_set_vadjustment (::GtkFlowBox* box, ::GtkAdjustment* adjustment);
void base::FlowBoxBase::set_vadjustment (Gtk::Adjustment adjustment) noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBox* box, ::GtkAdjustment* adjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_flow_box_set_vadjustment;
  auto adjustment_to_c = gi::unwrap (adjustment, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkFlowBox*) (gobj_()), (::GtkAdjustment*) (adjustment_to_c));
}

// void gtk_flow_box_unselect_all (GtkFlowBox* box);
// void gtk_flow_box_unselect_all (::GtkFlowBox* box);
void base::FlowBoxBase::unselect_all () noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_flow_box_unselect_all;
  call_wrap_v ((::GtkFlowBox*) (gobj_()));
}

// void gtk_flow_box_unselect_child (GtkFlowBox* box, GtkFlowBoxChild* child);
// void gtk_flow_box_unselect_child (::GtkFlowBox* box, ::GtkFlowBoxChild* child);
void base::FlowBoxBase::unselect_child (Gtk::FlowBoxChild child) noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBox* box, ::GtkFlowBoxChild* child);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_flow_box_unselect_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkFlowBox*) (gobj_()), (::GtkFlowBoxChild*) (child_to_c));
}









} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/flowbox_extra_def_impl.hpp>)
#include <gtk/flowbox_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/flowbox_extra_impl.hpp>)
#include <gtk/flowbox_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void FlowBoxClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkFlowBoxClass *methods = (::GtkFlowBoxClass *) class_struct;
  (void) methods;

  methods->activate_cursor_child = (decltype (methods->activate_cursor_child)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::activate_cursor_child_>;
  methods->child_activated = (decltype (methods->child_activated)) detail::method_wrapper<self, void (*) (Gtk::FlowBoxChild child), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::child_activated_>;
  methods->move_cursor = (decltype (methods->move_cursor)) detail::method_wrapper<self, bool (*) (Gtk::MovementStep step, gint count), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::move_cursor_>;
  methods->select_all = (decltype (methods->select_all)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::select_all_>;
  methods->selected_children_changed = (decltype (methods->selected_children_changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::selected_children_changed_>;
  methods->toggle_cursor_child = (decltype (methods->toggle_cursor_child)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::toggle_cursor_child_>;
  methods->unselect_all = (decltype (methods->unselect_all)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::unselect_all_>;
}

// void FlowBox::activate_cursor_child (GtkFlowBox* box);
// void FlowBox::activate_cursor_child (::GtkFlowBox* box);
void FlowBoxClass::activate_cursor_child_ () noexcept
{
  if (!get_struct_()->activate_cursor_child) return ;
  typedef void (*call_wrap_t) (::GtkFlowBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->activate_cursor_child;
  call_wrap_v ((::GtkFlowBox*) (gobj_()));
}

// void FlowBox::child_activated (GtkFlowBox* box, GtkFlowBoxChild* child);
// void FlowBox::child_activated (::GtkFlowBox* box, ::GtkFlowBoxChild* child);
void FlowBoxClass::child_activated_ (Gtk::FlowBoxChild child) noexcept
{
  if (!get_struct_()->child_activated) return ;
  typedef void (*call_wrap_t) (::GtkFlowBox* box, ::GtkFlowBoxChild* child);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->child_activated;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkFlowBox*) (gobj_()), (::GtkFlowBoxChild*) (child_to_c));
}

// gboolean FlowBox::move_cursor (GtkFlowBox* box, GtkMovementStep step, gint count);
// gboolean FlowBox::move_cursor (::GtkFlowBox* box, ::GtkMovementStep step, gint count);
bool FlowBoxClass::move_cursor_ (Gtk::MovementStep step, gint count) noexcept
{
  if (!get_struct_()->move_cursor) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkFlowBox* box, ::GtkMovementStep step, gint count);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->move_cursor;
  auto count_to_c = count;
  auto step_to_c = gi::unwrap (step);
  auto _temp_ret = call_wrap_v ((::GtkFlowBox*) (gobj_()), (::GtkMovementStep) (step_to_c), (gint) (count_to_c));
  return _temp_ret;
}

// void FlowBox::select_all (GtkFlowBox* box);
// void FlowBox::select_all (::GtkFlowBox* box);
void FlowBoxClass::select_all_ () noexcept
{
  if (!get_struct_()->select_all) return ;
  typedef void (*call_wrap_t) (::GtkFlowBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->select_all;
  call_wrap_v ((::GtkFlowBox*) (gobj_()));
}

// void FlowBox::selected_children_changed (GtkFlowBox* box);
// void FlowBox::selected_children_changed (::GtkFlowBox* box);
void FlowBoxClass::selected_children_changed_ () noexcept
{
  if (!get_struct_()->selected_children_changed) return ;
  typedef void (*call_wrap_t) (::GtkFlowBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->selected_children_changed;
  call_wrap_v ((::GtkFlowBox*) (gobj_()));
}

// void FlowBox::toggle_cursor_child (GtkFlowBox* box);
// void FlowBox::toggle_cursor_child (::GtkFlowBox* box);
void FlowBoxClass::toggle_cursor_child_ () noexcept
{
  if (!get_struct_()->toggle_cursor_child) return ;
  typedef void (*call_wrap_t) (::GtkFlowBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->toggle_cursor_child;
  call_wrap_v ((::GtkFlowBox*) (gobj_()));
}

// void FlowBox::unselect_all (GtkFlowBox* box);
// void FlowBox::unselect_all (::GtkFlowBox* box);
void FlowBoxClass::unselect_all_ () noexcept
{
  if (!get_struct_()->unselect_all) return ;
  typedef void (*call_wrap_t) (::GtkFlowBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->unselect_all;
  call_wrap_v ((::GtkFlowBox*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
