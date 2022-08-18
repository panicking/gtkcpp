// AUTO-GENERATED

#ifndef _GI_GTK_TOOLBUTTON_HPP_
#define _GI_GTK_TOOLBUTTON_HPP_

#include "toolitem.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Actionable;
class Widget;

class ToolButton;

namespace base {


#define GI_GTK_TOOLBUTTON_BASE base::ToolButtonBase
class ToolButtonBase : public Gtk::ToolItem
{
typedef Gtk::ToolItem super_type;
public:
typedef ::GtkToolButton BaseObjectType;

ToolButtonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_tool_button_get_type(); } 

GI_INLINE_DECL Gtk::Actionable interface_ (gi::interface_tag<Gtk::Actionable>);

GI_INLINE_DECL operator Gtk::Actionable ();

// GtkToolItem* gtk_tool_button_new (GtkWidget* icon_widget, const gchar* label);
// ::GtkToolButton* gtk_tool_button_new (::GtkWidget* icon_widget, const char* label);
static GI_INLINE_DECL Gtk::ToolButton new_ (Gtk::Widget icon_widget, const std::string & label) noexcept;
static GI_INLINE_DECL Gtk::ToolButton new_ () noexcept;

// GtkToolItem* gtk_tool_button_new_from_stock (const gchar* stock_id);
// ::GtkToolButton* gtk_tool_button_new_from_stock (const char* stock_id);
// IGNORE; deprecated

// const gchar* gtk_tool_button_get_icon_name (GtkToolButton* button);
// const char* gtk_tool_button_get_icon_name (::GtkToolButton* button);
GI_INLINE_DECL std::string get_icon_name () noexcept;

// GtkWidget* gtk_tool_button_get_icon_widget (GtkToolButton* button);
// ::GtkWidget* gtk_tool_button_get_icon_widget (::GtkToolButton* button);
GI_INLINE_DECL Gtk::Widget get_icon_widget () noexcept;

// const gchar* gtk_tool_button_get_label (GtkToolButton* button);
// const char* gtk_tool_button_get_label (::GtkToolButton* button);
GI_INLINE_DECL std::string get_label () noexcept;

// GtkWidget* gtk_tool_button_get_label_widget (GtkToolButton* button);
// ::GtkWidget* gtk_tool_button_get_label_widget (::GtkToolButton* button);
GI_INLINE_DECL Gtk::Widget get_label_widget () noexcept;

// const gchar* gtk_tool_button_get_stock_id (GtkToolButton* button);
// const char* gtk_tool_button_get_stock_id (::GtkToolButton* button);
// IGNORE; deprecated

// gboolean gtk_tool_button_get_use_underline (GtkToolButton* button);
// gboolean gtk_tool_button_get_use_underline (::GtkToolButton* button);
GI_INLINE_DECL bool get_use_underline () noexcept;

// void gtk_tool_button_set_icon_name (GtkToolButton* button, const gchar* icon_name);
// void gtk_tool_button_set_icon_name (::GtkToolButton* button, const char* icon_name);
GI_INLINE_DECL void set_icon_name (const std::string & icon_name) noexcept;
GI_INLINE_DECL void set_icon_name () noexcept;

// void gtk_tool_button_set_icon_widget (GtkToolButton* button, GtkWidget* icon_widget);
// void gtk_tool_button_set_icon_widget (::GtkToolButton* button, ::GtkWidget* icon_widget);
GI_INLINE_DECL void set_icon_widget (Gtk::Widget icon_widget) noexcept;
GI_INLINE_DECL void set_icon_widget () noexcept;

// void gtk_tool_button_set_label (GtkToolButton* button, const gchar* label);
// void gtk_tool_button_set_label (::GtkToolButton* button, const char* label);
GI_INLINE_DECL void set_label (const std::string & label) noexcept;
GI_INLINE_DECL void set_label () noexcept;

// void gtk_tool_button_set_label_widget (GtkToolButton* button, GtkWidget* label_widget);
// void gtk_tool_button_set_label_widget (::GtkToolButton* button, ::GtkWidget* label_widget);
GI_INLINE_DECL void set_label_widget (Gtk::Widget label_widget) noexcept;
GI_INLINE_DECL void set_label_widget () noexcept;

// void gtk_tool_button_set_stock_id (GtkToolButton* button, const gchar* stock_id);
// void gtk_tool_button_set_stock_id (::GtkToolButton* button, const char* stock_id);
// IGNORE; deprecated

// void gtk_tool_button_set_use_underline (GtkToolButton* button, gboolean use_underline);
// void gtk_tool_button_set_use_underline (::GtkToolButton* button, gboolean use_underline);
GI_INLINE_DECL void set_use_underline (gboolean use_underline) noexcept;

gi::property_proxy<std::string, base::ToolButtonBase> property_icon_name()
{ return gi::property_proxy<std::string, base::ToolButtonBase> (*this, "icon-name"); }
const gi::property_proxy<std::string, base::ToolButtonBase> property_icon_name() const
{ return gi::property_proxy<std::string, base::ToolButtonBase> (*this, "icon-name"); }

gi::property_proxy<Gtk::Widget, base::ToolButtonBase> property_icon_widget()
{ return gi::property_proxy<Gtk::Widget, base::ToolButtonBase> (*this, "icon-widget"); }
const gi::property_proxy<Gtk::Widget, base::ToolButtonBase> property_icon_widget() const
{ return gi::property_proxy<Gtk::Widget, base::ToolButtonBase> (*this, "icon-widget"); }

gi::property_proxy<std::string, base::ToolButtonBase> property_label()
{ return gi::property_proxy<std::string, base::ToolButtonBase> (*this, "label"); }
const gi::property_proxy<std::string, base::ToolButtonBase> property_label() const
{ return gi::property_proxy<std::string, base::ToolButtonBase> (*this, "label"); }

gi::property_proxy<Gtk::Widget, base::ToolButtonBase> property_label_widget()
{ return gi::property_proxy<Gtk::Widget, base::ToolButtonBase> (*this, "label-widget"); }
const gi::property_proxy<Gtk::Widget, base::ToolButtonBase> property_label_widget() const
{ return gi::property_proxy<Gtk::Widget, base::ToolButtonBase> (*this, "label-widget"); }

gi::property_proxy<std::string, base::ToolButtonBase> property_stock_id()
{ return gi::property_proxy<std::string, base::ToolButtonBase> (*this, "stock-id"); }
const gi::property_proxy<std::string, base::ToolButtonBase> property_stock_id() const
{ return gi::property_proxy<std::string, base::ToolButtonBase> (*this, "stock-id"); }

gi::property_proxy<bool, base::ToolButtonBase> property_use_underline()
{ return gi::property_proxy<bool, base::ToolButtonBase> (*this, "use-underline"); }
const gi::property_proxy<bool, base::ToolButtonBase> property_use_underline() const
{ return gi::property_proxy<bool, base::ToolButtonBase> (*this, "use-underline"); }

// signal clicked
gi::signal_proxy<void(Gtk::ToolButton)> signal_clicked()
{ return gi::signal_proxy<void(Gtk::ToolButton)> (*this, "clicked"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/toolbutton_extra_def.hpp>)
#include <gtk/toolbutton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/toolbutton_extra.hpp>)
#include <gtk/toolbutton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ToolButton : public GI_GTK_TOOLBUTTON_BASE
{ typedef GI_GTK_TOOLBUTTON_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkToolButton>
{ typedef Gtk::ToolButton type; }; 

} // namespace repository

} // namespace gi

#include "actionable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ToolButtonClassDef
{
typedef ToolButtonClassDef self;
public:
typedef Gtk::ToolButton instance_type;
typedef ::GtkToolButtonClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void ToolButton::clicked (GtkToolButton* tool_item);
// void ToolButton::clicked (::GtkToolButton* tool_item);
virtual void clicked_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class ToolButtonClass: public detail::ClassTemplate<Gtk::impl::internal::ToolButtonClassDef, Gtk::impl::internal::ToolItemClass, Gtk::impl::internal::ActionableInterfaceClassImpl>
{
typedef ToolButtonClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ToolButtonClassDef, Gtk::impl::internal::ToolItemClass, Gtk::impl::internal::ActionableInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::ActionableInterfaceClassImpl GtkActionableInterface_type;


// void ToolButton::clicked (GtkToolButton* tool_item);
// void ToolButton::clicked (::GtkToolButton* tool_item);
GI_INLINE_DECL void clicked_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using ToolButtonImpl = detail::ObjectImpl<ToolButton, internal::ToolButtonClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
