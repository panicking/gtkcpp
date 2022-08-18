// AUTO-GENERATED

#ifndef _GI_GTK_PRINTOPERATION_IMPL_HPP_
#define _GI_GTK_PRINTOPERATION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::PrintOperationPreview PrintOperationBase::interface_ (gi::interface_tag<Gtk::PrintOperationPreview>)
{ return gi::wrap ((Gtk::PrintOperationPreview::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

PrintOperationBase::operator Gtk::PrintOperationPreview ()
{ return interface_ (gi::interface_tag<Gtk::PrintOperationPreview>()); }

// GtkPrintOperation* gtk_print_operation_new ();
// ::GtkPrintOperation* gtk_print_operation_new ();
Gtk::PrintOperation base::PrintOperationBase::new_ () noexcept
{
  typedef ::GtkPrintOperation* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_operation_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gtk_print_operation_cancel (GtkPrintOperation* op);
// void gtk_print_operation_cancel (::GtkPrintOperation* op);
void base::PrintOperationBase::cancel () noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintOperation* op);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_operation_cancel;
  call_wrap_v ((::GtkPrintOperation*) (gobj_()));
}

// void gtk_print_operation_draw_page_finish (GtkPrintOperation* op);
// void gtk_print_operation_draw_page_finish (::GtkPrintOperation* op);
void base::PrintOperationBase::draw_page_finish () noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintOperation* op);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_operation_draw_page_finish;
  call_wrap_v ((::GtkPrintOperation*) (gobj_()));
}

// GtkPageSetup* gtk_print_operation_get_default_page_setup (GtkPrintOperation* op);
// ::GtkPageSetup* gtk_print_operation_get_default_page_setup (::GtkPrintOperation* op);
Gtk::PageSetup base::PrintOperationBase::get_default_page_setup () noexcept
{
  typedef ::GtkPageSetup* (*call_wrap_t) (::GtkPrintOperation* op);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_operation_get_default_page_setup;
  auto _temp_ret = call_wrap_v ((::GtkPrintOperation*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_print_operation_get_embed_page_setup (GtkPrintOperation* op);
// gboolean gtk_print_operation_get_embed_page_setup (::GtkPrintOperation* op);
bool base::PrintOperationBase::get_embed_page_setup () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrintOperation* op);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_operation_get_embed_page_setup;
  auto _temp_ret = call_wrap_v ((::GtkPrintOperation*) (gobj_()));
  return _temp_ret;
}

// void gtk_print_operation_get_error (GtkPrintOperation* op, GError ** error);
// void gtk_print_operation_get_error (::GtkPrintOperation* op, GError ** error);
void base::PrintOperationBase::get_error ()
{
  typedef void (*call_wrap_t) (::GtkPrintOperation* op, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_operation_get_error;
  GError *error = NULL;
  call_wrap_v ((::GtkPrintOperation*) (gobj_()), &error);
  gi::check_error (error);
}
void base::PrintOperationBase::get_error (GLib::Error * _error) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintOperation* op, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_operation_get_error;
  GError* _error_o {};
  call_wrap_v ((::GtkPrintOperation*) (gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
}

// gboolean gtk_print_operation_get_has_selection (GtkPrintOperation* op);
// gboolean gtk_print_operation_get_has_selection (::GtkPrintOperation* op);
bool base::PrintOperationBase::get_has_selection () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrintOperation* op);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_operation_get_has_selection;
  auto _temp_ret = call_wrap_v ((::GtkPrintOperation*) (gobj_()));
  return _temp_ret;
}

// gint gtk_print_operation_get_n_pages_to_print (GtkPrintOperation* op);
// gint gtk_print_operation_get_n_pages_to_print (::GtkPrintOperation* op);
gint base::PrintOperationBase::get_n_pages_to_print () noexcept
{
  typedef gint (*call_wrap_t) (::GtkPrintOperation* op);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_operation_get_n_pages_to_print;
  auto _temp_ret = call_wrap_v ((::GtkPrintOperation*) (gobj_()));
  return _temp_ret;
}

// GtkPrintSettings* gtk_print_operation_get_print_settings (GtkPrintOperation* op);
// ::GtkPrintSettings* gtk_print_operation_get_print_settings (::GtkPrintOperation* op);
Gtk::PrintSettings base::PrintOperationBase::get_print_settings () noexcept
{
  typedef ::GtkPrintSettings* (*call_wrap_t) (::GtkPrintOperation* op);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_operation_get_print_settings;
  auto _temp_ret = call_wrap_v ((::GtkPrintOperation*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkPrintStatus gtk_print_operation_get_status (GtkPrintOperation* op);
// ::GtkPrintStatus gtk_print_operation_get_status (::GtkPrintOperation* op);
Gtk::PrintStatus base::PrintOperationBase::get_status () noexcept
{
  typedef ::GtkPrintStatus (*call_wrap_t) (::GtkPrintOperation* op);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_operation_get_status;
  auto _temp_ret = call_wrap_v ((::GtkPrintOperation*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// const gchar* gtk_print_operation_get_status_string (GtkPrintOperation* op);
// const char* gtk_print_operation_get_status_string (::GtkPrintOperation* op);
std::string base::PrintOperationBase::get_status_string () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkPrintOperation* op);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_operation_get_status_string;
  auto _temp_ret = call_wrap_v ((::GtkPrintOperation*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_print_operation_get_support_selection (GtkPrintOperation* op);
// gboolean gtk_print_operation_get_support_selection (::GtkPrintOperation* op);
bool base::PrintOperationBase::get_support_selection () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrintOperation* op);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_operation_get_support_selection;
  auto _temp_ret = call_wrap_v ((::GtkPrintOperation*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_print_operation_is_finished (GtkPrintOperation* op);
// gboolean gtk_print_operation_is_finished (::GtkPrintOperation* op);
bool base::PrintOperationBase::is_finished () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrintOperation* op);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_operation_is_finished;
  auto _temp_ret = call_wrap_v ((::GtkPrintOperation*) (gobj_()));
  return _temp_ret;
}

// GtkPrintOperationResult gtk_print_operation_run (GtkPrintOperation* op, GtkPrintOperationAction action, GtkWindow* parent, GError ** error);
// ::GtkPrintOperationResult gtk_print_operation_run (::GtkPrintOperation* op, ::GtkPrintOperationAction action, ::GtkWindow* parent, GError ** error);
Gtk::PrintOperationResult base::PrintOperationBase::run (Gtk::PrintOperationAction action, Gtk::Window parent)
{
  typedef ::GtkPrintOperationResult (*call_wrap_t) (::GtkPrintOperation* op, ::GtkPrintOperationAction action, ::GtkWindow* parent, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_operation_run;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  auto action_to_c = gi::unwrap (action);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkPrintOperation*) (gobj_()), (::GtkPrintOperationAction) (action_to_c), (::GtkWindow*) (parent_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret);
}
Gtk::PrintOperationResult base::PrintOperationBase::run (Gtk::PrintOperationAction action)
{
  typedef ::GtkPrintOperationResult (*call_wrap_t) (::GtkPrintOperation* op, ::GtkPrintOperationAction action, ::GtkWindow* parent, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_operation_run;
  auto parent_to_c = nullptr;
  auto action_to_c = gi::unwrap (action);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkPrintOperation*) (gobj_()), (::GtkPrintOperationAction) (action_to_c), (::GtkWindow*) (parent_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret);
}
Gtk::PrintOperationResult base::PrintOperationBase::run (Gtk::PrintOperationAction action, Gtk::Window parent, GLib::Error * _error) noexcept
{
  typedef ::GtkPrintOperationResult (*call_wrap_t) (::GtkPrintOperation* op, ::GtkPrintOperationAction action, ::GtkWindow* parent, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_operation_run;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  auto action_to_c = gi::unwrap (action);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkPrintOperation*) (gobj_()), (::GtkPrintOperationAction) (action_to_c), (::GtkWindow*) (parent_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret);
}
Gtk::PrintOperationResult base::PrintOperationBase::run (Gtk::PrintOperationAction action, GLib::Error * _error) noexcept
{
  typedef ::GtkPrintOperationResult (*call_wrap_t) (::GtkPrintOperation* op, ::GtkPrintOperationAction action, ::GtkWindow* parent, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_operation_run;
  auto parent_to_c = nullptr;
  auto action_to_c = gi::unwrap (action);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkPrintOperation*) (gobj_()), (::GtkPrintOperationAction) (action_to_c), (::GtkWindow*) (parent_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret);
}

// void gtk_print_operation_set_allow_async (GtkPrintOperation* op, gboolean allow_async);
// void gtk_print_operation_set_allow_async (::GtkPrintOperation* op, gboolean allow_async);
void base::PrintOperationBase::set_allow_async (gboolean allow_async) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintOperation* op, gboolean allow_async);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_operation_set_allow_async;
  auto allow_async_to_c = allow_async;
  call_wrap_v ((::GtkPrintOperation*) (gobj_()), (gboolean) (allow_async_to_c));
}

// void gtk_print_operation_set_current_page (GtkPrintOperation* op, gint current_page);
// void gtk_print_operation_set_current_page (::GtkPrintOperation* op, gint current_page);
void base::PrintOperationBase::set_current_page (gint current_page) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintOperation* op, gint current_page);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_operation_set_current_page;
  auto current_page_to_c = current_page;
  call_wrap_v ((::GtkPrintOperation*) (gobj_()), (gint) (current_page_to_c));
}

// void gtk_print_operation_set_custom_tab_label (GtkPrintOperation* op, const gchar* label);
// void gtk_print_operation_set_custom_tab_label (::GtkPrintOperation* op, const char* label);
void base::PrintOperationBase::set_custom_tab_label (const std::string & label) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintOperation* op, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_operation_set_custom_tab_label;
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkPrintOperation*) (gobj_()), (const char*) (label_to_c));
}
void base::PrintOperationBase::set_custom_tab_label () noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintOperation* op, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_operation_set_custom_tab_label;
  auto label_to_c = nullptr;
  call_wrap_v ((::GtkPrintOperation*) (gobj_()), (const char*) (label_to_c));
}

// void gtk_print_operation_set_default_page_setup (GtkPrintOperation* op, GtkPageSetup* default_page_setup);
// void gtk_print_operation_set_default_page_setup (::GtkPrintOperation* op, ::GtkPageSetup* default_page_setup);
void base::PrintOperationBase::set_default_page_setup (Gtk::PageSetup default_page_setup) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintOperation* op, ::GtkPageSetup* default_page_setup);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_operation_set_default_page_setup;
  auto default_page_setup_to_c = gi::unwrap (default_page_setup, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkPrintOperation*) (gobj_()), (::GtkPageSetup*) (default_page_setup_to_c));
}
void base::PrintOperationBase::set_default_page_setup () noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintOperation* op, ::GtkPageSetup* default_page_setup);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_operation_set_default_page_setup;
  auto default_page_setup_to_c = nullptr;
  call_wrap_v ((::GtkPrintOperation*) (gobj_()), (::GtkPageSetup*) (default_page_setup_to_c));
}

// void gtk_print_operation_set_defer_drawing (GtkPrintOperation* op);
// void gtk_print_operation_set_defer_drawing (::GtkPrintOperation* op);
void base::PrintOperationBase::set_defer_drawing () noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintOperation* op);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_operation_set_defer_drawing;
  call_wrap_v ((::GtkPrintOperation*) (gobj_()));
}

// void gtk_print_operation_set_embed_page_setup (GtkPrintOperation* op, gboolean embed);
// void gtk_print_operation_set_embed_page_setup (::GtkPrintOperation* op, gboolean embed);
void base::PrintOperationBase::set_embed_page_setup (gboolean embed) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintOperation* op, gboolean embed);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_operation_set_embed_page_setup;
  auto embed_to_c = embed;
  call_wrap_v ((::GtkPrintOperation*) (gobj_()), (gboolean) (embed_to_c));
}

// void gtk_print_operation_set_export_filename (GtkPrintOperation* op, const gchar* filename);
// void gtk_print_operation_set_export_filename (::GtkPrintOperation* op, const char* filename);
void base::PrintOperationBase::set_export_filename (const std::string & filename) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintOperation* op, const char* filename);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_operation_set_export_filename;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkPrintOperation*) (gobj_()), (const char*) (filename_to_c));
}

// void gtk_print_operation_set_has_selection (GtkPrintOperation* op, gboolean has_selection);
// void gtk_print_operation_set_has_selection (::GtkPrintOperation* op, gboolean has_selection);
void base::PrintOperationBase::set_has_selection (gboolean has_selection) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintOperation* op, gboolean has_selection);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_operation_set_has_selection;
  auto has_selection_to_c = has_selection;
  call_wrap_v ((::GtkPrintOperation*) (gobj_()), (gboolean) (has_selection_to_c));
}

// void gtk_print_operation_set_job_name (GtkPrintOperation* op, const gchar* job_name);
// void gtk_print_operation_set_job_name (::GtkPrintOperation* op, const char* job_name);
void base::PrintOperationBase::set_job_name (const std::string & job_name) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintOperation* op, const char* job_name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_operation_set_job_name;
  auto job_name_to_c = gi::unwrap (job_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkPrintOperation*) (gobj_()), (const char*) (job_name_to_c));
}

// void gtk_print_operation_set_n_pages (GtkPrintOperation* op, gint n_pages);
// void gtk_print_operation_set_n_pages (::GtkPrintOperation* op, gint n_pages);
void base::PrintOperationBase::set_n_pages (gint n_pages) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintOperation* op, gint n_pages);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_operation_set_n_pages;
  auto n_pages_to_c = n_pages;
  call_wrap_v ((::GtkPrintOperation*) (gobj_()), (gint) (n_pages_to_c));
}

// void gtk_print_operation_set_print_settings (GtkPrintOperation* op, GtkPrintSettings* print_settings);
// void gtk_print_operation_set_print_settings (::GtkPrintOperation* op, ::GtkPrintSettings* print_settings);
void base::PrintOperationBase::set_print_settings (Gtk::PrintSettings print_settings) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintOperation* op, ::GtkPrintSettings* print_settings);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_operation_set_print_settings;
  auto print_settings_to_c = gi::unwrap (print_settings, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkPrintOperation*) (gobj_()), (::GtkPrintSettings*) (print_settings_to_c));
}
void base::PrintOperationBase::set_print_settings () noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintOperation* op, ::GtkPrintSettings* print_settings);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_operation_set_print_settings;
  auto print_settings_to_c = nullptr;
  call_wrap_v ((::GtkPrintOperation*) (gobj_()), (::GtkPrintSettings*) (print_settings_to_c));
}

// void gtk_print_operation_set_show_progress (GtkPrintOperation* op, gboolean show_progress);
// void gtk_print_operation_set_show_progress (::GtkPrintOperation* op, gboolean show_progress);
void base::PrintOperationBase::set_show_progress (gboolean show_progress) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintOperation* op, gboolean show_progress);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_operation_set_show_progress;
  auto show_progress_to_c = show_progress;
  call_wrap_v ((::GtkPrintOperation*) (gobj_()), (gboolean) (show_progress_to_c));
}

// void gtk_print_operation_set_support_selection (GtkPrintOperation* op, gboolean support_selection);
// void gtk_print_operation_set_support_selection (::GtkPrintOperation* op, gboolean support_selection);
void base::PrintOperationBase::set_support_selection (gboolean support_selection) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintOperation* op, gboolean support_selection);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_operation_set_support_selection;
  auto support_selection_to_c = support_selection;
  call_wrap_v ((::GtkPrintOperation*) (gobj_()), (gboolean) (support_selection_to_c));
}

// void gtk_print_operation_set_track_print_status (GtkPrintOperation* op, gboolean track_status);
// void gtk_print_operation_set_track_print_status (::GtkPrintOperation* op, gboolean track_status);
void base::PrintOperationBase::set_track_print_status (gboolean track_status) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintOperation* op, gboolean track_status);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_operation_set_track_print_status;
  auto track_status_to_c = track_status;
  call_wrap_v ((::GtkPrintOperation*) (gobj_()), (gboolean) (track_status_to_c));
}

// void gtk_print_operation_set_unit (GtkPrintOperation* op, GtkUnit unit);
// void gtk_print_operation_set_unit (::GtkPrintOperation* op, ::GtkUnit unit);
void base::PrintOperationBase::set_unit (Gtk::Unit unit) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintOperation* op, ::GtkUnit unit);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_operation_set_unit;
  auto unit_to_c = gi::unwrap (unit);
  call_wrap_v ((::GtkPrintOperation*) (gobj_()), (::GtkUnit) (unit_to_c));
}

// void gtk_print_operation_set_use_full_page (GtkPrintOperation* op, gboolean full_page);
// void gtk_print_operation_set_use_full_page (::GtkPrintOperation* op, gboolean full_page);
void base::PrintOperationBase::set_use_full_page (gboolean full_page) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintOperation* op, gboolean full_page);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_operation_set_use_full_page;
  auto full_page_to_c = full_page;
  call_wrap_v ((::GtkPrintOperation*) (gobj_()), (gboolean) (full_page_to_c));
}













} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/printoperation_extra_def_impl.hpp>)
#include <gtk/printoperation_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/printoperation_extra_impl.hpp>)
#include <gtk/printoperation_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void PrintOperationClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkPrintOperationClass *methods = (::GtkPrintOperationClass *) class_struct;
  (void) methods;

  methods->begin_print = (decltype (methods->begin_print)) detail::method_wrapper<self, void (*) (Gtk::PrintContext context), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::begin_print_>;
  methods->custom_widget_apply = (decltype (methods->custom_widget_apply)) detail::method_wrapper<self, void (*) (Gtk::Widget widget), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::custom_widget_apply_>;
  methods->done = (decltype (methods->done)) detail::method_wrapper<self, void (*) (Gtk::PrintOperationResult result), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::done_>;
  methods->draw_page = (decltype (methods->draw_page)) detail::method_wrapper<self, void (*) (Gtk::PrintContext context, gint page_nr), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::draw_page_>;
  methods->end_print = (decltype (methods->end_print)) detail::method_wrapper<self, void (*) (Gtk::PrintContext context), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::end_print_>;
  methods->paginate = (decltype (methods->paginate)) detail::method_wrapper<self, bool (*) (Gtk::PrintContext context), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::paginate_>;
  methods->preview = (decltype (methods->preview)) detail::method_wrapper<self, bool (*) (Gtk::PrintOperationPreview preview, Gtk::PrintContext context, Gtk::Window parent), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::preview_>;
  methods->request_page_setup = (decltype (methods->request_page_setup)) detail::method_wrapper<self, void (*) (Gtk::PrintContext context, gint page_nr, Gtk::PageSetup setup), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::request_page_setup_>;
  methods->status_changed = (decltype (methods->status_changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::status_changed_>;
  methods->update_custom_widget = (decltype (methods->update_custom_widget)) detail::method_wrapper<self, void (*) (Gtk::Widget widget, Gtk::PageSetup setup, Gtk::PrintSettings settings), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::update_custom_widget_>;
}

// void PrintOperation::begin_print (GtkPrintOperation* operation, GtkPrintContext* context);
// void PrintOperation::begin_print (::GtkPrintOperation* operation, ::GtkPrintContext* context);
void PrintOperationClass::begin_print_ (Gtk::PrintContext context) noexcept
{
  if (!get_struct_()->begin_print) return ;
  typedef void (*call_wrap_t) (::GtkPrintOperation* operation, ::GtkPrintContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->begin_print;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkPrintOperation*) (gobj_()), (::GtkPrintContext*) (context_to_c));
}

// void PrintOperation::custom_widget_apply (GtkPrintOperation* operation, GtkWidget* widget);
// void PrintOperation::custom_widget_apply (::GtkPrintOperation* operation, ::GtkWidget* widget);
void PrintOperationClass::custom_widget_apply_ (Gtk::Widget widget) noexcept
{
  if (!get_struct_()->custom_widget_apply) return ;
  typedef void (*call_wrap_t) (::GtkPrintOperation* operation, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->custom_widget_apply;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkPrintOperation*) (gobj_()), (::GtkWidget*) (widget_to_c));
}

// void PrintOperation::done (GtkPrintOperation* operation, GtkPrintOperationResult result);
// void PrintOperation::done (::GtkPrintOperation* operation, ::GtkPrintOperationResult result);
void PrintOperationClass::done_ (Gtk::PrintOperationResult result) noexcept
{
  if (!get_struct_()->done) return ;
  typedef void (*call_wrap_t) (::GtkPrintOperation* operation, ::GtkPrintOperationResult result);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->done;
  auto result_to_c = gi::unwrap (result);
  call_wrap_v ((::GtkPrintOperation*) (gobj_()), (::GtkPrintOperationResult) (result_to_c));
}

// void PrintOperation::draw_page (GtkPrintOperation* operation, GtkPrintContext* context, gint page_nr);
// void PrintOperation::draw_page (::GtkPrintOperation* operation, ::GtkPrintContext* context, gint page_nr);
void PrintOperationClass::draw_page_ (Gtk::PrintContext context, gint page_nr) noexcept
{
  if (!get_struct_()->draw_page) return ;
  typedef void (*call_wrap_t) (::GtkPrintOperation* operation, ::GtkPrintContext* context, gint page_nr);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->draw_page;
  auto page_nr_to_c = page_nr;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkPrintOperation*) (gobj_()), (::GtkPrintContext*) (context_to_c), (gint) (page_nr_to_c));
}

// void PrintOperation::end_print (GtkPrintOperation* operation, GtkPrintContext* context);
// void PrintOperation::end_print (::GtkPrintOperation* operation, ::GtkPrintContext* context);
void PrintOperationClass::end_print_ (Gtk::PrintContext context) noexcept
{
  if (!get_struct_()->end_print) return ;
  typedef void (*call_wrap_t) (::GtkPrintOperation* operation, ::GtkPrintContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->end_print;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkPrintOperation*) (gobj_()), (::GtkPrintContext*) (context_to_c));
}

// gboolean PrintOperation::paginate (GtkPrintOperation* operation, GtkPrintContext* context);
// gboolean PrintOperation::paginate (::GtkPrintOperation* operation, ::GtkPrintContext* context);
bool PrintOperationClass::paginate_ (Gtk::PrintContext context) noexcept
{
  if (!get_struct_()->paginate) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkPrintOperation* operation, ::GtkPrintContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->paginate;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkPrintOperation*) (gobj_()), (::GtkPrintContext*) (context_to_c));
  return _temp_ret;
}

// gboolean PrintOperation::preview (GtkPrintOperation* operation, GtkPrintOperationPreview* preview, GtkPrintContext* context, GtkWindow* parent);
// gboolean PrintOperation::preview (::GtkPrintOperation* operation, ::GtkPrintOperationPreview* preview, ::GtkPrintContext* context, ::GtkWindow* parent);
bool PrintOperationClass::preview_ (Gtk::PrintOperationPreview preview, Gtk::PrintContext context, Gtk::Window parent) noexcept
{
  if (!get_struct_()->preview) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkPrintOperation* operation, ::GtkPrintOperationPreview* preview, ::GtkPrintContext* context, ::GtkWindow* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->preview;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto preview_to_c = gi::unwrap (preview, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkPrintOperation*) (gobj_()), (::GtkPrintOperationPreview*) (preview_to_c), (::GtkPrintContext*) (context_to_c), (::GtkWindow*) (parent_to_c));
  return _temp_ret;
}

// void PrintOperation::request_page_setup (GtkPrintOperation* operation, GtkPrintContext* context, gint page_nr, GtkPageSetup* setup);
// void PrintOperation::request_page_setup (::GtkPrintOperation* operation, ::GtkPrintContext* context, gint page_nr, ::GtkPageSetup* setup);
void PrintOperationClass::request_page_setup_ (Gtk::PrintContext context, gint page_nr, Gtk::PageSetup setup) noexcept
{
  if (!get_struct_()->request_page_setup) return ;
  typedef void (*call_wrap_t) (::GtkPrintOperation* operation, ::GtkPrintContext* context, gint page_nr, ::GtkPageSetup* setup);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->request_page_setup;
  auto setup_to_c = gi::unwrap (setup, gi::transfer_none, gi::direction_in);
  auto page_nr_to_c = page_nr;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkPrintOperation*) (gobj_()), (::GtkPrintContext*) (context_to_c), (gint) (page_nr_to_c), (::GtkPageSetup*) (setup_to_c));
}

// void PrintOperation::status_changed (GtkPrintOperation* operation);
// void PrintOperation::status_changed (::GtkPrintOperation* operation);
void PrintOperationClass::status_changed_ () noexcept
{
  if (!get_struct_()->status_changed) return ;
  typedef void (*call_wrap_t) (::GtkPrintOperation* operation);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->status_changed;
  call_wrap_v ((::GtkPrintOperation*) (gobj_()));
}

// void PrintOperation::update_custom_widget (GtkPrintOperation* operation, GtkWidget* widget, GtkPageSetup* setup, GtkPrintSettings* settings);
// void PrintOperation::update_custom_widget (::GtkPrintOperation* operation, ::GtkWidget* widget, ::GtkPageSetup* setup, ::GtkPrintSettings* settings);
void PrintOperationClass::update_custom_widget_ (Gtk::Widget widget, Gtk::PageSetup setup, Gtk::PrintSettings settings) noexcept
{
  if (!get_struct_()->update_custom_widget) return ;
  typedef void (*call_wrap_t) (::GtkPrintOperation* operation, ::GtkWidget* widget, ::GtkPageSetup* setup, ::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->update_custom_widget;
  auto settings_to_c = gi::unwrap (settings, gi::transfer_none, gi::direction_in);
  auto setup_to_c = gi::unwrap (setup, gi::transfer_none, gi::direction_in);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkPrintOperation*) (gobj_()), (::GtkWidget*) (widget_to_c), (::GtkPageSetup*) (setup_to_c), (::GtkPrintSettings*) (settings_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
