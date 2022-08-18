// AUTO-GENERATED

#ifndef _GI_GDK_EVENTCROSSING_HPP_
#define _GI_GDK_EVENTCROSSING_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class Window;

class EventCrossing;

namespace base {


#define GI_GDK_EVENTCROSSING_BASE base::EventCrossingBase
class EventCrossingBase : public gi::detail::CBoxedWrapper<EventCrossingBase, ::GdkEventCrossing>
{
typedef gi::detail::CBoxedWrapper<EventCrossingBase, ::GdkEventCrossing> super_type;
public:

EventCrossingBase (std::nullptr_t = nullptr) : super_type() {}

// ::GdkEventType EventCrossing::type (const ::GdkEventCrossing* obj);
// ::GdkEventType EventCrossing::type (const ::GdkEventCrossing* obj);
GI_INLINE_DECL Gdk::EventType type_ () const noexcept;

//  EventCrossing::type (::GdkEventCrossing* obj, ::GdkEventType _value);
// void EventCrossing::type (::GdkEventCrossing* obj, ::GdkEventType _value);
GI_INLINE_DECL void type_ (Gdk::EventType _value) noexcept;

// ::GdkWindow* EventCrossing::window (const ::GdkEventCrossing* obj);
// ::GdkWindow* EventCrossing::window (const ::GdkEventCrossing* obj);
GI_INLINE_DECL Gdk::Window window_ () const noexcept;

// gint8 EventCrossing::send_event (const ::GdkEventCrossing* obj);
// gint8 EventCrossing::send_event (const ::GdkEventCrossing* obj);
GI_INLINE_DECL gint8 send_event_ () const noexcept;

//  EventCrossing::send_event (::GdkEventCrossing* obj, gint8 _value);
// void EventCrossing::send_event (::GdkEventCrossing* obj, gint8 _value);
GI_INLINE_DECL void send_event_ (gint8 _value) noexcept;

// ::GdkWindow* EventCrossing::subwindow (const ::GdkEventCrossing* obj);
// ::GdkWindow* EventCrossing::subwindow (const ::GdkEventCrossing* obj);
GI_INLINE_DECL Gdk::Window subwindow_ () const noexcept;

// guint32 EventCrossing::time (const ::GdkEventCrossing* obj);
// guint32 EventCrossing::time (const ::GdkEventCrossing* obj);
GI_INLINE_DECL guint32 time_ () const noexcept;

//  EventCrossing::time (::GdkEventCrossing* obj, guint32 _value);
// void EventCrossing::time (::GdkEventCrossing* obj, guint32 _value);
GI_INLINE_DECL void time_ (guint32 _value) noexcept;

// gdouble EventCrossing::x (const ::GdkEventCrossing* obj);
// gdouble EventCrossing::x (const ::GdkEventCrossing* obj);
GI_INLINE_DECL gdouble x_ () const noexcept;

//  EventCrossing::x (::GdkEventCrossing* obj, gdouble _value);
// void EventCrossing::x (::GdkEventCrossing* obj, gdouble _value);
GI_INLINE_DECL void x_ (gdouble _value) noexcept;

// gdouble EventCrossing::y (const ::GdkEventCrossing* obj);
// gdouble EventCrossing::y (const ::GdkEventCrossing* obj);
GI_INLINE_DECL gdouble y_ () const noexcept;

//  EventCrossing::y (::GdkEventCrossing* obj, gdouble _value);
// void EventCrossing::y (::GdkEventCrossing* obj, gdouble _value);
GI_INLINE_DECL void y_ (gdouble _value) noexcept;

// gdouble EventCrossing::x_root (const ::GdkEventCrossing* obj);
// gdouble EventCrossing::x_root (const ::GdkEventCrossing* obj);
GI_INLINE_DECL gdouble x_root_ () const noexcept;

//  EventCrossing::x_root (::GdkEventCrossing* obj, gdouble _value);
// void EventCrossing::x_root (::GdkEventCrossing* obj, gdouble _value);
GI_INLINE_DECL void x_root_ (gdouble _value) noexcept;

// gdouble EventCrossing::y_root (const ::GdkEventCrossing* obj);
// gdouble EventCrossing::y_root (const ::GdkEventCrossing* obj);
GI_INLINE_DECL gdouble y_root_ () const noexcept;

//  EventCrossing::y_root (::GdkEventCrossing* obj, gdouble _value);
// void EventCrossing::y_root (::GdkEventCrossing* obj, gdouble _value);
GI_INLINE_DECL void y_root_ (gdouble _value) noexcept;

// ::GdkCrossingMode EventCrossing::mode (const ::GdkEventCrossing* obj);
// ::GdkCrossingMode EventCrossing::mode (const ::GdkEventCrossing* obj);
GI_INLINE_DECL Gdk::CrossingMode mode_ () const noexcept;

//  EventCrossing::mode (::GdkEventCrossing* obj, ::GdkCrossingMode _value);
// void EventCrossing::mode (::GdkEventCrossing* obj, ::GdkCrossingMode _value);
GI_INLINE_DECL void mode_ (Gdk::CrossingMode _value) noexcept;

// ::GdkNotifyType EventCrossing::detail (const ::GdkEventCrossing* obj);
// ::GdkNotifyType EventCrossing::detail (const ::GdkEventCrossing* obj);
GI_INLINE_DECL Gdk::NotifyType detail_ () const noexcept;

//  EventCrossing::detail (::GdkEventCrossing* obj, ::GdkNotifyType _value);
// void EventCrossing::detail (::GdkEventCrossing* obj, ::GdkNotifyType _value);
GI_INLINE_DECL void detail_ (Gdk::NotifyType _value) noexcept;

// gboolean EventCrossing::focus (const ::GdkEventCrossing* obj);
// gboolean EventCrossing::focus (const ::GdkEventCrossing* obj);
GI_INLINE_DECL bool focus_ () const noexcept;

//  EventCrossing::focus (::GdkEventCrossing* obj, gboolean _value);
// void EventCrossing::focus (::GdkEventCrossing* obj, gboolean _value);
GI_INLINE_DECL void focus_ (gboolean _value) noexcept;

// ::GdkModifierType EventCrossing::state (const ::GdkEventCrossing* obj);
// ::GdkModifierType EventCrossing::state (const ::GdkEventCrossing* obj);
GI_INLINE_DECL Gdk::ModifierType state_ () const noexcept;

//  EventCrossing::state (::GdkEventCrossing* obj, ::GdkModifierType _value);
// void EventCrossing::state (::GdkEventCrossing* obj, ::GdkModifierType _value);
GI_INLINE_DECL void state_ (Gdk::ModifierType _value) noexcept;

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/eventcrossing_extra_def.hpp>)
#include <gdk/eventcrossing_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/eventcrossing_extra.hpp>)
#include <gdk/eventcrossing_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class EventCrossing : public GI_GDK_EVENTCROSSING_BASE
{ typedef GI_GDK_EVENTCROSSING_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkEventCrossing>
{ typedef Gdk::EventCrossing type; }; 

} // namespace repository

} // namespace gi

#endif
