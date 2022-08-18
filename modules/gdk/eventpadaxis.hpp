// AUTO-GENERATED

#ifndef _GI_GDK_EVENTPADAXIS_HPP_
#define _GI_GDK_EVENTPADAXIS_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class Window;

class EventPadAxis;

namespace base {


#define GI_GDK_EVENTPADAXIS_BASE base::EventPadAxisBase
class EventPadAxisBase : public gi::detail::CBoxedWrapper<EventPadAxisBase, ::GdkEventPadAxis>
{
typedef gi::detail::CBoxedWrapper<EventPadAxisBase, ::GdkEventPadAxis> super_type;
public:

EventPadAxisBase (std::nullptr_t = nullptr) : super_type() {}

// ::GdkEventType EventPadAxis::type (const ::GdkEventPadAxis* obj);
// ::GdkEventType EventPadAxis::type (const ::GdkEventPadAxis* obj);
GI_INLINE_DECL Gdk::EventType type_ () const noexcept;

//  EventPadAxis::type (::GdkEventPadAxis* obj, ::GdkEventType _value);
// void EventPadAxis::type (::GdkEventPadAxis* obj, ::GdkEventType _value);
GI_INLINE_DECL void type_ (Gdk::EventType _value) noexcept;

// ::GdkWindow* EventPadAxis::window (const ::GdkEventPadAxis* obj);
// ::GdkWindow* EventPadAxis::window (const ::GdkEventPadAxis* obj);
GI_INLINE_DECL Gdk::Window window_ () const noexcept;

// gint8 EventPadAxis::send_event (const ::GdkEventPadAxis* obj);
// gint8 EventPadAxis::send_event (const ::GdkEventPadAxis* obj);
GI_INLINE_DECL gint8 send_event_ () const noexcept;

//  EventPadAxis::send_event (::GdkEventPadAxis* obj, gint8 _value);
// void EventPadAxis::send_event (::GdkEventPadAxis* obj, gint8 _value);
GI_INLINE_DECL void send_event_ (gint8 _value) noexcept;

// guint32 EventPadAxis::time (const ::GdkEventPadAxis* obj);
// guint32 EventPadAxis::time (const ::GdkEventPadAxis* obj);
GI_INLINE_DECL guint32 time_ () const noexcept;

//  EventPadAxis::time (::GdkEventPadAxis* obj, guint32 _value);
// void EventPadAxis::time (::GdkEventPadAxis* obj, guint32 _value);
GI_INLINE_DECL void time_ (guint32 _value) noexcept;

// guint EventPadAxis::group (const ::GdkEventPadAxis* obj);
// guint EventPadAxis::group (const ::GdkEventPadAxis* obj);
GI_INLINE_DECL guint group_ () const noexcept;

//  EventPadAxis::group (::GdkEventPadAxis* obj, guint _value);
// void EventPadAxis::group (::GdkEventPadAxis* obj, guint _value);
GI_INLINE_DECL void group_ (guint _value) noexcept;

// guint EventPadAxis::index (const ::GdkEventPadAxis* obj);
// guint EventPadAxis::index (const ::GdkEventPadAxis* obj);
GI_INLINE_DECL guint index_ () const noexcept;

//  EventPadAxis::index (::GdkEventPadAxis* obj, guint _value);
// void EventPadAxis::index (::GdkEventPadAxis* obj, guint _value);
GI_INLINE_DECL void index_ (guint _value) noexcept;

// guint EventPadAxis::mode (const ::GdkEventPadAxis* obj);
// guint EventPadAxis::mode (const ::GdkEventPadAxis* obj);
GI_INLINE_DECL guint mode_ () const noexcept;

//  EventPadAxis::mode (::GdkEventPadAxis* obj, guint _value);
// void EventPadAxis::mode (::GdkEventPadAxis* obj, guint _value);
GI_INLINE_DECL void mode_ (guint _value) noexcept;

// gdouble EventPadAxis::value (const ::GdkEventPadAxis* obj);
// gdouble EventPadAxis::value (const ::GdkEventPadAxis* obj);
GI_INLINE_DECL gdouble value_ () const noexcept;

//  EventPadAxis::value (::GdkEventPadAxis* obj, gdouble _value);
// void EventPadAxis::value (::GdkEventPadAxis* obj, gdouble _value);
GI_INLINE_DECL void value_ (gdouble _value) noexcept;

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/eventpadaxis_extra_def.hpp>)
#include <gdk/eventpadaxis_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/eventpadaxis_extra.hpp>)
#include <gdk/eventpadaxis_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class EventPadAxis : public GI_GDK_EVENTPADAXIS_BASE
{ typedef GI_GDK_EVENTPADAXIS_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkEventPadAxis>
{ typedef Gdk::EventPadAxis type; }; 

} // namespace repository

} // namespace gi

#endif
