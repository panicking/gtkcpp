// AUTO-GENERATED

#ifndef _GI_GDK_EVENTCONFIGURE_HPP_
#define _GI_GDK_EVENTCONFIGURE_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class Window;

class EventConfigure;

namespace base {


#define GI_GDK_EVENTCONFIGURE_BASE base::EventConfigureBase
class EventConfigureBase : public gi::detail::CBoxedWrapper<EventConfigureBase, ::GdkEventConfigure>
{
typedef gi::detail::CBoxedWrapper<EventConfigureBase, ::GdkEventConfigure> super_type;
public:

EventConfigureBase (std::nullptr_t = nullptr) : super_type() {}

// ::GdkEventType EventConfigure::type (const ::GdkEventConfigure* obj);
// ::GdkEventType EventConfigure::type (const ::GdkEventConfigure* obj);
GI_INLINE_DECL Gdk::EventType type_ () const noexcept;

//  EventConfigure::type (::GdkEventConfigure* obj, ::GdkEventType _value);
// void EventConfigure::type (::GdkEventConfigure* obj, ::GdkEventType _value);
GI_INLINE_DECL void type_ (Gdk::EventType _value) noexcept;

// ::GdkWindow* EventConfigure::window (const ::GdkEventConfigure* obj);
// ::GdkWindow* EventConfigure::window (const ::GdkEventConfigure* obj);
GI_INLINE_DECL Gdk::Window window_ () const noexcept;

// gint8 EventConfigure::send_event (const ::GdkEventConfigure* obj);
// gint8 EventConfigure::send_event (const ::GdkEventConfigure* obj);
GI_INLINE_DECL gint8 send_event_ () const noexcept;

//  EventConfigure::send_event (::GdkEventConfigure* obj, gint8 _value);
// void EventConfigure::send_event (::GdkEventConfigure* obj, gint8 _value);
GI_INLINE_DECL void send_event_ (gint8 _value) noexcept;

// gint EventConfigure::x (const ::GdkEventConfigure* obj);
// gint EventConfigure::x (const ::GdkEventConfigure* obj);
GI_INLINE_DECL gint x_ () const noexcept;

//  EventConfigure::x (::GdkEventConfigure* obj, gint _value);
// void EventConfigure::x (::GdkEventConfigure* obj, gint _value);
GI_INLINE_DECL void x_ (gint _value) noexcept;

// gint EventConfigure::y (const ::GdkEventConfigure* obj);
// gint EventConfigure::y (const ::GdkEventConfigure* obj);
GI_INLINE_DECL gint y_ () const noexcept;

//  EventConfigure::y (::GdkEventConfigure* obj, gint _value);
// void EventConfigure::y (::GdkEventConfigure* obj, gint _value);
GI_INLINE_DECL void y_ (gint _value) noexcept;

// gint EventConfigure::width (const ::GdkEventConfigure* obj);
// gint EventConfigure::width (const ::GdkEventConfigure* obj);
GI_INLINE_DECL gint width_ () const noexcept;

//  EventConfigure::width (::GdkEventConfigure* obj, gint _value);
// void EventConfigure::width (::GdkEventConfigure* obj, gint _value);
GI_INLINE_DECL void width_ (gint _value) noexcept;

// gint EventConfigure::height (const ::GdkEventConfigure* obj);
// gint EventConfigure::height (const ::GdkEventConfigure* obj);
GI_INLINE_DECL gint height_ () const noexcept;

//  EventConfigure::height (::GdkEventConfigure* obj, gint _value);
// void EventConfigure::height (::GdkEventConfigure* obj, gint _value);
GI_INLINE_DECL void height_ (gint _value) noexcept;

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/eventconfigure_extra_def.hpp>)
#include <gdk/eventconfigure_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/eventconfigure_extra.hpp>)
#include <gdk/eventconfigure_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class EventConfigure : public GI_GDK_EVENTCONFIGURE_BASE
{ typedef GI_GDK_EVENTCONFIGURE_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkEventConfigure>
{ typedef Gdk::EventConfigure type; }; 

} // namespace repository

} // namespace gi

#endif
