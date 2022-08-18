// AUTO-GENERATED

#ifndef _GI_GDK_EVENTTOUCH_HPP_
#define _GI_GDK_EVENTTOUCH_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class Device;
class EventSequence;
class Window;

class EventTouch;

namespace base {


#define GI_GDK_EVENTTOUCH_BASE base::EventTouchBase
class EventTouchBase : public gi::detail::CBoxedWrapper<EventTouchBase, ::GdkEventTouch>
{
typedef gi::detail::CBoxedWrapper<EventTouchBase, ::GdkEventTouch> super_type;
public:

EventTouchBase (std::nullptr_t = nullptr) : super_type() {}

// ::GdkEventType EventTouch::type (const ::GdkEventTouch* obj);
// ::GdkEventType EventTouch::type (const ::GdkEventTouch* obj);
GI_INLINE_DECL Gdk::EventType type_ () const noexcept;

//  EventTouch::type (::GdkEventTouch* obj, ::GdkEventType _value);
// void EventTouch::type (::GdkEventTouch* obj, ::GdkEventType _value);
GI_INLINE_DECL void type_ (Gdk::EventType _value) noexcept;

// ::GdkWindow* EventTouch::window (const ::GdkEventTouch* obj);
// ::GdkWindow* EventTouch::window (const ::GdkEventTouch* obj);
GI_INLINE_DECL Gdk::Window window_ () const noexcept;

// gint8 EventTouch::send_event (const ::GdkEventTouch* obj);
// gint8 EventTouch::send_event (const ::GdkEventTouch* obj);
GI_INLINE_DECL gint8 send_event_ () const noexcept;

//  EventTouch::send_event (::GdkEventTouch* obj, gint8 _value);
// void EventTouch::send_event (::GdkEventTouch* obj, gint8 _value);
GI_INLINE_DECL void send_event_ (gint8 _value) noexcept;

// guint32 EventTouch::time (const ::GdkEventTouch* obj);
// guint32 EventTouch::time (const ::GdkEventTouch* obj);
GI_INLINE_DECL guint32 time_ () const noexcept;

//  EventTouch::time (::GdkEventTouch* obj, guint32 _value);
// void EventTouch::time (::GdkEventTouch* obj, guint32 _value);
GI_INLINE_DECL void time_ (guint32 _value) noexcept;

// gdouble EventTouch::x (const ::GdkEventTouch* obj);
// gdouble EventTouch::x (const ::GdkEventTouch* obj);
GI_INLINE_DECL gdouble x_ () const noexcept;

//  EventTouch::x (::GdkEventTouch* obj, gdouble _value);
// void EventTouch::x (::GdkEventTouch* obj, gdouble _value);
GI_INLINE_DECL void x_ (gdouble _value) noexcept;

// gdouble EventTouch::y (const ::GdkEventTouch* obj);
// gdouble EventTouch::y (const ::GdkEventTouch* obj);
GI_INLINE_DECL gdouble y_ () const noexcept;

//  EventTouch::y (::GdkEventTouch* obj, gdouble _value);
// void EventTouch::y (::GdkEventTouch* obj, gdouble _value);
GI_INLINE_DECL void y_ (gdouble _value) noexcept;

// ::GdkModifierType EventTouch::state (const ::GdkEventTouch* obj);
// ::GdkModifierType EventTouch::state (const ::GdkEventTouch* obj);
GI_INLINE_DECL Gdk::ModifierType state_ () const noexcept;

//  EventTouch::state (::GdkEventTouch* obj, ::GdkModifierType _value);
// void EventTouch::state (::GdkEventTouch* obj, ::GdkModifierType _value);
GI_INLINE_DECL void state_ (Gdk::ModifierType _value) noexcept;

// ::GdkEventSequence* EventTouch::sequence (const ::GdkEventTouch* obj);
// ::GdkEventSequence* EventTouch::sequence (const ::GdkEventTouch* obj);
GI_INLINE_DECL Gdk::EventSequence sequence_ () const noexcept;

// gboolean EventTouch::emulating_pointer (const ::GdkEventTouch* obj);
// gboolean EventTouch::emulating_pointer (const ::GdkEventTouch* obj);
GI_INLINE_DECL bool emulating_pointer_ () const noexcept;

//  EventTouch::emulating_pointer (::GdkEventTouch* obj, gboolean _value);
// void EventTouch::emulating_pointer (::GdkEventTouch* obj, gboolean _value);
GI_INLINE_DECL void emulating_pointer_ (gboolean _value) noexcept;

// ::GdkDevice* EventTouch::device (const ::GdkEventTouch* obj);
// ::GdkDevice* EventTouch::device (const ::GdkEventTouch* obj);
GI_INLINE_DECL Gdk::Device device_ () const noexcept;

// gdouble EventTouch::x_root (const ::GdkEventTouch* obj);
// gdouble EventTouch::x_root (const ::GdkEventTouch* obj);
GI_INLINE_DECL gdouble x_root_ () const noexcept;

//  EventTouch::x_root (::GdkEventTouch* obj, gdouble _value);
// void EventTouch::x_root (::GdkEventTouch* obj, gdouble _value);
GI_INLINE_DECL void x_root_ (gdouble _value) noexcept;

// gdouble EventTouch::y_root (const ::GdkEventTouch* obj);
// gdouble EventTouch::y_root (const ::GdkEventTouch* obj);
GI_INLINE_DECL gdouble y_root_ () const noexcept;

//  EventTouch::y_root (::GdkEventTouch* obj, gdouble _value);
// void EventTouch::y_root (::GdkEventTouch* obj, gdouble _value);
GI_INLINE_DECL void y_root_ (gdouble _value) noexcept;

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/eventtouch_extra_def.hpp>)
#include <gdk/eventtouch_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/eventtouch_extra.hpp>)
#include <gdk/eventtouch_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class EventTouch : public GI_GDK_EVENTTOUCH_BASE
{ typedef GI_GDK_EVENTTOUCH_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkEventTouch>
{ typedef Gdk::EventTouch type; }; 

} // namespace repository

} // namespace gi

#endif
