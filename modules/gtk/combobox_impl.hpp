// AUTO-GENERATED

#ifndef _GI_GTK_COMBOBOX_IMPL_HPP_
#define _GI_GTK_COMBOBOX_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::CellEditable ComboBoxBase::interface_ (gi::interface_tag<Gtk::CellEditable>)
{ return gi::wrap ((Gtk::CellEditable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

ComboBoxBase::operator Gtk::CellEditable ()
{ return interface_ (gi::interface_tag<Gtk::CellEditable>()); }

Gtk::CellLayout ComboBoxBase::interface_ (gi::interface_tag<Gtk::CellLayout>)
{ return gi::wrap ((Gtk::CellLayout::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

ComboBoxBase::operator Gtk::CellLayout ()
{ return interface_ (gi::interface_tag<Gtk::CellLayout>()); }

// GtkWidget* gtk_combo_box_new ();
// ::GtkComboBox* gtk_combo_box_new ();
Gtk::ComboBox base::ComboBoxBase::new_ () noexcept
{
  typedef ::GtkComboBox* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_combo_box_new_with_area (GtkCellArea* area);
// ::GtkComboBox* gtk_combo_box_new_with_area (::GtkCellArea* area);
Gtk::ComboBox base::ComboBoxBase::new_with_area (Gtk::CellArea area) noexcept
{
  typedef ::GtkComboBox* (*call_wrap_t) (::GtkCellArea* area);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_new_with_area;
  auto area_to_c = gi::unwrap (area, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (area_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_combo_box_new_with_area_and_entry (GtkCellArea* area);
// ::GtkComboBox* gtk_combo_box_new_with_area_and_entry (::GtkCellArea* area);
Gtk::ComboBox base::ComboBoxBase::new_with_area_and_entry (Gtk::CellArea area) noexcept
{
  typedef ::GtkComboBox* (*call_wrap_t) (::GtkCellArea* area);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_new_with_area_and_entry;
  auto area_to_c = gi::unwrap (area, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (area_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_combo_box_new_with_entry ();
// ::GtkComboBox* gtk_combo_box_new_with_entry ();
Gtk::ComboBox base::ComboBoxBase::new_with_entry () noexcept
{
  typedef ::GtkComboBox* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_new_with_entry;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_combo_box_new_with_model (GtkTreeModel* model);
// ::GtkComboBox* gtk_combo_box_new_with_model (::GtkTreeModel* model);
Gtk::ComboBox base::ComboBoxBase::new_with_model (Gtk::TreeModel model) noexcept
{
  typedef ::GtkComboBox* (*call_wrap_t) (::GtkTreeModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_new_with_model;
  auto model_to_c = gi::unwrap (model, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (model_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_combo_box_new_with_model_and_entry (GtkTreeModel* model);
// ::GtkComboBox* gtk_combo_box_new_with_model_and_entry (::GtkTreeModel* model);
Gtk::ComboBox base::ComboBoxBase::new_with_model_and_entry (Gtk::TreeModel model) noexcept
{
  typedef ::GtkComboBox* (*call_wrap_t) (::GtkTreeModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_new_with_model_and_entry;
  auto model_to_c = gi::unwrap (model, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (model_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gint gtk_combo_box_get_active (GtkComboBox* combo_box);
// gint gtk_combo_box_get_active (::GtkComboBox* combo_box);
gint base::ComboBoxBase::get_active () noexcept
{
  typedef gint (*call_wrap_t) (::GtkComboBox* combo_box);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_get_active;
  auto _temp_ret = call_wrap_v ((::GtkComboBox*) (gobj_()));
  return _temp_ret;
}

// const gchar* gtk_combo_box_get_active_id (GtkComboBox* combo_box);
// const char* gtk_combo_box_get_active_id (::GtkComboBox* combo_box);
std::string base::ComboBoxBase::get_active_id () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkComboBox* combo_box);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_get_active_id;
  auto _temp_ret = call_wrap_v ((::GtkComboBox*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_combo_box_get_active_iter (GtkComboBox* combo_box, GtkTreeIter* iter);
// gboolean gtk_combo_box_get_active_iter (::GtkComboBox* combo_box, ::GtkTreeIter* iter);
bool base::ComboBoxBase::get_active_iter (Gtk::TreeIter & iter) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkComboBox* combo_box, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_get_active_iter;
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  auto _temp_ret = call_wrap_v ((::GtkComboBox*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c));
  iter = gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Gtk::TreeIter> base::ComboBoxBase::get_active_iter () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkComboBox* combo_box, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_get_active_iter;
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  auto _temp_ret = call_wrap_v ((::GtkComboBox*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c));
  return std::make_tuple (_temp_ret, gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out));
}

// gboolean gtk_combo_box_get_add_tearoffs (GtkComboBox* combo_box);
// gboolean gtk_combo_box_get_add_tearoffs (::GtkComboBox* combo_box);
// IGNORE; deprecated

// GtkSensitivityType gtk_combo_box_get_button_sensitivity (GtkComboBox* combo_box);
// ::GtkSensitivityType gtk_combo_box_get_button_sensitivity (::GtkComboBox* combo_box);
Gtk::SensitivityType base::ComboBoxBase::get_button_sensitivity () noexcept
{
  typedef ::GtkSensitivityType (*call_wrap_t) (::GtkComboBox* combo_box);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_get_button_sensitivity;
  auto _temp_ret = call_wrap_v ((::GtkComboBox*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gint gtk_combo_box_get_column_span_column (GtkComboBox* combo_box);
// gint gtk_combo_box_get_column_span_column (::GtkComboBox* combo_box);
gint base::ComboBoxBase::get_column_span_column () noexcept
{
  typedef gint (*call_wrap_t) (::GtkComboBox* combo_box);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_get_column_span_column;
  auto _temp_ret = call_wrap_v ((::GtkComboBox*) (gobj_()));
  return _temp_ret;
}

// gint gtk_combo_box_get_entry_text_column (GtkComboBox* combo_box);
// gint gtk_combo_box_get_entry_text_column (::GtkComboBox* combo_box);
gint base::ComboBoxBase::get_entry_text_column () noexcept
{
  typedef gint (*call_wrap_t) (::GtkComboBox* combo_box);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_get_entry_text_column;
  auto _temp_ret = call_wrap_v ((::GtkComboBox*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_combo_box_get_focus_on_click (GtkComboBox* combo);
// gboolean gtk_combo_box_get_focus_on_click (::GtkComboBox* combo);
// IGNORE; deprecated

// gboolean gtk_combo_box_get_has_entry (GtkComboBox* combo_box);
// gboolean gtk_combo_box_get_has_entry (::GtkComboBox* combo_box);
bool base::ComboBoxBase::get_has_entry () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkComboBox* combo_box);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_get_has_entry;
  auto _temp_ret = call_wrap_v ((::GtkComboBox*) (gobj_()));
  return _temp_ret;
}

// gint gtk_combo_box_get_id_column (GtkComboBox* combo_box);
// gint gtk_combo_box_get_id_column (::GtkComboBox* combo_box);
gint base::ComboBoxBase::get_id_column () noexcept
{
  typedef gint (*call_wrap_t) (::GtkComboBox* combo_box);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_get_id_column;
  auto _temp_ret = call_wrap_v ((::GtkComboBox*) (gobj_()));
  return _temp_ret;
}

// GtkTreeModel* gtk_combo_box_get_model (GtkComboBox* combo_box);
// ::GtkTreeModel* gtk_combo_box_get_model (::GtkComboBox* combo_box);
Gtk::TreeModel base::ComboBoxBase::get_model () noexcept
{
  typedef ::GtkTreeModel* (*call_wrap_t) (::GtkComboBox* combo_box);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_get_model;
  auto _temp_ret = call_wrap_v ((::GtkComboBox*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// AtkObject* gtk_combo_box_get_popup_accessible (GtkComboBox* combo_box);
// ::AtkObject* gtk_combo_box_get_popup_accessible (::GtkComboBox* combo_box);
Atk::Object base::ComboBoxBase::get_popup_accessible () noexcept
{
  typedef ::AtkObject* (*call_wrap_t) (::GtkComboBox* combo_box);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_get_popup_accessible;
  auto _temp_ret = call_wrap_v ((::GtkComboBox*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_combo_box_get_popup_fixed_width (GtkComboBox* combo_box);
// gboolean gtk_combo_box_get_popup_fixed_width (::GtkComboBox* combo_box);
bool base::ComboBoxBase::get_popup_fixed_width () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkComboBox* combo_box);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_get_popup_fixed_width;
  auto _temp_ret = call_wrap_v ((::GtkComboBox*) (gobj_()));
  return _temp_ret;
}

// FAILURE on gtk_combo_box_get_row_separator_func; No such node (<xmlattr>.transfer-ownership)
// gint gtk_combo_box_get_row_span_column (GtkComboBox* combo_box);
// gint gtk_combo_box_get_row_span_column (::GtkComboBox* combo_box);
gint base::ComboBoxBase::get_row_span_column () noexcept
{
  typedef gint (*call_wrap_t) (::GtkComboBox* combo_box);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_get_row_span_column;
  auto _temp_ret = call_wrap_v ((::GtkComboBox*) (gobj_()));
  return _temp_ret;
}

// const gchar* gtk_combo_box_get_title (GtkComboBox* combo_box);
// const char* gtk_combo_box_get_title (::GtkComboBox* combo_box);
// IGNORE; deprecated

// gint gtk_combo_box_get_wrap_width (GtkComboBox* combo_box);
// gint gtk_combo_box_get_wrap_width (::GtkComboBox* combo_box);
gint base::ComboBoxBase::get_wrap_width () noexcept
{
  typedef gint (*call_wrap_t) (::GtkComboBox* combo_box);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_get_wrap_width;
  auto _temp_ret = call_wrap_v ((::GtkComboBox*) (gobj_()));
  return _temp_ret;
}

// void gtk_combo_box_popdown (GtkComboBox* combo_box);
// void gtk_combo_box_popdown (::GtkComboBox* combo_box);
void base::ComboBoxBase::popdown () noexcept
{
  typedef void (*call_wrap_t) (::GtkComboBox* combo_box);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_popdown;
  call_wrap_v ((::GtkComboBox*) (gobj_()));
}

// void gtk_combo_box_popup (GtkComboBox* combo_box);
// void gtk_combo_box_popup (::GtkComboBox* combo_box);
void base::ComboBoxBase::popup () noexcept
{
  typedef void (*call_wrap_t) (::GtkComboBox* combo_box);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_popup;
  call_wrap_v ((::GtkComboBox*) (gobj_()));
}

// void gtk_combo_box_popup_for_device (GtkComboBox* combo_box, GdkDevice* device);
// void gtk_combo_box_popup_for_device (::GtkComboBox* combo_box, ::GdkDevice* device);
void base::ComboBoxBase::popup_for_device (Gdk::Device device) noexcept
{
  typedef void (*call_wrap_t) (::GtkComboBox* combo_box, ::GdkDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_popup_for_device;
  auto device_to_c = gi::unwrap (device, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkComboBox*) (gobj_()), (::GdkDevice*) (device_to_c));
}

// void gtk_combo_box_set_active (GtkComboBox* combo_box, gint index_);
// void gtk_combo_box_set_active (::GtkComboBox* combo_box, gint index_);
void base::ComboBoxBase::set_active (gint index_) noexcept
{
  typedef void (*call_wrap_t) (::GtkComboBox* combo_box, gint index_);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_set_active;
  auto index__to_c = index_;
  call_wrap_v ((::GtkComboBox*) (gobj_()), (gint) (index__to_c));
}

// gboolean gtk_combo_box_set_active_id (GtkComboBox* combo_box, const gchar* active_id);
// gboolean gtk_combo_box_set_active_id (::GtkComboBox* combo_box, const char* active_id);
bool base::ComboBoxBase::set_active_id (const std::string & active_id) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkComboBox* combo_box, const char* active_id);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_set_active_id;
  auto active_id_to_c = gi::unwrap (active_id, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkComboBox*) (gobj_()), (const char*) (active_id_to_c));
  return _temp_ret;
}
bool base::ComboBoxBase::set_active_id () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkComboBox* combo_box, const char* active_id);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_set_active_id;
  auto active_id_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkComboBox*) (gobj_()), (const char*) (active_id_to_c));
  return _temp_ret;
}

// void gtk_combo_box_set_active_iter (GtkComboBox* combo_box, GtkTreeIter* iter);
// void gtk_combo_box_set_active_iter (::GtkComboBox* combo_box, ::GtkTreeIter* iter);
void base::ComboBoxBase::set_active_iter (Gtk::TreeIter iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkComboBox* combo_box, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_set_active_iter;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkComboBox*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
}
void base::ComboBoxBase::set_active_iter () noexcept
{
  typedef void (*call_wrap_t) (::GtkComboBox* combo_box, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_set_active_iter;
  auto iter_to_c = nullptr;
  call_wrap_v ((::GtkComboBox*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
}

// void gtk_combo_box_set_add_tearoffs (GtkComboBox* combo_box, gboolean add_tearoffs);
// void gtk_combo_box_set_add_tearoffs (::GtkComboBox* combo_box, gboolean add_tearoffs);
// IGNORE; deprecated

// void gtk_combo_box_set_button_sensitivity (GtkComboBox* combo_box, GtkSensitivityType sensitivity);
// void gtk_combo_box_set_button_sensitivity (::GtkComboBox* combo_box, ::GtkSensitivityType sensitivity);
void base::ComboBoxBase::set_button_sensitivity (Gtk::SensitivityType sensitivity) noexcept
{
  typedef void (*call_wrap_t) (::GtkComboBox* combo_box, ::GtkSensitivityType sensitivity);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_set_button_sensitivity;
  auto sensitivity_to_c = gi::unwrap (sensitivity);
  call_wrap_v ((::GtkComboBox*) (gobj_()), (::GtkSensitivityType) (sensitivity_to_c));
}

// void gtk_combo_box_set_column_span_column (GtkComboBox* combo_box, gint column_span);
// void gtk_combo_box_set_column_span_column (::GtkComboBox* combo_box, gint column_span);
void base::ComboBoxBase::set_column_span_column (gint column_span) noexcept
{
  typedef void (*call_wrap_t) (::GtkComboBox* combo_box, gint column_span);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_set_column_span_column;
  auto column_span_to_c = column_span;
  call_wrap_v ((::GtkComboBox*) (gobj_()), (gint) (column_span_to_c));
}

// void gtk_combo_box_set_entry_text_column (GtkComboBox* combo_box, gint text_column);
// void gtk_combo_box_set_entry_text_column (::GtkComboBox* combo_box, gint text_column);
void base::ComboBoxBase::set_entry_text_column (gint text_column) noexcept
{
  typedef void (*call_wrap_t) (::GtkComboBox* combo_box, gint text_column);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_set_entry_text_column;
  auto text_column_to_c = text_column;
  call_wrap_v ((::GtkComboBox*) (gobj_()), (gint) (text_column_to_c));
}

// void gtk_combo_box_set_focus_on_click (GtkComboBox* combo, gboolean focus_on_click);
// void gtk_combo_box_set_focus_on_click (::GtkComboBox* combo, gboolean focus_on_click);
// IGNORE; deprecated

// void gtk_combo_box_set_id_column (GtkComboBox* combo_box, gint id_column);
// void gtk_combo_box_set_id_column (::GtkComboBox* combo_box, gint id_column);
void base::ComboBoxBase::set_id_column (gint id_column) noexcept
{
  typedef void (*call_wrap_t) (::GtkComboBox* combo_box, gint id_column);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_set_id_column;
  auto id_column_to_c = id_column;
  call_wrap_v ((::GtkComboBox*) (gobj_()), (gint) (id_column_to_c));
}

// void gtk_combo_box_set_model (GtkComboBox* combo_box, GtkTreeModel* model);
// void gtk_combo_box_set_model (::GtkComboBox* combo_box, ::GtkTreeModel* model);
void base::ComboBoxBase::set_model (Gtk::TreeModel model) noexcept
{
  typedef void (*call_wrap_t) (::GtkComboBox* combo_box, ::GtkTreeModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_set_model;
  auto model_to_c = gi::unwrap (model, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkComboBox*) (gobj_()), (::GtkTreeModel*) (model_to_c));
}
void base::ComboBoxBase::set_model () noexcept
{
  typedef void (*call_wrap_t) (::GtkComboBox* combo_box, ::GtkTreeModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_set_model;
  auto model_to_c = nullptr;
  call_wrap_v ((::GtkComboBox*) (gobj_()), (::GtkTreeModel*) (model_to_c));
}

// void gtk_combo_box_set_popup_fixed_width (GtkComboBox* combo_box, gboolean fixed);
// void gtk_combo_box_set_popup_fixed_width (::GtkComboBox* combo_box, gboolean fixed);
void base::ComboBoxBase::set_popup_fixed_width (gboolean fixed) noexcept
{
  typedef void (*call_wrap_t) (::GtkComboBox* combo_box, gboolean fixed);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_set_popup_fixed_width;
  auto fixed_to_c = fixed;
  call_wrap_v ((::GtkComboBox*) (gobj_()), (gboolean) (fixed_to_c));
}

// void gtk_combo_box_set_row_separator_func (GtkComboBox* combo_box, GtkTreeViewRowSeparatorFunc func, gpointer data, GDestroyNotify destroy);
// void gtk_combo_box_set_row_separator_func (::GtkComboBox* combo_box, Gtk::TreeViewRowSeparatorFunc::cfunction_type func, void* data, GLib::DestroyNotify::cfunction_type destroy);
void base::ComboBoxBase::set_row_separator_func (Gtk::TreeViewRowSeparatorFunc func) noexcept
{
  typedef void (*call_wrap_t) (::GtkComboBox* combo_box, Gtk::TreeViewRowSeparatorFunc::cfunction_type func, void* data, GLib::DestroyNotify::cfunction_type destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_set_row_separator_func;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_notified) : nullptr;
  call_wrap_v ((::GtkComboBox*) (gobj_()), (Gtk::TreeViewRowSeparatorFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_), (GLib::DestroyNotify::cfunction_type) (func_wrap_ ? &func_wrap_->destroy : nullptr));
}

// void gtk_combo_box_set_row_span_column (GtkComboBox* combo_box, gint row_span);
// void gtk_combo_box_set_row_span_column (::GtkComboBox* combo_box, gint row_span);
void base::ComboBoxBase::set_row_span_column (gint row_span) noexcept
{
  typedef void (*call_wrap_t) (::GtkComboBox* combo_box, gint row_span);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_set_row_span_column;
  auto row_span_to_c = row_span;
  call_wrap_v ((::GtkComboBox*) (gobj_()), (gint) (row_span_to_c));
}

// void gtk_combo_box_set_title (GtkComboBox* combo_box, const gchar* title);
// void gtk_combo_box_set_title (::GtkComboBox* combo_box, const char* title);
// IGNORE; deprecated

// void gtk_combo_box_set_wrap_width (GtkComboBox* combo_box, gint width);
// void gtk_combo_box_set_wrap_width (::GtkComboBox* combo_box, gint width);
void base::ComboBoxBase::set_wrap_width (gint width) noexcept
{
  typedef void (*call_wrap_t) (::GtkComboBox* combo_box, gint width);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_set_wrap_width;
  auto width_to_c = width;
  call_wrap_v ((::GtkComboBox*) (gobj_()), (gint) (width_to_c));
}







} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/combobox_extra_def_impl.hpp>)
#include <gtk/combobox_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/combobox_extra_impl.hpp>)
#include <gtk/combobox_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ComboBoxClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkComboBoxClass *methods = (::GtkComboBoxClass *) class_struct;
  (void) methods;

  methods->changed = (decltype (methods->changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::changed_>;
  methods->format_entry_text = (decltype (methods->format_entry_text)) detail::method_wrapper<self, std::string (*) (const std::string & path), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::format_entry_text_>;
}

// void ComboBox::changed (GtkComboBox* combo_box);
// void ComboBox::changed (::GtkComboBox* combo_box);
void ComboBoxClass::changed_ () noexcept
{
  if (!get_struct_()->changed) return ;
  typedef void (*call_wrap_t) (::GtkComboBox* combo_box);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->changed;
  call_wrap_v ((::GtkComboBox*) (gobj_()));
}

// gchar* ComboBox::format_entry_text (GtkComboBox* combo_box, const gchar* path);
// char* ComboBox::format_entry_text (::GtkComboBox* combo_box, const char* path);
std::string ComboBoxClass::format_entry_text_ (const std::string & path) noexcept
{
  if (!get_struct_()->format_entry_text) return std::string{};
  typedef char* (*call_wrap_t) (::GtkComboBox* combo_box, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->format_entry_text;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkComboBox*) (gobj_()), (const char*) (path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
