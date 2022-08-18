// AUTO-GENERATED

#ifndef _GI_GTK_CHECKBUTTON_IMPL_HPP_
#define _GI_GTK_CHECKBUTTON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_check_button_new ();
// ::GtkCheckButton* gtk_check_button_new ();
Gtk::CheckButton base::CheckButtonBase::new_ () noexcept
{
  typedef ::GtkCheckButton* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_check_button_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_check_button_new_with_label (const gchar* label);
// ::GtkCheckButton* gtk_check_button_new_with_label (const char* label);
Gtk::CheckButton base::CheckButtonBase::new_with_label (const std::string & label) noexcept
{
  typedef ::GtkCheckButton* (*call_wrap_t) (const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_check_button_new_with_label;
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_check_button_new_with_mnemonic (const gchar* label);
// ::GtkCheckButton* gtk_check_button_new_with_mnemonic (const char* label);
Gtk::CheckButton base::CheckButtonBase::new_with_mnemonic (const std::string & label) noexcept
{
  typedef ::GtkCheckButton* (*call_wrap_t) (const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_check_button_new_with_mnemonic;
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/checkbutton_extra_def_impl.hpp>)
#include <gtk/checkbutton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/checkbutton_extra_impl.hpp>)
#include <gtk/checkbutton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void CheckButtonClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkCheckButtonClass *methods = (::GtkCheckButtonClass *) class_struct;
  (void) methods;

  methods->draw_indicator = (decltype (methods->draw_indicator)) detail::method_wrapper<self, void (*) (cairo::Context cr), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::draw_indicator_>;
}

// void CheckButton::draw_indicator (GtkCheckButton* check_button, cairo_t* cr);
// void CheckButton::draw_indicator (::GtkCheckButton* check_button, ::cairo_t* cr);
void CheckButtonClass::draw_indicator_ (cairo::Context cr) noexcept
{
  if (!get_struct_()->draw_indicator) return ;
  typedef void (*call_wrap_t) (::GtkCheckButton* check_button, ::cairo_t* cr);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->draw_indicator;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCheckButton*) (gobj_()), (::cairo_t*) (cr_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
