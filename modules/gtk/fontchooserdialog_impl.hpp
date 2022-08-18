// AUTO-GENERATED

#ifndef _GI_GTK_FONTCHOOSERDIALOG_IMPL_HPP_
#define _GI_GTK_FONTCHOOSERDIALOG_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::FontChooser FontChooserDialogBase::interface_ (gi::interface_tag<Gtk::FontChooser>)
{ return gi::wrap ((Gtk::FontChooser::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

FontChooserDialogBase::operator Gtk::FontChooser ()
{ return interface_ (gi::interface_tag<Gtk::FontChooser>()); }

// GtkWidget* gtk_font_chooser_dialog_new (const gchar* title, GtkWindow* parent);
// ::GtkFontChooserDialog* gtk_font_chooser_dialog_new (const char* title, ::GtkWindow* parent);
Gtk::FontChooserDialog base::FontChooserDialogBase::new_ (const std::string & title, Gtk::Window parent) noexcept
{
  typedef ::GtkFontChooserDialog* (*call_wrap_t) (const char* title, ::GtkWindow* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_font_chooser_dialog_new;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  auto title_to_c = gi::unwrap (title, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (title_to_c), (::GtkWindow*) (parent_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gtk::FontChooserDialog base::FontChooserDialogBase::new_ () noexcept
{
  typedef ::GtkFontChooserDialog* (*call_wrap_t) (const char* title, ::GtkWindow* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_font_chooser_dialog_new;
  auto parent_to_c = nullptr;
  auto title_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (title_to_c), (::GtkWindow*) (parent_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/fontchooserdialog_extra_def_impl.hpp>)
#include <gtk/fontchooserdialog_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/fontchooserdialog_extra_impl.hpp>)
#include <gtk/fontchooserdialog_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void FontChooserDialogClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkFontChooserDialogClass *methods = (::GtkFontChooserDialogClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
