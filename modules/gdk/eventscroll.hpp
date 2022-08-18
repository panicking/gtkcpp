// AUTO-GENERATED

#ifndef _GI_GDK_EVENTSCROLL_HPP_
#define _GI_GDK_EVENTSCROLL_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class Device;
class Window;

class EventScroll;

namespace base {


#define GI_GDK_EVENTSCROLL_BASE base::EventScrollBase
class EventScrollBase : public gi::detail::CBoxedWrapper<EventScrollBase, ::GdkEventScroll>
{
typedef gi::detail::CBoxedWrapper<EventScrollBase, ::GdkEventScroll> super_type;
public:

EventScrollBase (std::nullptr_t = nullptr) : super_type() {}

// ::GdkEventType EventScroll::type (const ::GdkEventScroll* obj);
// ::GdkEventType EventScroll::type (const ::GdkEventScroll* obj);
GI_INLINE_DECL Gdk::EventType type_ () const noexcept;

//  EventScroll::type (::GdkEventScroll* obj, ::GdkEventType _value);
// void EventScroll::type (::GdkEventScroll* obj, ::GdkEventType _value);
GI_INLINE_DECL void type_ (Gdk::EventType _value) noexcept;

// ::GdkWindow* EventScroll::window (const ::GdkEventScroll* obj);
// ::GdkWindow* EventScroll::window (const ::GdkEventScroll* obj);
GI_INLINE_DECL Gdk::Window window_ () const noexcept;

// gint8 EventScroll::send_event (const ::GdkEventScroll* obj);
// gint8 EventScroll::send_event (const ::GdkEventScroll* obj);
GI_INLINE_DECL gint8 send_event_ () const noexcept;

//  EventScroll::send_event (::GdkEventScroll* obj, gint8 _value);
// void EventScroll::send_event (::GdkEventScroll* obj, gint8 _value);
GI_INLINE_DECL void send_event_ (gint8 _value) noexcept;

// guint32 EventScroll::time (const ::GdkEventScroll* obj);
// guint32 EventScroll::time (const ::GdkEventScroll* obj);
GI_INLINE_DECL guint32 time_ () const noexcept;

//  EventScroll::time (::GdkEventScroll* obj, guint32 _value);
// void EventScroll::time (::GdkEventScroll* obj, guint32 _value);
GI_INLINE_DECL void time_ (guint32 _value) noexcept;

// gdouble EventScroll::x (const ::GdkEventScroll* obj);
// gdouble EventScroll::x (const ::GdkEventScroll* obj);
GI_INLINE_DECL gdouble x_ () const noexcept;

//  EventScroll::x (::GdkEventScroll* obj, gdouble _value);
// void EventScroll::x (::GdkEventScroll* obj, gdouble _value);
GI_INLINE_DECL void x_ (gdouble _value) noexcept;

// gdouble EventScroll::y (const ::GdkEventScroll* obj);
// gdouble EventScroll::y (const ::GdkEventScroll* obj);
GI_INLINE_DECL gdouble y_ () const noexcept;

//  EventScroll::y (::GdkEventScroll* obj, gdouble _value);
// void EventScroll::y (::GdkEventScroll* obj, gdouble _value);
GI_INLINE_DECL void y_ (gdouble _value) noexcept;

// ::GdkModifierType EventScroll::state (const ::GdkEventScroll* obj);
// ::GdkModifierType EventScroll::state (const ::GdkEventScroll* obj);
GI_INLINE_DECL Gdk::ModifierType state_ () const noexcept;

//  EventScroll::state (::GdkEventScroll* obj, ::GdkModifierType _value);
// void EventScroll::state (::GdkEventScroll* obj, ::GdkModifierType _value);
GI_INLINE_DECL void state_ (Gdk::ModifierType _value) noexcept;

// ::GdkScrollDirection EventScroll::direction (const ::GdkEventScroll* obj);
// ::GdkScrollDirection EventScroll::direction (const ::GdkEventScroll* obj);
GI_INLINE_DECL Gdk::ScrollDirection direction_ () const noexcept;

//  EventScroll::direction (::GdkEventScroll* obj, ::GdkScrollDirection _value);
// void EventScroll::direction (::GdkEventScroll* obj, ::GdkScrollDirection _value);
GI_INLINE_DECL void direction_ (Gdk::ScrollDirection _value) noexcept;

// ::GdkDevice* EventScroll::device (const ::GdkEventScroll* obj);
// ::GdkDevice* EventScroll::device (const ::GdkEventScroll* obj);
GI_INLINE_DECL Gdk::Device device_ () const noexcept;

// gdouble EventScroll::x_root (const ::GdkEventScroll* obj);
// gdouble EventScroll::x_root (const ::GdkEventScroll* obj);
GI_INLINE_DECL gdouble x_root_ () const noexcept;

//  EventScroll::x_root (::GdkEventScroll* obj, gdouble _value);
// void EventScroll::x_root (::GdkEventScroll* obj, gdouble _value);
GI_INLINE_DECL void x_root_ (gdouble _value) noexcept;

// gdouble EventScroll::y_root (const ::GdkEventScroll* obj);
// gdouble EventScroll::y_root (const ::GdkEventScroll* obj);
GI_INLINE_DECL gdouble y_root_ () const noexcept;

//  EventScroll::y_root (::GdkEventScroll* obj, gdouble _value);
// void EventScroll::y_root (::GdkEventScroll* obj, gdouble _value);
GI_INLINE_DECL void y_root_ (gdouble _value) noexcept;

// gdouble EventScroll::delta_x (const ::GdkEventScroll* obj);
// gdouble EventScroll::delta_x (const ::GdkEventScroll* obj);
GI_INLINE_DECL gdouble delta_x_ () const noexcept;

//  EventScroll::delta_x (::GdkEventScroll* obj, gdouble _value);
// void EventScroll::delta_x (::GdkEventScroll* obj, gdouble _value);
GI_INLINE_DECL void delta_x_ (gdouble _value) noexcept;

// gdouble EventScroll::delta_y (const ::GdkEventScroll* obj);
// gdouble EventScroll::delta_y (const ::GdkEventScroll* obj);
GI_INLINE_DECL gdouble delta_y_ () const noexcept;

//  EventScroll::delta_y (::GdkEventScroll* obj, gdouble _value);
// void EventScroll::delta_y (::GdkEventScroll* obj, gdouble _value);
GI_INLINE_DECL void delta_y_ (gdouble _value) noexcept;

// guint EventScroll::is_stop (const ::GdkEventScroll* obj);
// guint EventScroll::is_stop (const ::GdkEventScroll* obj);
GI_INLINE_DECL guint is_stop_ () const noexcept;

//  EventScroll::is_stop (::GdkEventScroll* obj, guint _value);
// void EventScroll::is_stop (::GdkEventScroll* obj, guint _value);
GI_INLINE_DECL void is_stop_ (guint _value) noexcept;

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/eventscroll_extra_def.hpp>)
#include <gdk/eventscroll_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/eventscroll_extra.hpp>)
#include <gdk/eventscroll_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class EventScroll : public GI_GDK_EVENTSCROLL_BASE
{ typedef GI_GDK_EVENTSCROLL_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkEventScroll>
{ typedef Gdk::EventScroll type; }; 

} // namespace repository

} // namespace gi

#endif
