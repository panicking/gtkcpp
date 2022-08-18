// AUTO-GENERATED

#ifndef _GI_GDK_EVENTSELECTION_HPP_
#define _GI_GDK_EVENTSELECTION_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class Window;

class EventSelection;

namespace base {


#define GI_GDK_EVENTSELECTION_BASE base::EventSelectionBase
class EventSelectionBase : public gi::detail::CBoxedWrapper<EventSelectionBase, ::GdkEventSelection>
{
typedef gi::detail::CBoxedWrapper<EventSelectionBase, ::GdkEventSelection> super_type;
public:

EventSelectionBase (std::nullptr_t = nullptr) : super_type() {}

// ::GdkEventType EventSelection::type (const ::GdkEventSelection* obj);
// ::GdkEventType EventSelection::type (const ::GdkEventSelection* obj);
GI_INLINE_DECL Gdk::EventType type_ () const noexcept;

//  EventSelection::type (::GdkEventSelection* obj, ::GdkEventType _value);
// void EventSelection::type (::GdkEventSelection* obj, ::GdkEventType _value);
GI_INLINE_DECL void type_ (Gdk::EventType _value) noexcept;

// ::GdkWindow* EventSelection::window (const ::GdkEventSelection* obj);
// ::GdkWindow* EventSelection::window (const ::GdkEventSelection* obj);
GI_INLINE_DECL Gdk::Window window_ () const noexcept;

// gint8 EventSelection::send_event (const ::GdkEventSelection* obj);
// gint8 EventSelection::send_event (const ::GdkEventSelection* obj);
GI_INLINE_DECL gint8 send_event_ () const noexcept;

//  EventSelection::send_event (::GdkEventSelection* obj, gint8 _value);
// void EventSelection::send_event (::GdkEventSelection* obj, gint8 _value);
GI_INLINE_DECL void send_event_ (gint8 _value) noexcept;

// guint32 EventSelection::time (const ::GdkEventSelection* obj);
// guint32 EventSelection::time (const ::GdkEventSelection* obj);
GI_INLINE_DECL guint32 time_ () const noexcept;

//  EventSelection::time (::GdkEventSelection* obj, guint32 _value);
// void EventSelection::time (::GdkEventSelection* obj, guint32 _value);
GI_INLINE_DECL void time_ (guint32 _value) noexcept;

// ::GdkWindow* EventSelection::requestor (const ::GdkEventSelection* obj);
// ::GdkWindow* EventSelection::requestor (const ::GdkEventSelection* obj);
GI_INLINE_DECL Gdk::Window requestor_ () const noexcept;

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/eventselection_extra_def.hpp>)
#include <gdk/eventselection_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/eventselection_extra.hpp>)
#include <gdk/eventselection_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class EventSelection : public GI_GDK_EVENTSELECTION_BASE
{ typedef GI_GDK_EVENTSELECTION_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkEventSelection>
{ typedef Gdk::EventSelection type; }; 

} // namespace repository

} // namespace gi

#endif
