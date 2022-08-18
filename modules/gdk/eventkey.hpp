// AUTO-GENERATED

#ifndef _GI_GDK_EVENTKEY_HPP_
#define _GI_GDK_EVENTKEY_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class Window;

class EventKey;

namespace base {


#define GI_GDK_EVENTKEY_BASE base::EventKeyBase
class EventKeyBase : public gi::detail::CBoxedWrapper<EventKeyBase, ::GdkEventKey>
{
typedef gi::detail::CBoxedWrapper<EventKeyBase, ::GdkEventKey> super_type;
public:

EventKeyBase (std::nullptr_t = nullptr) : super_type() {}

// ::GdkEventType EventKey::type (const ::GdkEventKey* obj);
// ::GdkEventType EventKey::type (const ::GdkEventKey* obj);
GI_INLINE_DECL Gdk::EventType type_ () const noexcept;

//  EventKey::type (::GdkEventKey* obj, ::GdkEventType _value);
// void EventKey::type (::GdkEventKey* obj, ::GdkEventType _value);
GI_INLINE_DECL void type_ (Gdk::EventType _value) noexcept;

// ::GdkWindow* EventKey::window (const ::GdkEventKey* obj);
// ::GdkWindow* EventKey::window (const ::GdkEventKey* obj);
GI_INLINE_DECL Gdk::Window window_ () const noexcept;

// gint8 EventKey::send_event (const ::GdkEventKey* obj);
// gint8 EventKey::send_event (const ::GdkEventKey* obj);
GI_INLINE_DECL gint8 send_event_ () const noexcept;

//  EventKey::send_event (::GdkEventKey* obj, gint8 _value);
// void EventKey::send_event (::GdkEventKey* obj, gint8 _value);
GI_INLINE_DECL void send_event_ (gint8 _value) noexcept;

// guint32 EventKey::time (const ::GdkEventKey* obj);
// guint32 EventKey::time (const ::GdkEventKey* obj);
GI_INLINE_DECL guint32 time_ () const noexcept;

//  EventKey::time (::GdkEventKey* obj, guint32 _value);
// void EventKey::time (::GdkEventKey* obj, guint32 _value);
GI_INLINE_DECL void time_ (guint32 _value) noexcept;

// ::GdkModifierType EventKey::state (const ::GdkEventKey* obj);
// ::GdkModifierType EventKey::state (const ::GdkEventKey* obj);
GI_INLINE_DECL Gdk::ModifierType state_ () const noexcept;

//  EventKey::state (::GdkEventKey* obj, ::GdkModifierType _value);
// void EventKey::state (::GdkEventKey* obj, ::GdkModifierType _value);
GI_INLINE_DECL void state_ (Gdk::ModifierType _value) noexcept;

// guint EventKey::keyval (const ::GdkEventKey* obj);
// guint EventKey::keyval (const ::GdkEventKey* obj);
GI_INLINE_DECL guint keyval_ () const noexcept;

//  EventKey::keyval (::GdkEventKey* obj, guint _value);
// void EventKey::keyval (::GdkEventKey* obj, guint _value);
GI_INLINE_DECL void keyval_ (guint _value) noexcept;

// gint EventKey::length (const ::GdkEventKey* obj);
// gint EventKey::length (const ::GdkEventKey* obj);
GI_INLINE_DECL gint length_ () const noexcept;

//  EventKey::length (::GdkEventKey* obj, gint _value);
// void EventKey::length (::GdkEventKey* obj, gint _value);
GI_INLINE_DECL void length_ (gint _value) noexcept;

// char* EventKey::string (const ::GdkEventKey* obj);
// char* EventKey::string (const ::GdkEventKey* obj);
GI_INLINE_DECL std::string string_ () const noexcept;

// guint16 EventKey::hardware_keycode (const ::GdkEventKey* obj);
// guint16 EventKey::hardware_keycode (const ::GdkEventKey* obj);
GI_INLINE_DECL guint16 hardware_keycode_ () const noexcept;

//  EventKey::hardware_keycode (::GdkEventKey* obj, guint16 _value);
// void EventKey::hardware_keycode (::GdkEventKey* obj, guint16 _value);
GI_INLINE_DECL void hardware_keycode_ (guint16 _value) noexcept;

// guint8 EventKey::group (const ::GdkEventKey* obj);
// guint8 EventKey::group (const ::GdkEventKey* obj);
GI_INLINE_DECL guint8 group_ () const noexcept;

//  EventKey::group (::GdkEventKey* obj, guint8 _value);
// void EventKey::group (::GdkEventKey* obj, guint8 _value);
GI_INLINE_DECL void group_ (guint8 _value) noexcept;

// guint EventKey::is_modifier (const ::GdkEventKey* obj);
// guint EventKey::is_modifier (const ::GdkEventKey* obj);
GI_INLINE_DECL guint is_modifier_ () const noexcept;

//  EventKey::is_modifier (::GdkEventKey* obj, guint _value);
// void EventKey::is_modifier (::GdkEventKey* obj, guint _value);
GI_INLINE_DECL void is_modifier_ (guint _value) noexcept;

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/eventkey_extra_def.hpp>)
#include <gdk/eventkey_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/eventkey_extra.hpp>)
#include <gdk/eventkey_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class EventKey : public GI_GDK_EVENTKEY_BASE
{ typedef GI_GDK_EVENTKEY_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkEventKey>
{ typedef Gdk::EventKey type; }; 

} // namespace repository

} // namespace gi

#endif
