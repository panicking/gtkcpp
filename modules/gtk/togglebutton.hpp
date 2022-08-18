// AUTO-GENERATED

#ifndef _GI_GTK_TOGGLEBUTTON_HPP_
#define _GI_GTK_TOGGLEBUTTON_HPP_

#include "button.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class ToggleButton;

namespace base {


#define GI_GTK_TOGGLEBUTTON_BASE base::ToggleButtonBase
class ToggleButtonBase : public Gtk::Button
{
typedef Gtk::Button super_type;
public:
typedef ::GtkToggleButton BaseObjectType;

ToggleButtonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_toggle_button_get_type(); } 

// GtkWidget* gtk_toggle_button_new ();
// ::GtkToggleButton* gtk_toggle_button_new ();
static GI_INLINE_DECL Gtk::ToggleButton new_ () noexcept;

// GtkWidget* gtk_toggle_button_new_with_label (const gchar* label);
// ::GtkToggleButton* gtk_toggle_button_new_with_label (const char* label);
static GI_INLINE_DECL Gtk::ToggleButton new_with_label (const std::string & label) noexcept;

// GtkWidget* gtk_toggle_button_new_with_mnemonic (const gchar* label);
// ::GtkToggleButton* gtk_toggle_button_new_with_mnemonic (const char* label);
static GI_INLINE_DECL Gtk::ToggleButton new_with_mnemonic (const std::string & label) noexcept;

// gboolean gtk_toggle_button_get_active (GtkToggleButton* toggle_button);
// gboolean gtk_toggle_button_get_active (::GtkToggleButton* toggle_button);
GI_INLINE_DECL bool get_active () noexcept;

// gboolean gtk_toggle_button_get_inconsistent (GtkToggleButton* toggle_button);
// gboolean gtk_toggle_button_get_inconsistent (::GtkToggleButton* toggle_button);
GI_INLINE_DECL bool get_inconsistent () noexcept;

// gboolean gtk_toggle_button_get_mode (GtkToggleButton* toggle_button);
// gboolean gtk_toggle_button_get_mode (::GtkToggleButton* toggle_button);
GI_INLINE_DECL bool get_mode () noexcept;

// void gtk_toggle_button_set_active (GtkToggleButton* toggle_button, gboolean is_active);
// void gtk_toggle_button_set_active (::GtkToggleButton* toggle_button, gboolean is_active);
GI_INLINE_DECL void set_active (gboolean is_active) noexcept;

// void gtk_toggle_button_set_inconsistent (GtkToggleButton* toggle_button, gboolean setting);
// void gtk_toggle_button_set_inconsistent (::GtkToggleButton* toggle_button, gboolean setting);
GI_INLINE_DECL void set_inconsistent (gboolean setting) noexcept;

// void gtk_toggle_button_set_mode (GtkToggleButton* toggle_button, gboolean draw_indicator);
// void gtk_toggle_button_set_mode (::GtkToggleButton* toggle_button, gboolean draw_indicator);
GI_INLINE_DECL void set_mode (gboolean draw_indicator) noexcept;

// void gtk_toggle_button_toggled (GtkToggleButton* toggle_button);
// void gtk_toggle_button_toggled (::GtkToggleButton* toggle_button);
GI_INLINE_DECL void toggled () noexcept;

gi::property_proxy<bool, base::ToggleButtonBase> property_active()
{ return gi::property_proxy<bool, base::ToggleButtonBase> (*this, "active"); }
const gi::property_proxy<bool, base::ToggleButtonBase> property_active() const
{ return gi::property_proxy<bool, base::ToggleButtonBase> (*this, "active"); }

gi::property_proxy<bool, base::ToggleButtonBase> property_draw_indicator()
{ return gi::property_proxy<bool, base::ToggleButtonBase> (*this, "draw-indicator"); }
const gi::property_proxy<bool, base::ToggleButtonBase> property_draw_indicator() const
{ return gi::property_proxy<bool, base::ToggleButtonBase> (*this, "draw-indicator"); }

gi::property_proxy<bool, base::ToggleButtonBase> property_inconsistent()
{ return gi::property_proxy<bool, base::ToggleButtonBase> (*this, "inconsistent"); }
const gi::property_proxy<bool, base::ToggleButtonBase> property_inconsistent() const
{ return gi::property_proxy<bool, base::ToggleButtonBase> (*this, "inconsistent"); }

// signal toggled
gi::signal_proxy<void(Gtk::ToggleButton)> signal_toggled()
{ return gi::signal_proxy<void(Gtk::ToggleButton)> (*this, "toggled"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/togglebutton_extra_def.hpp>)
#include <gtk/togglebutton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/togglebutton_extra.hpp>)
#include <gtk/togglebutton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ToggleButton : public GI_GTK_TOGGLEBUTTON_BASE
{ typedef GI_GTK_TOGGLEBUTTON_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkToggleButton>
{ typedef Gtk::ToggleButton type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ToggleButtonClassDef
{
typedef ToggleButtonClassDef self;
public:
typedef Gtk::ToggleButton instance_type;
typedef ::GtkToggleButtonClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void ToggleButton::toggled (GtkToggleButton* toggle_button);
// void ToggleButton::toggled (::GtkToggleButton* toggle_button);
virtual void toggled_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class ToggleButtonClass: public detail::ClassTemplate<Gtk::impl::internal::ToggleButtonClassDef, Gtk::impl::internal::ButtonClass>
{
typedef ToggleButtonClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ToggleButtonClassDef, Gtk::impl::internal::ButtonClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void ToggleButton::toggled (GtkToggleButton* toggle_button);
// void ToggleButton::toggled (::GtkToggleButton* toggle_button);
GI_INLINE_DECL void toggled_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using ToggleButtonImpl = detail::ObjectImpl<ToggleButton, internal::ToggleButtonClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
