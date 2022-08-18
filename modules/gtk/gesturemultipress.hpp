// AUTO-GENERATED

#ifndef _GI_GTK_GESTUREMULTIPRESS_HPP_
#define _GI_GTK_GESTUREMULTIPRESS_HPP_

#include "gesturesingle.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class GestureMultiPress;

namespace base {


#define GI_GTK_GESTUREMULTIPRESS_BASE base::GestureMultiPressBase
class GestureMultiPressBase : public Gtk::GestureSingle
{
typedef Gtk::GestureSingle super_type;
public:
typedef ::GtkGestureMultiPress BaseObjectType;

GestureMultiPressBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_gesture_multi_press_get_type(); } 

// GtkGesture* gtk_gesture_multi_press_new (GtkWidget* widget);
// ::GtkGestureMultiPress* gtk_gesture_multi_press_new (::GtkWidget* widget);
static GI_INLINE_DECL Gtk::GestureMultiPress new_ (Gtk::Widget widget) noexcept;

// gboolean gtk_gesture_multi_press_get_area (GtkGestureMultiPress* gesture, GdkRectangle* rect);
// gboolean gtk_gesture_multi_press_get_area (::GtkGestureMultiPress* gesture, ::GdkRectangle* rect);
GI_INLINE_DECL bool get_area (Gdk::Rectangle & rect) noexcept;
GI_INLINE_DECL std::tuple<bool, Gdk::Rectangle> get_area () noexcept;

// void gtk_gesture_multi_press_set_area (GtkGestureMultiPress* gesture, const GdkRectangle* rect);
// void gtk_gesture_multi_press_set_area (::GtkGestureMultiPress* gesture, const ::GdkRectangle* rect);
GI_INLINE_DECL void set_area (const Gdk::Rectangle & rect) noexcept;
GI_INLINE_DECL void set_area () noexcept;

// signal pressed
gi::signal_proxy<void(Gtk::GestureMultiPress, gint n_press, gdouble x, gdouble y)> signal_pressed()
{ return gi::signal_proxy<void(Gtk::GestureMultiPress, gint n_press, gdouble x, gdouble y)> (*this, "pressed"); }

// signal released
gi::signal_proxy<void(Gtk::GestureMultiPress, gint n_press, gdouble x, gdouble y)> signal_released()
{ return gi::signal_proxy<void(Gtk::GestureMultiPress, gint n_press, gdouble x, gdouble y)> (*this, "released"); }

// signal stopped
gi::signal_proxy<void(Gtk::GestureMultiPress)> signal_stopped()
{ return gi::signal_proxy<void(Gtk::GestureMultiPress)> (*this, "stopped"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/gesturemultipress_extra_def.hpp>)
#include <gtk/gesturemultipress_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/gesturemultipress_extra.hpp>)
#include <gtk/gesturemultipress_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class GestureMultiPress : public GI_GTK_GESTUREMULTIPRESS_BASE
{ typedef GI_GTK_GESTUREMULTIPRESS_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkGestureMultiPress>
{ typedef Gtk::GestureMultiPress type; }; 

} // namespace repository

} // namespace gi

#endif
