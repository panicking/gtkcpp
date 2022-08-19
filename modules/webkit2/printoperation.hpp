// AUTO-GENERATED

#ifndef _GI_WEBKIT2_PRINTOPERATION_HPP_
#define _GI_WEBKIT2_PRINTOPERATION_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {

class PrintCustomWidget;
class WebView;

class PrintOperation;

namespace base {


#define GI_WEBKIT2_PRINTOPERATION_BASE base::PrintOperationBase
class PrintOperationBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::WebKitPrintOperation BaseObjectType;

PrintOperationBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webkit_print_operation_get_type(); } 

// WebKitPrintOperation* webkit_print_operation_new (WebKitWebView* web_view);
// ::WebKitPrintOperation* webkit_print_operation_new (::WebKitWebView* web_view);
static GI_INLINE_DECL WebKit2::PrintOperation new_ (WebKit2::WebView web_view) noexcept;

// GtkPageSetup* webkit_print_operation_get_page_setup (WebKitPrintOperation* print_operation);
// ::GtkPageSetup* webkit_print_operation_get_page_setup (::WebKitPrintOperation* print_operation);
GI_INLINE_DECL Gtk::PageSetup get_page_setup () noexcept;

// GtkPrintSettings* webkit_print_operation_get_print_settings (WebKitPrintOperation* print_operation);
// ::GtkPrintSettings* webkit_print_operation_get_print_settings (::WebKitPrintOperation* print_operation);
GI_INLINE_DECL Gtk::PrintSettings get_print_settings () noexcept;

// void webkit_print_operation_print (WebKitPrintOperation* print_operation);
// void webkit_print_operation_print (::WebKitPrintOperation* print_operation);
GI_INLINE_DECL void print () noexcept;

// WebKitPrintOperationResponse webkit_print_operation_run_dialog (WebKitPrintOperation* print_operation, GtkWindow* parent);
// ::WebKitPrintOperationResponse webkit_print_operation_run_dialog (::WebKitPrintOperation* print_operation, ::GtkWindow* parent);
GI_INLINE_DECL WebKit2::PrintOperationResponse run_dialog (Gtk::Window parent) noexcept;
GI_INLINE_DECL WebKit2::PrintOperationResponse run_dialog () noexcept;

// void webkit_print_operation_set_page_setup (WebKitPrintOperation* print_operation, GtkPageSetup* page_setup);
// void webkit_print_operation_set_page_setup (::WebKitPrintOperation* print_operation, ::GtkPageSetup* page_setup);
GI_INLINE_DECL void set_page_setup (Gtk::PageSetup page_setup) noexcept;

// void webkit_print_operation_set_print_settings (WebKitPrintOperation* print_operation, GtkPrintSettings* print_settings);
// void webkit_print_operation_set_print_settings (::WebKitPrintOperation* print_operation, ::GtkPrintSettings* print_settings);
GI_INLINE_DECL void set_print_settings (Gtk::PrintSettings print_settings) noexcept;

gi::property_proxy<Gtk::PageSetup, base::PrintOperationBase> property_page_setup()
{ return gi::property_proxy<Gtk::PageSetup, base::PrintOperationBase> (*this, "page-setup"); }
const gi::property_proxy<Gtk::PageSetup, base::PrintOperationBase> property_page_setup() const
{ return gi::property_proxy<Gtk::PageSetup, base::PrintOperationBase> (*this, "page-setup"); }

gi::property_proxy<Gtk::PrintSettings, base::PrintOperationBase> property_print_settings()
{ return gi::property_proxy<Gtk::PrintSettings, base::PrintOperationBase> (*this, "print-settings"); }
const gi::property_proxy<Gtk::PrintSettings, base::PrintOperationBase> property_print_settings() const
{ return gi::property_proxy<Gtk::PrintSettings, base::PrintOperationBase> (*this, "print-settings"); }

gi::property_proxy<WebKit2::WebView, base::PrintOperationBase> property_web_view()
{ return gi::property_proxy<WebKit2::WebView, base::PrintOperationBase> (*this, "web-view"); }
const gi::property_proxy<WebKit2::WebView, base::PrintOperationBase> property_web_view() const
{ return gi::property_proxy<WebKit2::WebView, base::PrintOperationBase> (*this, "web-view"); }

// signal create-custom-widget
gi::signal_proxy<WebKit2::PrintCustomWidget(WebKit2::PrintOperation)> signal_create_custom_widget()
{ return gi::signal_proxy<WebKit2::PrintCustomWidget(WebKit2::PrintOperation)> (*this, "create-custom-widget"); }

// signal failed
gi::signal_proxy<void(WebKit2::PrintOperation, GLib::Error error)> signal_failed()
{ return gi::signal_proxy<void(WebKit2::PrintOperation, GLib::Error error)> (*this, "failed"); }

// signal finished
gi::signal_proxy<void(WebKit2::PrintOperation)> signal_finished()
{ return gi::signal_proxy<void(WebKit2::PrintOperation)> (*this, "finished"); }

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/printoperation_extra_def.hpp>)
#include <webkit2/printoperation_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/printoperation_extra.hpp>)
#include <webkit2/printoperation_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class PrintOperation : public GI_WEBKIT2_PRINTOPERATION_BASE
{ typedef GI_WEBKIT2_PRINTOPERATION_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitPrintOperation>
{ typedef WebKit2::PrintOperation type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {


class PrintOperationClassDef
{
typedef PrintOperationClassDef self;
public:
typedef WebKit2::PrintOperation instance_type;
typedef ::WebKitPrintOperationClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class PrintOperationClass: public detail::ClassTemplate<WebKit2::impl::internal::PrintOperationClassDef, GObject::impl::internal::ObjectClass>
{
typedef PrintOperationClass self;
typedef detail::ClassTemplate<WebKit2::impl::internal::PrintOperationClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};

} // namespace internal

GI_CLASS_IMPL_END

using PrintOperationImpl = detail::ObjectImpl<PrintOperation, internal::PrintOperationClass>;

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
