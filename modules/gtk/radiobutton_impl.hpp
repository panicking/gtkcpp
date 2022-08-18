// AUTO-GENERATED

#ifndef _GI_GTK_RADIOBUTTON_IMPL_HPP_
#define _GI_GTK_RADIOBUTTON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_radio_button_new (GSList* group);
// ::GtkRadioButton* gtk_radio_button_new (::GSList* group);
Gtk::RadioButton base::RadioButtonBase::new_ (const std::vector<Gtk::RadioButton> & group) noexcept
{
  typedef ::GtkRadioButton* (*call_wrap_t) (::GSList* group);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_radio_button_new;
  auto group_i = detail::make_list_unwrap_range<::GSList> (group);
  auto group_w = unwrap (group_i, gi::transfer_none, direction_in);
  auto group_to_c = group_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((::GSList*) (group_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_radio_button_new_from_widget (GtkRadioButton* radio_group_member);
// ::GtkRadioButton* gtk_radio_button_new_from_widget (::GtkRadioButton* radio_group_member);
Gtk::RadioButton base::RadioButtonBase::new_from_widget (Gtk::RadioButton radio_group_member) noexcept
{
  typedef ::GtkRadioButton* (*call_wrap_t) (::GtkRadioButton* radio_group_member);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_radio_button_new_from_widget;
  auto radio_group_member_to_c = gi::unwrap (radio_group_member, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkRadioButton*) (radio_group_member_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gtk::RadioButton base::RadioButtonBase::new_from_widget () noexcept
{
  typedef ::GtkRadioButton* (*call_wrap_t) (::GtkRadioButton* radio_group_member);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_radio_button_new_from_widget;
  auto radio_group_member_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkRadioButton*) (radio_group_member_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_radio_button_new_with_label (GSList* group, const gchar* label);
// ::GtkRadioButton* gtk_radio_button_new_with_label (::GSList* group, const char* label);
Gtk::RadioButton base::RadioButtonBase::new_with_label (const std::vector<Gtk::RadioButton> & group, const std::string & label) noexcept
{
  typedef ::GtkRadioButton* (*call_wrap_t) (::GSList* group, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_radio_button_new_with_label;
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  auto group_i = detail::make_list_unwrap_range<::GSList> (group);
  auto group_w = unwrap (group_i, gi::transfer_none, direction_in);
  auto group_to_c = group_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((::GSList*) (group_to_c), (const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_radio_button_new_with_label_from_widget (GtkRadioButton* radio_group_member, const gchar* label);
// ::GtkRadioButton* gtk_radio_button_new_with_label_from_widget (::GtkRadioButton* radio_group_member, const char* label);
Gtk::RadioButton base::RadioButtonBase::new_with_label_from_widget (Gtk::RadioButton radio_group_member, const std::string & label) noexcept
{
  typedef ::GtkRadioButton* (*call_wrap_t) (::GtkRadioButton* radio_group_member, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_radio_button_new_with_label_from_widget;
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  auto radio_group_member_to_c = gi::unwrap (radio_group_member, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkRadioButton*) (radio_group_member_to_c), (const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gtk::RadioButton base::RadioButtonBase::new_with_label_from_widget (const std::string & label) noexcept
{
  typedef ::GtkRadioButton* (*call_wrap_t) (::GtkRadioButton* radio_group_member, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_radio_button_new_with_label_from_widget;
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  auto radio_group_member_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkRadioButton*) (radio_group_member_to_c), (const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_radio_button_new_with_mnemonic (GSList* group, const gchar* label);
// ::GtkRadioButton* gtk_radio_button_new_with_mnemonic (::GSList* group, const char* label);
Gtk::RadioButton base::RadioButtonBase::new_with_mnemonic (const std::vector<Gtk::RadioButton> & group, const std::string & label) noexcept
{
  typedef ::GtkRadioButton* (*call_wrap_t) (::GSList* group, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_radio_button_new_with_mnemonic;
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  auto group_i = detail::make_list_unwrap_range<::GSList> (group);
  auto group_w = unwrap (group_i, gi::transfer_none, direction_in);
  auto group_to_c = group_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((::GSList*) (group_to_c), (const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_radio_button_new_with_mnemonic_from_widget (GtkRadioButton* radio_group_member, const gchar* label);
// ::GtkRadioButton* gtk_radio_button_new_with_mnemonic_from_widget (::GtkRadioButton* radio_group_member, const char* label);
Gtk::RadioButton base::RadioButtonBase::new_with_mnemonic_from_widget (Gtk::RadioButton radio_group_member, const std::string & label) noexcept
{
  typedef ::GtkRadioButton* (*call_wrap_t) (::GtkRadioButton* radio_group_member, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_radio_button_new_with_mnemonic_from_widget;
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  auto radio_group_member_to_c = gi::unwrap (radio_group_member, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkRadioButton*) (radio_group_member_to_c), (const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gtk::RadioButton base::RadioButtonBase::new_with_mnemonic_from_widget (const std::string & label) noexcept
{
  typedef ::GtkRadioButton* (*call_wrap_t) (::GtkRadioButton* radio_group_member, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_radio_button_new_with_mnemonic_from_widget;
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  auto radio_group_member_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkRadioButton*) (radio_group_member_to_c), (const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GSList* gtk_radio_button_get_group (GtkRadioButton* radio_button);
// ::GSList* gtk_radio_button_get_group (::GtkRadioButton* radio_button);
std::vector<Gtk::RadioButton> base::RadioButtonBase::get_group () noexcept
{
  typedef ::GSList* (*call_wrap_t) (::GtkRadioButton* radio_button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_radio_button_get_group;
  auto _temp_ret = call_wrap_v ((::GtkRadioButton*) (gobj_()));
  return gi::detail::wrap_list<Gtk::RadioButton> (_temp_ret, gi::transfer_none);
}

// void gtk_radio_button_join_group (GtkRadioButton* radio_button, GtkRadioButton* group_source);
// void gtk_radio_button_join_group (::GtkRadioButton* radio_button, ::GtkRadioButton* group_source);
void base::RadioButtonBase::join_group (Gtk::RadioButton group_source) noexcept
{
  typedef void (*call_wrap_t) (::GtkRadioButton* radio_button, ::GtkRadioButton* group_source);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_radio_button_join_group;
  auto group_source_to_c = gi::unwrap (group_source, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkRadioButton*) (gobj_()), (::GtkRadioButton*) (group_source_to_c));
}
void base::RadioButtonBase::join_group () noexcept
{
  typedef void (*call_wrap_t) (::GtkRadioButton* radio_button, ::GtkRadioButton* group_source);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_radio_button_join_group;
  auto group_source_to_c = nullptr;
  call_wrap_v ((::GtkRadioButton*) (gobj_()), (::GtkRadioButton*) (group_source_to_c));
}

// void gtk_radio_button_set_group (GtkRadioButton* radio_button, GSList* group);
// void gtk_radio_button_set_group (::GtkRadioButton* radio_button, ::GSList* group);
void base::RadioButtonBase::set_group (const std::vector<Gtk::RadioButton> & group) noexcept
{
  typedef void (*call_wrap_t) (::GtkRadioButton* radio_button, ::GSList* group);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_radio_button_set_group;
  auto group_i = detail::make_list_unwrap_range<::GSList> (group);
  auto group_w = unwrap (group_i, gi::transfer_none, direction_in);
  auto group_to_c = group_w.gobj_(false);
  call_wrap_v ((::GtkRadioButton*) (gobj_()), (::GSList*) (group_to_c));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/radiobutton_extra_def_impl.hpp>)
#include <gtk/radiobutton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/radiobutton_extra_impl.hpp>)
#include <gtk/radiobutton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void RadioButtonClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkRadioButtonClass *methods = (::GtkRadioButtonClass *) class_struct;
  (void) methods;

  methods->group_changed = (decltype (methods->group_changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::group_changed_>;
}

// void RadioButton::group_changed (GtkRadioButton* radio_button);
// void RadioButton::group_changed (::GtkRadioButton* radio_button);
void RadioButtonClass::group_changed_ () noexcept
{
  if (!get_struct_()->group_changed) return ;
  typedef void (*call_wrap_t) (::GtkRadioButton* radio_button);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->group_changed;
  call_wrap_v ((::GtkRadioButton*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
