// AUTO-GENERATED

#ifndef _GI_GTK_ENTRYCOMPLETION_IMPL_HPP_
#define _GI_GTK_ENTRYCOMPLETION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Buildable EntryCompletionBase::interface_ (gi::interface_tag<Gtk::Buildable>)
{ return gi::wrap ((Gtk::Buildable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

EntryCompletionBase::operator Gtk::Buildable ()
{ return interface_ (gi::interface_tag<Gtk::Buildable>()); }

Gtk::CellLayout EntryCompletionBase::interface_ (gi::interface_tag<Gtk::CellLayout>)
{ return gi::wrap ((Gtk::CellLayout::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

EntryCompletionBase::operator Gtk::CellLayout ()
{ return interface_ (gi::interface_tag<Gtk::CellLayout>()); }

// GtkEntryCompletion* gtk_entry_completion_new ();
// ::GtkEntryCompletion* gtk_entry_completion_new ();
Gtk::EntryCompletion base::EntryCompletionBase::new_ () noexcept
{
  typedef ::GtkEntryCompletion* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_completion_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GtkEntryCompletion* gtk_entry_completion_new_with_area (GtkCellArea* area);
// ::GtkEntryCompletion* gtk_entry_completion_new_with_area (::GtkCellArea* area);
Gtk::EntryCompletion base::EntryCompletionBase::new_with_area (Gtk::CellArea area) noexcept
{
  typedef ::GtkEntryCompletion* (*call_wrap_t) (::GtkCellArea* area);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_completion_new_with_area;
  auto area_to_c = gi::unwrap (area, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (area_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gtk_entry_completion_complete (GtkEntryCompletion* completion);
// void gtk_entry_completion_complete (::GtkEntryCompletion* completion);
void base::EntryCompletionBase::complete () noexcept
{
  typedef void (*call_wrap_t) (::GtkEntryCompletion* completion);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_completion_complete;
  call_wrap_v ((::GtkEntryCompletion*) (gobj_()));
}

// gchar* gtk_entry_completion_compute_prefix (GtkEntryCompletion* completion, const char* key);
// char* gtk_entry_completion_compute_prefix (::GtkEntryCompletion* completion, const char* key);
std::string base::EntryCompletionBase::compute_prefix (const std::string & key) noexcept
{
  typedef char* (*call_wrap_t) (::GtkEntryCompletion* completion, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_completion_compute_prefix;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkEntryCompletion*) (gobj_()), (const char*) (key_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gtk_entry_completion_delete_action (GtkEntryCompletion* completion, gint index_);
// void gtk_entry_completion_delete_action (::GtkEntryCompletion* completion, gint index_);
void base::EntryCompletionBase::delete_action (gint index_) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntryCompletion* completion, gint index_);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_completion_delete_action;
  auto index__to_c = index_;
  call_wrap_v ((::GtkEntryCompletion*) (gobj_()), (gint) (index__to_c));
}

// const gchar* gtk_entry_completion_get_completion_prefix (GtkEntryCompletion* completion);
// const char* gtk_entry_completion_get_completion_prefix (::GtkEntryCompletion* completion);
std::string base::EntryCompletionBase::get_completion_prefix () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkEntryCompletion* completion);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_completion_get_completion_prefix;
  auto _temp_ret = call_wrap_v ((::GtkEntryCompletion*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_entry_completion_get_entry (GtkEntryCompletion* completion);
// ::GtkWidget* gtk_entry_completion_get_entry (::GtkEntryCompletion* completion);
Gtk::Widget base::EntryCompletionBase::get_entry () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkEntryCompletion* completion);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_completion_get_entry;
  auto _temp_ret = call_wrap_v ((::GtkEntryCompletion*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_entry_completion_get_inline_completion (GtkEntryCompletion* completion);
// gboolean gtk_entry_completion_get_inline_completion (::GtkEntryCompletion* completion);
bool base::EntryCompletionBase::get_inline_completion () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkEntryCompletion* completion);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_completion_get_inline_completion;
  auto _temp_ret = call_wrap_v ((::GtkEntryCompletion*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_entry_completion_get_inline_selection (GtkEntryCompletion* completion);
// gboolean gtk_entry_completion_get_inline_selection (::GtkEntryCompletion* completion);
bool base::EntryCompletionBase::get_inline_selection () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkEntryCompletion* completion);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_completion_get_inline_selection;
  auto _temp_ret = call_wrap_v ((::GtkEntryCompletion*) (gobj_()));
  return _temp_ret;
}

// gint gtk_entry_completion_get_minimum_key_length (GtkEntryCompletion* completion);
// gint gtk_entry_completion_get_minimum_key_length (::GtkEntryCompletion* completion);
gint base::EntryCompletionBase::get_minimum_key_length () noexcept
{
  typedef gint (*call_wrap_t) (::GtkEntryCompletion* completion);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_completion_get_minimum_key_length;
  auto _temp_ret = call_wrap_v ((::GtkEntryCompletion*) (gobj_()));
  return _temp_ret;
}

// GtkTreeModel* gtk_entry_completion_get_model (GtkEntryCompletion* completion);
// ::GtkTreeModel* gtk_entry_completion_get_model (::GtkEntryCompletion* completion);
Gtk::TreeModel base::EntryCompletionBase::get_model () noexcept
{
  typedef ::GtkTreeModel* (*call_wrap_t) (::GtkEntryCompletion* completion);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_completion_get_model;
  auto _temp_ret = call_wrap_v ((::GtkEntryCompletion*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_entry_completion_get_popup_completion (GtkEntryCompletion* completion);
// gboolean gtk_entry_completion_get_popup_completion (::GtkEntryCompletion* completion);
bool base::EntryCompletionBase::get_popup_completion () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkEntryCompletion* completion);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_completion_get_popup_completion;
  auto _temp_ret = call_wrap_v ((::GtkEntryCompletion*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_entry_completion_get_popup_set_width (GtkEntryCompletion* completion);
// gboolean gtk_entry_completion_get_popup_set_width (::GtkEntryCompletion* completion);
bool base::EntryCompletionBase::get_popup_set_width () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkEntryCompletion* completion);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_completion_get_popup_set_width;
  auto _temp_ret = call_wrap_v ((::GtkEntryCompletion*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_entry_completion_get_popup_single_match (GtkEntryCompletion* completion);
// gboolean gtk_entry_completion_get_popup_single_match (::GtkEntryCompletion* completion);
bool base::EntryCompletionBase::get_popup_single_match () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkEntryCompletion* completion);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_completion_get_popup_single_match;
  auto _temp_ret = call_wrap_v ((::GtkEntryCompletion*) (gobj_()));
  return _temp_ret;
}

// gint gtk_entry_completion_get_text_column (GtkEntryCompletion* completion);
// gint gtk_entry_completion_get_text_column (::GtkEntryCompletion* completion);
gint base::EntryCompletionBase::get_text_column () noexcept
{
  typedef gint (*call_wrap_t) (::GtkEntryCompletion* completion);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_completion_get_text_column;
  auto _temp_ret = call_wrap_v ((::GtkEntryCompletion*) (gobj_()));
  return _temp_ret;
}

// void gtk_entry_completion_insert_action_markup (GtkEntryCompletion* completion, gint index_, const gchar* markup);
// void gtk_entry_completion_insert_action_markup (::GtkEntryCompletion* completion, gint index_, const char* markup);
void base::EntryCompletionBase::insert_action_markup (gint index_, const std::string & markup) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntryCompletion* completion, gint index_, const char* markup);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_completion_insert_action_markup;
  auto markup_to_c = gi::unwrap (markup, gi::transfer_none, gi::direction_in);
  auto index__to_c = index_;
  call_wrap_v ((::GtkEntryCompletion*) (gobj_()), (gint) (index__to_c), (const char*) (markup_to_c));
}

// void gtk_entry_completion_insert_action_text (GtkEntryCompletion* completion, gint index_, const gchar* text);
// void gtk_entry_completion_insert_action_text (::GtkEntryCompletion* completion, gint index_, const char* text);
void base::EntryCompletionBase::insert_action_text (gint index_, const std::string & text) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntryCompletion* completion, gint index_, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_completion_insert_action_text;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  auto index__to_c = index_;
  call_wrap_v ((::GtkEntryCompletion*) (gobj_()), (gint) (index__to_c), (const char*) (text_to_c));
}

// void gtk_entry_completion_insert_prefix (GtkEntryCompletion* completion);
// void gtk_entry_completion_insert_prefix (::GtkEntryCompletion* completion);
void base::EntryCompletionBase::insert_prefix () noexcept
{
  typedef void (*call_wrap_t) (::GtkEntryCompletion* completion);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_completion_insert_prefix;
  call_wrap_v ((::GtkEntryCompletion*) (gobj_()));
}

// void gtk_entry_completion_set_inline_completion (GtkEntryCompletion* completion, gboolean inline_completion);
// void gtk_entry_completion_set_inline_completion (::GtkEntryCompletion* completion, gboolean inline_completion);
void base::EntryCompletionBase::set_inline_completion (gboolean inline_completion) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntryCompletion* completion, gboolean inline_completion);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_completion_set_inline_completion;
  auto inline_completion_to_c = inline_completion;
  call_wrap_v ((::GtkEntryCompletion*) (gobj_()), (gboolean) (inline_completion_to_c));
}

// void gtk_entry_completion_set_inline_selection (GtkEntryCompletion* completion, gboolean inline_selection);
// void gtk_entry_completion_set_inline_selection (::GtkEntryCompletion* completion, gboolean inline_selection);
void base::EntryCompletionBase::set_inline_selection (gboolean inline_selection) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntryCompletion* completion, gboolean inline_selection);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_completion_set_inline_selection;
  auto inline_selection_to_c = inline_selection;
  call_wrap_v ((::GtkEntryCompletion*) (gobj_()), (gboolean) (inline_selection_to_c));
}

// void gtk_entry_completion_set_match_func (GtkEntryCompletion* completion, GtkEntryCompletionMatchFunc func, gpointer func_data, GDestroyNotify func_notify);
// void gtk_entry_completion_set_match_func (::GtkEntryCompletion* completion, Gtk::EntryCompletionMatchFunc::cfunction_type func, void* func_data, GLib::DestroyNotify::cfunction_type func_notify);
void base::EntryCompletionBase::set_match_func (Gtk::EntryCompletionMatchFunc func) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntryCompletion* completion, Gtk::EntryCompletionMatchFunc::cfunction_type func, void* func_data, GLib::DestroyNotify::cfunction_type func_notify);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_completion_set_match_func;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_notified) : nullptr;
  call_wrap_v ((::GtkEntryCompletion*) (gobj_()), (Gtk::EntryCompletionMatchFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_), (GLib::DestroyNotify::cfunction_type) (func_wrap_ ? &func_wrap_->destroy : nullptr));
}

// void gtk_entry_completion_set_minimum_key_length (GtkEntryCompletion* completion, gint length);
// void gtk_entry_completion_set_minimum_key_length (::GtkEntryCompletion* completion, gint length);
void base::EntryCompletionBase::set_minimum_key_length (gint length) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntryCompletion* completion, gint length);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_completion_set_minimum_key_length;
  auto length_to_c = length;
  call_wrap_v ((::GtkEntryCompletion*) (gobj_()), (gint) (length_to_c));
}

// void gtk_entry_completion_set_model (GtkEntryCompletion* completion, GtkTreeModel* model);
// void gtk_entry_completion_set_model (::GtkEntryCompletion* completion, ::GtkTreeModel* model);
void base::EntryCompletionBase::set_model (Gtk::TreeModel model) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntryCompletion* completion, ::GtkTreeModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_completion_set_model;
  auto model_to_c = gi::unwrap (model, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkEntryCompletion*) (gobj_()), (::GtkTreeModel*) (model_to_c));
}
void base::EntryCompletionBase::set_model () noexcept
{
  typedef void (*call_wrap_t) (::GtkEntryCompletion* completion, ::GtkTreeModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_completion_set_model;
  auto model_to_c = nullptr;
  call_wrap_v ((::GtkEntryCompletion*) (gobj_()), (::GtkTreeModel*) (model_to_c));
}

// void gtk_entry_completion_set_popup_completion (GtkEntryCompletion* completion, gboolean popup_completion);
// void gtk_entry_completion_set_popup_completion (::GtkEntryCompletion* completion, gboolean popup_completion);
void base::EntryCompletionBase::set_popup_completion (gboolean popup_completion) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntryCompletion* completion, gboolean popup_completion);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_completion_set_popup_completion;
  auto popup_completion_to_c = popup_completion;
  call_wrap_v ((::GtkEntryCompletion*) (gobj_()), (gboolean) (popup_completion_to_c));
}

// void gtk_entry_completion_set_popup_set_width (GtkEntryCompletion* completion, gboolean popup_set_width);
// void gtk_entry_completion_set_popup_set_width (::GtkEntryCompletion* completion, gboolean popup_set_width);
void base::EntryCompletionBase::set_popup_set_width (gboolean popup_set_width) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntryCompletion* completion, gboolean popup_set_width);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_completion_set_popup_set_width;
  auto popup_set_width_to_c = popup_set_width;
  call_wrap_v ((::GtkEntryCompletion*) (gobj_()), (gboolean) (popup_set_width_to_c));
}

// void gtk_entry_completion_set_popup_single_match (GtkEntryCompletion* completion, gboolean popup_single_match);
// void gtk_entry_completion_set_popup_single_match (::GtkEntryCompletion* completion, gboolean popup_single_match);
void base::EntryCompletionBase::set_popup_single_match (gboolean popup_single_match) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntryCompletion* completion, gboolean popup_single_match);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_completion_set_popup_single_match;
  auto popup_single_match_to_c = popup_single_match;
  call_wrap_v ((::GtkEntryCompletion*) (gobj_()), (gboolean) (popup_single_match_to_c));
}

// void gtk_entry_completion_set_text_column (GtkEntryCompletion* completion, gint column);
// void gtk_entry_completion_set_text_column (::GtkEntryCompletion* completion, gint column);
void base::EntryCompletionBase::set_text_column (gint column) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntryCompletion* completion, gint column);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_completion_set_text_column;
  auto column_to_c = column;
  call_wrap_v ((::GtkEntryCompletion*) (gobj_()), (gint) (column_to_c));
}







} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/entrycompletion_extra_def_impl.hpp>)
#include <gtk/entrycompletion_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/entrycompletion_extra_impl.hpp>)
#include <gtk/entrycompletion_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void EntryCompletionClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkEntryCompletionClass *methods = (::GtkEntryCompletionClass *) class_struct;
  (void) methods;

  methods->action_activated = (decltype (methods->action_activated)) detail::method_wrapper<self, void (*) (gint index_), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::action_activated_>;
  methods->cursor_on_match = (decltype (methods->cursor_on_match)) detail::method_wrapper<self, bool (*) (Gtk::TreeModel model, Gtk::TreeIter iter), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::cursor_on_match_>;
  methods->insert_prefix = (decltype (methods->insert_prefix)) detail::method_wrapper<self, bool (*) (const std::string & prefix), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::insert_prefix_>;
  methods->match_selected = (decltype (methods->match_selected)) detail::method_wrapper<self, bool (*) (Gtk::TreeModel model, Gtk::TreeIter iter), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::match_selected_>;
  methods->no_matches = (decltype (methods->no_matches)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::no_matches_>;
}

// void EntryCompletion::action_activated (GtkEntryCompletion* completion, gint index_);
// void EntryCompletion::action_activated (::GtkEntryCompletion* completion, gint index_);
void EntryCompletionClass::action_activated_ (gint index_) noexcept
{
  if (!get_struct_()->action_activated) return ;
  typedef void (*call_wrap_t) (::GtkEntryCompletion* completion, gint index_);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->action_activated;
  auto index__to_c = index_;
  call_wrap_v ((::GtkEntryCompletion*) (gobj_()), (gint) (index__to_c));
}

// gboolean EntryCompletion::cursor_on_match (GtkEntryCompletion* completion, GtkTreeModel* model, GtkTreeIter* iter);
// gboolean EntryCompletion::cursor_on_match (::GtkEntryCompletion* completion, ::GtkTreeModel* model, ::GtkTreeIter* iter);
bool EntryCompletionClass::cursor_on_match_ (Gtk::TreeModel model, Gtk::TreeIter iter) noexcept
{
  if (!get_struct_()->cursor_on_match) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkEntryCompletion* completion, ::GtkTreeModel* model, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->cursor_on_match;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  auto model_to_c = gi::unwrap (model, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkEntryCompletion*) (gobj_()), (::GtkTreeModel*) (model_to_c), (::GtkTreeIter*) (iter_to_c));
  return _temp_ret;
}

// gboolean EntryCompletion::insert_prefix (GtkEntryCompletion* completion, const gchar* prefix);
// gboolean EntryCompletion::insert_prefix (::GtkEntryCompletion* completion, const char* prefix);
bool EntryCompletionClass::insert_prefix_ (const std::string & prefix) noexcept
{
  if (!get_struct_()->insert_prefix) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkEntryCompletion* completion, const char* prefix);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->insert_prefix;
  auto prefix_to_c = gi::unwrap (prefix, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkEntryCompletion*) (gobj_()), (const char*) (prefix_to_c));
  return _temp_ret;
}

// gboolean EntryCompletion::match_selected (GtkEntryCompletion* completion, GtkTreeModel* model, GtkTreeIter* iter);
// gboolean EntryCompletion::match_selected (::GtkEntryCompletion* completion, ::GtkTreeModel* model, ::GtkTreeIter* iter);
bool EntryCompletionClass::match_selected_ (Gtk::TreeModel model, Gtk::TreeIter iter) noexcept
{
  if (!get_struct_()->match_selected) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkEntryCompletion* completion, ::GtkTreeModel* model, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->match_selected;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  auto model_to_c = gi::unwrap (model, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkEntryCompletion*) (gobj_()), (::GtkTreeModel*) (model_to_c), (::GtkTreeIter*) (iter_to_c));
  return _temp_ret;
}

// void EntryCompletion::no_matches (GtkEntryCompletion* completion);
// void EntryCompletion::no_matches (::GtkEntryCompletion* completion);
void EntryCompletionClass::no_matches_ () noexcept
{
  if (!get_struct_()->no_matches) return ;
  typedef void (*call_wrap_t) (::GtkEntryCompletion* completion);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->no_matches;
  call_wrap_v ((::GtkEntryCompletion*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
