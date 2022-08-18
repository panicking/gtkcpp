// AUTO-GENERATED

#ifndef _GI_GDK_EVENTWINDOWSTATE_HPP_
#define _GI_GDK_EVENTWINDOWSTATE_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class Window;

class EventWindowState;

namespace base {


#define GI_GDK_EVENTWINDOWSTATE_BASE base::EventWindowStateBase
class EventWindowStateBase : public gi::detail::CBoxedWrapper<EventWindowStateBase, ::GdkEventWindowState>
{
typedef gi::detail::CBoxedWrapper<EventWindowStateBase, ::GdkEventWindowState> super_type;
public:

EventWindowStateBase (std::nullptr_t = nullptr) : super_type() {}

// ::GdkEventType EventWindowState::type (const ::GdkEventWindowState* obj);
// ::GdkEventType EventWindowState::type (const ::GdkEventWindowState* obj);
GI_INLINE_DECL Gdk::EventType type_ () const noexcept;

//  EventWindowState::type (::GdkEventWindowState* obj, ::GdkEventType _value);
// void EventWindowState::type (::GdkEventWindowState* obj, ::GdkEventType _value);
GI_INLINE_DECL void type_ (Gdk::EventType _value) noexcept;

// ::GdkWindow* EventWindowState::window (const ::GdkEventWindowState* obj);
// ::GdkWindow* EventWindowState::window (const ::GdkEventWindowState* obj);
GI_INLINE_DECL Gdk::Window window_ () const noexcept;

// gint8 EventWindowState::send_event (const ::GdkEventWindowState* obj);
// gint8 EventWindowState::send_event (const ::GdkEventWindowState* obj);
GI_INLINE_DECL gint8 send_event_ () const noexcept;

//  EventWindowState::send_event (::GdkEventWindowState* obj, gint8 _value);
// void EventWindowState::send_event (::GdkEventWindowState* obj, gint8 _value);
GI_INLINE_DECL void send_event_ (gint8 _value) noexcept;

// ::GdkWindowState EventWindowState::changed_mask (const ::GdkEventWindowState* obj);
// ::GdkWindowState EventWindowState::changed_mask (const ::GdkEventWindowState* obj);
GI_INLINE_DECL Gdk::WindowState changed_mask_ () const noexcept;

//  EventWindowState::changed_mask (::GdkEventWindowState* obj, ::GdkWindowState _value);
// void EventWindowState::changed_mask (::GdkEventWindowState* obj, ::GdkWindowState _value);
GI_INLINE_DECL void changed_mask_ (Gdk::WindowState _value) noexcept;

// ::GdkWindowState EventWindowState::new_window_state (const ::GdkEventWindowState* obj);
// ::GdkWindowState EventWindowState::new_window_state (const ::GdkEventWindowState* obj);
GI_INLINE_DECL Gdk::WindowState new_window_state_ () const noexcept;

//  EventWindowState::new_window_state (::GdkEventWindowState* obj, ::GdkWindowState _value);
// void EventWindowState::new_window_state (::GdkEventWindowState* obj, ::GdkWindowState _value);
GI_INLINE_DECL void new_window_state_ (Gdk::WindowState _value) noexcept;

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/eventwindowstate_extra_def.hpp>)
#include <gdk/eventwindowstate_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/eventwindowstate_extra.hpp>)
#include <gdk/eventwindowstate_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class EventWindowState : public GI_GDK_EVENTWINDOWSTATE_BASE
{ typedef GI_GDK_EVENTWINDOWSTATE_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkEventWindowState>
{ typedef Gdk::EventWindowState type; }; 

} // namespace repository

} // namespace gi

#endif
