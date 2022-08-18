// AUTO-GENERATED

#ifndef _GI_GTK_TEXTBUFFER_HPP_
#define _GI_GTK_TEXTBUFFER_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Clipboard;
class TargetList;
class TextChildAnchor;
class TextIter;
class TextMark;
class TextTag;
class TextTagTable;

class TextBuffer;

namespace base {


#define GI_GTK_TEXTBUFFER_BASE base::TextBufferBase
class TextBufferBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkTextBuffer BaseObjectType;

TextBufferBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_text_buffer_get_type(); } 

// GtkTextBuffer* gtk_text_buffer_new (GtkTextTagTable* table);
// ::GtkTextBuffer* gtk_text_buffer_new (::GtkTextTagTable* table);
static GI_INLINE_DECL Gtk::TextBuffer new_ (Gtk::TextTagTable table) noexcept;
static GI_INLINE_DECL Gtk::TextBuffer new_ () noexcept;

// void gtk_text_buffer_add_mark (GtkTextBuffer* buffer, GtkTextMark* mark, const GtkTextIter* where);
// void gtk_text_buffer_add_mark (::GtkTextBuffer* buffer, ::GtkTextMark* mark, const ::GtkTextIter* where);
GI_INLINE_DECL void add_mark (Gtk::TextMark mark, const Gtk::TextIter & where) noexcept;

// void gtk_text_buffer_add_selection_clipboard (GtkTextBuffer* buffer, GtkClipboard* clipboard);
// void gtk_text_buffer_add_selection_clipboard (::GtkTextBuffer* buffer, ::GtkClipboard* clipboard);
GI_INLINE_DECL void add_selection_clipboard (Gtk::Clipboard clipboard) noexcept;

// void gtk_text_buffer_apply_tag (GtkTextBuffer* buffer, GtkTextTag* tag, const GtkTextIter* start, const GtkTextIter* end);
// void gtk_text_buffer_apply_tag (::GtkTextBuffer* buffer, ::GtkTextTag* tag, const ::GtkTextIter* start, const ::GtkTextIter* end);
GI_INLINE_DECL void apply_tag (Gtk::TextTag tag, const Gtk::TextIter & start, const Gtk::TextIter & end) noexcept;

// void gtk_text_buffer_apply_tag_by_name (GtkTextBuffer* buffer, const gchar* name, const GtkTextIter* start, const GtkTextIter* end);
// void gtk_text_buffer_apply_tag_by_name (::GtkTextBuffer* buffer, const char* name, const ::GtkTextIter* start, const ::GtkTextIter* end);
GI_INLINE_DECL void apply_tag_by_name (const std::string & name, const Gtk::TextIter & start, const Gtk::TextIter & end) noexcept;

// gboolean gtk_text_buffer_backspace (GtkTextBuffer* buffer, GtkTextIter* iter, gboolean interactive, gboolean default_editable);
// gboolean gtk_text_buffer_backspace (::GtkTextBuffer* buffer, ::GtkTextIter* iter, gboolean interactive, gboolean default_editable);
GI_INLINE_DECL bool backspace (Gtk::TextIter iter, gboolean interactive, gboolean default_editable) noexcept;

// void gtk_text_buffer_begin_user_action (GtkTextBuffer* buffer);
// void gtk_text_buffer_begin_user_action (::GtkTextBuffer* buffer);
GI_INLINE_DECL void begin_user_action () noexcept;

// void gtk_text_buffer_copy_clipboard (GtkTextBuffer* buffer, GtkClipboard* clipboard);
// void gtk_text_buffer_copy_clipboard (::GtkTextBuffer* buffer, ::GtkClipboard* clipboard);
GI_INLINE_DECL void copy_clipboard (Gtk::Clipboard clipboard) noexcept;

// GtkTextChildAnchor* gtk_text_buffer_create_child_anchor (GtkTextBuffer* buffer, GtkTextIter* iter);
// ::GtkTextChildAnchor* gtk_text_buffer_create_child_anchor (::GtkTextBuffer* buffer, ::GtkTextIter* iter);
GI_INLINE_DECL Gtk::TextChildAnchor create_child_anchor (Gtk::TextIter iter) noexcept;

// GtkTextMark* gtk_text_buffer_create_mark (GtkTextBuffer* buffer, const gchar* mark_name, const GtkTextIter* where, gboolean left_gravity);
// ::GtkTextMark* gtk_text_buffer_create_mark (::GtkTextBuffer* buffer, const char* mark_name, const ::GtkTextIter* where, gboolean left_gravity);
GI_INLINE_DECL Gtk::TextMark create_mark (const std::string & mark_name, const Gtk::TextIter & where, gboolean left_gravity) noexcept;
GI_INLINE_DECL Gtk::TextMark create_mark (const Gtk::TextIter & where, gboolean left_gravity) noexcept;

// GtkTextTag* gtk_text_buffer_create_tag (GtkTextBuffer* buffer, const gchar* tag_name, const gchar* first_property_name);
// ::GtkTextTag* gtk_text_buffer_create_tag (::GtkTextBuffer* buffer, const char* tag_name, const char* first_property_name);
// IGNORE; not introspectable, varargs not supported

// void gtk_text_buffer_cut_clipboard (GtkTextBuffer* buffer, GtkClipboard* clipboard, gboolean default_editable);
// void gtk_text_buffer_cut_clipboard (::GtkTextBuffer* buffer, ::GtkClipboard* clipboard, gboolean default_editable);
GI_INLINE_DECL void cut_clipboard (Gtk::Clipboard clipboard, gboolean default_editable) noexcept;

// void gtk_text_buffer_delete (GtkTextBuffer* buffer, GtkTextIter* start, GtkTextIter* end);
// void gtk_text_buffer_delete (::GtkTextBuffer* buffer, ::GtkTextIter* start, ::GtkTextIter* end);
GI_INLINE_DECL void delete_ (Gtk::TextIter start, Gtk::TextIter end) noexcept;

// gboolean gtk_text_buffer_delete_interactive (GtkTextBuffer* buffer, GtkTextIter* start_iter, GtkTextIter* end_iter, gboolean default_editable);
// gboolean gtk_text_buffer_delete_interactive (::GtkTextBuffer* buffer, ::GtkTextIter* start_iter, ::GtkTextIter* end_iter, gboolean default_editable);
GI_INLINE_DECL bool delete_interactive (Gtk::TextIter start_iter, Gtk::TextIter end_iter, gboolean default_editable) noexcept;

// void gtk_text_buffer_delete_mark (GtkTextBuffer* buffer, GtkTextMark* mark);
// void gtk_text_buffer_delete_mark (::GtkTextBuffer* buffer, ::GtkTextMark* mark);
GI_INLINE_DECL void delete_mark (Gtk::TextMark mark) noexcept;

// void gtk_text_buffer_delete_mark_by_name (GtkTextBuffer* buffer, const gchar* name);
// void gtk_text_buffer_delete_mark_by_name (::GtkTextBuffer* buffer, const char* name);
GI_INLINE_DECL void delete_mark_by_name (const std::string & name) noexcept;

// gboolean gtk_text_buffer_delete_selection (GtkTextBuffer* buffer, gboolean interactive, gboolean default_editable);
// gboolean gtk_text_buffer_delete_selection (::GtkTextBuffer* buffer, gboolean interactive, gboolean default_editable);
GI_INLINE_DECL bool delete_selection (gboolean interactive, gboolean default_editable) noexcept;

// gboolean gtk_text_buffer_deserialize (GtkTextBuffer* register_buffer, GtkTextBuffer* content_buffer, GdkAtom format, GtkTextIter* iter, const guint8* data, gsize length, GError ** error);
// gboolean gtk_text_buffer_deserialize (::GtkTextBuffer* register_buffer, ::GtkTextBuffer* content_buffer,  format, ::GtkTextIter* iter, const guint8* data, gsize length, GError ** error);
// SKIP; format type  not supported

// gboolean gtk_text_buffer_deserialize_get_can_create_tags (GtkTextBuffer* buffer, GdkAtom format);
// gboolean gtk_text_buffer_deserialize_get_can_create_tags (::GtkTextBuffer* buffer,  format);
// SKIP; format type  not supported

// void gtk_text_buffer_deserialize_set_can_create_tags (GtkTextBuffer* buffer, GdkAtom format, gboolean can_create_tags);
// void gtk_text_buffer_deserialize_set_can_create_tags (::GtkTextBuffer* buffer,  format, gboolean can_create_tags);
// SKIP; format type  not supported

// void gtk_text_buffer_end_user_action (GtkTextBuffer* buffer);
// void gtk_text_buffer_end_user_action (::GtkTextBuffer* buffer);
GI_INLINE_DECL void end_user_action () noexcept;

// void gtk_text_buffer_get_bounds (GtkTextBuffer* buffer, GtkTextIter* start, GtkTextIter* end);
// void gtk_text_buffer_get_bounds (::GtkTextBuffer* buffer, ::GtkTextIter* start, ::GtkTextIter* end);
GI_INLINE_DECL void get_bounds (Gtk::TextIter & start, Gtk::TextIter & end) noexcept;
GI_INLINE_DECL std::tuple<Gtk::TextIter, Gtk::TextIter> get_bounds () noexcept;

// gint gtk_text_buffer_get_char_count (GtkTextBuffer* buffer);
// gint gtk_text_buffer_get_char_count (::GtkTextBuffer* buffer);
GI_INLINE_DECL gint get_char_count () noexcept;

// GtkTargetList* gtk_text_buffer_get_copy_target_list (GtkTextBuffer* buffer);
// ::GtkTargetList* gtk_text_buffer_get_copy_target_list (::GtkTextBuffer* buffer);
GI_INLINE_DECL Gtk::TargetList get_copy_target_list () noexcept;

//  gtk_text_buffer_get_deserialize_formats (GtkTextBuffer* buffer, gint* n_formats);
//  gtk_text_buffer_get_deserialize_formats (::GtkTextBuffer* buffer, gint* n_formats);
// SKIP; container element not supported

// void gtk_text_buffer_get_end_iter (GtkTextBuffer* buffer, GtkTextIter* iter);
// void gtk_text_buffer_get_end_iter (::GtkTextBuffer* buffer, ::GtkTextIter* iter);
GI_INLINE_DECL void get_end_iter (Gtk::TextIter & iter) noexcept;
GI_INLINE_DECL Gtk::TextIter get_end_iter () noexcept;

// gboolean gtk_text_buffer_get_has_selection (GtkTextBuffer* buffer);
// gboolean gtk_text_buffer_get_has_selection (::GtkTextBuffer* buffer);
GI_INLINE_DECL bool get_has_selection () noexcept;

// GtkTextMark* gtk_text_buffer_get_insert (GtkTextBuffer* buffer);
// ::GtkTextMark* gtk_text_buffer_get_insert (::GtkTextBuffer* buffer);
GI_INLINE_DECL Gtk::TextMark get_insert () noexcept;

// void gtk_text_buffer_get_iter_at_child_anchor (GtkTextBuffer* buffer, GtkTextIter* iter, GtkTextChildAnchor* anchor);
// void gtk_text_buffer_get_iter_at_child_anchor (::GtkTextBuffer* buffer, ::GtkTextIter* iter, ::GtkTextChildAnchor* anchor);
GI_INLINE_DECL void get_iter_at_child_anchor (Gtk::TextIter & iter, Gtk::TextChildAnchor anchor) noexcept;
GI_INLINE_DECL Gtk::TextIter get_iter_at_child_anchor (Gtk::TextChildAnchor anchor) noexcept;

// void gtk_text_buffer_get_iter_at_line (GtkTextBuffer* buffer, GtkTextIter* iter, gint line_number);
// void gtk_text_buffer_get_iter_at_line (::GtkTextBuffer* buffer, ::GtkTextIter* iter, gint line_number);
GI_INLINE_DECL void get_iter_at_line (Gtk::TextIter & iter, gint line_number) noexcept;
GI_INLINE_DECL Gtk::TextIter get_iter_at_line (gint line_number) noexcept;

// void gtk_text_buffer_get_iter_at_line_index (GtkTextBuffer* buffer, GtkTextIter* iter, gint line_number, gint byte_index);
// void gtk_text_buffer_get_iter_at_line_index (::GtkTextBuffer* buffer, ::GtkTextIter* iter, gint line_number, gint byte_index);
GI_INLINE_DECL void get_iter_at_line_index (Gtk::TextIter & iter, gint line_number, gint byte_index) noexcept;
GI_INLINE_DECL Gtk::TextIter get_iter_at_line_index (gint line_number, gint byte_index) noexcept;

// void gtk_text_buffer_get_iter_at_line_offset (GtkTextBuffer* buffer, GtkTextIter* iter, gint line_number, gint char_offset);
// void gtk_text_buffer_get_iter_at_line_offset (::GtkTextBuffer* buffer, ::GtkTextIter* iter, gint line_number, gint char_offset);
GI_INLINE_DECL void get_iter_at_line_offset (Gtk::TextIter & iter, gint line_number, gint char_offset) noexcept;
GI_INLINE_DECL Gtk::TextIter get_iter_at_line_offset (gint line_number, gint char_offset) noexcept;

// void gtk_text_buffer_get_iter_at_mark (GtkTextBuffer* buffer, GtkTextIter* iter, GtkTextMark* mark);
// void gtk_text_buffer_get_iter_at_mark (::GtkTextBuffer* buffer, ::GtkTextIter* iter, ::GtkTextMark* mark);
GI_INLINE_DECL void get_iter_at_mark (Gtk::TextIter & iter, Gtk::TextMark mark) noexcept;
GI_INLINE_DECL Gtk::TextIter get_iter_at_mark (Gtk::TextMark mark) noexcept;

// void gtk_text_buffer_get_iter_at_offset (GtkTextBuffer* buffer, GtkTextIter* iter, gint char_offset);
// void gtk_text_buffer_get_iter_at_offset (::GtkTextBuffer* buffer, ::GtkTextIter* iter, gint char_offset);
GI_INLINE_DECL void get_iter_at_offset (Gtk::TextIter & iter, gint char_offset) noexcept;
GI_INLINE_DECL Gtk::TextIter get_iter_at_offset (gint char_offset) noexcept;

// gint gtk_text_buffer_get_line_count (GtkTextBuffer* buffer);
// gint gtk_text_buffer_get_line_count (::GtkTextBuffer* buffer);
GI_INLINE_DECL gint get_line_count () noexcept;

// GtkTextMark* gtk_text_buffer_get_mark (GtkTextBuffer* buffer, const gchar* name);
// ::GtkTextMark* gtk_text_buffer_get_mark (::GtkTextBuffer* buffer, const char* name);
GI_INLINE_DECL Gtk::TextMark get_mark (const std::string & name) noexcept;

// gboolean gtk_text_buffer_get_modified (GtkTextBuffer* buffer);
// gboolean gtk_text_buffer_get_modified (::GtkTextBuffer* buffer);
GI_INLINE_DECL bool get_modified () noexcept;

// GtkTargetList* gtk_text_buffer_get_paste_target_list (GtkTextBuffer* buffer);
// ::GtkTargetList* gtk_text_buffer_get_paste_target_list (::GtkTextBuffer* buffer);
GI_INLINE_DECL Gtk::TargetList get_paste_target_list () noexcept;

// GtkTextMark* gtk_text_buffer_get_selection_bound (GtkTextBuffer* buffer);
// ::GtkTextMark* gtk_text_buffer_get_selection_bound (::GtkTextBuffer* buffer);
GI_INLINE_DECL Gtk::TextMark get_selection_bound () noexcept;

// gboolean gtk_text_buffer_get_selection_bounds (GtkTextBuffer* buffer, GtkTextIter* start, GtkTextIter* end);
// gboolean gtk_text_buffer_get_selection_bounds (::GtkTextBuffer* buffer, ::GtkTextIter* start, ::GtkTextIter* end);
GI_INLINE_DECL bool get_selection_bounds (Gtk::TextIter & start, Gtk::TextIter & end) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TextIter, Gtk::TextIter> get_selection_bounds () noexcept;

//  gtk_text_buffer_get_serialize_formats (GtkTextBuffer* buffer, gint* n_formats);
//  gtk_text_buffer_get_serialize_formats (::GtkTextBuffer* buffer, gint* n_formats);
// SKIP; container element not supported

// gchar* gtk_text_buffer_get_slice (GtkTextBuffer* buffer, const GtkTextIter* start, const GtkTextIter* end, gboolean include_hidden_chars);
// char* gtk_text_buffer_get_slice (::GtkTextBuffer* buffer, const ::GtkTextIter* start, const ::GtkTextIter* end, gboolean include_hidden_chars);
GI_INLINE_DECL std::string get_slice (const Gtk::TextIter & start, const Gtk::TextIter & end, gboolean include_hidden_chars) noexcept;

// void gtk_text_buffer_get_start_iter (GtkTextBuffer* buffer, GtkTextIter* iter);
// void gtk_text_buffer_get_start_iter (::GtkTextBuffer* buffer, ::GtkTextIter* iter);
GI_INLINE_DECL void get_start_iter (Gtk::TextIter & iter) noexcept;
GI_INLINE_DECL Gtk::TextIter get_start_iter () noexcept;

// GtkTextTagTable* gtk_text_buffer_get_tag_table (GtkTextBuffer* buffer);
// ::GtkTextTagTable* gtk_text_buffer_get_tag_table (::GtkTextBuffer* buffer);
GI_INLINE_DECL Gtk::TextTagTable get_tag_table () noexcept;

// gchar* gtk_text_buffer_get_text (GtkTextBuffer* buffer, const GtkTextIter* start, const GtkTextIter* end, gboolean include_hidden_chars);
// char* gtk_text_buffer_get_text (::GtkTextBuffer* buffer, const ::GtkTextIter* start, const ::GtkTextIter* end, gboolean include_hidden_chars);
GI_INLINE_DECL std::string get_text (const Gtk::TextIter & start, const Gtk::TextIter & end, gboolean include_hidden_chars) noexcept;

// void gtk_text_buffer_insert (GtkTextBuffer* buffer, GtkTextIter* iter, const gchar* text, gint len);
// void gtk_text_buffer_insert (::GtkTextBuffer* buffer, ::GtkTextIter* iter, const char* text, gint len);
GI_INLINE_DECL void insert (Gtk::TextIter iter, const std::string & text, gint len) noexcept;

// void gtk_text_buffer_insert_at_cursor (GtkTextBuffer* buffer, const gchar* text, gint len);
// void gtk_text_buffer_insert_at_cursor (::GtkTextBuffer* buffer, const char* text, gint len);
GI_INLINE_DECL void insert_at_cursor (const std::string & text, gint len) noexcept;

// void gtk_text_buffer_insert_child_anchor (GtkTextBuffer* buffer, GtkTextIter* iter, GtkTextChildAnchor* anchor);
// void gtk_text_buffer_insert_child_anchor (::GtkTextBuffer* buffer, ::GtkTextIter* iter, ::GtkTextChildAnchor* anchor);
GI_INLINE_DECL void insert_child_anchor (Gtk::TextIter iter, Gtk::TextChildAnchor anchor) noexcept;

// gboolean gtk_text_buffer_insert_interactive (GtkTextBuffer* buffer, GtkTextIter* iter, const gchar* text, gint len, gboolean default_editable);
// gboolean gtk_text_buffer_insert_interactive (::GtkTextBuffer* buffer, ::GtkTextIter* iter, const char* text, gint len, gboolean default_editable);
GI_INLINE_DECL bool insert_interactive (Gtk::TextIter iter, const std::string & text, gint len, gboolean default_editable) noexcept;

// gboolean gtk_text_buffer_insert_interactive_at_cursor (GtkTextBuffer* buffer, const gchar* text, gint len, gboolean default_editable);
// gboolean gtk_text_buffer_insert_interactive_at_cursor (::GtkTextBuffer* buffer, const char* text, gint len, gboolean default_editable);
GI_INLINE_DECL bool insert_interactive_at_cursor (const std::string & text, gint len, gboolean default_editable) noexcept;

// void gtk_text_buffer_insert_markup (GtkTextBuffer* buffer, GtkTextIter* iter, const gchar* markup, gint len);
// void gtk_text_buffer_insert_markup (::GtkTextBuffer* buffer, ::GtkTextIter* iter, const char* markup, gint len);
GI_INLINE_DECL void insert_markup (Gtk::TextIter iter, const std::string & markup, gint len) noexcept;

// void gtk_text_buffer_insert_pixbuf (GtkTextBuffer* buffer, GtkTextIter* iter, GdkPixbuf* pixbuf);
// void gtk_text_buffer_insert_pixbuf (::GtkTextBuffer* buffer, ::GtkTextIter* iter, ::GdkPixbuf* pixbuf);
GI_INLINE_DECL void insert_pixbuf (Gtk::TextIter iter, GdkPixbuf::Pixbuf pixbuf) noexcept;

// void gtk_text_buffer_insert_range (GtkTextBuffer* buffer, GtkTextIter* iter, const GtkTextIter* start, const GtkTextIter* end);
// void gtk_text_buffer_insert_range (::GtkTextBuffer* buffer, ::GtkTextIter* iter, const ::GtkTextIter* start, const ::GtkTextIter* end);
GI_INLINE_DECL void insert_range (Gtk::TextIter iter, const Gtk::TextIter & start, const Gtk::TextIter & end) noexcept;

// gboolean gtk_text_buffer_insert_range_interactive (GtkTextBuffer* buffer, GtkTextIter* iter, const GtkTextIter* start, const GtkTextIter* end, gboolean default_editable);
// gboolean gtk_text_buffer_insert_range_interactive (::GtkTextBuffer* buffer, ::GtkTextIter* iter, const ::GtkTextIter* start, const ::GtkTextIter* end, gboolean default_editable);
GI_INLINE_DECL bool insert_range_interactive (Gtk::TextIter iter, const Gtk::TextIter & start, const Gtk::TextIter & end, gboolean default_editable) noexcept;

// void gtk_text_buffer_insert_with_tags (GtkTextBuffer* buffer, GtkTextIter* iter, const gchar* text, gint len, GtkTextTag* first_tag);
// void gtk_text_buffer_insert_with_tags (::GtkTextBuffer* buffer, ::GtkTextIter* iter, const char* text, gint len, ::GtkTextTag* first_tag);
// IGNORE; not introspectable, varargs not supported

// void gtk_text_buffer_insert_with_tags_by_name (GtkTextBuffer* buffer, GtkTextIter* iter, const gchar* text, gint len, const gchar* first_tag_name);
// void gtk_text_buffer_insert_with_tags_by_name (::GtkTextBuffer* buffer, ::GtkTextIter* iter, const char* text, gint len, const char* first_tag_name);
// IGNORE; not introspectable, varargs not supported

// void gtk_text_buffer_move_mark (GtkTextBuffer* buffer, GtkTextMark* mark, const GtkTextIter* where);
// void gtk_text_buffer_move_mark (::GtkTextBuffer* buffer, ::GtkTextMark* mark, const ::GtkTextIter* where);
GI_INLINE_DECL void move_mark (Gtk::TextMark mark, const Gtk::TextIter & where) noexcept;

// void gtk_text_buffer_move_mark_by_name (GtkTextBuffer* buffer, const gchar* name, const GtkTextIter* where);
// void gtk_text_buffer_move_mark_by_name (::GtkTextBuffer* buffer, const char* name, const ::GtkTextIter* where);
GI_INLINE_DECL void move_mark_by_name (const std::string & name, const Gtk::TextIter & where) noexcept;

// void gtk_text_buffer_paste_clipboard (GtkTextBuffer* buffer, GtkClipboard* clipboard, GtkTextIter* override_location, gboolean default_editable);
// void gtk_text_buffer_paste_clipboard (::GtkTextBuffer* buffer, ::GtkClipboard* clipboard, ::GtkTextIter* override_location, gboolean default_editable);
GI_INLINE_DECL void paste_clipboard (Gtk::Clipboard clipboard, Gtk::TextIter override_location, gboolean default_editable) noexcept;
GI_INLINE_DECL void paste_clipboard (Gtk::Clipboard clipboard, gboolean default_editable) noexcept;

// void gtk_text_buffer_place_cursor (GtkTextBuffer* buffer, const GtkTextIter* where);
// void gtk_text_buffer_place_cursor (::GtkTextBuffer* buffer, const ::GtkTextIter* where);
GI_INLINE_DECL void place_cursor (const Gtk::TextIter & where) noexcept;

// GdkAtom gtk_text_buffer_register_deserialize_format (GtkTextBuffer* buffer, const gchar* mime_type, GtkTextBufferDeserializeFunc function, gpointer user_data, GDestroyNotify user_data_destroy);
//  gtk_text_buffer_register_deserialize_format (::GtkTextBuffer* buffer, const char* mime_type,  function, void* user_data, GLib::DestroyNotify::cfunction_type user_data_destroy);
// SKIP; function type  not supported,  type  not supported

// GdkAtom gtk_text_buffer_register_deserialize_tagset (GtkTextBuffer* buffer, const gchar* tagset_name);
//  gtk_text_buffer_register_deserialize_tagset (::GtkTextBuffer* buffer, const char* tagset_name);
// SKIP;  type  not supported

// GdkAtom gtk_text_buffer_register_serialize_format (GtkTextBuffer* buffer, const gchar* mime_type, GtkTextBufferSerializeFunc function, gpointer user_data, GDestroyNotify user_data_destroy);
//  gtk_text_buffer_register_serialize_format (::GtkTextBuffer* buffer, const char* mime_type,  function, void* user_data, GLib::DestroyNotify::cfunction_type user_data_destroy);
// SKIP; function type  not supported,  type  not supported

// GdkAtom gtk_text_buffer_register_serialize_tagset (GtkTextBuffer* buffer, const gchar* tagset_name);
//  gtk_text_buffer_register_serialize_tagset (::GtkTextBuffer* buffer, const char* tagset_name);
// SKIP;  type  not supported

// void gtk_text_buffer_remove_all_tags (GtkTextBuffer* buffer, const GtkTextIter* start, const GtkTextIter* end);
// void gtk_text_buffer_remove_all_tags (::GtkTextBuffer* buffer, const ::GtkTextIter* start, const ::GtkTextIter* end);
GI_INLINE_DECL void remove_all_tags (const Gtk::TextIter & start, const Gtk::TextIter & end) noexcept;

// void gtk_text_buffer_remove_selection_clipboard (GtkTextBuffer* buffer, GtkClipboard* clipboard);
// void gtk_text_buffer_remove_selection_clipboard (::GtkTextBuffer* buffer, ::GtkClipboard* clipboard);
GI_INLINE_DECL void remove_selection_clipboard (Gtk::Clipboard clipboard) noexcept;

// void gtk_text_buffer_remove_tag (GtkTextBuffer* buffer, GtkTextTag* tag, const GtkTextIter* start, const GtkTextIter* end);
// void gtk_text_buffer_remove_tag (::GtkTextBuffer* buffer, ::GtkTextTag* tag, const ::GtkTextIter* start, const ::GtkTextIter* end);
GI_INLINE_DECL void remove_tag (Gtk::TextTag tag, const Gtk::TextIter & start, const Gtk::TextIter & end) noexcept;

// void gtk_text_buffer_remove_tag_by_name (GtkTextBuffer* buffer, const gchar* name, const GtkTextIter* start, const GtkTextIter* end);
// void gtk_text_buffer_remove_tag_by_name (::GtkTextBuffer* buffer, const char* name, const ::GtkTextIter* start, const ::GtkTextIter* end);
GI_INLINE_DECL void remove_tag_by_name (const std::string & name, const Gtk::TextIter & start, const Gtk::TextIter & end) noexcept;

// void gtk_text_buffer_select_range (GtkTextBuffer* buffer, const GtkTextIter* ins, const GtkTextIter* bound);
// void gtk_text_buffer_select_range (::GtkTextBuffer* buffer, const ::GtkTextIter* ins, const ::GtkTextIter* bound);
GI_INLINE_DECL void select_range (const Gtk::TextIter & ins, const Gtk::TextIter & bound) noexcept;

// guint8* gtk_text_buffer_serialize (GtkTextBuffer* register_buffer, GtkTextBuffer* content_buffer, GdkAtom format, const GtkTextIter* start, const GtkTextIter* end, gsize* length);
// guint8* gtk_text_buffer_serialize (::GtkTextBuffer* register_buffer, ::GtkTextBuffer* content_buffer,  format, const ::GtkTextIter* start, const ::GtkTextIter* end, gsize* length);
// SKIP; format type  not supported

// void gtk_text_buffer_set_modified (GtkTextBuffer* buffer, gboolean setting);
// void gtk_text_buffer_set_modified (::GtkTextBuffer* buffer, gboolean setting);
GI_INLINE_DECL void set_modified (gboolean setting) noexcept;

// void gtk_text_buffer_set_text (GtkTextBuffer* buffer, const gchar* text, gint len);
// void gtk_text_buffer_set_text (::GtkTextBuffer* buffer, const char* text, gint len);
GI_INLINE_DECL void set_text (const std::string & text, gint len) noexcept;

// void gtk_text_buffer_unregister_deserialize_format (GtkTextBuffer* buffer, GdkAtom format);
// void gtk_text_buffer_unregister_deserialize_format (::GtkTextBuffer* buffer,  format);
// SKIP; format type  not supported

// void gtk_text_buffer_unregister_serialize_format (GtkTextBuffer* buffer, GdkAtom format);
// void gtk_text_buffer_unregister_serialize_format (::GtkTextBuffer* buffer,  format);
// SKIP; format type  not supported

gi::property_proxy<Gtk::TargetList, base::TextBufferBase> property_copy_target_list()
{ return gi::property_proxy<Gtk::TargetList, base::TextBufferBase> (*this, "copy-target-list"); }
const gi::property_proxy<Gtk::TargetList, base::TextBufferBase> property_copy_target_list() const
{ return gi::property_proxy<Gtk::TargetList, base::TextBufferBase> (*this, "copy-target-list"); }

gi::property_proxy<gint, base::TextBufferBase> property_cursor_position()
{ return gi::property_proxy<gint, base::TextBufferBase> (*this, "cursor-position"); }
const gi::property_proxy<gint, base::TextBufferBase> property_cursor_position() const
{ return gi::property_proxy<gint, base::TextBufferBase> (*this, "cursor-position"); }

gi::property_proxy<bool, base::TextBufferBase> property_has_selection()
{ return gi::property_proxy<bool, base::TextBufferBase> (*this, "has-selection"); }
const gi::property_proxy<bool, base::TextBufferBase> property_has_selection() const
{ return gi::property_proxy<bool, base::TextBufferBase> (*this, "has-selection"); }

gi::property_proxy<Gtk::TargetList, base::TextBufferBase> property_paste_target_list()
{ return gi::property_proxy<Gtk::TargetList, base::TextBufferBase> (*this, "paste-target-list"); }
const gi::property_proxy<Gtk::TargetList, base::TextBufferBase> property_paste_target_list() const
{ return gi::property_proxy<Gtk::TargetList, base::TextBufferBase> (*this, "paste-target-list"); }

gi::property_proxy<Gtk::TextTagTable, base::TextBufferBase> property_tag_table()
{ return gi::property_proxy<Gtk::TextTagTable, base::TextBufferBase> (*this, "tag-table"); }
const gi::property_proxy<Gtk::TextTagTable, base::TextBufferBase> property_tag_table() const
{ return gi::property_proxy<Gtk::TextTagTable, base::TextBufferBase> (*this, "tag-table"); }

gi::property_proxy<std::string, base::TextBufferBase> property_text()
{ return gi::property_proxy<std::string, base::TextBufferBase> (*this, "text"); }
const gi::property_proxy<std::string, base::TextBufferBase> property_text() const
{ return gi::property_proxy<std::string, base::TextBufferBase> (*this, "text"); }

// signal apply-tag
gi::signal_proxy<void(Gtk::TextBuffer, Gtk::TextTag tag, Gtk::TextIter start, Gtk::TextIter end)> signal_apply_tag()
{ return gi::signal_proxy<void(Gtk::TextBuffer, Gtk::TextTag tag, Gtk::TextIter start, Gtk::TextIter end)> (*this, "apply-tag"); }

// signal begin-user-action
gi::signal_proxy<void(Gtk::TextBuffer)> signal_begin_user_action()
{ return gi::signal_proxy<void(Gtk::TextBuffer)> (*this, "begin-user-action"); }

// signal changed
gi::signal_proxy<void(Gtk::TextBuffer)> signal_changed()
{ return gi::signal_proxy<void(Gtk::TextBuffer)> (*this, "changed"); }

// signal delete-range
gi::signal_proxy<void(Gtk::TextBuffer, Gtk::TextIter start, Gtk::TextIter end)> signal_delete_range()
{ return gi::signal_proxy<void(Gtk::TextBuffer, Gtk::TextIter start, Gtk::TextIter end)> (*this, "delete-range"); }

// signal end-user-action
gi::signal_proxy<void(Gtk::TextBuffer)> signal_end_user_action()
{ return gi::signal_proxy<void(Gtk::TextBuffer)> (*this, "end-user-action"); }

// signal insert-child-anchor
gi::signal_proxy<void(Gtk::TextBuffer, Gtk::TextIter location, Gtk::TextChildAnchor anchor)> signal_insert_child_anchor()
{ return gi::signal_proxy<void(Gtk::TextBuffer, Gtk::TextIter location, Gtk::TextChildAnchor anchor)> (*this, "insert-child-anchor"); }

// signal insert-pixbuf
gi::signal_proxy<void(Gtk::TextBuffer, Gtk::TextIter location, GdkPixbuf::Pixbuf pixbuf)> signal_insert_pixbuf()
{ return gi::signal_proxy<void(Gtk::TextBuffer, Gtk::TextIter location, GdkPixbuf::Pixbuf pixbuf)> (*this, "insert-pixbuf"); }

// signal insert-text
gi::signal_proxy<void(Gtk::TextBuffer, Gtk::TextIter location, const std::string & text, gint len)> signal_insert_text()
{ return gi::signal_proxy<void(Gtk::TextBuffer, Gtk::TextIter location, const std::string & text, gint len)> (*this, "insert-text"); }

// signal mark-deleted
gi::signal_proxy<void(Gtk::TextBuffer, Gtk::TextMark mark)> signal_mark_deleted()
{ return gi::signal_proxy<void(Gtk::TextBuffer, Gtk::TextMark mark)> (*this, "mark-deleted"); }

// signal mark-set
gi::signal_proxy<void(Gtk::TextBuffer, Gtk::TextIter location, Gtk::TextMark mark)> signal_mark_set()
{ return gi::signal_proxy<void(Gtk::TextBuffer, Gtk::TextIter location, Gtk::TextMark mark)> (*this, "mark-set"); }

// signal modified-changed
gi::signal_proxy<void(Gtk::TextBuffer)> signal_modified_changed()
{ return gi::signal_proxy<void(Gtk::TextBuffer)> (*this, "modified-changed"); }

// signal paste-done
gi::signal_proxy<void(Gtk::TextBuffer, Gtk::Clipboard clipboard)> signal_paste_done()
{ return gi::signal_proxy<void(Gtk::TextBuffer, Gtk::Clipboard clipboard)> (*this, "paste-done"); }

// signal remove-tag
gi::signal_proxy<void(Gtk::TextBuffer, Gtk::TextTag tag, Gtk::TextIter start, Gtk::TextIter end)> signal_remove_tag()
{ return gi::signal_proxy<void(Gtk::TextBuffer, Gtk::TextTag tag, Gtk::TextIter start, Gtk::TextIter end)> (*this, "remove-tag"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/textbuffer_extra_def.hpp>)
#include <gtk/textbuffer_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/textbuffer_extra.hpp>)
#include <gtk/textbuffer_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class TextBuffer : public GI_GTK_TEXTBUFFER_BASE
{ typedef GI_GTK_TEXTBUFFER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTextBuffer>
{ typedef Gtk::TextBuffer type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class TextBufferClassDef
{
typedef TextBufferClassDef self;
public:
typedef Gtk::TextBuffer instance_type;
typedef ::GtkTextBufferClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void TextBuffer::apply_tag (GtkTextBuffer* buffer, GtkTextTag* tag, const GtkTextIter* start, const GtkTextIter* end);
// void TextBuffer::apply_tag (::GtkTextBuffer* buffer, ::GtkTextTag* tag, const ::GtkTextIter* start, const ::GtkTextIter* end);
virtual void apply_tag_ (Gtk::TextTag tag, const Gtk::TextIter & start, const Gtk::TextIter & end) noexcept = 0;

// void TextBuffer::begin_user_action (GtkTextBuffer* buffer);
// void TextBuffer::begin_user_action (::GtkTextBuffer* buffer);
virtual void begin_user_action_ () noexcept = 0;

// void TextBuffer::changed (GtkTextBuffer* buffer);
// void TextBuffer::changed (::GtkTextBuffer* buffer);
virtual void changed_ () noexcept = 0;

// void TextBuffer::delete_range (GtkTextBuffer* buffer, GtkTextIter* start, GtkTextIter* end);
// void TextBuffer::delete_range (::GtkTextBuffer* buffer, ::GtkTextIter* start, ::GtkTextIter* end);
virtual void delete_range_ (Gtk::TextIter start, Gtk::TextIter end) noexcept = 0;

// void TextBuffer::end_user_action (GtkTextBuffer* buffer);
// void TextBuffer::end_user_action (::GtkTextBuffer* buffer);
virtual void end_user_action_ () noexcept = 0;

// void TextBuffer::insert_child_anchor (GtkTextBuffer* buffer, GtkTextIter* iter, GtkTextChildAnchor* anchor);
// void TextBuffer::insert_child_anchor (::GtkTextBuffer* buffer, ::GtkTextIter* iter, ::GtkTextChildAnchor* anchor);
virtual void insert_child_anchor_ (Gtk::TextIter iter, Gtk::TextChildAnchor anchor) noexcept = 0;

// void TextBuffer::insert_pixbuf (GtkTextBuffer* buffer, GtkTextIter* iter, GdkPixbuf* pixbuf);
// void TextBuffer::insert_pixbuf (::GtkTextBuffer* buffer, ::GtkTextIter* iter, ::GdkPixbuf* pixbuf);
virtual void insert_pixbuf_ (Gtk::TextIter iter, GdkPixbuf::Pixbuf pixbuf) noexcept = 0;

// void TextBuffer::insert_text (GtkTextBuffer* buffer, GtkTextIter* pos, const gchar* new_text, gint new_text_length);
// void TextBuffer::insert_text (::GtkTextBuffer* buffer, ::GtkTextIter* pos, const char* new_text, gint new_text_length);
virtual void insert_text_ (Gtk::TextIter pos, const std::string & new_text, gint new_text_length) noexcept = 0;

// void TextBuffer::mark_deleted (GtkTextBuffer* buffer, GtkTextMark* mark);
// void TextBuffer::mark_deleted (::GtkTextBuffer* buffer, ::GtkTextMark* mark);
virtual void mark_deleted_ (Gtk::TextMark mark) noexcept = 0;

// void TextBuffer::mark_set (GtkTextBuffer* buffer, const GtkTextIter* location, GtkTextMark* mark);
// void TextBuffer::mark_set (::GtkTextBuffer* buffer, const ::GtkTextIter* location, ::GtkTextMark* mark);
virtual void mark_set_ (const Gtk::TextIter & location, Gtk::TextMark mark) noexcept = 0;

// void TextBuffer::modified_changed (GtkTextBuffer* buffer);
// void TextBuffer::modified_changed (::GtkTextBuffer* buffer);
virtual void modified_changed_ () noexcept = 0;

// void TextBuffer::paste_done (GtkTextBuffer* buffer, GtkClipboard* clipboard);
// void TextBuffer::paste_done (::GtkTextBuffer* buffer, ::GtkClipboard* clipboard);
virtual void paste_done_ (Gtk::Clipboard clipboard) noexcept = 0;

// void TextBuffer::remove_tag (GtkTextBuffer* buffer, GtkTextTag* tag, const GtkTextIter* start, const GtkTextIter* end);
// void TextBuffer::remove_tag (::GtkTextBuffer* buffer, ::GtkTextTag* tag, const ::GtkTextIter* start, const ::GtkTextIter* end);
virtual void remove_tag_ (Gtk::TextTag tag, const Gtk::TextIter & start, const Gtk::TextIter & end) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class TextBufferClass: public detail::ClassTemplate<Gtk::impl::internal::TextBufferClassDef, GObject::impl::internal::ObjectClass>
{
typedef TextBufferClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::TextBufferClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void TextBuffer::apply_tag (GtkTextBuffer* buffer, GtkTextTag* tag, const GtkTextIter* start, const GtkTextIter* end);
// void TextBuffer::apply_tag (::GtkTextBuffer* buffer, ::GtkTextTag* tag, const ::GtkTextIter* start, const ::GtkTextIter* end);
GI_INLINE_DECL void apply_tag_ (Gtk::TextTag tag, const Gtk::TextIter & start, const Gtk::TextIter & end) noexcept override;

// void TextBuffer::begin_user_action (GtkTextBuffer* buffer);
// void TextBuffer::begin_user_action (::GtkTextBuffer* buffer);
GI_INLINE_DECL void begin_user_action_ () noexcept override;

// void TextBuffer::changed (GtkTextBuffer* buffer);
// void TextBuffer::changed (::GtkTextBuffer* buffer);
GI_INLINE_DECL void changed_ () noexcept override;

// void TextBuffer::delete_range (GtkTextBuffer* buffer, GtkTextIter* start, GtkTextIter* end);
// void TextBuffer::delete_range (::GtkTextBuffer* buffer, ::GtkTextIter* start, ::GtkTextIter* end);
GI_INLINE_DECL void delete_range_ (Gtk::TextIter start, Gtk::TextIter end) noexcept override;

// void TextBuffer::end_user_action (GtkTextBuffer* buffer);
// void TextBuffer::end_user_action (::GtkTextBuffer* buffer);
GI_INLINE_DECL void end_user_action_ () noexcept override;

// void TextBuffer::insert_child_anchor (GtkTextBuffer* buffer, GtkTextIter* iter, GtkTextChildAnchor* anchor);
// void TextBuffer::insert_child_anchor (::GtkTextBuffer* buffer, ::GtkTextIter* iter, ::GtkTextChildAnchor* anchor);
GI_INLINE_DECL void insert_child_anchor_ (Gtk::TextIter iter, Gtk::TextChildAnchor anchor) noexcept override;

// void TextBuffer::insert_pixbuf (GtkTextBuffer* buffer, GtkTextIter* iter, GdkPixbuf* pixbuf);
// void TextBuffer::insert_pixbuf (::GtkTextBuffer* buffer, ::GtkTextIter* iter, ::GdkPixbuf* pixbuf);
GI_INLINE_DECL void insert_pixbuf_ (Gtk::TextIter iter, GdkPixbuf::Pixbuf pixbuf) noexcept override;

// void TextBuffer::insert_text (GtkTextBuffer* buffer, GtkTextIter* pos, const gchar* new_text, gint new_text_length);
// void TextBuffer::insert_text (::GtkTextBuffer* buffer, ::GtkTextIter* pos, const char* new_text, gint new_text_length);
GI_INLINE_DECL void insert_text_ (Gtk::TextIter pos, const std::string & new_text, gint new_text_length) noexcept override;

// void TextBuffer::mark_deleted (GtkTextBuffer* buffer, GtkTextMark* mark);
// void TextBuffer::mark_deleted (::GtkTextBuffer* buffer, ::GtkTextMark* mark);
GI_INLINE_DECL void mark_deleted_ (Gtk::TextMark mark) noexcept override;

// void TextBuffer::mark_set (GtkTextBuffer* buffer, const GtkTextIter* location, GtkTextMark* mark);
// void TextBuffer::mark_set (::GtkTextBuffer* buffer, const ::GtkTextIter* location, ::GtkTextMark* mark);
GI_INLINE_DECL void mark_set_ (const Gtk::TextIter & location, Gtk::TextMark mark) noexcept override;

// void TextBuffer::modified_changed (GtkTextBuffer* buffer);
// void TextBuffer::modified_changed (::GtkTextBuffer* buffer);
GI_INLINE_DECL void modified_changed_ () noexcept override;

// void TextBuffer::paste_done (GtkTextBuffer* buffer, GtkClipboard* clipboard);
// void TextBuffer::paste_done (::GtkTextBuffer* buffer, ::GtkClipboard* clipboard);
GI_INLINE_DECL void paste_done_ (Gtk::Clipboard clipboard) noexcept override;

// void TextBuffer::remove_tag (GtkTextBuffer* buffer, GtkTextTag* tag, const GtkTextIter* start, const GtkTextIter* end);
// void TextBuffer::remove_tag (::GtkTextBuffer* buffer, ::GtkTextTag* tag, const ::GtkTextIter* start, const ::GtkTextIter* end);
GI_INLINE_DECL void remove_tag_ (Gtk::TextTag tag, const Gtk::TextIter & start, const Gtk::TextIter & end) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using TextBufferImpl = detail::ObjectImpl<TextBuffer, internal::TextBufferClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
