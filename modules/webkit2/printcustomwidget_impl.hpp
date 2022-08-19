// AUTO-GENERATED

#ifndef _GI_WEBKIT2_PRINTCUSTOMWIDGET_IMPL_HPP_
#define _GI_WEBKIT2_PRINTCUSTOMWIDGET_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// WebKitPrintCustomWidget* webkit_print_custom_widget_new (GtkWidget* widget, const char* title);
// ::WebKitPrintCustomWidget* webkit_print_custom_widget_new (::GtkWidget* widget, const char* title);
WebKit2::PrintCustomWidget base::PrintCustomWidgetBase::new_ (Gtk::Widget widget, const std::string & title) noexcept
{
  typedef ::WebKitPrintCustomWidget* (*call_wrap_t) (::GtkWidget* widget, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_print_custom_widget_new;
  auto title_to_c = gi::unwrap (title, gi::transfer_none, gi::direction_in);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (widget_to_c), (const char*) (title_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const gchar* webkit_print_custom_widget_get_title (WebKitPrintCustomWidget* print_custom_widget);
// const char* webkit_print_custom_widget_get_title (::WebKitPrintCustomWidget* print_custom_widget);
std::string base::PrintCustomWidgetBase::get_title () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitPrintCustomWidget* print_custom_widget);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_print_custom_widget_get_title;
  auto _temp_ret = call_wrap_v ((::WebKitPrintCustomWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* webkit_print_custom_widget_get_widget (WebKitPrintCustomWidget* print_custom_widget);
// ::GtkWidget* webkit_print_custom_widget_get_widget (::WebKitPrintCustomWidget* print_custom_widget);
Gtk::Widget base::PrintCustomWidgetBase::get_widget () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::WebKitPrintCustomWidget* print_custom_widget);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_print_custom_widget_get_widget;
  auto _temp_ret = call_wrap_v ((::WebKitPrintCustomWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}




} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/printcustomwidget_extra_def_impl.hpp>)
#include <webkit2/printcustomwidget_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/printcustomwidget_extra_impl.hpp>)
#include <webkit2/printcustomwidget_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {

void PrintCustomWidgetClassDef::class_init (gpointer class_struct, gpointer )
{
  ::WebKitPrintCustomWidgetClass *methods = (::WebKitPrintCustomWidgetClass *) class_struct;
  (void) methods;

  methods->apply = (decltype (methods->apply)) detail::method_wrapper<self, void (*) (Gtk::Widget widget), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::apply_>;
  methods->update = (decltype (methods->update)) detail::method_wrapper<self, void (*) (Gtk::Widget widget, Gtk::PageSetup page_setup, Gtk::PrintSettings print_settings), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::update_>;
}

// void PrintCustomWidget::apply (WebKitPrintCustomWidget* print_custom_widget, GtkWidget* widget);
// void PrintCustomWidget::apply (::WebKitPrintCustomWidget* print_custom_widget, ::GtkWidget* widget);
void PrintCustomWidgetClass::apply_ (Gtk::Widget widget) noexcept
{
  if (!get_struct_()->apply) return ;
  typedef void (*call_wrap_t) (::WebKitPrintCustomWidget* print_custom_widget, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->apply;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitPrintCustomWidget*) (gobj_()), (::GtkWidget*) (widget_to_c));
}

// void PrintCustomWidget::update (WebKitPrintCustomWidget* print_custom_widget, GtkWidget* widget, GtkPageSetup* page_setup, GtkPrintSettings* print_settings);
// void PrintCustomWidget::update (::WebKitPrintCustomWidget* print_custom_widget, ::GtkWidget* widget, ::GtkPageSetup* page_setup, ::GtkPrintSettings* print_settings);
void PrintCustomWidgetClass::update_ (Gtk::Widget widget, Gtk::PageSetup page_setup, Gtk::PrintSettings print_settings) noexcept
{
  if (!get_struct_()->update) return ;
  typedef void (*call_wrap_t) (::WebKitPrintCustomWidget* print_custom_widget, ::GtkWidget* widget, ::GtkPageSetup* page_setup, ::GtkPrintSettings* print_settings);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->update;
  auto print_settings_to_c = gi::unwrap (print_settings, gi::transfer_none, gi::direction_in);
  auto page_setup_to_c = gi::unwrap (page_setup, gi::transfer_none, gi::direction_in);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitPrintCustomWidget*) (gobj_()), (::GtkWidget*) (widget_to_c), (::GtkPageSetup*) (page_setup_to_c), (::GtkPrintSettings*) (print_settings_to_c));
}

} // namespace internal

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
