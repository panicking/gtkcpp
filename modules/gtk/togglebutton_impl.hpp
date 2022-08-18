// AUTO-GENERATED

#ifndef _GI_GTK_TOGGLEBUTTON_IMPL_HPP_
#define _GI_GTK_TOGGLEBUTTON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_toggle_button_new ();
// ::GtkToggleButton* gtk_toggle_button_new ();
Gtk::ToggleButton base::ToggleButtonBase::new_ () noexcept
{
  typedef ::GtkToggleButton* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_toggle_button_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_toggle_button_new_with_label (const gchar* label);
// ::GtkToggleButton* gtk_toggle_button_new_with_label (const char* label);
Gtk::ToggleButton base::ToggleButtonBase::new_with_label (const std::string & label) noexcept
{
  typedef ::GtkToggleButton* (*call_wrap_t) (const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_toggle_button_new_with_label;
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_toggle_button_new_with_mnemonic (const gchar* label);
// ::GtkToggleButton* gtk_toggle_button_new_with_mnemonic (const char* label);
Gtk::ToggleButton base::ToggleButtonBase::new_with_mnemonic (const std::string & label) noexcept
{
  typedef ::GtkToggleButton* (*call_wrap_t) (const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_toggle_button_new_with_mnemonic;
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_toggle_button_get_active (GtkToggleButton* toggle_button);
// gboolean gtk_toggle_button_get_active (::GtkToggleButton* toggle_button);
bool base::ToggleButtonBase::get_active () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkToggleButton* toggle_button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_toggle_button_get_active;
  auto _temp_ret = call_wrap_v ((::GtkToggleButton*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_toggle_button_get_inconsistent (GtkToggleButton* toggle_button);
// gboolean gtk_toggle_button_get_inconsistent (::GtkToggleButton* toggle_button);
bool base::ToggleButtonBase::get_inconsistent () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkToggleButton* toggle_button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_toggle_button_get_inconsistent;
  auto _temp_ret = call_wrap_v ((::GtkToggleButton*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_toggle_button_get_mode (GtkToggleButton* toggle_button);
// gboolean gtk_toggle_button_get_mode (::GtkToggleButton* toggle_button);
bool base::ToggleButtonBase::get_mode () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkToggleButton* toggle_button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_toggle_button_get_mode;
  auto _temp_ret = call_wrap_v ((::GtkToggleButton*) (gobj_()));
  return _temp_ret;
}

// void gtk_toggle_button_set_active (GtkToggleButton* toggle_button, gboolean is_active);
// void gtk_toggle_button_set_active (::GtkToggleButton* toggle_button, gboolean is_active);
void base::ToggleButtonBase::set_active (gboolean is_active) noexcept
{
  typedef void (*call_wrap_t) (::GtkToggleButton* toggle_button, gboolean is_active);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_toggle_button_set_active;
  auto is_active_to_c = is_active;
  call_wrap_v ((::GtkToggleButton*) (gobj_()), (gboolean) (is_active_to_c));
}

// void gtk_toggle_button_set_inconsistent (GtkToggleButton* toggle_button, gboolean setting);
// void gtk_toggle_button_set_inconsistent (::GtkToggleButton* toggle_button, gboolean setting);
void base::ToggleButtonBase::set_inconsistent (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkToggleButton* toggle_button, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_toggle_button_set_inconsistent;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkToggleButton*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_toggle_button_set_mode (GtkToggleButton* toggle_button, gboolean draw_indicator);
// void gtk_toggle_button_set_mode (::GtkToggleButton* toggle_button, gboolean draw_indicator);
void base::ToggleButtonBase::set_mode (gboolean draw_indicator) noexcept
{
  typedef void (*call_wrap_t) (::GtkToggleButton* toggle_button, gboolean draw_indicator);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_toggle_button_set_mode;
  auto draw_indicator_to_c = draw_indicator;
  call_wrap_v ((::GtkToggleButton*) (gobj_()), (gboolean) (draw_indicator_to_c));
}

// void gtk_toggle_button_toggled (GtkToggleButton* toggle_button);
// void gtk_toggle_button_toggled (::GtkToggleButton* toggle_button);
void base::ToggleButtonBase::toggled () noexcept
{
  typedef void (*call_wrap_t) (::GtkToggleButton* toggle_button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_toggle_button_toggled;
  call_wrap_v ((::GtkToggleButton*) (gobj_()));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/togglebutton_extra_def_impl.hpp>)
#include <gtk/togglebutton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/togglebutton_extra_impl.hpp>)
#include <gtk/togglebutton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ToggleButtonClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkToggleButtonClass *methods = (::GtkToggleButtonClass *) class_struct;
  (void) methods;

  methods->toggled = (decltype (methods->toggled)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::toggled_>;
}

// void ToggleButton::toggled (GtkToggleButton* toggle_button);
// void ToggleButton::toggled (::GtkToggleButton* toggle_button);
void ToggleButtonClass::toggled_ () noexcept
{
  if (!get_struct_()->toggled) return ;
  typedef void (*call_wrap_t) (::GtkToggleButton* toggle_button);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->toggled;
  call_wrap_v ((::GtkToggleButton*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
