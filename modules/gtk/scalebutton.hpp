// AUTO-GENERATED

#ifndef _GI_GTK_SCALEBUTTON_HPP_
#define _GI_GTK_SCALEBUTTON_HPP_

#include "button.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Adjustment;
class Button;
class Orientable;
class Widget;

class ScaleButton;

namespace base {


#define GI_GTK_SCALEBUTTON_BASE base::ScaleButtonBase
class ScaleButtonBase : public Gtk::Button
{
typedef Gtk::Button super_type;
public:
typedef ::GtkScaleButton BaseObjectType;

ScaleButtonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_scale_button_get_type(); } 

GI_INLINE_DECL Gtk::Orientable interface_ (gi::interface_tag<Gtk::Orientable>);

GI_INLINE_DECL operator Gtk::Orientable ();

// GtkWidget* gtk_scale_button_new (GtkIconSize size, gdouble min, gdouble max, gdouble step, const gchar** icons);
// ::GtkScaleButton* gtk_scale_button_new (gint size, gdouble min, gdouble max, gdouble step, const char** icons);
static GI_INLINE_DECL Gtk::ScaleButton new_ (gint size, gdouble min, gdouble max, gdouble step, const std::vector<std::string> & icons) noexcept;

// GtkAdjustment* gtk_scale_button_get_adjustment (GtkScaleButton* button);
// ::GtkAdjustment* gtk_scale_button_get_adjustment (::GtkScaleButton* button);
GI_INLINE_DECL Gtk::Adjustment get_adjustment () noexcept;

// GtkWidget* gtk_scale_button_get_minus_button (GtkScaleButton* button);
// ::GtkButton* gtk_scale_button_get_minus_button (::GtkScaleButton* button);
GI_INLINE_DECL Gtk::Button get_minus_button () noexcept;

// GtkWidget* gtk_scale_button_get_plus_button (GtkScaleButton* button);
// ::GtkButton* gtk_scale_button_get_plus_button (::GtkScaleButton* button);
GI_INLINE_DECL Gtk::Button get_plus_button () noexcept;

// GtkWidget* gtk_scale_button_get_popup (GtkScaleButton* button);
// ::GtkWidget* gtk_scale_button_get_popup (::GtkScaleButton* button);
GI_INLINE_DECL Gtk::Widget get_popup () noexcept;

// gdouble gtk_scale_button_get_value (GtkScaleButton* button);
// gdouble gtk_scale_button_get_value (::GtkScaleButton* button);
GI_INLINE_DECL gdouble get_value () noexcept;

// void gtk_scale_button_set_adjustment (GtkScaleButton* button, GtkAdjustment* adjustment);
// void gtk_scale_button_set_adjustment (::GtkScaleButton* button, ::GtkAdjustment* adjustment);
GI_INLINE_DECL void set_adjustment (Gtk::Adjustment adjustment) noexcept;

// void gtk_scale_button_set_icons (GtkScaleButton* button, const gchar** icons);
// void gtk_scale_button_set_icons (::GtkScaleButton* button, const char** icons);
GI_INLINE_DECL void set_icons (const std::vector<std::string> & icons) noexcept;

// void gtk_scale_button_set_value (GtkScaleButton* button, gdouble value);
// void gtk_scale_button_set_value (::GtkScaleButton* button, gdouble value);
GI_INLINE_DECL void set_value (gdouble value) noexcept;

gi::property_proxy<Gtk::Adjustment, base::ScaleButtonBase> property_adjustment()
{ return gi::property_proxy<Gtk::Adjustment, base::ScaleButtonBase> (*this, "adjustment"); }
const gi::property_proxy<Gtk::Adjustment, base::ScaleButtonBase> property_adjustment() const
{ return gi::property_proxy<Gtk::Adjustment, base::ScaleButtonBase> (*this, "adjustment"); }

gi::property_proxy<Gtk::IconSize, base::ScaleButtonBase> property_size()
{ return gi::property_proxy<Gtk::IconSize, base::ScaleButtonBase> (*this, "size"); }
const gi::property_proxy<Gtk::IconSize, base::ScaleButtonBase> property_size() const
{ return gi::property_proxy<Gtk::IconSize, base::ScaleButtonBase> (*this, "size"); }

gi::property_proxy<gdouble, base::ScaleButtonBase> property_value()
{ return gi::property_proxy<gdouble, base::ScaleButtonBase> (*this, "value"); }
const gi::property_proxy<gdouble, base::ScaleButtonBase> property_value() const
{ return gi::property_proxy<gdouble, base::ScaleButtonBase> (*this, "value"); }

// signal popdown
gi::signal_proxy<void(Gtk::ScaleButton)> signal_popdown()
{ return gi::signal_proxy<void(Gtk::ScaleButton)> (*this, "popdown"); }

// signal popup
gi::signal_proxy<void(Gtk::ScaleButton)> signal_popup()
{ return gi::signal_proxy<void(Gtk::ScaleButton)> (*this, "popup"); }

// signal value-changed
gi::signal_proxy<void(Gtk::ScaleButton, gdouble value)> signal_value_changed()
{ return gi::signal_proxy<void(Gtk::ScaleButton, gdouble value)> (*this, "value-changed"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/scalebutton_extra_def.hpp>)
#include <gtk/scalebutton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/scalebutton_extra.hpp>)
#include <gtk/scalebutton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ScaleButton : public GI_GTK_SCALEBUTTON_BASE
{ typedef GI_GTK_SCALEBUTTON_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkScaleButton>
{ typedef Gtk::ScaleButton type; }; 

} // namespace repository

} // namespace gi

#include "orientable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ScaleButtonClassDef
{
typedef ScaleButtonClassDef self;
public:
typedef Gtk::ScaleButton instance_type;
typedef ::GtkScaleButtonClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void ScaleButton::value_changed (GtkScaleButton* button, gdouble value);
// void ScaleButton::value_changed (::GtkScaleButton* button, gdouble value);
virtual void value_changed_ (gdouble value) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class ScaleButtonClass: public detail::ClassTemplate<Gtk::impl::internal::ScaleButtonClassDef, Gtk::impl::internal::ButtonClass, Gtk::impl::internal::OrientableIfaceClassImpl>
{
typedef ScaleButtonClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ScaleButtonClassDef, Gtk::impl::internal::ButtonClass, Gtk::impl::internal::OrientableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::OrientableIfaceClassImpl GtkOrientableIface_type;


// void ScaleButton::value_changed (GtkScaleButton* button, gdouble value);
// void ScaleButton::value_changed (::GtkScaleButton* button, gdouble value);
GI_INLINE_DECL void value_changed_ (gdouble value) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using ScaleButtonImpl = detail::ObjectImpl<ScaleButton, internal::ScaleButtonClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
