// AUTO-GENERATED

#ifndef _GI_GDK__FLAGS_HPP_
#define _GI_GDK__FLAGS_HPP_

namespace gi {

namespace repository {

namespace Gdk {

enum class AnchorHints {
  FLIP_X_ = GDK_ANCHOR_FLIP_X,
  FLIP_Y_ = GDK_ANCHOR_FLIP_Y,
  SLIDE_X_ = GDK_ANCHOR_SLIDE_X,
  SLIDE_Y_ = GDK_ANCHOR_SLIDE_Y,
  RESIZE_X_ = GDK_ANCHOR_RESIZE_X,
  RESIZE_Y_ = GDK_ANCHOR_RESIZE_Y,
  FLIP_ = GDK_ANCHOR_FLIP,
  SLIDE_ = GDK_ANCHOR_SLIDE,
  RESIZE_ = GDK_ANCHOR_RESIZE,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::AnchorHints>
{ typedef GdkAnchorHints type; }; 
template<> struct declare_cpptype_of<GdkAnchorHints>
{ typedef Gdk::AnchorHints type; }; 

template<> struct declare_gtype_of<Gdk::AnchorHints>
{ static GType get_type() { return gdk_anchor_hints_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class AxisFlags {
  X_ = GDK_AXIS_FLAG_X,
  Y_ = GDK_AXIS_FLAG_Y,
  PRESSURE_ = GDK_AXIS_FLAG_PRESSURE,
  XTILT_ = GDK_AXIS_FLAG_XTILT,
  YTILT_ = GDK_AXIS_FLAG_YTILT,
  WHEEL_ = GDK_AXIS_FLAG_WHEEL,
  DISTANCE_ = GDK_AXIS_FLAG_DISTANCE,
  ROTATION_ = GDK_AXIS_FLAG_ROTATION,
  SLIDER_ = GDK_AXIS_FLAG_SLIDER,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::AxisFlags>
{ typedef GdkAxisFlags type; }; 
template<> struct declare_cpptype_of<GdkAxisFlags>
{ typedef Gdk::AxisFlags type; }; 

template<> struct declare_gtype_of<Gdk::AxisFlags>
{ static GType get_type() { return gdk_axis_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class DragAction {
  DEFAULT_ = GDK_ACTION_DEFAULT,
  COPY_ = GDK_ACTION_COPY,
  MOVE_ = GDK_ACTION_MOVE,
  LINK_ = GDK_ACTION_LINK,
  PRIVATE_ = GDK_ACTION_PRIVATE,
  ASK_ = GDK_ACTION_ASK,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::DragAction>
{ typedef GdkDragAction type; }; 
template<> struct declare_cpptype_of<GdkDragAction>
{ typedef Gdk::DragAction type; }; 

template<> struct declare_gtype_of<Gdk::DragAction>
{ static GType get_type() { return gdk_drag_action_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class EventMask {
  EXPOSURE_MASK_ = GDK_EXPOSURE_MASK,
  POINTER_MOTION_MASK_ = GDK_POINTER_MOTION_MASK,
  POINTER_MOTION_HINT_MASK_ = GDK_POINTER_MOTION_HINT_MASK,
  BUTTON_MOTION_MASK_ = GDK_BUTTON_MOTION_MASK,
  BUTTON1_MOTION_MASK_ = GDK_BUTTON1_MOTION_MASK,
  BUTTON2_MOTION_MASK_ = GDK_BUTTON2_MOTION_MASK,
  BUTTON3_MOTION_MASK_ = GDK_BUTTON3_MOTION_MASK,
  BUTTON_PRESS_MASK_ = GDK_BUTTON_PRESS_MASK,
  BUTTON_RELEASE_MASK_ = GDK_BUTTON_RELEASE_MASK,
  KEY_PRESS_MASK_ = GDK_KEY_PRESS_MASK,
  KEY_RELEASE_MASK_ = GDK_KEY_RELEASE_MASK,
  ENTER_NOTIFY_MASK_ = GDK_ENTER_NOTIFY_MASK,
  LEAVE_NOTIFY_MASK_ = GDK_LEAVE_NOTIFY_MASK,
  FOCUS_CHANGE_MASK_ = GDK_FOCUS_CHANGE_MASK,
  STRUCTURE_MASK_ = GDK_STRUCTURE_MASK,
  PROPERTY_CHANGE_MASK_ = GDK_PROPERTY_CHANGE_MASK,
  VISIBILITY_NOTIFY_MASK_ = GDK_VISIBILITY_NOTIFY_MASK,
  PROXIMITY_IN_MASK_ = GDK_PROXIMITY_IN_MASK,
  PROXIMITY_OUT_MASK_ = GDK_PROXIMITY_OUT_MASK,
  SUBSTRUCTURE_MASK_ = GDK_SUBSTRUCTURE_MASK,
  SCROLL_MASK_ = GDK_SCROLL_MASK,
  TOUCH_MASK_ = GDK_TOUCH_MASK,
  SMOOTH_SCROLL_MASK_ = GDK_SMOOTH_SCROLL_MASK,
  TOUCHPAD_GESTURE_MASK_ = GDK_TOUCHPAD_GESTURE_MASK,
  TABLET_PAD_MASK_ = GDK_TABLET_PAD_MASK,
  ALL_EVENTS_MASK_ = GDK_ALL_EVENTS_MASK,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::EventMask>
{ typedef GdkEventMask type; }; 
template<> struct declare_cpptype_of<GdkEventMask>
{ typedef Gdk::EventMask type; }; 

template<> struct declare_gtype_of<Gdk::EventMask>
{ static GType get_type() { return gdk_event_mask_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class FrameClockPhase {
  NONE_ = GDK_FRAME_CLOCK_PHASE_NONE,
  FLUSH_EVENTS_ = GDK_FRAME_CLOCK_PHASE_FLUSH_EVENTS,
  BEFORE_PAINT_ = GDK_FRAME_CLOCK_PHASE_BEFORE_PAINT,
  UPDATE_ = GDK_FRAME_CLOCK_PHASE_UPDATE,
  LAYOUT_ = GDK_FRAME_CLOCK_PHASE_LAYOUT,
  PAINT_ = GDK_FRAME_CLOCK_PHASE_PAINT,
  RESUME_EVENTS_ = GDK_FRAME_CLOCK_PHASE_RESUME_EVENTS,
  AFTER_PAINT_ = GDK_FRAME_CLOCK_PHASE_AFTER_PAINT,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::FrameClockPhase>
{ typedef GdkFrameClockPhase type; }; 
template<> struct declare_cpptype_of<GdkFrameClockPhase>
{ typedef Gdk::FrameClockPhase type; }; 

template<> struct declare_gtype_of<Gdk::FrameClockPhase>
{ static GType get_type() { return gdk_frame_clock_phase_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class ModifierType {
  SHIFT_MASK_ = GDK_SHIFT_MASK,
  LOCK_MASK_ = GDK_LOCK_MASK,
  CONTROL_MASK_ = GDK_CONTROL_MASK,
  MOD1_MASK_ = GDK_MOD1_MASK,
  MOD2_MASK_ = GDK_MOD2_MASK,
  MOD3_MASK_ = GDK_MOD3_MASK,
  MOD4_MASK_ = GDK_MOD4_MASK,
  MOD5_MASK_ = GDK_MOD5_MASK,
  BUTTON1_MASK_ = GDK_BUTTON1_MASK,
  BUTTON2_MASK_ = GDK_BUTTON2_MASK,
  BUTTON3_MASK_ = GDK_BUTTON3_MASK,
  BUTTON4_MASK_ = GDK_BUTTON4_MASK,
  BUTTON5_MASK_ = GDK_BUTTON5_MASK,
  MODIFIER_RESERVED_13_MASK_ = GDK_MODIFIER_RESERVED_13_MASK,
  MODIFIER_RESERVED_14_MASK_ = GDK_MODIFIER_RESERVED_14_MASK,
  MODIFIER_RESERVED_15_MASK_ = GDK_MODIFIER_RESERVED_15_MASK,
  MODIFIER_RESERVED_16_MASK_ = GDK_MODIFIER_RESERVED_16_MASK,
  MODIFIER_RESERVED_17_MASK_ = GDK_MODIFIER_RESERVED_17_MASK,
  MODIFIER_RESERVED_18_MASK_ = GDK_MODIFIER_RESERVED_18_MASK,
  MODIFIER_RESERVED_19_MASK_ = GDK_MODIFIER_RESERVED_19_MASK,
  MODIFIER_RESERVED_20_MASK_ = GDK_MODIFIER_RESERVED_20_MASK,
  MODIFIER_RESERVED_21_MASK_ = GDK_MODIFIER_RESERVED_21_MASK,
  MODIFIER_RESERVED_22_MASK_ = GDK_MODIFIER_RESERVED_22_MASK,
  MODIFIER_RESERVED_23_MASK_ = GDK_MODIFIER_RESERVED_23_MASK,
  MODIFIER_RESERVED_24_MASK_ = GDK_MODIFIER_RESERVED_24_MASK,
  MODIFIER_RESERVED_25_MASK_ = GDK_MODIFIER_RESERVED_25_MASK,
  SUPER_MASK_ = GDK_SUPER_MASK,
  HYPER_MASK_ = GDK_HYPER_MASK,
  META_MASK_ = GDK_META_MASK,
  MODIFIER_RESERVED_29_MASK_ = GDK_MODIFIER_RESERVED_29_MASK,
  RELEASE_MASK_ = GDK_RELEASE_MASK,
  MODIFIER_MASK_ = GDK_MODIFIER_MASK,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::ModifierType>
{ typedef GdkModifierType type; }; 
template<> struct declare_cpptype_of<GdkModifierType>
{ typedef Gdk::ModifierType type; }; 

template<> struct declare_gtype_of<Gdk::ModifierType>
{ static GType get_type() { return gdk_modifier_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class SeatCapabilities {
  NONE_ = GDK_SEAT_CAPABILITY_NONE,
  POINTER_ = GDK_SEAT_CAPABILITY_POINTER,
  TOUCH_ = GDK_SEAT_CAPABILITY_TOUCH,
  TABLET_STYLUS_ = GDK_SEAT_CAPABILITY_TABLET_STYLUS,
  KEYBOARD_ = GDK_SEAT_CAPABILITY_KEYBOARD,
  ALL_POINTING_ = GDK_SEAT_CAPABILITY_ALL_POINTING,
  ALL_ = GDK_SEAT_CAPABILITY_ALL,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::SeatCapabilities>
{ typedef GdkSeatCapabilities type; }; 
template<> struct declare_cpptype_of<GdkSeatCapabilities>
{ typedef Gdk::SeatCapabilities type; }; 

template<> struct declare_gtype_of<Gdk::SeatCapabilities>
{ static GType get_type() { return gdk_seat_capabilities_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class WMDecoration {
  ALL_ = GDK_DECOR_ALL,
  BORDER_ = GDK_DECOR_BORDER,
  RESIZEH_ = GDK_DECOR_RESIZEH,
  TITLE_ = GDK_DECOR_TITLE,
  MENU_ = GDK_DECOR_MENU,
  MINIMIZE_ = GDK_DECOR_MINIMIZE,
  MAXIMIZE_ = GDK_DECOR_MAXIMIZE,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::WMDecoration>
{ typedef GdkWMDecoration type; }; 
template<> struct declare_cpptype_of<GdkWMDecoration>
{ typedef Gdk::WMDecoration type; }; 

template<> struct declare_gtype_of<Gdk::WMDecoration>
{ static GType get_type() { return gdk_wm_decoration_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class WMFunction {
  ALL_ = GDK_FUNC_ALL,
  RESIZE_ = GDK_FUNC_RESIZE,
  MOVE_ = GDK_FUNC_MOVE,
  MINIMIZE_ = GDK_FUNC_MINIMIZE,
  MAXIMIZE_ = GDK_FUNC_MAXIMIZE,
  CLOSE_ = GDK_FUNC_CLOSE,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::WMFunction>
{ typedef GdkWMFunction type; }; 
template<> struct declare_cpptype_of<GdkWMFunction>
{ typedef Gdk::WMFunction type; }; 

template<> struct declare_gtype_of<Gdk::WMFunction>
{ static GType get_type() { return gdk_wm_function_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class WindowAttributesType {
  TITLE_ = GDK_WA_TITLE,
  X_ = GDK_WA_X,
  Y_ = GDK_WA_Y,
  CURSOR_ = GDK_WA_CURSOR,
  VISUAL_ = GDK_WA_VISUAL,
  WMCLASS_ = GDK_WA_WMCLASS,
  NOREDIR_ = GDK_WA_NOREDIR,
  TYPE_HINT_ = GDK_WA_TYPE_HINT,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::WindowAttributesType>
{ typedef GdkWindowAttributesType type; }; 
template<> struct declare_cpptype_of<GdkWindowAttributesType>
{ typedef Gdk::WindowAttributesType type; }; 

template<> struct declare_gtype_of<Gdk::WindowAttributesType>
{ static GType get_type() { return gdk_window_attributes_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class WindowHints {
  POS_ = GDK_HINT_POS,
  MIN_SIZE_ = GDK_HINT_MIN_SIZE,
  MAX_SIZE_ = GDK_HINT_MAX_SIZE,
  BASE_SIZE_ = GDK_HINT_BASE_SIZE,
  ASPECT_ = GDK_HINT_ASPECT,
  RESIZE_INC_ = GDK_HINT_RESIZE_INC,
  WIN_GRAVITY_ = GDK_HINT_WIN_GRAVITY,
  USER_POS_ = GDK_HINT_USER_POS,
  USER_SIZE_ = GDK_HINT_USER_SIZE,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::WindowHints>
{ typedef GdkWindowHints type; }; 
template<> struct declare_cpptype_of<GdkWindowHints>
{ typedef Gdk::WindowHints type; }; 

template<> struct declare_gtype_of<Gdk::WindowHints>
{ static GType get_type() { return gdk_window_hints_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class WindowState {
  WITHDRAWN_ = GDK_WINDOW_STATE_WITHDRAWN,
  ICONIFIED_ = GDK_WINDOW_STATE_ICONIFIED,
  MAXIMIZED_ = GDK_WINDOW_STATE_MAXIMIZED,
  STICKY_ = GDK_WINDOW_STATE_STICKY,
  FULLSCREEN_ = GDK_WINDOW_STATE_FULLSCREEN,
  ABOVE_ = GDK_WINDOW_STATE_ABOVE,
  BELOW_ = GDK_WINDOW_STATE_BELOW,
  FOCUSED_ = GDK_WINDOW_STATE_FOCUSED,
  TILED_ = GDK_WINDOW_STATE_TILED,
  TOP_TILED_ = GDK_WINDOW_STATE_TOP_TILED,
  TOP_RESIZABLE_ = GDK_WINDOW_STATE_TOP_RESIZABLE,
  RIGHT_TILED_ = GDK_WINDOW_STATE_RIGHT_TILED,
  RIGHT_RESIZABLE_ = GDK_WINDOW_STATE_RIGHT_RESIZABLE,
  BOTTOM_TILED_ = GDK_WINDOW_STATE_BOTTOM_TILED,
  BOTTOM_RESIZABLE_ = GDK_WINDOW_STATE_BOTTOM_RESIZABLE,
  LEFT_TILED_ = GDK_WINDOW_STATE_LEFT_TILED,
  LEFT_RESIZABLE_ = GDK_WINDOW_STATE_LEFT_RESIZABLE,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::WindowState>
{ typedef GdkWindowState type; }; 
template<> struct declare_cpptype_of<GdkWindowState>
{ typedef Gdk::WindowState type; }; 

template<> struct declare_gtype_of<Gdk::WindowState>
{ static GType get_type() { return gdk_window_state_get_type(); } };


} // namespace repository

} // namespace gi


#endif
