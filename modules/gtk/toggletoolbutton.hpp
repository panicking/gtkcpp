// AUTO-GENERATED

#ifndef _GI_GTK_TOGGLETOOLBUTTON_HPP_
#define _GI_GTK_TOGGLETOOLBUTTON_HPP_

#include "toolbutton.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class ToggleToolButton;

namespace base {


#define GI_GTK_TOGGLETOOLBUTTON_BASE base::ToggleToolButtonBase
class ToggleToolButtonBase : public Gtk::ToolButton
{
typedef Gtk::ToolButton super_type;
public:
typedef ::GtkToggleToolButton BaseObjectType;

ToggleToolButtonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_toggle_tool_button_get_type(); } 

// GtkToolItem* gtk_toggle_tool_button_new ();
// ::GtkToggleToolButton* gtk_toggle_tool_button_new ();
static GI_INLINE_DECL Gtk::ToggleToolButton new_ () noexcept;

// GtkToolItem* gtk_toggle_tool_button_new_from_stock (const gchar* stock_id);
// ::GtkToggleToolButton* gtk_toggle_tool_button_new_from_stock (const char* stock_id);
// IGNORE; deprecated

// gboolean gtk_toggle_tool_button_get_active (GtkToggleToolButton* button);
// gboolean gtk_toggle_tool_button_get_active (::GtkToggleToolButton* button);
GI_INLINE_DECL bool get_active () noexcept;

// void gtk_toggle_tool_button_set_active (GtkToggleToolButton* button, gboolean is_active);
// void gtk_toggle_tool_button_set_active (::GtkToggleToolButton* button, gboolean is_active);
GI_INLINE_DECL void set_active (gboolean is_active) noexcept;

gi::property_proxy<bool, base::ToggleToolButtonBase> property_active()
{ return gi::property_proxy<bool, base::ToggleToolButtonBase> (*this, "active"); }
const gi::property_proxy<bool, base::ToggleToolButtonBase> property_active() const
{ return gi::property_proxy<bool, base::ToggleToolButtonBase> (*this, "active"); }

// signal toggled
gi::signal_proxy<void(Gtk::ToggleToolButton)> signal_toggled()
{ return gi::signal_proxy<void(Gtk::ToggleToolButton)> (*this, "toggled"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/toggletoolbutton_extra_def.hpp>)
#include <gtk/toggletoolbutton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/toggletoolbutton_extra.hpp>)
#include <gtk/toggletoolbutton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ToggleToolButton : public GI_GTK_TOGGLETOOLBUTTON_BASE
{ typedef GI_GTK_TOGGLETOOLBUTTON_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkToggleToolButton>
{ typedef Gtk::ToggleToolButton type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ToggleToolButtonClassDef
{
typedef ToggleToolButtonClassDef self;
public:
typedef Gtk::ToggleToolButton instance_type;
typedef ::GtkToggleToolButtonClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void ToggleToolButton::toggled (GtkToggleToolButton* button);
// void ToggleToolButton::toggled (::GtkToggleToolButton* button);
virtual void toggled_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class ToggleToolButtonClass: public detail::ClassTemplate<Gtk::impl::internal::ToggleToolButtonClassDef, Gtk::impl::internal::ToolButtonClass>
{
typedef ToggleToolButtonClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ToggleToolButtonClassDef, Gtk::impl::internal::ToolButtonClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void ToggleToolButton::toggled (GtkToggleToolButton* button);
// void ToggleToolButton::toggled (::GtkToggleToolButton* button);
GI_INLINE_DECL void toggled_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using ToggleToolButtonImpl = detail::ObjectImpl<ToggleToolButton, internal::ToggleToolButtonClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
