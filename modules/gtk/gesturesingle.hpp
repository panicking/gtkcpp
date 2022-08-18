// AUTO-GENERATED

#ifndef _GI_GTK_GESTURESINGLE_HPP_
#define _GI_GTK_GESTURESINGLE_HPP_

#include "gesture.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class GestureSingle;

namespace base {


#define GI_GTK_GESTURESINGLE_BASE base::GestureSingleBase
class GestureSingleBase : public Gtk::Gesture
{
typedef Gtk::Gesture super_type;
public:
typedef ::GtkGestureSingle BaseObjectType;

GestureSingleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_gesture_single_get_type(); } 

// guint gtk_gesture_single_get_button (GtkGestureSingle* gesture);
// guint gtk_gesture_single_get_button (::GtkGestureSingle* gesture);
GI_INLINE_DECL guint get_button () noexcept;

// guint gtk_gesture_single_get_current_button (GtkGestureSingle* gesture);
// guint gtk_gesture_single_get_current_button (::GtkGestureSingle* gesture);
GI_INLINE_DECL guint get_current_button () noexcept;

// GdkEventSequence* gtk_gesture_single_get_current_sequence (GtkGestureSingle* gesture);
// ::GdkEventSequence* gtk_gesture_single_get_current_sequence (::GtkGestureSingle* gesture);
GI_INLINE_DECL Gdk::EventSequence get_current_sequence () noexcept;

// gboolean gtk_gesture_single_get_exclusive (GtkGestureSingle* gesture);
// gboolean gtk_gesture_single_get_exclusive (::GtkGestureSingle* gesture);
GI_INLINE_DECL bool get_exclusive () noexcept;

// gboolean gtk_gesture_single_get_touch_only (GtkGestureSingle* gesture);
// gboolean gtk_gesture_single_get_touch_only (::GtkGestureSingle* gesture);
GI_INLINE_DECL bool get_touch_only () noexcept;

// void gtk_gesture_single_set_button (GtkGestureSingle* gesture, guint button);
// void gtk_gesture_single_set_button (::GtkGestureSingle* gesture, guint button);
GI_INLINE_DECL void set_button (guint button) noexcept;

// void gtk_gesture_single_set_exclusive (GtkGestureSingle* gesture, gboolean exclusive);
// void gtk_gesture_single_set_exclusive (::GtkGestureSingle* gesture, gboolean exclusive);
GI_INLINE_DECL void set_exclusive (gboolean exclusive) noexcept;

// void gtk_gesture_single_set_touch_only (GtkGestureSingle* gesture, gboolean touch_only);
// void gtk_gesture_single_set_touch_only (::GtkGestureSingle* gesture, gboolean touch_only);
GI_INLINE_DECL void set_touch_only (gboolean touch_only) noexcept;

gi::property_proxy<guint, base::GestureSingleBase> property_button()
{ return gi::property_proxy<guint, base::GestureSingleBase> (*this, "button"); }
const gi::property_proxy<guint, base::GestureSingleBase> property_button() const
{ return gi::property_proxy<guint, base::GestureSingleBase> (*this, "button"); }

gi::property_proxy<bool, base::GestureSingleBase> property_exclusive()
{ return gi::property_proxy<bool, base::GestureSingleBase> (*this, "exclusive"); }
const gi::property_proxy<bool, base::GestureSingleBase> property_exclusive() const
{ return gi::property_proxy<bool, base::GestureSingleBase> (*this, "exclusive"); }

gi::property_proxy<bool, base::GestureSingleBase> property_touch_only()
{ return gi::property_proxy<bool, base::GestureSingleBase> (*this, "touch-only"); }
const gi::property_proxy<bool, base::GestureSingleBase> property_touch_only() const
{ return gi::property_proxy<bool, base::GestureSingleBase> (*this, "touch-only"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/gesturesingle_extra_def.hpp>)
#include <gtk/gesturesingle_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/gesturesingle_extra.hpp>)
#include <gtk/gesturesingle_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class GestureSingle : public GI_GTK_GESTURESINGLE_BASE
{ typedef GI_GTK_GESTURESINGLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkGestureSingle>
{ typedef Gtk::GestureSingle type; }; 

} // namespace repository

} // namespace gi

#endif
