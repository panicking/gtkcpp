// AUTO-GENERATED

#ifndef _GI_GDK_EVENTPADGROUPMODE_HPP_
#define _GI_GDK_EVENTPADGROUPMODE_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class Window;

class EventPadGroupMode;

namespace base {


#define GI_GDK_EVENTPADGROUPMODE_BASE base::EventPadGroupModeBase
class EventPadGroupModeBase : public gi::detail::CBoxedWrapper<EventPadGroupModeBase, ::GdkEventPadGroupMode>
{
typedef gi::detail::CBoxedWrapper<EventPadGroupModeBase, ::GdkEventPadGroupMode> super_type;
public:

EventPadGroupModeBase (std::nullptr_t = nullptr) : super_type() {}

// ::GdkEventType EventPadGroupMode::type (const ::GdkEventPadGroupMode* obj);
// ::GdkEventType EventPadGroupMode::type (const ::GdkEventPadGroupMode* obj);
GI_INLINE_DECL Gdk::EventType type_ () const noexcept;

//  EventPadGroupMode::type (::GdkEventPadGroupMode* obj, ::GdkEventType _value);
// void EventPadGroupMode::type (::GdkEventPadGroupMode* obj, ::GdkEventType _value);
GI_INLINE_DECL void type_ (Gdk::EventType _value) noexcept;

// ::GdkWindow* EventPadGroupMode::window (const ::GdkEventPadGroupMode* obj);
// ::GdkWindow* EventPadGroupMode::window (const ::GdkEventPadGroupMode* obj);
GI_INLINE_DECL Gdk::Window window_ () const noexcept;

// gint8 EventPadGroupMode::send_event (const ::GdkEventPadGroupMode* obj);
// gint8 EventPadGroupMode::send_event (const ::GdkEventPadGroupMode* obj);
GI_INLINE_DECL gint8 send_event_ () const noexcept;

//  EventPadGroupMode::send_event (::GdkEventPadGroupMode* obj, gint8 _value);
// void EventPadGroupMode::send_event (::GdkEventPadGroupMode* obj, gint8 _value);
GI_INLINE_DECL void send_event_ (gint8 _value) noexcept;

// guint32 EventPadGroupMode::time (const ::GdkEventPadGroupMode* obj);
// guint32 EventPadGroupMode::time (const ::GdkEventPadGroupMode* obj);
GI_INLINE_DECL guint32 time_ () const noexcept;

//  EventPadGroupMode::time (::GdkEventPadGroupMode* obj, guint32 _value);
// void EventPadGroupMode::time (::GdkEventPadGroupMode* obj, guint32 _value);
GI_INLINE_DECL void time_ (guint32 _value) noexcept;

// guint EventPadGroupMode::group (const ::GdkEventPadGroupMode* obj);
// guint EventPadGroupMode::group (const ::GdkEventPadGroupMode* obj);
GI_INLINE_DECL guint group_ () const noexcept;

//  EventPadGroupMode::group (::GdkEventPadGroupMode* obj, guint _value);
// void EventPadGroupMode::group (::GdkEventPadGroupMode* obj, guint _value);
GI_INLINE_DECL void group_ (guint _value) noexcept;

// guint EventPadGroupMode::mode (const ::GdkEventPadGroupMode* obj);
// guint EventPadGroupMode::mode (const ::GdkEventPadGroupMode* obj);
GI_INLINE_DECL guint mode_ () const noexcept;

//  EventPadGroupMode::mode (::GdkEventPadGroupMode* obj, guint _value);
// void EventPadGroupMode::mode (::GdkEventPadGroupMode* obj, guint _value);
GI_INLINE_DECL void mode_ (guint _value) noexcept;

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/eventpadgroupmode_extra_def.hpp>)
#include <gdk/eventpadgroupmode_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/eventpadgroupmode_extra.hpp>)
#include <gdk/eventpadgroupmode_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class EventPadGroupMode : public GI_GDK_EVENTPADGROUPMODE_BASE
{ typedef GI_GDK_EVENTPADGROUPMODE_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkEventPadGroupMode>
{ typedef Gdk::EventPadGroupMode type; }; 

} // namespace repository

} // namespace gi

#endif
