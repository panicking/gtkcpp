// AUTO-GENERATED

#ifndef _GI_GTK_GESTUREPAN_HPP_
#define _GI_GTK_GESTUREPAN_HPP_

#include "gesturedrag.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class GesturePan;

namespace base {


#define GI_GTK_GESTUREPAN_BASE base::GesturePanBase
class GesturePanBase : public Gtk::GestureDrag
{
typedef Gtk::GestureDrag super_type;
public:
typedef ::GtkGesturePan BaseObjectType;

GesturePanBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_gesture_pan_get_type(); } 

// GtkGesture* gtk_gesture_pan_new (GtkWidget* widget, GtkOrientation orientation);
// ::GtkGesturePan* gtk_gesture_pan_new (::GtkWidget* widget, ::GtkOrientation orientation);
static GI_INLINE_DECL Gtk::GesturePan new_ (Gtk::Widget widget, Gtk::Orientation orientation) noexcept;

// GtkOrientation gtk_gesture_pan_get_orientation (GtkGesturePan* gesture);
// ::GtkOrientation gtk_gesture_pan_get_orientation (::GtkGesturePan* gesture);
GI_INLINE_DECL Gtk::Orientation get_orientation () noexcept;

// void gtk_gesture_pan_set_orientation (GtkGesturePan* gesture, GtkOrientation orientation);
// void gtk_gesture_pan_set_orientation (::GtkGesturePan* gesture, ::GtkOrientation orientation);
GI_INLINE_DECL void set_orientation (Gtk::Orientation orientation) noexcept;

gi::property_proxy<Gtk::Orientation, base::GesturePanBase> property_orientation()
{ return gi::property_proxy<Gtk::Orientation, base::GesturePanBase> (*this, "orientation"); }
const gi::property_proxy<Gtk::Orientation, base::GesturePanBase> property_orientation() const
{ return gi::property_proxy<Gtk::Orientation, base::GesturePanBase> (*this, "orientation"); }

// signal pan
gi::signal_proxy<void(Gtk::GesturePan, Gtk::PanDirection direction, gdouble offset)> signal_pan()
{ return gi::signal_proxy<void(Gtk::GesturePan, Gtk::PanDirection direction, gdouble offset)> (*this, "pan"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/gesturepan_extra_def.hpp>)
#include <gtk/gesturepan_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/gesturepan_extra.hpp>)
#include <gtk/gesturepan_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class GesturePan : public GI_GTK_GESTUREPAN_BASE
{ typedef GI_GTK_GESTUREPAN_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkGesturePan>
{ typedef Gtk::GesturePan type; }; 

} // namespace repository

} // namespace gi

#endif
