// AUTO-GENERATED

#ifndef _GI_GDK_EVENTOWNERCHANGE_HPP_
#define _GI_GDK_EVENTOWNERCHANGE_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class Window;

class EventOwnerChange;

namespace base {


#define GI_GDK_EVENTOWNERCHANGE_BASE base::EventOwnerChangeBase
class EventOwnerChangeBase : public gi::detail::CBoxedWrapper<EventOwnerChangeBase, ::GdkEventOwnerChange>
{
typedef gi::detail::CBoxedWrapper<EventOwnerChangeBase, ::GdkEventOwnerChange> super_type;
public:

EventOwnerChangeBase (std::nullptr_t = nullptr) : super_type() {}

// ::GdkEventType EventOwnerChange::type (const ::GdkEventOwnerChange* obj);
// ::GdkEventType EventOwnerChange::type (const ::GdkEventOwnerChange* obj);
GI_INLINE_DECL Gdk::EventType type_ () const noexcept;

//  EventOwnerChange::type (::GdkEventOwnerChange* obj, ::GdkEventType _value);
// void EventOwnerChange::type (::GdkEventOwnerChange* obj, ::GdkEventType _value);
GI_INLINE_DECL void type_ (Gdk::EventType _value) noexcept;

// ::GdkWindow* EventOwnerChange::window (const ::GdkEventOwnerChange* obj);
// ::GdkWindow* EventOwnerChange::window (const ::GdkEventOwnerChange* obj);
GI_INLINE_DECL Gdk::Window window_ () const noexcept;

// gint8 EventOwnerChange::send_event (const ::GdkEventOwnerChange* obj);
// gint8 EventOwnerChange::send_event (const ::GdkEventOwnerChange* obj);
GI_INLINE_DECL gint8 send_event_ () const noexcept;

//  EventOwnerChange::send_event (::GdkEventOwnerChange* obj, gint8 _value);
// void EventOwnerChange::send_event (::GdkEventOwnerChange* obj, gint8 _value);
GI_INLINE_DECL void send_event_ (gint8 _value) noexcept;

// ::GdkWindow* EventOwnerChange::owner (const ::GdkEventOwnerChange* obj);
// ::GdkWindow* EventOwnerChange::owner (const ::GdkEventOwnerChange* obj);
GI_INLINE_DECL Gdk::Window owner_ () const noexcept;

// ::GdkOwnerChange EventOwnerChange::reason (const ::GdkEventOwnerChange* obj);
// ::GdkOwnerChange EventOwnerChange::reason (const ::GdkEventOwnerChange* obj);
GI_INLINE_DECL Gdk::OwnerChange reason_ () const noexcept;

//  EventOwnerChange::reason (::GdkEventOwnerChange* obj, ::GdkOwnerChange _value);
// void EventOwnerChange::reason (::GdkEventOwnerChange* obj, ::GdkOwnerChange _value);
GI_INLINE_DECL void reason_ (Gdk::OwnerChange _value) noexcept;

// guint32 EventOwnerChange::time (const ::GdkEventOwnerChange* obj);
// guint32 EventOwnerChange::time (const ::GdkEventOwnerChange* obj);
GI_INLINE_DECL guint32 time_ () const noexcept;

//  EventOwnerChange::time (::GdkEventOwnerChange* obj, guint32 _value);
// void EventOwnerChange::time (::GdkEventOwnerChange* obj, guint32 _value);
GI_INLINE_DECL void time_ (guint32 _value) noexcept;

// guint32 EventOwnerChange::selection_time (const ::GdkEventOwnerChange* obj);
// guint32 EventOwnerChange::selection_time (const ::GdkEventOwnerChange* obj);
GI_INLINE_DECL guint32 selection_time_ () const noexcept;

//  EventOwnerChange::selection_time (::GdkEventOwnerChange* obj, guint32 _value);
// void EventOwnerChange::selection_time (::GdkEventOwnerChange* obj, guint32 _value);
GI_INLINE_DECL void selection_time_ (guint32 _value) noexcept;

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/eventownerchange_extra_def.hpp>)
#include <gdk/eventownerchange_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/eventownerchange_extra.hpp>)
#include <gdk/eventownerchange_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class EventOwnerChange : public GI_GDK_EVENTOWNERCHANGE_BASE
{ typedef GI_GDK_EVENTOWNERCHANGE_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkEventOwnerChange>
{ typedef Gdk::EventOwnerChange type; }; 

} // namespace repository

} // namespace gi

#endif
