// AUTO-GENERATED

#ifndef _GI_GTK_RADIOMENUITEM_IMPL_HPP_
#define _GI_GTK_RADIOMENUITEM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_radio_menu_item_new (GSList* group);
// ::GtkRadioMenuItem* gtk_radio_menu_item_new (::GSList* group);
Gtk::RadioMenuItem base::RadioMenuItemBase::new_ (const std::vector<Gtk::RadioMenuItem> & group) noexcept
{
  typedef ::GtkRadioMenuItem* (*call_wrap_t) (::GSList* group);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_radio_menu_item_new;
  auto group_i = detail::make_list_unwrap_range<::GSList> (group);
  auto group_w = unwrap (group_i, gi::transfer_none, direction_in);
  auto group_to_c = group_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((::GSList*) (group_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_radio_menu_item_new_from_widget (GtkRadioMenuItem* group);
// ::GtkRadioMenuItem* gtk_radio_menu_item_new_from_widget (::GtkRadioMenuItem* group);
Gtk::RadioMenuItem base::RadioMenuItemBase::new_from_widget (Gtk::RadioMenuItem group) noexcept
{
  typedef ::GtkRadioMenuItem* (*call_wrap_t) (::GtkRadioMenuItem* group);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_radio_menu_item_new_from_widget;
  auto group_to_c = gi::unwrap (group, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkRadioMenuItem*) (group_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gtk::RadioMenuItem base::RadioMenuItemBase::new_from_widget () noexcept
{
  typedef ::GtkRadioMenuItem* (*call_wrap_t) (::GtkRadioMenuItem* group);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_radio_menu_item_new_from_widget;
  auto group_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkRadioMenuItem*) (group_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_radio_menu_item_new_with_label (GSList* group, const gchar* label);
// ::GtkRadioMenuItem* gtk_radio_menu_item_new_with_label (::GSList* group, const char* label);
Gtk::RadioMenuItem base::RadioMenuItemBase::new_with_label (const std::vector<Gtk::RadioMenuItem> & group, const std::string & label) noexcept
{
  typedef ::GtkRadioMenuItem* (*call_wrap_t) (::GSList* group, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_radio_menu_item_new_with_label;
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  auto group_i = detail::make_list_unwrap_range<::GSList> (group);
  auto group_w = unwrap (group_i, gi::transfer_none, direction_in);
  auto group_to_c = group_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((::GSList*) (group_to_c), (const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_radio_menu_item_new_with_label_from_widget (GtkRadioMenuItem* group, const gchar* label);
// ::GtkRadioMenuItem* gtk_radio_menu_item_new_with_label_from_widget (::GtkRadioMenuItem* group, const char* label);
Gtk::RadioMenuItem base::RadioMenuItemBase::new_with_label_from_widget (Gtk::RadioMenuItem group, const std::string & label) noexcept
{
  typedef ::GtkRadioMenuItem* (*call_wrap_t) (::GtkRadioMenuItem* group, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_radio_menu_item_new_with_label_from_widget;
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  auto group_to_c = gi::unwrap (group, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkRadioMenuItem*) (group_to_c), (const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gtk::RadioMenuItem base::RadioMenuItemBase::new_with_label_from_widget () noexcept
{
  typedef ::GtkRadioMenuItem* (*call_wrap_t) (::GtkRadioMenuItem* group, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_radio_menu_item_new_with_label_from_widget;
  auto label_to_c = nullptr;
  auto group_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkRadioMenuItem*) (group_to_c), (const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_radio_menu_item_new_with_mnemonic (GSList* group, const gchar* label);
// ::GtkRadioMenuItem* gtk_radio_menu_item_new_with_mnemonic (::GSList* group, const char* label);
Gtk::RadioMenuItem base::RadioMenuItemBase::new_with_mnemonic (const std::vector<Gtk::RadioMenuItem> & group, const std::string & label) noexcept
{
  typedef ::GtkRadioMenuItem* (*call_wrap_t) (::GSList* group, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_radio_menu_item_new_with_mnemonic;
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  auto group_i = detail::make_list_unwrap_range<::GSList> (group);
  auto group_w = unwrap (group_i, gi::transfer_none, direction_in);
  auto group_to_c = group_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((::GSList*) (group_to_c), (const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_radio_menu_item_new_with_mnemonic_from_widget (GtkRadioMenuItem* group, const gchar* label);
// ::GtkRadioMenuItem* gtk_radio_menu_item_new_with_mnemonic_from_widget (::GtkRadioMenuItem* group, const char* label);
Gtk::RadioMenuItem base::RadioMenuItemBase::new_with_mnemonic_from_widget (Gtk::RadioMenuItem group, const std::string & label) noexcept
{
  typedef ::GtkRadioMenuItem* (*call_wrap_t) (::GtkRadioMenuItem* group, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_radio_menu_item_new_with_mnemonic_from_widget;
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  auto group_to_c = gi::unwrap (group, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkRadioMenuItem*) (group_to_c), (const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gtk::RadioMenuItem base::RadioMenuItemBase::new_with_mnemonic_from_widget () noexcept
{
  typedef ::GtkRadioMenuItem* (*call_wrap_t) (::GtkRadioMenuItem* group, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_radio_menu_item_new_with_mnemonic_from_widget;
  auto label_to_c = nullptr;
  auto group_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkRadioMenuItem*) (group_to_c), (const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GSList* gtk_radio_menu_item_get_group (GtkRadioMenuItem* radio_menu_item);
// ::GSList* gtk_radio_menu_item_get_group (::GtkRadioMenuItem* radio_menu_item);
std::vector<Gtk::RadioMenuItem> base::RadioMenuItemBase::get_group () noexcept
{
  typedef ::GSList* (*call_wrap_t) (::GtkRadioMenuItem* radio_menu_item);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_radio_menu_item_get_group;
  auto _temp_ret = call_wrap_v ((::GtkRadioMenuItem*) (gobj_()));
  return gi::detail::wrap_list<Gtk::RadioMenuItem> (_temp_ret, gi::transfer_none);
}

// void gtk_radio_menu_item_join_group (GtkRadioMenuItem* radio_menu_item, GtkRadioMenuItem* group_source);
// void gtk_radio_menu_item_join_group (::GtkRadioMenuItem* radio_menu_item, ::GtkRadioMenuItem* group_source);
void base::RadioMenuItemBase::join_group (Gtk::RadioMenuItem group_source) noexcept
{
  typedef void (*call_wrap_t) (::GtkRadioMenuItem* radio_menu_item, ::GtkRadioMenuItem* group_source);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_radio_menu_item_join_group;
  auto group_source_to_c = gi::unwrap (group_source, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkRadioMenuItem*) (gobj_()), (::GtkRadioMenuItem*) (group_source_to_c));
}
void base::RadioMenuItemBase::join_group () noexcept
{
  typedef void (*call_wrap_t) (::GtkRadioMenuItem* radio_menu_item, ::GtkRadioMenuItem* group_source);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_radio_menu_item_join_group;
  auto group_source_to_c = nullptr;
  call_wrap_v ((::GtkRadioMenuItem*) (gobj_()), (::GtkRadioMenuItem*) (group_source_to_c));
}

// void gtk_radio_menu_item_set_group (GtkRadioMenuItem* radio_menu_item, GSList* group);
// void gtk_radio_menu_item_set_group (::GtkRadioMenuItem* radio_menu_item, ::GSList* group);
void base::RadioMenuItemBase::set_group (const std::vector<Gtk::RadioMenuItem> & group) noexcept
{
  typedef void (*call_wrap_t) (::GtkRadioMenuItem* radio_menu_item, ::GSList* group);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_radio_menu_item_set_group;
  auto group_i = detail::make_list_unwrap_range<::GSList> (group);
  auto group_w = unwrap (group_i, gi::transfer_none, direction_in);
  auto group_to_c = group_w.gobj_(false);
  call_wrap_v ((::GtkRadioMenuItem*) (gobj_()), (::GSList*) (group_to_c));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/radiomenuitem_extra_def_impl.hpp>)
#include <gtk/radiomenuitem_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/radiomenuitem_extra_impl.hpp>)
#include <gtk/radiomenuitem_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void RadioMenuItemClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkRadioMenuItemClass *methods = (::GtkRadioMenuItemClass *) class_struct;
  (void) methods;

  methods->group_changed = (decltype (methods->group_changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::group_changed_>;
}

// void RadioMenuItem::group_changed (GtkRadioMenuItem* radio_menu_item);
// void RadioMenuItem::group_changed (::GtkRadioMenuItem* radio_menu_item);
void RadioMenuItemClass::group_changed_ () noexcept
{
  if (!get_struct_()->group_changed) return ;
  typedef void (*call_wrap_t) (::GtkRadioMenuItem* radio_menu_item);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->group_changed;
  call_wrap_v ((::GtkRadioMenuItem*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
