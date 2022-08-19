// AUTO-GENERATED

#ifndef _GI_WEBKIT2_PRINTOPERATION_IMPL_HPP_
#define _GI_WEBKIT2_PRINTOPERATION_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// WebKitPrintOperation* webkit_print_operation_new (WebKitWebView* web_view);
// ::WebKitPrintOperation* webkit_print_operation_new (::WebKitWebView* web_view);
WebKit2::PrintOperation base::PrintOperationBase::new_ (WebKit2::WebView web_view) noexcept
{
  typedef ::WebKitPrintOperation* (*call_wrap_t) (::WebKitWebView* web_view);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_print_operation_new;
  auto web_view_to_c = gi::unwrap (web_view, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (web_view_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GtkPageSetup* webkit_print_operation_get_page_setup (WebKitPrintOperation* print_operation);
// ::GtkPageSetup* webkit_print_operation_get_page_setup (::WebKitPrintOperation* print_operation);
Gtk::PageSetup base::PrintOperationBase::get_page_setup () noexcept
{
  typedef ::GtkPageSetup* (*call_wrap_t) (::WebKitPrintOperation* print_operation);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_print_operation_get_page_setup;
  auto _temp_ret = call_wrap_v ((::WebKitPrintOperation*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkPrintSettings* webkit_print_operation_get_print_settings (WebKitPrintOperation* print_operation);
// ::GtkPrintSettings* webkit_print_operation_get_print_settings (::WebKitPrintOperation* print_operation);
Gtk::PrintSettings base::PrintOperationBase::get_print_settings () noexcept
{
  typedef ::GtkPrintSettings* (*call_wrap_t) (::WebKitPrintOperation* print_operation);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_print_operation_get_print_settings;
  auto _temp_ret = call_wrap_v ((::WebKitPrintOperation*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void webkit_print_operation_print (WebKitPrintOperation* print_operation);
// void webkit_print_operation_print (::WebKitPrintOperation* print_operation);
void base::PrintOperationBase::print () noexcept
{
  typedef void (*call_wrap_t) (::WebKitPrintOperation* print_operation);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_print_operation_print;
  call_wrap_v ((::WebKitPrintOperation*) (gobj_()));
}

// WebKitPrintOperationResponse webkit_print_operation_run_dialog (WebKitPrintOperation* print_operation, GtkWindow* parent);
// ::WebKitPrintOperationResponse webkit_print_operation_run_dialog (::WebKitPrintOperation* print_operation, ::GtkWindow* parent);
WebKit2::PrintOperationResponse base::PrintOperationBase::run_dialog (Gtk::Window parent) noexcept
{
  typedef ::WebKitPrintOperationResponse (*call_wrap_t) (::WebKitPrintOperation* print_operation, ::GtkWindow* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_print_operation_run_dialog;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::WebKitPrintOperation*) (gobj_()), (::GtkWindow*) (parent_to_c));
  return gi::wrap (_temp_ret);
}
WebKit2::PrintOperationResponse base::PrintOperationBase::run_dialog () noexcept
{
  typedef ::WebKitPrintOperationResponse (*call_wrap_t) (::WebKitPrintOperation* print_operation, ::GtkWindow* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_print_operation_run_dialog;
  auto parent_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::WebKitPrintOperation*) (gobj_()), (::GtkWindow*) (parent_to_c));
  return gi::wrap (_temp_ret);
}

// void webkit_print_operation_set_page_setup (WebKitPrintOperation* print_operation, GtkPageSetup* page_setup);
// void webkit_print_operation_set_page_setup (::WebKitPrintOperation* print_operation, ::GtkPageSetup* page_setup);
void base::PrintOperationBase::set_page_setup (Gtk::PageSetup page_setup) noexcept
{
  typedef void (*call_wrap_t) (::WebKitPrintOperation* print_operation, ::GtkPageSetup* page_setup);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_print_operation_set_page_setup;
  auto page_setup_to_c = gi::unwrap (page_setup, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitPrintOperation*) (gobj_()), (::GtkPageSetup*) (page_setup_to_c));
}

// void webkit_print_operation_set_print_settings (WebKitPrintOperation* print_operation, GtkPrintSettings* print_settings);
// void webkit_print_operation_set_print_settings (::WebKitPrintOperation* print_operation, ::GtkPrintSettings* print_settings);
void base::PrintOperationBase::set_print_settings (Gtk::PrintSettings print_settings) noexcept
{
  typedef void (*call_wrap_t) (::WebKitPrintOperation* print_operation, ::GtkPrintSettings* print_settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_print_operation_set_print_settings;
  auto print_settings_to_c = gi::unwrap (print_settings, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitPrintOperation*) (gobj_()), (::GtkPrintSettings*) (print_settings_to_c));
}





} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/printoperation_extra_def_impl.hpp>)
#include <webkit2/printoperation_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/printoperation_extra_impl.hpp>)
#include <webkit2/printoperation_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {

void PrintOperationClassDef::class_init (gpointer class_struct, gpointer )
{
  ::WebKitPrintOperationClass *methods = (::WebKitPrintOperationClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
