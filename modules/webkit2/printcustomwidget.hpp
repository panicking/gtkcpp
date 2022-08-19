// AUTO-GENERATED

#ifndef _GI_WEBKIT2_PRINTCUSTOMWIDGET_HPP_
#define _GI_WEBKIT2_PRINTCUSTOMWIDGET_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {


class PrintCustomWidget;

namespace base {


#define GI_WEBKIT2_PRINTCUSTOMWIDGET_BASE base::PrintCustomWidgetBase
class PrintCustomWidgetBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::WebKitPrintCustomWidget BaseObjectType;

PrintCustomWidgetBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webkit_print_custom_widget_get_type(); } 

// WebKitPrintCustomWidget* webkit_print_custom_widget_new (GtkWidget* widget, const char* title);
// ::WebKitPrintCustomWidget* webkit_print_custom_widget_new (::GtkWidget* widget, const char* title);
static GI_INLINE_DECL WebKit2::PrintCustomWidget new_ (Gtk::Widget widget, const std::string & title) noexcept;

// const gchar* webkit_print_custom_widget_get_title (WebKitPrintCustomWidget* print_custom_widget);
// const char* webkit_print_custom_widget_get_title (::WebKitPrintCustomWidget* print_custom_widget);
GI_INLINE_DECL std::string get_title () noexcept;

// GtkWidget* webkit_print_custom_widget_get_widget (WebKitPrintCustomWidget* print_custom_widget);
// ::GtkWidget* webkit_print_custom_widget_get_widget (::WebKitPrintCustomWidget* print_custom_widget);
GI_INLINE_DECL Gtk::Widget get_widget () noexcept;

gi::property_proxy<std::string, base::PrintCustomWidgetBase> property_title()
{ return gi::property_proxy<std::string, base::PrintCustomWidgetBase> (*this, "title"); }
const gi::property_proxy<std::string, base::PrintCustomWidgetBase> property_title() const
{ return gi::property_proxy<std::string, base::PrintCustomWidgetBase> (*this, "title"); }

gi::property_proxy<Gtk::Widget, base::PrintCustomWidgetBase> property_widget()
{ return gi::property_proxy<Gtk::Widget, base::PrintCustomWidgetBase> (*this, "widget"); }
const gi::property_proxy<Gtk::Widget, base::PrintCustomWidgetBase> property_widget() const
{ return gi::property_proxy<Gtk::Widget, base::PrintCustomWidgetBase> (*this, "widget"); }

// signal apply
gi::signal_proxy<void(WebKit2::PrintCustomWidget)> signal_apply()
{ return gi::signal_proxy<void(WebKit2::PrintCustomWidget)> (*this, "apply"); }

// signal update
gi::signal_proxy<void(WebKit2::PrintCustomWidget, Gtk::PageSetup page_setup, Gtk::PrintSettings print_settings)> signal_update()
{ return gi::signal_proxy<void(WebKit2::PrintCustomWidget, Gtk::PageSetup page_setup, Gtk::PrintSettings print_settings)> (*this, "update"); }

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/printcustomwidget_extra_def.hpp>)
#include <webkit2/printcustomwidget_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/printcustomwidget_extra.hpp>)
#include <webkit2/printcustomwidget_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class PrintCustomWidget : public GI_WEBKIT2_PRINTCUSTOMWIDGET_BASE
{ typedef GI_WEBKIT2_PRINTCUSTOMWIDGET_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitPrintCustomWidget>
{ typedef WebKit2::PrintCustomWidget type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {


class PrintCustomWidgetClassDef
{
typedef PrintCustomWidgetClassDef self;
public:
typedef WebKit2::PrintCustomWidget instance_type;
typedef ::WebKitPrintCustomWidgetClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void PrintCustomWidget::apply (WebKitPrintCustomWidget* print_custom_widget, GtkWidget* widget);
// void PrintCustomWidget::apply (::WebKitPrintCustomWidget* print_custom_widget, ::GtkWidget* widget);
virtual void apply_ (Gtk::Widget widget) noexcept = 0;

// void PrintCustomWidget::update (WebKitPrintCustomWidget* print_custom_widget, GtkWidget* widget, GtkPageSetup* page_setup, GtkPrintSettings* print_settings);
// void PrintCustomWidget::update (::WebKitPrintCustomWidget* print_custom_widget, ::GtkWidget* widget, ::GtkPageSetup* page_setup, ::GtkPrintSettings* print_settings);
virtual void update_ (Gtk::Widget widget, Gtk::PageSetup page_setup, Gtk::PrintSettings print_settings) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class PrintCustomWidgetClass: public detail::ClassTemplate<WebKit2::impl::internal::PrintCustomWidgetClassDef, GObject::impl::internal::ObjectClass>
{
typedef PrintCustomWidgetClass self;
typedef detail::ClassTemplate<WebKit2::impl::internal::PrintCustomWidgetClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void PrintCustomWidget::apply (WebKitPrintCustomWidget* print_custom_widget, GtkWidget* widget);
// void PrintCustomWidget::apply (::WebKitPrintCustomWidget* print_custom_widget, ::GtkWidget* widget);
GI_INLINE_DECL void apply_ (Gtk::Widget widget) noexcept override;

// void PrintCustomWidget::update (WebKitPrintCustomWidget* print_custom_widget, GtkWidget* widget, GtkPageSetup* page_setup, GtkPrintSettings* print_settings);
// void PrintCustomWidget::update (::WebKitPrintCustomWidget* print_custom_widget, ::GtkWidget* widget, ::GtkPageSetup* page_setup, ::GtkPrintSettings* print_settings);
GI_INLINE_DECL void update_ (Gtk::Widget widget, Gtk::PageSetup page_setup, Gtk::PrintSettings print_settings) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using PrintCustomWidgetImpl = detail::ObjectImpl<PrintCustomWidget, internal::PrintCustomWidgetClass>;

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
