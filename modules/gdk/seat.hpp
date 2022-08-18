// AUTO-GENERATED

#ifndef _GI_GDK_SEAT_HPP_
#define _GI_GDK_SEAT_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class Cursor;
class Device;
class DeviceTool;
class Display;
class Window;

class Seat;

namespace base {


#define GI_GDK_SEAT_BASE base::SeatBase
class SeatBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GdkSeat BaseObjectType;

SeatBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_seat_get_type(); } 

// GdkSeatCapabilities gdk_seat_get_capabilities (GdkSeat* seat);
// ::GdkSeatCapabilities gdk_seat_get_capabilities (::GdkSeat* seat);
GI_INLINE_DECL Gdk::SeatCapabilities get_capabilities () noexcept;

// GdkDisplay* gdk_seat_get_display (GdkSeat* seat);
// ::GdkDisplay* gdk_seat_get_display (::GdkSeat* seat);
GI_INLINE_DECL Gdk::Display get_display () noexcept;

// GdkDevice* gdk_seat_get_keyboard (GdkSeat* seat);
// ::GdkDevice* gdk_seat_get_keyboard (::GdkSeat* seat);
GI_INLINE_DECL Gdk::Device get_keyboard () noexcept;

// GdkDevice* gdk_seat_get_pointer (GdkSeat* seat);
// ::GdkDevice* gdk_seat_get_pointer (::GdkSeat* seat);
GI_INLINE_DECL Gdk::Device get_pointer () noexcept;

// GList* gdk_seat_get_slaves (GdkSeat* seat, GdkSeatCapabilities capabilities);
// ::GList* gdk_seat_get_slaves (::GdkSeat* seat, ::GdkSeatCapabilities capabilities);
GI_INLINE_DECL std::vector<Gdk::Device> get_slaves (Gdk::SeatCapabilities capabilities) noexcept;

// GdkGrabStatus gdk_seat_grab (GdkSeat* seat, GdkWindow* window, GdkSeatCapabilities capabilities, gboolean owner_events, GdkCursor* cursor, const GdkEvent* event, GdkSeatGrabPrepareFunc prepare_func, gpointer prepare_func_data);
// ::GdkGrabStatus gdk_seat_grab (::GdkSeat* seat, ::GdkWindow* window, ::GdkSeatCapabilities capabilities, gboolean owner_events, ::GdkCursor* cursor, const  event, Gdk::SeatGrabPrepareFunc::cfunction_type prepare_func, void* prepare_func_data);
// SKIP; event type  not supported

// void gdk_seat_ungrab (GdkSeat* seat);
// void gdk_seat_ungrab (::GdkSeat* seat);
GI_INLINE_DECL void ungrab () noexcept;

gi::property_proxy<Gdk::Display, base::SeatBase> property_display()
{ return gi::property_proxy<Gdk::Display, base::SeatBase> (*this, "display"); }
const gi::property_proxy<Gdk::Display, base::SeatBase> property_display() const
{ return gi::property_proxy<Gdk::Display, base::SeatBase> (*this, "display"); }

// signal device-added
gi::signal_proxy<void(Gdk::Seat, Gdk::Device device)> signal_device_added()
{ return gi::signal_proxy<void(Gdk::Seat, Gdk::Device device)> (*this, "device-added"); }

// signal device-removed
gi::signal_proxy<void(Gdk::Seat, Gdk::Device device)> signal_device_removed()
{ return gi::signal_proxy<void(Gdk::Seat, Gdk::Device device)> (*this, "device-removed"); }

// signal tool-added
gi::signal_proxy<void(Gdk::Seat, Gdk::DeviceTool tool)> signal_tool_added()
{ return gi::signal_proxy<void(Gdk::Seat, Gdk::DeviceTool tool)> (*this, "tool-added"); }

// signal tool-removed
gi::signal_proxy<void(Gdk::Seat, Gdk::DeviceTool tool)> signal_tool_removed()
{ return gi::signal_proxy<void(Gdk::Seat, Gdk::DeviceTool tool)> (*this, "tool-removed"); }

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/seat_extra_def.hpp>)
#include <gdk/seat_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/seat_extra.hpp>)
#include <gdk/seat_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class Seat : public GI_GDK_SEAT_BASE
{ typedef GI_GDK_SEAT_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkSeat>
{ typedef Gdk::Seat type; }; 

} // namespace repository

} // namespace gi

#endif
