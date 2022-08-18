// AUTO-GENERATED

#ifndef _GI_GTK_CHECKMENUITEM_IMPL_HPP_
#define _GI_GTK_CHECKMENUITEM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_check_menu_item_new ();
// ::GtkCheckMenuItem* gtk_check_menu_item_new ();
Gtk::CheckMenuItem base::CheckMenuItemBase::new_ () noexcept
{
  typedef ::GtkCheckMenuItem* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_check_menu_item_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_check_menu_item_new_with_label (const gchar* label);
// ::GtkCheckMenuItem* gtk_check_menu_item_new_with_label (const char* label);
Gtk::CheckMenuItem base::CheckMenuItemBase::new_with_label (const std::string & label) noexcept
{
  typedef ::GtkCheckMenuItem* (*call_wrap_t) (const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_check_menu_item_new_with_label;
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_check_menu_item_new_with_mnemonic (const gchar* label);
// ::GtkCheckMenuItem* gtk_check_menu_item_new_with_mnemonic (const char* label);
Gtk::CheckMenuItem base::CheckMenuItemBase::new_with_mnemonic (const std::string & label) noexcept
{
  typedef ::GtkCheckMenuItem* (*call_wrap_t) (const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_check_menu_item_new_with_mnemonic;
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_check_menu_item_get_active (GtkCheckMenuItem* check_menu_item);
// gboolean gtk_check_menu_item_get_active (::GtkCheckMenuItem* check_menu_item);
bool base::CheckMenuItemBase::get_active () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkCheckMenuItem* check_menu_item);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_check_menu_item_get_active;
  auto _temp_ret = call_wrap_v ((::GtkCheckMenuItem*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_check_menu_item_get_draw_as_radio (GtkCheckMenuItem* check_menu_item);
// gboolean gtk_check_menu_item_get_draw_as_radio (::GtkCheckMenuItem* check_menu_item);
bool base::CheckMenuItemBase::get_draw_as_radio () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkCheckMenuItem* check_menu_item);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_check_menu_item_get_draw_as_radio;
  auto _temp_ret = call_wrap_v ((::GtkCheckMenuItem*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_check_menu_item_get_inconsistent (GtkCheckMenuItem* check_menu_item);
// gboolean gtk_check_menu_item_get_inconsistent (::GtkCheckMenuItem* check_menu_item);
bool base::CheckMenuItemBase::get_inconsistent () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkCheckMenuItem* check_menu_item);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_check_menu_item_get_inconsistent;
  auto _temp_ret = call_wrap_v ((::GtkCheckMenuItem*) (gobj_()));
  return _temp_ret;
}

// void gtk_check_menu_item_set_active (GtkCheckMenuItem* check_menu_item, gboolean is_active);
// void gtk_check_menu_item_set_active (::GtkCheckMenuItem* check_menu_item, gboolean is_active);
void base::CheckMenuItemBase::set_active (gboolean is_active) noexcept
{
  typedef void (*call_wrap_t) (::GtkCheckMenuItem* check_menu_item, gboolean is_active);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_check_menu_item_set_active;
  auto is_active_to_c = is_active;
  call_wrap_v ((::GtkCheckMenuItem*) (gobj_()), (gboolean) (is_active_to_c));
}

// void gtk_check_menu_item_set_draw_as_radio (GtkCheckMenuItem* check_menu_item, gboolean draw_as_radio);
// void gtk_check_menu_item_set_draw_as_radio (::GtkCheckMenuItem* check_menu_item, gboolean draw_as_radio);
void base::CheckMenuItemBase::set_draw_as_radio (gboolean draw_as_radio) noexcept
{
  typedef void (*call_wrap_t) (::GtkCheckMenuItem* check_menu_item, gboolean draw_as_radio);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_check_menu_item_set_draw_as_radio;
  auto draw_as_radio_to_c = draw_as_radio;
  call_wrap_v ((::GtkCheckMenuItem*) (gobj_()), (gboolean) (draw_as_radio_to_c));
}

// void gtk_check_menu_item_set_inconsistent (GtkCheckMenuItem* check_menu_item, gboolean setting);
// void gtk_check_menu_item_set_inconsistent (::GtkCheckMenuItem* check_menu_item, gboolean setting);
void base::CheckMenuItemBase::set_inconsistent (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkCheckMenuItem* check_menu_item, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_check_menu_item_set_inconsistent;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkCheckMenuItem*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_check_menu_item_toggled (GtkCheckMenuItem* check_menu_item);
// void gtk_check_menu_item_toggled (::GtkCheckMenuItem* check_menu_item);
void base::CheckMenuItemBase::toggled () noexcept
{
  typedef void (*call_wrap_t) (::GtkCheckMenuItem* check_menu_item);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_check_menu_item_toggled;
  call_wrap_v ((::GtkCheckMenuItem*) (gobj_()));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/checkmenuitem_extra_def_impl.hpp>)
#include <gtk/checkmenuitem_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/checkmenuitem_extra_impl.hpp>)
#include <gtk/checkmenuitem_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void CheckMenuItemClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkCheckMenuItemClass *methods = (::GtkCheckMenuItemClass *) class_struct;
  (void) methods;

  methods->draw_indicator = (decltype (methods->draw_indicator)) detail::method_wrapper<self, void (*) (cairo::Context cr), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::draw_indicator_>;
  methods->toggled = (decltype (methods->toggled)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::toggled_>;
}

// void CheckMenuItem::draw_indicator (GtkCheckMenuItem* check_menu_item, cairo_t* cr);
// void CheckMenuItem::draw_indicator (::GtkCheckMenuItem* check_menu_item, ::cairo_t* cr);
void CheckMenuItemClass::draw_indicator_ (cairo::Context cr) noexcept
{
  if (!get_struct_()->draw_indicator) return ;
  typedef void (*call_wrap_t) (::GtkCheckMenuItem* check_menu_item, ::cairo_t* cr);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->draw_indicator;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCheckMenuItem*) (gobj_()), (::cairo_t*) (cr_to_c));
}

// void CheckMenuItem::toggled (GtkCheckMenuItem* check_menu_item);
// void CheckMenuItem::toggled (::GtkCheckMenuItem* check_menu_item);
void CheckMenuItemClass::toggled_ () noexcept
{
  if (!get_struct_()->toggled) return ;
  typedef void (*call_wrap_t) (::GtkCheckMenuItem* check_menu_item);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->toggled;
  call_wrap_v ((::GtkCheckMenuItem*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
