// AUTO-GENERATED

#ifndef _GI_GTK_GESTURE_HPP_
#define _GI_GTK_GESTURE_HPP_

#include "eventcontroller.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class Gesture;

namespace base {


#define GI_GTK_GESTURE_BASE base::GestureBase
class GestureBase : public Gtk::EventController
{
typedef Gtk::EventController super_type;
public:
typedef ::GtkGesture BaseObjectType;

GestureBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_gesture_get_type(); } 

// gboolean gtk_gesture_get_bounding_box (GtkGesture* gesture, GdkRectangle* rect);
// gboolean gtk_gesture_get_bounding_box (::GtkGesture* gesture, ::GdkRectangle* rect);
GI_INLINE_DECL bool get_bounding_box (Gdk::Rectangle & rect) noexcept;
GI_INLINE_DECL std::tuple<bool, Gdk::Rectangle> get_bounding_box () noexcept;

// gboolean gtk_gesture_get_bounding_box_center (GtkGesture* gesture, gdouble* x, gdouble* y);
// gboolean gtk_gesture_get_bounding_box_center (::GtkGesture* gesture, gdouble* x, gdouble* y);
GI_INLINE_DECL bool get_bounding_box_center (gdouble & x, gdouble & y) noexcept;
GI_INLINE_DECL std::tuple<bool, gdouble, gdouble> get_bounding_box_center () noexcept;

// GdkDevice* gtk_gesture_get_device (GtkGesture* gesture);
// ::GdkDevice* gtk_gesture_get_device (::GtkGesture* gesture);
GI_INLINE_DECL Gdk::Device get_device () noexcept;

// GList* gtk_gesture_get_group (GtkGesture* gesture);
// ::GList* gtk_gesture_get_group (::GtkGesture* gesture);
GI_INLINE_DECL std::vector<Gtk::Gesture> get_group () noexcept;

// const GdkEvent* gtk_gesture_get_last_event (GtkGesture* gesture, GdkEventSequence* sequence);
// const  gtk_gesture_get_last_event (::GtkGesture* gesture, ::GdkEventSequence* sequence);
// SKIP;  type  not supported

// GdkEventSequence* gtk_gesture_get_last_updated_sequence (GtkGesture* gesture);
// ::GdkEventSequence* gtk_gesture_get_last_updated_sequence (::GtkGesture* gesture);
GI_INLINE_DECL Gdk::EventSequence get_last_updated_sequence () noexcept;

// gboolean gtk_gesture_get_point (GtkGesture* gesture, GdkEventSequence* sequence, gdouble* x, gdouble* y);
// gboolean gtk_gesture_get_point (::GtkGesture* gesture, ::GdkEventSequence* sequence, gdouble* x, gdouble* y);
GI_INLINE_DECL bool get_point (Gdk::EventSequence sequence, gdouble * x = nullptr, gdouble * y = nullptr) noexcept;
GI_INLINE_DECL bool get_point (gdouble * x = nullptr, gdouble * y = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, gdouble, gdouble> get_point (Gdk::EventSequence sequence) noexcept;
GI_INLINE_DECL std::tuple<bool, gdouble, gdouble> get_point () noexcept;

// GtkEventSequenceState gtk_gesture_get_sequence_state (GtkGesture* gesture, GdkEventSequence* sequence);
// ::GtkEventSequenceState gtk_gesture_get_sequence_state (::GtkGesture* gesture, ::GdkEventSequence* sequence);
GI_INLINE_DECL Gtk::EventSequenceState get_sequence_state (Gdk::EventSequence sequence) noexcept;

// GList* gtk_gesture_get_sequences (GtkGesture* gesture);
// ::GList* gtk_gesture_get_sequences (::GtkGesture* gesture);
GI_INLINE_DECL std::vector<Gdk::EventSequence> get_sequences () noexcept;

// GdkWindow* gtk_gesture_get_window (GtkGesture* gesture);
// ::GdkWindow* gtk_gesture_get_window (::GtkGesture* gesture);
GI_INLINE_DECL Gdk::Window get_window () noexcept;

// void gtk_gesture_group (GtkGesture* group_gesture, GtkGesture* gesture);
// void gtk_gesture_group (::GtkGesture* group_gesture, ::GtkGesture* gesture);
GI_INLINE_DECL void group (Gtk::Gesture gesture) noexcept;

// gboolean gtk_gesture_handles_sequence (GtkGesture* gesture, GdkEventSequence* sequence);
// gboolean gtk_gesture_handles_sequence (::GtkGesture* gesture, ::GdkEventSequence* sequence);
GI_INLINE_DECL bool handles_sequence (Gdk::EventSequence sequence) noexcept;
GI_INLINE_DECL bool handles_sequence () noexcept;

// gboolean gtk_gesture_is_active (GtkGesture* gesture);
// gboolean gtk_gesture_is_active (::GtkGesture* gesture);
GI_INLINE_DECL bool is_active () noexcept;

// gboolean gtk_gesture_is_grouped_with (GtkGesture* gesture, GtkGesture* other);
// gboolean gtk_gesture_is_grouped_with (::GtkGesture* gesture, ::GtkGesture* other);
GI_INLINE_DECL bool is_grouped_with (Gtk::Gesture other) noexcept;

// gboolean gtk_gesture_is_recognized (GtkGesture* gesture);
// gboolean gtk_gesture_is_recognized (::GtkGesture* gesture);
GI_INLINE_DECL bool is_recognized () noexcept;

// gboolean gtk_gesture_set_sequence_state (GtkGesture* gesture, GdkEventSequence* sequence, GtkEventSequenceState state);
// gboolean gtk_gesture_set_sequence_state (::GtkGesture* gesture, ::GdkEventSequence* sequence, ::GtkEventSequenceState state);
GI_INLINE_DECL bool set_sequence_state (Gdk::EventSequence sequence, Gtk::EventSequenceState state) noexcept;

// gboolean gtk_gesture_set_state (GtkGesture* gesture, GtkEventSequenceState state);
// gboolean gtk_gesture_set_state (::GtkGesture* gesture, ::GtkEventSequenceState state);
GI_INLINE_DECL bool set_state (Gtk::EventSequenceState state) noexcept;

// void gtk_gesture_set_window (GtkGesture* gesture, GdkWindow* window);
// void gtk_gesture_set_window (::GtkGesture* gesture, ::GdkWindow* window);
GI_INLINE_DECL void set_window (Gdk::Window window) noexcept;
GI_INLINE_DECL void set_window () noexcept;

// void gtk_gesture_ungroup (GtkGesture* gesture);
// void gtk_gesture_ungroup (::GtkGesture* gesture);
GI_INLINE_DECL void ungroup () noexcept;

gi::property_proxy<guint, base::GestureBase> property_n_points()
{ return gi::property_proxy<guint, base::GestureBase> (*this, "n-points"); }
const gi::property_proxy<guint, base::GestureBase> property_n_points() const
{ return gi::property_proxy<guint, base::GestureBase> (*this, "n-points"); }

gi::property_proxy<Gdk::Window, base::GestureBase> property_window()
{ return gi::property_proxy<Gdk::Window, base::GestureBase> (*this, "window"); }
const gi::property_proxy<Gdk::Window, base::GestureBase> property_window() const
{ return gi::property_proxy<Gdk::Window, base::GestureBase> (*this, "window"); }

// signal begin
gi::signal_proxy<void(Gtk::Gesture, Gdk::EventSequence sequence)> signal_begin()
{ return gi::signal_proxy<void(Gtk::Gesture, Gdk::EventSequence sequence)> (*this, "begin"); }

// signal cancel
gi::signal_proxy<void(Gtk::Gesture, Gdk::EventSequence sequence)> signal_cancel()
{ return gi::signal_proxy<void(Gtk::Gesture, Gdk::EventSequence sequence)> (*this, "cancel"); }

// signal end
gi::signal_proxy<void(Gtk::Gesture, Gdk::EventSequence sequence)> signal_end()
{ return gi::signal_proxy<void(Gtk::Gesture, Gdk::EventSequence sequence)> (*this, "end"); }

// signal sequence-state-changed
gi::signal_proxy<void(Gtk::Gesture, Gdk::EventSequence sequence, Gtk::EventSequenceState state)> signal_sequence_state_changed()
{ return gi::signal_proxy<void(Gtk::Gesture, Gdk::EventSequence sequence, Gtk::EventSequenceState state)> (*this, "sequence-state-changed"); }

// signal update
gi::signal_proxy<void(Gtk::Gesture, Gdk::EventSequence sequence)> signal_update()
{ return gi::signal_proxy<void(Gtk::Gesture, Gdk::EventSequence sequence)> (*this, "update"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/gesture_extra_def.hpp>)
#include <gtk/gesture_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/gesture_extra.hpp>)
#include <gtk/gesture_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Gesture : public GI_GTK_GESTURE_BASE
{ typedef GI_GTK_GESTURE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkGesture>
{ typedef Gtk::Gesture type; }; 

} // namespace repository

} // namespace gi

#endif
