// AUTO-GENERATED

#ifndef _GI_GDK_EVENTFOCUS_HPP_
#define _GI_GDK_EVENTFOCUS_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class Window;

class EventFocus;

namespace base {


#define GI_GDK_EVENTFOCUS_BASE base::EventFocusBase
class EventFocusBase : public gi::detail::CBoxedWrapper<EventFocusBase, ::GdkEventFocus>
{
typedef gi::detail::CBoxedWrapper<EventFocusBase, ::GdkEventFocus> super_type;
public:

EventFocusBase (std::nullptr_t = nullptr) : super_type() {}

// ::GdkEventType EventFocus::type (const ::GdkEventFocus* obj);
// ::GdkEventType EventFocus::type (const ::GdkEventFocus* obj);
GI_INLINE_DECL Gdk::EventType type_ () const noexcept;

//  EventFocus::type (::GdkEventFocus* obj, ::GdkEventType _value);
// void EventFocus::type (::GdkEventFocus* obj, ::GdkEventType _value);
GI_INLINE_DECL void type_ (Gdk::EventType _value) noexcept;

// ::GdkWindow* EventFocus::window (const ::GdkEventFocus* obj);
// ::GdkWindow* EventFocus::window (const ::GdkEventFocus* obj);
GI_INLINE_DECL Gdk::Window window_ () const noexcept;

// gint8 EventFocus::send_event (const ::GdkEventFocus* obj);
// gint8 EventFocus::send_event (const ::GdkEventFocus* obj);
GI_INLINE_DECL gint8 send_event_ () const noexcept;

//  EventFocus::send_event (::GdkEventFocus* obj, gint8 _value);
// void EventFocus::send_event (::GdkEventFocus* obj, gint8 _value);
GI_INLINE_DECL void send_event_ (gint8 _value) noexcept;

// gint16 EventFocus::in (const ::GdkEventFocus* obj);
// gint16 EventFocus::in (const ::GdkEventFocus* obj);
GI_INLINE_DECL gint16 in_ () const noexcept;

//  EventFocus::in (::GdkEventFocus* obj, gint16 _value);
// void EventFocus::in (::GdkEventFocus* obj, gint16 _value);
GI_INLINE_DECL void in_ (gint16 _value) noexcept;

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/eventfocus_extra_def.hpp>)
#include <gdk/eventfocus_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/eventfocus_extra.hpp>)
#include <gdk/eventfocus_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class EventFocus : public GI_GDK_EVENTFOCUS_BASE
{ typedef GI_GDK_EVENTFOCUS_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkEventFocus>
{ typedef Gdk::EventFocus type; }; 

} // namespace repository

} // namespace gi

#endif
