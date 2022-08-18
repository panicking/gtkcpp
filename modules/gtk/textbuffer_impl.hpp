// AUTO-GENERATED

#ifndef _GI_GTK_TEXTBUFFER_IMPL_HPP_
#define _GI_GTK_TEXTBUFFER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkTextBuffer* gtk_text_buffer_new (GtkTextTagTable* table);
// ::GtkTextBuffer* gtk_text_buffer_new (::GtkTextTagTable* table);
Gtk::TextBuffer base::TextBufferBase::new_ (Gtk::TextTagTable table) noexcept
{
  typedef ::GtkTextBuffer* (*call_wrap_t) (::GtkTextTagTable* table);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_new;
  auto table_to_c = gi::unwrap (table, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTextTagTable*) (table_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gtk::TextBuffer base::TextBufferBase::new_ () noexcept
{
  typedef ::GtkTextBuffer* (*call_wrap_t) (::GtkTextTagTable* table);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_new;
  auto table_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkTextTagTable*) (table_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gtk_text_buffer_add_mark (GtkTextBuffer* buffer, GtkTextMark* mark, const GtkTextIter* where);
// void gtk_text_buffer_add_mark (::GtkTextBuffer* buffer, ::GtkTextMark* mark, const ::GtkTextIter* where);
void base::TextBufferBase::add_mark (Gtk::TextMark mark, const Gtk::TextIter & where) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextMark* mark, const ::GtkTextIter* where);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_add_mark;
  auto where_to_c = gi::unwrap (where, gi::transfer_none, gi::direction_in);
  auto mark_to_c = gi::unwrap (mark, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextMark*) (mark_to_c), (const ::GtkTextIter*) (where_to_c));
}

// void gtk_text_buffer_add_selection_clipboard (GtkTextBuffer* buffer, GtkClipboard* clipboard);
// void gtk_text_buffer_add_selection_clipboard (::GtkTextBuffer* buffer, ::GtkClipboard* clipboard);
void base::TextBufferBase::add_selection_clipboard (Gtk::Clipboard clipboard) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkClipboard* clipboard);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_add_selection_clipboard;
  auto clipboard_to_c = gi::unwrap (clipboard, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkClipboard*) (clipboard_to_c));
}

// void gtk_text_buffer_apply_tag (GtkTextBuffer* buffer, GtkTextTag* tag, const GtkTextIter* start, const GtkTextIter* end);
// void gtk_text_buffer_apply_tag (::GtkTextBuffer* buffer, ::GtkTextTag* tag, const ::GtkTextIter* start, const ::GtkTextIter* end);
void base::TextBufferBase::apply_tag (Gtk::TextTag tag, const Gtk::TextIter & start, const Gtk::TextIter & end) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextTag* tag, const ::GtkTextIter* start, const ::GtkTextIter* end);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_apply_tag;
  auto end_to_c = gi::unwrap (end, gi::transfer_none, gi::direction_in);
  auto start_to_c = gi::unwrap (start, gi::transfer_none, gi::direction_in);
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextTag*) (tag_to_c), (const ::GtkTextIter*) (start_to_c), (const ::GtkTextIter*) (end_to_c));
}

// void gtk_text_buffer_apply_tag_by_name (GtkTextBuffer* buffer, const gchar* name, const GtkTextIter* start, const GtkTextIter* end);
// void gtk_text_buffer_apply_tag_by_name (::GtkTextBuffer* buffer, const char* name, const ::GtkTextIter* start, const ::GtkTextIter* end);
void base::TextBufferBase::apply_tag_by_name (const std::string & name, const Gtk::TextIter & start, const Gtk::TextIter & end) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, const char* name, const ::GtkTextIter* start, const ::GtkTextIter* end);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_apply_tag_by_name;
  auto end_to_c = gi::unwrap (end, gi::transfer_none, gi::direction_in);
  auto start_to_c = gi::unwrap (start, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (const char*) (name_to_c), (const ::GtkTextIter*) (start_to_c), (const ::GtkTextIter*) (end_to_c));
}

// gboolean gtk_text_buffer_backspace (GtkTextBuffer* buffer, GtkTextIter* iter, gboolean interactive, gboolean default_editable);
// gboolean gtk_text_buffer_backspace (::GtkTextBuffer* buffer, ::GtkTextIter* iter, gboolean interactive, gboolean default_editable);
bool base::TextBufferBase::backspace (Gtk::TextIter iter, gboolean interactive, gboolean default_editable) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter, gboolean interactive, gboolean default_editable);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_backspace;
  auto default_editable_to_c = default_editable;
  auto interactive_to_c = interactive;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) (iter_to_c), (gboolean) (interactive_to_c), (gboolean) (default_editable_to_c));
  return _temp_ret;
}

// void gtk_text_buffer_begin_user_action (GtkTextBuffer* buffer);
// void gtk_text_buffer_begin_user_action (::GtkTextBuffer* buffer);
void base::TextBufferBase::begin_user_action () noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_begin_user_action;
  call_wrap_v ((::GtkTextBuffer*) (gobj_()));
}

// void gtk_text_buffer_copy_clipboard (GtkTextBuffer* buffer, GtkClipboard* clipboard);
// void gtk_text_buffer_copy_clipboard (::GtkTextBuffer* buffer, ::GtkClipboard* clipboard);
void base::TextBufferBase::copy_clipboard (Gtk::Clipboard clipboard) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkClipboard* clipboard);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_copy_clipboard;
  auto clipboard_to_c = gi::unwrap (clipboard, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkClipboard*) (clipboard_to_c));
}

// GtkTextChildAnchor* gtk_text_buffer_create_child_anchor (GtkTextBuffer* buffer, GtkTextIter* iter);
// ::GtkTextChildAnchor* gtk_text_buffer_create_child_anchor (::GtkTextBuffer* buffer, ::GtkTextIter* iter);
Gtk::TextChildAnchor base::TextBufferBase::create_child_anchor (Gtk::TextIter iter) noexcept
{
  typedef ::GtkTextChildAnchor* (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_create_child_anchor;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) (iter_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkTextMark* gtk_text_buffer_create_mark (GtkTextBuffer* buffer, const gchar* mark_name, const GtkTextIter* where, gboolean left_gravity);
// ::GtkTextMark* gtk_text_buffer_create_mark (::GtkTextBuffer* buffer, const char* mark_name, const ::GtkTextIter* where, gboolean left_gravity);
Gtk::TextMark base::TextBufferBase::create_mark (const std::string & mark_name, const Gtk::TextIter & where, gboolean left_gravity) noexcept
{
  typedef ::GtkTextMark* (*call_wrap_t) (::GtkTextBuffer* buffer, const char* mark_name, const ::GtkTextIter* where, gboolean left_gravity);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_create_mark;
  auto left_gravity_to_c = left_gravity;
  auto where_to_c = gi::unwrap (where, gi::transfer_none, gi::direction_in);
  auto mark_name_to_c = gi::unwrap (mark_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()), (const char*) (mark_name_to_c), (const ::GtkTextIter*) (where_to_c), (gboolean) (left_gravity_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gtk::TextMark base::TextBufferBase::create_mark (const Gtk::TextIter & where, gboolean left_gravity) noexcept
{
  typedef ::GtkTextMark* (*call_wrap_t) (::GtkTextBuffer* buffer, const char* mark_name, const ::GtkTextIter* where, gboolean left_gravity);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_create_mark;
  auto left_gravity_to_c = left_gravity;
  auto where_to_c = gi::unwrap (where, gi::transfer_none, gi::direction_in);
  auto mark_name_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()), (const char*) (mark_name_to_c), (const ::GtkTextIter*) (where_to_c), (gboolean) (left_gravity_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkTextTag* gtk_text_buffer_create_tag (GtkTextBuffer* buffer, const gchar* tag_name, const gchar* first_property_name);
// ::GtkTextTag* gtk_text_buffer_create_tag (::GtkTextBuffer* buffer, const char* tag_name, const char* first_property_name);
// IGNORE; not introspectable, varargs not supported

// void gtk_text_buffer_cut_clipboard (GtkTextBuffer* buffer, GtkClipboard* clipboard, gboolean default_editable);
// void gtk_text_buffer_cut_clipboard (::GtkTextBuffer* buffer, ::GtkClipboard* clipboard, gboolean default_editable);
void base::TextBufferBase::cut_clipboard (Gtk::Clipboard clipboard, gboolean default_editable) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkClipboard* clipboard, gboolean default_editable);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_cut_clipboard;
  auto default_editable_to_c = default_editable;
  auto clipboard_to_c = gi::unwrap (clipboard, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkClipboard*) (clipboard_to_c), (gboolean) (default_editable_to_c));
}

// void gtk_text_buffer_delete (GtkTextBuffer* buffer, GtkTextIter* start, GtkTextIter* end);
// void gtk_text_buffer_delete (::GtkTextBuffer* buffer, ::GtkTextIter* start, ::GtkTextIter* end);
void base::TextBufferBase::delete_ (Gtk::TextIter start, Gtk::TextIter end) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* start, ::GtkTextIter* end);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_delete;
  auto end_to_c = gi::unwrap (end, gi::transfer_none, gi::direction_in);
  auto start_to_c = gi::unwrap (start, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) (start_to_c), (::GtkTextIter*) (end_to_c));
}

// gboolean gtk_text_buffer_delete_interactive (GtkTextBuffer* buffer, GtkTextIter* start_iter, GtkTextIter* end_iter, gboolean default_editable);
// gboolean gtk_text_buffer_delete_interactive (::GtkTextBuffer* buffer, ::GtkTextIter* start_iter, ::GtkTextIter* end_iter, gboolean default_editable);
bool base::TextBufferBase::delete_interactive (Gtk::TextIter start_iter, Gtk::TextIter end_iter, gboolean default_editable) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* start_iter, ::GtkTextIter* end_iter, gboolean default_editable);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_delete_interactive;
  auto default_editable_to_c = default_editable;
  auto end_iter_to_c = gi::unwrap (end_iter, gi::transfer_none, gi::direction_in);
  auto start_iter_to_c = gi::unwrap (start_iter, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) (start_iter_to_c), (::GtkTextIter*) (end_iter_to_c), (gboolean) (default_editable_to_c));
  return _temp_ret;
}

// void gtk_text_buffer_delete_mark (GtkTextBuffer* buffer, GtkTextMark* mark);
// void gtk_text_buffer_delete_mark (::GtkTextBuffer* buffer, ::GtkTextMark* mark);
void base::TextBufferBase::delete_mark (Gtk::TextMark mark) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextMark* mark);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_delete_mark;
  auto mark_to_c = gi::unwrap (mark, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextMark*) (mark_to_c));
}

// void gtk_text_buffer_delete_mark_by_name (GtkTextBuffer* buffer, const gchar* name);
// void gtk_text_buffer_delete_mark_by_name (::GtkTextBuffer* buffer, const char* name);
void base::TextBufferBase::delete_mark_by_name (const std::string & name) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_delete_mark_by_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (const char*) (name_to_c));
}

// gboolean gtk_text_buffer_delete_selection (GtkTextBuffer* buffer, gboolean interactive, gboolean default_editable);
// gboolean gtk_text_buffer_delete_selection (::GtkTextBuffer* buffer, gboolean interactive, gboolean default_editable);
bool base::TextBufferBase::delete_selection (gboolean interactive, gboolean default_editable) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextBuffer* buffer, gboolean interactive, gboolean default_editable);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_delete_selection;
  auto default_editable_to_c = default_editable;
  auto interactive_to_c = interactive;
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()), (gboolean) (interactive_to_c), (gboolean) (default_editable_to_c));
  return _temp_ret;
}

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
void base::TextBufferBase::end_user_action () noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_end_user_action;
  call_wrap_v ((::GtkTextBuffer*) (gobj_()));
}

// void gtk_text_buffer_get_bounds (GtkTextBuffer* buffer, GtkTextIter* start, GtkTextIter* end);
// void gtk_text_buffer_get_bounds (::GtkTextBuffer* buffer, ::GtkTextIter* start, ::GtkTextIter* end);
void base::TextBufferBase::get_bounds (Gtk::TextIter & start, Gtk::TextIter & end) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* start, ::GtkTextIter* end);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_get_bounds;
  traits::unset_wrapper<::GtkTextIter>::type end_c;
  traits::unset_wrapper<::GtkTextIter>::type start_c;
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) ((::GtkTextIter*) &start_c), (::GtkTextIter*) ((::GtkTextIter*) &end_c));
  end = gi::wrap ((::GtkTextIter*) &end_c, gi::transfer_none, gi::direction_out);
  start = gi::wrap ((::GtkTextIter*) &start_c, gi::transfer_none, gi::direction_out);
}
std::tuple<Gtk::TextIter, Gtk::TextIter> base::TextBufferBase::get_bounds () noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* start, ::GtkTextIter* end);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_get_bounds;
  traits::unset_wrapper<::GtkTextIter>::type end_c;
  traits::unset_wrapper<::GtkTextIter>::type start_c;
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) ((::GtkTextIter*) &start_c), (::GtkTextIter*) ((::GtkTextIter*) &end_c));
  return std::make_tuple (gi::wrap ((::GtkTextIter*) &start_c, gi::transfer_none, gi::direction_out), gi::wrap ((::GtkTextIter*) &end_c, gi::transfer_none, gi::direction_out));
}

// gint gtk_text_buffer_get_char_count (GtkTextBuffer* buffer);
// gint gtk_text_buffer_get_char_count (::GtkTextBuffer* buffer);
gint base::TextBufferBase::get_char_count () noexcept
{
  typedef gint (*call_wrap_t) (::GtkTextBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_get_char_count;
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()));
  return _temp_ret;
}

// GtkTargetList* gtk_text_buffer_get_copy_target_list (GtkTextBuffer* buffer);
// ::GtkTargetList* gtk_text_buffer_get_copy_target_list (::GtkTextBuffer* buffer);
Gtk::TargetList base::TextBufferBase::get_copy_target_list () noexcept
{
  typedef ::GtkTargetList* (*call_wrap_t) (::GtkTextBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_get_copy_target_list;
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

//  gtk_text_buffer_get_deserialize_formats (GtkTextBuffer* buffer, gint* n_formats);
//  gtk_text_buffer_get_deserialize_formats (::GtkTextBuffer* buffer, gint* n_formats);
// SKIP; container element not supported

// void gtk_text_buffer_get_end_iter (GtkTextBuffer* buffer, GtkTextIter* iter);
// void gtk_text_buffer_get_end_iter (::GtkTextBuffer* buffer, ::GtkTextIter* iter);
void base::TextBufferBase::get_end_iter (Gtk::TextIter & iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_get_end_iter;
  traits::unset_wrapper<::GtkTextIter>::type iter_c;
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) ((::GtkTextIter*) &iter_c));
  iter = gi::wrap ((::GtkTextIter*) &iter_c, gi::transfer_none, gi::direction_out);
}
Gtk::TextIter base::TextBufferBase::get_end_iter () noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_get_end_iter;
  traits::unset_wrapper<::GtkTextIter>::type iter_c;
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) ((::GtkTextIter*) &iter_c));
  return gi::wrap ((::GtkTextIter*) &iter_c, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_text_buffer_get_has_selection (GtkTextBuffer* buffer);
// gboolean gtk_text_buffer_get_has_selection (::GtkTextBuffer* buffer);
bool base::TextBufferBase::get_has_selection () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_get_has_selection;
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()));
  return _temp_ret;
}

// GtkTextMark* gtk_text_buffer_get_insert (GtkTextBuffer* buffer);
// ::GtkTextMark* gtk_text_buffer_get_insert (::GtkTextBuffer* buffer);
Gtk::TextMark base::TextBufferBase::get_insert () noexcept
{
  typedef ::GtkTextMark* (*call_wrap_t) (::GtkTextBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_get_insert;
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_text_buffer_get_iter_at_child_anchor (GtkTextBuffer* buffer, GtkTextIter* iter, GtkTextChildAnchor* anchor);
// void gtk_text_buffer_get_iter_at_child_anchor (::GtkTextBuffer* buffer, ::GtkTextIter* iter, ::GtkTextChildAnchor* anchor);
void base::TextBufferBase::get_iter_at_child_anchor (Gtk::TextIter & iter, Gtk::TextChildAnchor anchor) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter, ::GtkTextChildAnchor* anchor);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_get_iter_at_child_anchor;
  auto anchor_to_c = gi::unwrap (anchor, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<::GtkTextIter>::type iter_c;
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) ((::GtkTextIter*) &iter_c), (::GtkTextChildAnchor*) (anchor_to_c));
  iter = gi::wrap ((::GtkTextIter*) &iter_c, gi::transfer_none, gi::direction_out);
}
Gtk::TextIter base::TextBufferBase::get_iter_at_child_anchor (Gtk::TextChildAnchor anchor) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter, ::GtkTextChildAnchor* anchor);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_get_iter_at_child_anchor;
  auto anchor_to_c = gi::unwrap (anchor, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<::GtkTextIter>::type iter_c;
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) ((::GtkTextIter*) &iter_c), (::GtkTextChildAnchor*) (anchor_to_c));
  return gi::wrap ((::GtkTextIter*) &iter_c, gi::transfer_none, gi::direction_out);
}

// void gtk_text_buffer_get_iter_at_line (GtkTextBuffer* buffer, GtkTextIter* iter, gint line_number);
// void gtk_text_buffer_get_iter_at_line (::GtkTextBuffer* buffer, ::GtkTextIter* iter, gint line_number);
void base::TextBufferBase::get_iter_at_line (Gtk::TextIter & iter, gint line_number) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter, gint line_number);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_get_iter_at_line;
  auto line_number_to_c = line_number;
  traits::unset_wrapper<::GtkTextIter>::type iter_c;
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) ((::GtkTextIter*) &iter_c), (gint) (line_number_to_c));
  iter = gi::wrap ((::GtkTextIter*) &iter_c, gi::transfer_none, gi::direction_out);
}
Gtk::TextIter base::TextBufferBase::get_iter_at_line (gint line_number) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter, gint line_number);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_get_iter_at_line;
  auto line_number_to_c = line_number;
  traits::unset_wrapper<::GtkTextIter>::type iter_c;
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) ((::GtkTextIter*) &iter_c), (gint) (line_number_to_c));
  return gi::wrap ((::GtkTextIter*) &iter_c, gi::transfer_none, gi::direction_out);
}

// void gtk_text_buffer_get_iter_at_line_index (GtkTextBuffer* buffer, GtkTextIter* iter, gint line_number, gint byte_index);
// void gtk_text_buffer_get_iter_at_line_index (::GtkTextBuffer* buffer, ::GtkTextIter* iter, gint line_number, gint byte_index);
void base::TextBufferBase::get_iter_at_line_index (Gtk::TextIter & iter, gint line_number, gint byte_index) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter, gint line_number, gint byte_index);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_get_iter_at_line_index;
  auto byte_index_to_c = byte_index;
  auto line_number_to_c = line_number;
  traits::unset_wrapper<::GtkTextIter>::type iter_c;
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) ((::GtkTextIter*) &iter_c), (gint) (line_number_to_c), (gint) (byte_index_to_c));
  iter = gi::wrap ((::GtkTextIter*) &iter_c, gi::transfer_none, gi::direction_out);
}
Gtk::TextIter base::TextBufferBase::get_iter_at_line_index (gint line_number, gint byte_index) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter, gint line_number, gint byte_index);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_get_iter_at_line_index;
  auto byte_index_to_c = byte_index;
  auto line_number_to_c = line_number;
  traits::unset_wrapper<::GtkTextIter>::type iter_c;
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) ((::GtkTextIter*) &iter_c), (gint) (line_number_to_c), (gint) (byte_index_to_c));
  return gi::wrap ((::GtkTextIter*) &iter_c, gi::transfer_none, gi::direction_out);
}

// void gtk_text_buffer_get_iter_at_line_offset (GtkTextBuffer* buffer, GtkTextIter* iter, gint line_number, gint char_offset);
// void gtk_text_buffer_get_iter_at_line_offset (::GtkTextBuffer* buffer, ::GtkTextIter* iter, gint line_number, gint char_offset);
void base::TextBufferBase::get_iter_at_line_offset (Gtk::TextIter & iter, gint line_number, gint char_offset) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter, gint line_number, gint char_offset);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_get_iter_at_line_offset;
  auto char_offset_to_c = char_offset;
  auto line_number_to_c = line_number;
  traits::unset_wrapper<::GtkTextIter>::type iter_c;
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) ((::GtkTextIter*) &iter_c), (gint) (line_number_to_c), (gint) (char_offset_to_c));
  iter = gi::wrap ((::GtkTextIter*) &iter_c, gi::transfer_none, gi::direction_out);
}
Gtk::TextIter base::TextBufferBase::get_iter_at_line_offset (gint line_number, gint char_offset) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter, gint line_number, gint char_offset);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_get_iter_at_line_offset;
  auto char_offset_to_c = char_offset;
  auto line_number_to_c = line_number;
  traits::unset_wrapper<::GtkTextIter>::type iter_c;
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) ((::GtkTextIter*) &iter_c), (gint) (line_number_to_c), (gint) (char_offset_to_c));
  return gi::wrap ((::GtkTextIter*) &iter_c, gi::transfer_none, gi::direction_out);
}

// void gtk_text_buffer_get_iter_at_mark (GtkTextBuffer* buffer, GtkTextIter* iter, GtkTextMark* mark);
// void gtk_text_buffer_get_iter_at_mark (::GtkTextBuffer* buffer, ::GtkTextIter* iter, ::GtkTextMark* mark);
void base::TextBufferBase::get_iter_at_mark (Gtk::TextIter & iter, Gtk::TextMark mark) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter, ::GtkTextMark* mark);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_get_iter_at_mark;
  auto mark_to_c = gi::unwrap (mark, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<::GtkTextIter>::type iter_c;
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) ((::GtkTextIter*) &iter_c), (::GtkTextMark*) (mark_to_c));
  iter = gi::wrap ((::GtkTextIter*) &iter_c, gi::transfer_none, gi::direction_out);
}
Gtk::TextIter base::TextBufferBase::get_iter_at_mark (Gtk::TextMark mark) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter, ::GtkTextMark* mark);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_get_iter_at_mark;
  auto mark_to_c = gi::unwrap (mark, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<::GtkTextIter>::type iter_c;
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) ((::GtkTextIter*) &iter_c), (::GtkTextMark*) (mark_to_c));
  return gi::wrap ((::GtkTextIter*) &iter_c, gi::transfer_none, gi::direction_out);
}

// void gtk_text_buffer_get_iter_at_offset (GtkTextBuffer* buffer, GtkTextIter* iter, gint char_offset);
// void gtk_text_buffer_get_iter_at_offset (::GtkTextBuffer* buffer, ::GtkTextIter* iter, gint char_offset);
void base::TextBufferBase::get_iter_at_offset (Gtk::TextIter & iter, gint char_offset) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter, gint char_offset);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_get_iter_at_offset;
  auto char_offset_to_c = char_offset;
  traits::unset_wrapper<::GtkTextIter>::type iter_c;
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) ((::GtkTextIter*) &iter_c), (gint) (char_offset_to_c));
  iter = gi::wrap ((::GtkTextIter*) &iter_c, gi::transfer_none, gi::direction_out);
}
Gtk::TextIter base::TextBufferBase::get_iter_at_offset (gint char_offset) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter, gint char_offset);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_get_iter_at_offset;
  auto char_offset_to_c = char_offset;
  traits::unset_wrapper<::GtkTextIter>::type iter_c;
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) ((::GtkTextIter*) &iter_c), (gint) (char_offset_to_c));
  return gi::wrap ((::GtkTextIter*) &iter_c, gi::transfer_none, gi::direction_out);
}

// gint gtk_text_buffer_get_line_count (GtkTextBuffer* buffer);
// gint gtk_text_buffer_get_line_count (::GtkTextBuffer* buffer);
gint base::TextBufferBase::get_line_count () noexcept
{
  typedef gint (*call_wrap_t) (::GtkTextBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_get_line_count;
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()));
  return _temp_ret;
}

// GtkTextMark* gtk_text_buffer_get_mark (GtkTextBuffer* buffer, const gchar* name);
// ::GtkTextMark* gtk_text_buffer_get_mark (::GtkTextBuffer* buffer, const char* name);
Gtk::TextMark base::TextBufferBase::get_mark (const std::string & name) noexcept
{
  typedef ::GtkTextMark* (*call_wrap_t) (::GtkTextBuffer* buffer, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_get_mark;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_text_buffer_get_modified (GtkTextBuffer* buffer);
// gboolean gtk_text_buffer_get_modified (::GtkTextBuffer* buffer);
bool base::TextBufferBase::get_modified () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_get_modified;
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()));
  return _temp_ret;
}

// GtkTargetList* gtk_text_buffer_get_paste_target_list (GtkTextBuffer* buffer);
// ::GtkTargetList* gtk_text_buffer_get_paste_target_list (::GtkTextBuffer* buffer);
Gtk::TargetList base::TextBufferBase::get_paste_target_list () noexcept
{
  typedef ::GtkTargetList* (*call_wrap_t) (::GtkTextBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_get_paste_target_list;
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkTextMark* gtk_text_buffer_get_selection_bound (GtkTextBuffer* buffer);
// ::GtkTextMark* gtk_text_buffer_get_selection_bound (::GtkTextBuffer* buffer);
Gtk::TextMark base::TextBufferBase::get_selection_bound () noexcept
{
  typedef ::GtkTextMark* (*call_wrap_t) (::GtkTextBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_get_selection_bound;
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_text_buffer_get_selection_bounds (GtkTextBuffer* buffer, GtkTextIter* start, GtkTextIter* end);
// gboolean gtk_text_buffer_get_selection_bounds (::GtkTextBuffer* buffer, ::GtkTextIter* start, ::GtkTextIter* end);
bool base::TextBufferBase::get_selection_bounds (Gtk::TextIter & start, Gtk::TextIter & end) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* start, ::GtkTextIter* end);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_get_selection_bounds;
  traits::unset_wrapper<::GtkTextIter>::type end_c;
  traits::unset_wrapper<::GtkTextIter>::type start_c;
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) ((::GtkTextIter*) &start_c), (::GtkTextIter*) ((::GtkTextIter*) &end_c));
  end = gi::wrap ((::GtkTextIter*) &end_c, gi::transfer_none, gi::direction_out);
  start = gi::wrap ((::GtkTextIter*) &start_c, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Gtk::TextIter, Gtk::TextIter> base::TextBufferBase::get_selection_bounds () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* start, ::GtkTextIter* end);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_get_selection_bounds;
  traits::unset_wrapper<::GtkTextIter>::type end_c;
  traits::unset_wrapper<::GtkTextIter>::type start_c;
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) ((::GtkTextIter*) &start_c), (::GtkTextIter*) ((::GtkTextIter*) &end_c));
  return std::make_tuple (_temp_ret, gi::wrap ((::GtkTextIter*) &start_c, gi::transfer_none, gi::direction_out), gi::wrap ((::GtkTextIter*) &end_c, gi::transfer_none, gi::direction_out));
}

//  gtk_text_buffer_get_serialize_formats (GtkTextBuffer* buffer, gint* n_formats);
//  gtk_text_buffer_get_serialize_formats (::GtkTextBuffer* buffer, gint* n_formats);
// SKIP; container element not supported

// gchar* gtk_text_buffer_get_slice (GtkTextBuffer* buffer, const GtkTextIter* start, const GtkTextIter* end, gboolean include_hidden_chars);
// char* gtk_text_buffer_get_slice (::GtkTextBuffer* buffer, const ::GtkTextIter* start, const ::GtkTextIter* end, gboolean include_hidden_chars);
std::string base::TextBufferBase::get_slice (const Gtk::TextIter & start, const Gtk::TextIter & end, gboolean include_hidden_chars) noexcept
{
  typedef char* (*call_wrap_t) (::GtkTextBuffer* buffer, const ::GtkTextIter* start, const ::GtkTextIter* end, gboolean include_hidden_chars);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_get_slice;
  auto include_hidden_chars_to_c = include_hidden_chars;
  auto end_to_c = gi::unwrap (end, gi::transfer_none, gi::direction_in);
  auto start_to_c = gi::unwrap (start, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()), (const ::GtkTextIter*) (start_to_c), (const ::GtkTextIter*) (end_to_c), (gboolean) (include_hidden_chars_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gtk_text_buffer_get_start_iter (GtkTextBuffer* buffer, GtkTextIter* iter);
// void gtk_text_buffer_get_start_iter (::GtkTextBuffer* buffer, ::GtkTextIter* iter);
void base::TextBufferBase::get_start_iter (Gtk::TextIter & iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_get_start_iter;
  traits::unset_wrapper<::GtkTextIter>::type iter_c;
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) ((::GtkTextIter*) &iter_c));
  iter = gi::wrap ((::GtkTextIter*) &iter_c, gi::transfer_none, gi::direction_out);
}
Gtk::TextIter base::TextBufferBase::get_start_iter () noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_get_start_iter;
  traits::unset_wrapper<::GtkTextIter>::type iter_c;
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) ((::GtkTextIter*) &iter_c));
  return gi::wrap ((::GtkTextIter*) &iter_c, gi::transfer_none, gi::direction_out);
}

// GtkTextTagTable* gtk_text_buffer_get_tag_table (GtkTextBuffer* buffer);
// ::GtkTextTagTable* gtk_text_buffer_get_tag_table (::GtkTextBuffer* buffer);
Gtk::TextTagTable base::TextBufferBase::get_tag_table () noexcept
{
  typedef ::GtkTextTagTable* (*call_wrap_t) (::GtkTextBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_get_tag_table;
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gchar* gtk_text_buffer_get_text (GtkTextBuffer* buffer, const GtkTextIter* start, const GtkTextIter* end, gboolean include_hidden_chars);
// char* gtk_text_buffer_get_text (::GtkTextBuffer* buffer, const ::GtkTextIter* start, const ::GtkTextIter* end, gboolean include_hidden_chars);
std::string base::TextBufferBase::get_text (const Gtk::TextIter & start, const Gtk::TextIter & end, gboolean include_hidden_chars) noexcept
{
  typedef char* (*call_wrap_t) (::GtkTextBuffer* buffer, const ::GtkTextIter* start, const ::GtkTextIter* end, gboolean include_hidden_chars);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_get_text;
  auto include_hidden_chars_to_c = include_hidden_chars;
  auto end_to_c = gi::unwrap (end, gi::transfer_none, gi::direction_in);
  auto start_to_c = gi::unwrap (start, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()), (const ::GtkTextIter*) (start_to_c), (const ::GtkTextIter*) (end_to_c), (gboolean) (include_hidden_chars_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gtk_text_buffer_insert (GtkTextBuffer* buffer, GtkTextIter* iter, const gchar* text, gint len);
// void gtk_text_buffer_insert (::GtkTextBuffer* buffer, ::GtkTextIter* iter, const char* text, gint len);
void base::TextBufferBase::insert (Gtk::TextIter iter, const std::string & text, gint len) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter, const char* text, gint len);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_insert;
  auto len_to_c = len;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) (iter_to_c), (const char*) (text_to_c), (gint) (len_to_c));
}

// void gtk_text_buffer_insert_at_cursor (GtkTextBuffer* buffer, const gchar* text, gint len);
// void gtk_text_buffer_insert_at_cursor (::GtkTextBuffer* buffer, const char* text, gint len);
void base::TextBufferBase::insert_at_cursor (const std::string & text, gint len) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, const char* text, gint len);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_insert_at_cursor;
  auto len_to_c = len;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (const char*) (text_to_c), (gint) (len_to_c));
}

// void gtk_text_buffer_insert_child_anchor (GtkTextBuffer* buffer, GtkTextIter* iter, GtkTextChildAnchor* anchor);
// void gtk_text_buffer_insert_child_anchor (::GtkTextBuffer* buffer, ::GtkTextIter* iter, ::GtkTextChildAnchor* anchor);
void base::TextBufferBase::insert_child_anchor (Gtk::TextIter iter, Gtk::TextChildAnchor anchor) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter, ::GtkTextChildAnchor* anchor);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_insert_child_anchor;
  auto anchor_to_c = gi::unwrap (anchor, gi::transfer_none, gi::direction_in);
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) (iter_to_c), (::GtkTextChildAnchor*) (anchor_to_c));
}

// gboolean gtk_text_buffer_insert_interactive (GtkTextBuffer* buffer, GtkTextIter* iter, const gchar* text, gint len, gboolean default_editable);
// gboolean gtk_text_buffer_insert_interactive (::GtkTextBuffer* buffer, ::GtkTextIter* iter, const char* text, gint len, gboolean default_editable);
bool base::TextBufferBase::insert_interactive (Gtk::TextIter iter, const std::string & text, gint len, gboolean default_editable) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter, const char* text, gint len, gboolean default_editable);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_insert_interactive;
  auto default_editable_to_c = default_editable;
  auto len_to_c = len;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) (iter_to_c), (const char*) (text_to_c), (gint) (len_to_c), (gboolean) (default_editable_to_c));
  return _temp_ret;
}

// gboolean gtk_text_buffer_insert_interactive_at_cursor (GtkTextBuffer* buffer, const gchar* text, gint len, gboolean default_editable);
// gboolean gtk_text_buffer_insert_interactive_at_cursor (::GtkTextBuffer* buffer, const char* text, gint len, gboolean default_editable);
bool base::TextBufferBase::insert_interactive_at_cursor (const std::string & text, gint len, gboolean default_editable) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextBuffer* buffer, const char* text, gint len, gboolean default_editable);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_insert_interactive_at_cursor;
  auto default_editable_to_c = default_editable;
  auto len_to_c = len;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()), (const char*) (text_to_c), (gint) (len_to_c), (gboolean) (default_editable_to_c));
  return _temp_ret;
}

// void gtk_text_buffer_insert_markup (GtkTextBuffer* buffer, GtkTextIter* iter, const gchar* markup, gint len);
// void gtk_text_buffer_insert_markup (::GtkTextBuffer* buffer, ::GtkTextIter* iter, const char* markup, gint len);
void base::TextBufferBase::insert_markup (Gtk::TextIter iter, const std::string & markup, gint len) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter, const char* markup, gint len);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_insert_markup;
  auto len_to_c = len;
  auto markup_to_c = gi::unwrap (markup, gi::transfer_none, gi::direction_in);
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) (iter_to_c), (const char*) (markup_to_c), (gint) (len_to_c));
}

// void gtk_text_buffer_insert_pixbuf (GtkTextBuffer* buffer, GtkTextIter* iter, GdkPixbuf* pixbuf);
// void gtk_text_buffer_insert_pixbuf (::GtkTextBuffer* buffer, ::GtkTextIter* iter, ::GdkPixbuf* pixbuf);
void base::TextBufferBase::insert_pixbuf (Gtk::TextIter iter, GdkPixbuf::Pixbuf pixbuf) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter, ::GdkPixbuf* pixbuf);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_insert_pixbuf;
  auto pixbuf_to_c = gi::unwrap (pixbuf, gi::transfer_none, gi::direction_in);
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) (iter_to_c), (::GdkPixbuf*) (pixbuf_to_c));
}

// void gtk_text_buffer_insert_range (GtkTextBuffer* buffer, GtkTextIter* iter, const GtkTextIter* start, const GtkTextIter* end);
// void gtk_text_buffer_insert_range (::GtkTextBuffer* buffer, ::GtkTextIter* iter, const ::GtkTextIter* start, const ::GtkTextIter* end);
void base::TextBufferBase::insert_range (Gtk::TextIter iter, const Gtk::TextIter & start, const Gtk::TextIter & end) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter, const ::GtkTextIter* start, const ::GtkTextIter* end);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_insert_range;
  auto end_to_c = gi::unwrap (end, gi::transfer_none, gi::direction_in);
  auto start_to_c = gi::unwrap (start, gi::transfer_none, gi::direction_in);
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) (iter_to_c), (const ::GtkTextIter*) (start_to_c), (const ::GtkTextIter*) (end_to_c));
}

// gboolean gtk_text_buffer_insert_range_interactive (GtkTextBuffer* buffer, GtkTextIter* iter, const GtkTextIter* start, const GtkTextIter* end, gboolean default_editable);
// gboolean gtk_text_buffer_insert_range_interactive (::GtkTextBuffer* buffer, ::GtkTextIter* iter, const ::GtkTextIter* start, const ::GtkTextIter* end, gboolean default_editable);
bool base::TextBufferBase::insert_range_interactive (Gtk::TextIter iter, const Gtk::TextIter & start, const Gtk::TextIter & end, gboolean default_editable) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter, const ::GtkTextIter* start, const ::GtkTextIter* end, gboolean default_editable);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_insert_range_interactive;
  auto default_editable_to_c = default_editable;
  auto end_to_c = gi::unwrap (end, gi::transfer_none, gi::direction_in);
  auto start_to_c = gi::unwrap (start, gi::transfer_none, gi::direction_in);
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) (iter_to_c), (const ::GtkTextIter*) (start_to_c), (const ::GtkTextIter*) (end_to_c), (gboolean) (default_editable_to_c));
  return _temp_ret;
}

// void gtk_text_buffer_insert_with_tags (GtkTextBuffer* buffer, GtkTextIter* iter, const gchar* text, gint len, GtkTextTag* first_tag);
// void gtk_text_buffer_insert_with_tags (::GtkTextBuffer* buffer, ::GtkTextIter* iter, const char* text, gint len, ::GtkTextTag* first_tag);
// IGNORE; not introspectable, varargs not supported

// void gtk_text_buffer_insert_with_tags_by_name (GtkTextBuffer* buffer, GtkTextIter* iter, const gchar* text, gint len, const gchar* first_tag_name);
// void gtk_text_buffer_insert_with_tags_by_name (::GtkTextBuffer* buffer, ::GtkTextIter* iter, const char* text, gint len, const char* first_tag_name);
// IGNORE; not introspectable, varargs not supported

// void gtk_text_buffer_move_mark (GtkTextBuffer* buffer, GtkTextMark* mark, const GtkTextIter* where);
// void gtk_text_buffer_move_mark (::GtkTextBuffer* buffer, ::GtkTextMark* mark, const ::GtkTextIter* where);
void base::TextBufferBase::move_mark (Gtk::TextMark mark, const Gtk::TextIter & where) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextMark* mark, const ::GtkTextIter* where);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_move_mark;
  auto where_to_c = gi::unwrap (where, gi::transfer_none, gi::direction_in);
  auto mark_to_c = gi::unwrap (mark, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextMark*) (mark_to_c), (const ::GtkTextIter*) (where_to_c));
}

// void gtk_text_buffer_move_mark_by_name (GtkTextBuffer* buffer, const gchar* name, const GtkTextIter* where);
// void gtk_text_buffer_move_mark_by_name (::GtkTextBuffer* buffer, const char* name, const ::GtkTextIter* where);
void base::TextBufferBase::move_mark_by_name (const std::string & name, const Gtk::TextIter & where) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, const char* name, const ::GtkTextIter* where);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_move_mark_by_name;
  auto where_to_c = gi::unwrap (where, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (const char*) (name_to_c), (const ::GtkTextIter*) (where_to_c));
}

// void gtk_text_buffer_paste_clipboard (GtkTextBuffer* buffer, GtkClipboard* clipboard, GtkTextIter* override_location, gboolean default_editable);
// void gtk_text_buffer_paste_clipboard (::GtkTextBuffer* buffer, ::GtkClipboard* clipboard, ::GtkTextIter* override_location, gboolean default_editable);
void base::TextBufferBase::paste_clipboard (Gtk::Clipboard clipboard, Gtk::TextIter override_location, gboolean default_editable) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkClipboard* clipboard, ::GtkTextIter* override_location, gboolean default_editable);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_paste_clipboard;
  auto default_editable_to_c = default_editable;
  auto override_location_to_c = gi::unwrap (override_location, gi::transfer_none, gi::direction_in);
  auto clipboard_to_c = gi::unwrap (clipboard, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkClipboard*) (clipboard_to_c), (::GtkTextIter*) (override_location_to_c), (gboolean) (default_editable_to_c));
}
void base::TextBufferBase::paste_clipboard (Gtk::Clipboard clipboard, gboolean default_editable) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkClipboard* clipboard, ::GtkTextIter* override_location, gboolean default_editable);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_paste_clipboard;
  auto default_editable_to_c = default_editable;
  auto override_location_to_c = nullptr;
  auto clipboard_to_c = gi::unwrap (clipboard, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkClipboard*) (clipboard_to_c), (::GtkTextIter*) (override_location_to_c), (gboolean) (default_editable_to_c));
}

// void gtk_text_buffer_place_cursor (GtkTextBuffer* buffer, const GtkTextIter* where);
// void gtk_text_buffer_place_cursor (::GtkTextBuffer* buffer, const ::GtkTextIter* where);
void base::TextBufferBase::place_cursor (const Gtk::TextIter & where) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, const ::GtkTextIter* where);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_place_cursor;
  auto where_to_c = gi::unwrap (where, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (const ::GtkTextIter*) (where_to_c));
}

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
void base::TextBufferBase::remove_all_tags (const Gtk::TextIter & start, const Gtk::TextIter & end) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, const ::GtkTextIter* start, const ::GtkTextIter* end);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_remove_all_tags;
  auto end_to_c = gi::unwrap (end, gi::transfer_none, gi::direction_in);
  auto start_to_c = gi::unwrap (start, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (const ::GtkTextIter*) (start_to_c), (const ::GtkTextIter*) (end_to_c));
}

// void gtk_text_buffer_remove_selection_clipboard (GtkTextBuffer* buffer, GtkClipboard* clipboard);
// void gtk_text_buffer_remove_selection_clipboard (::GtkTextBuffer* buffer, ::GtkClipboard* clipboard);
void base::TextBufferBase::remove_selection_clipboard (Gtk::Clipboard clipboard) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkClipboard* clipboard);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_remove_selection_clipboard;
  auto clipboard_to_c = gi::unwrap (clipboard, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkClipboard*) (clipboard_to_c));
}

// void gtk_text_buffer_remove_tag (GtkTextBuffer* buffer, GtkTextTag* tag, const GtkTextIter* start, const GtkTextIter* end);
// void gtk_text_buffer_remove_tag (::GtkTextBuffer* buffer, ::GtkTextTag* tag, const ::GtkTextIter* start, const ::GtkTextIter* end);
void base::TextBufferBase::remove_tag (Gtk::TextTag tag, const Gtk::TextIter & start, const Gtk::TextIter & end) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextTag* tag, const ::GtkTextIter* start, const ::GtkTextIter* end);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_remove_tag;
  auto end_to_c = gi::unwrap (end, gi::transfer_none, gi::direction_in);
  auto start_to_c = gi::unwrap (start, gi::transfer_none, gi::direction_in);
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextTag*) (tag_to_c), (const ::GtkTextIter*) (start_to_c), (const ::GtkTextIter*) (end_to_c));
}

// void gtk_text_buffer_remove_tag_by_name (GtkTextBuffer* buffer, const gchar* name, const GtkTextIter* start, const GtkTextIter* end);
// void gtk_text_buffer_remove_tag_by_name (::GtkTextBuffer* buffer, const char* name, const ::GtkTextIter* start, const ::GtkTextIter* end);
void base::TextBufferBase::remove_tag_by_name (const std::string & name, const Gtk::TextIter & start, const Gtk::TextIter & end) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, const char* name, const ::GtkTextIter* start, const ::GtkTextIter* end);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_remove_tag_by_name;
  auto end_to_c = gi::unwrap (end, gi::transfer_none, gi::direction_in);
  auto start_to_c = gi::unwrap (start, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (const char*) (name_to_c), (const ::GtkTextIter*) (start_to_c), (const ::GtkTextIter*) (end_to_c));
}

// void gtk_text_buffer_select_range (GtkTextBuffer* buffer, const GtkTextIter* ins, const GtkTextIter* bound);
// void gtk_text_buffer_select_range (::GtkTextBuffer* buffer, const ::GtkTextIter* ins, const ::GtkTextIter* bound);
void base::TextBufferBase::select_range (const Gtk::TextIter & ins, const Gtk::TextIter & bound) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, const ::GtkTextIter* ins, const ::GtkTextIter* bound);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_select_range;
  auto bound_to_c = gi::unwrap (bound, gi::transfer_none, gi::direction_in);
  auto ins_to_c = gi::unwrap (ins, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (const ::GtkTextIter*) (ins_to_c), (const ::GtkTextIter*) (bound_to_c));
}

// guint8* gtk_text_buffer_serialize (GtkTextBuffer* register_buffer, GtkTextBuffer* content_buffer, GdkAtom format, const GtkTextIter* start, const GtkTextIter* end, gsize* length);
// guint8* gtk_text_buffer_serialize (::GtkTextBuffer* register_buffer, ::GtkTextBuffer* content_buffer,  format, const ::GtkTextIter* start, const ::GtkTextIter* end, gsize* length);
// SKIP; format type  not supported

// void gtk_text_buffer_set_modified (GtkTextBuffer* buffer, gboolean setting);
// void gtk_text_buffer_set_modified (::GtkTextBuffer* buffer, gboolean setting);
void base::TextBufferBase::set_modified (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_set_modified;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_text_buffer_set_text (GtkTextBuffer* buffer, const gchar* text, gint len);
// void gtk_text_buffer_set_text (::GtkTextBuffer* buffer, const char* text, gint len);
void base::TextBufferBase::set_text (const std::string & text, gint len) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, const char* text, gint len);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_set_text;
  auto len_to_c = len;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (const char*) (text_to_c), (gint) (len_to_c));
}

// void gtk_text_buffer_unregister_deserialize_format (GtkTextBuffer* buffer, GdkAtom format);
// void gtk_text_buffer_unregister_deserialize_format (::GtkTextBuffer* buffer,  format);
// SKIP; format type  not supported

// void gtk_text_buffer_unregister_serialize_format (GtkTextBuffer* buffer, GdkAtom format);
// void gtk_text_buffer_unregister_serialize_format (::GtkTextBuffer* buffer,  format);
// SKIP; format type  not supported















} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/textbuffer_extra_def_impl.hpp>)
#include <gtk/textbuffer_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/textbuffer_extra_impl.hpp>)
#include <gtk/textbuffer_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void TextBufferClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkTextBufferClass *methods = (::GtkTextBufferClass *) class_struct;
  (void) methods;

  methods->apply_tag = (decltype (methods->apply_tag)) detail::method_wrapper<self, void (*) (Gtk::TextTag tag, const Gtk::TextIter & start, const Gtk::TextIter & end), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::apply_tag_>;
  methods->begin_user_action = (decltype (methods->begin_user_action)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::begin_user_action_>;
  methods->changed = (decltype (methods->changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::changed_>;
  methods->delete_range = (decltype (methods->delete_range)) detail::method_wrapper<self, void (*) (Gtk::TextIter start, Gtk::TextIter end), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::delete_range_>;
  methods->end_user_action = (decltype (methods->end_user_action)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::end_user_action_>;
  methods->insert_child_anchor = (decltype (methods->insert_child_anchor)) detail::method_wrapper<self, void (*) (Gtk::TextIter iter, Gtk::TextChildAnchor anchor), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::insert_child_anchor_>;
  methods->insert_pixbuf = (decltype (methods->insert_pixbuf)) detail::method_wrapper<self, void (*) (Gtk::TextIter iter, GdkPixbuf::Pixbuf pixbuf), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::insert_pixbuf_>;
  methods->insert_text = (decltype (methods->insert_text)) detail::method_wrapper<self, void (*) (Gtk::TextIter pos, const std::string & new_text, gint new_text_length), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::insert_text_>;
  methods->mark_deleted = (decltype (methods->mark_deleted)) detail::method_wrapper<self, void (*) (Gtk::TextMark mark), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::mark_deleted_>;
  methods->mark_set = (decltype (methods->mark_set)) detail::method_wrapper<self, void (*) (const Gtk::TextIter & location, Gtk::TextMark mark), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::mark_set_>;
  methods->modified_changed = (decltype (methods->modified_changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::modified_changed_>;
  methods->paste_done = (decltype (methods->paste_done)) detail::method_wrapper<self, void (*) (Gtk::Clipboard clipboard), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::paste_done_>;
  methods->remove_tag = (decltype (methods->remove_tag)) detail::method_wrapper<self, void (*) (Gtk::TextTag tag, const Gtk::TextIter & start, const Gtk::TextIter & end), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::remove_tag_>;
}

// void TextBuffer::apply_tag (GtkTextBuffer* buffer, GtkTextTag* tag, const GtkTextIter* start, const GtkTextIter* end);
// void TextBuffer::apply_tag (::GtkTextBuffer* buffer, ::GtkTextTag* tag, const ::GtkTextIter* start, const ::GtkTextIter* end);
void TextBufferClass::apply_tag_ (Gtk::TextTag tag, const Gtk::TextIter & start, const Gtk::TextIter & end) noexcept
{
  if (!get_struct_()->apply_tag) return ;
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextTag* tag, const ::GtkTextIter* start, const ::GtkTextIter* end);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->apply_tag;
  auto end_to_c = gi::unwrap (end, gi::transfer_none, gi::direction_in);
  auto start_to_c = gi::unwrap (start, gi::transfer_none, gi::direction_in);
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextTag*) (tag_to_c), (const ::GtkTextIter*) (start_to_c), (const ::GtkTextIter*) (end_to_c));
}

// void TextBuffer::begin_user_action (GtkTextBuffer* buffer);
// void TextBuffer::begin_user_action (::GtkTextBuffer* buffer);
void TextBufferClass::begin_user_action_ () noexcept
{
  if (!get_struct_()->begin_user_action) return ;
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->begin_user_action;
  call_wrap_v ((::GtkTextBuffer*) (gobj_()));
}

// void TextBuffer::changed (GtkTextBuffer* buffer);
// void TextBuffer::changed (::GtkTextBuffer* buffer);
void TextBufferClass::changed_ () noexcept
{
  if (!get_struct_()->changed) return ;
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->changed;
  call_wrap_v ((::GtkTextBuffer*) (gobj_()));
}

// void TextBuffer::delete_range (GtkTextBuffer* buffer, GtkTextIter* start, GtkTextIter* end);
// void TextBuffer::delete_range (::GtkTextBuffer* buffer, ::GtkTextIter* start, ::GtkTextIter* end);
void TextBufferClass::delete_range_ (Gtk::TextIter start, Gtk::TextIter end) noexcept
{
  if (!get_struct_()->delete_range) return ;
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* start, ::GtkTextIter* end);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->delete_range;
  auto end_to_c = gi::unwrap (end, gi::transfer_none, gi::direction_in);
  auto start_to_c = gi::unwrap (start, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) (start_to_c), (::GtkTextIter*) (end_to_c));
}

// void TextBuffer::end_user_action (GtkTextBuffer* buffer);
// void TextBuffer::end_user_action (::GtkTextBuffer* buffer);
void TextBufferClass::end_user_action_ () noexcept
{
  if (!get_struct_()->end_user_action) return ;
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->end_user_action;
  call_wrap_v ((::GtkTextBuffer*) (gobj_()));
}

// void TextBuffer::insert_child_anchor (GtkTextBuffer* buffer, GtkTextIter* iter, GtkTextChildAnchor* anchor);
// void TextBuffer::insert_child_anchor (::GtkTextBuffer* buffer, ::GtkTextIter* iter, ::GtkTextChildAnchor* anchor);
void TextBufferClass::insert_child_anchor_ (Gtk::TextIter iter, Gtk::TextChildAnchor anchor) noexcept
{
  if (!get_struct_()->insert_child_anchor) return ;
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter, ::GtkTextChildAnchor* anchor);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->insert_child_anchor;
  auto anchor_to_c = gi::unwrap (anchor, gi::transfer_none, gi::direction_in);
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) (iter_to_c), (::GtkTextChildAnchor*) (anchor_to_c));
}

// void TextBuffer::insert_pixbuf (GtkTextBuffer* buffer, GtkTextIter* iter, GdkPixbuf* pixbuf);
// void TextBuffer::insert_pixbuf (::GtkTextBuffer* buffer, ::GtkTextIter* iter, ::GdkPixbuf* pixbuf);
void TextBufferClass::insert_pixbuf_ (Gtk::TextIter iter, GdkPixbuf::Pixbuf pixbuf) noexcept
{
  if (!get_struct_()->insert_pixbuf) return ;
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter, ::GdkPixbuf* pixbuf);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->insert_pixbuf;
  auto pixbuf_to_c = gi::unwrap (pixbuf, gi::transfer_none, gi::direction_in);
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) (iter_to_c), (::GdkPixbuf*) (pixbuf_to_c));
}

// void TextBuffer::insert_text (GtkTextBuffer* buffer, GtkTextIter* pos, const gchar* new_text, gint new_text_length);
// void TextBuffer::insert_text (::GtkTextBuffer* buffer, ::GtkTextIter* pos, const char* new_text, gint new_text_length);
void TextBufferClass::insert_text_ (Gtk::TextIter pos, const std::string & new_text, gint new_text_length) noexcept
{
  if (!get_struct_()->insert_text) return ;
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* pos, const char* new_text, gint new_text_length);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->insert_text;
  auto new_text_length_to_c = new_text_length;
  auto new_text_to_c = gi::unwrap (new_text, gi::transfer_none, gi::direction_in);
  auto pos_to_c = gi::unwrap (pos, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) (pos_to_c), (const char*) (new_text_to_c), (gint) (new_text_length_to_c));
}

// void TextBuffer::mark_deleted (GtkTextBuffer* buffer, GtkTextMark* mark);
// void TextBuffer::mark_deleted (::GtkTextBuffer* buffer, ::GtkTextMark* mark);
void TextBufferClass::mark_deleted_ (Gtk::TextMark mark) noexcept
{
  if (!get_struct_()->mark_deleted) return ;
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextMark* mark);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->mark_deleted;
  auto mark_to_c = gi::unwrap (mark, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextMark*) (mark_to_c));
}

// void TextBuffer::mark_set (GtkTextBuffer* buffer, const GtkTextIter* location, GtkTextMark* mark);
// void TextBuffer::mark_set (::GtkTextBuffer* buffer, const ::GtkTextIter* location, ::GtkTextMark* mark);
void TextBufferClass::mark_set_ (const Gtk::TextIter & location, Gtk::TextMark mark) noexcept
{
  if (!get_struct_()->mark_set) return ;
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, const ::GtkTextIter* location, ::GtkTextMark* mark);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->mark_set;
  auto mark_to_c = gi::unwrap (mark, gi::transfer_none, gi::direction_in);
  auto location_to_c = gi::unwrap (location, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (const ::GtkTextIter*) (location_to_c), (::GtkTextMark*) (mark_to_c));
}

// void TextBuffer::modified_changed (GtkTextBuffer* buffer);
// void TextBuffer::modified_changed (::GtkTextBuffer* buffer);
void TextBufferClass::modified_changed_ () noexcept
{
  if (!get_struct_()->modified_changed) return ;
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->modified_changed;
  call_wrap_v ((::GtkTextBuffer*) (gobj_()));
}

// void TextBuffer::paste_done (GtkTextBuffer* buffer, GtkClipboard* clipboard);
// void TextBuffer::paste_done (::GtkTextBuffer* buffer, ::GtkClipboard* clipboard);
void TextBufferClass::paste_done_ (Gtk::Clipboard clipboard) noexcept
{
  if (!get_struct_()->paste_done) return ;
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkClipboard* clipboard);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->paste_done;
  auto clipboard_to_c = gi::unwrap (clipboard, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkClipboard*) (clipboard_to_c));
}

// void TextBuffer::remove_tag (GtkTextBuffer* buffer, GtkTextTag* tag, const GtkTextIter* start, const GtkTextIter* end);
// void TextBuffer::remove_tag (::GtkTextBuffer* buffer, ::GtkTextTag* tag, const ::GtkTextIter* start, const ::GtkTextIter* end);
void TextBufferClass::remove_tag_ (Gtk::TextTag tag, const Gtk::TextIter & start, const Gtk::TextIter & end) noexcept
{
  if (!get_struct_()->remove_tag) return ;
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextTag* tag, const ::GtkTextIter* start, const ::GtkTextIter* end);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->remove_tag;
  auto end_to_c = gi::unwrap (end, gi::transfer_none, gi::direction_in);
  auto start_to_c = gi::unwrap (start, gi::transfer_none, gi::direction_in);
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextTag*) (tag_to_c), (const ::GtkTextIter*) (start_to_c), (const ::GtkTextIter*) (end_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
