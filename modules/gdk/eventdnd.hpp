// AUTO-GENERATED

#ifndef _GI_GDK_EVENTDND_HPP_
#define _GI_GDK_EVENTDND_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class DragContext;
class Window;

class EventDND;

namespace base {


#define GI_GDK_EVENTDND_BASE base::EventDNDBase
class EventDNDBase : public gi::detail::CBoxedWrapper<EventDNDBase, ::GdkEventDND>
{
typedef gi::detail::CBoxedWrapper<EventDNDBase, ::GdkEventDND> super_type;
public:

EventDNDBase (std::nullptr_t = nullptr) : super_type() {}

// ::GdkEventType EventDND::type (const ::GdkEventDND* obj);
// ::GdkEventType EventDND::type (const ::GdkEventDND* obj);
GI_INLINE_DECL Gdk::EventType type_ () const noexcept;

//  EventDND::type (::GdkEventDND* obj, ::GdkEventType _value);
// void EventDND::type (::GdkEventDND* obj, ::GdkEventType _value);
GI_INLINE_DECL void type_ (Gdk::EventType _value) noexcept;

// ::GdkWindow* EventDND::window (const ::GdkEventDND* obj);
// ::GdkWindow* EventDND::window (const ::GdkEventDND* obj);
GI_INLINE_DECL Gdk::Window window_ () const noexcept;

// gint8 EventDND::send_event (const ::GdkEventDND* obj);
// gint8 EventDND::send_event (const ::GdkEventDND* obj);
GI_INLINE_DECL gint8 send_event_ () const noexcept;

//  EventDND::send_event (::GdkEventDND* obj, gint8 _value);
// void EventDND::send_event (::GdkEventDND* obj, gint8 _value);
GI_INLINE_DECL void send_event_ (gint8 _value) noexcept;

// ::GdkDragContext* EventDND::context (const ::GdkEventDND* obj);
// ::GdkDragContext* EventDND::context (const ::GdkEventDND* obj);
GI_INLINE_DECL Gdk::DragContext context_ () const noexcept;

// guint32 EventDND::time (const ::GdkEventDND* obj);
// guint32 EventDND::time (const ::GdkEventDND* obj);
GI_INLINE_DECL guint32 time_ () const noexcept;

//  EventDND::time (::GdkEventDND* obj, guint32 _value);
// void EventDND::time (::GdkEventDND* obj, guint32 _value);
GI_INLINE_DECL void time_ (guint32 _value) noexcept;

// gshort EventDND::x_root (const ::GdkEventDND* obj);
// gshort EventDND::x_root (const ::GdkEventDND* obj);
GI_INLINE_DECL gshort x_root_ () const noexcept;

//  EventDND::x_root (::GdkEventDND* obj, gshort _value);
// void EventDND::x_root (::GdkEventDND* obj, gshort _value);
GI_INLINE_DECL void x_root_ (gshort _value) noexcept;

// gshort EventDND::y_root (const ::GdkEventDND* obj);
// gshort EventDND::y_root (const ::GdkEventDND* obj);
GI_INLINE_DECL gshort y_root_ () const noexcept;

//  EventDND::y_root (::GdkEventDND* obj, gshort _value);
// void EventDND::y_root (::GdkEventDND* obj, gshort _value);
GI_INLINE_DECL void y_root_ (gshort _value) noexcept;

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/eventdnd_extra_def.hpp>)
#include <gdk/eventdnd_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/eventdnd_extra.hpp>)
#include <gdk/eventdnd_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class EventDND : public GI_GDK_EVENTDND_BASE
{ typedef GI_GDK_EVENTDND_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkEventDND>
{ typedef Gdk::EventDND type; }; 

} // namespace repository

} // namespace gi

#endif
