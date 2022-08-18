// AUTO-GENERATED

#ifndef _GI_GTK_FILECHOOSERBUTTON_IMPL_HPP_
#define _GI_GTK_FILECHOOSERBUTTON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::FileChooser FileChooserButtonBase::interface_ (gi::interface_tag<Gtk::FileChooser>)
{ return gi::wrap ((Gtk::FileChooser::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

FileChooserButtonBase::operator Gtk::FileChooser ()
{ return interface_ (gi::interface_tag<Gtk::FileChooser>()); }

// GtkWidget* gtk_file_chooser_button_new (const gchar* title, GtkFileChooserAction action);
// ::GtkFileChooserButton* gtk_file_chooser_button_new (const char* title, ::GtkFileChooserAction action);
Gtk::FileChooserButton base::FileChooserButtonBase::new_ (const std::string & title, Gtk::FileChooserAction action) noexcept
{
  typedef ::GtkFileChooserButton* (*call_wrap_t) (const char* title, ::GtkFileChooserAction action);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_button_new;
  auto action_to_c = gi::unwrap (action);
  auto title_to_c = gi::unwrap (title, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (title_to_c), (::GtkFileChooserAction) (action_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_file_chooser_button_new_with_dialog (GtkWidget* dialog);
// ::GtkFileChooserButton* gtk_file_chooser_button_new_with_dialog (::GtkDialog* dialog);
Gtk::FileChooserButton base::FileChooserButtonBase::new_with_dialog (Gtk::Dialog dialog) noexcept
{
  typedef ::GtkFileChooserButton* (*call_wrap_t) (::GtkDialog* dialog);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_button_new_with_dialog;
  auto dialog_to_c = gi::unwrap (dialog, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkDialog*) (dialog_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_file_chooser_button_get_focus_on_click (GtkFileChooserButton* button);
// gboolean gtk_file_chooser_button_get_focus_on_click (::GtkFileChooserButton* button);
// IGNORE; deprecated

// const gchar* gtk_file_chooser_button_get_title (GtkFileChooserButton* button);
// const char* gtk_file_chooser_button_get_title (::GtkFileChooserButton* button);
std::string base::FileChooserButtonBase::get_title () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkFileChooserButton* button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_button_get_title;
  auto _temp_ret = call_wrap_v ((::GtkFileChooserButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gint gtk_file_chooser_button_get_width_chars (GtkFileChooserButton* button);
// gint gtk_file_chooser_button_get_width_chars (::GtkFileChooserButton* button);
gint base::FileChooserButtonBase::get_width_chars () noexcept
{
  typedef gint (*call_wrap_t) (::GtkFileChooserButton* button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_button_get_width_chars;
  auto _temp_ret = call_wrap_v ((::GtkFileChooserButton*) (gobj_()));
  return _temp_ret;
}

// void gtk_file_chooser_button_set_focus_on_click (GtkFileChooserButton* button, gboolean focus_on_click);
// void gtk_file_chooser_button_set_focus_on_click (::GtkFileChooserButton* button, gboolean focus_on_click);
// IGNORE; deprecated

// void gtk_file_chooser_button_set_title (GtkFileChooserButton* button, const gchar* title);
// void gtk_file_chooser_button_set_title (::GtkFileChooserButton* button, const char* title);
void base::FileChooserButtonBase::set_title (const std::string & title) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileChooserButton* button, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_button_set_title;
  auto title_to_c = gi::unwrap (title, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkFileChooserButton*) (gobj_()), (const char*) (title_to_c));
}

// void gtk_file_chooser_button_set_width_chars (GtkFileChooserButton* button, gint n_chars);
// void gtk_file_chooser_button_set_width_chars (::GtkFileChooserButton* button, gint n_chars);
void base::FileChooserButtonBase::set_width_chars (gint n_chars) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileChooserButton* button, gint n_chars);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_button_set_width_chars;
  auto n_chars_to_c = n_chars;
  call_wrap_v ((::GtkFileChooserButton*) (gobj_()), (gint) (n_chars_to_c));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/filechooserbutton_extra_def_impl.hpp>)
#include <gtk/filechooserbutton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/filechooserbutton_extra_impl.hpp>)
#include <gtk/filechooserbutton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void FileChooserButtonClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkFileChooserButtonClass *methods = (::GtkFileChooserButtonClass *) class_struct;
  (void) methods;

  methods->file_set = (decltype (methods->file_set)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::file_set_>;
}

// void FileChooserButton::file_set (GtkFileChooserButton* fc);
// void FileChooserButton::file_set (::GtkFileChooserButton* fc);
void FileChooserButtonClass::file_set_ () noexcept
{
  if (!get_struct_()->file_set) return ;
  typedef void (*call_wrap_t) (::GtkFileChooserButton* fc);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->file_set;
  call_wrap_v ((::GtkFileChooserButton*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
