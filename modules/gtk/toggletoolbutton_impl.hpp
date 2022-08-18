// AUTO-GENERATED

#ifndef _GI_GTK_TOGGLETOOLBUTTON_IMPL_HPP_
#define _GI_GTK_TOGGLETOOLBUTTON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkToolItem* gtk_toggle_tool_button_new ();
// ::GtkToggleToolButton* gtk_toggle_tool_button_new ();
Gtk::ToggleToolButton base::ToggleToolButtonBase::new_ () noexcept
{
  typedef ::GtkToggleToolButton* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_toggle_tool_button_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkToolItem* gtk_toggle_tool_button_new_from_stock (const gchar* stock_id);
// ::GtkToggleToolButton* gtk_toggle_tool_button_new_from_stock (const char* stock_id);
// IGNORE; deprecated

// gboolean gtk_toggle_tool_button_get_active (GtkToggleToolButton* button);
// gboolean gtk_toggle_tool_button_get_active (::GtkToggleToolButton* button);
bool base::ToggleToolButtonBase::get_active () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkToggleToolButton* button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_toggle_tool_button_get_active;
  auto _temp_ret = call_wrap_v ((::GtkToggleToolButton*) (gobj_()));
  return _temp_ret;
}

// void gtk_toggle_tool_button_set_active (GtkToggleToolButton* button, gboolean is_active);
// void gtk_toggle_tool_button_set_active (::GtkToggleToolButton* button, gboolean is_active);
void base::ToggleToolButtonBase::set_active (gboolean is_active) noexcept
{
  typedef void (*call_wrap_t) (::GtkToggleToolButton* button, gboolean is_active);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_toggle_tool_button_set_active;
  auto is_active_to_c = is_active;
  call_wrap_v ((::GtkToggleToolButton*) (gobj_()), (gboolean) (is_active_to_c));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/toggletoolbutton_extra_def_impl.hpp>)
#include <gtk/toggletoolbutton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/toggletoolbutton_extra_impl.hpp>)
#include <gtk/toggletoolbutton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ToggleToolButtonClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkToggleToolButtonClass *methods = (::GtkToggleToolButtonClass *) class_struct;
  (void) methods;

  methods->toggled = (decltype (methods->toggled)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::toggled_>;
}

// void ToggleToolButton::toggled (GtkToggleToolButton* button);
// void ToggleToolButton::toggled (::GtkToggleToolButton* button);
void ToggleToolButtonClass::toggled_ () noexcept
{
  if (!get_struct_()->toggled) return ;
  typedef void (*call_wrap_t) (::GtkToggleToolButton* button);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->toggled;
  call_wrap_v ((::GtkToggleToolButton*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
