// AUTO-GENERATED

#ifndef _GI_GTK_GESTURESWIPE_HPP_
#define _GI_GTK_GESTURESWIPE_HPP_

#include "gesturesingle.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class GestureSwipe;

namespace base {


#define GI_GTK_GESTURESWIPE_BASE base::GestureSwipeBase
class GestureSwipeBase : public Gtk::GestureSingle
{
typedef Gtk::GestureSingle super_type;
public:
typedef ::GtkGestureSwipe BaseObjectType;

GestureSwipeBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_gesture_swipe_get_type(); } 

// GtkGesture* gtk_gesture_swipe_new (GtkWidget* widget);
// ::GtkGestureSwipe* gtk_gesture_swipe_new (::GtkWidget* widget);
static GI_INLINE_DECL Gtk::GestureSwipe new_ (Gtk::Widget widget) noexcept;

// gboolean gtk_gesture_swipe_get_velocity (GtkGestureSwipe* gesture, gdouble* velocity_x, gdouble* velocity_y);
// gboolean gtk_gesture_swipe_get_velocity (::GtkGestureSwipe* gesture, gdouble* velocity_x, gdouble* velocity_y);
GI_INLINE_DECL bool get_velocity (gdouble & velocity_x, gdouble & velocity_y) noexcept;
GI_INLINE_DECL std::tuple<bool, gdouble, gdouble> get_velocity () noexcept;

// signal swipe
gi::signal_proxy<void(Gtk::GestureSwipe, gdouble velocity_x, gdouble velocity_y)> signal_swipe()
{ return gi::signal_proxy<void(Gtk::GestureSwipe, gdouble velocity_x, gdouble velocity_y)> (*this, "swipe"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/gestureswipe_extra_def.hpp>)
#include <gtk/gestureswipe_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/gestureswipe_extra.hpp>)
#include <gtk/gestureswipe_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class GestureSwipe : public GI_GTK_GESTURESWIPE_BASE
{ typedef GI_GTK_GESTURESWIPE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkGestureSwipe>
{ typedef Gtk::GestureSwipe type; }; 

} // namespace repository

} // namespace gi

#endif
