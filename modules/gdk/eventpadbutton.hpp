// AUTO-GENERATED

#ifndef _GI_GDK_EVENTPADBUTTON_HPP_
#define _GI_GDK_EVENTPADBUTTON_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class Window;

class EventPadButton;

namespace base {


#define GI_GDK_EVENTPADBUTTON_BASE base::EventPadButtonBase
class EventPadButtonBase : public gi::detail::CBoxedWrapper<EventPadButtonBase, ::GdkEventPadButton>
{
typedef gi::detail::CBoxedWrapper<EventPadButtonBase, ::GdkEventPadButton> super_type;
public:

EventPadButtonBase (std::nullptr_t = nullptr) : super_type() {}

// ::GdkEventType EventPadButton::type (const ::GdkEventPadButton* obj);
// ::GdkEventType EventPadButton::type (const ::GdkEventPadButton* obj);
GI_INLINE_DECL Gdk::EventType type_ () const noexcept;

//  EventPadButton::type (::GdkEventPadButton* obj, ::GdkEventType _value);
// void EventPadButton::type (::GdkEventPadButton* obj, ::GdkEventType _value);
GI_INLINE_DECL void type_ (Gdk::EventType _value) noexcept;

// ::GdkWindow* EventPadButton::window (const ::GdkEventPadButton* obj);
// ::GdkWindow* EventPadButton::window (const ::GdkEventPadButton* obj);
GI_INLINE_DECL Gdk::Window window_ () const noexcept;

// gint8 EventPadButton::send_event (const ::GdkEventPadButton* obj);
// gint8 EventPadButton::send_event (const ::GdkEventPadButton* obj);
GI_INLINE_DECL gint8 send_event_ () const noexcept;

//  EventPadButton::send_event (::GdkEventPadButton* obj, gint8 _value);
// void EventPadButton::send_event (::GdkEventPadButton* obj, gint8 _value);
GI_INLINE_DECL void send_event_ (gint8 _value) noexcept;

// guint32 EventPadButton::time (const ::GdkEventPadButton* obj);
// guint32 EventPadButton::time (const ::GdkEventPadButton* obj);
GI_INLINE_DECL guint32 time_ () const noexcept;

//  EventPadButton::time (::GdkEventPadButton* obj, guint32 _value);
// void EventPadButton::time (::GdkEventPadButton* obj, guint32 _value);
GI_INLINE_DECL void time_ (guint32 _value) noexcept;

// guint EventPadButton::group (const ::GdkEventPadButton* obj);
// guint EventPadButton::group (const ::GdkEventPadButton* obj);
GI_INLINE_DECL guint group_ () const noexcept;

//  EventPadButton::group (::GdkEventPadButton* obj, guint _value);
// void EventPadButton::group (::GdkEventPadButton* obj, guint _value);
GI_INLINE_DECL void group_ (guint _value) noexcept;

// guint EventPadButton::button (const ::GdkEventPadButton* obj);
// guint EventPadButton::button (const ::GdkEventPadButton* obj);
GI_INLINE_DECL guint button_ () const noexcept;

//  EventPadButton::button (::GdkEventPadButton* obj, guint _value);
// void EventPadButton::button (::GdkEventPadButton* obj, guint _value);
GI_INLINE_DECL void button_ (guint _value) noexcept;

// guint EventPadButton::mode (const ::GdkEventPadButton* obj);
// guint EventPadButton::mode (const ::GdkEventPadButton* obj);
GI_INLINE_DECL guint mode_ () const noexcept;

//  EventPadButton::mode (::GdkEventPadButton* obj, guint _value);
// void EventPadButton::mode (::GdkEventPadButton* obj, guint _value);
GI_INLINE_DECL void mode_ (guint _value) noexcept;

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/eventpadbutton_extra_def.hpp>)
#include <gdk/eventpadbutton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/eventpadbutton_extra.hpp>)
#include <gdk/eventpadbutton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class EventPadButton : public GI_GDK_EVENTPADBUTTON_BASE
{ typedef GI_GDK_EVENTPADBUTTON_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkEventPadButton>
{ typedef Gdk::EventPadButton type; }; 

} // namespace repository

} // namespace gi

#endif
