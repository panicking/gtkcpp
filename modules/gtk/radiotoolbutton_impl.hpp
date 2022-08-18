// AUTO-GENERATED

#ifndef _GI_GTK_RADIOTOOLBUTTON_IMPL_HPP_
#define _GI_GTK_RADIOTOOLBUTTON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkToolItem* gtk_radio_tool_button_new (GSList* group);
// ::GtkRadioToolButton* gtk_radio_tool_button_new (::GSList* group);
Gtk::RadioToolButton base::RadioToolButtonBase::new_ (const std::vector<Gtk::RadioButton> & group) noexcept
{
  typedef ::GtkRadioToolButton* (*call_wrap_t) (::GSList* group);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_radio_tool_button_new;
  auto group_i = detail::make_list_unwrap_range<::GSList> (group);
  auto group_w = unwrap (group_i, gi::transfer_none, direction_in);
  auto group_to_c = group_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((::GSList*) (group_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkToolItem* gtk_radio_tool_button_new_from_stock (GSList* group, const gchar* stock_id);
// ::GtkRadioToolButton* gtk_radio_tool_button_new_from_stock (::GSList* group, const char* stock_id);
// IGNORE; deprecated

// GtkToolItem* gtk_radio_tool_button_new_from_widget (GtkRadioToolButton* group);
// ::GtkRadioToolButton* gtk_radio_tool_button_new_from_widget (::GtkRadioToolButton* group);
Gtk::RadioToolButton base::RadioToolButtonBase::new_from_widget (Gtk::RadioToolButton group) noexcept
{
  typedef ::GtkRadioToolButton* (*call_wrap_t) (::GtkRadioToolButton* group);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_radio_tool_button_new_from_widget;
  auto group_to_c = gi::unwrap (group, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkRadioToolButton*) (group_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gtk::RadioToolButton base::RadioToolButtonBase::new_from_widget () noexcept
{
  typedef ::GtkRadioToolButton* (*call_wrap_t) (::GtkRadioToolButton* group);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_radio_tool_button_new_from_widget;
  auto group_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkRadioToolButton*) (group_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkToolItem* gtk_radio_tool_button_new_with_stock_from_widget (GtkRadioToolButton* group, const gchar* stock_id);
// ::GtkRadioToolButton* gtk_radio_tool_button_new_with_stock_from_widget (::GtkRadioToolButton* group, const char* stock_id);
// IGNORE; deprecated

// GSList* gtk_radio_tool_button_get_group (GtkRadioToolButton* button);
// ::GSList* gtk_radio_tool_button_get_group (::GtkRadioToolButton* button);
std::vector<Gtk::RadioButton> base::RadioToolButtonBase::get_group () noexcept
{
  typedef ::GSList* (*call_wrap_t) (::GtkRadioToolButton* button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_radio_tool_button_get_group;
  auto _temp_ret = call_wrap_v ((::GtkRadioToolButton*) (gobj_()));
  return gi::detail::wrap_list<Gtk::RadioButton> (_temp_ret, gi::transfer_none);
}

// void gtk_radio_tool_button_set_group (GtkRadioToolButton* button, GSList* group);
// void gtk_radio_tool_button_set_group (::GtkRadioToolButton* button, ::GSList* group);
void base::RadioToolButtonBase::set_group (const std::vector<Gtk::RadioButton> & group) noexcept
{
  typedef void (*call_wrap_t) (::GtkRadioToolButton* button, ::GSList* group);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_radio_tool_button_set_group;
  auto group_i = detail::make_list_unwrap_range<::GSList> (group);
  auto group_w = unwrap (group_i, gi::transfer_none, direction_in);
  auto group_to_c = group_w.gobj_(false);
  call_wrap_v ((::GtkRadioToolButton*) (gobj_()), (::GSList*) (group_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/radiotoolbutton_extra_def_impl.hpp>)
#include <gtk/radiotoolbutton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/radiotoolbutton_extra_impl.hpp>)
#include <gtk/radiotoolbutton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void RadioToolButtonClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkRadioToolButtonClass *methods = (::GtkRadioToolButtonClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
