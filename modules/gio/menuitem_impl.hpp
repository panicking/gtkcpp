// AUTO-GENERATED

#ifndef _GI_GIO_MENUITEM_IMPL_HPP_
#define _GI_GIO_MENUITEM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GMenuItem* g_menu_item_new (const gchar* label, const gchar* detailed_action);
// ::GMenuItem* g_menu_item_new (const char* label, const char* detailed_action);
Gio::MenuItem base::MenuItemBase::new_ (const std::string & label, const std::string & detailed_action) noexcept
{
  typedef ::GMenuItem* (*call_wrap_t) (const char* label, const char* detailed_action);
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_item_new;
  auto detailed_action_to_c = gi::unwrap (detailed_action, gi::transfer_none, gi::direction_in);
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (label_to_c), (const char*) (detailed_action_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::MenuItem base::MenuItemBase::new_ () noexcept
{
  typedef ::GMenuItem* (*call_wrap_t) (const char* label, const char* detailed_action);
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_item_new;
  auto detailed_action_to_c = nullptr;
  auto label_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (label_to_c), (const char*) (detailed_action_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GMenuItem* g_menu_item_new_from_model (GMenuModel* model, gint item_index);
// ::GMenuItem* g_menu_item_new_from_model (::GMenuModel* model, gint item_index);
Gio::MenuItem base::MenuItemBase::new_from_model (Gio::MenuModel model, gint item_index) noexcept
{
  typedef ::GMenuItem* (*call_wrap_t) (::GMenuModel* model, gint item_index);
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_item_new_from_model;
  auto item_index_to_c = item_index;
  auto model_to_c = gi::unwrap (model, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GMenuModel*) (model_to_c), (gint) (item_index_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GMenuItem* g_menu_item_new_section (const gchar* label, GMenuModel* section);
// ::GMenuItem* g_menu_item_new_section (const char* label, ::GMenuModel* section);
Gio::MenuItem base::MenuItemBase::new_section (const std::string & label, Gio::MenuModel section) noexcept
{
  typedef ::GMenuItem* (*call_wrap_t) (const char* label, ::GMenuModel* section);
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_item_new_section;
  auto section_to_c = gi::unwrap (section, gi::transfer_none, gi::direction_in);
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (label_to_c), (::GMenuModel*) (section_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::MenuItem base::MenuItemBase::new_section (Gio::MenuModel section) noexcept
{
  typedef ::GMenuItem* (*call_wrap_t) (const char* label, ::GMenuModel* section);
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_item_new_section;
  auto section_to_c = gi::unwrap (section, gi::transfer_none, gi::direction_in);
  auto label_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (label_to_c), (::GMenuModel*) (section_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GMenuItem* g_menu_item_new_submenu (const gchar* label, GMenuModel* submenu);
// ::GMenuItem* g_menu_item_new_submenu (const char* label, ::GMenuModel* submenu);
Gio::MenuItem base::MenuItemBase::new_submenu (const std::string & label, Gio::MenuModel submenu) noexcept
{
  typedef ::GMenuItem* (*call_wrap_t) (const char* label, ::GMenuModel* submenu);
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_item_new_submenu;
  auto submenu_to_c = gi::unwrap (submenu, gi::transfer_none, gi::direction_in);
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (label_to_c), (::GMenuModel*) (submenu_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::MenuItem base::MenuItemBase::new_submenu (Gio::MenuModel submenu) noexcept
{
  typedef ::GMenuItem* (*call_wrap_t) (const char* label, ::GMenuModel* submenu);
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_item_new_submenu;
  auto submenu_to_c = gi::unwrap (submenu, gi::transfer_none, gi::direction_in);
  auto label_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (label_to_c), (::GMenuModel*) (submenu_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean g_menu_item_get_attribute (GMenuItem* menu_item, const gchar* attribute, const gchar* format_string);
// gboolean g_menu_item_get_attribute (::GMenuItem* menu_item, const char* attribute, const char* format_string);
// IGNORE; not introspectable, varargs not supported

// GVariant* g_menu_item_get_attribute_value (GMenuItem* menu_item, const gchar* attribute, const GVariantType* expected_type);
// ::GVariant* g_menu_item_get_attribute_value (::GMenuItem* menu_item, const char* attribute, const ::GVariantType* expected_type);
GLib::Variant base::MenuItemBase::get_attribute_value (const std::string & attribute, const GLib::VariantType & expected_type) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GMenuItem* menu_item, const char* attribute, const ::GVariantType* expected_type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_item_get_attribute_value;
  auto expected_type_to_c = gi::unwrap (expected_type, gi::transfer_none, gi::direction_in);
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GMenuItem*) (gobj_()), (const char*) (attribute_to_c), (const ::GVariantType*) (expected_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::Variant base::MenuItemBase::get_attribute_value (const std::string & attribute) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GMenuItem* menu_item, const char* attribute, const ::GVariantType* expected_type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_item_get_attribute_value;
  auto expected_type_to_c = nullptr;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GMenuItem*) (gobj_()), (const char*) (attribute_to_c), (const ::GVariantType*) (expected_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GMenuModel* g_menu_item_get_link (GMenuItem* menu_item, const gchar* link);
// ::GMenuModel* g_menu_item_get_link (::GMenuItem* menu_item, const char* link);
Gio::MenuModel base::MenuItemBase::get_link (const std::string & link) noexcept
{
  typedef ::GMenuModel* (*call_wrap_t) (::GMenuItem* menu_item, const char* link);
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_item_get_link;
  auto link_to_c = gi::unwrap (link, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GMenuItem*) (gobj_()), (const char*) (link_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_menu_item_set_action_and_target (GMenuItem* menu_item, const gchar* action, const gchar* format_string);
// void g_menu_item_set_action_and_target (::GMenuItem* menu_item, const char* action, const char* format_string);
// IGNORE; not introspectable, varargs not supported

// void g_menu_item_set_action_and_target_value (GMenuItem* menu_item, const gchar* action, GVariant* target_value);
// void g_menu_item_set_action_and_target_value (::GMenuItem* menu_item, const char* action, ::GVariant* target_value);
void base::MenuItemBase::set_action_and_target_value (const std::string & action, GLib::Variant target_value) noexcept
{
  typedef void (*call_wrap_t) (::GMenuItem* menu_item, const char* action, ::GVariant* target_value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_item_set_action_and_target_value;
  auto target_value_to_c = gi::unwrap (target_value, gi::transfer_none, gi::direction_in);
  auto action_to_c = gi::unwrap (action, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GMenuItem*) (gobj_()), (const char*) (action_to_c), (::GVariant*) (target_value_to_c));
}
void base::MenuItemBase::set_action_and_target_value () noexcept
{
  typedef void (*call_wrap_t) (::GMenuItem* menu_item, const char* action, ::GVariant* target_value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_item_set_action_and_target_value;
  auto target_value_to_c = nullptr;
  auto action_to_c = nullptr;
  call_wrap_v ((::GMenuItem*) (gobj_()), (const char*) (action_to_c), (::GVariant*) (target_value_to_c));
}

// void g_menu_item_set_attribute (GMenuItem* menu_item, const gchar* attribute, const gchar* format_string);
// void g_menu_item_set_attribute (::GMenuItem* menu_item, const char* attribute, const char* format_string);
// IGNORE; not introspectable, varargs not supported

// void g_menu_item_set_attribute_value (GMenuItem* menu_item, const gchar* attribute, GVariant* value);
// void g_menu_item_set_attribute_value (::GMenuItem* menu_item, const char* attribute, ::GVariant* value);
void base::MenuItemBase::set_attribute_value (const std::string & attribute, GLib::Variant value) noexcept
{
  typedef void (*call_wrap_t) (::GMenuItem* menu_item, const char* attribute, ::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_item_set_attribute_value;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GMenuItem*) (gobj_()), (const char*) (attribute_to_c), (::GVariant*) (value_to_c));
}
void base::MenuItemBase::set_attribute_value (const std::string & attribute) noexcept
{
  typedef void (*call_wrap_t) (::GMenuItem* menu_item, const char* attribute, ::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_item_set_attribute_value;
  auto value_to_c = nullptr;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GMenuItem*) (gobj_()), (const char*) (attribute_to_c), (::GVariant*) (value_to_c));
}

// void g_menu_item_set_detailed_action (GMenuItem* menu_item, const gchar* detailed_action);
// void g_menu_item_set_detailed_action (::GMenuItem* menu_item, const char* detailed_action);
void base::MenuItemBase::set_detailed_action (const std::string & detailed_action) noexcept
{
  typedef void (*call_wrap_t) (::GMenuItem* menu_item, const char* detailed_action);
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_item_set_detailed_action;
  auto detailed_action_to_c = gi::unwrap (detailed_action, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GMenuItem*) (gobj_()), (const char*) (detailed_action_to_c));
}

// void g_menu_item_set_icon (GMenuItem* menu_item, GIcon* icon);
// void g_menu_item_set_icon (::GMenuItem* menu_item, ::GIcon* icon);
void base::MenuItemBase::set_icon (Gio::Icon icon) noexcept
{
  typedef void (*call_wrap_t) (::GMenuItem* menu_item, ::GIcon* icon);
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_item_set_icon;
  auto icon_to_c = gi::unwrap (icon, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GMenuItem*) (gobj_()), (::GIcon*) (icon_to_c));
}

// void g_menu_item_set_label (GMenuItem* menu_item, const gchar* label);
// void g_menu_item_set_label (::GMenuItem* menu_item, const char* label);
void base::MenuItemBase::set_label (const std::string & label) noexcept
{
  typedef void (*call_wrap_t) (::GMenuItem* menu_item, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_item_set_label;
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GMenuItem*) (gobj_()), (const char*) (label_to_c));
}
void base::MenuItemBase::set_label () noexcept
{
  typedef void (*call_wrap_t) (::GMenuItem* menu_item, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_item_set_label;
  auto label_to_c = nullptr;
  call_wrap_v ((::GMenuItem*) (gobj_()), (const char*) (label_to_c));
}

// void g_menu_item_set_link (GMenuItem* menu_item, const gchar* link, GMenuModel* model);
// void g_menu_item_set_link (::GMenuItem* menu_item, const char* link, ::GMenuModel* model);
void base::MenuItemBase::set_link (const std::string & link, Gio::MenuModel model) noexcept
{
  typedef void (*call_wrap_t) (::GMenuItem* menu_item, const char* link, ::GMenuModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_item_set_link;
  auto model_to_c = gi::unwrap (model, gi::transfer_none, gi::direction_in);
  auto link_to_c = gi::unwrap (link, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GMenuItem*) (gobj_()), (const char*) (link_to_c), (::GMenuModel*) (model_to_c));
}
void base::MenuItemBase::set_link (const std::string & link) noexcept
{
  typedef void (*call_wrap_t) (::GMenuItem* menu_item, const char* link, ::GMenuModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_item_set_link;
  auto model_to_c = nullptr;
  auto link_to_c = gi::unwrap (link, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GMenuItem*) (gobj_()), (const char*) (link_to_c), (::GMenuModel*) (model_to_c));
}

// void g_menu_item_set_section (GMenuItem* menu_item, GMenuModel* section);
// void g_menu_item_set_section (::GMenuItem* menu_item, ::GMenuModel* section);
void base::MenuItemBase::set_section (Gio::MenuModel section) noexcept
{
  typedef void (*call_wrap_t) (::GMenuItem* menu_item, ::GMenuModel* section);
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_item_set_section;
  auto section_to_c = gi::unwrap (section, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GMenuItem*) (gobj_()), (::GMenuModel*) (section_to_c));
}
void base::MenuItemBase::set_section () noexcept
{
  typedef void (*call_wrap_t) (::GMenuItem* menu_item, ::GMenuModel* section);
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_item_set_section;
  auto section_to_c = nullptr;
  call_wrap_v ((::GMenuItem*) (gobj_()), (::GMenuModel*) (section_to_c));
}

// void g_menu_item_set_submenu (GMenuItem* menu_item, GMenuModel* submenu);
// void g_menu_item_set_submenu (::GMenuItem* menu_item, ::GMenuModel* submenu);
void base::MenuItemBase::set_submenu (Gio::MenuModel submenu) noexcept
{
  typedef void (*call_wrap_t) (::GMenuItem* menu_item, ::GMenuModel* submenu);
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_item_set_submenu;
  auto submenu_to_c = gi::unwrap (submenu, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GMenuItem*) (gobj_()), (::GMenuModel*) (submenu_to_c));
}
void base::MenuItemBase::set_submenu () noexcept
{
  typedef void (*call_wrap_t) (::GMenuItem* menu_item, ::GMenuModel* submenu);
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_item_set_submenu;
  auto submenu_to_c = nullptr;
  call_wrap_v ((::GMenuItem*) (gobj_()), (::GMenuModel*) (submenu_to_c));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/menuitem_extra_def_impl.hpp>)
#include <gio/menuitem_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/menuitem_extra_impl.hpp>)
#include <gio/menuitem_extra_impl.hpp>
#endif
#endif

#endif
