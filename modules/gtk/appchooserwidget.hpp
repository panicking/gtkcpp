// AUTO-GENERATED

#ifndef _GI_GTK_APPCHOOSERWIDGET_HPP_
#define _GI_GTK_APPCHOOSERWIDGET_HPP_

#include "box.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class AppChooser;
class Menu;

class AppChooserWidget;

namespace base {


#define GI_GTK_APPCHOOSERWIDGET_BASE base::AppChooserWidgetBase
class AppChooserWidgetBase : public Gtk::Box
{
typedef Gtk::Box super_type;
public:
typedef ::GtkAppChooserWidget BaseObjectType;

AppChooserWidgetBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_app_chooser_widget_get_type(); } 

GI_INLINE_DECL Gtk::AppChooser interface_ (gi::interface_tag<Gtk::AppChooser>);

GI_INLINE_DECL operator Gtk::AppChooser ();

// GtkWidget* gtk_app_chooser_widget_new (const gchar* content_type);
// ::GtkAppChooserWidget* gtk_app_chooser_widget_new (const char* content_type);
static GI_INLINE_DECL Gtk::AppChooserWidget new_ (const std::string & content_type) noexcept;

// const gchar* gtk_app_chooser_widget_get_default_text (GtkAppChooserWidget* self);
// const char* gtk_app_chooser_widget_get_default_text (::GtkAppChooserWidget* self);
GI_INLINE_DECL std::string get_default_text () noexcept;

// gboolean gtk_app_chooser_widget_get_show_all (GtkAppChooserWidget* self);
// gboolean gtk_app_chooser_widget_get_show_all (::GtkAppChooserWidget* self);
GI_INLINE_DECL bool get_show_all () noexcept;

// gboolean gtk_app_chooser_widget_get_show_default (GtkAppChooserWidget* self);
// gboolean gtk_app_chooser_widget_get_show_default (::GtkAppChooserWidget* self);
GI_INLINE_DECL bool get_show_default () noexcept;

// gboolean gtk_app_chooser_widget_get_show_fallback (GtkAppChooserWidget* self);
// gboolean gtk_app_chooser_widget_get_show_fallback (::GtkAppChooserWidget* self);
GI_INLINE_DECL bool get_show_fallback () noexcept;

// gboolean gtk_app_chooser_widget_get_show_other (GtkAppChooserWidget* self);
// gboolean gtk_app_chooser_widget_get_show_other (::GtkAppChooserWidget* self);
GI_INLINE_DECL bool get_show_other () noexcept;

// gboolean gtk_app_chooser_widget_get_show_recommended (GtkAppChooserWidget* self);
// gboolean gtk_app_chooser_widget_get_show_recommended (::GtkAppChooserWidget* self);
GI_INLINE_DECL bool get_show_recommended () noexcept;

// void gtk_app_chooser_widget_set_default_text (GtkAppChooserWidget* self, const gchar* text);
// void gtk_app_chooser_widget_set_default_text (::GtkAppChooserWidget* self, const char* text);
GI_INLINE_DECL void set_default_text (const std::string & text) noexcept;

// void gtk_app_chooser_widget_set_show_all (GtkAppChooserWidget* self, gboolean setting);
// void gtk_app_chooser_widget_set_show_all (::GtkAppChooserWidget* self, gboolean setting);
GI_INLINE_DECL void set_show_all (gboolean setting) noexcept;

// void gtk_app_chooser_widget_set_show_default (GtkAppChooserWidget* self, gboolean setting);
// void gtk_app_chooser_widget_set_show_default (::GtkAppChooserWidget* self, gboolean setting);
GI_INLINE_DECL void set_show_default (gboolean setting) noexcept;

// void gtk_app_chooser_widget_set_show_fallback (GtkAppChooserWidget* self, gboolean setting);
// void gtk_app_chooser_widget_set_show_fallback (::GtkAppChooserWidget* self, gboolean setting);
GI_INLINE_DECL void set_show_fallback (gboolean setting) noexcept;

// void gtk_app_chooser_widget_set_show_other (GtkAppChooserWidget* self, gboolean setting);
// void gtk_app_chooser_widget_set_show_other (::GtkAppChooserWidget* self, gboolean setting);
GI_INLINE_DECL void set_show_other (gboolean setting) noexcept;

// void gtk_app_chooser_widget_set_show_recommended (GtkAppChooserWidget* self, gboolean setting);
// void gtk_app_chooser_widget_set_show_recommended (::GtkAppChooserWidget* self, gboolean setting);
GI_INLINE_DECL void set_show_recommended (gboolean setting) noexcept;

gi::property_proxy<std::string, base::AppChooserWidgetBase> property_default_text()
{ return gi::property_proxy<std::string, base::AppChooserWidgetBase> (*this, "default-text"); }
const gi::property_proxy<std::string, base::AppChooserWidgetBase> property_default_text() const
{ return gi::property_proxy<std::string, base::AppChooserWidgetBase> (*this, "default-text"); }

gi::property_proxy<bool, base::AppChooserWidgetBase> property_show_all()
{ return gi::property_proxy<bool, base::AppChooserWidgetBase> (*this, "show-all"); }
const gi::property_proxy<bool, base::AppChooserWidgetBase> property_show_all() const
{ return gi::property_proxy<bool, base::AppChooserWidgetBase> (*this, "show-all"); }

gi::property_proxy<bool, base::AppChooserWidgetBase> property_show_default()
{ return gi::property_proxy<bool, base::AppChooserWidgetBase> (*this, "show-default"); }
const gi::property_proxy<bool, base::AppChooserWidgetBase> property_show_default() const
{ return gi::property_proxy<bool, base::AppChooserWidgetBase> (*this, "show-default"); }

gi::property_proxy<bool, base::AppChooserWidgetBase> property_show_fallback()
{ return gi::property_proxy<bool, base::AppChooserWidgetBase> (*this, "show-fallback"); }
const gi::property_proxy<bool, base::AppChooserWidgetBase> property_show_fallback() const
{ return gi::property_proxy<bool, base::AppChooserWidgetBase> (*this, "show-fallback"); }

gi::property_proxy<bool, base::AppChooserWidgetBase> property_show_other()
{ return gi::property_proxy<bool, base::AppChooserWidgetBase> (*this, "show-other"); }
const gi::property_proxy<bool, base::AppChooserWidgetBase> property_show_other() const
{ return gi::property_proxy<bool, base::AppChooserWidgetBase> (*this, "show-other"); }

gi::property_proxy<bool, base::AppChooserWidgetBase> property_show_recommended()
{ return gi::property_proxy<bool, base::AppChooserWidgetBase> (*this, "show-recommended"); }
const gi::property_proxy<bool, base::AppChooserWidgetBase> property_show_recommended() const
{ return gi::property_proxy<bool, base::AppChooserWidgetBase> (*this, "show-recommended"); }

// signal application-activated
gi::signal_proxy<void(Gtk::AppChooserWidget, Gio::AppInfo application)> signal_application_activated()
{ return gi::signal_proxy<void(Gtk::AppChooserWidget, Gio::AppInfo application)> (*this, "application-activated"); }

// signal application-selected
gi::signal_proxy<void(Gtk::AppChooserWidget, Gio::AppInfo application)> signal_application_selected()
{ return gi::signal_proxy<void(Gtk::AppChooserWidget, Gio::AppInfo application)> (*this, "application-selected"); }

// signal populate-popup
gi::signal_proxy<void(Gtk::AppChooserWidget, Gtk::Menu menu, Gio::AppInfo application)> signal_populate_popup()
{ return gi::signal_proxy<void(Gtk::AppChooserWidget, Gtk::Menu menu, Gio::AppInfo application)> (*this, "populate-popup"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/appchooserwidget_extra_def.hpp>)
#include <gtk/appchooserwidget_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/appchooserwidget_extra.hpp>)
#include <gtk/appchooserwidget_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class AppChooserWidget : public GI_GTK_APPCHOOSERWIDGET_BASE
{ typedef GI_GTK_APPCHOOSERWIDGET_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkAppChooserWidget>
{ typedef Gtk::AppChooserWidget type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class AppChooserWidgetClassDef
{
typedef AppChooserWidgetClassDef self;
public:
typedef Gtk::AppChooserWidget instance_type;
typedef ::GtkAppChooserWidgetClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void AppChooserWidget::application_activated (GtkAppChooserWidget* self, GAppInfo* app_info);
// void AppChooserWidget::application_activated (::GtkAppChooserWidget* self, ::GAppInfo* app_info);
virtual void application_activated_ (Gio::AppInfo app_info) noexcept = 0;

// void AppChooserWidget::application_selected (GtkAppChooserWidget* self, GAppInfo* app_info);
// void AppChooserWidget::application_selected (::GtkAppChooserWidget* self, ::GAppInfo* app_info);
virtual void application_selected_ (Gio::AppInfo app_info) noexcept = 0;

// void AppChooserWidget::populate_popup (GtkAppChooserWidget* self, GtkMenu* menu, GAppInfo* app_info);
// void AppChooserWidget::populate_popup (::GtkAppChooserWidget* self, ::GtkMenu* menu, ::GAppInfo* app_info);
virtual void populate_popup_ (Gtk::Menu menu, Gio::AppInfo app_info) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class AppChooserWidgetClass: public detail::ClassTemplate<Gtk::impl::internal::AppChooserWidgetClassDef, Gtk::impl::internal::BoxClass>
{
typedef AppChooserWidgetClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::AppChooserWidgetClassDef, Gtk::impl::internal::BoxClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void AppChooserWidget::application_activated (GtkAppChooserWidget* self, GAppInfo* app_info);
// void AppChooserWidget::application_activated (::GtkAppChooserWidget* self, ::GAppInfo* app_info);
GI_INLINE_DECL void application_activated_ (Gio::AppInfo app_info) noexcept override;

// void AppChooserWidget::application_selected (GtkAppChooserWidget* self, GAppInfo* app_info);
// void AppChooserWidget::application_selected (::GtkAppChooserWidget* self, ::GAppInfo* app_info);
GI_INLINE_DECL void application_selected_ (Gio::AppInfo app_info) noexcept override;

// void AppChooserWidget::populate_popup (GtkAppChooserWidget* self, GtkMenu* menu, GAppInfo* app_info);
// void AppChooserWidget::populate_popup (::GtkAppChooserWidget* self, ::GtkMenu* menu, ::GAppInfo* app_info);
GI_INLINE_DECL void populate_popup_ (Gtk::Menu menu, Gio::AppInfo app_info) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using AppChooserWidgetImpl = detail::ObjectImpl<AppChooserWidget, internal::AppChooserWidgetClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
