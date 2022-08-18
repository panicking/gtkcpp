// AUTO-GENERATED

#ifndef _GI_GDK_DEVICE_HPP_
#define _GI_GDK_DEVICE_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class Cursor;
class DeviceManager;
class DeviceTool;
class Display;
class Screen;
class Seat;
class TimeCoord;
class Window;

class Device;

namespace base {


#define GI_GDK_DEVICE_BASE base::DeviceBase
class DeviceBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GdkDevice BaseObjectType;

DeviceBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_device_get_type(); } 

// void gdk_device_free_history (GdkTimeCoord** events, gint n_events);
// void gdk_device_free_history (::GdkTimeCoord** events, gint n_events);
static GI_INLINE_DECL void free_history (Gdk::TimeCoord * events, gint n_events) noexcept;

// gboolean gdk_device_grab_info_libgtk_only (GdkDisplay* display, GdkDevice* device, GdkWindow** grab_window, gboolean* owner_events);
// gboolean gdk_device_grab_info_libgtk_only (::GdkDisplay* display, ::GdkDevice* device, ::GdkWindow** grab_window, gboolean* owner_events);
// IGNORE; deprecated

// GdkDevice* gdk_device_get_associated_device (GdkDevice* device);
// ::GdkDevice* gdk_device_get_associated_device (::GdkDevice* device);
GI_INLINE_DECL Gdk::Device get_associated_device () noexcept;

// GdkAxisFlags gdk_device_get_axes (GdkDevice* device);
// ::GdkAxisFlags gdk_device_get_axes (::GdkDevice* device);
GI_INLINE_DECL Gdk::AxisFlags get_axes () noexcept;

// gboolean gdk_device_get_axis (GdkDevice* device, GdkAxisUse use, gdouble* value);
// gboolean gdk_device_get_axis (::GdkDevice* device, ::GdkAxisUse use, gdouble* value);
// IGNORE; not introspectable, inconsistent array info

// GdkAxisUse gdk_device_get_axis_use (GdkDevice* device, guint index_);
// ::GdkAxisUse gdk_device_get_axis_use (::GdkDevice* device, guint index_);
GI_INLINE_DECL Gdk::AxisUse get_axis_use (guint index_) noexcept;

// gboolean gdk_device_get_axis_value (GdkDevice* device, GdkAtom axis_label, gdouble* value);
// gboolean gdk_device_get_axis_value (::GdkDevice* device,  axis_label, gdouble* value);
// IGNORE; not introspectable, inconsistent array info

// GdkDeviceType gdk_device_get_device_type (GdkDevice* device);
// ::GdkDeviceType gdk_device_get_device_type (::GdkDevice* device);
GI_INLINE_DECL Gdk::DeviceType get_device_type () noexcept;

// GdkDisplay* gdk_device_get_display (GdkDevice* device);
// ::GdkDisplay* gdk_device_get_display (::GdkDevice* device);
GI_INLINE_DECL Gdk::Display get_display () noexcept;

// gboolean gdk_device_get_has_cursor (GdkDevice* device);
// gboolean gdk_device_get_has_cursor (::GdkDevice* device);
GI_INLINE_DECL bool get_has_cursor () noexcept;

// gboolean gdk_device_get_history (GdkDevice* device, GdkWindow* window, guint32 start, guint32 stop, GdkTimeCoord*** events, gint* n_events);
// gboolean gdk_device_get_history (::GdkDevice* device, ::GdkWindow* window, guint32 start, guint32 stop, ::GdkTimeCoord*** events, gint* n_events);
GI_INLINE_DECL bool get_history (Gdk::Window window, guint32 start, guint32 stop, std::vector<Gdk::TimeCoord> & events) noexcept;

// gboolean gdk_device_get_key (GdkDevice* device, guint index_, guint* keyval, GdkModifierType* modifiers);
// gboolean gdk_device_get_key (::GdkDevice* device, guint index_, guint* keyval, ::GdkModifierType* modifiers);
GI_INLINE_DECL bool get_key (guint index_, guint & keyval, Gdk::ModifierType & modifiers) noexcept;
GI_INLINE_DECL std::tuple<bool, guint, Gdk::ModifierType> get_key (guint index_) noexcept;

// GdkWindow* gdk_device_get_last_event_window (GdkDevice* device);
// ::GdkWindow* gdk_device_get_last_event_window (::GdkDevice* device);
GI_INLINE_DECL Gdk::Window get_last_event_window () noexcept;

// GdkInputMode gdk_device_get_mode (GdkDevice* device);
// ::GdkInputMode gdk_device_get_mode (::GdkDevice* device);
GI_INLINE_DECL Gdk::InputMode get_mode () noexcept;

// gint gdk_device_get_n_axes (GdkDevice* device);
// gint gdk_device_get_n_axes (::GdkDevice* device);
GI_INLINE_DECL gint get_n_axes () noexcept;

// gint gdk_device_get_n_keys (GdkDevice* device);
// gint gdk_device_get_n_keys (::GdkDevice* device);
GI_INLINE_DECL gint get_n_keys () noexcept;

// const gchar* gdk_device_get_name (GdkDevice* device);
// const char* gdk_device_get_name (::GdkDevice* device);
GI_INLINE_DECL std::string get_name () noexcept;

// void gdk_device_get_position (GdkDevice* device, GdkScreen** screen, gint* x, gint* y);
// void gdk_device_get_position (::GdkDevice* device, ::GdkScreen** screen, gint* x, gint* y);
GI_INLINE_DECL void get_position (Gdk::Screen * screen = nullptr, gint * x = nullptr, gint * y = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Gdk::Screen, gint, gint> get_position () noexcept;

// void gdk_device_get_position_double (GdkDevice* device, GdkScreen** screen, gdouble* x, gdouble* y);
// void gdk_device_get_position_double (::GdkDevice* device, ::GdkScreen** screen, gdouble* x, gdouble* y);
GI_INLINE_DECL void get_position_double (Gdk::Screen * screen = nullptr, gdouble * x = nullptr, gdouble * y = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Gdk::Screen, gdouble, gdouble> get_position_double () noexcept;

// const gchar* gdk_device_get_product_id (GdkDevice* device);
// const char* gdk_device_get_product_id (::GdkDevice* device);
GI_INLINE_DECL std::string get_product_id () noexcept;

// GdkSeat* gdk_device_get_seat (GdkDevice* device);
// ::GdkSeat* gdk_device_get_seat (::GdkDevice* device);
GI_INLINE_DECL Gdk::Seat get_seat () noexcept;

// GdkInputSource gdk_device_get_source (GdkDevice* device);
// ::GdkInputSource gdk_device_get_source (::GdkDevice* device);
GI_INLINE_DECL Gdk::InputSource get_source () noexcept;

// void gdk_device_get_state (GdkDevice* device, GdkWindow* window, GdkModifierType* mask);
// void gdk_device_get_state (::GdkDevice* device, ::GdkWindow* window, ::GdkModifierType* mask);
// IGNORE; not introspectable, inconsistent array info

// const gchar* gdk_device_get_vendor_id (GdkDevice* device);
// const char* gdk_device_get_vendor_id (::GdkDevice* device);
GI_INLINE_DECL std::string get_vendor_id () noexcept;

// GdkWindow* gdk_device_get_window_at_position (GdkDevice* device, gint* win_x, gint* win_y);
// ::GdkWindow* gdk_device_get_window_at_position (::GdkDevice* device, gint* win_x, gint* win_y);
GI_INLINE_DECL Gdk::Window get_window_at_position (gint * win_x = nullptr, gint * win_y = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Gdk::Window, gint, gint> get_window_at_position () noexcept;

// GdkWindow* gdk_device_get_window_at_position_double (GdkDevice* device, gdouble* win_x, gdouble* win_y);
// ::GdkWindow* gdk_device_get_window_at_position_double (::GdkDevice* device, gdouble* win_x, gdouble* win_y);
GI_INLINE_DECL Gdk::Window get_window_at_position_double (gdouble * win_x = nullptr, gdouble * win_y = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Gdk::Window, gdouble, gdouble> get_window_at_position_double () noexcept;

// GdkGrabStatus gdk_device_grab (GdkDevice* device, GdkWindow* window, GdkGrabOwnership grab_ownership, gboolean owner_events, GdkEventMask event_mask, GdkCursor* cursor, guint32 time_);
// ::GdkGrabStatus gdk_device_grab (::GdkDevice* device, ::GdkWindow* window, ::GdkGrabOwnership grab_ownership, gboolean owner_events, ::GdkEventMask event_mask, ::GdkCursor* cursor, guint32 time_);
// IGNORE; deprecated

//  gdk_device_list_axes (GdkDevice* device);
//  gdk_device_list_axes (::GdkDevice* device);
// SKIP; container element not supported

// GList* gdk_device_list_slave_devices (GdkDevice* device);
// ::GList* gdk_device_list_slave_devices (::GdkDevice* device);
GI_INLINE_DECL std::vector<Gdk::Device> list_slave_devices () noexcept;

// void gdk_device_set_axis_use (GdkDevice* device, guint index_, GdkAxisUse use);
// void gdk_device_set_axis_use (::GdkDevice* device, guint index_, ::GdkAxisUse use);
GI_INLINE_DECL void set_axis_use (guint index_, Gdk::AxisUse use) noexcept;

// void gdk_device_set_key (GdkDevice* device, guint index_, guint keyval, GdkModifierType modifiers);
// void gdk_device_set_key (::GdkDevice* device, guint index_, guint keyval, ::GdkModifierType modifiers);
GI_INLINE_DECL void set_key (guint index_, guint keyval, Gdk::ModifierType modifiers) noexcept;

// gboolean gdk_device_set_mode (GdkDevice* device, GdkInputMode mode);
// gboolean gdk_device_set_mode (::GdkDevice* device, ::GdkInputMode mode);
GI_INLINE_DECL bool set_mode (Gdk::InputMode mode) noexcept;

// void gdk_device_ungrab (GdkDevice* device, guint32 time_);
// void gdk_device_ungrab (::GdkDevice* device, guint32 time_);
// IGNORE; deprecated

// void gdk_device_warp (GdkDevice* device, GdkScreen* screen, gint x, gint y);
// void gdk_device_warp (::GdkDevice* device, ::GdkScreen* screen, gint x, gint y);
GI_INLINE_DECL void warp (Gdk::Screen screen, gint x, gint y) noexcept;

gi::property_proxy<Gdk::Device, base::DeviceBase> property_associated_device()
{ return gi::property_proxy<Gdk::Device, base::DeviceBase> (*this, "associated-device"); }
const gi::property_proxy<Gdk::Device, base::DeviceBase> property_associated_device() const
{ return gi::property_proxy<Gdk::Device, base::DeviceBase> (*this, "associated-device"); }

gi::property_proxy<Gdk::AxisFlags, base::DeviceBase> property_axes()
{ return gi::property_proxy<Gdk::AxisFlags, base::DeviceBase> (*this, "axes"); }
const gi::property_proxy<Gdk::AxisFlags, base::DeviceBase> property_axes() const
{ return gi::property_proxy<Gdk::AxisFlags, base::DeviceBase> (*this, "axes"); }

gi::property_proxy<Gdk::DeviceManager, base::DeviceBase> property_device_manager()
{ return gi::property_proxy<Gdk::DeviceManager, base::DeviceBase> (*this, "device-manager"); }
const gi::property_proxy<Gdk::DeviceManager, base::DeviceBase> property_device_manager() const
{ return gi::property_proxy<Gdk::DeviceManager, base::DeviceBase> (*this, "device-manager"); }

gi::property_proxy<Gdk::Display, base::DeviceBase> property_display()
{ return gi::property_proxy<Gdk::Display, base::DeviceBase> (*this, "display"); }
const gi::property_proxy<Gdk::Display, base::DeviceBase> property_display() const
{ return gi::property_proxy<Gdk::Display, base::DeviceBase> (*this, "display"); }

gi::property_proxy<bool, base::DeviceBase> property_has_cursor()
{ return gi::property_proxy<bool, base::DeviceBase> (*this, "has-cursor"); }
const gi::property_proxy<bool, base::DeviceBase> property_has_cursor() const
{ return gi::property_proxy<bool, base::DeviceBase> (*this, "has-cursor"); }

gi::property_proxy<Gdk::InputMode, base::DeviceBase> property_input_mode()
{ return gi::property_proxy<Gdk::InputMode, base::DeviceBase> (*this, "input-mode"); }
const gi::property_proxy<Gdk::InputMode, base::DeviceBase> property_input_mode() const
{ return gi::property_proxy<Gdk::InputMode, base::DeviceBase> (*this, "input-mode"); }

gi::property_proxy<Gdk::InputSource, base::DeviceBase> property_input_source()
{ return gi::property_proxy<Gdk::InputSource, base::DeviceBase> (*this, "input-source"); }
const gi::property_proxy<Gdk::InputSource, base::DeviceBase> property_input_source() const
{ return gi::property_proxy<Gdk::InputSource, base::DeviceBase> (*this, "input-source"); }

gi::property_proxy<guint, base::DeviceBase> property_n_axes()
{ return gi::property_proxy<guint, base::DeviceBase> (*this, "n-axes"); }
const gi::property_proxy<guint, base::DeviceBase> property_n_axes() const
{ return gi::property_proxy<guint, base::DeviceBase> (*this, "n-axes"); }

gi::property_proxy<std::string, base::DeviceBase> property_name()
{ return gi::property_proxy<std::string, base::DeviceBase> (*this, "name"); }
const gi::property_proxy<std::string, base::DeviceBase> property_name() const
{ return gi::property_proxy<std::string, base::DeviceBase> (*this, "name"); }

gi::property_proxy<guint, base::DeviceBase> property_num_touches()
{ return gi::property_proxy<guint, base::DeviceBase> (*this, "num-touches"); }
const gi::property_proxy<guint, base::DeviceBase> property_num_touches() const
{ return gi::property_proxy<guint, base::DeviceBase> (*this, "num-touches"); }

gi::property_proxy<std::string, base::DeviceBase> property_product_id()
{ return gi::property_proxy<std::string, base::DeviceBase> (*this, "product-id"); }
const gi::property_proxy<std::string, base::DeviceBase> property_product_id() const
{ return gi::property_proxy<std::string, base::DeviceBase> (*this, "product-id"); }

gi::property_proxy<Gdk::Seat, base::DeviceBase> property_seat()
{ return gi::property_proxy<Gdk::Seat, base::DeviceBase> (*this, "seat"); }
const gi::property_proxy<Gdk::Seat, base::DeviceBase> property_seat() const
{ return gi::property_proxy<Gdk::Seat, base::DeviceBase> (*this, "seat"); }

gi::property_proxy<Gdk::DeviceTool, base::DeviceBase> property_tool()
{ return gi::property_proxy<Gdk::DeviceTool, base::DeviceBase> (*this, "tool"); }
const gi::property_proxy<Gdk::DeviceTool, base::DeviceBase> property_tool() const
{ return gi::property_proxy<Gdk::DeviceTool, base::DeviceBase> (*this, "tool"); }

gi::property_proxy<Gdk::DeviceType, base::DeviceBase> property_type()
{ return gi::property_proxy<Gdk::DeviceType, base::DeviceBase> (*this, "type"); }
const gi::property_proxy<Gdk::DeviceType, base::DeviceBase> property_type() const
{ return gi::property_proxy<Gdk::DeviceType, base::DeviceBase> (*this, "type"); }

gi::property_proxy<std::string, base::DeviceBase> property_vendor_id()
{ return gi::property_proxy<std::string, base::DeviceBase> (*this, "vendor-id"); }
const gi::property_proxy<std::string, base::DeviceBase> property_vendor_id() const
{ return gi::property_proxy<std::string, base::DeviceBase> (*this, "vendor-id"); }

// signal changed
gi::signal_proxy<void(Gdk::Device)> signal_changed()
{ return gi::signal_proxy<void(Gdk::Device)> (*this, "changed"); }

// signal tool-changed
gi::signal_proxy<void(Gdk::Device, Gdk::DeviceTool tool)> signal_tool_changed()
{ return gi::signal_proxy<void(Gdk::Device, Gdk::DeviceTool tool)> (*this, "tool-changed"); }

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/device_extra_def.hpp>)
#include <gdk/device_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/device_extra.hpp>)
#include <gdk/device_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class Device : public GI_GDK_DEVICE_BASE
{ typedef GI_GDK_DEVICE_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkDevice>
{ typedef Gdk::Device type; }; 

} // namespace repository

} // namespace gi

#endif
