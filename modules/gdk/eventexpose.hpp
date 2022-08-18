// AUTO-GENERATED

#ifndef _GI_GDK_EVENTEXPOSE_HPP_
#define _GI_GDK_EVENTEXPOSE_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class Window;

class EventExpose;

namespace base {


#define GI_GDK_EVENTEXPOSE_BASE base::EventExposeBase
class EventExposeBase : public gi::detail::CBoxedWrapper<EventExposeBase, ::GdkEventExpose>
{
typedef gi::detail::CBoxedWrapper<EventExposeBase, ::GdkEventExpose> super_type;
public:

EventExposeBase (std::nullptr_t = nullptr) : super_type() {}

// ::GdkEventType EventExpose::type (const ::GdkEventExpose* obj);
// ::GdkEventType EventExpose::type (const ::GdkEventExpose* obj);
GI_INLINE_DECL Gdk::EventType type_ () const noexcept;

//  EventExpose::type (::GdkEventExpose* obj, ::GdkEventType _value);
// void EventExpose::type (::GdkEventExpose* obj, ::GdkEventType _value);
GI_INLINE_DECL void type_ (Gdk::EventType _value) noexcept;

// ::GdkWindow* EventExpose::window (const ::GdkEventExpose* obj);
// ::GdkWindow* EventExpose::window (const ::GdkEventExpose* obj);
GI_INLINE_DECL Gdk::Window window_ () const noexcept;

// gint8 EventExpose::send_event (const ::GdkEventExpose* obj);
// gint8 EventExpose::send_event (const ::GdkEventExpose* obj);
GI_INLINE_DECL gint8 send_event_ () const noexcept;

//  EventExpose::send_event (::GdkEventExpose* obj, gint8 _value);
// void EventExpose::send_event (::GdkEventExpose* obj, gint8 _value);
GI_INLINE_DECL void send_event_ (gint8 _value) noexcept;

// ::cairo_region_t* EventExpose::region (const ::GdkEventExpose* obj);
// ::cairo_region_t* EventExpose::region (const ::GdkEventExpose* obj);
GI_INLINE_DECL cairo::Region region_ () const noexcept;

// gint EventExpose::count (const ::GdkEventExpose* obj);
// gint EventExpose::count (const ::GdkEventExpose* obj);
GI_INLINE_DECL gint count_ () const noexcept;

//  EventExpose::count (::GdkEventExpose* obj, gint _value);
// void EventExpose::count (::GdkEventExpose* obj, gint _value);
GI_INLINE_DECL void count_ (gint _value) noexcept;

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/eventexpose_extra_def.hpp>)
#include <gdk/eventexpose_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/eventexpose_extra.hpp>)
#include <gdk/eventexpose_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class EventExpose : public GI_GDK_EVENTEXPOSE_BASE
{ typedef GI_GDK_EVENTEXPOSE_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkEventExpose>
{ typedef Gdk::EventExpose type; }; 

} // namespace repository

} // namespace gi

#endif
