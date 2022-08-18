// AUTO-GENERATED

#ifndef _GI_GDK_EVENTBUTTON_HPP_
#define _GI_GDK_EVENTBUTTON_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class Device;
class Window;

class EventButton;

namespace base {


#define GI_GDK_EVENTBUTTON_BASE base::EventButtonBase
class EventButtonBase : public gi::detail::CBoxedWrapper<EventButtonBase, ::GdkEventButton>
{
typedef gi::detail::CBoxedWrapper<EventButtonBase, ::GdkEventButton> super_type;
public:

EventButtonBase (std::nullptr_t = nullptr) : super_type() {}

// ::GdkEventType EventButton::type (const ::GdkEventButton* obj);
// ::GdkEventType EventButton::type (const ::GdkEventButton* obj);
GI_INLINE_DECL Gdk::EventType type_ () const noexcept;

//  EventButton::type (::GdkEventButton* obj, ::GdkEventType _value);
// void EventButton::type (::GdkEventButton* obj, ::GdkEventType _value);
GI_INLINE_DECL void type_ (Gdk::EventType _value) noexcept;

// ::GdkWindow* EventButton::window (const ::GdkEventButton* obj);
// ::GdkWindow* EventButton::window (const ::GdkEventButton* obj);
GI_INLINE_DECL Gdk::Window window_ () const noexcept;

// gint8 EventButton::send_event (const ::GdkEventButton* obj);
// gint8 EventButton::send_event (const ::GdkEventButton* obj);
GI_INLINE_DECL gint8 send_event_ () const noexcept;

//  EventButton::send_event (::GdkEventButton* obj, gint8 _value);
// void EventButton::send_event (::GdkEventButton* obj, gint8 _value);
GI_INLINE_DECL void send_event_ (gint8 _value) noexcept;

// guint32 EventButton::time (const ::GdkEventButton* obj);
// guint32 EventButton::time (const ::GdkEventButton* obj);
GI_INLINE_DECL guint32 time_ () const noexcept;

//  EventButton::time (::GdkEventButton* obj, guint32 _value);
// void EventButton::time (::GdkEventButton* obj, guint32 _value);
GI_INLINE_DECL void time_ (guint32 _value) noexcept;

// gdouble EventButton::x (const ::GdkEventButton* obj);
// gdouble EventButton::x (const ::GdkEventButton* obj);
GI_INLINE_DECL gdouble x_ () const noexcept;

//  EventButton::x (::GdkEventButton* obj, gdouble _value);
// void EventButton::x (::GdkEventButton* obj, gdouble _value);
GI_INLINE_DECL void x_ (gdouble _value) noexcept;

// gdouble EventButton::y (const ::GdkEventButton* obj);
// gdouble EventButton::y (const ::GdkEventButton* obj);
GI_INLINE_DECL gdouble y_ () const noexcept;

//  EventButton::y (::GdkEventButton* obj, gdouble _value);
// void EventButton::y (::GdkEventButton* obj, gdouble _value);
GI_INLINE_DECL void y_ (gdouble _value) noexcept;

// ::GdkModifierType EventButton::state (const ::GdkEventButton* obj);
// ::GdkModifierType EventButton::state (const ::GdkEventButton* obj);
GI_INLINE_DECL Gdk::ModifierType state_ () const noexcept;

//  EventButton::state (::GdkEventButton* obj, ::GdkModifierType _value);
// void EventButton::state (::GdkEventButton* obj, ::GdkModifierType _value);
GI_INLINE_DECL void state_ (Gdk::ModifierType _value) noexcept;

// guint EventButton::button (const ::GdkEventButton* obj);
// guint EventButton::button (const ::GdkEventButton* obj);
GI_INLINE_DECL guint button_ () const noexcept;

//  EventButton::button (::GdkEventButton* obj, guint _value);
// void EventButton::button (::GdkEventButton* obj, guint _value);
GI_INLINE_DECL void button_ (guint _value) noexcept;

// ::GdkDevice* EventButton::device (const ::GdkEventButton* obj);
// ::GdkDevice* EventButton::device (const ::GdkEventButton* obj);
GI_INLINE_DECL Gdk::Device device_ () const noexcept;

// gdouble EventButton::x_root (const ::GdkEventButton* obj);
// gdouble EventButton::x_root (const ::GdkEventButton* obj);
GI_INLINE_DECL gdouble x_root_ () const noexcept;

//  EventButton::x_root (::GdkEventButton* obj, gdouble _value);
// void EventButton::x_root (::GdkEventButton* obj, gdouble _value);
GI_INLINE_DECL void x_root_ (gdouble _value) noexcept;

// gdouble EventButton::y_root (const ::GdkEventButton* obj);
// gdouble EventButton::y_root (const ::GdkEventButton* obj);
GI_INLINE_DECL gdouble y_root_ () const noexcept;

//  EventButton::y_root (::GdkEventButton* obj, gdouble _value);
// void EventButton::y_root (::GdkEventButton* obj, gdouble _value);
GI_INLINE_DECL void y_root_ (gdouble _value) noexcept;

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/eventbutton_extra_def.hpp>)
#include <gdk/eventbutton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/eventbutton_extra.hpp>)
#include <gdk/eventbutton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class EventButton : public GI_GDK_EVENTBUTTON_BASE
{ typedef GI_GDK_EVENTBUTTON_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkEventButton>
{ typedef Gdk::EventButton type; }; 

} // namespace repository

} // namespace gi

#endif
