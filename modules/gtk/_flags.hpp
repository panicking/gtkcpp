// AUTO-GENERATED

#ifndef _GI_GTK__FLAGS_HPP_
#define _GI_GTK__FLAGS_HPP_

namespace gi {

namespace repository {

namespace Gtk {

enum class AccelFlags {
  VISIBLE_ = GTK_ACCEL_VISIBLE,
  LOCKED_ = GTK_ACCEL_LOCKED,
  MASK_ = GTK_ACCEL_MASK,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::AccelFlags>
{ typedef GtkAccelFlags type; }; 
template<> struct declare_cpptype_of<GtkAccelFlags>
{ typedef Gtk::AccelFlags type; }; 

template<> struct declare_gtype_of<Gtk::AccelFlags>
{ static GType get_type() { return gtk_accel_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class ApplicationInhibitFlags {
  LOGOUT_ = GTK_APPLICATION_INHIBIT_LOGOUT,
  SWITCH_ = GTK_APPLICATION_INHIBIT_SWITCH,
  SUSPEND_ = GTK_APPLICATION_INHIBIT_SUSPEND,
  IDLE_ = GTK_APPLICATION_INHIBIT_IDLE,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::ApplicationInhibitFlags>
{ typedef GtkApplicationInhibitFlags type; }; 
template<> struct declare_cpptype_of<GtkApplicationInhibitFlags>
{ typedef Gtk::ApplicationInhibitFlags type; }; 

template<> struct declare_gtype_of<Gtk::ApplicationInhibitFlags>
{ static GType get_type() { return gtk_application_inhibit_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class AttachOptions {
  EXPAND_ = GTK_EXPAND,
  SHRINK_ = GTK_SHRINK,
  FILL_ = GTK_FILL,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::AttachOptions>
{ typedef GtkAttachOptions type; }; 
template<> struct declare_cpptype_of<GtkAttachOptions>
{ typedef Gtk::AttachOptions type; }; 

template<> struct declare_gtype_of<Gtk::AttachOptions>
{ static GType get_type() { return gtk_attach_options_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class CalendarDisplayOptions {
  SHOW_HEADING_ = GTK_CALENDAR_SHOW_HEADING,
  SHOW_DAY_NAMES_ = GTK_CALENDAR_SHOW_DAY_NAMES,
  NO_MONTH_CHANGE_ = GTK_CALENDAR_NO_MONTH_CHANGE,
  SHOW_WEEK_NUMBERS_ = GTK_CALENDAR_SHOW_WEEK_NUMBERS,
  SHOW_DETAILS_ = GTK_CALENDAR_SHOW_DETAILS,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::CalendarDisplayOptions>
{ typedef GtkCalendarDisplayOptions type; }; 
template<> struct declare_cpptype_of<GtkCalendarDisplayOptions>
{ typedef Gtk::CalendarDisplayOptions type; }; 

template<> struct declare_gtype_of<Gtk::CalendarDisplayOptions>
{ static GType get_type() { return gtk_calendar_display_options_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class CellRendererState {
  SELECTED_ = GTK_CELL_RENDERER_SELECTED,
  PRELIT_ = GTK_CELL_RENDERER_PRELIT,
  INSENSITIVE_ = GTK_CELL_RENDERER_INSENSITIVE,
  SORTED_ = GTK_CELL_RENDERER_SORTED,
  FOCUSED_ = GTK_CELL_RENDERER_FOCUSED,
  EXPANDABLE_ = GTK_CELL_RENDERER_EXPANDABLE,
  EXPANDED_ = GTK_CELL_RENDERER_EXPANDED,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::CellRendererState>
{ typedef GtkCellRendererState type; }; 
template<> struct declare_cpptype_of<GtkCellRendererState>
{ typedef Gtk::CellRendererState type; }; 

template<> struct declare_gtype_of<Gtk::CellRendererState>
{ static GType get_type() { return gtk_cell_renderer_state_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class DebugFlag {
  MISC_ = GTK_DEBUG_MISC,
  PLUGSOCKET_ = GTK_DEBUG_PLUGSOCKET,
  TEXT_ = GTK_DEBUG_TEXT,
  TREE_ = GTK_DEBUG_TREE,
  UPDATES_ = GTK_DEBUG_UPDATES,
  KEYBINDINGS_ = GTK_DEBUG_KEYBINDINGS,
  MULTIHEAD_ = GTK_DEBUG_MULTIHEAD,
  MODULES_ = GTK_DEBUG_MODULES,
  GEOMETRY_ = GTK_DEBUG_GEOMETRY,
  ICONTHEME_ = GTK_DEBUG_ICONTHEME,
  PRINTING_ = GTK_DEBUG_PRINTING,
  BUILDER_ = GTK_DEBUG_BUILDER,
  SIZE_REQUEST_ = GTK_DEBUG_SIZE_REQUEST,
  NO_CSS_CACHE_ = GTK_DEBUG_NO_CSS_CACHE,
  BASELINES_ = GTK_DEBUG_BASELINES,
  PIXEL_CACHE_ = GTK_DEBUG_PIXEL_CACHE,
  NO_PIXEL_CACHE_ = GTK_DEBUG_NO_PIXEL_CACHE,
  INTERACTIVE_ = GTK_DEBUG_INTERACTIVE,
  TOUCHSCREEN_ = GTK_DEBUG_TOUCHSCREEN,
  ACTIONS_ = GTK_DEBUG_ACTIONS,
  RESIZE_ = GTK_DEBUG_RESIZE,
  LAYOUT_ = GTK_DEBUG_LAYOUT,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::DebugFlag>
{ typedef GtkDebugFlag type; }; 
template<> struct declare_cpptype_of<GtkDebugFlag>
{ typedef Gtk::DebugFlag type; }; 

template<> struct declare_gtype_of<Gtk::DebugFlag>
{ static GType get_type() { return gtk_debug_flag_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class DestDefaults {
  MOTION_ = GTK_DEST_DEFAULT_MOTION,
  HIGHLIGHT_ = GTK_DEST_DEFAULT_HIGHLIGHT,
  DROP_ = GTK_DEST_DEFAULT_DROP,
  ALL_ = GTK_DEST_DEFAULT_ALL,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::DestDefaults>
{ typedef GtkDestDefaults type; }; 
template<> struct declare_cpptype_of<GtkDestDefaults>
{ typedef Gtk::DestDefaults type; }; 

template<> struct declare_gtype_of<Gtk::DestDefaults>
{ static GType get_type() { return gtk_dest_defaults_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class DialogFlags {
  MODAL_ = GTK_DIALOG_MODAL,
  DESTROY_WITH_PARENT_ = GTK_DIALOG_DESTROY_WITH_PARENT,
  USE_HEADER_BAR_ = GTK_DIALOG_USE_HEADER_BAR,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::DialogFlags>
{ typedef GtkDialogFlags type; }; 
template<> struct declare_cpptype_of<GtkDialogFlags>
{ typedef Gtk::DialogFlags type; }; 

template<> struct declare_gtype_of<Gtk::DialogFlags>
{ static GType get_type() { return gtk_dialog_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class EventControllerScrollFlags {
  NONE_ = GTK_EVENT_CONTROLLER_SCROLL_NONE,
  VERTICAL_ = GTK_EVENT_CONTROLLER_SCROLL_VERTICAL,
  HORIZONTAL_ = GTK_EVENT_CONTROLLER_SCROLL_HORIZONTAL,
  DISCRETE_ = GTK_EVENT_CONTROLLER_SCROLL_DISCRETE,
  KINETIC_ = GTK_EVENT_CONTROLLER_SCROLL_KINETIC,
  BOTH_AXES_ = GTK_EVENT_CONTROLLER_SCROLL_BOTH_AXES,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::EventControllerScrollFlags>
{ typedef GtkEventControllerScrollFlags type; }; 
template<> struct declare_cpptype_of<GtkEventControllerScrollFlags>
{ typedef Gtk::EventControllerScrollFlags type; }; 

template<> struct declare_gtype_of<Gtk::EventControllerScrollFlags>
{ static GType get_type() { return gtk_event_controller_scroll_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class FileFilterFlags {
  FILENAME_ = GTK_FILE_FILTER_FILENAME,
  URI_ = GTK_FILE_FILTER_URI,
  DISPLAY_NAME_ = GTK_FILE_FILTER_DISPLAY_NAME,
  MIME_TYPE_ = GTK_FILE_FILTER_MIME_TYPE,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::FileFilterFlags>
{ typedef GtkFileFilterFlags type; }; 
template<> struct declare_cpptype_of<GtkFileFilterFlags>
{ typedef Gtk::FileFilterFlags type; }; 

template<> struct declare_gtype_of<Gtk::FileFilterFlags>
{ static GType get_type() { return gtk_file_filter_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class FontChooserLevel {
  FAMILY_ = GTK_FONT_CHOOSER_LEVEL_FAMILY,
  STYLE_ = GTK_FONT_CHOOSER_LEVEL_STYLE,
  SIZE_ = GTK_FONT_CHOOSER_LEVEL_SIZE,
  VARIATIONS_ = GTK_FONT_CHOOSER_LEVEL_VARIATIONS,
  FEATURES_ = GTK_FONT_CHOOSER_LEVEL_FEATURES,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::FontChooserLevel>
{ typedef GtkFontChooserLevel type; }; 
template<> struct declare_cpptype_of<GtkFontChooserLevel>
{ typedef Gtk::FontChooserLevel type; }; 

template<> struct declare_gtype_of<Gtk::FontChooserLevel>
{ static GType get_type() { return gtk_font_chooser_level_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class IconLookupFlags {
  NO_SVG_ = GTK_ICON_LOOKUP_NO_SVG,
  FORCE_SVG_ = GTK_ICON_LOOKUP_FORCE_SVG,
  USE_BUILTIN_ = GTK_ICON_LOOKUP_USE_BUILTIN,
  GENERIC_FALLBACK_ = GTK_ICON_LOOKUP_GENERIC_FALLBACK,
  FORCE_SIZE_ = GTK_ICON_LOOKUP_FORCE_SIZE,
  FORCE_REGULAR_ = GTK_ICON_LOOKUP_FORCE_REGULAR,
  FORCE_SYMBOLIC_ = GTK_ICON_LOOKUP_FORCE_SYMBOLIC,
  DIR_LTR_ = GTK_ICON_LOOKUP_DIR_LTR,
  DIR_RTL_ = GTK_ICON_LOOKUP_DIR_RTL,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::IconLookupFlags>
{ typedef GtkIconLookupFlags type; }; 
template<> struct declare_cpptype_of<GtkIconLookupFlags>
{ typedef Gtk::IconLookupFlags type; }; 

template<> struct declare_gtype_of<Gtk::IconLookupFlags>
{ static GType get_type() { return gtk_icon_lookup_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class InputHints {
  NONE_ = GTK_INPUT_HINT_NONE,
  SPELLCHECK_ = GTK_INPUT_HINT_SPELLCHECK,
  NO_SPELLCHECK_ = GTK_INPUT_HINT_NO_SPELLCHECK,
  WORD_COMPLETION_ = GTK_INPUT_HINT_WORD_COMPLETION,
  LOWERCASE_ = GTK_INPUT_HINT_LOWERCASE,
  UPPERCASE_CHARS_ = GTK_INPUT_HINT_UPPERCASE_CHARS,
  UPPERCASE_WORDS_ = GTK_INPUT_HINT_UPPERCASE_WORDS,
  UPPERCASE_SENTENCES_ = GTK_INPUT_HINT_UPPERCASE_SENTENCES,
  INHIBIT_OSK_ = GTK_INPUT_HINT_INHIBIT_OSK,
  VERTICAL_WRITING_ = GTK_INPUT_HINT_VERTICAL_WRITING,
  EMOJI_ = GTK_INPUT_HINT_EMOJI,
  NO_EMOJI_ = GTK_INPUT_HINT_NO_EMOJI,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::InputHints>
{ typedef GtkInputHints type; }; 
template<> struct declare_cpptype_of<GtkInputHints>
{ typedef Gtk::InputHints type; }; 

template<> struct declare_gtype_of<Gtk::InputHints>
{ static GType get_type() { return gtk_input_hints_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class JunctionSides {
  NONE_ = GTK_JUNCTION_NONE,
  CORNER_TOPLEFT_ = GTK_JUNCTION_CORNER_TOPLEFT,
  CORNER_TOPRIGHT_ = GTK_JUNCTION_CORNER_TOPRIGHT,
  CORNER_BOTTOMLEFT_ = GTK_JUNCTION_CORNER_BOTTOMLEFT,
  CORNER_BOTTOMRIGHT_ = GTK_JUNCTION_CORNER_BOTTOMRIGHT,
  TOP_ = GTK_JUNCTION_TOP,
  BOTTOM_ = GTK_JUNCTION_BOTTOM,
  LEFT_ = GTK_JUNCTION_LEFT,
  RIGHT_ = GTK_JUNCTION_RIGHT,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::JunctionSides>
{ typedef GtkJunctionSides type; }; 
template<> struct declare_cpptype_of<GtkJunctionSides>
{ typedef Gtk::JunctionSides type; }; 

template<> struct declare_gtype_of<Gtk::JunctionSides>
{ static GType get_type() { return gtk_junction_sides_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class PlacesOpenFlags {
  NORMAL_ = GTK_PLACES_OPEN_NORMAL,
  NEW_TAB_ = GTK_PLACES_OPEN_NEW_TAB,
  NEW_WINDOW_ = GTK_PLACES_OPEN_NEW_WINDOW,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::PlacesOpenFlags>
{ typedef GtkPlacesOpenFlags type; }; 
template<> struct declare_cpptype_of<GtkPlacesOpenFlags>
{ typedef Gtk::PlacesOpenFlags type; }; 

template<> struct declare_gtype_of<Gtk::PlacesOpenFlags>
{ static GType get_type() { return gtk_places_open_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class RcFlags {
  FG_ = GTK_RC_FG,
  BG_ = GTK_RC_BG,
  TEXT_ = GTK_RC_TEXT,
  BASE_ = GTK_RC_BASE,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::RcFlags>
{ typedef GtkRcFlags type; }; 
template<> struct declare_cpptype_of<GtkRcFlags>
{ typedef Gtk::RcFlags type; }; 

template<> struct declare_gtype_of<Gtk::RcFlags>
{ static GType get_type() { return gtk_rc_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class RecentFilterFlags {
  URI_ = GTK_RECENT_FILTER_URI,
  DISPLAY_NAME_ = GTK_RECENT_FILTER_DISPLAY_NAME,
  MIME_TYPE_ = GTK_RECENT_FILTER_MIME_TYPE,
  APPLICATION_ = GTK_RECENT_FILTER_APPLICATION,
  GROUP_ = GTK_RECENT_FILTER_GROUP,
  AGE_ = GTK_RECENT_FILTER_AGE,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::RecentFilterFlags>
{ typedef GtkRecentFilterFlags type; }; 
template<> struct declare_cpptype_of<GtkRecentFilterFlags>
{ typedef Gtk::RecentFilterFlags type; }; 

template<> struct declare_gtype_of<Gtk::RecentFilterFlags>
{ static GType get_type() { return gtk_recent_filter_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class RegionFlags {
  EVEN_ = GTK_REGION_EVEN,
  ODD_ = GTK_REGION_ODD,
  FIRST_ = GTK_REGION_FIRST,
  LAST_ = GTK_REGION_LAST,
  ONLY_ = GTK_REGION_ONLY,
  SORTED_ = GTK_REGION_SORTED,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::RegionFlags>
{ typedef GtkRegionFlags type; }; 
template<> struct declare_cpptype_of<GtkRegionFlags>
{ typedef Gtk::RegionFlags type; }; 

template<> struct declare_gtype_of<Gtk::RegionFlags>
{ static GType get_type() { return gtk_region_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class StateFlags {
  NORMAL_ = GTK_STATE_FLAG_NORMAL,
  ACTIVE_ = GTK_STATE_FLAG_ACTIVE,
  PRELIGHT_ = GTK_STATE_FLAG_PRELIGHT,
  SELECTED_ = GTK_STATE_FLAG_SELECTED,
  INSENSITIVE_ = GTK_STATE_FLAG_INSENSITIVE,
  INCONSISTENT_ = GTK_STATE_FLAG_INCONSISTENT,
  FOCUSED_ = GTK_STATE_FLAG_FOCUSED,
  BACKDROP_ = GTK_STATE_FLAG_BACKDROP,
  DIR_LTR_ = GTK_STATE_FLAG_DIR_LTR,
  DIR_RTL_ = GTK_STATE_FLAG_DIR_RTL,
  LINK_ = GTK_STATE_FLAG_LINK,
  VISITED_ = GTK_STATE_FLAG_VISITED,
  CHECKED_ = GTK_STATE_FLAG_CHECKED,
  DROP_ACTIVE_ = GTK_STATE_FLAG_DROP_ACTIVE,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::StateFlags>
{ typedef GtkStateFlags type; }; 
template<> struct declare_cpptype_of<GtkStateFlags>
{ typedef Gtk::StateFlags type; }; 

template<> struct declare_gtype_of<Gtk::StateFlags>
{ static GType get_type() { return gtk_state_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class StyleContextPrintFlags {
  NONE_ = GTK_STYLE_CONTEXT_PRINT_NONE,
  RECURSE_ = GTK_STYLE_CONTEXT_PRINT_RECURSE,
  SHOW_STYLE_ = GTK_STYLE_CONTEXT_PRINT_SHOW_STYLE,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::StyleContextPrintFlags>
{ typedef GtkStyleContextPrintFlags type; }; 
template<> struct declare_cpptype_of<GtkStyleContextPrintFlags>
{ typedef Gtk::StyleContextPrintFlags type; }; 

template<> struct declare_gtype_of<Gtk::StyleContextPrintFlags>
{ static GType get_type() { return gtk_style_context_print_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class TargetFlags {
  SAME_APP_ = GTK_TARGET_SAME_APP,
  SAME_WIDGET_ = GTK_TARGET_SAME_WIDGET,
  OTHER_APP_ = GTK_TARGET_OTHER_APP,
  OTHER_WIDGET_ = GTK_TARGET_OTHER_WIDGET,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::TargetFlags>
{ typedef GtkTargetFlags type; }; 
template<> struct declare_cpptype_of<GtkTargetFlags>
{ typedef Gtk::TargetFlags type; }; 

template<> struct declare_gtype_of<Gtk::TargetFlags>
{ static GType get_type() { return gtk_target_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class TextSearchFlags {
  VISIBLE_ONLY_ = GTK_TEXT_SEARCH_VISIBLE_ONLY,
  TEXT_ONLY_ = GTK_TEXT_SEARCH_TEXT_ONLY,
  CASE_INSENSITIVE_ = GTK_TEXT_SEARCH_CASE_INSENSITIVE,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::TextSearchFlags>
{ typedef GtkTextSearchFlags type; }; 
template<> struct declare_cpptype_of<GtkTextSearchFlags>
{ typedef Gtk::TextSearchFlags type; }; 

template<> struct declare_gtype_of<Gtk::TextSearchFlags>
{ static GType get_type() { return gtk_text_search_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class ToolPaletteDragTargets {
  ITEMS_ = GTK_TOOL_PALETTE_DRAG_ITEMS,
  GROUPS_ = GTK_TOOL_PALETTE_DRAG_GROUPS,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::ToolPaletteDragTargets>
{ typedef GtkToolPaletteDragTargets type; }; 
template<> struct declare_cpptype_of<GtkToolPaletteDragTargets>
{ typedef Gtk::ToolPaletteDragTargets type; }; 

template<> struct declare_gtype_of<Gtk::ToolPaletteDragTargets>
{ static GType get_type() { return gtk_tool_palette_drag_targets_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class TreeModelFlags {
  ITERS_PERSIST_ = GTK_TREE_MODEL_ITERS_PERSIST,
  LIST_ONLY_ = GTK_TREE_MODEL_LIST_ONLY,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::TreeModelFlags>
{ typedef GtkTreeModelFlags type; }; 
template<> struct declare_cpptype_of<GtkTreeModelFlags>
{ typedef Gtk::TreeModelFlags type; }; 

template<> struct declare_gtype_of<Gtk::TreeModelFlags>
{ static GType get_type() { return gtk_tree_model_flags_get_type(); } };


} // namespace repository

} // namespace gi


#endif
