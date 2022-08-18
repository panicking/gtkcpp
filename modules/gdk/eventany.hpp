// AUTO-GENERATED

#ifndef _GI_GDK_EVENTANY_HPP_
#define _GI_GDK_EVENTANY_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class Window;

class EventAny;

namespace base {


#define GI_GDK_EVENTANY_BASE base::EventAnyBase
class EventAnyBase : public gi::detail::CBoxedWrapper<EventAnyBase, ::GdkEventAny>
{
typedef gi::detail::CBoxedWrapper<EventAnyBase, ::GdkEventAny> super_type;
public:

EventAnyBase (std::nullptr_t = nullptr) : super_type() {}

// ::GdkEventType EventAny::type (const ::GdkEventAny* obj);
// ::GdkEventType EventAny::type (const ::GdkEventAny* obj);
GI_INLINE_DECL Gdk::EventType type_ () const noexcept;

//  EventAny::type (::GdkEventAny* obj, ::GdkEventType _value);
// void EventAny::type (::GdkEventAny* obj, ::GdkEventType _value);
GI_INLINE_DECL void type_ (Gdk::EventType _value) noexcept;

// ::GdkWindow* EventAny::window (const ::GdkEventAny* obj);
// ::GdkWindow* EventAny::window (const ::GdkEventAny* obj);
GI_INLINE_DECL Gdk::Window window_ () const noexcept;

// gint8 EventAny::send_event (const ::GdkEventAny* obj);
// gint8 EventAny::send_event (const ::GdkEventAny* obj);
GI_INLINE_DECL gint8 send_event_ () const noexcept;

//  EventAny::send_event (::GdkEventAny* obj, gint8 _value);
// void EventAny::send_event (::GdkEventAny* obj, gint8 _value);
GI_INLINE_DECL void send_event_ (gint8 _value) noexcept;

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/eventany_extra_def.hpp>)
#include <gdk/eventany_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/eventany_extra.hpp>)
#include <gdk/eventany_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class EventAny : public GI_GDK_EVENTANY_BASE
{ typedef GI_GDK_EVENTANY_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkEventAny>
{ typedef Gdk::EventAny type; }; 

} // namespace repository

} // namespace gi

#endif
