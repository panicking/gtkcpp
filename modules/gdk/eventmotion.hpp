// AUTO-GENERATED

#ifndef _GI_GDK_EVENTMOTION_HPP_
#define _GI_GDK_EVENTMOTION_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class Device;
class Window;

class EventMotion;

namespace base {


#define GI_GDK_EVENTMOTION_BASE base::EventMotionBase
class EventMotionBase : public gi::detail::CBoxedWrapper<EventMotionBase, ::GdkEventMotion>
{
typedef gi::detail::CBoxedWrapper<EventMotionBase, ::GdkEventMotion> super_type;
public:

EventMotionBase (std::nullptr_t = nullptr) : super_type() {}

// ::GdkEventType EventMotion::type (const ::GdkEventMotion* obj);
// ::GdkEventType EventMotion::type (const ::GdkEventMotion* obj);
GI_INLINE_DECL Gdk::EventType type_ () const noexcept;

//  EventMotion::type (::GdkEventMotion* obj, ::GdkEventType _value);
// void EventMotion::type (::GdkEventMotion* obj, ::GdkEventType _value);
GI_INLINE_DECL void type_ (Gdk::EventType _value) noexcept;

// ::GdkWindow* EventMotion::window (const ::GdkEventMotion* obj);
// ::GdkWindow* EventMotion::window (const ::GdkEventMotion* obj);
GI_INLINE_DECL Gdk::Window window_ () const noexcept;

// gint8 EventMotion::send_event (const ::GdkEventMotion* obj);
// gint8 EventMotion::send_event (const ::GdkEventMotion* obj);
GI_INLINE_DECL gint8 send_event_ () const noexcept;

//  EventMotion::send_event (::GdkEventMotion* obj, gint8 _value);
// void EventMotion::send_event (::GdkEventMotion* obj, gint8 _value);
GI_INLINE_DECL void send_event_ (gint8 _value) noexcept;

// guint32 EventMotion::time (const ::GdkEventMotion* obj);
// guint32 EventMotion::time (const ::GdkEventMotion* obj);
GI_INLINE_DECL guint32 time_ () const noexcept;

//  EventMotion::time (::GdkEventMotion* obj, guint32 _value);
// void EventMotion::time (::GdkEventMotion* obj, guint32 _value);
GI_INLINE_DECL void time_ (guint32 _value) noexcept;

// gdouble EventMotion::x (const ::GdkEventMotion* obj);
// gdouble EventMotion::x (const ::GdkEventMotion* obj);
GI_INLINE_DECL gdouble x_ () const noexcept;

//  EventMotion::x (::GdkEventMotion* obj, gdouble _value);
// void EventMotion::x (::GdkEventMotion* obj, gdouble _value);
GI_INLINE_DECL void x_ (gdouble _value) noexcept;

// gdouble EventMotion::y (const ::GdkEventMotion* obj);
// gdouble EventMotion::y (const ::GdkEventMotion* obj);
GI_INLINE_DECL gdouble y_ () const noexcept;

//  EventMotion::y (::GdkEventMotion* obj, gdouble _value);
// void EventMotion::y (::GdkEventMotion* obj, gdouble _value);
GI_INLINE_DECL void y_ (gdouble _value) noexcept;

// ::GdkModifierType EventMotion::state (const ::GdkEventMotion* obj);
// ::GdkModifierType EventMotion::state (const ::GdkEventMotion* obj);
GI_INLINE_DECL Gdk::ModifierType state_ () const noexcept;

//  EventMotion::state (::GdkEventMotion* obj, ::GdkModifierType _value);
// void EventMotion::state (::GdkEventMotion* obj, ::GdkModifierType _value);
GI_INLINE_DECL void state_ (Gdk::ModifierType _value) noexcept;

// gint16 EventMotion::is_hint (const ::GdkEventMotion* obj);
// gint16 EventMotion::is_hint (const ::GdkEventMotion* obj);
GI_INLINE_DECL gint16 is_hint_ () const noexcept;

//  EventMotion::is_hint (::GdkEventMotion* obj, gint16 _value);
// void EventMotion::is_hint (::GdkEventMotion* obj, gint16 _value);
GI_INLINE_DECL void is_hint_ (gint16 _value) noexcept;

// ::GdkDevice* EventMotion::device (const ::GdkEventMotion* obj);
// ::GdkDevice* EventMotion::device (const ::GdkEventMotion* obj);
GI_INLINE_DECL Gdk::Device device_ () const noexcept;

// gdouble EventMotion::x_root (const ::GdkEventMotion* obj);
// gdouble EventMotion::x_root (const ::GdkEventMotion* obj);
GI_INLINE_DECL gdouble x_root_ () const noexcept;

//  EventMotion::x_root (::GdkEventMotion* obj, gdouble _value);
// void EventMotion::x_root (::GdkEventMotion* obj, gdouble _value);
GI_INLINE_DECL void x_root_ (gdouble _value) noexcept;

// gdouble EventMotion::y_root (const ::GdkEventMotion* obj);
// gdouble EventMotion::y_root (const ::GdkEventMotion* obj);
GI_INLINE_DECL gdouble y_root_ () const noexcept;

//  EventMotion::y_root (::GdkEventMotion* obj, gdouble _value);
// void EventMotion::y_root (::GdkEventMotion* obj, gdouble _value);
GI_INLINE_DECL void y_root_ (gdouble _value) noexcept;

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/eventmotion_extra_def.hpp>)
#include <gdk/eventmotion_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/eventmotion_extra.hpp>)
#include <gdk/eventmotion_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class EventMotion : public GI_GDK_EVENTMOTION_BASE
{ typedef GI_GDK_EVENTMOTION_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkEventMotion>
{ typedef Gdk::EventMotion type; }; 

} // namespace repository

} // namespace gi

#endif
