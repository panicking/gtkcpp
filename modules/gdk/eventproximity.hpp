// AUTO-GENERATED

#ifndef _GI_GDK_EVENTPROXIMITY_HPP_
#define _GI_GDK_EVENTPROXIMITY_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class Device;
class Window;

class EventProximity;

namespace base {


#define GI_GDK_EVENTPROXIMITY_BASE base::EventProximityBase
class EventProximityBase : public gi::detail::CBoxedWrapper<EventProximityBase, ::GdkEventProximity>
{
typedef gi::detail::CBoxedWrapper<EventProximityBase, ::GdkEventProximity> super_type;
public:

EventProximityBase (std::nullptr_t = nullptr) : super_type() {}

// ::GdkEventType EventProximity::type (const ::GdkEventProximity* obj);
// ::GdkEventType EventProximity::type (const ::GdkEventProximity* obj);
GI_INLINE_DECL Gdk::EventType type_ () const noexcept;

//  EventProximity::type (::GdkEventProximity* obj, ::GdkEventType _value);
// void EventProximity::type (::GdkEventProximity* obj, ::GdkEventType _value);
GI_INLINE_DECL void type_ (Gdk::EventType _value) noexcept;

// ::GdkWindow* EventProximity::window (const ::GdkEventProximity* obj);
// ::GdkWindow* EventProximity::window (const ::GdkEventProximity* obj);
GI_INLINE_DECL Gdk::Window window_ () const noexcept;

// gint8 EventProximity::send_event (const ::GdkEventProximity* obj);
// gint8 EventProximity::send_event (const ::GdkEventProximity* obj);
GI_INLINE_DECL gint8 send_event_ () const noexcept;

//  EventProximity::send_event (::GdkEventProximity* obj, gint8 _value);
// void EventProximity::send_event (::GdkEventProximity* obj, gint8 _value);
GI_INLINE_DECL void send_event_ (gint8 _value) noexcept;

// guint32 EventProximity::time (const ::GdkEventProximity* obj);
// guint32 EventProximity::time (const ::GdkEventProximity* obj);
GI_INLINE_DECL guint32 time_ () const noexcept;

//  EventProximity::time (::GdkEventProximity* obj, guint32 _value);
// void EventProximity::time (::GdkEventProximity* obj, guint32 _value);
GI_INLINE_DECL void time_ (guint32 _value) noexcept;

// ::GdkDevice* EventProximity::device (const ::GdkEventProximity* obj);
// ::GdkDevice* EventProximity::device (const ::GdkEventProximity* obj);
GI_INLINE_DECL Gdk::Device device_ () const noexcept;

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/eventproximity_extra_def.hpp>)
#include <gdk/eventproximity_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/eventproximity_extra.hpp>)
#include <gdk/eventproximity_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class EventProximity : public GI_GDK_EVENTPROXIMITY_BASE
{ typedef GI_GDK_EVENTPROXIMITY_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkEventProximity>
{ typedef Gdk::EventProximity type; }; 

} // namespace repository

} // namespace gi

#endif
