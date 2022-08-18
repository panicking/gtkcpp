// AUTO-GENERATED

#ifndef _GI_GDK_EVENTTOUCHPADPINCH_HPP_
#define _GI_GDK_EVENTTOUCHPADPINCH_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class Window;

class EventTouchpadPinch;

namespace base {


#define GI_GDK_EVENTTOUCHPADPINCH_BASE base::EventTouchpadPinchBase
class EventTouchpadPinchBase : public gi::detail::CBoxedWrapper<EventTouchpadPinchBase, ::GdkEventTouchpadPinch>
{
typedef gi::detail::CBoxedWrapper<EventTouchpadPinchBase, ::GdkEventTouchpadPinch> super_type;
public:

EventTouchpadPinchBase (std::nullptr_t = nullptr) : super_type() {}

// ::GdkEventType EventTouchpadPinch::type (const ::GdkEventTouchpadPinch* obj);
// ::GdkEventType EventTouchpadPinch::type (const ::GdkEventTouchpadPinch* obj);
GI_INLINE_DECL Gdk::EventType type_ () const noexcept;

//  EventTouchpadPinch::type (::GdkEventTouchpadPinch* obj, ::GdkEventType _value);
// void EventTouchpadPinch::type (::GdkEventTouchpadPinch* obj, ::GdkEventType _value);
GI_INLINE_DECL void type_ (Gdk::EventType _value) noexcept;

// ::GdkWindow* EventTouchpadPinch::window (const ::GdkEventTouchpadPinch* obj);
// ::GdkWindow* EventTouchpadPinch::window (const ::GdkEventTouchpadPinch* obj);
GI_INLINE_DECL Gdk::Window window_ () const noexcept;

// gint8 EventTouchpadPinch::send_event (const ::GdkEventTouchpadPinch* obj);
// gint8 EventTouchpadPinch::send_event (const ::GdkEventTouchpadPinch* obj);
GI_INLINE_DECL gint8 send_event_ () const noexcept;

//  EventTouchpadPinch::send_event (::GdkEventTouchpadPinch* obj, gint8 _value);
// void EventTouchpadPinch::send_event (::GdkEventTouchpadPinch* obj, gint8 _value);
GI_INLINE_DECL void send_event_ (gint8 _value) noexcept;

// gint8 EventTouchpadPinch::phase (const ::GdkEventTouchpadPinch* obj);
// gint8 EventTouchpadPinch::phase (const ::GdkEventTouchpadPinch* obj);
GI_INLINE_DECL gint8 phase_ () const noexcept;

//  EventTouchpadPinch::phase (::GdkEventTouchpadPinch* obj, gint8 _value);
// void EventTouchpadPinch::phase (::GdkEventTouchpadPinch* obj, gint8 _value);
GI_INLINE_DECL void phase_ (gint8 _value) noexcept;

// gint8 EventTouchpadPinch::n_fingers (const ::GdkEventTouchpadPinch* obj);
// gint8 EventTouchpadPinch::n_fingers (const ::GdkEventTouchpadPinch* obj);
GI_INLINE_DECL gint8 n_fingers_ () const noexcept;

//  EventTouchpadPinch::n_fingers (::GdkEventTouchpadPinch* obj, gint8 _value);
// void EventTouchpadPinch::n_fingers (::GdkEventTouchpadPinch* obj, gint8 _value);
GI_INLINE_DECL void n_fingers_ (gint8 _value) noexcept;

// guint32 EventTouchpadPinch::time (const ::GdkEventTouchpadPinch* obj);
// guint32 EventTouchpadPinch::time (const ::GdkEventTouchpadPinch* obj);
GI_INLINE_DECL guint32 time_ () const noexcept;

//  EventTouchpadPinch::time (::GdkEventTouchpadPinch* obj, guint32 _value);
// void EventTouchpadPinch::time (::GdkEventTouchpadPinch* obj, guint32 _value);
GI_INLINE_DECL void time_ (guint32 _value) noexcept;

// gdouble EventTouchpadPinch::x (const ::GdkEventTouchpadPinch* obj);
// gdouble EventTouchpadPinch::x (const ::GdkEventTouchpadPinch* obj);
GI_INLINE_DECL gdouble x_ () const noexcept;

//  EventTouchpadPinch::x (::GdkEventTouchpadPinch* obj, gdouble _value);
// void EventTouchpadPinch::x (::GdkEventTouchpadPinch* obj, gdouble _value);
GI_INLINE_DECL void x_ (gdouble _value) noexcept;

// gdouble EventTouchpadPinch::y (const ::GdkEventTouchpadPinch* obj);
// gdouble EventTouchpadPinch::y (const ::GdkEventTouchpadPinch* obj);
GI_INLINE_DECL gdouble y_ () const noexcept;

//  EventTouchpadPinch::y (::GdkEventTouchpadPinch* obj, gdouble _value);
// void EventTouchpadPinch::y (::GdkEventTouchpadPinch* obj, gdouble _value);
GI_INLINE_DECL void y_ (gdouble _value) noexcept;

// gdouble EventTouchpadPinch::dx (const ::GdkEventTouchpadPinch* obj);
// gdouble EventTouchpadPinch::dx (const ::GdkEventTouchpadPinch* obj);
GI_INLINE_DECL gdouble dx_ () const noexcept;

//  EventTouchpadPinch::dx (::GdkEventTouchpadPinch* obj, gdouble _value);
// void EventTouchpadPinch::dx (::GdkEventTouchpadPinch* obj, gdouble _value);
GI_INLINE_DECL void dx_ (gdouble _value) noexcept;

// gdouble EventTouchpadPinch::dy (const ::GdkEventTouchpadPinch* obj);
// gdouble EventTouchpadPinch::dy (const ::GdkEventTouchpadPinch* obj);
GI_INLINE_DECL gdouble dy_ () const noexcept;

//  EventTouchpadPinch::dy (::GdkEventTouchpadPinch* obj, gdouble _value);
// void EventTouchpadPinch::dy (::GdkEventTouchpadPinch* obj, gdouble _value);
GI_INLINE_DECL void dy_ (gdouble _value) noexcept;

// gdouble EventTouchpadPinch::angle_delta (const ::GdkEventTouchpadPinch* obj);
// gdouble EventTouchpadPinch::angle_delta (const ::GdkEventTouchpadPinch* obj);
GI_INLINE_DECL gdouble angle_delta_ () const noexcept;

//  EventTouchpadPinch::angle_delta (::GdkEventTouchpadPinch* obj, gdouble _value);
// void EventTouchpadPinch::angle_delta (::GdkEventTouchpadPinch* obj, gdouble _value);
GI_INLINE_DECL void angle_delta_ (gdouble _value) noexcept;

// gdouble EventTouchpadPinch::scale (const ::GdkEventTouchpadPinch* obj);
// gdouble EventTouchpadPinch::scale (const ::GdkEventTouchpadPinch* obj);
GI_INLINE_DECL gdouble scale_ () const noexcept;

//  EventTouchpadPinch::scale (::GdkEventTouchpadPinch* obj, gdouble _value);
// void EventTouchpadPinch::scale (::GdkEventTouchpadPinch* obj, gdouble _value);
GI_INLINE_DECL void scale_ (gdouble _value) noexcept;

// gdouble EventTouchpadPinch::x_root (const ::GdkEventTouchpadPinch* obj);
// gdouble EventTouchpadPinch::x_root (const ::GdkEventTouchpadPinch* obj);
GI_INLINE_DECL gdouble x_root_ () const noexcept;

//  EventTouchpadPinch::x_root (::GdkEventTouchpadPinch* obj, gdouble _value);
// void EventTouchpadPinch::x_root (::GdkEventTouchpadPinch* obj, gdouble _value);
GI_INLINE_DECL void x_root_ (gdouble _value) noexcept;

// gdouble EventTouchpadPinch::y_root (const ::GdkEventTouchpadPinch* obj);
// gdouble EventTouchpadPinch::y_root (const ::GdkEventTouchpadPinch* obj);
GI_INLINE_DECL gdouble y_root_ () const noexcept;

//  EventTouchpadPinch::y_root (::GdkEventTouchpadPinch* obj, gdouble _value);
// void EventTouchpadPinch::y_root (::GdkEventTouchpadPinch* obj, gdouble _value);
GI_INLINE_DECL void y_root_ (gdouble _value) noexcept;

// ::GdkModifierType EventTouchpadPinch::state (const ::GdkEventTouchpadPinch* obj);
// ::GdkModifierType EventTouchpadPinch::state (const ::GdkEventTouchpadPinch* obj);
GI_INLINE_DECL Gdk::ModifierType state_ () const noexcept;

//  EventTouchpadPinch::state (::GdkEventTouchpadPinch* obj, ::GdkModifierType _value);
// void EventTouchpadPinch::state (::GdkEventTouchpadPinch* obj, ::GdkModifierType _value);
GI_INLINE_DECL void state_ (Gdk::ModifierType _value) noexcept;

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/eventtouchpadpinch_extra_def.hpp>)
#include <gdk/eventtouchpadpinch_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/eventtouchpadpinch_extra.hpp>)
#include <gdk/eventtouchpadpinch_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class EventTouchpadPinch : public GI_GDK_EVENTTOUCHPADPINCH_BASE
{ typedef GI_GDK_EVENTTOUCHPADPINCH_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkEventTouchpadPinch>
{ typedef Gdk::EventTouchpadPinch type; }; 

} // namespace repository

} // namespace gi

#endif
