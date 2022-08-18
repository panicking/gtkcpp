// AUTO-GENERATED

#ifndef _GI_GDK__ENUMS_HPP_
#define _GI_GDK__ENUMS_HPP_

namespace gi {

namespace repository {

namespace Gdk {

enum class AxisUse {
  IGNORE_ = GDK_AXIS_IGNORE,
  X_ = GDK_AXIS_X,
  Y_ = GDK_AXIS_Y,
  PRESSURE_ = GDK_AXIS_PRESSURE,
  XTILT_ = GDK_AXIS_XTILT,
  YTILT_ = GDK_AXIS_YTILT,
  WHEEL_ = GDK_AXIS_WHEEL,
  DISTANCE_ = GDK_AXIS_DISTANCE,
  ROTATION_ = GDK_AXIS_ROTATION,
  SLIDER_ = GDK_AXIS_SLIDER,
  LAST_ = GDK_AXIS_LAST,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::AxisUse>
{ typedef GdkAxisUse type; }; 
template<> struct declare_cpptype_of<GdkAxisUse>
{ typedef Gdk::AxisUse type; }; 

template<> struct declare_gtype_of<Gdk::AxisUse>
{ static GType get_type() { return gdk_axis_use_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class ByteOrder {
  LSB_FIRST_ = GDK_LSB_FIRST,
  MSB_FIRST_ = GDK_MSB_FIRST,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::ByteOrder>
{ typedef GdkByteOrder type; }; 
template<> struct declare_cpptype_of<GdkByteOrder>
{ typedef Gdk::ByteOrder type; }; 

template<> struct declare_gtype_of<Gdk::ByteOrder>
{ static GType get_type() { return gdk_byte_order_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class CrossingMode {
  NORMAL_ = GDK_CROSSING_NORMAL,
  GRAB_ = GDK_CROSSING_GRAB,
  UNGRAB_ = GDK_CROSSING_UNGRAB,
  GTK_GRAB_ = GDK_CROSSING_GTK_GRAB,
  GTK_UNGRAB_ = GDK_CROSSING_GTK_UNGRAB,
  STATE_CHANGED_ = GDK_CROSSING_STATE_CHANGED,
  TOUCH_BEGIN_ = GDK_CROSSING_TOUCH_BEGIN,
  TOUCH_END_ = GDK_CROSSING_TOUCH_END,
  DEVICE_SWITCH_ = GDK_CROSSING_DEVICE_SWITCH,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::CrossingMode>
{ typedef GdkCrossingMode type; }; 
template<> struct declare_cpptype_of<GdkCrossingMode>
{ typedef Gdk::CrossingMode type; }; 

template<> struct declare_gtype_of<Gdk::CrossingMode>
{ static GType get_type() { return gdk_crossing_mode_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class CursorType {
  X_CURSOR_ = GDK_X_CURSOR,
  ARROW_ = GDK_ARROW,
  BASED_ARROW_DOWN_ = GDK_BASED_ARROW_DOWN,
  BASED_ARROW_UP_ = GDK_BASED_ARROW_UP,
  BOAT_ = GDK_BOAT,
  BOGOSITY_ = GDK_BOGOSITY,
  BOTTOM_LEFT_CORNER_ = GDK_BOTTOM_LEFT_CORNER,
  BOTTOM_RIGHT_CORNER_ = GDK_BOTTOM_RIGHT_CORNER,
  BOTTOM_SIDE_ = GDK_BOTTOM_SIDE,
  BOTTOM_TEE_ = GDK_BOTTOM_TEE,
  BOX_SPIRAL_ = GDK_BOX_SPIRAL,
  CENTER_PTR_ = GDK_CENTER_PTR,
  CIRCLE_ = GDK_CIRCLE,
  CLOCK_ = GDK_CLOCK,
  COFFEE_MUG_ = GDK_COFFEE_MUG,
  CROSS_ = GDK_CROSS,
  CROSS_REVERSE_ = GDK_CROSS_REVERSE,
  CROSSHAIR_ = GDK_CROSSHAIR,
  DIAMOND_CROSS_ = GDK_DIAMOND_CROSS,
  DOT_ = GDK_DOT,
  DOTBOX_ = GDK_DOTBOX,
  DOUBLE_ARROW_ = GDK_DOUBLE_ARROW,
  DRAFT_LARGE_ = GDK_DRAFT_LARGE,
  DRAFT_SMALL_ = GDK_DRAFT_SMALL,
  DRAPED_BOX_ = GDK_DRAPED_BOX,
  EXCHANGE_ = GDK_EXCHANGE,
  FLEUR_ = GDK_FLEUR,
  GOBBLER_ = GDK_GOBBLER,
  GUMBY_ = GDK_GUMBY,
  HAND1_ = GDK_HAND1,
  HAND2_ = GDK_HAND2,
  HEART_ = GDK_HEART,
  ICON_ = GDK_ICON,
  IRON_CROSS_ = GDK_IRON_CROSS,
  LEFT_PTR_ = GDK_LEFT_PTR,
  LEFT_SIDE_ = GDK_LEFT_SIDE,
  LEFT_TEE_ = GDK_LEFT_TEE,
  LEFTBUTTON_ = GDK_LEFTBUTTON,
  LL_ANGLE_ = GDK_LL_ANGLE,
  LR_ANGLE_ = GDK_LR_ANGLE,
  MAN_ = GDK_MAN,
  MIDDLEBUTTON_ = GDK_MIDDLEBUTTON,
  MOUSE_ = GDK_MOUSE,
  PENCIL_ = GDK_PENCIL,
  PIRATE_ = GDK_PIRATE,
  PLUS_ = GDK_PLUS,
  QUESTION_ARROW_ = GDK_QUESTION_ARROW,
  RIGHT_PTR_ = GDK_RIGHT_PTR,
  RIGHT_SIDE_ = GDK_RIGHT_SIDE,
  RIGHT_TEE_ = GDK_RIGHT_TEE,
  RIGHTBUTTON_ = GDK_RIGHTBUTTON,
  RTL_LOGO_ = GDK_RTL_LOGO,
  SAILBOAT_ = GDK_SAILBOAT,
  SB_DOWN_ARROW_ = GDK_SB_DOWN_ARROW,
  SB_H_DOUBLE_ARROW_ = GDK_SB_H_DOUBLE_ARROW,
  SB_LEFT_ARROW_ = GDK_SB_LEFT_ARROW,
  SB_RIGHT_ARROW_ = GDK_SB_RIGHT_ARROW,
  SB_UP_ARROW_ = GDK_SB_UP_ARROW,
  SB_V_DOUBLE_ARROW_ = GDK_SB_V_DOUBLE_ARROW,
  SHUTTLE_ = GDK_SHUTTLE,
  SIZING_ = GDK_SIZING,
  SPIDER_ = GDK_SPIDER,
  SPRAYCAN_ = GDK_SPRAYCAN,
  STAR_ = GDK_STAR,
  TARGET_ = GDK_TARGET,
  TCROSS_ = GDK_TCROSS,
  TOP_LEFT_ARROW_ = GDK_TOP_LEFT_ARROW,
  TOP_LEFT_CORNER_ = GDK_TOP_LEFT_CORNER,
  TOP_RIGHT_CORNER_ = GDK_TOP_RIGHT_CORNER,
  TOP_SIDE_ = GDK_TOP_SIDE,
  TOP_TEE_ = GDK_TOP_TEE,
  TREK_ = GDK_TREK,
  UL_ANGLE_ = GDK_UL_ANGLE,
  UMBRELLA_ = GDK_UMBRELLA,
  UR_ANGLE_ = GDK_UR_ANGLE,
  WATCH_ = GDK_WATCH,
  XTERM_ = GDK_XTERM,
  LAST_CURSOR_ = GDK_LAST_CURSOR,
  BLANK_CURSOR_ = GDK_BLANK_CURSOR,
  CURSOR_IS_PIXMAP_ = GDK_CURSOR_IS_PIXMAP,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::CursorType>
{ typedef GdkCursorType type; }; 
template<> struct declare_cpptype_of<GdkCursorType>
{ typedef Gdk::CursorType type; }; 

template<> struct declare_gtype_of<Gdk::CursorType>
{ static GType get_type() { return gdk_cursor_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class DevicePadFeature {
  BUTTON_ = GDK_DEVICE_PAD_FEATURE_BUTTON,
  RING_ = GDK_DEVICE_PAD_FEATURE_RING,
  STRIP_ = GDK_DEVICE_PAD_FEATURE_STRIP,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::DevicePadFeature>
{ typedef GdkDevicePadFeature type; }; 
template<> struct declare_cpptype_of<GdkDevicePadFeature>
{ typedef Gdk::DevicePadFeature type; }; 

template<> struct declare_gtype_of<Gdk::DevicePadFeature>
{ static GType get_type() { return gdk_device_pad_feature_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class DeviceToolType {
  UNKNOWN_ = GDK_DEVICE_TOOL_TYPE_UNKNOWN,
  PEN_ = GDK_DEVICE_TOOL_TYPE_PEN,
  ERASER_ = GDK_DEVICE_TOOL_TYPE_ERASER,
  BRUSH_ = GDK_DEVICE_TOOL_TYPE_BRUSH,
  PENCIL_ = GDK_DEVICE_TOOL_TYPE_PENCIL,
  AIRBRUSH_ = GDK_DEVICE_TOOL_TYPE_AIRBRUSH,
  MOUSE_ = GDK_DEVICE_TOOL_TYPE_MOUSE,
  LENS_ = GDK_DEVICE_TOOL_TYPE_LENS,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::DeviceToolType>
{ typedef GdkDeviceToolType type; }; 
template<> struct declare_cpptype_of<GdkDeviceToolType>
{ typedef Gdk::DeviceToolType type; }; 

template<> struct declare_gtype_of<Gdk::DeviceToolType>
{ static GType get_type() { return gdk_device_tool_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class DeviceType {
  MASTER_ = GDK_DEVICE_TYPE_MASTER,
  SLAVE_ = GDK_DEVICE_TYPE_SLAVE,
  FLOATING_ = GDK_DEVICE_TYPE_FLOATING,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::DeviceType>
{ typedef GdkDeviceType type; }; 
template<> struct declare_cpptype_of<GdkDeviceType>
{ typedef Gdk::DeviceType type; }; 

template<> struct declare_gtype_of<Gdk::DeviceType>
{ static GType get_type() { return gdk_device_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class DragCancelReason {
  NO_TARGET_ = GDK_DRAG_CANCEL_NO_TARGET,
  USER_CANCELLED_ = GDK_DRAG_CANCEL_USER_CANCELLED,
  ERROR_ = GDK_DRAG_CANCEL_ERROR,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::DragCancelReason>
{ typedef GdkDragCancelReason type; }; 
template<> struct declare_cpptype_of<GdkDragCancelReason>
{ typedef Gdk::DragCancelReason type; }; 

template<> struct declare_gtype_of<Gdk::DragCancelReason>
{ static GType get_type() { return gdk_drag_cancel_reason_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class DragProtocol {
  NONE_ = GDK_DRAG_PROTO_NONE,
  MOTIF_ = GDK_DRAG_PROTO_MOTIF,
  XDND_ = GDK_DRAG_PROTO_XDND,
  ROOTWIN_ = GDK_DRAG_PROTO_ROOTWIN,
  WIN32_DROPFILES_ = GDK_DRAG_PROTO_WIN32_DROPFILES,
  OLE2_ = GDK_DRAG_PROTO_OLE2,
  LOCAL_ = GDK_DRAG_PROTO_LOCAL,
  WAYLAND_ = GDK_DRAG_PROTO_WAYLAND,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::DragProtocol>
{ typedef GdkDragProtocol type; }; 
template<> struct declare_cpptype_of<GdkDragProtocol>
{ typedef Gdk::DragProtocol type; }; 

template<> struct declare_gtype_of<Gdk::DragProtocol>
{ static GType get_type() { return gdk_drag_protocol_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class EventType {
  NOTHING_ = GDK_NOTHING,
  DELETE_ = GDK_DELETE,
  DESTROY_ = GDK_DESTROY,
  EXPOSE_ = GDK_EXPOSE,
  MOTION_NOTIFY_ = GDK_MOTION_NOTIFY,
  BUTTON_PRESS_ = GDK_BUTTON_PRESS,
  _2BUTTON_PRESS = GDK_2BUTTON_PRESS,
  DOUBLE_BUTTON_PRESS_ = GDK_DOUBLE_BUTTON_PRESS,
  _3BUTTON_PRESS = GDK_3BUTTON_PRESS,
  TRIPLE_BUTTON_PRESS_ = GDK_TRIPLE_BUTTON_PRESS,
  BUTTON_RELEASE_ = GDK_BUTTON_RELEASE,
  KEY_PRESS_ = GDK_KEY_PRESS,
  KEY_RELEASE_ = GDK_KEY_RELEASE,
  ENTER_NOTIFY_ = GDK_ENTER_NOTIFY,
  LEAVE_NOTIFY_ = GDK_LEAVE_NOTIFY,
  FOCUS_CHANGE_ = GDK_FOCUS_CHANGE,
  CONFIGURE_ = GDK_CONFIGURE,
  MAP_ = GDK_MAP,
  UNMAP_ = GDK_UNMAP,
  PROPERTY_NOTIFY_ = GDK_PROPERTY_NOTIFY,
  SELECTION_CLEAR_ = GDK_SELECTION_CLEAR,
  SELECTION_REQUEST_ = GDK_SELECTION_REQUEST,
  SELECTION_NOTIFY_ = GDK_SELECTION_NOTIFY,
  PROXIMITY_IN_ = GDK_PROXIMITY_IN,
  PROXIMITY_OUT_ = GDK_PROXIMITY_OUT,
  DRAG_ENTER_ = GDK_DRAG_ENTER,
  DRAG_LEAVE_ = GDK_DRAG_LEAVE,
  DRAG_MOTION_ = GDK_DRAG_MOTION,
  DRAG_STATUS_ = GDK_DRAG_STATUS,
  DROP_START_ = GDK_DROP_START,
  DROP_FINISHED_ = GDK_DROP_FINISHED,
  CLIENT_EVENT_ = GDK_CLIENT_EVENT,
  VISIBILITY_NOTIFY_ = GDK_VISIBILITY_NOTIFY,
  SCROLL_ = GDK_SCROLL,
  WINDOW_STATE_ = GDK_WINDOW_STATE,
  SETTING_ = GDK_SETTING,
  OWNER_CHANGE_ = GDK_OWNER_CHANGE,
  GRAB_BROKEN_ = GDK_GRAB_BROKEN,
  DAMAGE_ = GDK_DAMAGE,
  TOUCH_BEGIN_ = GDK_TOUCH_BEGIN,
  TOUCH_UPDATE_ = GDK_TOUCH_UPDATE,
  TOUCH_END_ = GDK_TOUCH_END,
  TOUCH_CANCEL_ = GDK_TOUCH_CANCEL,
  TOUCHPAD_SWIPE_ = GDK_TOUCHPAD_SWIPE,
  TOUCHPAD_PINCH_ = GDK_TOUCHPAD_PINCH,
  PAD_BUTTON_PRESS_ = GDK_PAD_BUTTON_PRESS,
  PAD_BUTTON_RELEASE_ = GDK_PAD_BUTTON_RELEASE,
  PAD_RING_ = GDK_PAD_RING,
  PAD_STRIP_ = GDK_PAD_STRIP,
  PAD_GROUP_MODE_ = GDK_PAD_GROUP_MODE,
  EVENT_LAST_ = GDK_EVENT_LAST,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::EventType>
{ typedef GdkEventType type; }; 
template<> struct declare_cpptype_of<GdkEventType>
{ typedef Gdk::EventType type; }; 

template<> struct declare_gtype_of<Gdk::EventType>
{ static GType get_type() { return gdk_event_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class FilterReturn {
  CONTINUE_ = GDK_FILTER_CONTINUE,
  TRANSLATE_ = GDK_FILTER_TRANSLATE,
  REMOVE_ = GDK_FILTER_REMOVE,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::FilterReturn>
{ typedef GdkFilterReturn type; }; 
template<> struct declare_cpptype_of<GdkFilterReturn>
{ typedef Gdk::FilterReturn type; }; 

template<> struct declare_gtype_of<Gdk::FilterReturn>
{ static GType get_type() { return gdk_filter_return_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class FullscreenMode {
  CURRENT_MONITOR_ = GDK_FULLSCREEN_ON_CURRENT_MONITOR,
  ALL_MONITORS_ = GDK_FULLSCREEN_ON_ALL_MONITORS,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::FullscreenMode>
{ typedef GdkFullscreenMode type; }; 
template<> struct declare_cpptype_of<GdkFullscreenMode>
{ typedef Gdk::FullscreenMode type; }; 

template<> struct declare_gtype_of<Gdk::FullscreenMode>
{ static GType get_type() { return gdk_fullscreen_mode_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class GLError {
  NOT_AVAILABLE_ = GDK_GL_ERROR_NOT_AVAILABLE,
  UNSUPPORTED_FORMAT_ = GDK_GL_ERROR_UNSUPPORTED_FORMAT,
  UNSUPPORTED_PROFILE_ = GDK_GL_ERROR_UNSUPPORTED_PROFILE,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::GLError>
{ typedef GdkGLError type; }; 
template<> struct declare_cpptype_of<GdkGLError>
{ typedef Gdk::GLError type; }; 

template<> struct declare_gtype_of<Gdk::GLError>
{ static GType get_type() { return gdk_gl_error_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class GrabOwnership {
  NONE_ = GDK_OWNERSHIP_NONE,
  WINDOW_ = GDK_OWNERSHIP_WINDOW,
  APPLICATION_ = GDK_OWNERSHIP_APPLICATION,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::GrabOwnership>
{ typedef GdkGrabOwnership type; }; 
template<> struct declare_cpptype_of<GdkGrabOwnership>
{ typedef Gdk::GrabOwnership type; }; 

template<> struct declare_gtype_of<Gdk::GrabOwnership>
{ static GType get_type() { return gdk_grab_ownership_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class GrabStatus {
  SUCCESS_ = GDK_GRAB_SUCCESS,
  ALREADY_GRABBED_ = GDK_GRAB_ALREADY_GRABBED,
  INVALID_TIME_ = GDK_GRAB_INVALID_TIME,
  NOT_VIEWABLE_ = GDK_GRAB_NOT_VIEWABLE,
  FROZEN_ = GDK_GRAB_FROZEN,
  FAILED_ = GDK_GRAB_FAILED,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::GrabStatus>
{ typedef GdkGrabStatus type; }; 
template<> struct declare_cpptype_of<GdkGrabStatus>
{ typedef Gdk::GrabStatus type; }; 

template<> struct declare_gtype_of<Gdk::GrabStatus>
{ static GType get_type() { return gdk_grab_status_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class Gravity {
  NORTH_WEST_ = GDK_GRAVITY_NORTH_WEST,
  NORTH_ = GDK_GRAVITY_NORTH,
  NORTH_EAST_ = GDK_GRAVITY_NORTH_EAST,
  WEST_ = GDK_GRAVITY_WEST,
  CENTER_ = GDK_GRAVITY_CENTER,
  EAST_ = GDK_GRAVITY_EAST,
  SOUTH_WEST_ = GDK_GRAVITY_SOUTH_WEST,
  SOUTH_ = GDK_GRAVITY_SOUTH,
  SOUTH_EAST_ = GDK_GRAVITY_SOUTH_EAST,
  STATIC_ = GDK_GRAVITY_STATIC,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::Gravity>
{ typedef GdkGravity type; }; 
template<> struct declare_cpptype_of<GdkGravity>
{ typedef Gdk::Gravity type; }; 

template<> struct declare_gtype_of<Gdk::Gravity>
{ static GType get_type() { return gdk_gravity_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class InputMode {
  DISABLED_ = GDK_MODE_DISABLED,
  SCREEN_ = GDK_MODE_SCREEN,
  WINDOW_ = GDK_MODE_WINDOW,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::InputMode>
{ typedef GdkInputMode type; }; 
template<> struct declare_cpptype_of<GdkInputMode>
{ typedef Gdk::InputMode type; }; 

template<> struct declare_gtype_of<Gdk::InputMode>
{ static GType get_type() { return gdk_input_mode_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class InputSource {
  MOUSE_ = GDK_SOURCE_MOUSE,
  PEN_ = GDK_SOURCE_PEN,
  ERASER_ = GDK_SOURCE_ERASER,
  CURSOR_ = GDK_SOURCE_CURSOR,
  KEYBOARD_ = GDK_SOURCE_KEYBOARD,
  TOUCHSCREEN_ = GDK_SOURCE_TOUCHSCREEN,
  TOUCHPAD_ = GDK_SOURCE_TOUCHPAD,
  TRACKPOINT_ = GDK_SOURCE_TRACKPOINT,
  TABLET_PAD_ = GDK_SOURCE_TABLET_PAD,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::InputSource>
{ typedef GdkInputSource type; }; 
template<> struct declare_cpptype_of<GdkInputSource>
{ typedef Gdk::InputSource type; }; 

template<> struct declare_gtype_of<Gdk::InputSource>
{ static GType get_type() { return gdk_input_source_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class ModifierIntent {
  PRIMARY_ACCELERATOR_ = GDK_MODIFIER_INTENT_PRIMARY_ACCELERATOR,
  CONTEXT_MENU_ = GDK_MODIFIER_INTENT_CONTEXT_MENU,
  EXTEND_SELECTION_ = GDK_MODIFIER_INTENT_EXTEND_SELECTION,
  MODIFY_SELECTION_ = GDK_MODIFIER_INTENT_MODIFY_SELECTION,
  NO_TEXT_INPUT_ = GDK_MODIFIER_INTENT_NO_TEXT_INPUT,
  SHIFT_GROUP_ = GDK_MODIFIER_INTENT_SHIFT_GROUP,
  DEFAULT_MOD_MASK_ = GDK_MODIFIER_INTENT_DEFAULT_MOD_MASK,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::ModifierIntent>
{ typedef GdkModifierIntent type; }; 
template<> struct declare_cpptype_of<GdkModifierIntent>
{ typedef Gdk::ModifierIntent type; }; 

template<> struct declare_gtype_of<Gdk::ModifierIntent>
{ static GType get_type() { return gdk_modifier_intent_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class NotifyType {
  ANCESTOR_ = GDK_NOTIFY_ANCESTOR,
  VIRTUAL_ = GDK_NOTIFY_VIRTUAL,
  INFERIOR_ = GDK_NOTIFY_INFERIOR,
  NONLINEAR_ = GDK_NOTIFY_NONLINEAR,
  NONLINEAR_VIRTUAL_ = GDK_NOTIFY_NONLINEAR_VIRTUAL,
  UNKNOWN_ = GDK_NOTIFY_UNKNOWN,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::NotifyType>
{ typedef GdkNotifyType type; }; 
template<> struct declare_cpptype_of<GdkNotifyType>
{ typedef Gdk::NotifyType type; }; 

template<> struct declare_gtype_of<Gdk::NotifyType>
{ static GType get_type() { return gdk_notify_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class OwnerChange {
  NEW_OWNER_ = GDK_OWNER_CHANGE_NEW_OWNER,
  DESTROY_ = GDK_OWNER_CHANGE_DESTROY,
  CLOSE_ = GDK_OWNER_CHANGE_CLOSE,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::OwnerChange>
{ typedef GdkOwnerChange type; }; 
template<> struct declare_cpptype_of<GdkOwnerChange>
{ typedef Gdk::OwnerChange type; }; 

template<> struct declare_gtype_of<Gdk::OwnerChange>
{ static GType get_type() { return gdk_owner_change_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class PropMode {
  REPLACE_ = GDK_PROP_MODE_REPLACE,
  PREPEND_ = GDK_PROP_MODE_PREPEND,
  APPEND_ = GDK_PROP_MODE_APPEND,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::PropMode>
{ typedef GdkPropMode type; }; 
template<> struct declare_cpptype_of<GdkPropMode>
{ typedef Gdk::PropMode type; }; 

template<> struct declare_gtype_of<Gdk::PropMode>
{ static GType get_type() { return gdk_prop_mode_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class PropertyState {
  NEW_VALUE_ = GDK_PROPERTY_NEW_VALUE,
  DELETE_ = GDK_PROPERTY_DELETE,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::PropertyState>
{ typedef GdkPropertyState type; }; 
template<> struct declare_cpptype_of<GdkPropertyState>
{ typedef Gdk::PropertyState type; }; 

template<> struct declare_gtype_of<Gdk::PropertyState>
{ static GType get_type() { return gdk_property_state_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class ScrollDirection {
  UP_ = GDK_SCROLL_UP,
  DOWN_ = GDK_SCROLL_DOWN,
  LEFT_ = GDK_SCROLL_LEFT,
  RIGHT_ = GDK_SCROLL_RIGHT,
  SMOOTH_ = GDK_SCROLL_SMOOTH,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::ScrollDirection>
{ typedef GdkScrollDirection type; }; 
template<> struct declare_cpptype_of<GdkScrollDirection>
{ typedef Gdk::ScrollDirection type; }; 

template<> struct declare_gtype_of<Gdk::ScrollDirection>
{ static GType get_type() { return gdk_scroll_direction_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class SettingAction {
  NEW_ = GDK_SETTING_ACTION_NEW,
  CHANGED_ = GDK_SETTING_ACTION_CHANGED,
  DELETED_ = GDK_SETTING_ACTION_DELETED,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::SettingAction>
{ typedef GdkSettingAction type; }; 
template<> struct declare_cpptype_of<GdkSettingAction>
{ typedef Gdk::SettingAction type; }; 

template<> struct declare_gtype_of<Gdk::SettingAction>
{ static GType get_type() { return gdk_setting_action_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class Status {
  OK_ = GDK_OK,
  ERROR_ = GDK_ERROR,
  ERROR_PARAM_ = GDK_ERROR_PARAM,
  ERROR_FILE_ = GDK_ERROR_FILE,
  ERROR_MEM_ = GDK_ERROR_MEM,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::Status>
{ typedef GdkStatus type; }; 
template<> struct declare_cpptype_of<GdkStatus>
{ typedef Gdk::Status type; }; 

template<> struct declare_gtype_of<Gdk::Status>
{ static GType get_type() { return gdk_status_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class SubpixelLayout {
  UNKNOWN_ = GDK_SUBPIXEL_LAYOUT_UNKNOWN,
  NONE_ = GDK_SUBPIXEL_LAYOUT_NONE,
  HORIZONTAL_RGB_ = GDK_SUBPIXEL_LAYOUT_HORIZONTAL_RGB,
  HORIZONTAL_BGR_ = GDK_SUBPIXEL_LAYOUT_HORIZONTAL_BGR,
  VERTICAL_RGB_ = GDK_SUBPIXEL_LAYOUT_VERTICAL_RGB,
  VERTICAL_BGR_ = GDK_SUBPIXEL_LAYOUT_VERTICAL_BGR,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::SubpixelLayout>
{ typedef GdkSubpixelLayout type; }; 
template<> struct declare_cpptype_of<GdkSubpixelLayout>
{ typedef Gdk::SubpixelLayout type; }; 

template<> struct declare_gtype_of<Gdk::SubpixelLayout>
{ static GType get_type() { return gdk_subpixel_layout_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class TouchpadGesturePhase {
  BEGIN_ = GDK_TOUCHPAD_GESTURE_PHASE_BEGIN,
  UPDATE_ = GDK_TOUCHPAD_GESTURE_PHASE_UPDATE,
  END_ = GDK_TOUCHPAD_GESTURE_PHASE_END,
  CANCEL_ = GDK_TOUCHPAD_GESTURE_PHASE_CANCEL,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::TouchpadGesturePhase>
{ typedef GdkTouchpadGesturePhase type; }; 
template<> struct declare_cpptype_of<GdkTouchpadGesturePhase>
{ typedef Gdk::TouchpadGesturePhase type; }; 

template<> struct declare_gtype_of<Gdk::TouchpadGesturePhase>
{ static GType get_type() { return gdk_touchpad_gesture_phase_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class VisibilityState {
  UNOBSCURED_ = GDK_VISIBILITY_UNOBSCURED,
  PARTIAL_ = GDK_VISIBILITY_PARTIAL,
  FULLY_OBSCURED_ = GDK_VISIBILITY_FULLY_OBSCURED,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::VisibilityState>
{ typedef GdkVisibilityState type; }; 
template<> struct declare_cpptype_of<GdkVisibilityState>
{ typedef Gdk::VisibilityState type; }; 

template<> struct declare_gtype_of<Gdk::VisibilityState>
{ static GType get_type() { return gdk_visibility_state_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class VisualType {
  STATIC_GRAY_ = GDK_VISUAL_STATIC_GRAY,
  GRAYSCALE_ = GDK_VISUAL_GRAYSCALE,
  STATIC_COLOR_ = GDK_VISUAL_STATIC_COLOR,
  PSEUDO_COLOR_ = GDK_VISUAL_PSEUDO_COLOR,
  TRUE_COLOR_ = GDK_VISUAL_TRUE_COLOR,
  DIRECT_COLOR_ = GDK_VISUAL_DIRECT_COLOR,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::VisualType>
{ typedef GdkVisualType type; }; 
template<> struct declare_cpptype_of<GdkVisualType>
{ typedef Gdk::VisualType type; }; 

template<> struct declare_gtype_of<Gdk::VisualType>
{ static GType get_type() { return gdk_visual_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class WindowEdge {
  NORTH_WEST_ = GDK_WINDOW_EDGE_NORTH_WEST,
  NORTH_ = GDK_WINDOW_EDGE_NORTH,
  NORTH_EAST_ = GDK_WINDOW_EDGE_NORTH_EAST,
  WEST_ = GDK_WINDOW_EDGE_WEST,
  EAST_ = GDK_WINDOW_EDGE_EAST,
  SOUTH_WEST_ = GDK_WINDOW_EDGE_SOUTH_WEST,
  SOUTH_ = GDK_WINDOW_EDGE_SOUTH,
  SOUTH_EAST_ = GDK_WINDOW_EDGE_SOUTH_EAST,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::WindowEdge>
{ typedef GdkWindowEdge type; }; 
template<> struct declare_cpptype_of<GdkWindowEdge>
{ typedef Gdk::WindowEdge type; }; 

template<> struct declare_gtype_of<Gdk::WindowEdge>
{ static GType get_type() { return gdk_window_edge_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class WindowType {
  ROOT_ = GDK_WINDOW_ROOT,
  TOPLEVEL_ = GDK_WINDOW_TOPLEVEL,
  CHILD_ = GDK_WINDOW_CHILD,
  TEMP_ = GDK_WINDOW_TEMP,
  FOREIGN_ = GDK_WINDOW_FOREIGN,
  OFFSCREEN_ = GDK_WINDOW_OFFSCREEN,
  SUBSURFACE_ = GDK_WINDOW_SUBSURFACE,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::WindowType>
{ typedef GdkWindowType type; }; 
template<> struct declare_cpptype_of<GdkWindowType>
{ typedef Gdk::WindowType type; }; 

template<> struct declare_gtype_of<Gdk::WindowType>
{ static GType get_type() { return gdk_window_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class WindowTypeHint {
  NORMAL_ = GDK_WINDOW_TYPE_HINT_NORMAL,
  DIALOG_ = GDK_WINDOW_TYPE_HINT_DIALOG,
  MENU_ = GDK_WINDOW_TYPE_HINT_MENU,
  TOOLBAR_ = GDK_WINDOW_TYPE_HINT_TOOLBAR,
  SPLASHSCREEN_ = GDK_WINDOW_TYPE_HINT_SPLASHSCREEN,
  UTILITY_ = GDK_WINDOW_TYPE_HINT_UTILITY,
  DOCK_ = GDK_WINDOW_TYPE_HINT_DOCK,
  DESKTOP_ = GDK_WINDOW_TYPE_HINT_DESKTOP,
  DROPDOWN_MENU_ = GDK_WINDOW_TYPE_HINT_DROPDOWN_MENU,
  POPUP_MENU_ = GDK_WINDOW_TYPE_HINT_POPUP_MENU,
  TOOLTIP_ = GDK_WINDOW_TYPE_HINT_TOOLTIP,
  NOTIFICATION_ = GDK_WINDOW_TYPE_HINT_NOTIFICATION,
  COMBO_ = GDK_WINDOW_TYPE_HINT_COMBO,
  DND_ = GDK_WINDOW_TYPE_HINT_DND,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::WindowTypeHint>
{ typedef GdkWindowTypeHint type; }; 
template<> struct declare_cpptype_of<GdkWindowTypeHint>
{ typedef Gdk::WindowTypeHint type; }; 

template<> struct declare_gtype_of<Gdk::WindowTypeHint>
{ static GType get_type() { return gdk_window_type_hint_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class WindowWindowClass {
  INPUT_OUTPUT_ = GDK_INPUT_OUTPUT,
  INPUT_ONLY_ = GDK_INPUT_ONLY,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::WindowWindowClass>
{ typedef GdkWindowWindowClass type; }; 
template<> struct declare_cpptype_of<GdkWindowWindowClass>
{ typedef Gdk::WindowWindowClass type; }; 

template<> struct declare_gtype_of<Gdk::WindowWindowClass>
{ static GType get_type() { return gdk_window_window_class_get_type(); } };


} // namespace repository

} // namespace gi


#endif
