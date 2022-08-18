// AUTO-GENERATED

#ifndef _GI_GTK_APPCHOOSERBUTTON_HPP_
#define _GI_GTK_APPCHOOSERBUTTON_HPP_

#include "combobox.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class AppChooser;

class AppChooserButton;

namespace base {


#define GI_GTK_APPCHOOSERBUTTON_BASE base::AppChooserButtonBase
class AppChooserButtonBase : public Gtk::ComboBox
{
typedef Gtk::ComboBox super_type;
public:
typedef ::GtkAppChooserButton BaseObjectType;

AppChooserButtonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_app_chooser_button_get_type(); } 

GI_INLINE_DECL Gtk::AppChooser interface_ (gi::interface_tag<Gtk::AppChooser>);

GI_INLINE_DECL operator Gtk::AppChooser ();

// GtkWidget* gtk_app_chooser_button_new (const gchar* content_type);
// ::GtkAppChooserButton* gtk_app_chooser_button_new (const char* content_type);
static GI_INLINE_DECL Gtk::AppChooserButton new_ (const std::string & content_type) noexcept;

// void gtk_app_chooser_button_append_custom_item (GtkAppChooserButton* self, const gchar* name, const gchar* label, GIcon* icon);
// void gtk_app_chooser_button_append_custom_item (::GtkAppChooserButton* self, const char* name, const char* label, ::GIcon* icon);
GI_INLINE_DECL void append_custom_item (const std::string & name, const std::string & label, Gio::Icon icon) noexcept;

// void gtk_app_chooser_button_append_separator (GtkAppChooserButton* self);
// void gtk_app_chooser_button_append_separator (::GtkAppChooserButton* self);
GI_INLINE_DECL void append_separator () noexcept;

// const gchar* gtk_app_chooser_button_get_heading (GtkAppChooserButton* self);
// const char* gtk_app_chooser_button_get_heading (::GtkAppChooserButton* self);
GI_INLINE_DECL std::string get_heading () noexcept;

// gboolean gtk_app_chooser_button_get_show_default_item (GtkAppChooserButton* self);
// gboolean gtk_app_chooser_button_get_show_default_item (::GtkAppChooserButton* self);
GI_INLINE_DECL bool get_show_default_item () noexcept;

// gboolean gtk_app_chooser_button_get_show_dialog_item (GtkAppChooserButton* self);
// gboolean gtk_app_chooser_button_get_show_dialog_item (::GtkAppChooserButton* self);
GI_INLINE_DECL bool get_show_dialog_item () noexcept;

// void gtk_app_chooser_button_set_active_custom_item (GtkAppChooserButton* self, const gchar* name);
// void gtk_app_chooser_button_set_active_custom_item (::GtkAppChooserButton* self, const char* name);
GI_INLINE_DECL void set_active_custom_item (const std::string & name) noexcept;

// void gtk_app_chooser_button_set_heading (GtkAppChooserButton* self, const gchar* heading);
// void gtk_app_chooser_button_set_heading (::GtkAppChooserButton* self, const char* heading);
GI_INLINE_DECL void set_heading (const std::string & heading) noexcept;

// void gtk_app_chooser_button_set_show_default_item (GtkAppChooserButton* self, gboolean setting);
// void gtk_app_chooser_button_set_show_default_item (::GtkAppChooserButton* self, gboolean setting);
GI_INLINE_DECL void set_show_default_item (gboolean setting) noexcept;

// void gtk_app_chooser_button_set_show_dialog_item (GtkAppChooserButton* self, gboolean setting);
// void gtk_app_chooser_button_set_show_dialog_item (::GtkAppChooserButton* self, gboolean setting);
GI_INLINE_DECL void set_show_dialog_item (gboolean setting) noexcept;

gi::property_proxy<std::string, base::AppChooserButtonBase> property_heading()
{ return gi::property_proxy<std::string, base::AppChooserButtonBase> (*this, "heading"); }
const gi::property_proxy<std::string, base::AppChooserButtonBase> property_heading() const
{ return gi::property_proxy<std::string, base::AppChooserButtonBase> (*this, "heading"); }

gi::property_proxy<bool, base::AppChooserButtonBase> property_show_default_item()
{ return gi::property_proxy<bool, base::AppChooserButtonBase> (*this, "show-default-item"); }
const gi::property_proxy<bool, base::AppChooserButtonBase> property_show_default_item() const
{ return gi::property_proxy<bool, base::AppChooserButtonBase> (*this, "show-default-item"); }

gi::property_proxy<bool, base::AppChooserButtonBase> property_show_dialog_item()
{ return gi::property_proxy<bool, base::AppChooserButtonBase> (*this, "show-dialog-item"); }
const gi::property_proxy<bool, base::AppChooserButtonBase> property_show_dialog_item() const
{ return gi::property_proxy<bool, base::AppChooserButtonBase> (*this, "show-dialog-item"); }

// signal custom-item-activated
gi::signal_proxy<void(Gtk::AppChooserButton, const std::string & item_name)> signal_custom_item_activated()
{ return gi::signal_proxy<void(Gtk::AppChooserButton, const std::string & item_name)> (*this, "custom-item-activated"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/appchooserbutton_extra_def.hpp>)
#include <gtk/appchooserbutton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/appchooserbutton_extra.hpp>)
#include <gtk/appchooserbutton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class AppChooserButton : public GI_GTK_APPCHOOSERBUTTON_BASE
{ typedef GI_GTK_APPCHOOSERBUTTON_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkAppChooserButton>
{ typedef Gtk::AppChooserButton type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class AppChooserButtonClassDef
{
typedef AppChooserButtonClassDef self;
public:
typedef Gtk::AppChooserButton instance_type;
typedef ::GtkAppChooserButtonClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void AppChooserButton::custom_item_activated (GtkAppChooserButton* self, const gchar* item_name);
// void AppChooserButton::custom_item_activated (::GtkAppChooserButton* self, const char* item_name);
virtual void custom_item_activated_ (const std::string & item_name) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class AppChooserButtonClass: public detail::ClassTemplate<Gtk::impl::internal::AppChooserButtonClassDef, Gtk::impl::internal::ComboBoxClass>
{
typedef AppChooserButtonClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::AppChooserButtonClassDef, Gtk::impl::internal::ComboBoxClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void AppChooserButton::custom_item_activated (GtkAppChooserButton* self, const gchar* item_name);
// void AppChooserButton::custom_item_activated (::GtkAppChooserButton* self, const char* item_name);
GI_INLINE_DECL void custom_item_activated_ (const std::string & item_name) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using AppChooserButtonImpl = detail::ObjectImpl<AppChooserButton, internal::AppChooserButtonClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
