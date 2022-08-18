// AUTO-GENERATED

#ifndef _GI_GDK_EVENTSETTING_HPP_
#define _GI_GDK_EVENTSETTING_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class Window;

class EventSetting;

namespace base {


#define GI_GDK_EVENTSETTING_BASE base::EventSettingBase
class EventSettingBase : public gi::detail::CBoxedWrapper<EventSettingBase, ::GdkEventSetting>
{
typedef gi::detail::CBoxedWrapper<EventSettingBase, ::GdkEventSetting> super_type;
public:

EventSettingBase (std::nullptr_t = nullptr) : super_type() {}

// ::GdkEventType EventSetting::type (const ::GdkEventSetting* obj);
// ::GdkEventType EventSetting::type (const ::GdkEventSetting* obj);
GI_INLINE_DECL Gdk::EventType type_ () const noexcept;

//  EventSetting::type (::GdkEventSetting* obj, ::GdkEventType _value);
// void EventSetting::type (::GdkEventSetting* obj, ::GdkEventType _value);
GI_INLINE_DECL void type_ (Gdk::EventType _value) noexcept;

// ::GdkWindow* EventSetting::window (const ::GdkEventSetting* obj);
// ::GdkWindow* EventSetting::window (const ::GdkEventSetting* obj);
GI_INLINE_DECL Gdk::Window window_ () const noexcept;

// gint8 EventSetting::send_event (const ::GdkEventSetting* obj);
// gint8 EventSetting::send_event (const ::GdkEventSetting* obj);
GI_INLINE_DECL gint8 send_event_ () const noexcept;

//  EventSetting::send_event (::GdkEventSetting* obj, gint8 _value);
// void EventSetting::send_event (::GdkEventSetting* obj, gint8 _value);
GI_INLINE_DECL void send_event_ (gint8 _value) noexcept;

// ::GdkSettingAction EventSetting::action (const ::GdkEventSetting* obj);
// ::GdkSettingAction EventSetting::action (const ::GdkEventSetting* obj);
GI_INLINE_DECL Gdk::SettingAction action_ () const noexcept;

//  EventSetting::action (::GdkEventSetting* obj, ::GdkSettingAction _value);
// void EventSetting::action (::GdkEventSetting* obj, ::GdkSettingAction _value);
GI_INLINE_DECL void action_ (Gdk::SettingAction _value) noexcept;

// char* EventSetting::name (const ::GdkEventSetting* obj);
// char* EventSetting::name (const ::GdkEventSetting* obj);
GI_INLINE_DECL std::string name_ () const noexcept;

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/eventsetting_extra_def.hpp>)
#include <gdk/eventsetting_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/eventsetting_extra.hpp>)
#include <gdk/eventsetting_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class EventSetting : public GI_GDK_EVENTSETTING_BASE
{ typedef GI_GDK_EVENTSETTING_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkEventSetting>
{ typedef Gdk::EventSetting type; }; 

} // namespace repository

} // namespace gi

#endif
