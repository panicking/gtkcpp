// AUTO-GENERATED

#ifndef _GI_GDK_EVENTGRABBROKEN_HPP_
#define _GI_GDK_EVENTGRABBROKEN_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class Window;

class EventGrabBroken;

namespace base {


#define GI_GDK_EVENTGRABBROKEN_BASE base::EventGrabBrokenBase
class EventGrabBrokenBase : public gi::detail::CBoxedWrapper<EventGrabBrokenBase, ::GdkEventGrabBroken>
{
typedef gi::detail::CBoxedWrapper<EventGrabBrokenBase, ::GdkEventGrabBroken> super_type;
public:

EventGrabBrokenBase (std::nullptr_t = nullptr) : super_type() {}

// ::GdkEventType EventGrabBroken::type (const ::GdkEventGrabBroken* obj);
// ::GdkEventType EventGrabBroken::type (const ::GdkEventGrabBroken* obj);
GI_INLINE_DECL Gdk::EventType type_ () const noexcept;

//  EventGrabBroken::type (::GdkEventGrabBroken* obj, ::GdkEventType _value);
// void EventGrabBroken::type (::GdkEventGrabBroken* obj, ::GdkEventType _value);
GI_INLINE_DECL void type_ (Gdk::EventType _value) noexcept;

// ::GdkWindow* EventGrabBroken::window (const ::GdkEventGrabBroken* obj);
// ::GdkWindow* EventGrabBroken::window (const ::GdkEventGrabBroken* obj);
GI_INLINE_DECL Gdk::Window window_ () const noexcept;

// gint8 EventGrabBroken::send_event (const ::GdkEventGrabBroken* obj);
// gint8 EventGrabBroken::send_event (const ::GdkEventGrabBroken* obj);
GI_INLINE_DECL gint8 send_event_ () const noexcept;

//  EventGrabBroken::send_event (::GdkEventGrabBroken* obj, gint8 _value);
// void EventGrabBroken::send_event (::GdkEventGrabBroken* obj, gint8 _value);
GI_INLINE_DECL void send_event_ (gint8 _value) noexcept;

// gboolean EventGrabBroken::keyboard (const ::GdkEventGrabBroken* obj);
// gboolean EventGrabBroken::keyboard (const ::GdkEventGrabBroken* obj);
GI_INLINE_DECL bool keyboard_ () const noexcept;

//  EventGrabBroken::keyboard (::GdkEventGrabBroken* obj, gboolean _value);
// void EventGrabBroken::keyboard (::GdkEventGrabBroken* obj, gboolean _value);
GI_INLINE_DECL void keyboard_ (gboolean _value) noexcept;

// gboolean EventGrabBroken::implicit (const ::GdkEventGrabBroken* obj);
// gboolean EventGrabBroken::implicit (const ::GdkEventGrabBroken* obj);
GI_INLINE_DECL bool implicit_ () const noexcept;

//  EventGrabBroken::implicit (::GdkEventGrabBroken* obj, gboolean _value);
// void EventGrabBroken::implicit (::GdkEventGrabBroken* obj, gboolean _value);
GI_INLINE_DECL void implicit_ (gboolean _value) noexcept;

// ::GdkWindow* EventGrabBroken::grab_window (const ::GdkEventGrabBroken* obj);
// ::GdkWindow* EventGrabBroken::grab_window (const ::GdkEventGrabBroken* obj);
GI_INLINE_DECL Gdk::Window grab_window_ () const noexcept;

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/eventgrabbroken_extra_def.hpp>)
#include <gdk/eventgrabbroken_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/eventgrabbroken_extra.hpp>)
#include <gdk/eventgrabbroken_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class EventGrabBroken : public GI_GDK_EVENTGRABBROKEN_BASE
{ typedef GI_GDK_EVENTGRABBROKEN_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkEventGrabBroken>
{ typedef Gdk::EventGrabBroken type; }; 

} // namespace repository

} // namespace gi

#endif
