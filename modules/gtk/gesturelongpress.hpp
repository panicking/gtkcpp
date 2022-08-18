// AUTO-GENERATED

#ifndef _GI_GTK_GESTURELONGPRESS_HPP_
#define _GI_GTK_GESTURELONGPRESS_HPP_

#include "gesturesingle.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class GestureLongPress;

namespace base {


#define GI_GTK_GESTURELONGPRESS_BASE base::GestureLongPressBase
class GestureLongPressBase : public Gtk::GestureSingle
{
typedef Gtk::GestureSingle super_type;
public:
typedef ::GtkGestureLongPress BaseObjectType;

GestureLongPressBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_gesture_long_press_get_type(); } 

// GtkGesture* gtk_gesture_long_press_new (GtkWidget* widget);
// ::GtkGestureLongPress* gtk_gesture_long_press_new (::GtkWidget* widget);
static GI_INLINE_DECL Gtk::GestureLongPress new_ (Gtk::Widget widget) noexcept;

gi::property_proxy<gdouble, base::GestureLongPressBase> property_delay_factor()
{ return gi::property_proxy<gdouble, base::GestureLongPressBase> (*this, "delay-factor"); }
const gi::property_proxy<gdouble, base::GestureLongPressBase> property_delay_factor() const
{ return gi::property_proxy<gdouble, base::GestureLongPressBase> (*this, "delay-factor"); }

// signal cancelled
gi::signal_proxy<void(Gtk::GestureLongPress)> signal_cancelled()
{ return gi::signal_proxy<void(Gtk::GestureLongPress)> (*this, "cancelled"); }

// signal pressed
gi::signal_proxy<void(Gtk::GestureLongPress, gdouble x, gdouble y)> signal_pressed()
{ return gi::signal_proxy<void(Gtk::GestureLongPress, gdouble x, gdouble y)> (*this, "pressed"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/gesturelongpress_extra_def.hpp>)
#include <gtk/gesturelongpress_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/gesturelongpress_extra.hpp>)
#include <gtk/gesturelongpress_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class GestureLongPress : public GI_GTK_GESTURELONGPRESS_BASE
{ typedef GI_GTK_GESTURELONGPRESS_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkGestureLongPress>
{ typedef Gtk::GestureLongPress type; }; 

} // namespace repository

} // namespace gi

#endif
