// AUTO-GENERATED

#ifndef _GI_GTK_TEXTVIEW_HPP_
#define _GI_GTK_TEXTVIEW_HPP_

#include "container.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Adjustment;
class Scrollable;
class TextAttributes;
class TextBuffer;
class TextChildAnchor;
class TextIter;
class TextMark;
class Widget;

class TextView;

namespace base {


#define GI_GTK_TEXTVIEW_BASE base::TextViewBase
class TextViewBase : public Gtk::Container
{
typedef Gtk::Container super_type;
public:
typedef ::GtkTextView BaseObjectType;

TextViewBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_text_view_get_type(); } 

GI_INLINE_DECL Gtk::Scrollable interface_ (gi::interface_tag<Gtk::Scrollable>);

GI_INLINE_DECL operator Gtk::Scrollable ();

// GtkWidget* gtk_text_view_new ();
// ::GtkTextView* gtk_text_view_new ();
static GI_INLINE_DECL Gtk::TextView new_ () noexcept;

// GtkWidget* gtk_text_view_new_with_buffer (GtkTextBuffer* buffer);
// ::GtkTextView* gtk_text_view_new_with_buffer (::GtkTextBuffer* buffer);
static GI_INLINE_DECL Gtk::TextView new_with_buffer (Gtk::TextBuffer buffer) noexcept;

// void gtk_text_view_add_child_at_anchor (GtkTextView* text_view, GtkWidget* child, GtkTextChildAnchor* anchor);
// void gtk_text_view_add_child_at_anchor (::GtkTextView* text_view, ::GtkWidget* child, ::GtkTextChildAnchor* anchor);
GI_INLINE_DECL void add_child_at_anchor (Gtk::Widget child, Gtk::TextChildAnchor anchor) noexcept;

// void gtk_text_view_add_child_in_window (GtkTextView* text_view, GtkWidget* child, GtkTextWindowType which_window, gint xpos, gint ypos);
// void gtk_text_view_add_child_in_window (::GtkTextView* text_view, ::GtkWidget* child, ::GtkTextWindowType which_window, gint xpos, gint ypos);
GI_INLINE_DECL void add_child_in_window (Gtk::Widget child, Gtk::TextWindowType which_window, gint xpos, gint ypos) noexcept;

// gboolean gtk_text_view_backward_display_line (GtkTextView* text_view, GtkTextIter* iter);
// gboolean gtk_text_view_backward_display_line (::GtkTextView* text_view, ::GtkTextIter* iter);
GI_INLINE_DECL bool backward_display_line (Gtk::TextIter iter) noexcept;

// gboolean gtk_text_view_backward_display_line_start (GtkTextView* text_view, GtkTextIter* iter);
// gboolean gtk_text_view_backward_display_line_start (::GtkTextView* text_view, ::GtkTextIter* iter);
GI_INLINE_DECL bool backward_display_line_start (Gtk::TextIter iter) noexcept;

// void gtk_text_view_buffer_to_window_coords (GtkTextView* text_view, GtkTextWindowType win, gint buffer_x, gint buffer_y, gint* window_x, gint* window_y);
// void gtk_text_view_buffer_to_window_coords (::GtkTextView* text_view, ::GtkTextWindowType win, gint buffer_x, gint buffer_y, gint* window_x, gint* window_y);
GI_INLINE_DECL void buffer_to_window_coords (Gtk::TextWindowType win, gint buffer_x, gint buffer_y, gint * window_x = nullptr, gint * window_y = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> buffer_to_window_coords (Gtk::TextWindowType win, gint buffer_x, gint buffer_y) noexcept;

// gboolean gtk_text_view_forward_display_line (GtkTextView* text_view, GtkTextIter* iter);
// gboolean gtk_text_view_forward_display_line (::GtkTextView* text_view, ::GtkTextIter* iter);
GI_INLINE_DECL bool forward_display_line (Gtk::TextIter iter) noexcept;

// gboolean gtk_text_view_forward_display_line_end (GtkTextView* text_view, GtkTextIter* iter);
// gboolean gtk_text_view_forward_display_line_end (::GtkTextView* text_view, ::GtkTextIter* iter);
GI_INLINE_DECL bool forward_display_line_end (Gtk::TextIter iter) noexcept;

// gboolean gtk_text_view_get_accepts_tab (GtkTextView* text_view);
// gboolean gtk_text_view_get_accepts_tab (::GtkTextView* text_view);
GI_INLINE_DECL bool get_accepts_tab () noexcept;

// gint gtk_text_view_get_border_window_size (GtkTextView* text_view, GtkTextWindowType type);
// gint gtk_text_view_get_border_window_size (::GtkTextView* text_view, ::GtkTextWindowType type);
GI_INLINE_DECL gint get_border_window_size (Gtk::TextWindowType type) noexcept;

// gint gtk_text_view_get_bottom_margin (GtkTextView* text_view);
// gint gtk_text_view_get_bottom_margin (::GtkTextView* text_view);
GI_INLINE_DECL gint get_bottom_margin () noexcept;

// GtkTextBuffer* gtk_text_view_get_buffer (GtkTextView* text_view);
// ::GtkTextBuffer* gtk_text_view_get_buffer (::GtkTextView* text_view);
GI_INLINE_DECL Gtk::TextBuffer get_buffer () noexcept;

// void gtk_text_view_get_cursor_locations (GtkTextView* text_view, const GtkTextIter* iter, GdkRectangle* strong, GdkRectangle* weak);
// void gtk_text_view_get_cursor_locations (::GtkTextView* text_view, const ::GtkTextIter* iter, ::GdkRectangle* strong, ::GdkRectangle* weak);
GI_INLINE_DECL void get_cursor_locations (const Gtk::TextIter & iter, Gdk::Rectangle * strong = nullptr, Gdk::Rectangle * weak = nullptr) noexcept;
GI_INLINE_DECL void get_cursor_locations (Gdk::Rectangle * strong = nullptr, Gdk::Rectangle * weak = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Gdk::Rectangle, Gdk::Rectangle> get_cursor_locations (const Gtk::TextIter & iter) noexcept;
GI_INLINE_DECL std::tuple<Gdk::Rectangle, Gdk::Rectangle> get_cursor_locations () noexcept;

// gboolean gtk_text_view_get_cursor_visible (GtkTextView* text_view);
// gboolean gtk_text_view_get_cursor_visible (::GtkTextView* text_view);
GI_INLINE_DECL bool get_cursor_visible () noexcept;

// GtkTextAttributes* gtk_text_view_get_default_attributes (GtkTextView* text_view);
// ::GtkTextAttributes* gtk_text_view_get_default_attributes (::GtkTextView* text_view);
GI_INLINE_DECL Gtk::TextAttributes get_default_attributes () noexcept;

// gboolean gtk_text_view_get_editable (GtkTextView* text_view);
// gboolean gtk_text_view_get_editable (::GtkTextView* text_view);
GI_INLINE_DECL bool get_editable () noexcept;

// GtkAdjustment* gtk_text_view_get_hadjustment (GtkTextView* text_view);
// ::GtkAdjustment* gtk_text_view_get_hadjustment (::GtkTextView* text_view);
// IGNORE; deprecated

// gint gtk_text_view_get_indent (GtkTextView* text_view);
// gint gtk_text_view_get_indent (::GtkTextView* text_view);
GI_INLINE_DECL gint get_indent () noexcept;

// GtkInputHints gtk_text_view_get_input_hints (GtkTextView* text_view);
// ::GtkInputHints gtk_text_view_get_input_hints (::GtkTextView* text_view);
GI_INLINE_DECL Gtk::InputHints get_input_hints () noexcept;

// GtkInputPurpose gtk_text_view_get_input_purpose (GtkTextView* text_view);
// ::GtkInputPurpose gtk_text_view_get_input_purpose (::GtkTextView* text_view);
GI_INLINE_DECL Gtk::InputPurpose get_input_purpose () noexcept;

// gboolean gtk_text_view_get_iter_at_location (GtkTextView* text_view, GtkTextIter* iter, gint x, gint y);
// gboolean gtk_text_view_get_iter_at_location (::GtkTextView* text_view, ::GtkTextIter* iter, gint x, gint y);
GI_INLINE_DECL bool get_iter_at_location (Gtk::TextIter & iter, gint x, gint y) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TextIter> get_iter_at_location (gint x, gint y) noexcept;

// gboolean gtk_text_view_get_iter_at_position (GtkTextView* text_view, GtkTextIter* iter, gint* trailing, gint x, gint y);
// gboolean gtk_text_view_get_iter_at_position (::GtkTextView* text_view, ::GtkTextIter* iter, gint* trailing, gint x, gint y);
GI_INLINE_DECL bool get_iter_at_position (Gtk::TextIter & iter, gint * trailing, gint x, gint y) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TextIter, gint> get_iter_at_position (gint x, gint y) noexcept;

// void gtk_text_view_get_iter_location (GtkTextView* text_view, const GtkTextIter* iter, GdkRectangle* location);
// void gtk_text_view_get_iter_location (::GtkTextView* text_view, const ::GtkTextIter* iter, ::GdkRectangle* location);
GI_INLINE_DECL void get_iter_location (const Gtk::TextIter & iter, Gdk::Rectangle & location) noexcept;
GI_INLINE_DECL Gdk::Rectangle get_iter_location (const Gtk::TextIter & iter) noexcept;

// GtkJustification gtk_text_view_get_justification (GtkTextView* text_view);
// ::GtkJustification gtk_text_view_get_justification (::GtkTextView* text_view);
GI_INLINE_DECL Gtk::Justification get_justification () noexcept;

// gint gtk_text_view_get_left_margin (GtkTextView* text_view);
// gint gtk_text_view_get_left_margin (::GtkTextView* text_view);
GI_INLINE_DECL gint get_left_margin () noexcept;

// void gtk_text_view_get_line_at_y (GtkTextView* text_view, GtkTextIter* target_iter, gint y, gint* line_top);
// void gtk_text_view_get_line_at_y (::GtkTextView* text_view, ::GtkTextIter* target_iter, gint y, gint* line_top);
GI_INLINE_DECL void get_line_at_y (Gtk::TextIter & target_iter, gint y, gint & line_top) noexcept;
GI_INLINE_DECL std::tuple<Gtk::TextIter, gint> get_line_at_y (gint y) noexcept;

// void gtk_text_view_get_line_yrange (GtkTextView* text_view, const GtkTextIter* iter, gint* y, gint* height);
// void gtk_text_view_get_line_yrange (::GtkTextView* text_view, const ::GtkTextIter* iter, gint* y, gint* height);
GI_INLINE_DECL void get_line_yrange (const Gtk::TextIter & iter, gint & y, gint & height) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_line_yrange (const Gtk::TextIter & iter) noexcept;

// gboolean gtk_text_view_get_monospace (GtkTextView* text_view);
// gboolean gtk_text_view_get_monospace (::GtkTextView* text_view);
GI_INLINE_DECL bool get_monospace () noexcept;

// gboolean gtk_text_view_get_overwrite (GtkTextView* text_view);
// gboolean gtk_text_view_get_overwrite (::GtkTextView* text_view);
GI_INLINE_DECL bool get_overwrite () noexcept;

// gint gtk_text_view_get_pixels_above_lines (GtkTextView* text_view);
// gint gtk_text_view_get_pixels_above_lines (::GtkTextView* text_view);
GI_INLINE_DECL gint get_pixels_above_lines () noexcept;

// gint gtk_text_view_get_pixels_below_lines (GtkTextView* text_view);
// gint gtk_text_view_get_pixels_below_lines (::GtkTextView* text_view);
GI_INLINE_DECL gint get_pixels_below_lines () noexcept;

// gint gtk_text_view_get_pixels_inside_wrap (GtkTextView* text_view);
// gint gtk_text_view_get_pixels_inside_wrap (::GtkTextView* text_view);
GI_INLINE_DECL gint get_pixels_inside_wrap () noexcept;

// gint gtk_text_view_get_right_margin (GtkTextView* text_view);
// gint gtk_text_view_get_right_margin (::GtkTextView* text_view);
GI_INLINE_DECL gint get_right_margin () noexcept;

// PangoTabArray* gtk_text_view_get_tabs (GtkTextView* text_view);
// ::PangoTabArray* gtk_text_view_get_tabs (::GtkTextView* text_view);
GI_INLINE_DECL Pango::TabArray get_tabs () noexcept;

// gint gtk_text_view_get_top_margin (GtkTextView* text_view);
// gint gtk_text_view_get_top_margin (::GtkTextView* text_view);
GI_INLINE_DECL gint get_top_margin () noexcept;

// GtkAdjustment* gtk_text_view_get_vadjustment (GtkTextView* text_view);
// ::GtkAdjustment* gtk_text_view_get_vadjustment (::GtkTextView* text_view);
// IGNORE; deprecated

// void gtk_text_view_get_visible_rect (GtkTextView* text_view, GdkRectangle* visible_rect);
// void gtk_text_view_get_visible_rect (::GtkTextView* text_view, ::GdkRectangle* visible_rect);
GI_INLINE_DECL void get_visible_rect (Gdk::Rectangle & visible_rect) noexcept;
GI_INLINE_DECL Gdk::Rectangle get_visible_rect () noexcept;

// GdkWindow* gtk_text_view_get_window (GtkTextView* text_view, GtkTextWindowType win);
// ::GdkWindow* gtk_text_view_get_window (::GtkTextView* text_view, ::GtkTextWindowType win);
GI_INLINE_DECL Gdk::Window get_window (Gtk::TextWindowType win) noexcept;

// GtkTextWindowType gtk_text_view_get_window_type (GtkTextView* text_view, GdkWindow* window);
// ::GtkTextWindowType gtk_text_view_get_window_type (::GtkTextView* text_view, ::GdkWindow* window);
GI_INLINE_DECL Gtk::TextWindowType get_window_type (Gdk::Window window) noexcept;

// GtkWrapMode gtk_text_view_get_wrap_mode (GtkTextView* text_view);
// ::GtkWrapMode gtk_text_view_get_wrap_mode (::GtkTextView* text_view);
GI_INLINE_DECL Gtk::WrapMode get_wrap_mode () noexcept;

// gboolean gtk_text_view_im_context_filter_keypress (GtkTextView* text_view, GdkEventKey* event);
// gboolean gtk_text_view_im_context_filter_keypress (::GtkTextView* text_view, ::GdkEventKey* event);
GI_INLINE_DECL bool im_context_filter_keypress (Gdk::EventKey event) noexcept;

// void gtk_text_view_move_child (GtkTextView* text_view, GtkWidget* child, gint xpos, gint ypos);
// void gtk_text_view_move_child (::GtkTextView* text_view, ::GtkWidget* child, gint xpos, gint ypos);
GI_INLINE_DECL void move_child (Gtk::Widget child, gint xpos, gint ypos) noexcept;

// gboolean gtk_text_view_move_mark_onscreen (GtkTextView* text_view, GtkTextMark* mark);
// gboolean gtk_text_view_move_mark_onscreen (::GtkTextView* text_view, ::GtkTextMark* mark);
GI_INLINE_DECL bool move_mark_onscreen (Gtk::TextMark mark) noexcept;

// gboolean gtk_text_view_move_visually (GtkTextView* text_view, GtkTextIter* iter, gint count);
// gboolean gtk_text_view_move_visually (::GtkTextView* text_view, ::GtkTextIter* iter, gint count);
GI_INLINE_DECL bool move_visually (Gtk::TextIter iter, gint count) noexcept;

// gboolean gtk_text_view_place_cursor_onscreen (GtkTextView* text_view);
// gboolean gtk_text_view_place_cursor_onscreen (::GtkTextView* text_view);
GI_INLINE_DECL bool place_cursor_onscreen () noexcept;

// void gtk_text_view_reset_cursor_blink (GtkTextView* text_view);
// void gtk_text_view_reset_cursor_blink (::GtkTextView* text_view);
GI_INLINE_DECL void reset_cursor_blink () noexcept;

// void gtk_text_view_reset_im_context (GtkTextView* text_view);
// void gtk_text_view_reset_im_context (::GtkTextView* text_view);
GI_INLINE_DECL void reset_im_context () noexcept;

// void gtk_text_view_scroll_mark_onscreen (GtkTextView* text_view, GtkTextMark* mark);
// void gtk_text_view_scroll_mark_onscreen (::GtkTextView* text_view, ::GtkTextMark* mark);
GI_INLINE_DECL void scroll_mark_onscreen (Gtk::TextMark mark) noexcept;

// gboolean gtk_text_view_scroll_to_iter (GtkTextView* text_view, GtkTextIter* iter, gdouble within_margin, gboolean use_align, gdouble xalign, gdouble yalign);
// gboolean gtk_text_view_scroll_to_iter (::GtkTextView* text_view, ::GtkTextIter* iter, gdouble within_margin, gboolean use_align, gdouble xalign, gdouble yalign);
GI_INLINE_DECL bool scroll_to_iter (Gtk::TextIter iter, gdouble within_margin, gboolean use_align, gdouble xalign, gdouble yalign) noexcept;

// void gtk_text_view_scroll_to_mark (GtkTextView* text_view, GtkTextMark* mark, gdouble within_margin, gboolean use_align, gdouble xalign, gdouble yalign);
// void gtk_text_view_scroll_to_mark (::GtkTextView* text_view, ::GtkTextMark* mark, gdouble within_margin, gboolean use_align, gdouble xalign, gdouble yalign);
GI_INLINE_DECL void scroll_to_mark (Gtk::TextMark mark, gdouble within_margin, gboolean use_align, gdouble xalign, gdouble yalign) noexcept;

// void gtk_text_view_set_accepts_tab (GtkTextView* text_view, gboolean accepts_tab);
// void gtk_text_view_set_accepts_tab (::GtkTextView* text_view, gboolean accepts_tab);
GI_INLINE_DECL void set_accepts_tab (gboolean accepts_tab) noexcept;

// void gtk_text_view_set_border_window_size (GtkTextView* text_view, GtkTextWindowType type, gint size);
// void gtk_text_view_set_border_window_size (::GtkTextView* text_view, ::GtkTextWindowType type, gint size);
GI_INLINE_DECL void set_border_window_size (Gtk::TextWindowType type, gint size) noexcept;

// void gtk_text_view_set_bottom_margin (GtkTextView* text_view, gint bottom_margin);
// void gtk_text_view_set_bottom_margin (::GtkTextView* text_view, gint bottom_margin);
GI_INLINE_DECL void set_bottom_margin (gint bottom_margin) noexcept;

// void gtk_text_view_set_buffer (GtkTextView* text_view, GtkTextBuffer* buffer);
// void gtk_text_view_set_buffer (::GtkTextView* text_view, ::GtkTextBuffer* buffer);
GI_INLINE_DECL void set_buffer (Gtk::TextBuffer buffer) noexcept;
GI_INLINE_DECL void set_buffer () noexcept;

// void gtk_text_view_set_cursor_visible (GtkTextView* text_view, gboolean setting);
// void gtk_text_view_set_cursor_visible (::GtkTextView* text_view, gboolean setting);
GI_INLINE_DECL void set_cursor_visible (gboolean setting) noexcept;

// void gtk_text_view_set_editable (GtkTextView* text_view, gboolean setting);
// void gtk_text_view_set_editable (::GtkTextView* text_view, gboolean setting);
GI_INLINE_DECL void set_editable (gboolean setting) noexcept;

// void gtk_text_view_set_indent (GtkTextView* text_view, gint indent);
// void gtk_text_view_set_indent (::GtkTextView* text_view, gint indent);
GI_INLINE_DECL void set_indent (gint indent) noexcept;

// void gtk_text_view_set_input_hints (GtkTextView* text_view, GtkInputHints hints);
// void gtk_text_view_set_input_hints (::GtkTextView* text_view, ::GtkInputHints hints);
GI_INLINE_DECL void set_input_hints (Gtk::InputHints hints) noexcept;

// void gtk_text_view_set_input_purpose (GtkTextView* text_view, GtkInputPurpose purpose);
// void gtk_text_view_set_input_purpose (::GtkTextView* text_view, ::GtkInputPurpose purpose);
GI_INLINE_DECL void set_input_purpose (Gtk::InputPurpose purpose) noexcept;

// void gtk_text_view_set_justification (GtkTextView* text_view, GtkJustification justification);
// void gtk_text_view_set_justification (::GtkTextView* text_view, ::GtkJustification justification);
GI_INLINE_DECL void set_justification (Gtk::Justification justification) noexcept;

// void gtk_text_view_set_left_margin (GtkTextView* text_view, gint left_margin);
// void gtk_text_view_set_left_margin (::GtkTextView* text_view, gint left_margin);
GI_INLINE_DECL void set_left_margin (gint left_margin) noexcept;

// void gtk_text_view_set_monospace (GtkTextView* text_view, gboolean monospace);
// void gtk_text_view_set_monospace (::GtkTextView* text_view, gboolean monospace);
GI_INLINE_DECL void set_monospace (gboolean monospace) noexcept;

// void gtk_text_view_set_overwrite (GtkTextView* text_view, gboolean overwrite);
// void gtk_text_view_set_overwrite (::GtkTextView* text_view, gboolean overwrite);
GI_INLINE_DECL void set_overwrite (gboolean overwrite) noexcept;

// void gtk_text_view_set_pixels_above_lines (GtkTextView* text_view, gint pixels_above_lines);
// void gtk_text_view_set_pixels_above_lines (::GtkTextView* text_view, gint pixels_above_lines);
GI_INLINE_DECL void set_pixels_above_lines (gint pixels_above_lines) noexcept;

// void gtk_text_view_set_pixels_below_lines (GtkTextView* text_view, gint pixels_below_lines);
// void gtk_text_view_set_pixels_below_lines (::GtkTextView* text_view, gint pixels_below_lines);
GI_INLINE_DECL void set_pixels_below_lines (gint pixels_below_lines) noexcept;

// void gtk_text_view_set_pixels_inside_wrap (GtkTextView* text_view, gint pixels_inside_wrap);
// void gtk_text_view_set_pixels_inside_wrap (::GtkTextView* text_view, gint pixels_inside_wrap);
GI_INLINE_DECL void set_pixels_inside_wrap (gint pixels_inside_wrap) noexcept;

// void gtk_text_view_set_right_margin (GtkTextView* text_view, gint right_margin);
// void gtk_text_view_set_right_margin (::GtkTextView* text_view, gint right_margin);
GI_INLINE_DECL void set_right_margin (gint right_margin) noexcept;

// void gtk_text_view_set_tabs (GtkTextView* text_view, PangoTabArray* tabs);
// void gtk_text_view_set_tabs (::GtkTextView* text_view, ::PangoTabArray* tabs);
GI_INLINE_DECL void set_tabs (Pango::TabArray tabs) noexcept;

// void gtk_text_view_set_top_margin (GtkTextView* text_view, gint top_margin);
// void gtk_text_view_set_top_margin (::GtkTextView* text_view, gint top_margin);
GI_INLINE_DECL void set_top_margin (gint top_margin) noexcept;

// void gtk_text_view_set_wrap_mode (GtkTextView* text_view, GtkWrapMode wrap_mode);
// void gtk_text_view_set_wrap_mode (::GtkTextView* text_view, ::GtkWrapMode wrap_mode);
GI_INLINE_DECL void set_wrap_mode (Gtk::WrapMode wrap_mode) noexcept;

// gboolean gtk_text_view_starts_display_line (GtkTextView* text_view, const GtkTextIter* iter);
// gboolean gtk_text_view_starts_display_line (::GtkTextView* text_view, const ::GtkTextIter* iter);
GI_INLINE_DECL bool starts_display_line (const Gtk::TextIter & iter) noexcept;

// void gtk_text_view_window_to_buffer_coords (GtkTextView* text_view, GtkTextWindowType win, gint window_x, gint window_y, gint* buffer_x, gint* buffer_y);
// void gtk_text_view_window_to_buffer_coords (::GtkTextView* text_view, ::GtkTextWindowType win, gint window_x, gint window_y, gint* buffer_x, gint* buffer_y);
GI_INLINE_DECL void window_to_buffer_coords (Gtk::TextWindowType win, gint window_x, gint window_y, gint * buffer_x = nullptr, gint * buffer_y = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> window_to_buffer_coords (Gtk::TextWindowType win, gint window_x, gint window_y) noexcept;

gi::property_proxy<bool, base::TextViewBase> property_accepts_tab()
{ return gi::property_proxy<bool, base::TextViewBase> (*this, "accepts-tab"); }
const gi::property_proxy<bool, base::TextViewBase> property_accepts_tab() const
{ return gi::property_proxy<bool, base::TextViewBase> (*this, "accepts-tab"); }

gi::property_proxy<gint, base::TextViewBase> property_bottom_margin()
{ return gi::property_proxy<gint, base::TextViewBase> (*this, "bottom-margin"); }
const gi::property_proxy<gint, base::TextViewBase> property_bottom_margin() const
{ return gi::property_proxy<gint, base::TextViewBase> (*this, "bottom-margin"); }

gi::property_proxy<Gtk::TextBuffer, base::TextViewBase> property_buffer()
{ return gi::property_proxy<Gtk::TextBuffer, base::TextViewBase> (*this, "buffer"); }
const gi::property_proxy<Gtk::TextBuffer, base::TextViewBase> property_buffer() const
{ return gi::property_proxy<Gtk::TextBuffer, base::TextViewBase> (*this, "buffer"); }

gi::property_proxy<bool, base::TextViewBase> property_cursor_visible()
{ return gi::property_proxy<bool, base::TextViewBase> (*this, "cursor-visible"); }
const gi::property_proxy<bool, base::TextViewBase> property_cursor_visible() const
{ return gi::property_proxy<bool, base::TextViewBase> (*this, "cursor-visible"); }

gi::property_proxy<bool, base::TextViewBase> property_editable()
{ return gi::property_proxy<bool, base::TextViewBase> (*this, "editable"); }
const gi::property_proxy<bool, base::TextViewBase> property_editable() const
{ return gi::property_proxy<bool, base::TextViewBase> (*this, "editable"); }

gi::property_proxy<std::string, base::TextViewBase> property_im_module()
{ return gi::property_proxy<std::string, base::TextViewBase> (*this, "im-module"); }
const gi::property_proxy<std::string, base::TextViewBase> property_im_module() const
{ return gi::property_proxy<std::string, base::TextViewBase> (*this, "im-module"); }

gi::property_proxy<gint, base::TextViewBase> property_indent()
{ return gi::property_proxy<gint, base::TextViewBase> (*this, "indent"); }
const gi::property_proxy<gint, base::TextViewBase> property_indent() const
{ return gi::property_proxy<gint, base::TextViewBase> (*this, "indent"); }

gi::property_proxy<Gtk::InputHints, base::TextViewBase> property_input_hints()
{ return gi::property_proxy<Gtk::InputHints, base::TextViewBase> (*this, "input-hints"); }
const gi::property_proxy<Gtk::InputHints, base::TextViewBase> property_input_hints() const
{ return gi::property_proxy<Gtk::InputHints, base::TextViewBase> (*this, "input-hints"); }

gi::property_proxy<Gtk::InputPurpose, base::TextViewBase> property_input_purpose()
{ return gi::property_proxy<Gtk::InputPurpose, base::TextViewBase> (*this, "input-purpose"); }
const gi::property_proxy<Gtk::InputPurpose, base::TextViewBase> property_input_purpose() const
{ return gi::property_proxy<Gtk::InputPurpose, base::TextViewBase> (*this, "input-purpose"); }

gi::property_proxy<Gtk::Justification, base::TextViewBase> property_justification()
{ return gi::property_proxy<Gtk::Justification, base::TextViewBase> (*this, "justification"); }
const gi::property_proxy<Gtk::Justification, base::TextViewBase> property_justification() const
{ return gi::property_proxy<Gtk::Justification, base::TextViewBase> (*this, "justification"); }

gi::property_proxy<gint, base::TextViewBase> property_left_margin()
{ return gi::property_proxy<gint, base::TextViewBase> (*this, "left-margin"); }
const gi::property_proxy<gint, base::TextViewBase> property_left_margin() const
{ return gi::property_proxy<gint, base::TextViewBase> (*this, "left-margin"); }

gi::property_proxy<bool, base::TextViewBase> property_monospace()
{ return gi::property_proxy<bool, base::TextViewBase> (*this, "monospace"); }
const gi::property_proxy<bool, base::TextViewBase> property_monospace() const
{ return gi::property_proxy<bool, base::TextViewBase> (*this, "monospace"); }

gi::property_proxy<bool, base::TextViewBase> property_overwrite()
{ return gi::property_proxy<bool, base::TextViewBase> (*this, "overwrite"); }
const gi::property_proxy<bool, base::TextViewBase> property_overwrite() const
{ return gi::property_proxy<bool, base::TextViewBase> (*this, "overwrite"); }

gi::property_proxy<gint, base::TextViewBase> property_pixels_above_lines()
{ return gi::property_proxy<gint, base::TextViewBase> (*this, "pixels-above-lines"); }
const gi::property_proxy<gint, base::TextViewBase> property_pixels_above_lines() const
{ return gi::property_proxy<gint, base::TextViewBase> (*this, "pixels-above-lines"); }

gi::property_proxy<gint, base::TextViewBase> property_pixels_below_lines()
{ return gi::property_proxy<gint, base::TextViewBase> (*this, "pixels-below-lines"); }
const gi::property_proxy<gint, base::TextViewBase> property_pixels_below_lines() const
{ return gi::property_proxy<gint, base::TextViewBase> (*this, "pixels-below-lines"); }

gi::property_proxy<gint, base::TextViewBase> property_pixels_inside_wrap()
{ return gi::property_proxy<gint, base::TextViewBase> (*this, "pixels-inside-wrap"); }
const gi::property_proxy<gint, base::TextViewBase> property_pixels_inside_wrap() const
{ return gi::property_proxy<gint, base::TextViewBase> (*this, "pixels-inside-wrap"); }

gi::property_proxy<bool, base::TextViewBase> property_populate_all()
{ return gi::property_proxy<bool, base::TextViewBase> (*this, "populate-all"); }
const gi::property_proxy<bool, base::TextViewBase> property_populate_all() const
{ return gi::property_proxy<bool, base::TextViewBase> (*this, "populate-all"); }

gi::property_proxy<gint, base::TextViewBase> property_right_margin()
{ return gi::property_proxy<gint, base::TextViewBase> (*this, "right-margin"); }
const gi::property_proxy<gint, base::TextViewBase> property_right_margin() const
{ return gi::property_proxy<gint, base::TextViewBase> (*this, "right-margin"); }

gi::property_proxy<Pango::TabArray, base::TextViewBase> property_tabs()
{ return gi::property_proxy<Pango::TabArray, base::TextViewBase> (*this, "tabs"); }
const gi::property_proxy<Pango::TabArray, base::TextViewBase> property_tabs() const
{ return gi::property_proxy<Pango::TabArray, base::TextViewBase> (*this, "tabs"); }

gi::property_proxy<gint, base::TextViewBase> property_top_margin()
{ return gi::property_proxy<gint, base::TextViewBase> (*this, "top-margin"); }
const gi::property_proxy<gint, base::TextViewBase> property_top_margin() const
{ return gi::property_proxy<gint, base::TextViewBase> (*this, "top-margin"); }

gi::property_proxy<Gtk::WrapMode, base::TextViewBase> property_wrap_mode()
{ return gi::property_proxy<Gtk::WrapMode, base::TextViewBase> (*this, "wrap-mode"); }
const gi::property_proxy<Gtk::WrapMode, base::TextViewBase> property_wrap_mode() const
{ return gi::property_proxy<Gtk::WrapMode, base::TextViewBase> (*this, "wrap-mode"); }

// signal backspace
gi::signal_proxy<void(Gtk::TextView)> signal_backspace()
{ return gi::signal_proxy<void(Gtk::TextView)> (*this, "backspace"); }

// signal copy-clipboard
gi::signal_proxy<void(Gtk::TextView)> signal_copy_clipboard()
{ return gi::signal_proxy<void(Gtk::TextView)> (*this, "copy-clipboard"); }

// signal cut-clipboard
gi::signal_proxy<void(Gtk::TextView)> signal_cut_clipboard()
{ return gi::signal_proxy<void(Gtk::TextView)> (*this, "cut-clipboard"); }

// signal delete-from-cursor
gi::signal_proxy<void(Gtk::TextView, Gtk::DeleteType type, gint count)> signal_delete_from_cursor()
{ return gi::signal_proxy<void(Gtk::TextView, Gtk::DeleteType type, gint count)> (*this, "delete-from-cursor"); }

// signal extend-selection
gi::signal_proxy<bool(Gtk::TextView, Gtk::TextExtendSelection granularity, Gtk::TextIter location, Gtk::TextIter start, Gtk::TextIter end)> signal_extend_selection()
{ return gi::signal_proxy<bool(Gtk::TextView, Gtk::TextExtendSelection granularity, Gtk::TextIter location, Gtk::TextIter start, Gtk::TextIter end)> (*this, "extend-selection"); }

// signal insert-at-cursor
gi::signal_proxy<void(Gtk::TextView, const std::string & string)> signal_insert_at_cursor()
{ return gi::signal_proxy<void(Gtk::TextView, const std::string & string)> (*this, "insert-at-cursor"); }

// signal insert-emoji
gi::signal_proxy<void(Gtk::TextView)> signal_insert_emoji()
{ return gi::signal_proxy<void(Gtk::TextView)> (*this, "insert-emoji"); }

// signal move-cursor
gi::signal_proxy<void(Gtk::TextView, Gtk::MovementStep step, gint count, gboolean extend_selection)> signal_move_cursor()
{ return gi::signal_proxy<void(Gtk::TextView, Gtk::MovementStep step, gint count, gboolean extend_selection)> (*this, "move-cursor"); }

// signal move-viewport
gi::signal_proxy<void(Gtk::TextView, Gtk::ScrollStep step, gint count)> signal_move_viewport()
{ return gi::signal_proxy<void(Gtk::TextView, Gtk::ScrollStep step, gint count)> (*this, "move-viewport"); }

// signal paste-clipboard
gi::signal_proxy<void(Gtk::TextView)> signal_paste_clipboard()
{ return gi::signal_proxy<void(Gtk::TextView)> (*this, "paste-clipboard"); }

// signal populate-popup
gi::signal_proxy<void(Gtk::TextView, Gtk::Widget popup)> signal_populate_popup()
{ return gi::signal_proxy<void(Gtk::TextView, Gtk::Widget popup)> (*this, "populate-popup"); }

// signal preedit-changed
gi::signal_proxy<void(Gtk::TextView, const std::string & preedit)> signal_preedit_changed()
{ return gi::signal_proxy<void(Gtk::TextView, const std::string & preedit)> (*this, "preedit-changed"); }

// signal select-all
gi::signal_proxy<void(Gtk::TextView, gboolean select)> signal_select_all()
{ return gi::signal_proxy<void(Gtk::TextView, gboolean select)> (*this, "select-all"); }

// signal set-anchor
gi::signal_proxy<void(Gtk::TextView)> signal_set_anchor()
{ return gi::signal_proxy<void(Gtk::TextView)> (*this, "set-anchor"); }

// signal toggle-cursor-visible
gi::signal_proxy<void(Gtk::TextView)> signal_toggle_cursor_visible()
{ return gi::signal_proxy<void(Gtk::TextView)> (*this, "toggle-cursor-visible"); }

// signal toggle-overwrite
gi::signal_proxy<void(Gtk::TextView)> signal_toggle_overwrite()
{ return gi::signal_proxy<void(Gtk::TextView)> (*this, "toggle-overwrite"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/textview_extra_def.hpp>)
#include <gtk/textview_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/textview_extra.hpp>)
#include <gtk/textview_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class TextView : public GI_GTK_TEXTVIEW_BASE
{ typedef GI_GTK_TEXTVIEW_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTextView>
{ typedef Gtk::TextView type; }; 

} // namespace repository

} // namespace gi

#include "scrollable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class TextViewClassDef
{
typedef TextViewClassDef self;
public:
typedef Gtk::TextView instance_type;
typedef ::GtkTextViewClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void TextView::backspace (GtkTextView* text_view);
// void TextView::backspace (::GtkTextView* text_view);
virtual void backspace_ () noexcept = 0;

// void TextView::copy_clipboard (GtkTextView* text_view);
// void TextView::copy_clipboard (::GtkTextView* text_view);
virtual void copy_clipboard_ () noexcept = 0;

// void TextView::cut_clipboard (GtkTextView* text_view);
// void TextView::cut_clipboard (::GtkTextView* text_view);
virtual void cut_clipboard_ () noexcept = 0;

// void TextView::delete_from_cursor (GtkTextView* text_view, GtkDeleteType type, gint count);
// void TextView::delete_from_cursor (::GtkTextView* text_view, ::GtkDeleteType type, gint count);
virtual void delete_from_cursor_ (Gtk::DeleteType type, gint count) noexcept = 0;

// void TextView::draw_layer (GtkTextView* text_view, GtkTextViewLayer layer, cairo_t* cr);
// void TextView::draw_layer (::GtkTextView* text_view, ::GtkTextViewLayer layer, ::cairo_t* cr);
virtual void draw_layer_ (Gtk::TextViewLayer layer, cairo::Context cr) noexcept = 0;

// gboolean TextView::extend_selection (GtkTextView* text_view, GtkTextExtendSelection granularity, const GtkTextIter* location, GtkTextIter* start, GtkTextIter* end);
// gboolean TextView::extend_selection (::GtkTextView* text_view, ::GtkTextExtendSelection granularity, const ::GtkTextIter* location, ::GtkTextIter* start, ::GtkTextIter* end);
virtual bool extend_selection_ (Gtk::TextExtendSelection granularity, const Gtk::TextIter & location, Gtk::TextIter start, Gtk::TextIter end) noexcept = 0;

// void TextView::insert_at_cursor (GtkTextView* text_view, const gchar* str);
// void TextView::insert_at_cursor (::GtkTextView* text_view, const char* str);
virtual void insert_at_cursor_ (const std::string & str) noexcept = 0;

// void TextView::insert_emoji (GtkTextView* text_view);
// void TextView::insert_emoji (::GtkTextView* text_view);
virtual void insert_emoji_ () noexcept = 0;

// void TextView::move_cursor (GtkTextView* text_view, GtkMovementStep step, gint count, gboolean extend_selection);
// void TextView::move_cursor (::GtkTextView* text_view, ::GtkMovementStep step, gint count, gboolean extend_selection);
virtual void move_cursor_ (Gtk::MovementStep step, gint count, gboolean extend_selection) noexcept = 0;

// void TextView::paste_clipboard (GtkTextView* text_view);
// void TextView::paste_clipboard (::GtkTextView* text_view);
virtual void paste_clipboard_ () noexcept = 0;

// void TextView::populate_popup (GtkTextView* text_view, GtkWidget* popup);
// void TextView::populate_popup (::GtkTextView* text_view, ::GtkWidget* popup);
virtual void populate_popup_ (Gtk::Widget popup) noexcept = 0;

// void TextView::set_anchor (GtkTextView* text_view);
// void TextView::set_anchor (::GtkTextView* text_view);
virtual void set_anchor_ () noexcept = 0;

// void TextView::toggle_overwrite (GtkTextView* text_view);
// void TextView::toggle_overwrite (::GtkTextView* text_view);
virtual void toggle_overwrite_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class TextViewClass: public detail::ClassTemplate<Gtk::impl::internal::TextViewClassDef, Gtk::impl::internal::ContainerClass, Gtk::impl::internal::ScrollableInterfaceClassImpl>
{
typedef TextViewClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::TextViewClassDef, Gtk::impl::internal::ContainerClass, Gtk::impl::internal::ScrollableInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::ScrollableInterfaceClassImpl GtkScrollableInterface_type;


// void TextView::backspace (GtkTextView* text_view);
// void TextView::backspace (::GtkTextView* text_view);
GI_INLINE_DECL void backspace_ () noexcept override;

// void TextView::copy_clipboard (GtkTextView* text_view);
// void TextView::copy_clipboard (::GtkTextView* text_view);
GI_INLINE_DECL void copy_clipboard_ () noexcept override;

// void TextView::cut_clipboard (GtkTextView* text_view);
// void TextView::cut_clipboard (::GtkTextView* text_view);
GI_INLINE_DECL void cut_clipboard_ () noexcept override;

// void TextView::delete_from_cursor (GtkTextView* text_view, GtkDeleteType type, gint count);
// void TextView::delete_from_cursor (::GtkTextView* text_view, ::GtkDeleteType type, gint count);
GI_INLINE_DECL void delete_from_cursor_ (Gtk::DeleteType type, gint count) noexcept override;

// void TextView::draw_layer (GtkTextView* text_view, GtkTextViewLayer layer, cairo_t* cr);
// void TextView::draw_layer (::GtkTextView* text_view, ::GtkTextViewLayer layer, ::cairo_t* cr);
GI_INLINE_DECL void draw_layer_ (Gtk::TextViewLayer layer, cairo::Context cr) noexcept override;

// gboolean TextView::extend_selection (GtkTextView* text_view, GtkTextExtendSelection granularity, const GtkTextIter* location, GtkTextIter* start, GtkTextIter* end);
// gboolean TextView::extend_selection (::GtkTextView* text_view, ::GtkTextExtendSelection granularity, const ::GtkTextIter* location, ::GtkTextIter* start, ::GtkTextIter* end);
GI_INLINE_DECL bool extend_selection_ (Gtk::TextExtendSelection granularity, const Gtk::TextIter & location, Gtk::TextIter start, Gtk::TextIter end) noexcept override;

// void TextView::insert_at_cursor (GtkTextView* text_view, const gchar* str);
// void TextView::insert_at_cursor (::GtkTextView* text_view, const char* str);
GI_INLINE_DECL void insert_at_cursor_ (const std::string & str) noexcept override;

// void TextView::insert_emoji (GtkTextView* text_view);
// void TextView::insert_emoji (::GtkTextView* text_view);
GI_INLINE_DECL void insert_emoji_ () noexcept override;

// void TextView::move_cursor (GtkTextView* text_view, GtkMovementStep step, gint count, gboolean extend_selection);
// void TextView::move_cursor (::GtkTextView* text_view, ::GtkMovementStep step, gint count, gboolean extend_selection);
GI_INLINE_DECL void move_cursor_ (Gtk::MovementStep step, gint count, gboolean extend_selection) noexcept override;

// void TextView::paste_clipboard (GtkTextView* text_view);
// void TextView::paste_clipboard (::GtkTextView* text_view);
GI_INLINE_DECL void paste_clipboard_ () noexcept override;

// void TextView::populate_popup (GtkTextView* text_view, GtkWidget* popup);
// void TextView::populate_popup (::GtkTextView* text_view, ::GtkWidget* popup);
GI_INLINE_DECL void populate_popup_ (Gtk::Widget popup) noexcept override;

// void TextView::set_anchor (GtkTextView* text_view);
// void TextView::set_anchor (::GtkTextView* text_view);
GI_INLINE_DECL void set_anchor_ () noexcept override;

// void TextView::toggle_overwrite (GtkTextView* text_view);
// void TextView::toggle_overwrite (::GtkTextView* text_view);
GI_INLINE_DECL void toggle_overwrite_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using TextViewImpl = detail::ObjectImpl<TextView, internal::TextViewClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
