// AUTO-GENERATED

#ifndef _GI_GTK_LISTBOX_IMPL_HPP_
#define _GI_GTK_LISTBOX_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_list_box_new ();
// ::GtkListBox* gtk_list_box_new ();
Gtk::ListBox base::ListBoxBase::new_ () noexcept
{
  typedef ::GtkListBox* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_box_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_list_box_bind_model (GtkListBox* box, GListModel* model, GtkListBoxCreateWidgetFunc create_widget_func, gpointer user_data, GDestroyNotify user_data_free_func);
// void gtk_list_box_bind_model (::GtkListBox* box, ::GListModel* model, Gtk::ListBoxCreateWidgetFunc::cfunction_type create_widget_func, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func);
void base::ListBoxBase::bind_model (Gio::ListModel model, Gtk::ListBoxCreateWidgetFunc create_widget_func) noexcept
{
  typedef void (*call_wrap_t) (::GtkListBox* box, ::GListModel* model, Gtk::ListBoxCreateWidgetFunc::cfunction_type create_widget_func, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_box_bind_model;
  auto create_widget_func_wrap_ = create_widget_func ? unwrap (std::move (create_widget_func), gi::scope_notified) : nullptr;
  auto model_to_c = gi::unwrap (model, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkListBox*) (gobj_()), (::GListModel*) (model_to_c), (Gtk::ListBoxCreateWidgetFunc::cfunction_type) (create_widget_func_wrap_ ? &create_widget_func_wrap_->wrapper : nullptr), (void*) (create_widget_func_wrap_), (GLib::DestroyNotify::cfunction_type) (create_widget_func_wrap_ ? &create_widget_func_wrap_->destroy : nullptr));
}
void base::ListBoxBase::bind_model (Gtk::ListBoxCreateWidgetFunc create_widget_func) noexcept
{
  typedef void (*call_wrap_t) (::GtkListBox* box, ::GListModel* model, Gtk::ListBoxCreateWidgetFunc::cfunction_type create_widget_func, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_box_bind_model;
  auto create_widget_func_wrap_ = create_widget_func ? unwrap (std::move (create_widget_func), gi::scope_notified) : nullptr;
  auto model_to_c = nullptr;
  call_wrap_v ((::GtkListBox*) (gobj_()), (::GListModel*) (model_to_c), (Gtk::ListBoxCreateWidgetFunc::cfunction_type) (create_widget_func_wrap_ ? &create_widget_func_wrap_->wrapper : nullptr), (void*) (create_widget_func_wrap_), (GLib::DestroyNotify::cfunction_type) (create_widget_func_wrap_ ? &create_widget_func_wrap_->destroy : nullptr));
}

// void gtk_list_box_drag_highlight_row (GtkListBox* box, GtkListBoxRow* row);
// void gtk_list_box_drag_highlight_row (::GtkListBox* box, ::GtkListBoxRow* row);
void base::ListBoxBase::drag_highlight_row (Gtk::ListBoxRow row) noexcept
{
  typedef void (*call_wrap_t) (::GtkListBox* box, ::GtkListBoxRow* row);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_box_drag_highlight_row;
  auto row_to_c = gi::unwrap (row, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkListBox*) (gobj_()), (::GtkListBoxRow*) (row_to_c));
}

// void gtk_list_box_drag_unhighlight_row (GtkListBox* box);
// void gtk_list_box_drag_unhighlight_row (::GtkListBox* box);
void base::ListBoxBase::drag_unhighlight_row () noexcept
{
  typedef void (*call_wrap_t) (::GtkListBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_box_drag_unhighlight_row;
  call_wrap_v ((::GtkListBox*) (gobj_()));
}

// gboolean gtk_list_box_get_activate_on_single_click (GtkListBox* box);
// gboolean gtk_list_box_get_activate_on_single_click (::GtkListBox* box);
bool base::ListBoxBase::get_activate_on_single_click () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkListBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_box_get_activate_on_single_click;
  auto _temp_ret = call_wrap_v ((::GtkListBox*) (gobj_()));
  return _temp_ret;
}

// GtkAdjustment* gtk_list_box_get_adjustment (GtkListBox* box);
// ::GtkAdjustment* gtk_list_box_get_adjustment (::GtkListBox* box);
Gtk::Adjustment base::ListBoxBase::get_adjustment () noexcept
{
  typedef ::GtkAdjustment* (*call_wrap_t) (::GtkListBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_box_get_adjustment;
  auto _temp_ret = call_wrap_v ((::GtkListBox*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkListBoxRow* gtk_list_box_get_row_at_index (GtkListBox* box, gint index_);
// ::GtkListBoxRow* gtk_list_box_get_row_at_index (::GtkListBox* box, gint index_);
Gtk::ListBoxRow base::ListBoxBase::get_row_at_index (gint index_) noexcept
{
  typedef ::GtkListBoxRow* (*call_wrap_t) (::GtkListBox* box, gint index_);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_box_get_row_at_index;
  auto index__to_c = index_;
  auto _temp_ret = call_wrap_v ((::GtkListBox*) (gobj_()), (gint) (index__to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkListBoxRow* gtk_list_box_get_row_at_y (GtkListBox* box, gint y);
// ::GtkListBoxRow* gtk_list_box_get_row_at_y (::GtkListBox* box, gint y);
Gtk::ListBoxRow base::ListBoxBase::get_row_at_y (gint y) noexcept
{
  typedef ::GtkListBoxRow* (*call_wrap_t) (::GtkListBox* box, gint y);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_box_get_row_at_y;
  auto y_to_c = y;
  auto _temp_ret = call_wrap_v ((::GtkListBox*) (gobj_()), (gint) (y_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkListBoxRow* gtk_list_box_get_selected_row (GtkListBox* box);
// ::GtkListBoxRow* gtk_list_box_get_selected_row (::GtkListBox* box);
Gtk::ListBoxRow base::ListBoxBase::get_selected_row () noexcept
{
  typedef ::GtkListBoxRow* (*call_wrap_t) (::GtkListBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_box_get_selected_row;
  auto _temp_ret = call_wrap_v ((::GtkListBox*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GList* gtk_list_box_get_selected_rows (GtkListBox* box);
// ::GList* gtk_list_box_get_selected_rows (::GtkListBox* box);
std::vector<Gtk::ListBoxRow> base::ListBoxBase::get_selected_rows () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GtkListBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_box_get_selected_rows;
  auto _temp_ret = call_wrap_v ((::GtkListBox*) (gobj_()));
  return gi::detail::wrap_list<Gtk::ListBoxRow> (_temp_ret, gi::transfer_container);
}

// GtkSelectionMode gtk_list_box_get_selection_mode (GtkListBox* box);
// ::GtkSelectionMode gtk_list_box_get_selection_mode (::GtkListBox* box);
Gtk::SelectionMode base::ListBoxBase::get_selection_mode () noexcept
{
  typedef ::GtkSelectionMode (*call_wrap_t) (::GtkListBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_box_get_selection_mode;
  auto _temp_ret = call_wrap_v ((::GtkListBox*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void gtk_list_box_insert (GtkListBox* box, GtkWidget* child, gint position);
// void gtk_list_box_insert (::GtkListBox* box, ::GtkWidget* child, gint position);
void base::ListBoxBase::insert (Gtk::Widget child, gint position) noexcept
{
  typedef void (*call_wrap_t) (::GtkListBox* box, ::GtkWidget* child, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_box_insert;
  auto position_to_c = position;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkListBox*) (gobj_()), (::GtkWidget*) (child_to_c), (gint) (position_to_c));
}

// void gtk_list_box_invalidate_filter (GtkListBox* box);
// void gtk_list_box_invalidate_filter (::GtkListBox* box);
void base::ListBoxBase::invalidate_filter () noexcept
{
  typedef void (*call_wrap_t) (::GtkListBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_box_invalidate_filter;
  call_wrap_v ((::GtkListBox*) (gobj_()));
}

// void gtk_list_box_invalidate_headers (GtkListBox* box);
// void gtk_list_box_invalidate_headers (::GtkListBox* box);
void base::ListBoxBase::invalidate_headers () noexcept
{
  typedef void (*call_wrap_t) (::GtkListBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_box_invalidate_headers;
  call_wrap_v ((::GtkListBox*) (gobj_()));
}

// void gtk_list_box_invalidate_sort (GtkListBox* box);
// void gtk_list_box_invalidate_sort (::GtkListBox* box);
void base::ListBoxBase::invalidate_sort () noexcept
{
  typedef void (*call_wrap_t) (::GtkListBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_box_invalidate_sort;
  call_wrap_v ((::GtkListBox*) (gobj_()));
}

// void gtk_list_box_prepend (GtkListBox* box, GtkWidget* child);
// void gtk_list_box_prepend (::GtkListBox* box, ::GtkWidget* child);
void base::ListBoxBase::prepend (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkListBox* box, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_box_prepend;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkListBox*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void gtk_list_box_select_all (GtkListBox* box);
// void gtk_list_box_select_all (::GtkListBox* box);
void base::ListBoxBase::select_all () noexcept
{
  typedef void (*call_wrap_t) (::GtkListBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_box_select_all;
  call_wrap_v ((::GtkListBox*) (gobj_()));
}

// void gtk_list_box_select_row (GtkListBox* box, GtkListBoxRow* row);
// void gtk_list_box_select_row (::GtkListBox* box, ::GtkListBoxRow* row);
void base::ListBoxBase::select_row (Gtk::ListBoxRow row) noexcept
{
  typedef void (*call_wrap_t) (::GtkListBox* box, ::GtkListBoxRow* row);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_box_select_row;
  auto row_to_c = gi::unwrap (row, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkListBox*) (gobj_()), (::GtkListBoxRow*) (row_to_c));
}
void base::ListBoxBase::select_row () noexcept
{
  typedef void (*call_wrap_t) (::GtkListBox* box, ::GtkListBoxRow* row);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_box_select_row;
  auto row_to_c = nullptr;
  call_wrap_v ((::GtkListBox*) (gobj_()), (::GtkListBoxRow*) (row_to_c));
}

// void gtk_list_box_selected_foreach (GtkListBox* box, GtkListBoxForeachFunc func, gpointer data);
// void gtk_list_box_selected_foreach (::GtkListBox* box, Gtk::ListBoxForeachFunc::cfunction_type func, void* data);
void base::ListBoxBase::selected_foreach (Gtk::ListBoxForeachFunc func) noexcept
{
  typedef void (*call_wrap_t) (::GtkListBox* box, Gtk::ListBoxForeachFunc::cfunction_type func, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_box_selected_foreach;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(func_wrap_)>::type> func_wrap__sp (func_wrap_);
  call_wrap_v ((::GtkListBox*) (gobj_()), (Gtk::ListBoxForeachFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_));
}

// void gtk_list_box_set_activate_on_single_click (GtkListBox* box, gboolean single);
// void gtk_list_box_set_activate_on_single_click (::GtkListBox* box, gboolean single);
void base::ListBoxBase::set_activate_on_single_click (gboolean single) noexcept
{
  typedef void (*call_wrap_t) (::GtkListBox* box, gboolean single);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_box_set_activate_on_single_click;
  auto single_to_c = single;
  call_wrap_v ((::GtkListBox*) (gobj_()), (gboolean) (single_to_c));
}

// void gtk_list_box_set_adjustment (GtkListBox* box, GtkAdjustment* adjustment);
// void gtk_list_box_set_adjustment (::GtkListBox* box, ::GtkAdjustment* adjustment);
void base::ListBoxBase::set_adjustment (Gtk::Adjustment adjustment) noexcept
{
  typedef void (*call_wrap_t) (::GtkListBox* box, ::GtkAdjustment* adjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_box_set_adjustment;
  auto adjustment_to_c = gi::unwrap (adjustment, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkListBox*) (gobj_()), (::GtkAdjustment*) (adjustment_to_c));
}
void base::ListBoxBase::set_adjustment () noexcept
{
  typedef void (*call_wrap_t) (::GtkListBox* box, ::GtkAdjustment* adjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_box_set_adjustment;
  auto adjustment_to_c = nullptr;
  call_wrap_v ((::GtkListBox*) (gobj_()), (::GtkAdjustment*) (adjustment_to_c));
}

// void gtk_list_box_set_filter_func (GtkListBox* box, GtkListBoxFilterFunc filter_func, gpointer user_data, GDestroyNotify destroy);
// void gtk_list_box_set_filter_func (::GtkListBox* box, Gtk::ListBoxFilterFunc::cfunction_type filter_func, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
void base::ListBoxBase::set_filter_func (Gtk::ListBoxFilterFunc filter_func) noexcept
{
  typedef void (*call_wrap_t) (::GtkListBox* box, Gtk::ListBoxFilterFunc::cfunction_type filter_func, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_box_set_filter_func;
  auto filter_func_wrap_ = filter_func ? unwrap (std::move (filter_func), gi::scope_notified) : nullptr;
  call_wrap_v ((::GtkListBox*) (gobj_()), (Gtk::ListBoxFilterFunc::cfunction_type) (filter_func_wrap_ ? &filter_func_wrap_->wrapper : nullptr), (void*) (filter_func_wrap_), (GLib::DestroyNotify::cfunction_type) (filter_func_wrap_ ? &filter_func_wrap_->destroy : nullptr));
}

// void gtk_list_box_set_header_func (GtkListBox* box, GtkListBoxUpdateHeaderFunc update_header, gpointer user_data, GDestroyNotify destroy);
// void gtk_list_box_set_header_func (::GtkListBox* box, Gtk::ListBoxUpdateHeaderFunc::cfunction_type update_header, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
void base::ListBoxBase::set_header_func (Gtk::ListBoxUpdateHeaderFunc update_header) noexcept
{
  typedef void (*call_wrap_t) (::GtkListBox* box, Gtk::ListBoxUpdateHeaderFunc::cfunction_type update_header, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_box_set_header_func;
  auto update_header_wrap_ = update_header ? unwrap (std::move (update_header), gi::scope_notified) : nullptr;
  call_wrap_v ((::GtkListBox*) (gobj_()), (Gtk::ListBoxUpdateHeaderFunc::cfunction_type) (update_header_wrap_ ? &update_header_wrap_->wrapper : nullptr), (void*) (update_header_wrap_), (GLib::DestroyNotify::cfunction_type) (update_header_wrap_ ? &update_header_wrap_->destroy : nullptr));
}

// void gtk_list_box_set_placeholder (GtkListBox* box, GtkWidget* placeholder);
// void gtk_list_box_set_placeholder (::GtkListBox* box, ::GtkWidget* placeholder);
void base::ListBoxBase::set_placeholder (Gtk::Widget placeholder) noexcept
{
  typedef void (*call_wrap_t) (::GtkListBox* box, ::GtkWidget* placeholder);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_box_set_placeholder;
  auto placeholder_to_c = gi::unwrap (placeholder, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkListBox*) (gobj_()), (::GtkWidget*) (placeholder_to_c));
}
void base::ListBoxBase::set_placeholder () noexcept
{
  typedef void (*call_wrap_t) (::GtkListBox* box, ::GtkWidget* placeholder);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_box_set_placeholder;
  auto placeholder_to_c = nullptr;
  call_wrap_v ((::GtkListBox*) (gobj_()), (::GtkWidget*) (placeholder_to_c));
}

// void gtk_list_box_set_selection_mode (GtkListBox* box, GtkSelectionMode mode);
// void gtk_list_box_set_selection_mode (::GtkListBox* box, ::GtkSelectionMode mode);
void base::ListBoxBase::set_selection_mode (Gtk::SelectionMode mode) noexcept
{
  typedef void (*call_wrap_t) (::GtkListBox* box, ::GtkSelectionMode mode);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_box_set_selection_mode;
  auto mode_to_c = gi::unwrap (mode);
  call_wrap_v ((::GtkListBox*) (gobj_()), (::GtkSelectionMode) (mode_to_c));
}

// void gtk_list_box_set_sort_func (GtkListBox* box, GtkListBoxSortFunc sort_func, gpointer user_data, GDestroyNotify destroy);
// void gtk_list_box_set_sort_func (::GtkListBox* box, Gtk::ListBoxSortFunc::cfunction_type sort_func, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
void base::ListBoxBase::set_sort_func (Gtk::ListBoxSortFunc sort_func) noexcept
{
  typedef void (*call_wrap_t) (::GtkListBox* box, Gtk::ListBoxSortFunc::cfunction_type sort_func, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_box_set_sort_func;
  auto sort_func_wrap_ = sort_func ? unwrap (std::move (sort_func), gi::scope_notified) : nullptr;
  call_wrap_v ((::GtkListBox*) (gobj_()), (Gtk::ListBoxSortFunc::cfunction_type) (sort_func_wrap_ ? &sort_func_wrap_->wrapper : nullptr), (void*) (sort_func_wrap_), (GLib::DestroyNotify::cfunction_type) (sort_func_wrap_ ? &sort_func_wrap_->destroy : nullptr));
}

// void gtk_list_box_unselect_all (GtkListBox* box);
// void gtk_list_box_unselect_all (::GtkListBox* box);
void base::ListBoxBase::unselect_all () noexcept
{
  typedef void (*call_wrap_t) (::GtkListBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_box_unselect_all;
  call_wrap_v ((::GtkListBox*) (gobj_()));
}

// void gtk_list_box_unselect_row (GtkListBox* box, GtkListBoxRow* row);
// void gtk_list_box_unselect_row (::GtkListBox* box, ::GtkListBoxRow* row);
void base::ListBoxBase::unselect_row (Gtk::ListBoxRow row) noexcept
{
  typedef void (*call_wrap_t) (::GtkListBox* box, ::GtkListBoxRow* row);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_box_unselect_row;
  auto row_to_c = gi::unwrap (row, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkListBox*) (gobj_()), (::GtkListBoxRow*) (row_to_c));
}










} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/listbox_extra_def_impl.hpp>)
#include <gtk/listbox_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/listbox_extra_impl.hpp>)
#include <gtk/listbox_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ListBoxClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkListBoxClass *methods = (::GtkListBoxClass *) class_struct;
  (void) methods;

  methods->activate_cursor_row = (decltype (methods->activate_cursor_row)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::activate_cursor_row_>;
  methods->move_cursor = (decltype (methods->move_cursor)) detail::method_wrapper<self, void (*) (Gtk::MovementStep step, gint count), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::move_cursor_>;
  methods->row_activated = (decltype (methods->row_activated)) detail::method_wrapper<self, void (*) (Gtk::ListBoxRow row), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::row_activated_>;
  methods->row_selected = (decltype (methods->row_selected)) detail::method_wrapper<self, void (*) (Gtk::ListBoxRow row), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::row_selected_>;
  methods->select_all = (decltype (methods->select_all)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::select_all_>;
  methods->selected_rows_changed = (decltype (methods->selected_rows_changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::selected_rows_changed_>;
  methods->toggle_cursor_row = (decltype (methods->toggle_cursor_row)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::toggle_cursor_row_>;
  methods->unselect_all = (decltype (methods->unselect_all)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::unselect_all_>;
}

// void ListBox::activate_cursor_row (GtkListBox* box);
// void ListBox::activate_cursor_row (::GtkListBox* box);
void ListBoxClass::activate_cursor_row_ () noexcept
{
  if (!get_struct_()->activate_cursor_row) return ;
  typedef void (*call_wrap_t) (::GtkListBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->activate_cursor_row;
  call_wrap_v ((::GtkListBox*) (gobj_()));
}

// void ListBox::move_cursor (GtkListBox* box, GtkMovementStep step, gint count);
// void ListBox::move_cursor (::GtkListBox* box, ::GtkMovementStep step, gint count);
void ListBoxClass::move_cursor_ (Gtk::MovementStep step, gint count) noexcept
{
  if (!get_struct_()->move_cursor) return ;
  typedef void (*call_wrap_t) (::GtkListBox* box, ::GtkMovementStep step, gint count);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->move_cursor;
  auto count_to_c = count;
  auto step_to_c = gi::unwrap (step);
  call_wrap_v ((::GtkListBox*) (gobj_()), (::GtkMovementStep) (step_to_c), (gint) (count_to_c));
}

// void ListBox::row_activated (GtkListBox* box, GtkListBoxRow* row);
// void ListBox::row_activated (::GtkListBox* box, ::GtkListBoxRow* row);
void ListBoxClass::row_activated_ (Gtk::ListBoxRow row) noexcept
{
  if (!get_struct_()->row_activated) return ;
  typedef void (*call_wrap_t) (::GtkListBox* box, ::GtkListBoxRow* row);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->row_activated;
  auto row_to_c = gi::unwrap (row, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkListBox*) (gobj_()), (::GtkListBoxRow*) (row_to_c));
}

// void ListBox::row_selected (GtkListBox* box, GtkListBoxRow* row);
// void ListBox::row_selected (::GtkListBox* box, ::GtkListBoxRow* row);
void ListBoxClass::row_selected_ (Gtk::ListBoxRow row) noexcept
{
  if (!get_struct_()->row_selected) return ;
  typedef void (*call_wrap_t) (::GtkListBox* box, ::GtkListBoxRow* row);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->row_selected;
  auto row_to_c = gi::unwrap (row, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkListBox*) (gobj_()), (::GtkListBoxRow*) (row_to_c));
}

// void ListBox::select_all (GtkListBox* box);
// void ListBox::select_all (::GtkListBox* box);
void ListBoxClass::select_all_ () noexcept
{
  if (!get_struct_()->select_all) return ;
  typedef void (*call_wrap_t) (::GtkListBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->select_all;
  call_wrap_v ((::GtkListBox*) (gobj_()));
}

// void ListBox::selected_rows_changed (GtkListBox* box);
// void ListBox::selected_rows_changed (::GtkListBox* box);
void ListBoxClass::selected_rows_changed_ () noexcept
{
  if (!get_struct_()->selected_rows_changed) return ;
  typedef void (*call_wrap_t) (::GtkListBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->selected_rows_changed;
  call_wrap_v ((::GtkListBox*) (gobj_()));
}

// void ListBox::toggle_cursor_row (GtkListBox* box);
// void ListBox::toggle_cursor_row (::GtkListBox* box);
void ListBoxClass::toggle_cursor_row_ () noexcept
{
  if (!get_struct_()->toggle_cursor_row) return ;
  typedef void (*call_wrap_t) (::GtkListBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->toggle_cursor_row;
  call_wrap_v ((::GtkListBox*) (gobj_()));
}

// void ListBox::unselect_all (GtkListBox* box);
// void ListBox::unselect_all (::GtkListBox* box);
void ListBoxClass::unselect_all_ () noexcept
{
  if (!get_struct_()->unselect_all) return ;
  typedef void (*call_wrap_t) (::GtkListBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->unselect_all;
  call_wrap_v ((::GtkListBox*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
