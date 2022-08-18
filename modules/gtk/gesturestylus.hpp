// AUTO-GENERATED

#ifndef _GI_GTK_GESTURESTYLUS_HPP_
#define _GI_GTK_GESTURESTYLUS_HPP_

#include "gesturesingle.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class GestureStylus;

namespace base {


#define GI_GTK_GESTURESTYLUS_BASE base::GestureStylusBase
class GestureStylusBase : public Gtk::GestureSingle
{
typedef Gtk::GestureSingle super_type;
public:
typedef ::GtkGestureStylus BaseObjectType;

GestureStylusBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_gesture_stylus_get_type(); } 

// GtkGesture* gtk_gesture_stylus_new (GtkWidget* widget);
// ::GtkGestureStylus* gtk_gesture_stylus_new (::GtkWidget* widget);
static GI_INLINE_DECL Gtk::GestureStylus new_ (Gtk::Widget widget) noexcept;

// gboolean gtk_gesture_stylus_get_axes (GtkGestureStylus* gesture);
// gboolean gtk_gesture_stylus_get_axes (::GtkGestureStylus* gesture);
// SKIP; inconsistent array info, inconsistent array info

// gboolean gtk_gesture_stylus_get_axis (GtkGestureStylus* gesture, GdkAxisUse axis, gdouble* value);
// gboolean gtk_gesture_stylus_get_axis (::GtkGestureStylus* gesture, ::GdkAxisUse axis, gdouble* value);
GI_INLINE_DECL bool get_axis (Gdk::AxisUse axis, gdouble & value) noexcept;
GI_INLINE_DECL std::tuple<bool, gdouble> get_axis (Gdk::AxisUse axis) noexcept;

// GdkDeviceTool* gtk_gesture_stylus_get_device_tool (GtkGestureStylus* gesture);
// ::GdkDeviceTool* gtk_gesture_stylus_get_device_tool (::GtkGestureStylus* gesture);
GI_INLINE_DECL Gdk::DeviceTool get_device_tool () noexcept;

// signal down
gi::signal_proxy<void(Gtk::GestureStylus, gdouble object, gdouble p0)> signal_down()
{ return gi::signal_proxy<void(Gtk::GestureStylus, gdouble object, gdouble p0)> (*this, "down"); }

// signal motion
gi::signal_proxy<void(Gtk::GestureStylus, gdouble object, gdouble p0)> signal_motion()
{ return gi::signal_proxy<void(Gtk::GestureStylus, gdouble object, gdouble p0)> (*this, "motion"); }

// signal proximity
gi::signal_proxy<void(Gtk::GestureStylus, gdouble object, gdouble p0)> signal_proximity()
{ return gi::signal_proxy<void(Gtk::GestureStylus, gdouble object, gdouble p0)> (*this, "proximity"); }

// signal up
gi::signal_proxy<void(Gtk::GestureStylus, gdouble object, gdouble p0)> signal_up()
{ return gi::signal_proxy<void(Gtk::GestureStylus, gdouble object, gdouble p0)> (*this, "up"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/gesturestylus_extra_def.hpp>)
#include <gtk/gesturestylus_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/gesturestylus_extra.hpp>)
#include <gtk/gesturestylus_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class GestureStylus : public GI_GTK_GESTURESTYLUS_BASE
{ typedef GI_GTK_GESTURESTYLUS_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkGestureStylus>
{ typedef Gtk::GestureStylus type; }; 

} // namespace repository

} // namespace gi

#endif
