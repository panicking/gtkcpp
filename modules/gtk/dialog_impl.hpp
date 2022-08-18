// AUTO-GENERATED

#ifndef _GI_GTK_DIALOG_IMPL_HPP_
#define _GI_GTK_DIALOG_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_dialog_new ();
// ::GtkDialog* gtk_dialog_new ();
Gtk::Dialog base::DialogBase::new_ () noexcept
{
  typedef ::GtkDialog* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_dialog_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_dialog_new_with_buttons (const gchar* title, GtkWindow* parent, GtkDialogFlags flags, const gchar* first_button_text);
// ::GtkDialog* gtk_dialog_new_with_buttons (const char* title, ::GtkWindow* parent, ::GtkDialogFlags flags, const char* first_button_text);
// IGNORE; not introspectable, varargs not supported

// void gtk_dialog_add_action_widget (GtkDialog* dialog, GtkWidget* child, gint response_id);
// void gtk_dialog_add_action_widget (::GtkDialog* dialog, ::GtkWidget* child, gint response_id);
void base::DialogBase::add_action_widget (Gtk::Widget child, gint response_id) noexcept
{
  typedef void (*call_wrap_t) (::GtkDialog* dialog, ::GtkWidget* child, gint response_id);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_dialog_add_action_widget;
  auto response_id_to_c = response_id;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkDialog*) (gobj_()), (::GtkWidget*) (child_to_c), (gint) (response_id_to_c));
}

// GtkWidget* gtk_dialog_add_button (GtkDialog* dialog, const gchar* button_text, gint response_id);
// ::GtkWidget* gtk_dialog_add_button (::GtkDialog* dialog, const char* button_text, gint response_id);
Gtk::Widget base::DialogBase::add_button (const std::string & button_text, gint response_id) noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkDialog* dialog, const char* button_text, gint response_id);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_dialog_add_button;
  auto response_id_to_c = response_id;
  auto button_text_to_c = gi::unwrap (button_text, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkDialog*) (gobj_()), (const char*) (button_text_to_c), (gint) (response_id_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_dialog_add_buttons (GtkDialog* dialog, const gchar* first_button_text);
// void gtk_dialog_add_buttons (::GtkDialog* dialog, const char* first_button_text);
// IGNORE; not introspectable, varargs not supported

// GtkWidget* gtk_dialog_get_action_area (GtkDialog* dialog);
// ::GtkBox* gtk_dialog_get_action_area (::GtkDialog* dialog);
// IGNORE; deprecated

// GtkWidget* gtk_dialog_get_content_area (GtkDialog* dialog);
// ::GtkBox* gtk_dialog_get_content_area (::GtkDialog* dialog);
Gtk::Box base::DialogBase::get_content_area () noexcept
{
  typedef ::GtkBox* (*call_wrap_t) (::GtkDialog* dialog);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_dialog_get_content_area;
  auto _temp_ret = call_wrap_v ((::GtkDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_dialog_get_header_bar (GtkDialog* dialog);
// ::GtkHeaderBar* gtk_dialog_get_header_bar (::GtkDialog* dialog);
Gtk::HeaderBar base::DialogBase::get_header_bar () noexcept
{
  typedef ::GtkHeaderBar* (*call_wrap_t) (::GtkDialog* dialog);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_dialog_get_header_bar;
  auto _temp_ret = call_wrap_v ((::GtkDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gint gtk_dialog_get_response_for_widget (GtkDialog* dialog, GtkWidget* widget);
// gint gtk_dialog_get_response_for_widget (::GtkDialog* dialog, ::GtkWidget* widget);
gint base::DialogBase::get_response_for_widget (Gtk::Widget widget) noexcept
{
  typedef gint (*call_wrap_t) (::GtkDialog* dialog, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_dialog_get_response_for_widget;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkDialog*) (gobj_()), (::GtkWidget*) (widget_to_c));
  return _temp_ret;
}

// GtkWidget* gtk_dialog_get_widget_for_response (GtkDialog* dialog, gint response_id);
// ::GtkWidget* gtk_dialog_get_widget_for_response (::GtkDialog* dialog, gint response_id);
Gtk::Widget base::DialogBase::get_widget_for_response (gint response_id) noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkDialog* dialog, gint response_id);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_dialog_get_widget_for_response;
  auto response_id_to_c = response_id;
  auto _temp_ret = call_wrap_v ((::GtkDialog*) (gobj_()), (gint) (response_id_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_dialog_response (GtkDialog* dialog, gint response_id);
// void gtk_dialog_response (::GtkDialog* dialog, gint response_id);
void base::DialogBase::response (gint response_id) noexcept
{
  typedef void (*call_wrap_t) (::GtkDialog* dialog, gint response_id);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_dialog_response;
  auto response_id_to_c = response_id;
  call_wrap_v ((::GtkDialog*) (gobj_()), (gint) (response_id_to_c));
}

// gint gtk_dialog_run (GtkDialog* dialog);
// gint gtk_dialog_run (::GtkDialog* dialog);
gint base::DialogBase::run () noexcept
{
  typedef gint (*call_wrap_t) (::GtkDialog* dialog);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_dialog_run;
  auto _temp_ret = call_wrap_v ((::GtkDialog*) (gobj_()));
  return _temp_ret;
}

// void gtk_dialog_set_alternative_button_order (GtkDialog* dialog, gint first_response_id);
// void gtk_dialog_set_alternative_button_order (::GtkDialog* dialog, gint first_response_id);
// IGNORE; deprecated, varargs not supported

// void gtk_dialog_set_alternative_button_order_from_array (GtkDialog* dialog, gint n_params, gint* new_order);
// void gtk_dialog_set_alternative_button_order_from_array (::GtkDialog* dialog, gint n_params, gint* new_order);
// IGNORE; deprecated

// void gtk_dialog_set_default_response (GtkDialog* dialog, gint response_id);
// void gtk_dialog_set_default_response (::GtkDialog* dialog, gint response_id);
void base::DialogBase::set_default_response (gint response_id) noexcept
{
  typedef void (*call_wrap_t) (::GtkDialog* dialog, gint response_id);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_dialog_set_default_response;
  auto response_id_to_c = response_id;
  call_wrap_v ((::GtkDialog*) (gobj_()), (gint) (response_id_to_c));
}

// void gtk_dialog_set_response_sensitive (GtkDialog* dialog, gint response_id, gboolean setting);
// void gtk_dialog_set_response_sensitive (::GtkDialog* dialog, gint response_id, gboolean setting);
void base::DialogBase::set_response_sensitive (gint response_id, gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkDialog* dialog, gint response_id, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_dialog_set_response_sensitive;
  auto setting_to_c = setting;
  auto response_id_to_c = response_id;
  call_wrap_v ((::GtkDialog*) (gobj_()), (gint) (response_id_to_c), (gboolean) (setting_to_c));
}




} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/dialog_extra_def_impl.hpp>)
#include <gtk/dialog_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/dialog_extra_impl.hpp>)
#include <gtk/dialog_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void DialogClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkDialogClass *methods = (::GtkDialogClass *) class_struct;
  (void) methods;

  methods->close = (decltype (methods->close)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::close_>;
  methods->response = (decltype (methods->response)) detail::method_wrapper<self, void (*) (gint response_id), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::response_>;
}

// void Dialog::close (GtkDialog* dialog);
// void Dialog::close (::GtkDialog* dialog);
void DialogClass::close_ () noexcept
{
  if (!get_struct_()->close) return ;
  typedef void (*call_wrap_t) (::GtkDialog* dialog);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->close;
  call_wrap_v ((::GtkDialog*) (gobj_()));
}

// void Dialog::response (GtkDialog* dialog, gint response_id);
// void Dialog::response (::GtkDialog* dialog, gint response_id);
void DialogClass::response_ (gint response_id) noexcept
{
  if (!get_struct_()->response) return ;
  typedef void (*call_wrap_t) (::GtkDialog* dialog, gint response_id);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->response;
  auto response_id_to_c = response_id;
  call_wrap_v ((::GtkDialog*) (gobj_()), (gint) (response_id_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
