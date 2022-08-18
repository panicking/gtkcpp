// AUTO-GENERATED

#ifndef _GI_GTK_INFOBAR_IMPL_HPP_
#define _GI_GTK_INFOBAR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_info_bar_new ();
// ::GtkInfoBar* gtk_info_bar_new ();
Gtk::InfoBar base::InfoBarBase::new_ () noexcept
{
  typedef ::GtkInfoBar* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_info_bar_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_info_bar_new_with_buttons (const gchar* first_button_text);
// ::GtkInfoBar* gtk_info_bar_new_with_buttons (const char* first_button_text);
// IGNORE; not introspectable, varargs not supported

// void gtk_info_bar_add_action_widget (GtkInfoBar* info_bar, GtkWidget* child, gint response_id);
// void gtk_info_bar_add_action_widget (::GtkInfoBar* info_bar, ::GtkWidget* child, gint response_id);
void base::InfoBarBase::add_action_widget (Gtk::Widget child, gint response_id) noexcept
{
  typedef void (*call_wrap_t) (::GtkInfoBar* info_bar, ::GtkWidget* child, gint response_id);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_info_bar_add_action_widget;
  auto response_id_to_c = response_id;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkInfoBar*) (gobj_()), (::GtkWidget*) (child_to_c), (gint) (response_id_to_c));
}

// GtkWidget* gtk_info_bar_add_button (GtkInfoBar* info_bar, const gchar* button_text, gint response_id);
// ::GtkButton* gtk_info_bar_add_button (::GtkInfoBar* info_bar, const char* button_text, gint response_id);
Gtk::Button base::InfoBarBase::add_button (const std::string & button_text, gint response_id) noexcept
{
  typedef ::GtkButton* (*call_wrap_t) (::GtkInfoBar* info_bar, const char* button_text, gint response_id);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_info_bar_add_button;
  auto response_id_to_c = response_id;
  auto button_text_to_c = gi::unwrap (button_text, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkInfoBar*) (gobj_()), (const char*) (button_text_to_c), (gint) (response_id_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_info_bar_add_buttons (GtkInfoBar* info_bar, const gchar* first_button_text);
// void gtk_info_bar_add_buttons (::GtkInfoBar* info_bar, const char* first_button_text);
// IGNORE; not introspectable, varargs not supported

// GtkWidget* gtk_info_bar_get_action_area (GtkInfoBar* info_bar);
// ::GtkBox* gtk_info_bar_get_action_area (::GtkInfoBar* info_bar);
Gtk::Box base::InfoBarBase::get_action_area () noexcept
{
  typedef ::GtkBox* (*call_wrap_t) (::GtkInfoBar* info_bar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_info_bar_get_action_area;
  auto _temp_ret = call_wrap_v ((::GtkInfoBar*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_info_bar_get_content_area (GtkInfoBar* info_bar);
// ::GtkBox* gtk_info_bar_get_content_area (::GtkInfoBar* info_bar);
Gtk::Box base::InfoBarBase::get_content_area () noexcept
{
  typedef ::GtkBox* (*call_wrap_t) (::GtkInfoBar* info_bar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_info_bar_get_content_area;
  auto _temp_ret = call_wrap_v ((::GtkInfoBar*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkMessageType gtk_info_bar_get_message_type (GtkInfoBar* info_bar);
// ::GtkMessageType gtk_info_bar_get_message_type (::GtkInfoBar* info_bar);
Gtk::MessageType base::InfoBarBase::get_message_type () noexcept
{
  typedef ::GtkMessageType (*call_wrap_t) (::GtkInfoBar* info_bar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_info_bar_get_message_type;
  auto _temp_ret = call_wrap_v ((::GtkInfoBar*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gtk_info_bar_get_revealed (GtkInfoBar* info_bar);
// gboolean gtk_info_bar_get_revealed (::GtkInfoBar* info_bar);
bool base::InfoBarBase::get_revealed () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkInfoBar* info_bar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_info_bar_get_revealed;
  auto _temp_ret = call_wrap_v ((::GtkInfoBar*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_info_bar_get_show_close_button (GtkInfoBar* info_bar);
// gboolean gtk_info_bar_get_show_close_button (::GtkInfoBar* info_bar);
bool base::InfoBarBase::get_show_close_button () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkInfoBar* info_bar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_info_bar_get_show_close_button;
  auto _temp_ret = call_wrap_v ((::GtkInfoBar*) (gobj_()));
  return _temp_ret;
}

// void gtk_info_bar_response (GtkInfoBar* info_bar, gint response_id);
// void gtk_info_bar_response (::GtkInfoBar* info_bar, gint response_id);
void base::InfoBarBase::response (gint response_id) noexcept
{
  typedef void (*call_wrap_t) (::GtkInfoBar* info_bar, gint response_id);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_info_bar_response;
  auto response_id_to_c = response_id;
  call_wrap_v ((::GtkInfoBar*) (gobj_()), (gint) (response_id_to_c));
}

// void gtk_info_bar_set_default_response (GtkInfoBar* info_bar, gint response_id);
// void gtk_info_bar_set_default_response (::GtkInfoBar* info_bar, gint response_id);
void base::InfoBarBase::set_default_response (gint response_id) noexcept
{
  typedef void (*call_wrap_t) (::GtkInfoBar* info_bar, gint response_id);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_info_bar_set_default_response;
  auto response_id_to_c = response_id;
  call_wrap_v ((::GtkInfoBar*) (gobj_()), (gint) (response_id_to_c));
}

// void gtk_info_bar_set_message_type (GtkInfoBar* info_bar, GtkMessageType message_type);
// void gtk_info_bar_set_message_type (::GtkInfoBar* info_bar, ::GtkMessageType message_type);
void base::InfoBarBase::set_message_type (Gtk::MessageType message_type) noexcept
{
  typedef void (*call_wrap_t) (::GtkInfoBar* info_bar, ::GtkMessageType message_type);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_info_bar_set_message_type;
  auto message_type_to_c = gi::unwrap (message_type);
  call_wrap_v ((::GtkInfoBar*) (gobj_()), (::GtkMessageType) (message_type_to_c));
}

// void gtk_info_bar_set_response_sensitive (GtkInfoBar* info_bar, gint response_id, gboolean setting);
// void gtk_info_bar_set_response_sensitive (::GtkInfoBar* info_bar, gint response_id, gboolean setting);
void base::InfoBarBase::set_response_sensitive (gint response_id, gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkInfoBar* info_bar, gint response_id, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_info_bar_set_response_sensitive;
  auto setting_to_c = setting;
  auto response_id_to_c = response_id;
  call_wrap_v ((::GtkInfoBar*) (gobj_()), (gint) (response_id_to_c), (gboolean) (setting_to_c));
}

// void gtk_info_bar_set_revealed (GtkInfoBar* info_bar, gboolean revealed);
// void gtk_info_bar_set_revealed (::GtkInfoBar* info_bar, gboolean revealed);
void base::InfoBarBase::set_revealed (gboolean revealed) noexcept
{
  typedef void (*call_wrap_t) (::GtkInfoBar* info_bar, gboolean revealed);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_info_bar_set_revealed;
  auto revealed_to_c = revealed;
  call_wrap_v ((::GtkInfoBar*) (gobj_()), (gboolean) (revealed_to_c));
}

// void gtk_info_bar_set_show_close_button (GtkInfoBar* info_bar, gboolean setting);
// void gtk_info_bar_set_show_close_button (::GtkInfoBar* info_bar, gboolean setting);
void base::InfoBarBase::set_show_close_button (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkInfoBar* info_bar, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_info_bar_set_show_close_button;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkInfoBar*) (gobj_()), (gboolean) (setting_to_c));
}




} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/infobar_extra_def_impl.hpp>)
#include <gtk/infobar_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/infobar_extra_impl.hpp>)
#include <gtk/infobar_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void InfoBarClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkInfoBarClass *methods = (::GtkInfoBarClass *) class_struct;
  (void) methods;

  methods->close = (decltype (methods->close)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::close_>;
  methods->response = (decltype (methods->response)) detail::method_wrapper<self, void (*) (gint response_id), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::response_>;
}

// void InfoBar::close (GtkInfoBar* info_bar);
// void InfoBar::close (::GtkInfoBar* info_bar);
void InfoBarClass::close_ () noexcept
{
  if (!get_struct_()->close) return ;
  typedef void (*call_wrap_t) (::GtkInfoBar* info_bar);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->close;
  call_wrap_v ((::GtkInfoBar*) (gobj_()));
}

// void InfoBar::response (GtkInfoBar* info_bar, gint response_id);
// void InfoBar::response (::GtkInfoBar* info_bar, gint response_id);
void InfoBarClass::response_ (gint response_id) noexcept
{
  if (!get_struct_()->response) return ;
  typedef void (*call_wrap_t) (::GtkInfoBar* info_bar, gint response_id);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->response;
  auto response_id_to_c = response_id;
  call_wrap_v ((::GtkInfoBar*) (gobj_()), (gint) (response_id_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
