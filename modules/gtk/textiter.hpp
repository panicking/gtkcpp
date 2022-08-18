// AUTO-GENERATED

#ifndef _GI_GTK_TEXTITER_HPP_
#define _GI_GTK_TEXTITER_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class TextAttributes;
class TextBuffer;
class TextChildAnchor;
class TextMark;
class TextTag;

class TextIter;

namespace base {


#define GI_GTK_TEXTITER_BASE base::TextIterBase
class TextIterBase : public gi::detail::GBoxedWrapper<TextIterBase, ::GtkTextIter>
{
typedef gi::detail::GBoxedWrapper<TextIterBase, ::GtkTextIter> super_type;
public:

TextIterBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gtk_text_iter_get_type(); } 

// void gtk_text_iter_assign (GtkTextIter* iter, const GtkTextIter* other);
// void gtk_text_iter_assign (::GtkTextIter* iter, const ::GtkTextIter* other);
GI_INLINE_DECL void assign (const Gtk::TextIter & other) noexcept;

// gboolean gtk_text_iter_backward_char (GtkTextIter* iter);
// gboolean gtk_text_iter_backward_char (::GtkTextIter* iter);
GI_INLINE_DECL bool backward_char () noexcept;

// gboolean gtk_text_iter_backward_chars (GtkTextIter* iter, gint count);
// gboolean gtk_text_iter_backward_chars (::GtkTextIter* iter, gint count);
GI_INLINE_DECL bool backward_chars (gint count) noexcept;

// gboolean gtk_text_iter_backward_cursor_position (GtkTextIter* iter);
// gboolean gtk_text_iter_backward_cursor_position (::GtkTextIter* iter);
GI_INLINE_DECL bool backward_cursor_position () noexcept;

// gboolean gtk_text_iter_backward_cursor_positions (GtkTextIter* iter, gint count);
// gboolean gtk_text_iter_backward_cursor_positions (::GtkTextIter* iter, gint count);
GI_INLINE_DECL bool backward_cursor_positions (gint count) noexcept;

// gboolean gtk_text_iter_backward_find_char (GtkTextIter* iter, GtkTextCharPredicate pred, gpointer user_data, const GtkTextIter* limit);
// gboolean gtk_text_iter_backward_find_char (::GtkTextIter* iter, Gtk::TextCharPredicate::cfunction_type pred, void* user_data, const ::GtkTextIter* limit);
GI_INLINE_DECL bool backward_find_char (Gtk::TextCharPredicate pred, const Gtk::TextIter & limit) noexcept;
GI_INLINE_DECL bool backward_find_char (Gtk::TextCharPredicate pred) noexcept;

// gboolean gtk_text_iter_backward_line (GtkTextIter* iter);
// gboolean gtk_text_iter_backward_line (::GtkTextIter* iter);
GI_INLINE_DECL bool backward_line () noexcept;

// gboolean gtk_text_iter_backward_lines (GtkTextIter* iter, gint count);
// gboolean gtk_text_iter_backward_lines (::GtkTextIter* iter, gint count);
GI_INLINE_DECL bool backward_lines (gint count) noexcept;

// gboolean gtk_text_iter_backward_search (const GtkTextIter* iter, const gchar* str, GtkTextSearchFlags flags, GtkTextIter* match_start, GtkTextIter* match_end, const GtkTextIter* limit);
// gboolean gtk_text_iter_backward_search (const ::GtkTextIter* iter, const char* str, ::GtkTextSearchFlags flags, ::GtkTextIter* match_start, ::GtkTextIter* match_end, const ::GtkTextIter* limit);
GI_INLINE_DECL bool backward_search (const std::string & str, Gtk::TextSearchFlags flags, Gtk::TextIter * match_start, Gtk::TextIter * match_end, const Gtk::TextIter & limit) const noexcept;
GI_INLINE_DECL bool backward_search (const std::string & str, Gtk::TextSearchFlags flags, Gtk::TextIter * match_start = nullptr, Gtk::TextIter * match_end = nullptr) const noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TextIter, Gtk::TextIter> backward_search (const std::string & str, Gtk::TextSearchFlags flags, const Gtk::TextIter & limit) const noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TextIter, Gtk::TextIter> backward_search (const std::string & str, Gtk::TextSearchFlags flags) const noexcept;

// gboolean gtk_text_iter_backward_sentence_start (GtkTextIter* iter);
// gboolean gtk_text_iter_backward_sentence_start (::GtkTextIter* iter);
GI_INLINE_DECL bool backward_sentence_start () noexcept;

// gboolean gtk_text_iter_backward_sentence_starts (GtkTextIter* iter, gint count);
// gboolean gtk_text_iter_backward_sentence_starts (::GtkTextIter* iter, gint count);
GI_INLINE_DECL bool backward_sentence_starts (gint count) noexcept;

// gboolean gtk_text_iter_backward_to_tag_toggle (GtkTextIter* iter, GtkTextTag* tag);
// gboolean gtk_text_iter_backward_to_tag_toggle (::GtkTextIter* iter, ::GtkTextTag* tag);
GI_INLINE_DECL bool backward_to_tag_toggle (Gtk::TextTag tag) noexcept;
GI_INLINE_DECL bool backward_to_tag_toggle () noexcept;

// gboolean gtk_text_iter_backward_visible_cursor_position (GtkTextIter* iter);
// gboolean gtk_text_iter_backward_visible_cursor_position (::GtkTextIter* iter);
GI_INLINE_DECL bool backward_visible_cursor_position () noexcept;

// gboolean gtk_text_iter_backward_visible_cursor_positions (GtkTextIter* iter, gint count);
// gboolean gtk_text_iter_backward_visible_cursor_positions (::GtkTextIter* iter, gint count);
GI_INLINE_DECL bool backward_visible_cursor_positions (gint count) noexcept;

// gboolean gtk_text_iter_backward_visible_line (GtkTextIter* iter);
// gboolean gtk_text_iter_backward_visible_line (::GtkTextIter* iter);
GI_INLINE_DECL bool backward_visible_line () noexcept;

// gboolean gtk_text_iter_backward_visible_lines (GtkTextIter* iter, gint count);
// gboolean gtk_text_iter_backward_visible_lines (::GtkTextIter* iter, gint count);
GI_INLINE_DECL bool backward_visible_lines (gint count) noexcept;

// gboolean gtk_text_iter_backward_visible_word_start (GtkTextIter* iter);
// gboolean gtk_text_iter_backward_visible_word_start (::GtkTextIter* iter);
GI_INLINE_DECL bool backward_visible_word_start () noexcept;

// gboolean gtk_text_iter_backward_visible_word_starts (GtkTextIter* iter, gint count);
// gboolean gtk_text_iter_backward_visible_word_starts (::GtkTextIter* iter, gint count);
GI_INLINE_DECL bool backward_visible_word_starts (gint count) noexcept;

// gboolean gtk_text_iter_backward_word_start (GtkTextIter* iter);
// gboolean gtk_text_iter_backward_word_start (::GtkTextIter* iter);
GI_INLINE_DECL bool backward_word_start () noexcept;

// gboolean gtk_text_iter_backward_word_starts (GtkTextIter* iter, gint count);
// gboolean gtk_text_iter_backward_word_starts (::GtkTextIter* iter, gint count);
GI_INLINE_DECL bool backward_word_starts (gint count) noexcept;

// gboolean gtk_text_iter_begins_tag (const GtkTextIter* iter, GtkTextTag* tag);
// gboolean gtk_text_iter_begins_tag (const ::GtkTextIter* iter, ::GtkTextTag* tag);
// IGNORE; deprecated

// gboolean gtk_text_iter_can_insert (const GtkTextIter* iter, gboolean default_editability);
// gboolean gtk_text_iter_can_insert (const ::GtkTextIter* iter, gboolean default_editability);
GI_INLINE_DECL bool can_insert (gboolean default_editability) const noexcept;

// gint gtk_text_iter_compare (const GtkTextIter* lhs, const GtkTextIter* rhs);
// gint gtk_text_iter_compare (const ::GtkTextIter* lhs, const ::GtkTextIter* rhs);
GI_INLINE_DECL gint compare (const Gtk::TextIter & rhs) const noexcept;

// GtkTextIter* gtk_text_iter_copy (const GtkTextIter* iter);
// ::GtkTextIter* gtk_text_iter_copy (const ::GtkTextIter* iter);
GI_INLINE_DECL Gtk::TextIter copy () const noexcept;

// gboolean gtk_text_iter_editable (const GtkTextIter* iter, gboolean default_setting);
// gboolean gtk_text_iter_editable (const ::GtkTextIter* iter, gboolean default_setting);
GI_INLINE_DECL bool editable (gboolean default_setting) const noexcept;

// gboolean gtk_text_iter_ends_line (const GtkTextIter* iter);
// gboolean gtk_text_iter_ends_line (const ::GtkTextIter* iter);
GI_INLINE_DECL bool ends_line () const noexcept;

// gboolean gtk_text_iter_ends_sentence (const GtkTextIter* iter);
// gboolean gtk_text_iter_ends_sentence (const ::GtkTextIter* iter);
GI_INLINE_DECL bool ends_sentence () const noexcept;

// gboolean gtk_text_iter_ends_tag (const GtkTextIter* iter, GtkTextTag* tag);
// gboolean gtk_text_iter_ends_tag (const ::GtkTextIter* iter, ::GtkTextTag* tag);
GI_INLINE_DECL bool ends_tag (Gtk::TextTag tag) const noexcept;
GI_INLINE_DECL bool ends_tag () const noexcept;

// gboolean gtk_text_iter_ends_word (const GtkTextIter* iter);
// gboolean gtk_text_iter_ends_word (const ::GtkTextIter* iter);
GI_INLINE_DECL bool ends_word () const noexcept;

// gboolean gtk_text_iter_equal (const GtkTextIter* lhs, const GtkTextIter* rhs);
// gboolean gtk_text_iter_equal (const ::GtkTextIter* lhs, const ::GtkTextIter* rhs);
GI_INLINE_DECL bool equal (const Gtk::TextIter & rhs) const noexcept;

// gboolean gtk_text_iter_forward_char (GtkTextIter* iter);
// gboolean gtk_text_iter_forward_char (::GtkTextIter* iter);
GI_INLINE_DECL bool forward_char () noexcept;

// gboolean gtk_text_iter_forward_chars (GtkTextIter* iter, gint count);
// gboolean gtk_text_iter_forward_chars (::GtkTextIter* iter, gint count);
GI_INLINE_DECL bool forward_chars (gint count) noexcept;

// gboolean gtk_text_iter_forward_cursor_position (GtkTextIter* iter);
// gboolean gtk_text_iter_forward_cursor_position (::GtkTextIter* iter);
GI_INLINE_DECL bool forward_cursor_position () noexcept;

// gboolean gtk_text_iter_forward_cursor_positions (GtkTextIter* iter, gint count);
// gboolean gtk_text_iter_forward_cursor_positions (::GtkTextIter* iter, gint count);
GI_INLINE_DECL bool forward_cursor_positions (gint count) noexcept;

// gboolean gtk_text_iter_forward_find_char (GtkTextIter* iter, GtkTextCharPredicate pred, gpointer user_data, const GtkTextIter* limit);
// gboolean gtk_text_iter_forward_find_char (::GtkTextIter* iter, Gtk::TextCharPredicate::cfunction_type pred, void* user_data, const ::GtkTextIter* limit);
GI_INLINE_DECL bool forward_find_char (Gtk::TextCharPredicate pred, const Gtk::TextIter & limit) noexcept;
GI_INLINE_DECL bool forward_find_char (Gtk::TextCharPredicate pred) noexcept;

// gboolean gtk_text_iter_forward_line (GtkTextIter* iter);
// gboolean gtk_text_iter_forward_line (::GtkTextIter* iter);
GI_INLINE_DECL bool forward_line () noexcept;

// gboolean gtk_text_iter_forward_lines (GtkTextIter* iter, gint count);
// gboolean gtk_text_iter_forward_lines (::GtkTextIter* iter, gint count);
GI_INLINE_DECL bool forward_lines (gint count) noexcept;

// gboolean gtk_text_iter_forward_search (const GtkTextIter* iter, const gchar* str, GtkTextSearchFlags flags, GtkTextIter* match_start, GtkTextIter* match_end, const GtkTextIter* limit);
// gboolean gtk_text_iter_forward_search (const ::GtkTextIter* iter, const char* str, ::GtkTextSearchFlags flags, ::GtkTextIter* match_start, ::GtkTextIter* match_end, const ::GtkTextIter* limit);
GI_INLINE_DECL bool forward_search (const std::string & str, Gtk::TextSearchFlags flags, Gtk::TextIter * match_start, Gtk::TextIter * match_end, const Gtk::TextIter & limit) const noexcept;
GI_INLINE_DECL bool forward_search (const std::string & str, Gtk::TextSearchFlags flags, Gtk::TextIter * match_start = nullptr, Gtk::TextIter * match_end = nullptr) const noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TextIter, Gtk::TextIter> forward_search (const std::string & str, Gtk::TextSearchFlags flags, const Gtk::TextIter & limit) const noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TextIter, Gtk::TextIter> forward_search (const std::string & str, Gtk::TextSearchFlags flags) const noexcept;

// gboolean gtk_text_iter_forward_sentence_end (GtkTextIter* iter);
// gboolean gtk_text_iter_forward_sentence_end (::GtkTextIter* iter);
GI_INLINE_DECL bool forward_sentence_end () noexcept;

// gboolean gtk_text_iter_forward_sentence_ends (GtkTextIter* iter, gint count);
// gboolean gtk_text_iter_forward_sentence_ends (::GtkTextIter* iter, gint count);
GI_INLINE_DECL bool forward_sentence_ends (gint count) noexcept;

// void gtk_text_iter_forward_to_end (GtkTextIter* iter);
// void gtk_text_iter_forward_to_end (::GtkTextIter* iter);
GI_INLINE_DECL void forward_to_end () noexcept;

// gboolean gtk_text_iter_forward_to_line_end (GtkTextIter* iter);
// gboolean gtk_text_iter_forward_to_line_end (::GtkTextIter* iter);
GI_INLINE_DECL bool forward_to_line_end () noexcept;

// gboolean gtk_text_iter_forward_to_tag_toggle (GtkTextIter* iter, GtkTextTag* tag);
// gboolean gtk_text_iter_forward_to_tag_toggle (::GtkTextIter* iter, ::GtkTextTag* tag);
GI_INLINE_DECL bool forward_to_tag_toggle (Gtk::TextTag tag) noexcept;
GI_INLINE_DECL bool forward_to_tag_toggle () noexcept;

// gboolean gtk_text_iter_forward_visible_cursor_position (GtkTextIter* iter);
// gboolean gtk_text_iter_forward_visible_cursor_position (::GtkTextIter* iter);
GI_INLINE_DECL bool forward_visible_cursor_position () noexcept;

// gboolean gtk_text_iter_forward_visible_cursor_positions (GtkTextIter* iter, gint count);
// gboolean gtk_text_iter_forward_visible_cursor_positions (::GtkTextIter* iter, gint count);
GI_INLINE_DECL bool forward_visible_cursor_positions (gint count) noexcept;

// gboolean gtk_text_iter_forward_visible_line (GtkTextIter* iter);
// gboolean gtk_text_iter_forward_visible_line (::GtkTextIter* iter);
GI_INLINE_DECL bool forward_visible_line () noexcept;

// gboolean gtk_text_iter_forward_visible_lines (GtkTextIter* iter, gint count);
// gboolean gtk_text_iter_forward_visible_lines (::GtkTextIter* iter, gint count);
GI_INLINE_DECL bool forward_visible_lines (gint count) noexcept;

// gboolean gtk_text_iter_forward_visible_word_end (GtkTextIter* iter);
// gboolean gtk_text_iter_forward_visible_word_end (::GtkTextIter* iter);
GI_INLINE_DECL bool forward_visible_word_end () noexcept;

// gboolean gtk_text_iter_forward_visible_word_ends (GtkTextIter* iter, gint count);
// gboolean gtk_text_iter_forward_visible_word_ends (::GtkTextIter* iter, gint count);
GI_INLINE_DECL bool forward_visible_word_ends (gint count) noexcept;

// gboolean gtk_text_iter_forward_word_end (GtkTextIter* iter);
// gboolean gtk_text_iter_forward_word_end (::GtkTextIter* iter);
GI_INLINE_DECL bool forward_word_end () noexcept;

// gboolean gtk_text_iter_forward_word_ends (GtkTextIter* iter, gint count);
// gboolean gtk_text_iter_forward_word_ends (::GtkTextIter* iter, gint count);
GI_INLINE_DECL bool forward_word_ends (gint count) noexcept;

// void gtk_text_iter_free (GtkTextIter* iter);
// void gtk_text_iter_free (::GtkTextIter* iter);
// IGNORE; marked ignore

// gboolean gtk_text_iter_get_attributes (const GtkTextIter* iter, GtkTextAttributes* values);
// gboolean gtk_text_iter_get_attributes (const ::GtkTextIter* iter, ::GtkTextAttributes* values);
GI_INLINE_DECL bool get_attributes (Gtk::TextAttributes & values) const noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TextAttributes> get_attributes () const noexcept;

// GtkTextBuffer* gtk_text_iter_get_buffer (const GtkTextIter* iter);
// ::GtkTextBuffer* gtk_text_iter_get_buffer (const ::GtkTextIter* iter);
GI_INLINE_DECL Gtk::TextBuffer get_buffer () const noexcept;

// gint gtk_text_iter_get_bytes_in_line (const GtkTextIter* iter);
// gint gtk_text_iter_get_bytes_in_line (const ::GtkTextIter* iter);
GI_INLINE_DECL gint get_bytes_in_line () const noexcept;

// gunichar gtk_text_iter_get_char (const GtkTextIter* iter);
// gunichar gtk_text_iter_get_char (const ::GtkTextIter* iter);
GI_INLINE_DECL gunichar get_char () const noexcept;

// gint gtk_text_iter_get_chars_in_line (const GtkTextIter* iter);
// gint gtk_text_iter_get_chars_in_line (const ::GtkTextIter* iter);
GI_INLINE_DECL gint get_chars_in_line () const noexcept;

// GtkTextChildAnchor* gtk_text_iter_get_child_anchor (const GtkTextIter* iter);
// ::GtkTextChildAnchor* gtk_text_iter_get_child_anchor (const ::GtkTextIter* iter);
GI_INLINE_DECL Gtk::TextChildAnchor get_child_anchor () const noexcept;

// PangoLanguage* gtk_text_iter_get_language (const GtkTextIter* iter);
// ::PangoLanguage* gtk_text_iter_get_language (const ::GtkTextIter* iter);
GI_INLINE_DECL Pango::Language get_language () const noexcept;

// gint gtk_text_iter_get_line (const GtkTextIter* iter);
// gint gtk_text_iter_get_line (const ::GtkTextIter* iter);
GI_INLINE_DECL gint get_line () const noexcept;

// gint gtk_text_iter_get_line_index (const GtkTextIter* iter);
// gint gtk_text_iter_get_line_index (const ::GtkTextIter* iter);
GI_INLINE_DECL gint get_line_index () const noexcept;

// gint gtk_text_iter_get_line_offset (const GtkTextIter* iter);
// gint gtk_text_iter_get_line_offset (const ::GtkTextIter* iter);
GI_INLINE_DECL gint get_line_offset () const noexcept;

// GSList* gtk_text_iter_get_marks (const GtkTextIter* iter);
// ::GSList* gtk_text_iter_get_marks (const ::GtkTextIter* iter);
GI_INLINE_DECL std::vector<Gtk::TextMark> get_marks () const noexcept;

// gint gtk_text_iter_get_offset (const GtkTextIter* iter);
// gint gtk_text_iter_get_offset (const ::GtkTextIter* iter);
GI_INLINE_DECL gint get_offset () const noexcept;

// GdkPixbuf* gtk_text_iter_get_pixbuf (const GtkTextIter* iter);
// ::GdkPixbuf* gtk_text_iter_get_pixbuf (const ::GtkTextIter* iter);
GI_INLINE_DECL GdkPixbuf::Pixbuf get_pixbuf () const noexcept;

// gchar* gtk_text_iter_get_slice (const GtkTextIter* start, const GtkTextIter* end);
// char* gtk_text_iter_get_slice (const ::GtkTextIter* start, const ::GtkTextIter* end);
GI_INLINE_DECL std::string get_slice (const Gtk::TextIter & end) const noexcept;

// GSList* gtk_text_iter_get_tags (const GtkTextIter* iter);
// ::GSList* gtk_text_iter_get_tags (const ::GtkTextIter* iter);
GI_INLINE_DECL std::vector<Gtk::TextTag> get_tags () const noexcept;

// gchar* gtk_text_iter_get_text (const GtkTextIter* start, const GtkTextIter* end);
// char* gtk_text_iter_get_text (const ::GtkTextIter* start, const ::GtkTextIter* end);
GI_INLINE_DECL std::string get_text (const Gtk::TextIter & end) const noexcept;

// GSList* gtk_text_iter_get_toggled_tags (const GtkTextIter* iter, gboolean toggled_on);
// ::GSList* gtk_text_iter_get_toggled_tags (const ::GtkTextIter* iter, gboolean toggled_on);
GI_INLINE_DECL std::vector<Gtk::TextTag> get_toggled_tags (gboolean toggled_on) const noexcept;

// gint gtk_text_iter_get_visible_line_index (const GtkTextIter* iter);
// gint gtk_text_iter_get_visible_line_index (const ::GtkTextIter* iter);
GI_INLINE_DECL gint get_visible_line_index () const noexcept;

// gint gtk_text_iter_get_visible_line_offset (const GtkTextIter* iter);
// gint gtk_text_iter_get_visible_line_offset (const ::GtkTextIter* iter);
GI_INLINE_DECL gint get_visible_line_offset () const noexcept;

// gchar* gtk_text_iter_get_visible_slice (const GtkTextIter* start, const GtkTextIter* end);
// char* gtk_text_iter_get_visible_slice (const ::GtkTextIter* start, const ::GtkTextIter* end);
GI_INLINE_DECL std::string get_visible_slice (const Gtk::TextIter & end) const noexcept;

// gchar* gtk_text_iter_get_visible_text (const GtkTextIter* start, const GtkTextIter* end);
// char* gtk_text_iter_get_visible_text (const ::GtkTextIter* start, const ::GtkTextIter* end);
GI_INLINE_DECL std::string get_visible_text (const Gtk::TextIter & end) const noexcept;

// gboolean gtk_text_iter_has_tag (const GtkTextIter* iter, GtkTextTag* tag);
// gboolean gtk_text_iter_has_tag (const ::GtkTextIter* iter, ::GtkTextTag* tag);
GI_INLINE_DECL bool has_tag (Gtk::TextTag tag) const noexcept;

// gboolean gtk_text_iter_in_range (const GtkTextIter* iter, const GtkTextIter* start, const GtkTextIter* end);
// gboolean gtk_text_iter_in_range (const ::GtkTextIter* iter, const ::GtkTextIter* start, const ::GtkTextIter* end);
GI_INLINE_DECL bool in_range (const Gtk::TextIter & start, const Gtk::TextIter & end) const noexcept;

// gboolean gtk_text_iter_inside_sentence (const GtkTextIter* iter);
// gboolean gtk_text_iter_inside_sentence (const ::GtkTextIter* iter);
GI_INLINE_DECL bool inside_sentence () const noexcept;

// gboolean gtk_text_iter_inside_word (const GtkTextIter* iter);
// gboolean gtk_text_iter_inside_word (const ::GtkTextIter* iter);
GI_INLINE_DECL bool inside_word () const noexcept;

// gboolean gtk_text_iter_is_cursor_position (const GtkTextIter* iter);
// gboolean gtk_text_iter_is_cursor_position (const ::GtkTextIter* iter);
GI_INLINE_DECL bool is_cursor_position () const noexcept;

// gboolean gtk_text_iter_is_end (const GtkTextIter* iter);
// gboolean gtk_text_iter_is_end (const ::GtkTextIter* iter);
GI_INLINE_DECL bool is_end () const noexcept;

// gboolean gtk_text_iter_is_start (const GtkTextIter* iter);
// gboolean gtk_text_iter_is_start (const ::GtkTextIter* iter);
GI_INLINE_DECL bool is_start () const noexcept;

// void gtk_text_iter_order (GtkTextIter* first, GtkTextIter* second);
// void gtk_text_iter_order (::GtkTextIter* first, ::GtkTextIter* second);
GI_INLINE_DECL void order (Gtk::TextIter second) noexcept;

// void gtk_text_iter_set_line (GtkTextIter* iter, gint line_number);
// void gtk_text_iter_set_line (::GtkTextIter* iter, gint line_number);
GI_INLINE_DECL void set_line (gint line_number) noexcept;

// void gtk_text_iter_set_line_index (GtkTextIter* iter, gint byte_on_line);
// void gtk_text_iter_set_line_index (::GtkTextIter* iter, gint byte_on_line);
GI_INLINE_DECL void set_line_index (gint byte_on_line) noexcept;

// void gtk_text_iter_set_line_offset (GtkTextIter* iter, gint char_on_line);
// void gtk_text_iter_set_line_offset (::GtkTextIter* iter, gint char_on_line);
GI_INLINE_DECL void set_line_offset (gint char_on_line) noexcept;

// void gtk_text_iter_set_offset (GtkTextIter* iter, gint char_offset);
// void gtk_text_iter_set_offset (::GtkTextIter* iter, gint char_offset);
GI_INLINE_DECL void set_offset (gint char_offset) noexcept;

// void gtk_text_iter_set_visible_line_index (GtkTextIter* iter, gint byte_on_line);
// void gtk_text_iter_set_visible_line_index (::GtkTextIter* iter, gint byte_on_line);
GI_INLINE_DECL void set_visible_line_index (gint byte_on_line) noexcept;

// void gtk_text_iter_set_visible_line_offset (GtkTextIter* iter, gint char_on_line);
// void gtk_text_iter_set_visible_line_offset (::GtkTextIter* iter, gint char_on_line);
GI_INLINE_DECL void set_visible_line_offset (gint char_on_line) noexcept;

// gboolean gtk_text_iter_starts_line (const GtkTextIter* iter);
// gboolean gtk_text_iter_starts_line (const ::GtkTextIter* iter);
GI_INLINE_DECL bool starts_line () const noexcept;

// gboolean gtk_text_iter_starts_sentence (const GtkTextIter* iter);
// gboolean gtk_text_iter_starts_sentence (const ::GtkTextIter* iter);
GI_INLINE_DECL bool starts_sentence () const noexcept;

// gboolean gtk_text_iter_starts_tag (const GtkTextIter* iter, GtkTextTag* tag);
// gboolean gtk_text_iter_starts_tag (const ::GtkTextIter* iter, ::GtkTextTag* tag);
GI_INLINE_DECL bool starts_tag (Gtk::TextTag tag) const noexcept;
GI_INLINE_DECL bool starts_tag () const noexcept;

// gboolean gtk_text_iter_starts_word (const GtkTextIter* iter);
// gboolean gtk_text_iter_starts_word (const ::GtkTextIter* iter);
GI_INLINE_DECL bool starts_word () const noexcept;

// gboolean gtk_text_iter_toggles_tag (const GtkTextIter* iter, GtkTextTag* tag);
// gboolean gtk_text_iter_toggles_tag (const ::GtkTextIter* iter, ::GtkTextTag* tag);
GI_INLINE_DECL bool toggles_tag (Gtk::TextTag tag) const noexcept;
GI_INLINE_DECL bool toggles_tag () const noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/textiter_extra_def.hpp>)
#include <gtk/textiter_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/textiter_extra.hpp>)
#include <gtk/textiter_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class TextIter : public GI_GTK_TEXTITER_BASE
{ typedef GI_GTK_TEXTITER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTextIter>
{ typedef Gtk::TextIter type; }; 

} // namespace repository

} // namespace gi

#endif
