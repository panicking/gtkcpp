// AUTO-GENERATED

#ifndef _GI_GTK__ENUMS_HPP_
#define _GI_GTK__ENUMS_HPP_

namespace gi {

namespace repository {

namespace Gtk {

enum class Align {
  FILL_ = GTK_ALIGN_FILL,
  START_ = GTK_ALIGN_START,
  END_ = GTK_ALIGN_END,
  CENTER_ = GTK_ALIGN_CENTER,
  BASELINE_ = GTK_ALIGN_BASELINE,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::Align>
{ typedef GtkAlign type; }; 
template<> struct declare_cpptype_of<GtkAlign>
{ typedef Gtk::Align type; }; 

template<> struct declare_gtype_of<Gtk::Align>
{ static GType get_type() { return gtk_align_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class ArrowPlacement {
  BOTH_ = GTK_ARROWS_BOTH,
  START_ = GTK_ARROWS_START,
  END_ = GTK_ARROWS_END,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::ArrowPlacement>
{ typedef GtkArrowPlacement type; }; 
template<> struct declare_cpptype_of<GtkArrowPlacement>
{ typedef Gtk::ArrowPlacement type; }; 

template<> struct declare_gtype_of<Gtk::ArrowPlacement>
{ static GType get_type() { return gtk_arrow_placement_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class ArrowType {
  UP_ = GTK_ARROW_UP,
  DOWN_ = GTK_ARROW_DOWN,
  LEFT_ = GTK_ARROW_LEFT,
  RIGHT_ = GTK_ARROW_RIGHT,
  NONE_ = GTK_ARROW_NONE,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::ArrowType>
{ typedef GtkArrowType type; }; 
template<> struct declare_cpptype_of<GtkArrowType>
{ typedef Gtk::ArrowType type; }; 

template<> struct declare_gtype_of<Gtk::ArrowType>
{ static GType get_type() { return gtk_arrow_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class AssistantPageType {
  CONTENT_ = GTK_ASSISTANT_PAGE_CONTENT,
  INTRO_ = GTK_ASSISTANT_PAGE_INTRO,
  CONFIRM_ = GTK_ASSISTANT_PAGE_CONFIRM,
  SUMMARY_ = GTK_ASSISTANT_PAGE_SUMMARY,
  PROGRESS_ = GTK_ASSISTANT_PAGE_PROGRESS,
  CUSTOM_ = GTK_ASSISTANT_PAGE_CUSTOM,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::AssistantPageType>
{ typedef GtkAssistantPageType type; }; 
template<> struct declare_cpptype_of<GtkAssistantPageType>
{ typedef Gtk::AssistantPageType type; }; 

template<> struct declare_gtype_of<Gtk::AssistantPageType>
{ static GType get_type() { return gtk_assistant_page_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class BaselinePosition {
  TOP_ = GTK_BASELINE_POSITION_TOP,
  CENTER_ = GTK_BASELINE_POSITION_CENTER,
  BOTTOM_ = GTK_BASELINE_POSITION_BOTTOM,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::BaselinePosition>
{ typedef GtkBaselinePosition type; }; 
template<> struct declare_cpptype_of<GtkBaselinePosition>
{ typedef Gtk::BaselinePosition type; }; 

template<> struct declare_gtype_of<Gtk::BaselinePosition>
{ static GType get_type() { return gtk_baseline_position_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class BorderStyle {
  NONE_ = GTK_BORDER_STYLE_NONE,
  SOLID_ = GTK_BORDER_STYLE_SOLID,
  INSET_ = GTK_BORDER_STYLE_INSET,
  OUTSET_ = GTK_BORDER_STYLE_OUTSET,
  HIDDEN_ = GTK_BORDER_STYLE_HIDDEN,
  DOTTED_ = GTK_BORDER_STYLE_DOTTED,
  DASHED_ = GTK_BORDER_STYLE_DASHED,
  DOUBLE_ = GTK_BORDER_STYLE_DOUBLE,
  GROOVE_ = GTK_BORDER_STYLE_GROOVE,
  RIDGE_ = GTK_BORDER_STYLE_RIDGE,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::BorderStyle>
{ typedef GtkBorderStyle type; }; 
template<> struct declare_cpptype_of<GtkBorderStyle>
{ typedef Gtk::BorderStyle type; }; 

template<> struct declare_gtype_of<Gtk::BorderStyle>
{ static GType get_type() { return gtk_border_style_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class BuilderError {
  INVALID_TYPE_FUNCTION_ = GTK_BUILDER_ERROR_INVALID_TYPE_FUNCTION,
  UNHANDLED_TAG_ = GTK_BUILDER_ERROR_UNHANDLED_TAG,
  MISSING_ATTRIBUTE_ = GTK_BUILDER_ERROR_MISSING_ATTRIBUTE,
  INVALID_ATTRIBUTE_ = GTK_BUILDER_ERROR_INVALID_ATTRIBUTE,
  INVALID_TAG_ = GTK_BUILDER_ERROR_INVALID_TAG,
  MISSING_PROPERTY_VALUE_ = GTK_BUILDER_ERROR_MISSING_PROPERTY_VALUE,
  INVALID_VALUE_ = GTK_BUILDER_ERROR_INVALID_VALUE,
  VERSION_MISMATCH_ = GTK_BUILDER_ERROR_VERSION_MISMATCH,
  DUPLICATE_ID_ = GTK_BUILDER_ERROR_DUPLICATE_ID,
  OBJECT_TYPE_REFUSED_ = GTK_BUILDER_ERROR_OBJECT_TYPE_REFUSED,
  TEMPLATE_MISMATCH_ = GTK_BUILDER_ERROR_TEMPLATE_MISMATCH,
  INVALID_PROPERTY_ = GTK_BUILDER_ERROR_INVALID_PROPERTY,
  INVALID_SIGNAL_ = GTK_BUILDER_ERROR_INVALID_SIGNAL,
  INVALID_ID_ = GTK_BUILDER_ERROR_INVALID_ID,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::BuilderError>
{ typedef GtkBuilderError type; }; 
template<> struct declare_cpptype_of<GtkBuilderError>
{ typedef Gtk::BuilderError type; }; 

template<> struct declare_gtype_of<Gtk::BuilderError>
{ static GType get_type() { return gtk_builder_error_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class ButtonBoxStyle {
  SPREAD_ = GTK_BUTTONBOX_SPREAD,
  EDGE_ = GTK_BUTTONBOX_EDGE,
  START_ = GTK_BUTTONBOX_START,
  END_ = GTK_BUTTONBOX_END,
  CENTER_ = GTK_BUTTONBOX_CENTER,
  EXPAND_ = GTK_BUTTONBOX_EXPAND,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::ButtonBoxStyle>
{ typedef GtkButtonBoxStyle type; }; 
template<> struct declare_cpptype_of<GtkButtonBoxStyle>
{ typedef Gtk::ButtonBoxStyle type; }; 

template<> struct declare_gtype_of<Gtk::ButtonBoxStyle>
{ static GType get_type() { return gtk_button_box_style_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class ButtonRole {
  NORMAL_ = GTK_BUTTON_ROLE_NORMAL,
  CHECK_ = GTK_BUTTON_ROLE_CHECK,
  RADIO_ = GTK_BUTTON_ROLE_RADIO,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::ButtonRole>
{ typedef GtkButtonRole type; }; 
template<> struct declare_cpptype_of<GtkButtonRole>
{ typedef Gtk::ButtonRole type; }; 

template<> struct declare_gtype_of<Gtk::ButtonRole>
{ static GType get_type() { return gtk_button_role_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class ButtonsType {
  NONE_ = GTK_BUTTONS_NONE,
  OK_ = GTK_BUTTONS_OK,
  CLOSE_ = GTK_BUTTONS_CLOSE,
  CANCEL_ = GTK_BUTTONS_CANCEL,
  YES_NO_ = GTK_BUTTONS_YES_NO,
  OK_CANCEL_ = GTK_BUTTONS_OK_CANCEL,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::ButtonsType>
{ typedef GtkButtonsType type; }; 
template<> struct declare_cpptype_of<GtkButtonsType>
{ typedef Gtk::ButtonsType type; }; 

template<> struct declare_gtype_of<Gtk::ButtonsType>
{ static GType get_type() { return gtk_buttons_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class CellRendererAccelMode {
  GTK_ = GTK_CELL_RENDERER_ACCEL_MODE_GTK,
  OTHER_ = GTK_CELL_RENDERER_ACCEL_MODE_OTHER,
  MODIFIER_TAP_ = GTK_CELL_RENDERER_ACCEL_MODE_MODIFIER_TAP,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::CellRendererAccelMode>
{ typedef GtkCellRendererAccelMode type; }; 
template<> struct declare_cpptype_of<GtkCellRendererAccelMode>
{ typedef Gtk::CellRendererAccelMode type; }; 

template<> struct declare_gtype_of<Gtk::CellRendererAccelMode>
{ static GType get_type() { return gtk_cell_renderer_accel_mode_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class CellRendererMode {
  INERT_ = GTK_CELL_RENDERER_MODE_INERT,
  ACTIVATABLE_ = GTK_CELL_RENDERER_MODE_ACTIVATABLE,
  EDITABLE_ = GTK_CELL_RENDERER_MODE_EDITABLE,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::CellRendererMode>
{ typedef GtkCellRendererMode type; }; 
template<> struct declare_cpptype_of<GtkCellRendererMode>
{ typedef Gtk::CellRendererMode type; }; 

template<> struct declare_gtype_of<Gtk::CellRendererMode>
{ static GType get_type() { return gtk_cell_renderer_mode_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class CornerType {
  TOP_LEFT_ = GTK_CORNER_TOP_LEFT,
  BOTTOM_LEFT_ = GTK_CORNER_BOTTOM_LEFT,
  TOP_RIGHT_ = GTK_CORNER_TOP_RIGHT,
  BOTTOM_RIGHT_ = GTK_CORNER_BOTTOM_RIGHT,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::CornerType>
{ typedef GtkCornerType type; }; 
template<> struct declare_cpptype_of<GtkCornerType>
{ typedef Gtk::CornerType type; }; 

template<> struct declare_gtype_of<Gtk::CornerType>
{ static GType get_type() { return gtk_corner_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class CssProviderError {
  FAILED_ = GTK_CSS_PROVIDER_ERROR_FAILED,
  SYNTAX_ = GTK_CSS_PROVIDER_ERROR_SYNTAX,
  IMPORT_ = GTK_CSS_PROVIDER_ERROR_IMPORT,
  NAME_ = GTK_CSS_PROVIDER_ERROR_NAME,
  DEPRECATED_ = GTK_CSS_PROVIDER_ERROR_DEPRECATED,
  UNKNOWN_VALUE_ = GTK_CSS_PROVIDER_ERROR_UNKNOWN_VALUE,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::CssProviderError>
{ typedef GtkCssProviderError type; }; 
template<> struct declare_cpptype_of<GtkCssProviderError>
{ typedef Gtk::CssProviderError type; }; 

template<> struct declare_gtype_of<Gtk::CssProviderError>
{ static GType get_type() { return gtk_css_provider_error_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class CssSectionType {
  DOCUMENT_ = GTK_CSS_SECTION_DOCUMENT,
  IMPORT_ = GTK_CSS_SECTION_IMPORT,
  COLOR_DEFINITION_ = GTK_CSS_SECTION_COLOR_DEFINITION,
  BINDING_SET_ = GTK_CSS_SECTION_BINDING_SET,
  RULESET_ = GTK_CSS_SECTION_RULESET,
  SELECTOR_ = GTK_CSS_SECTION_SELECTOR,
  DECLARATION_ = GTK_CSS_SECTION_DECLARATION,
  VALUE_ = GTK_CSS_SECTION_VALUE,
  KEYFRAMES_ = GTK_CSS_SECTION_KEYFRAMES,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::CssSectionType>
{ typedef GtkCssSectionType type; }; 
template<> struct declare_cpptype_of<GtkCssSectionType>
{ typedef Gtk::CssSectionType type; }; 

template<> struct declare_gtype_of<Gtk::CssSectionType>
{ static GType get_type() { return gtk_css_section_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class DeleteType {
  CHARS_ = GTK_DELETE_CHARS,
  WORD_ENDS_ = GTK_DELETE_WORD_ENDS,
  WORDS_ = GTK_DELETE_WORDS,
  DISPLAY_LINES_ = GTK_DELETE_DISPLAY_LINES,
  DISPLAY_LINE_ENDS_ = GTK_DELETE_DISPLAY_LINE_ENDS,
  PARAGRAPH_ENDS_ = GTK_DELETE_PARAGRAPH_ENDS,
  PARAGRAPHS_ = GTK_DELETE_PARAGRAPHS,
  WHITESPACE_ = GTK_DELETE_WHITESPACE,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::DeleteType>
{ typedef GtkDeleteType type; }; 
template<> struct declare_cpptype_of<GtkDeleteType>
{ typedef Gtk::DeleteType type; }; 

template<> struct declare_gtype_of<Gtk::DeleteType>
{ static GType get_type() { return gtk_delete_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class DirectionType {
  TAB_FORWARD_ = GTK_DIR_TAB_FORWARD,
  TAB_BACKWARD_ = GTK_DIR_TAB_BACKWARD,
  UP_ = GTK_DIR_UP,
  DOWN_ = GTK_DIR_DOWN,
  LEFT_ = GTK_DIR_LEFT,
  RIGHT_ = GTK_DIR_RIGHT,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::DirectionType>
{ typedef GtkDirectionType type; }; 
template<> struct declare_cpptype_of<GtkDirectionType>
{ typedef Gtk::DirectionType type; }; 

template<> struct declare_gtype_of<Gtk::DirectionType>
{ static GType get_type() { return gtk_direction_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class DragResult {
  SUCCESS_ = GTK_DRAG_RESULT_SUCCESS,
  NO_TARGET_ = GTK_DRAG_RESULT_NO_TARGET,
  USER_CANCELLED_ = GTK_DRAG_RESULT_USER_CANCELLED,
  TIMEOUT_EXPIRED_ = GTK_DRAG_RESULT_TIMEOUT_EXPIRED,
  GRAB_BROKEN_ = GTK_DRAG_RESULT_GRAB_BROKEN,
  ERROR_ = GTK_DRAG_RESULT_ERROR,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::DragResult>
{ typedef GtkDragResult type; }; 
template<> struct declare_cpptype_of<GtkDragResult>
{ typedef Gtk::DragResult type; }; 

template<> struct declare_gtype_of<Gtk::DragResult>
{ static GType get_type() { return gtk_drag_result_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class EntryIconPosition {
  PRIMARY_ = GTK_ENTRY_ICON_PRIMARY,
  SECONDARY_ = GTK_ENTRY_ICON_SECONDARY,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::EntryIconPosition>
{ typedef GtkEntryIconPosition type; }; 
template<> struct declare_cpptype_of<GtkEntryIconPosition>
{ typedef Gtk::EntryIconPosition type; }; 

template<> struct declare_gtype_of<Gtk::EntryIconPosition>
{ static GType get_type() { return gtk_entry_icon_position_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class EventSequenceState {
  NONE_ = GTK_EVENT_SEQUENCE_NONE,
  CLAIMED_ = GTK_EVENT_SEQUENCE_CLAIMED,
  DENIED_ = GTK_EVENT_SEQUENCE_DENIED,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::EventSequenceState>
{ typedef GtkEventSequenceState type; }; 
template<> struct declare_cpptype_of<GtkEventSequenceState>
{ typedef Gtk::EventSequenceState type; }; 

template<> struct declare_gtype_of<Gtk::EventSequenceState>
{ static GType get_type() { return gtk_event_sequence_state_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class ExpanderStyle {
  COLLAPSED_ = GTK_EXPANDER_COLLAPSED,
  SEMI_COLLAPSED_ = GTK_EXPANDER_SEMI_COLLAPSED,
  SEMI_EXPANDED_ = GTK_EXPANDER_SEMI_EXPANDED,
  EXPANDED_ = GTK_EXPANDER_EXPANDED,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::ExpanderStyle>
{ typedef GtkExpanderStyle type; }; 
template<> struct declare_cpptype_of<GtkExpanderStyle>
{ typedef Gtk::ExpanderStyle type; }; 

template<> struct declare_gtype_of<Gtk::ExpanderStyle>
{ static GType get_type() { return gtk_expander_style_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class FileChooserAction {
  OPEN_ = GTK_FILE_CHOOSER_ACTION_OPEN,
  SAVE_ = GTK_FILE_CHOOSER_ACTION_SAVE,
  SELECT_FOLDER_ = GTK_FILE_CHOOSER_ACTION_SELECT_FOLDER,
  CREATE_FOLDER_ = GTK_FILE_CHOOSER_ACTION_CREATE_FOLDER,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::FileChooserAction>
{ typedef GtkFileChooserAction type; }; 
template<> struct declare_cpptype_of<GtkFileChooserAction>
{ typedef Gtk::FileChooserAction type; }; 

template<> struct declare_gtype_of<Gtk::FileChooserAction>
{ static GType get_type() { return gtk_file_chooser_action_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class FileChooserConfirmation {
  CONFIRM_ = GTK_FILE_CHOOSER_CONFIRMATION_CONFIRM,
  ACCEPT_FILENAME_ = GTK_FILE_CHOOSER_CONFIRMATION_ACCEPT_FILENAME,
  SELECT_AGAIN_ = GTK_FILE_CHOOSER_CONFIRMATION_SELECT_AGAIN,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::FileChooserConfirmation>
{ typedef GtkFileChooserConfirmation type; }; 
template<> struct declare_cpptype_of<GtkFileChooserConfirmation>
{ typedef Gtk::FileChooserConfirmation type; }; 

template<> struct declare_gtype_of<Gtk::FileChooserConfirmation>
{ static GType get_type() { return gtk_file_chooser_confirmation_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class FileChooserError {
  NONEXISTENT_ = GTK_FILE_CHOOSER_ERROR_NONEXISTENT,
  BAD_FILENAME_ = GTK_FILE_CHOOSER_ERROR_BAD_FILENAME,
  ALREADY_EXISTS_ = GTK_FILE_CHOOSER_ERROR_ALREADY_EXISTS,
  INCOMPLETE_HOSTNAME_ = GTK_FILE_CHOOSER_ERROR_INCOMPLETE_HOSTNAME,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::FileChooserError>
{ typedef GtkFileChooserError type; }; 
template<> struct declare_cpptype_of<GtkFileChooserError>
{ typedef Gtk::FileChooserError type; }; 

template<> struct declare_gtype_of<Gtk::FileChooserError>
{ static GType get_type() { return gtk_file_chooser_error_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class IconSize {
  INVALID_ = GTK_ICON_SIZE_INVALID,
  MENU_ = GTK_ICON_SIZE_MENU,
  SMALL_TOOLBAR_ = GTK_ICON_SIZE_SMALL_TOOLBAR,
  LARGE_TOOLBAR_ = GTK_ICON_SIZE_LARGE_TOOLBAR,
  BUTTON_ = GTK_ICON_SIZE_BUTTON,
  DND_ = GTK_ICON_SIZE_DND,
  DIALOG_ = GTK_ICON_SIZE_DIALOG,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::IconSize>
{ typedef GtkIconSize type; }; 
template<> struct declare_cpptype_of<GtkIconSize>
{ typedef Gtk::IconSize type; }; 

template<> struct declare_gtype_of<Gtk::IconSize>
{ static GType get_type() { return gtk_icon_size_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class IconThemeError {
  NOT_FOUND_ = GTK_ICON_THEME_NOT_FOUND,
  FAILED_ = GTK_ICON_THEME_FAILED,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::IconThemeError>
{ typedef GtkIconThemeError type; }; 
template<> struct declare_cpptype_of<GtkIconThemeError>
{ typedef Gtk::IconThemeError type; }; 

template<> struct declare_gtype_of<Gtk::IconThemeError>
{ static GType get_type() { return gtk_icon_theme_error_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class IconViewDropPosition {
  NO_DROP_ = GTK_ICON_VIEW_NO_DROP,
  DROP_INTO_ = GTK_ICON_VIEW_DROP_INTO,
  DROP_LEFT_ = GTK_ICON_VIEW_DROP_LEFT,
  DROP_RIGHT_ = GTK_ICON_VIEW_DROP_RIGHT,
  DROP_ABOVE_ = GTK_ICON_VIEW_DROP_ABOVE,
  DROP_BELOW_ = GTK_ICON_VIEW_DROP_BELOW,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::IconViewDropPosition>
{ typedef GtkIconViewDropPosition type; }; 
template<> struct declare_cpptype_of<GtkIconViewDropPosition>
{ typedef Gtk::IconViewDropPosition type; }; 

template<> struct declare_gtype_of<Gtk::IconViewDropPosition>
{ static GType get_type() { return gtk_icon_view_drop_position_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class ImageType {
  EMPTY_ = GTK_IMAGE_EMPTY,
  PIXBUF_ = GTK_IMAGE_PIXBUF,
  STOCK_ = GTK_IMAGE_STOCK,
  ICON_SET_ = GTK_IMAGE_ICON_SET,
  ANIMATION_ = GTK_IMAGE_ANIMATION,
  ICON_NAME_ = GTK_IMAGE_ICON_NAME,
  GICON_ = GTK_IMAGE_GICON,
  SURFACE_ = GTK_IMAGE_SURFACE,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::ImageType>
{ typedef GtkImageType type; }; 
template<> struct declare_cpptype_of<GtkImageType>
{ typedef Gtk::ImageType type; }; 

template<> struct declare_gtype_of<Gtk::ImageType>
{ static GType get_type() { return gtk_image_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class InputPurpose {
  FREE_FORM_ = GTK_INPUT_PURPOSE_FREE_FORM,
  ALPHA_ = GTK_INPUT_PURPOSE_ALPHA,
  DIGITS_ = GTK_INPUT_PURPOSE_DIGITS,
  NUMBER_ = GTK_INPUT_PURPOSE_NUMBER,
  PHONE_ = GTK_INPUT_PURPOSE_PHONE,
  URL_ = GTK_INPUT_PURPOSE_URL,
  EMAIL_ = GTK_INPUT_PURPOSE_EMAIL,
  NAME_ = GTK_INPUT_PURPOSE_NAME,
  PASSWORD_ = GTK_INPUT_PURPOSE_PASSWORD,
  PIN_ = GTK_INPUT_PURPOSE_PIN,
  TERMINAL_ = GTK_INPUT_PURPOSE_TERMINAL,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::InputPurpose>
{ typedef GtkInputPurpose type; }; 
template<> struct declare_cpptype_of<GtkInputPurpose>
{ typedef Gtk::InputPurpose type; }; 

template<> struct declare_gtype_of<Gtk::InputPurpose>
{ static GType get_type() { return gtk_input_purpose_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class Justification {
  LEFT_ = GTK_JUSTIFY_LEFT,
  RIGHT_ = GTK_JUSTIFY_RIGHT,
  CENTER_ = GTK_JUSTIFY_CENTER,
  FILL_ = GTK_JUSTIFY_FILL,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::Justification>
{ typedef GtkJustification type; }; 
template<> struct declare_cpptype_of<GtkJustification>
{ typedef Gtk::Justification type; }; 

template<> struct declare_gtype_of<Gtk::Justification>
{ static GType get_type() { return gtk_justification_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class LevelBarMode {
  CONTINUOUS_ = GTK_LEVEL_BAR_MODE_CONTINUOUS,
  DISCRETE_ = GTK_LEVEL_BAR_MODE_DISCRETE,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::LevelBarMode>
{ typedef GtkLevelBarMode type; }; 
template<> struct declare_cpptype_of<GtkLevelBarMode>
{ typedef Gtk::LevelBarMode type; }; 

template<> struct declare_gtype_of<Gtk::LevelBarMode>
{ static GType get_type() { return gtk_level_bar_mode_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class License {
  UNKNOWN_ = GTK_LICENSE_UNKNOWN,
  CUSTOM_ = GTK_LICENSE_CUSTOM,
  GPL_2_0_ = GTK_LICENSE_GPL_2_0,
  GPL_3_0_ = GTK_LICENSE_GPL_3_0,
  LGPL_2_1_ = GTK_LICENSE_LGPL_2_1,
  LGPL_3_0_ = GTK_LICENSE_LGPL_3_0,
  BSD_ = GTK_LICENSE_BSD,
  MIT_X11_ = GTK_LICENSE_MIT_X11,
  ARTISTIC_ = GTK_LICENSE_ARTISTIC,
  GPL_2_0_ONLY_ = GTK_LICENSE_GPL_2_0_ONLY,
  GPL_3_0_ONLY_ = GTK_LICENSE_GPL_3_0_ONLY,
  LGPL_2_1_ONLY_ = GTK_LICENSE_LGPL_2_1_ONLY,
  LGPL_3_0_ONLY_ = GTK_LICENSE_LGPL_3_0_ONLY,
  AGPL_3_0_ = GTK_LICENSE_AGPL_3_0,
  AGPL_3_0_ONLY_ = GTK_LICENSE_AGPL_3_0_ONLY,
  BSD_3_ = GTK_LICENSE_BSD_3,
  APACHE_2_0_ = GTK_LICENSE_APACHE_2_0,
  MPL_2_0_ = GTK_LICENSE_MPL_2_0,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::License>
{ typedef GtkLicense type; }; 
template<> struct declare_cpptype_of<GtkLicense>
{ typedef Gtk::License type; }; 

template<> struct declare_gtype_of<Gtk::License>
{ static GType get_type() { return gtk_license_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class MenuDirectionType {
  PARENT_ = GTK_MENU_DIR_PARENT,
  CHILD_ = GTK_MENU_DIR_CHILD,
  NEXT_ = GTK_MENU_DIR_NEXT,
  PREV_ = GTK_MENU_DIR_PREV,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::MenuDirectionType>
{ typedef GtkMenuDirectionType type; }; 
template<> struct declare_cpptype_of<GtkMenuDirectionType>
{ typedef Gtk::MenuDirectionType type; }; 

template<> struct declare_gtype_of<Gtk::MenuDirectionType>
{ static GType get_type() { return gtk_menu_direction_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class MessageType {
  INFO_ = GTK_MESSAGE_INFO,
  WARNING_ = GTK_MESSAGE_WARNING,
  QUESTION_ = GTK_MESSAGE_QUESTION,
  ERROR_ = GTK_MESSAGE_ERROR,
  OTHER_ = GTK_MESSAGE_OTHER,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::MessageType>
{ typedef GtkMessageType type; }; 
template<> struct declare_cpptype_of<GtkMessageType>
{ typedef Gtk::MessageType type; }; 

template<> struct declare_gtype_of<Gtk::MessageType>
{ static GType get_type() { return gtk_message_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class MovementStep {
  LOGICAL_POSITIONS_ = GTK_MOVEMENT_LOGICAL_POSITIONS,
  VISUAL_POSITIONS_ = GTK_MOVEMENT_VISUAL_POSITIONS,
  WORDS_ = GTK_MOVEMENT_WORDS,
  DISPLAY_LINES_ = GTK_MOVEMENT_DISPLAY_LINES,
  DISPLAY_LINE_ENDS_ = GTK_MOVEMENT_DISPLAY_LINE_ENDS,
  PARAGRAPHS_ = GTK_MOVEMENT_PARAGRAPHS,
  PARAGRAPH_ENDS_ = GTK_MOVEMENT_PARAGRAPH_ENDS,
  PAGES_ = GTK_MOVEMENT_PAGES,
  BUFFER_ENDS_ = GTK_MOVEMENT_BUFFER_ENDS,
  HORIZONTAL_PAGES_ = GTK_MOVEMENT_HORIZONTAL_PAGES,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::MovementStep>
{ typedef GtkMovementStep type; }; 
template<> struct declare_cpptype_of<GtkMovementStep>
{ typedef Gtk::MovementStep type; }; 

template<> struct declare_gtype_of<Gtk::MovementStep>
{ static GType get_type() { return gtk_movement_step_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class NotebookTab {
  FIRST_ = GTK_NOTEBOOK_TAB_FIRST,
  LAST_ = GTK_NOTEBOOK_TAB_LAST,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::NotebookTab>
{ typedef GtkNotebookTab type; }; 
template<> struct declare_cpptype_of<GtkNotebookTab>
{ typedef Gtk::NotebookTab type; }; 

template<> struct declare_gtype_of<Gtk::NotebookTab>
{ static GType get_type() { return gtk_notebook_tab_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class NumberUpLayout {
  LRTB_ = GTK_NUMBER_UP_LAYOUT_LEFT_TO_RIGHT_TOP_TO_BOTTOM,
  LRBT_ = GTK_NUMBER_UP_LAYOUT_LEFT_TO_RIGHT_BOTTOM_TO_TOP,
  RLTB_ = GTK_NUMBER_UP_LAYOUT_RIGHT_TO_LEFT_TOP_TO_BOTTOM,
  RLBT_ = GTK_NUMBER_UP_LAYOUT_RIGHT_TO_LEFT_BOTTOM_TO_TOP,
  TBLR_ = GTK_NUMBER_UP_LAYOUT_TOP_TO_BOTTOM_LEFT_TO_RIGHT,
  TBRL_ = GTK_NUMBER_UP_LAYOUT_TOP_TO_BOTTOM_RIGHT_TO_LEFT,
  BTLR_ = GTK_NUMBER_UP_LAYOUT_BOTTOM_TO_TOP_LEFT_TO_RIGHT,
  BTRL_ = GTK_NUMBER_UP_LAYOUT_BOTTOM_TO_TOP_RIGHT_TO_LEFT,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::NumberUpLayout>
{ typedef GtkNumberUpLayout type; }; 
template<> struct declare_cpptype_of<GtkNumberUpLayout>
{ typedef Gtk::NumberUpLayout type; }; 

template<> struct declare_gtype_of<Gtk::NumberUpLayout>
{ static GType get_type() { return gtk_number_up_layout_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class Orientation {
  HORIZONTAL_ = GTK_ORIENTATION_HORIZONTAL,
  VERTICAL_ = GTK_ORIENTATION_VERTICAL,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::Orientation>
{ typedef GtkOrientation type; }; 
template<> struct declare_cpptype_of<GtkOrientation>
{ typedef Gtk::Orientation type; }; 

template<> struct declare_gtype_of<Gtk::Orientation>
{ static GType get_type() { return gtk_orientation_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class PackDirection {
  LTR_ = GTK_PACK_DIRECTION_LTR,
  RTL_ = GTK_PACK_DIRECTION_RTL,
  TTB_ = GTK_PACK_DIRECTION_TTB,
  BTT_ = GTK_PACK_DIRECTION_BTT,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::PackDirection>
{ typedef GtkPackDirection type; }; 
template<> struct declare_cpptype_of<GtkPackDirection>
{ typedef Gtk::PackDirection type; }; 

template<> struct declare_gtype_of<Gtk::PackDirection>
{ static GType get_type() { return gtk_pack_direction_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class PackType {
  START_ = GTK_PACK_START,
  END_ = GTK_PACK_END,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::PackType>
{ typedef GtkPackType type; }; 
template<> struct declare_cpptype_of<GtkPackType>
{ typedef Gtk::PackType type; }; 

template<> struct declare_gtype_of<Gtk::PackType>
{ static GType get_type() { return gtk_pack_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class PadActionType {
  BUTTON_ = GTK_PAD_ACTION_BUTTON,
  RING_ = GTK_PAD_ACTION_RING,
  STRIP_ = GTK_PAD_ACTION_STRIP,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::PadActionType>
{ typedef GtkPadActionType type; }; 
template<> struct declare_cpptype_of<GtkPadActionType>
{ typedef Gtk::PadActionType type; }; 

template<> struct declare_gtype_of<Gtk::PadActionType>
{ static GType get_type() { return gtk_pad_action_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class PageOrientation {
  PORTRAIT_ = GTK_PAGE_ORIENTATION_PORTRAIT,
  LANDSCAPE_ = GTK_PAGE_ORIENTATION_LANDSCAPE,
  REVERSE_PORTRAIT_ = GTK_PAGE_ORIENTATION_REVERSE_PORTRAIT,
  REVERSE_LANDSCAPE_ = GTK_PAGE_ORIENTATION_REVERSE_LANDSCAPE,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::PageOrientation>
{ typedef GtkPageOrientation type; }; 
template<> struct declare_cpptype_of<GtkPageOrientation>
{ typedef Gtk::PageOrientation type; }; 

template<> struct declare_gtype_of<Gtk::PageOrientation>
{ static GType get_type() { return gtk_page_orientation_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class PageSet {
  ALL_ = GTK_PAGE_SET_ALL,
  EVEN_ = GTK_PAGE_SET_EVEN,
  ODD_ = GTK_PAGE_SET_ODD,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::PageSet>
{ typedef GtkPageSet type; }; 
template<> struct declare_cpptype_of<GtkPageSet>
{ typedef Gtk::PageSet type; }; 

template<> struct declare_gtype_of<Gtk::PageSet>
{ static GType get_type() { return gtk_page_set_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class PanDirection {
  LEFT_ = GTK_PAN_DIRECTION_LEFT,
  RIGHT_ = GTK_PAN_DIRECTION_RIGHT,
  UP_ = GTK_PAN_DIRECTION_UP,
  DOWN_ = GTK_PAN_DIRECTION_DOWN,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::PanDirection>
{ typedef GtkPanDirection type; }; 
template<> struct declare_cpptype_of<GtkPanDirection>
{ typedef Gtk::PanDirection type; }; 

template<> struct declare_gtype_of<Gtk::PanDirection>
{ static GType get_type() { return gtk_pan_direction_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class PolicyType {
  ALWAYS_ = GTK_POLICY_ALWAYS,
  AUTOMATIC_ = GTK_POLICY_AUTOMATIC,
  NEVER_ = GTK_POLICY_NEVER,
  EXTERNAL_ = GTK_POLICY_EXTERNAL,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::PolicyType>
{ typedef GtkPolicyType type; }; 
template<> struct declare_cpptype_of<GtkPolicyType>
{ typedef Gtk::PolicyType type; }; 

template<> struct declare_gtype_of<Gtk::PolicyType>
{ static GType get_type() { return gtk_policy_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class PopoverConstraint {
  NONE_ = GTK_POPOVER_CONSTRAINT_NONE,
  WINDOW_ = GTK_POPOVER_CONSTRAINT_WINDOW,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::PopoverConstraint>
{ typedef GtkPopoverConstraint type; }; 
template<> struct declare_cpptype_of<GtkPopoverConstraint>
{ typedef Gtk::PopoverConstraint type; }; 

template<> struct declare_gtype_of<Gtk::PopoverConstraint>
{ static GType get_type() { return gtk_popover_constraint_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class PositionType {
  LEFT_ = GTK_POS_LEFT,
  RIGHT_ = GTK_POS_RIGHT,
  TOP_ = GTK_POS_TOP,
  BOTTOM_ = GTK_POS_BOTTOM,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::PositionType>
{ typedef GtkPositionType type; }; 
template<> struct declare_cpptype_of<GtkPositionType>
{ typedef Gtk::PositionType type; }; 

template<> struct declare_gtype_of<Gtk::PositionType>
{ static GType get_type() { return gtk_position_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class PrintDuplex {
  SIMPLEX_ = GTK_PRINT_DUPLEX_SIMPLEX,
  HORIZONTAL_ = GTK_PRINT_DUPLEX_HORIZONTAL,
  VERTICAL_ = GTK_PRINT_DUPLEX_VERTICAL,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::PrintDuplex>
{ typedef GtkPrintDuplex type; }; 
template<> struct declare_cpptype_of<GtkPrintDuplex>
{ typedef Gtk::PrintDuplex type; }; 

template<> struct declare_gtype_of<Gtk::PrintDuplex>
{ static GType get_type() { return gtk_print_duplex_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class PrintError {
  GENERAL_ = GTK_PRINT_ERROR_GENERAL,
  INTERNAL_ERROR_ = GTK_PRINT_ERROR_INTERNAL_ERROR,
  NOMEM_ = GTK_PRINT_ERROR_NOMEM,
  INVALID_FILE_ = GTK_PRINT_ERROR_INVALID_FILE,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::PrintError>
{ typedef GtkPrintError type; }; 
template<> struct declare_cpptype_of<GtkPrintError>
{ typedef Gtk::PrintError type; }; 

template<> struct declare_gtype_of<Gtk::PrintError>
{ static GType get_type() { return gtk_print_error_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class PrintOperationAction {
  PRINT_DIALOG_ = GTK_PRINT_OPERATION_ACTION_PRINT_DIALOG,
  PRINT_ = GTK_PRINT_OPERATION_ACTION_PRINT,
  PREVIEW_ = GTK_PRINT_OPERATION_ACTION_PREVIEW,
  EXPORT_ = GTK_PRINT_OPERATION_ACTION_EXPORT,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::PrintOperationAction>
{ typedef GtkPrintOperationAction type; }; 
template<> struct declare_cpptype_of<GtkPrintOperationAction>
{ typedef Gtk::PrintOperationAction type; }; 

template<> struct declare_gtype_of<Gtk::PrintOperationAction>
{ static GType get_type() { return gtk_print_operation_action_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class PrintOperationResult {
  ERROR_ = GTK_PRINT_OPERATION_RESULT_ERROR,
  APPLY_ = GTK_PRINT_OPERATION_RESULT_APPLY,
  CANCEL_ = GTK_PRINT_OPERATION_RESULT_CANCEL,
  IN_PROGRESS_ = GTK_PRINT_OPERATION_RESULT_IN_PROGRESS,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::PrintOperationResult>
{ typedef GtkPrintOperationResult type; }; 
template<> struct declare_cpptype_of<GtkPrintOperationResult>
{ typedef Gtk::PrintOperationResult type; }; 

template<> struct declare_gtype_of<Gtk::PrintOperationResult>
{ static GType get_type() { return gtk_print_operation_result_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class PrintPages {
  ALL_ = GTK_PRINT_PAGES_ALL,
  CURRENT_ = GTK_PRINT_PAGES_CURRENT,
  RANGES_ = GTK_PRINT_PAGES_RANGES,
  SELECTION_ = GTK_PRINT_PAGES_SELECTION,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::PrintPages>
{ typedef GtkPrintPages type; }; 
template<> struct declare_cpptype_of<GtkPrintPages>
{ typedef Gtk::PrintPages type; }; 

template<> struct declare_gtype_of<Gtk::PrintPages>
{ static GType get_type() { return gtk_print_pages_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class PrintQuality {
  LOW_ = GTK_PRINT_QUALITY_LOW,
  NORMAL_ = GTK_PRINT_QUALITY_NORMAL,
  HIGH_ = GTK_PRINT_QUALITY_HIGH,
  DRAFT_ = GTK_PRINT_QUALITY_DRAFT,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::PrintQuality>
{ typedef GtkPrintQuality type; }; 
template<> struct declare_cpptype_of<GtkPrintQuality>
{ typedef Gtk::PrintQuality type; }; 

template<> struct declare_gtype_of<Gtk::PrintQuality>
{ static GType get_type() { return gtk_print_quality_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class PrintStatus {
  INITIAL_ = GTK_PRINT_STATUS_INITIAL,
  PREPARING_ = GTK_PRINT_STATUS_PREPARING,
  GENERATING_DATA_ = GTK_PRINT_STATUS_GENERATING_DATA,
  SENDING_DATA_ = GTK_PRINT_STATUS_SENDING_DATA,
  PENDING_ = GTK_PRINT_STATUS_PENDING,
  PENDING_ISSUE_ = GTK_PRINT_STATUS_PENDING_ISSUE,
  PRINTING_ = GTK_PRINT_STATUS_PRINTING,
  FINISHED_ = GTK_PRINT_STATUS_FINISHED,
  FINISHED_ABORTED_ = GTK_PRINT_STATUS_FINISHED_ABORTED,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::PrintStatus>
{ typedef GtkPrintStatus type; }; 
template<> struct declare_cpptype_of<GtkPrintStatus>
{ typedef Gtk::PrintStatus type; }; 

template<> struct declare_gtype_of<Gtk::PrintStatus>
{ static GType get_type() { return gtk_print_status_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class PropagationPhase {
  NONE_ = GTK_PHASE_NONE,
  CAPTURE_ = GTK_PHASE_CAPTURE,
  BUBBLE_ = GTK_PHASE_BUBBLE,
  TARGET_ = GTK_PHASE_TARGET,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::PropagationPhase>
{ typedef GtkPropagationPhase type; }; 
template<> struct declare_cpptype_of<GtkPropagationPhase>
{ typedef Gtk::PropagationPhase type; }; 

template<> struct declare_gtype_of<Gtk::PropagationPhase>
{ static GType get_type() { return gtk_propagation_phase_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class RecentChooserError {
  NOT_FOUND_ = GTK_RECENT_CHOOSER_ERROR_NOT_FOUND,
  INVALID_URI_ = GTK_RECENT_CHOOSER_ERROR_INVALID_URI,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::RecentChooserError>
{ typedef GtkRecentChooserError type; }; 
template<> struct declare_cpptype_of<GtkRecentChooserError>
{ typedef Gtk::RecentChooserError type; }; 

template<> struct declare_gtype_of<Gtk::RecentChooserError>
{ static GType get_type() { return gtk_recent_chooser_error_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class RecentManagerError {
  NOT_FOUND_ = GTK_RECENT_MANAGER_ERROR_NOT_FOUND,
  INVALID_URI_ = GTK_RECENT_MANAGER_ERROR_INVALID_URI,
  INVALID_ENCODING_ = GTK_RECENT_MANAGER_ERROR_INVALID_ENCODING,
  NOT_REGISTERED_ = GTK_RECENT_MANAGER_ERROR_NOT_REGISTERED,
  READ_ = GTK_RECENT_MANAGER_ERROR_READ,
  WRITE_ = GTK_RECENT_MANAGER_ERROR_WRITE,
  UNKNOWN_ = GTK_RECENT_MANAGER_ERROR_UNKNOWN,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::RecentManagerError>
{ typedef GtkRecentManagerError type; }; 
template<> struct declare_cpptype_of<GtkRecentManagerError>
{ typedef Gtk::RecentManagerError type; }; 

template<> struct declare_gtype_of<Gtk::RecentManagerError>
{ static GType get_type() { return gtk_recent_manager_error_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class RecentSortType {
  NONE_ = GTK_RECENT_SORT_NONE,
  MRU_ = GTK_RECENT_SORT_MRU,
  LRU_ = GTK_RECENT_SORT_LRU,
  CUSTOM_ = GTK_RECENT_SORT_CUSTOM,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::RecentSortType>
{ typedef GtkRecentSortType type; }; 
template<> struct declare_cpptype_of<GtkRecentSortType>
{ typedef Gtk::RecentSortType type; }; 

template<> struct declare_gtype_of<Gtk::RecentSortType>
{ static GType get_type() { return gtk_recent_sort_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class ReliefStyle {
  NORMAL_ = GTK_RELIEF_NORMAL,
  HALF_ = GTK_RELIEF_HALF,
  NONE_ = GTK_RELIEF_NONE,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::ReliefStyle>
{ typedef GtkReliefStyle type; }; 
template<> struct declare_cpptype_of<GtkReliefStyle>
{ typedef Gtk::ReliefStyle type; }; 

template<> struct declare_gtype_of<Gtk::ReliefStyle>
{ static GType get_type() { return gtk_relief_style_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class ResizeMode {
  PARENT_ = GTK_RESIZE_PARENT,
  QUEUE_ = GTK_RESIZE_QUEUE,
  IMMEDIATE_ = GTK_RESIZE_IMMEDIATE,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::ResizeMode>
{ typedef GtkResizeMode type; }; 
template<> struct declare_cpptype_of<GtkResizeMode>
{ typedef Gtk::ResizeMode type; }; 

template<> struct declare_gtype_of<Gtk::ResizeMode>
{ static GType get_type() { return gtk_resize_mode_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class ResponseType {
  NONE_ = GTK_RESPONSE_NONE,
  REJECT_ = GTK_RESPONSE_REJECT,
  ACCEPT_ = GTK_RESPONSE_ACCEPT,
  DELETE_EVENT_ = GTK_RESPONSE_DELETE_EVENT,
  OK_ = GTK_RESPONSE_OK,
  CANCEL_ = GTK_RESPONSE_CANCEL,
  CLOSE_ = GTK_RESPONSE_CLOSE,
  YES_ = GTK_RESPONSE_YES,
  NO_ = GTK_RESPONSE_NO,
  APPLY_ = GTK_RESPONSE_APPLY,
  HELP_ = GTK_RESPONSE_HELP,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::ResponseType>
{ typedef GtkResponseType type; }; 
template<> struct declare_cpptype_of<GtkResponseType>
{ typedef Gtk::ResponseType type; }; 

template<> struct declare_gtype_of<Gtk::ResponseType>
{ static GType get_type() { return gtk_response_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class RevealerTransitionType {
  NONE_ = GTK_REVEALER_TRANSITION_TYPE_NONE,
  CROSSFADE_ = GTK_REVEALER_TRANSITION_TYPE_CROSSFADE,
  SLIDE_RIGHT_ = GTK_REVEALER_TRANSITION_TYPE_SLIDE_RIGHT,
  SLIDE_LEFT_ = GTK_REVEALER_TRANSITION_TYPE_SLIDE_LEFT,
  SLIDE_UP_ = GTK_REVEALER_TRANSITION_TYPE_SLIDE_UP,
  SLIDE_DOWN_ = GTK_REVEALER_TRANSITION_TYPE_SLIDE_DOWN,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::RevealerTransitionType>
{ typedef GtkRevealerTransitionType type; }; 
template<> struct declare_cpptype_of<GtkRevealerTransitionType>
{ typedef Gtk::RevealerTransitionType type; }; 

template<> struct declare_gtype_of<Gtk::RevealerTransitionType>
{ static GType get_type() { return gtk_revealer_transition_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class ScrollStep {
  STEPS_ = GTK_SCROLL_STEPS,
  PAGES_ = GTK_SCROLL_PAGES,
  ENDS_ = GTK_SCROLL_ENDS,
  HORIZONTAL_STEPS_ = GTK_SCROLL_HORIZONTAL_STEPS,
  HORIZONTAL_PAGES_ = GTK_SCROLL_HORIZONTAL_PAGES,
  HORIZONTAL_ENDS_ = GTK_SCROLL_HORIZONTAL_ENDS,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::ScrollStep>
{ typedef GtkScrollStep type; }; 
template<> struct declare_cpptype_of<GtkScrollStep>
{ typedef Gtk::ScrollStep type; }; 

template<> struct declare_gtype_of<Gtk::ScrollStep>
{ static GType get_type() { return gtk_scroll_step_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class ScrollType {
  NONE_ = GTK_SCROLL_NONE,
  JUMP_ = GTK_SCROLL_JUMP,
  STEP_BACKWARD_ = GTK_SCROLL_STEP_BACKWARD,
  STEP_FORWARD_ = GTK_SCROLL_STEP_FORWARD,
  PAGE_BACKWARD_ = GTK_SCROLL_PAGE_BACKWARD,
  PAGE_FORWARD_ = GTK_SCROLL_PAGE_FORWARD,
  STEP_UP_ = GTK_SCROLL_STEP_UP,
  STEP_DOWN_ = GTK_SCROLL_STEP_DOWN,
  PAGE_UP_ = GTK_SCROLL_PAGE_UP,
  PAGE_DOWN_ = GTK_SCROLL_PAGE_DOWN,
  STEP_LEFT_ = GTK_SCROLL_STEP_LEFT,
  STEP_RIGHT_ = GTK_SCROLL_STEP_RIGHT,
  PAGE_LEFT_ = GTK_SCROLL_PAGE_LEFT,
  PAGE_RIGHT_ = GTK_SCROLL_PAGE_RIGHT,
  START_ = GTK_SCROLL_START,
  END_ = GTK_SCROLL_END,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::ScrollType>
{ typedef GtkScrollType type; }; 
template<> struct declare_cpptype_of<GtkScrollType>
{ typedef Gtk::ScrollType type; }; 

template<> struct declare_gtype_of<Gtk::ScrollType>
{ static GType get_type() { return gtk_scroll_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class ScrollablePolicy {
  MINIMUM_ = GTK_SCROLL_MINIMUM,
  NATURAL_ = GTK_SCROLL_NATURAL,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::ScrollablePolicy>
{ typedef GtkScrollablePolicy type; }; 
template<> struct declare_cpptype_of<GtkScrollablePolicy>
{ typedef Gtk::ScrollablePolicy type; }; 

template<> struct declare_gtype_of<Gtk::ScrollablePolicy>
{ static GType get_type() { return gtk_scrollable_policy_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class SelectionMode {
  NONE_ = GTK_SELECTION_NONE,
  SINGLE_ = GTK_SELECTION_SINGLE,
  BROWSE_ = GTK_SELECTION_BROWSE,
  MULTIPLE_ = GTK_SELECTION_MULTIPLE,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::SelectionMode>
{ typedef GtkSelectionMode type; }; 
template<> struct declare_cpptype_of<GtkSelectionMode>
{ typedef Gtk::SelectionMode type; }; 

template<> struct declare_gtype_of<Gtk::SelectionMode>
{ static GType get_type() { return gtk_selection_mode_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class SensitivityType {
  AUTO_ = GTK_SENSITIVITY_AUTO,
  ON_ = GTK_SENSITIVITY_ON,
  OFF_ = GTK_SENSITIVITY_OFF,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::SensitivityType>
{ typedef GtkSensitivityType type; }; 
template<> struct declare_cpptype_of<GtkSensitivityType>
{ typedef Gtk::SensitivityType type; }; 

template<> struct declare_gtype_of<Gtk::SensitivityType>
{ static GType get_type() { return gtk_sensitivity_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class ShadowType {
  NONE_ = GTK_SHADOW_NONE,
  IN_ = GTK_SHADOW_IN,
  OUT_ = GTK_SHADOW_OUT,
  ETCHED_IN_ = GTK_SHADOW_ETCHED_IN,
  ETCHED_OUT_ = GTK_SHADOW_ETCHED_OUT,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::ShadowType>
{ typedef GtkShadowType type; }; 
template<> struct declare_cpptype_of<GtkShadowType>
{ typedef Gtk::ShadowType type; }; 

template<> struct declare_gtype_of<Gtk::ShadowType>
{ static GType get_type() { return gtk_shadow_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class ShortcutType {
  ACCELERATOR_ = GTK_SHORTCUT_ACCELERATOR,
  GESTURE_PINCH_ = GTK_SHORTCUT_GESTURE_PINCH,
  GESTURE_STRETCH_ = GTK_SHORTCUT_GESTURE_STRETCH,
  GESTURE_ROTATE_CLOCKWISE_ = GTK_SHORTCUT_GESTURE_ROTATE_CLOCKWISE,
  GESTURE_ROTATE_COUNTERCLOCKWISE_ = GTK_SHORTCUT_GESTURE_ROTATE_COUNTERCLOCKWISE,
  GESTURE_TWO_FINGER_SWIPE_LEFT_ = GTK_SHORTCUT_GESTURE_TWO_FINGER_SWIPE_LEFT,
  GESTURE_TWO_FINGER_SWIPE_RIGHT_ = GTK_SHORTCUT_GESTURE_TWO_FINGER_SWIPE_RIGHT,
  GESTURE_ = GTK_SHORTCUT_GESTURE,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::ShortcutType>
{ typedef GtkShortcutType type; }; 
template<> struct declare_cpptype_of<GtkShortcutType>
{ typedef Gtk::ShortcutType type; }; 

template<> struct declare_gtype_of<Gtk::ShortcutType>
{ static GType get_type() { return gtk_shortcut_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class SizeGroupMode {
  NONE_ = GTK_SIZE_GROUP_NONE,
  HORIZONTAL_ = GTK_SIZE_GROUP_HORIZONTAL,
  VERTICAL_ = GTK_SIZE_GROUP_VERTICAL,
  BOTH_ = GTK_SIZE_GROUP_BOTH,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::SizeGroupMode>
{ typedef GtkSizeGroupMode type; }; 
template<> struct declare_cpptype_of<GtkSizeGroupMode>
{ typedef Gtk::SizeGroupMode type; }; 

template<> struct declare_gtype_of<Gtk::SizeGroupMode>
{ static GType get_type() { return gtk_size_group_mode_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class SizeRequestMode {
  HEIGHT_FOR_WIDTH_ = GTK_SIZE_REQUEST_HEIGHT_FOR_WIDTH,
  WIDTH_FOR_HEIGHT_ = GTK_SIZE_REQUEST_WIDTH_FOR_HEIGHT,
  CONSTANT_SIZE_ = GTK_SIZE_REQUEST_CONSTANT_SIZE,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::SizeRequestMode>
{ typedef GtkSizeRequestMode type; }; 
template<> struct declare_cpptype_of<GtkSizeRequestMode>
{ typedef Gtk::SizeRequestMode type; }; 

template<> struct declare_gtype_of<Gtk::SizeRequestMode>
{ static GType get_type() { return gtk_size_request_mode_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class SortType {
  ASCENDING_ = GTK_SORT_ASCENDING,
  DESCENDING_ = GTK_SORT_DESCENDING,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::SortType>
{ typedef GtkSortType type; }; 
template<> struct declare_cpptype_of<GtkSortType>
{ typedef Gtk::SortType type; }; 

template<> struct declare_gtype_of<Gtk::SortType>
{ static GType get_type() { return gtk_sort_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class SpinButtonUpdatePolicy {
  ALWAYS_ = GTK_UPDATE_ALWAYS,
  IF_VALID_ = GTK_UPDATE_IF_VALID,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::SpinButtonUpdatePolicy>
{ typedef GtkSpinButtonUpdatePolicy type; }; 
template<> struct declare_cpptype_of<GtkSpinButtonUpdatePolicy>
{ typedef Gtk::SpinButtonUpdatePolicy type; }; 

template<> struct declare_gtype_of<Gtk::SpinButtonUpdatePolicy>
{ static GType get_type() { return gtk_spin_button_update_policy_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class SpinType {
  STEP_FORWARD_ = GTK_SPIN_STEP_FORWARD,
  STEP_BACKWARD_ = GTK_SPIN_STEP_BACKWARD,
  PAGE_FORWARD_ = GTK_SPIN_PAGE_FORWARD,
  PAGE_BACKWARD_ = GTK_SPIN_PAGE_BACKWARD,
  HOME_ = GTK_SPIN_HOME,
  END_ = GTK_SPIN_END,
  USER_DEFINED_ = GTK_SPIN_USER_DEFINED,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::SpinType>
{ typedef GtkSpinType type; }; 
template<> struct declare_cpptype_of<GtkSpinType>
{ typedef Gtk::SpinType type; }; 

template<> struct declare_gtype_of<Gtk::SpinType>
{ static GType get_type() { return gtk_spin_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class StackTransitionType {
  NONE_ = GTK_STACK_TRANSITION_TYPE_NONE,
  CROSSFADE_ = GTK_STACK_TRANSITION_TYPE_CROSSFADE,
  SLIDE_RIGHT_ = GTK_STACK_TRANSITION_TYPE_SLIDE_RIGHT,
  SLIDE_LEFT_ = GTK_STACK_TRANSITION_TYPE_SLIDE_LEFT,
  SLIDE_UP_ = GTK_STACK_TRANSITION_TYPE_SLIDE_UP,
  SLIDE_DOWN_ = GTK_STACK_TRANSITION_TYPE_SLIDE_DOWN,
  SLIDE_LEFT_RIGHT_ = GTK_STACK_TRANSITION_TYPE_SLIDE_LEFT_RIGHT,
  SLIDE_UP_DOWN_ = GTK_STACK_TRANSITION_TYPE_SLIDE_UP_DOWN,
  OVER_UP_ = GTK_STACK_TRANSITION_TYPE_OVER_UP,
  OVER_DOWN_ = GTK_STACK_TRANSITION_TYPE_OVER_DOWN,
  OVER_LEFT_ = GTK_STACK_TRANSITION_TYPE_OVER_LEFT,
  OVER_RIGHT_ = GTK_STACK_TRANSITION_TYPE_OVER_RIGHT,
  UNDER_UP_ = GTK_STACK_TRANSITION_TYPE_UNDER_UP,
  UNDER_DOWN_ = GTK_STACK_TRANSITION_TYPE_UNDER_DOWN,
  UNDER_LEFT_ = GTK_STACK_TRANSITION_TYPE_UNDER_LEFT,
  UNDER_RIGHT_ = GTK_STACK_TRANSITION_TYPE_UNDER_RIGHT,
  OVER_UP_DOWN_ = GTK_STACK_TRANSITION_TYPE_OVER_UP_DOWN,
  OVER_DOWN_UP_ = GTK_STACK_TRANSITION_TYPE_OVER_DOWN_UP,
  OVER_LEFT_RIGHT_ = GTK_STACK_TRANSITION_TYPE_OVER_LEFT_RIGHT,
  OVER_RIGHT_LEFT_ = GTK_STACK_TRANSITION_TYPE_OVER_RIGHT_LEFT,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::StackTransitionType>
{ typedef GtkStackTransitionType type; }; 
template<> struct declare_cpptype_of<GtkStackTransitionType>
{ typedef Gtk::StackTransitionType type; }; 

template<> struct declare_gtype_of<Gtk::StackTransitionType>
{ static GType get_type() { return gtk_stack_transition_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class TextBufferTargetInfo {
  BUFFER_CONTENTS_ = GTK_TEXT_BUFFER_TARGET_INFO_BUFFER_CONTENTS,
  RICH_TEXT_ = GTK_TEXT_BUFFER_TARGET_INFO_RICH_TEXT,
  TEXT_ = GTK_TEXT_BUFFER_TARGET_INFO_TEXT,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::TextBufferTargetInfo>
{ typedef GtkTextBufferTargetInfo type; }; 
template<> struct declare_cpptype_of<GtkTextBufferTargetInfo>
{ typedef Gtk::TextBufferTargetInfo type; }; 

template<> struct declare_gtype_of<Gtk::TextBufferTargetInfo>
{ static GType get_type() { return gtk_text_buffer_target_info_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class TextDirection {
  NONE_ = GTK_TEXT_DIR_NONE,
  LTR_ = GTK_TEXT_DIR_LTR,
  RTL_ = GTK_TEXT_DIR_RTL,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::TextDirection>
{ typedef GtkTextDirection type; }; 
template<> struct declare_cpptype_of<GtkTextDirection>
{ typedef Gtk::TextDirection type; }; 

template<> struct declare_gtype_of<Gtk::TextDirection>
{ static GType get_type() { return gtk_text_direction_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class TextExtendSelection {
  WORD_ = GTK_TEXT_EXTEND_SELECTION_WORD,
  LINE_ = GTK_TEXT_EXTEND_SELECTION_LINE,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::TextExtendSelection>
{ typedef GtkTextExtendSelection type; }; 
template<> struct declare_cpptype_of<GtkTextExtendSelection>
{ typedef Gtk::TextExtendSelection type; }; 

template<> struct declare_gtype_of<Gtk::TextExtendSelection>
{ static GType get_type() { return gtk_text_extend_selection_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class TextViewLayer {
  BELOW_ = GTK_TEXT_VIEW_LAYER_BELOW,
  ABOVE_ = GTK_TEXT_VIEW_LAYER_ABOVE,
  BELOW_TEXT_ = GTK_TEXT_VIEW_LAYER_BELOW_TEXT,
  ABOVE_TEXT_ = GTK_TEXT_VIEW_LAYER_ABOVE_TEXT,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::TextViewLayer>
{ typedef GtkTextViewLayer type; }; 
template<> struct declare_cpptype_of<GtkTextViewLayer>
{ typedef Gtk::TextViewLayer type; }; 

template<> struct declare_gtype_of<Gtk::TextViewLayer>
{ static GType get_type() { return gtk_text_view_layer_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class TextWindowType {
  PRIVATE_ = GTK_TEXT_WINDOW_PRIVATE,
  WIDGET_ = GTK_TEXT_WINDOW_WIDGET,
  TEXT_ = GTK_TEXT_WINDOW_TEXT,
  LEFT_ = GTK_TEXT_WINDOW_LEFT,
  RIGHT_ = GTK_TEXT_WINDOW_RIGHT,
  TOP_ = GTK_TEXT_WINDOW_TOP,
  BOTTOM_ = GTK_TEXT_WINDOW_BOTTOM,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::TextWindowType>
{ typedef GtkTextWindowType type; }; 
template<> struct declare_cpptype_of<GtkTextWindowType>
{ typedef Gtk::TextWindowType type; }; 

template<> struct declare_gtype_of<Gtk::TextWindowType>
{ static GType get_type() { return gtk_text_window_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class ToolbarStyle {
  ICONS_ = GTK_TOOLBAR_ICONS,
  TEXT_ = GTK_TOOLBAR_TEXT,
  BOTH_ = GTK_TOOLBAR_BOTH,
  BOTH_HORIZ_ = GTK_TOOLBAR_BOTH_HORIZ,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::ToolbarStyle>
{ typedef GtkToolbarStyle type; }; 
template<> struct declare_cpptype_of<GtkToolbarStyle>
{ typedef Gtk::ToolbarStyle type; }; 

template<> struct declare_gtype_of<Gtk::ToolbarStyle>
{ static GType get_type() { return gtk_toolbar_style_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class TreeViewColumnSizing {
  GROW_ONLY_ = GTK_TREE_VIEW_COLUMN_GROW_ONLY,
  AUTOSIZE_ = GTK_TREE_VIEW_COLUMN_AUTOSIZE,
  FIXED_ = GTK_TREE_VIEW_COLUMN_FIXED,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::TreeViewColumnSizing>
{ typedef GtkTreeViewColumnSizing type; }; 
template<> struct declare_cpptype_of<GtkTreeViewColumnSizing>
{ typedef Gtk::TreeViewColumnSizing type; }; 

template<> struct declare_gtype_of<Gtk::TreeViewColumnSizing>
{ static GType get_type() { return gtk_tree_view_column_sizing_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class TreeViewDropPosition {
  BEFORE_ = GTK_TREE_VIEW_DROP_BEFORE,
  AFTER_ = GTK_TREE_VIEW_DROP_AFTER,
  INTO_OR_BEFORE_ = GTK_TREE_VIEW_DROP_INTO_OR_BEFORE,
  INTO_OR_AFTER_ = GTK_TREE_VIEW_DROP_INTO_OR_AFTER,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::TreeViewDropPosition>
{ typedef GtkTreeViewDropPosition type; }; 
template<> struct declare_cpptype_of<GtkTreeViewDropPosition>
{ typedef Gtk::TreeViewDropPosition type; }; 

template<> struct declare_gtype_of<Gtk::TreeViewDropPosition>
{ static GType get_type() { return gtk_tree_view_drop_position_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class TreeViewGridLines {
  NONE_ = GTK_TREE_VIEW_GRID_LINES_NONE,
  HORIZONTAL_ = GTK_TREE_VIEW_GRID_LINES_HORIZONTAL,
  VERTICAL_ = GTK_TREE_VIEW_GRID_LINES_VERTICAL,
  BOTH_ = GTK_TREE_VIEW_GRID_LINES_BOTH,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::TreeViewGridLines>
{ typedef GtkTreeViewGridLines type; }; 
template<> struct declare_cpptype_of<GtkTreeViewGridLines>
{ typedef Gtk::TreeViewGridLines type; }; 

template<> struct declare_gtype_of<Gtk::TreeViewGridLines>
{ static GType get_type() { return gtk_tree_view_grid_lines_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class Unit {
  NONE_ = GTK_UNIT_NONE,
  POINTS_ = GTK_UNIT_POINTS,
  INCH_ = GTK_UNIT_INCH,
  MM_ = GTK_UNIT_MM,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::Unit>
{ typedef GtkUnit type; }; 
template<> struct declare_cpptype_of<GtkUnit>
{ typedef Gtk::Unit type; }; 

template<> struct declare_gtype_of<Gtk::Unit>
{ static GType get_type() { return gtk_unit_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class WidgetHelpType {
  TOOLTIP_ = GTK_WIDGET_HELP_TOOLTIP,
  WHATS_THIS_ = GTK_WIDGET_HELP_WHATS_THIS,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::WidgetHelpType>
{ typedef GtkWidgetHelpType type; }; 
template<> struct declare_cpptype_of<GtkWidgetHelpType>
{ typedef Gtk::WidgetHelpType type; }; 

template<> struct declare_gtype_of<Gtk::WidgetHelpType>
{ static GType get_type() { return gtk_widget_help_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class WindowPosition {
  NONE_ = GTK_WIN_POS_NONE,
  CENTER_ = GTK_WIN_POS_CENTER,
  MOUSE_ = GTK_WIN_POS_MOUSE,
  CENTER_ALWAYS_ = GTK_WIN_POS_CENTER_ALWAYS,
  CENTER_ON_PARENT_ = GTK_WIN_POS_CENTER_ON_PARENT,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::WindowPosition>
{ typedef GtkWindowPosition type; }; 
template<> struct declare_cpptype_of<GtkWindowPosition>
{ typedef Gtk::WindowPosition type; }; 

template<> struct declare_gtype_of<Gtk::WindowPosition>
{ static GType get_type() { return gtk_window_position_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class WindowType {
  TOPLEVEL_ = GTK_WINDOW_TOPLEVEL,
  POPUP_ = GTK_WINDOW_POPUP,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::WindowType>
{ typedef GtkWindowType type; }; 
template<> struct declare_cpptype_of<GtkWindowType>
{ typedef Gtk::WindowType type; }; 

template<> struct declare_gtype_of<Gtk::WindowType>
{ static GType get_type() { return gtk_window_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class WrapMode {
  NONE_ = GTK_WRAP_NONE,
  CHAR_ = GTK_WRAP_CHAR,
  WORD_ = GTK_WRAP_WORD,
  WORD_CHAR_ = GTK_WRAP_WORD_CHAR,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::WrapMode>
{ typedef GtkWrapMode type; }; 
template<> struct declare_cpptype_of<GtkWrapMode>
{ typedef Gtk::WrapMode type; }; 

template<> struct declare_gtype_of<Gtk::WrapMode>
{ static GType get_type() { return gtk_wrap_mode_get_type(); } };


} // namespace repository

} // namespace gi


#endif
