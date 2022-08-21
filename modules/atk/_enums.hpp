// AUTO-GENERATED

#ifndef _GI_ATK__ENUMS_HPP_
#define _GI_ATK__ENUMS_HPP_

namespace gi {

namespace repository {

namespace Atk {

#if defined(CoordType)
#undef CoordType
#endif
enum class CoordType {
  SCREEN_ = ATK_XY_SCREEN,
  WINDOW_ = ATK_XY_WINDOW,
  PARENT_ = ATK_XY_PARENT,
};

} // namespace Atk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Atk::CoordType>
{ typedef AtkCoordType type; }; 
template<> struct declare_cpptype_of<AtkCoordType>
{ typedef Atk::CoordType type; }; 

template<> struct declare_gtype_of<Atk::CoordType>
{ static GType get_type() { return atk_coord_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Atk {

enum class KeyEventType {
  PRESS_ = ATK_KEY_EVENT_PRESS,
  RELEASE_ = ATK_KEY_EVENT_RELEASE,
  LAST_DEFINED_ = ATK_KEY_EVENT_LAST_DEFINED,
};

} // namespace Atk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Atk::KeyEventType>
{ typedef AtkKeyEventType type; }; 
template<> struct declare_cpptype_of<AtkKeyEventType>
{ typedef Atk::KeyEventType type; }; 

template<> struct declare_gtype_of<Atk::KeyEventType>
{ static GType get_type() { return atk_key_event_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Atk {

enum class Layer {
  INVALID_ = ATK_LAYER_INVALID,
  BACKGROUND_ = ATK_LAYER_BACKGROUND,
  CANVAS_ = ATK_LAYER_CANVAS,
  WIDGET_ = ATK_LAYER_WIDGET,
  MDI_ = ATK_LAYER_MDI,
  POPUP_ = ATK_LAYER_POPUP,
  OVERLAY_ = ATK_LAYER_OVERLAY,
  WINDOW_ = ATK_LAYER_WINDOW,
};

} // namespace Atk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Atk::Layer>
{ typedef AtkLayer type; }; 
template<> struct declare_cpptype_of<AtkLayer>
{ typedef Atk::Layer type; }; 

template<> struct declare_gtype_of<Atk::Layer>
{ static GType get_type() { return atk_layer_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Atk {

enum class RelationType {
  NULL_ = ATK_RELATION_NULL,
  CONTROLLED_BY_ = ATK_RELATION_CONTROLLED_BY,
  CONTROLLER_FOR_ = ATK_RELATION_CONTROLLER_FOR,
  LABEL_FOR_ = ATK_RELATION_LABEL_FOR,
  LABELLED_BY_ = ATK_RELATION_LABELLED_BY,
  MEMBER_OF_ = ATK_RELATION_MEMBER_OF,
  NODE_CHILD_OF_ = ATK_RELATION_NODE_CHILD_OF,
  FLOWS_TO_ = ATK_RELATION_FLOWS_TO,
  FLOWS_FROM_ = ATK_RELATION_FLOWS_FROM,
  SUBWINDOW_OF_ = ATK_RELATION_SUBWINDOW_OF,
  EMBEDS_ = ATK_RELATION_EMBEDS,
  EMBEDDED_BY_ = ATK_RELATION_EMBEDDED_BY,
  POPUP_FOR_ = ATK_RELATION_POPUP_FOR,
  PARENT_WINDOW_OF_ = ATK_RELATION_PARENT_WINDOW_OF,
  DESCRIBED_BY_ = ATK_RELATION_DESCRIBED_BY,
  DESCRIPTION_FOR_ = ATK_RELATION_DESCRIPTION_FOR,
  NODE_PARENT_OF_ = ATK_RELATION_NODE_PARENT_OF,
  DETAILS_ = ATK_RELATION_DETAILS,
  DETAILS_FOR_ = ATK_RELATION_DETAILS_FOR,
  ERROR_MESSAGE_ = ATK_RELATION_ERROR_MESSAGE,
  ERROR_FOR_ = ATK_RELATION_ERROR_FOR,
  LAST_DEFINED_ = ATK_RELATION_LAST_DEFINED,
};

} // namespace Atk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Atk::RelationType>
{ typedef AtkRelationType type; }; 
template<> struct declare_cpptype_of<AtkRelationType>
{ typedef Atk::RelationType type; }; 

template<> struct declare_gtype_of<Atk::RelationType>
{ static GType get_type() { return atk_relation_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Atk {

enum class Role {
  INVALID_ = ATK_ROLE_INVALID,
  ACCELERATOR_LABEL_ = ATK_ROLE_ACCEL_LABEL,
  ALERT_ = ATK_ROLE_ALERT,
  ANIMATION_ = ATK_ROLE_ANIMATION,
  ARROW_ = ATK_ROLE_ARROW,
  CALENDAR_ = ATK_ROLE_CALENDAR,
  CANVAS_ = ATK_ROLE_CANVAS,
  CHECK_BOX_ = ATK_ROLE_CHECK_BOX,
  CHECK_MENU_ITEM_ = ATK_ROLE_CHECK_MENU_ITEM,
  COLOR_CHOOSER_ = ATK_ROLE_COLOR_CHOOSER,
  COLUMN_HEADER_ = ATK_ROLE_COLUMN_HEADER,
  COMBO_BOX_ = ATK_ROLE_COMBO_BOX,
  DATE_EDITOR_ = ATK_ROLE_DATE_EDITOR,
  DESKTOP_ICON_ = ATK_ROLE_DESKTOP_ICON,
  DESKTOP_FRAME_ = ATK_ROLE_DESKTOP_FRAME,
  DIAL_ = ATK_ROLE_DIAL,
  DIALOG_ = ATK_ROLE_DIALOG,
  DIRECTORY_PANE_ = ATK_ROLE_DIRECTORY_PANE,
  DRAWING_AREA_ = ATK_ROLE_DRAWING_AREA,
  FILE_CHOOSER_ = ATK_ROLE_FILE_CHOOSER,
  FILLER_ = ATK_ROLE_FILLER,
  FONT_CHOOSER_ = ATK_ROLE_FONT_CHOOSER,
  FRAME_ = ATK_ROLE_FRAME,
  GLASS_PANE_ = ATK_ROLE_GLASS_PANE,
  HTML_CONTAINER_ = ATK_ROLE_HTML_CONTAINER,
  ICON_ = ATK_ROLE_ICON,
  IMAGE_ = ATK_ROLE_IMAGE,
  INTERNAL_FRAME_ = ATK_ROLE_INTERNAL_FRAME,
  LABEL_ = ATK_ROLE_LABEL,
  LAYERED_PANE_ = ATK_ROLE_LAYERED_PANE,
  LIST_ = ATK_ROLE_LIST,
  LIST_ITEM_ = ATK_ROLE_LIST_ITEM,
  MENU_ = ATK_ROLE_MENU,
  MENU_BAR_ = ATK_ROLE_MENU_BAR,
  MENU_ITEM_ = ATK_ROLE_MENU_ITEM,
  OPTION_PANE_ = ATK_ROLE_OPTION_PANE,
  PAGE_TAB_ = ATK_ROLE_PAGE_TAB,
  PAGE_TAB_LIST_ = ATK_ROLE_PAGE_TAB_LIST,
  PANEL_ = ATK_ROLE_PANEL,
  PASSWORD_TEXT_ = ATK_ROLE_PASSWORD_TEXT,
  POPUP_MENU_ = ATK_ROLE_POPUP_MENU,
  PROGRESS_BAR_ = ATK_ROLE_PROGRESS_BAR,
  PUSH_BUTTON_ = ATK_ROLE_PUSH_BUTTON,
  RADIO_BUTTON_ = ATK_ROLE_RADIO_BUTTON,
  RADIO_MENU_ITEM_ = ATK_ROLE_RADIO_MENU_ITEM,
  ROOT_PANE_ = ATK_ROLE_ROOT_PANE,
  ROW_HEADER_ = ATK_ROLE_ROW_HEADER,
  SCROLL_BAR_ = ATK_ROLE_SCROLL_BAR,
  SCROLL_PANE_ = ATK_ROLE_SCROLL_PANE,
  SEPARATOR_ = ATK_ROLE_SEPARATOR,
  SLIDER_ = ATK_ROLE_SLIDER,
  SPLIT_PANE_ = ATK_ROLE_SPLIT_PANE,
  SPIN_BUTTON_ = ATK_ROLE_SPIN_BUTTON,
  STATUSBAR_ = ATK_ROLE_STATUSBAR,
  TABLE_ = ATK_ROLE_TABLE,
  TABLE_CELL_ = ATK_ROLE_TABLE_CELL,
  TABLE_COLUMN_HEADER_ = ATK_ROLE_TABLE_COLUMN_HEADER,
  TABLE_ROW_HEADER_ = ATK_ROLE_TABLE_ROW_HEADER,
  TEAR_OFF_MENU_ITEM_ = ATK_ROLE_TEAR_OFF_MENU_ITEM,
  TERMINAL_ = ATK_ROLE_TERMINAL,
  TEXT_ = ATK_ROLE_TEXT,
  TOGGLE_BUTTON_ = ATK_ROLE_TOGGLE_BUTTON,
  TOOL_BAR_ = ATK_ROLE_TOOL_BAR,
  TOOL_TIP_ = ATK_ROLE_TOOL_TIP,
  TREE_ = ATK_ROLE_TREE,
  TREE_TABLE_ = ATK_ROLE_TREE_TABLE,
  UNKNOWN_ = ATK_ROLE_UNKNOWN,
  VIEWPORT_ = ATK_ROLE_VIEWPORT,
  WINDOW_ = ATK_ROLE_WINDOW,
  HEADER_ = ATK_ROLE_HEADER,
  FOOTER_ = ATK_ROLE_FOOTER,
  PARAGRAPH_ = ATK_ROLE_PARAGRAPH,
  RULER_ = ATK_ROLE_RULER,
  APPLICATION_ = ATK_ROLE_APPLICATION,
  AUTOCOMPLETE_ = ATK_ROLE_AUTOCOMPLETE,
  EDIT_BAR_ = ATK_ROLE_EDITBAR,
  EMBEDDED_ = ATK_ROLE_EMBEDDED,
  ENTRY_ = ATK_ROLE_ENTRY,
  CHART_ = ATK_ROLE_CHART,
  CAPTION_ = ATK_ROLE_CAPTION,
  DOCUMENT_FRAME_ = ATK_ROLE_DOCUMENT_FRAME,
  HEADING_ = ATK_ROLE_HEADING,
  PAGE_ = ATK_ROLE_PAGE,
  SECTION_ = ATK_ROLE_SECTION,
  REDUNDANT_OBJECT_ = ATK_ROLE_REDUNDANT_OBJECT,
  FORM_ = ATK_ROLE_FORM,
  LINK_ = ATK_ROLE_LINK,
  INPUT_METHOD_WINDOW_ = ATK_ROLE_INPUT_METHOD_WINDOW,
  TABLE_ROW_ = ATK_ROLE_TABLE_ROW,
  TREE_ITEM_ = ATK_ROLE_TREE_ITEM,
  DOCUMENT_SPREADSHEET_ = ATK_ROLE_DOCUMENT_SPREADSHEET,
  DOCUMENT_PRESENTATION_ = ATK_ROLE_DOCUMENT_PRESENTATION,
  DOCUMENT_TEXT_ = ATK_ROLE_DOCUMENT_TEXT,
  DOCUMENT_WEB_ = ATK_ROLE_DOCUMENT_WEB,
  DOCUMENT_EMAIL_ = ATK_ROLE_DOCUMENT_EMAIL,
  COMMENT_ = ATK_ROLE_COMMENT,
  LIST_BOX_ = ATK_ROLE_LIST_BOX,
  GROUPING_ = ATK_ROLE_GROUPING,
  IMAGE_MAP_ = ATK_ROLE_IMAGE_MAP,
  NOTIFICATION_ = ATK_ROLE_NOTIFICATION,
  INFO_BAR_ = ATK_ROLE_INFO_BAR,
  LEVEL_BAR_ = ATK_ROLE_LEVEL_BAR,
  TITLE_BAR_ = ATK_ROLE_TITLE_BAR,
  BLOCK_QUOTE_ = ATK_ROLE_BLOCK_QUOTE,
  AUDIO_ = ATK_ROLE_AUDIO,
  VIDEO_ = ATK_ROLE_VIDEO,
  DEFINITION_ = ATK_ROLE_DEFINITION,
  ARTICLE_ = ATK_ROLE_ARTICLE,
  LANDMARK_ = ATK_ROLE_LANDMARK,
  LOG_ = ATK_ROLE_LOG,
  MARQUEE_ = ATK_ROLE_MARQUEE,
  MATH_ = ATK_ROLE_MATH,
  RATING_ = ATK_ROLE_RATING,
  TIMER_ = ATK_ROLE_TIMER,
  DESCRIPTION_LIST_ = ATK_ROLE_DESCRIPTION_LIST,
  DESCRIPTION_TERM_ = ATK_ROLE_DESCRIPTION_TERM,
  DESCRIPTION_VALUE_ = ATK_ROLE_DESCRIPTION_VALUE,
  STATIC_ = ATK_ROLE_STATIC,
  MATH_FRACTION_ = ATK_ROLE_MATH_FRACTION,
  MATH_ROOT_ = ATK_ROLE_MATH_ROOT,
  SUBSCRIPT_ = ATK_ROLE_SUBSCRIPT,
  SUPERSCRIPT_ = ATK_ROLE_SUPERSCRIPT,
  FOOTNOTE_ = ATK_ROLE_FOOTNOTE,
  CONTENT_DELETION_ = ATK_ROLE_CONTENT_DELETION,
  CONTENT_INSERTION_ = ATK_ROLE_CONTENT_INSERTION,
  MARK_ = ATK_ROLE_MARK,
  SUGGESTION_ = ATK_ROLE_SUGGESTION,
  LAST_DEFINED_ = ATK_ROLE_LAST_DEFINED,
};

} // namespace Atk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Atk::Role>
{ typedef AtkRole type; }; 
template<> struct declare_cpptype_of<AtkRole>
{ typedef Atk::Role type; }; 

template<> struct declare_gtype_of<Atk::Role>
{ static GType get_type() { return atk_role_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Atk {

enum class ScrollType {
  TOP_LEFT_ = ATK_SCROLL_TOP_LEFT,
  BOTTOM_RIGHT_ = ATK_SCROLL_BOTTOM_RIGHT,
  TOP_EDGE_ = ATK_SCROLL_TOP_EDGE,
  BOTTOM_EDGE_ = ATK_SCROLL_BOTTOM_EDGE,
  LEFT_EDGE_ = ATK_SCROLL_LEFT_EDGE,
  RIGHT_EDGE_ = ATK_SCROLL_RIGHT_EDGE,
  ANYWHERE_ = ATK_SCROLL_ANYWHERE,
};

} // namespace Atk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Atk::ScrollType>
{ typedef AtkScrollType type; }; 
template<> struct declare_cpptype_of<AtkScrollType>
{ typedef Atk::ScrollType type; }; 

template<> struct declare_gtype_of<Atk::ScrollType>
{ static GType get_type() { return atk_scroll_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Atk {

enum class StateType {
  INVALID_ = ATK_STATE_INVALID,
  ACTIVE_ = ATK_STATE_ACTIVE,
  ARMED_ = ATK_STATE_ARMED,
  BUSY_ = ATK_STATE_BUSY,
  CHECKED_ = ATK_STATE_CHECKED,
  DEFUNCT_ = ATK_STATE_DEFUNCT,
  EDITABLE_ = ATK_STATE_EDITABLE,
  ENABLED_ = ATK_STATE_ENABLED,
  EXPANDABLE_ = ATK_STATE_EXPANDABLE,
  EXPANDED_ = ATK_STATE_EXPANDED,
  FOCUSABLE_ = ATK_STATE_FOCUSABLE,
  FOCUSED_ = ATK_STATE_FOCUSED,
  HORIZONTAL_ = ATK_STATE_HORIZONTAL,
  ICONIFIED_ = ATK_STATE_ICONIFIED,
  MODAL_ = ATK_STATE_MODAL,
  MULTI_LINE_ = ATK_STATE_MULTI_LINE,
  MULTISELECTABLE_ = ATK_STATE_MULTISELECTABLE,
  OPAQUE_ = ATK_STATE_OPAQUE,
  PRESSED_ = ATK_STATE_PRESSED,
  RESIZABLE_ = ATK_STATE_RESIZABLE,
  SELECTABLE_ = ATK_STATE_SELECTABLE,
  SELECTED_ = ATK_STATE_SELECTED,
  SENSITIVE_ = ATK_STATE_SENSITIVE,
  SHOWING_ = ATK_STATE_SHOWING,
  SINGLE_LINE_ = ATK_STATE_SINGLE_LINE,
  STALE_ = ATK_STATE_STALE,
  TRANSIENT_ = ATK_STATE_TRANSIENT,
  VERTICAL_ = ATK_STATE_VERTICAL,
  VISIBLE_ = ATK_STATE_VISIBLE,
  MANAGES_DESCENDANTS_ = ATK_STATE_MANAGES_DESCENDANTS,
  INDETERMINATE_ = ATK_STATE_INDETERMINATE,
  TRUNCATED_ = ATK_STATE_TRUNCATED,
  REQUIRED_ = ATK_STATE_REQUIRED,
  INVALID_ENTRY_ = ATK_STATE_INVALID_ENTRY,
  SUPPORTS_AUTOCOMPLETION_ = ATK_STATE_SUPPORTS_AUTOCOMPLETION,
  SELECTABLE_TEXT_ = ATK_STATE_SELECTABLE_TEXT,
  DEFAULT_ = ATK_STATE_DEFAULT,
  ANIMATED_ = ATK_STATE_ANIMATED,
  VISITED_ = ATK_STATE_VISITED,
  CHECKABLE_ = ATK_STATE_CHECKABLE,
  HAS_POPUP_ = ATK_STATE_HAS_POPUP,
  HAS_TOOLTIP_ = ATK_STATE_HAS_TOOLTIP,
  READ_ONLY_ = ATK_STATE_READ_ONLY,
  LAST_DEFINED_ = ATK_STATE_LAST_DEFINED,
};

} // namespace Atk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Atk::StateType>
{ typedef AtkStateType type; }; 
template<> struct declare_cpptype_of<AtkStateType>
{ typedef Atk::StateType type; }; 

template<> struct declare_gtype_of<Atk::StateType>
{ static GType get_type() { return atk_state_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Atk {

enum class TextAttribute {
  INVALID_ = ATK_TEXT_ATTR_INVALID,
  LEFT_MARGIN_ = ATK_TEXT_ATTR_LEFT_MARGIN,
  RIGHT_MARGIN_ = ATK_TEXT_ATTR_RIGHT_MARGIN,
  INDENT_ = ATK_TEXT_ATTR_INDENT,
  INVISIBLE_ = ATK_TEXT_ATTR_INVISIBLE,
  EDITABLE_ = ATK_TEXT_ATTR_EDITABLE,
  PIXELS_ABOVE_LINES_ = ATK_TEXT_ATTR_PIXELS_ABOVE_LINES,
  PIXELS_BELOW_LINES_ = ATK_TEXT_ATTR_PIXELS_BELOW_LINES,
  PIXELS_INSIDE_WRAP_ = ATK_TEXT_ATTR_PIXELS_INSIDE_WRAP,
  BG_FULL_HEIGHT_ = ATK_TEXT_ATTR_BG_FULL_HEIGHT,
  RISE_ = ATK_TEXT_ATTR_RISE,
  UNDERLINE_ = ATK_TEXT_ATTR_UNDERLINE,
  STRIKETHROUGH_ = ATK_TEXT_ATTR_STRIKETHROUGH,
  SIZE_ = ATK_TEXT_ATTR_SIZE,
  SCALE_ = ATK_TEXT_ATTR_SCALE,
  WEIGHT_ = ATK_TEXT_ATTR_WEIGHT,
  LANGUAGE_ = ATK_TEXT_ATTR_LANGUAGE,
  FAMILY_NAME_ = ATK_TEXT_ATTR_FAMILY_NAME,
  BG_COLOR_ = ATK_TEXT_ATTR_BG_COLOR,
  FG_COLOR_ = ATK_TEXT_ATTR_FG_COLOR,
  BG_STIPPLE_ = ATK_TEXT_ATTR_BG_STIPPLE,
  FG_STIPPLE_ = ATK_TEXT_ATTR_FG_STIPPLE,
  WRAP_MODE_ = ATK_TEXT_ATTR_WRAP_MODE,
  DIRECTION_ = ATK_TEXT_ATTR_DIRECTION,
  JUSTIFICATION_ = ATK_TEXT_ATTR_JUSTIFICATION,
  STRETCH_ = ATK_TEXT_ATTR_STRETCH,
  VARIANT_ = ATK_TEXT_ATTR_VARIANT,
  STYLE_ = ATK_TEXT_ATTR_STYLE,
  TEXT_POSITION_ = ATK_TEXT_ATTR_TEXT_POSITION,
  LAST_DEFINED_ = ATK_TEXT_ATTR_LAST_DEFINED,
};

} // namespace Atk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Atk::TextAttribute>
{ typedef AtkTextAttribute type; }; 
template<> struct declare_cpptype_of<AtkTextAttribute>
{ typedef Atk::TextAttribute type; }; 

template<> struct declare_gtype_of<Atk::TextAttribute>
{ static GType get_type() { return atk_text_attribute_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Atk {

enum class TextBoundary {
  CHAR_ = ATK_TEXT_BOUNDARY_CHAR,
  WORD_START_ = ATK_TEXT_BOUNDARY_WORD_START,
  WORD_END_ = ATK_TEXT_BOUNDARY_WORD_END,
  SENTENCE_START_ = ATK_TEXT_BOUNDARY_SENTENCE_START,
  SENTENCE_END_ = ATK_TEXT_BOUNDARY_SENTENCE_END,
  LINE_START_ = ATK_TEXT_BOUNDARY_LINE_START,
  LINE_END_ = ATK_TEXT_BOUNDARY_LINE_END,
};

} // namespace Atk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Atk::TextBoundary>
{ typedef AtkTextBoundary type; }; 
template<> struct declare_cpptype_of<AtkTextBoundary>
{ typedef Atk::TextBoundary type; }; 

template<> struct declare_gtype_of<Atk::TextBoundary>
{ static GType get_type() { return atk_text_boundary_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Atk {

enum class TextClipType {
  NONE_ = ATK_TEXT_CLIP_NONE,
  MIN_ = ATK_TEXT_CLIP_MIN,
  MAX_ = ATK_TEXT_CLIP_MAX,
  BOTH_ = ATK_TEXT_CLIP_BOTH,
};

} // namespace Atk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Atk::TextClipType>
{ typedef AtkTextClipType type; }; 
template<> struct declare_cpptype_of<AtkTextClipType>
{ typedef Atk::TextClipType type; }; 

template<> struct declare_gtype_of<Atk::TextClipType>
{ static GType get_type() { return atk_text_clip_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Atk {

enum class TextGranularity {
  CHAR_ = ATK_TEXT_GRANULARITY_CHAR,
  WORD_ = ATK_TEXT_GRANULARITY_WORD,
  SENTENCE_ = ATK_TEXT_GRANULARITY_SENTENCE,
  LINE_ = ATK_TEXT_GRANULARITY_LINE,
  PARAGRAPH_ = ATK_TEXT_GRANULARITY_PARAGRAPH,
};

} // namespace Atk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Atk::TextGranularity>
{ typedef AtkTextGranularity type; }; 
template<> struct declare_cpptype_of<AtkTextGranularity>
{ typedef Atk::TextGranularity type; }; 

template<> struct declare_gtype_of<Atk::TextGranularity>
{ static GType get_type() { return atk_text_granularity_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Atk {

enum class ValueType {
  VERY_WEAK_ = ATK_VALUE_VERY_WEAK,
  WEAK_ = ATK_VALUE_WEAK,
  ACCEPTABLE_ = ATK_VALUE_ACCEPTABLE,
  STRONG_ = ATK_VALUE_STRONG,
  VERY_STRONG_ = ATK_VALUE_VERY_STRONG,
  VERY_LOW_ = ATK_VALUE_VERY_LOW,
  LOW_ = ATK_VALUE_LOW,
  MEDIUM_ = ATK_VALUE_MEDIUM,
  HIGH_ = ATK_VALUE_HIGH,
  VERY_HIGH_ = ATK_VALUE_VERY_HIGH,
  VERY_BAD_ = ATK_VALUE_VERY_BAD,
  BAD_ = ATK_VALUE_BAD,
  GOOD_ = ATK_VALUE_GOOD,
  VERY_GOOD_ = ATK_VALUE_VERY_GOOD,
  BEST_ = ATK_VALUE_BEST,
  LAST_DEFINED_ = ATK_VALUE_LAST_DEFINED,
};

} // namespace Atk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Atk::ValueType>
{ typedef AtkValueType type; }; 
template<> struct declare_cpptype_of<AtkValueType>
{ typedef Atk::ValueType type; }; 

template<> struct declare_gtype_of<Atk::ValueType>
{ static GType get_type() { return atk_value_type_get_type(); } };


} // namespace repository

} // namespace gi


#endif
