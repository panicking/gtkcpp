// AUTO-GENERATED

#ifndef _GI_GTK_COLORSELECTIONDIALOG_IMPL_HPP_
#define _GI_GTK_COLORSELECTIONDIALOG_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_color_selection_dialog_new (const gchar* title);
// ::GtkColorSelectionDialog* gtk_color_selection_dialog_new (const char* title);
Gtk::ColorSelectionDialog base::ColorSelectionDialogBase::new_ (const std::string & title) noexcept
{
  typedef ::GtkColorSelectionDialog* (*call_wrap_t) (const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_color_selection_dialog_new;
  auto title_to_c = gi::unwrap (title, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (title_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_color_selection_dialog_get_color_selection (GtkColorSelectionDialog* colorsel);
// ::GtkWidget* gtk_color_selection_dialog_get_color_selection (::GtkColorSelectionDialog* colorsel);
Gtk::Widget base::ColorSelectionDialogBase::get_color_selection () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkColorSelectionDialog* colorsel);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_color_selection_dialog_get_color_selection;
  auto _temp_ret = call_wrap_v ((::GtkColorSelectionDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/colorselectiondialog_extra_def_impl.hpp>)
#include <gtk/colorselectiondialog_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/colorselectiondialog_extra_impl.hpp>)
#include <gtk/colorselectiondialog_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ColorSelectionDialogClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkColorSelectionDialogClass *methods = (::GtkColorSelectionDialogClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
