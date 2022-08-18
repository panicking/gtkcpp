// AUTO-GENERATED

#ifndef _GI_GDK_EVENTTOUCHPADSWIPE_HPP_
#define _GI_GDK_EVENTTOUCHPADSWIPE_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class Window;

class EventTouchpadSwipe;

namespace base {


#define GI_GDK_EVENTTOUCHPADSWIPE_BASE base::EventTouchpadSwipeBase
class EventTouchpadSwipeBase : public gi::detail::CBoxedWrapper<EventTouchpadSwipeBase, ::GdkEventTouchpadSwipe>
{
typedef gi::detail::CBoxedWrapper<EventTouchpadSwipeBase, ::GdkEventTouchpadSwipe> super_type;
public:

EventTouchpadSwipeBase (std::nullptr_t = nullptr) : super_type() {}

// ::GdkEventType EventTouchpadSwipe::type (const ::GdkEventTouchpadSwipe* obj);
// ::GdkEventType EventTouchpadSwipe::type (const ::GdkEventTouchpadSwipe* obj);
GI_INLINE_DECL Gdk::EventType type_ () const noexcept;

//  EventTouchpadSwipe::type (::GdkEventTouchpadSwipe* obj, ::GdkEventType _value);
// void EventTouchpadSwipe::type (::GdkEventTouchpadSwipe* obj, ::GdkEventType _value);
GI_INLINE_DECL void type_ (Gdk::EventType _value) noexcept;

// ::GdkWindow* EventTouchpadSwipe::window (const ::GdkEventTouchpadSwipe* obj);
// ::GdkWindow* EventTouchpadSwipe::window (const ::GdkEventTouchpadSwipe* obj);
GI_INLINE_DECL Gdk::Window window_ () const noexcept;

// gint8 EventTouchpadSwipe::send_event (const ::GdkEventTouchpadSwipe* obj);
// gint8 EventTouchpadSwipe::send_event (const ::GdkEventTouchpadSwipe* obj);
GI_INLINE_DECL gint8 send_event_ () const noexcept;

//  EventTouchpadSwipe::send_event (::GdkEventTouchpadSwipe* obj, gint8 _value);
// void EventTouchpadSwipe::send_event (::GdkEventTouchpadSwipe* obj, gint8 _value);
GI_INLINE_DECL void send_event_ (gint8 _value) noexcept;

// gint8 EventTouchpadSwipe::phase (const ::GdkEventTouchpadSwipe* obj);
// gint8 EventTouchpadSwipe::phase (const ::GdkEventTouchpadSwipe* obj);
GI_INLINE_DECL gint8 phase_ () const noexcept;

//  EventTouchpadSwipe::phase (::GdkEventTouchpadSwipe* obj, gint8 _value);
// void EventTouchpadSwipe::phase (::GdkEventTouchpadSwipe* obj, gint8 _value);
GI_INLINE_DECL void phase_ (gint8 _value) noexcept;

// gint8 EventTouchpadSwipe::n_fingers (const ::GdkEventTouchpadSwipe* obj);
// gint8 EventTouchpadSwipe::n_fingers (const ::GdkEventTouchpadSwipe* obj);
GI_INLINE_DECL gint8 n_fingers_ () const noexcept;

//  EventTouchpadSwipe::n_fingers (::GdkEventTouchpadSwipe* obj, gint8 _value);
// void EventTouchpadSwipe::n_fingers (::GdkEventTouchpadSwipe* obj, gint8 _value);
GI_INLINE_DECL void n_fingers_ (gint8 _value) noexcept;

// guint32 EventTouchpadSwipe::time (const ::GdkEventTouchpadSwipe* obj);
// guint32 EventTouchpadSwipe::time (const ::GdkEventTouchpadSwipe* obj);
GI_INLINE_DECL guint32 time_ () const noexcept;

//  EventTouchpadSwipe::time (::GdkEventTouchpadSwipe* obj, guint32 _value);
// void EventTouchpadSwipe::time (::GdkEventTouchpadSwipe* obj, guint32 _value);
GI_INLINE_DECL void time_ (guint32 _value) noexcept;

// gdouble EventTouchpadSwipe::x (const ::GdkEventTouchpadSwipe* obj);
// gdouble EventTouchpadSwipe::x (const ::GdkEventTouchpadSwipe* obj);
GI_INLINE_DECL gdouble x_ () const noexcept;

//  EventTouchpadSwipe::x (::GdkEventTouchpadSwipe* obj, gdouble _value);
// void EventTouchpadSwipe::x (::GdkEventTouchpadSwipe* obj, gdouble _value);
GI_INLINE_DECL void x_ (gdouble _value) noexcept;

// gdouble EventTouchpadSwipe::y (const ::GdkEventTouchpadSwipe* obj);
// gdouble EventTouchpadSwipe::y (const ::GdkEventTouchpadSwipe* obj);
GI_INLINE_DECL gdouble y_ () const noexcept;

//  EventTouchpadSwipe::y (::GdkEventTouchpadSwipe* obj, gdouble _value);
// void EventTouchpadSwipe::y (::GdkEventTouchpadSwipe* obj, gdouble _value);
GI_INLINE_DECL void y_ (gdouble _value) noexcept;

// gdouble EventTouchpadSwipe::dx (const ::GdkEventTouchpadSwipe* obj);
// gdouble EventTouchpadSwipe::dx (const ::GdkEventTouchpadSwipe* obj);
GI_INLINE_DECL gdouble dx_ () const noexcept;

//  EventTouchpadSwipe::dx (::GdkEventTouchpadSwipe* obj, gdouble _value);
// void EventTouchpadSwipe::dx (::GdkEventTouchpadSwipe* obj, gdouble _value);
GI_INLINE_DECL void dx_ (gdouble _value) noexcept;

// gdouble EventTouchpadSwipe::dy (const ::GdkEventTouchpadSwipe* obj);
// gdouble EventTouchpadSwipe::dy (const ::GdkEventTouchpadSwipe* obj);
GI_INLINE_DECL gdouble dy_ () const noexcept;

//  EventTouchpadSwipe::dy (::GdkEventTouchpadSwipe* obj, gdouble _value);
// void EventTouchpadSwipe::dy (::GdkEventTouchpadSwipe* obj, gdouble _value);
GI_INLINE_DECL void dy_ (gdouble _value) noexcept;

// gdouble EventTouchpadSwipe::x_root (const ::GdkEventTouchpadSwipe* obj);
// gdouble EventTouchpadSwipe::x_root (const ::GdkEventTouchpadSwipe* obj);
GI_INLINE_DECL gdouble x_root_ () const noexcept;

//  EventTouchpadSwipe::x_root (::GdkEventTouchpadSwipe* obj, gdouble _value);
// void EventTouchpadSwipe::x_root (::GdkEventTouchpadSwipe* obj, gdouble _value);
GI_INLINE_DECL void x_root_ (gdouble _value) noexcept;

// gdouble EventTouchpadSwipe::y_root (const ::GdkEventTouchpadSwipe* obj);
// gdouble EventTouchpadSwipe::y_root (const ::GdkEventTouchpadSwipe* obj);
GI_INLINE_DECL gdouble y_root_ () const noexcept;

//  EventTouchpadSwipe::y_root (::GdkEventTouchpadSwipe* obj, gdouble _value);
// void EventTouchpadSwipe::y_root (::GdkEventTouchpadSwipe* obj, gdouble _value);
GI_INLINE_DECL void y_root_ (gdouble _value) noexcept;

// ::GdkModifierType EventTouchpadSwipe::state (const ::GdkEventTouchpadSwipe* obj);
// ::GdkModifierType EventTouchpadSwipe::state (const ::GdkEventTouchpadSwipe* obj);
GI_INLINE_DECL Gdk::ModifierType state_ () const noexcept;

//  EventTouchpadSwipe::state (::GdkEventTouchpadSwipe* obj, ::GdkModifierType _value);
// void EventTouchpadSwipe::state (::GdkEventTouchpadSwipe* obj, ::GdkModifierType _value);
GI_INLINE_DECL void state_ (Gdk::ModifierType _value) noexcept;

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/eventtouchpadswipe_extra_def.hpp>)
#include <gdk/eventtouchpadswipe_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/eventtouchpadswipe_extra.hpp>)
#include <gdk/eventtouchpadswipe_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class EventTouchpadSwipe : public GI_GDK_EVENTTOUCHPADSWIPE_BASE
{ typedef GI_GDK_EVENTTOUCHPADSWIPE_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkEventTouchpadSwipe>
{ typedef Gdk::EventTouchpadSwipe type; }; 

} // namespace repository

} // namespace gi

#endif
