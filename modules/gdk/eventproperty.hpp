// AUTO-GENERATED

#ifndef _GI_GDK_EVENTPROPERTY_HPP_
#define _GI_GDK_EVENTPROPERTY_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class Window;

class EventProperty;

namespace base {


#define GI_GDK_EVENTPROPERTY_BASE base::EventPropertyBase
class EventPropertyBase : public gi::detail::CBoxedWrapper<EventPropertyBase, ::GdkEventProperty>
{
typedef gi::detail::CBoxedWrapper<EventPropertyBase, ::GdkEventProperty> super_type;
public:

EventPropertyBase (std::nullptr_t = nullptr) : super_type() {}

// ::GdkEventType EventProperty::type (const ::GdkEventProperty* obj);
// ::GdkEventType EventProperty::type (const ::GdkEventProperty* obj);
GI_INLINE_DECL Gdk::EventType type_ () const noexcept;

//  EventProperty::type (::GdkEventProperty* obj, ::GdkEventType _value);
// void EventProperty::type (::GdkEventProperty* obj, ::GdkEventType _value);
GI_INLINE_DECL void type_ (Gdk::EventType _value) noexcept;

// ::GdkWindow* EventProperty::window (const ::GdkEventProperty* obj);
// ::GdkWindow* EventProperty::window (const ::GdkEventProperty* obj);
GI_INLINE_DECL Gdk::Window window_ () const noexcept;

// gint8 EventProperty::send_event (const ::GdkEventProperty* obj);
// gint8 EventProperty::send_event (const ::GdkEventProperty* obj);
GI_INLINE_DECL gint8 send_event_ () const noexcept;

//  EventProperty::send_event (::GdkEventProperty* obj, gint8 _value);
// void EventProperty::send_event (::GdkEventProperty* obj, gint8 _value);
GI_INLINE_DECL void send_event_ (gint8 _value) noexcept;

// guint32 EventProperty::time (const ::GdkEventProperty* obj);
// guint32 EventProperty::time (const ::GdkEventProperty* obj);
GI_INLINE_DECL guint32 time_ () const noexcept;

//  EventProperty::time (::GdkEventProperty* obj, guint32 _value);
// void EventProperty::time (::GdkEventProperty* obj, guint32 _value);
GI_INLINE_DECL void time_ (guint32 _value) noexcept;

// ::GdkPropertyState EventProperty::state (const ::GdkEventProperty* obj);
// ::GdkPropertyState EventProperty::state (const ::GdkEventProperty* obj);
GI_INLINE_DECL Gdk::PropertyState state_ () const noexcept;

//  EventProperty::state (::GdkEventProperty* obj, ::GdkPropertyState _value);
// void EventProperty::state (::GdkEventProperty* obj, ::GdkPropertyState _value);
GI_INLINE_DECL void state_ (Gdk::PropertyState _value) noexcept;

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/eventproperty_extra_def.hpp>)
#include <gdk/eventproperty_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/eventproperty_extra.hpp>)
#include <gdk/eventproperty_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class EventProperty : public GI_GDK_EVENTPROPERTY_BASE
{ typedef GI_GDK_EVENTPROPERTY_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkEventProperty>
{ typedef Gdk::EventProperty type; }; 

} // namespace repository

} // namespace gi

#endif
