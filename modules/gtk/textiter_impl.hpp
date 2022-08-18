// AUTO-GENERATED

#ifndef _GI_GTK_TEXTITER_IMPL_HPP_
#define _GI_GTK_TEXTITER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// void gtk_text_iter_assign (GtkTextIter* iter, const GtkTextIter* other);
// void gtk_text_iter_assign (::GtkTextIter* iter, const ::GtkTextIter* other);
void base::TextIterBase::assign (const Gtk::TextIter & other) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextIter* iter, const ::GtkTextIter* other);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_assign;
  auto other_to_c = gi::unwrap (other, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTextIter*) (gobj_()), (const ::GtkTextIter*) (other_to_c));
}

// gboolean gtk_text_iter_backward_char (GtkTextIter* iter);
// gboolean gtk_text_iter_backward_char (::GtkTextIter* iter);
bool base::TextIterBase::backward_char () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_backward_char;
  auto _temp_ret = call_wrap_v ((::GtkTextIter*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_text_iter_backward_chars (GtkTextIter* iter, gint count);
// gboolean gtk_text_iter_backward_chars (::GtkTextIter* iter, gint count);
bool base::TextIterBase::backward_chars (gint count) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextIter* iter, gint count);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_backward_chars;
  auto count_to_c = count;
  auto _temp_ret = call_wrap_v ((::GtkTextIter*) (gobj_()), (gint) (count_to_c));
  return _temp_ret;
}

// gboolean gtk_text_iter_backward_cursor_position (GtkTextIter* iter);
// gboolean gtk_text_iter_backward_cursor_position (::GtkTextIter* iter);
bool base::TextIterBase::backward_cursor_position () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_backward_cursor_position;
  auto _temp_ret = call_wrap_v ((::GtkTextIter*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_text_iter_backward_cursor_positions (GtkTextIter* iter, gint count);
// gboolean gtk_text_iter_backward_cursor_positions (::GtkTextIter* iter, gint count);
bool base::TextIterBase::backward_cursor_positions (gint count) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextIter* iter, gint count);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_backward_cursor_positions;
  auto count_to_c = count;
  auto _temp_ret = call_wrap_v ((::GtkTextIter*) (gobj_()), (gint) (count_to_c));
  return _temp_ret;
}

// gboolean gtk_text_iter_backward_find_char (GtkTextIter* iter, GtkTextCharPredicate pred, gpointer user_data, const GtkTextIter* limit);
// gboolean gtk_text_iter_backward_find_char (::GtkTextIter* iter, Gtk::TextCharPredicate::cfunction_type pred, void* user_data, const ::GtkTextIter* limit);
bool base::TextIterBase::backward_find_char (Gtk::TextCharPredicate pred, const Gtk::TextIter & limit) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextIter* iter, Gtk::TextCharPredicate::cfunction_type pred, void* user_data, const ::GtkTextIter* limit);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_backward_find_char;
  auto limit_to_c = gi::unwrap (limit, gi::transfer_none, gi::direction_in);
  auto pred_wrap_ = pred ? unwrap (std::move (pred), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(pred_wrap_)>::type> pred_wrap__sp (pred_wrap_);
  auto _temp_ret = call_wrap_v ((::GtkTextIter*) (gobj_()), (Gtk::TextCharPredicate::cfunction_type) (pred_wrap_ ? &pred_wrap_->wrapper : nullptr), (void*) (pred_wrap_), (const ::GtkTextIter*) (limit_to_c));
  return _temp_ret;
}
bool base::TextIterBase::backward_find_char (Gtk::TextCharPredicate pred) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextIter* iter, Gtk::TextCharPredicate::cfunction_type pred, void* user_data, const ::GtkTextIter* limit);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_backward_find_char;
  auto limit_to_c = nullptr;
  auto pred_wrap_ = pred ? unwrap (std::move (pred), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(pred_wrap_)>::type> pred_wrap__sp (pred_wrap_);
  auto _temp_ret = call_wrap_v ((::GtkTextIter*) (gobj_()), (Gtk::TextCharPredicate::cfunction_type) (pred_wrap_ ? &pred_wrap_->wrapper : nullptr), (void*) (pred_wrap_), (const ::GtkTextIter*) (limit_to_c));
  return _temp_ret;
}

// gboolean gtk_text_iter_backward_line (GtkTextIter* iter);
// gboolean gtk_text_iter_backward_line (::GtkTextIter* iter);
bool base::TextIterBase::backward_line () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_backward_line;
  auto _temp_ret = call_wrap_v ((::GtkTextIter*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_text_iter_backward_lines (GtkTextIter* iter, gint count);
// gboolean gtk_text_iter_backward_lines (::GtkTextIter* iter, gint count);
bool base::TextIterBase::backward_lines (gint count) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextIter* iter, gint count);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_backward_lines;
  auto count_to_c = count;
  auto _temp_ret = call_wrap_v ((::GtkTextIter*) (gobj_()), (gint) (count_to_c));
  return _temp_ret;
}

// gboolean gtk_text_iter_backward_search (const GtkTextIter* iter, const gchar* str, GtkTextSearchFlags flags, GtkTextIter* match_start, GtkTextIter* match_end, const GtkTextIter* limit);
// gboolean gtk_text_iter_backward_search (const ::GtkTextIter* iter, const char* str, ::GtkTextSearchFlags flags, ::GtkTextIter* match_start, ::GtkTextIter* match_end, const ::GtkTextIter* limit);
bool base::TextIterBase::backward_search (const std::string & str, Gtk::TextSearchFlags flags, Gtk::TextIter * match_start, Gtk::TextIter * match_end, const Gtk::TextIter & limit) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GtkTextIter* iter, const char* str, ::GtkTextSearchFlags flags, ::GtkTextIter* match_start, ::GtkTextIter* match_end, const ::GtkTextIter* limit);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_backward_search;
  auto limit_to_c = gi::unwrap (limit, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<::GtkTextIter>::type match_end_c;
  traits::unset_wrapper<::GtkTextIter>::type match_start_c;
  auto flags_to_c = gi::unwrap (flags);
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()), (const char*) (str_to_c), (::GtkTextSearchFlags) (flags_to_c), (::GtkTextIter*) (match_start ? (::GtkTextIter*) &match_start_c : nullptr), (::GtkTextIter*) (match_end ? (::GtkTextIter*) &match_end_c : nullptr), (const ::GtkTextIter*) (limit_to_c));
  if (match_end) *match_end = gi::wrap ((::GtkTextIter*) &match_end_c, gi::transfer_none, gi::direction_out);
  if (match_start) *match_start = gi::wrap ((::GtkTextIter*) &match_start_c, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
bool base::TextIterBase::backward_search (const std::string & str, Gtk::TextSearchFlags flags, Gtk::TextIter * match_start, Gtk::TextIter * match_end) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GtkTextIter* iter, const char* str, ::GtkTextSearchFlags flags, ::GtkTextIter* match_start, ::GtkTextIter* match_end, const ::GtkTextIter* limit);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_backward_search;
  auto limit_to_c = nullptr;
  traits::unset_wrapper<::GtkTextIter>::type match_end_c;
  traits::unset_wrapper<::GtkTextIter>::type match_start_c;
  auto flags_to_c = gi::unwrap (flags);
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()), (const char*) (str_to_c), (::GtkTextSearchFlags) (flags_to_c), (::GtkTextIter*) (match_start ? (::GtkTextIter*) &match_start_c : nullptr), (::GtkTextIter*) (match_end ? (::GtkTextIter*) &match_end_c : nullptr), (const ::GtkTextIter*) (limit_to_c));
  if (match_end) *match_end = gi::wrap ((::GtkTextIter*) &match_end_c, gi::transfer_none, gi::direction_out);
  if (match_start) *match_start = gi::wrap ((::GtkTextIter*) &match_start_c, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Gtk::TextIter, Gtk::TextIter> base::TextIterBase::backward_search (const std::string & str, Gtk::TextSearchFlags flags, const Gtk::TextIter & limit) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GtkTextIter* iter, const char* str, ::GtkTextSearchFlags flags, ::GtkTextIter* match_start, ::GtkTextIter* match_end, const ::GtkTextIter* limit);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_backward_search;
  auto limit_to_c = gi::unwrap (limit, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<::GtkTextIter>::type match_end_c;
  traits::unset_wrapper<::GtkTextIter>::type match_start_c;
  auto flags_to_c = gi::unwrap (flags);
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()), (const char*) (str_to_c), (::GtkTextSearchFlags) (flags_to_c), (::GtkTextIter*) ((::GtkTextIter*) &match_start_c), (::GtkTextIter*) ((::GtkTextIter*) &match_end_c), (const ::GtkTextIter*) (limit_to_c));
  return std::make_tuple (_temp_ret, gi::wrap ((::GtkTextIter*) &match_start_c, gi::transfer_none, gi::direction_out), gi::wrap ((::GtkTextIter*) &match_end_c, gi::transfer_none, gi::direction_out));
}
std::tuple<bool, Gtk::TextIter, Gtk::TextIter> base::TextIterBase::backward_search (const std::string & str, Gtk::TextSearchFlags flags) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GtkTextIter* iter, const char* str, ::GtkTextSearchFlags flags, ::GtkTextIter* match_start, ::GtkTextIter* match_end, const ::GtkTextIter* limit);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_backward_search;
  auto limit_to_c = nullptr;
  traits::unset_wrapper<::GtkTextIter>::type match_end_c;
  traits::unset_wrapper<::GtkTextIter>::type match_start_c;
  auto flags_to_c = gi::unwrap (flags);
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()), (const char*) (str_to_c), (::GtkTextSearchFlags) (flags_to_c), (::GtkTextIter*) ((::GtkTextIter*) &match_start_c), (::GtkTextIter*) ((::GtkTextIter*) &match_end_c), (const ::GtkTextIter*) (limit_to_c));
  return std::make_tuple (_temp_ret, gi::wrap ((::GtkTextIter*) &match_start_c, gi::transfer_none, gi::direction_out), gi::wrap ((::GtkTextIter*) &match_end_c, gi::transfer_none, gi::direction_out));
}

// gboolean gtk_text_iter_backward_sentence_start (GtkTextIter* iter);
// gboolean gtk_text_iter_backward_sentence_start (::GtkTextIter* iter);
bool base::TextIterBase::backward_sentence_start () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_backward_sentence_start;
  auto _temp_ret = call_wrap_v ((::GtkTextIter*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_text_iter_backward_sentence_starts (GtkTextIter* iter, gint count);
// gboolean gtk_text_iter_backward_sentence_starts (::GtkTextIter* iter, gint count);
bool base::TextIterBase::backward_sentence_starts (gint count) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextIter* iter, gint count);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_backward_sentence_starts;
  auto count_to_c = count;
  auto _temp_ret = call_wrap_v ((::GtkTextIter*) (gobj_()), (gint) (count_to_c));
  return _temp_ret;
}

// gboolean gtk_text_iter_backward_to_tag_toggle (GtkTextIter* iter, GtkTextTag* tag);
// gboolean gtk_text_iter_backward_to_tag_toggle (::GtkTextIter* iter, ::GtkTextTag* tag);
bool base::TextIterBase::backward_to_tag_toggle (Gtk::TextTag tag) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextIter* iter, ::GtkTextTag* tag);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_backward_to_tag_toggle;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTextIter*) (gobj_()), (::GtkTextTag*) (tag_to_c));
  return _temp_ret;
}
bool base::TextIterBase::backward_to_tag_toggle () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextIter* iter, ::GtkTextTag* tag);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_backward_to_tag_toggle;
  auto tag_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkTextIter*) (gobj_()), (::GtkTextTag*) (tag_to_c));
  return _temp_ret;
}

// gboolean gtk_text_iter_backward_visible_cursor_position (GtkTextIter* iter);
// gboolean gtk_text_iter_backward_visible_cursor_position (::GtkTextIter* iter);
bool base::TextIterBase::backward_visible_cursor_position () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_backward_visible_cursor_position;
  auto _temp_ret = call_wrap_v ((::GtkTextIter*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_text_iter_backward_visible_cursor_positions (GtkTextIter* iter, gint count);
// gboolean gtk_text_iter_backward_visible_cursor_positions (::GtkTextIter* iter, gint count);
bool base::TextIterBase::backward_visible_cursor_positions (gint count) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextIter* iter, gint count);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_backward_visible_cursor_positions;
  auto count_to_c = count;
  auto _temp_ret = call_wrap_v ((::GtkTextIter*) (gobj_()), (gint) (count_to_c));
  return _temp_ret;
}

// gboolean gtk_text_iter_backward_visible_line (GtkTextIter* iter);
// gboolean gtk_text_iter_backward_visible_line (::GtkTextIter* iter);
bool base::TextIterBase::backward_visible_line () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_backward_visible_line;
  auto _temp_ret = call_wrap_v ((::GtkTextIter*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_text_iter_backward_visible_lines (GtkTextIter* iter, gint count);
// gboolean gtk_text_iter_backward_visible_lines (::GtkTextIter* iter, gint count);
bool base::TextIterBase::backward_visible_lines (gint count) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextIter* iter, gint count);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_backward_visible_lines;
  auto count_to_c = count;
  auto _temp_ret = call_wrap_v ((::GtkTextIter*) (gobj_()), (gint) (count_to_c));
  return _temp_ret;
}

// gboolean gtk_text_iter_backward_visible_word_start (GtkTextIter* iter);
// gboolean gtk_text_iter_backward_visible_word_start (::GtkTextIter* iter);
bool base::TextIterBase::backward_visible_word_start () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_backward_visible_word_start;
  auto _temp_ret = call_wrap_v ((::GtkTextIter*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_text_iter_backward_visible_word_starts (GtkTextIter* iter, gint count);
// gboolean gtk_text_iter_backward_visible_word_starts (::GtkTextIter* iter, gint count);
bool base::TextIterBase::backward_visible_word_starts (gint count) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextIter* iter, gint count);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_backward_visible_word_starts;
  auto count_to_c = count;
  auto _temp_ret = call_wrap_v ((::GtkTextIter*) (gobj_()), (gint) (count_to_c));
  return _temp_ret;
}

// gboolean gtk_text_iter_backward_word_start (GtkTextIter* iter);
// gboolean gtk_text_iter_backward_word_start (::GtkTextIter* iter);
bool base::TextIterBase::backward_word_start () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_backward_word_start;
  auto _temp_ret = call_wrap_v ((::GtkTextIter*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_text_iter_backward_word_starts (GtkTextIter* iter, gint count);
// gboolean gtk_text_iter_backward_word_starts (::GtkTextIter* iter, gint count);
bool base::TextIterBase::backward_word_starts (gint count) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextIter* iter, gint count);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_backward_word_starts;
  auto count_to_c = count;
  auto _temp_ret = call_wrap_v ((::GtkTextIter*) (gobj_()), (gint) (count_to_c));
  return _temp_ret;
}

// gboolean gtk_text_iter_begins_tag (const GtkTextIter* iter, GtkTextTag* tag);
// gboolean gtk_text_iter_begins_tag (const ::GtkTextIter* iter, ::GtkTextTag* tag);
// IGNORE; deprecated

// gboolean gtk_text_iter_can_insert (const GtkTextIter* iter, gboolean default_editability);
// gboolean gtk_text_iter_can_insert (const ::GtkTextIter* iter, gboolean default_editability);
bool base::TextIterBase::can_insert (gboolean default_editability) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GtkTextIter* iter, gboolean default_editability);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_can_insert;
  auto default_editability_to_c = default_editability;
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()), (gboolean) (default_editability_to_c));
  return _temp_ret;
}

// gint gtk_text_iter_compare (const GtkTextIter* lhs, const GtkTextIter* rhs);
// gint gtk_text_iter_compare (const ::GtkTextIter* lhs, const ::GtkTextIter* rhs);
gint base::TextIterBase::compare (const Gtk::TextIter & rhs) const noexcept
{
  typedef gint (*call_wrap_t) (const ::GtkTextIter* lhs, const ::GtkTextIter* rhs);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_compare;
  auto rhs_to_c = gi::unwrap (rhs, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()), (const ::GtkTextIter*) (rhs_to_c));
  return _temp_ret;
}

// GtkTextIter* gtk_text_iter_copy (const GtkTextIter* iter);
// ::GtkTextIter* gtk_text_iter_copy (const ::GtkTextIter* iter);
Gtk::TextIter base::TextIterBase::copy () const noexcept
{
  typedef ::GtkTextIter* (*call_wrap_t) (const ::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_copy;
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gtk_text_iter_editable (const GtkTextIter* iter, gboolean default_setting);
// gboolean gtk_text_iter_editable (const ::GtkTextIter* iter, gboolean default_setting);
bool base::TextIterBase::editable (gboolean default_setting) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GtkTextIter* iter, gboolean default_setting);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_editable;
  auto default_setting_to_c = default_setting;
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()), (gboolean) (default_setting_to_c));
  return _temp_ret;
}

// gboolean gtk_text_iter_ends_line (const GtkTextIter* iter);
// gboolean gtk_text_iter_ends_line (const ::GtkTextIter* iter);
bool base::TextIterBase::ends_line () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_ends_line;
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_text_iter_ends_sentence (const GtkTextIter* iter);
// gboolean gtk_text_iter_ends_sentence (const ::GtkTextIter* iter);
bool base::TextIterBase::ends_sentence () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_ends_sentence;
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_text_iter_ends_tag (const GtkTextIter* iter, GtkTextTag* tag);
// gboolean gtk_text_iter_ends_tag (const ::GtkTextIter* iter, ::GtkTextTag* tag);
bool base::TextIterBase::ends_tag (Gtk::TextTag tag) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GtkTextIter* iter, ::GtkTextTag* tag);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_ends_tag;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()), (::GtkTextTag*) (tag_to_c));
  return _temp_ret;
}
bool base::TextIterBase::ends_tag () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GtkTextIter* iter, ::GtkTextTag* tag);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_ends_tag;
  auto tag_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()), (::GtkTextTag*) (tag_to_c));
  return _temp_ret;
}

// gboolean gtk_text_iter_ends_word (const GtkTextIter* iter);
// gboolean gtk_text_iter_ends_word (const ::GtkTextIter* iter);
bool base::TextIterBase::ends_word () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_ends_word;
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_text_iter_equal (const GtkTextIter* lhs, const GtkTextIter* rhs);
// gboolean gtk_text_iter_equal (const ::GtkTextIter* lhs, const ::GtkTextIter* rhs);
bool base::TextIterBase::equal (const Gtk::TextIter & rhs) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GtkTextIter* lhs, const ::GtkTextIter* rhs);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_equal;
  auto rhs_to_c = gi::unwrap (rhs, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()), (const ::GtkTextIter*) (rhs_to_c));
  return _temp_ret;
}

// gboolean gtk_text_iter_forward_char (GtkTextIter* iter);
// gboolean gtk_text_iter_forward_char (::GtkTextIter* iter);
bool base::TextIterBase::forward_char () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_forward_char;
  auto _temp_ret = call_wrap_v ((::GtkTextIter*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_text_iter_forward_chars (GtkTextIter* iter, gint count);
// gboolean gtk_text_iter_forward_chars (::GtkTextIter* iter, gint count);
bool base::TextIterBase::forward_chars (gint count) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextIter* iter, gint count);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_forward_chars;
  auto count_to_c = count;
  auto _temp_ret = call_wrap_v ((::GtkTextIter*) (gobj_()), (gint) (count_to_c));
  return _temp_ret;
}

// gboolean gtk_text_iter_forward_cursor_position (GtkTextIter* iter);
// gboolean gtk_text_iter_forward_cursor_position (::GtkTextIter* iter);
bool base::TextIterBase::forward_cursor_position () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_forward_cursor_position;
  auto _temp_ret = call_wrap_v ((::GtkTextIter*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_text_iter_forward_cursor_positions (GtkTextIter* iter, gint count);
// gboolean gtk_text_iter_forward_cursor_positions (::GtkTextIter* iter, gint count);
bool base::TextIterBase::forward_cursor_positions (gint count) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextIter* iter, gint count);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_forward_cursor_positions;
  auto count_to_c = count;
  auto _temp_ret = call_wrap_v ((::GtkTextIter*) (gobj_()), (gint) (count_to_c));
  return _temp_ret;
}

// gboolean gtk_text_iter_forward_find_char (GtkTextIter* iter, GtkTextCharPredicate pred, gpointer user_data, const GtkTextIter* limit);
// gboolean gtk_text_iter_forward_find_char (::GtkTextIter* iter, Gtk::TextCharPredicate::cfunction_type pred, void* user_data, const ::GtkTextIter* limit);
bool base::TextIterBase::forward_find_char (Gtk::TextCharPredicate pred, const Gtk::TextIter & limit) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextIter* iter, Gtk::TextCharPredicate::cfunction_type pred, void* user_data, const ::GtkTextIter* limit);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_forward_find_char;
  auto limit_to_c = gi::unwrap (limit, gi::transfer_none, gi::direction_in);
  auto pred_wrap_ = pred ? unwrap (std::move (pred), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(pred_wrap_)>::type> pred_wrap__sp (pred_wrap_);
  auto _temp_ret = call_wrap_v ((::GtkTextIter*) (gobj_()), (Gtk::TextCharPredicate::cfunction_type) (pred_wrap_ ? &pred_wrap_->wrapper : nullptr), (void*) (pred_wrap_), (const ::GtkTextIter*) (limit_to_c));
  return _temp_ret;
}
bool base::TextIterBase::forward_find_char (Gtk::TextCharPredicate pred) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextIter* iter, Gtk::TextCharPredicate::cfunction_type pred, void* user_data, const ::GtkTextIter* limit);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_forward_find_char;
  auto limit_to_c = nullptr;
  auto pred_wrap_ = pred ? unwrap (std::move (pred), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(pred_wrap_)>::type> pred_wrap__sp (pred_wrap_);
  auto _temp_ret = call_wrap_v ((::GtkTextIter*) (gobj_()), (Gtk::TextCharPredicate::cfunction_type) (pred_wrap_ ? &pred_wrap_->wrapper : nullptr), (void*) (pred_wrap_), (const ::GtkTextIter*) (limit_to_c));
  return _temp_ret;
}

// gboolean gtk_text_iter_forward_line (GtkTextIter* iter);
// gboolean gtk_text_iter_forward_line (::GtkTextIter* iter);
bool base::TextIterBase::forward_line () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_forward_line;
  auto _temp_ret = call_wrap_v ((::GtkTextIter*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_text_iter_forward_lines (GtkTextIter* iter, gint count);
// gboolean gtk_text_iter_forward_lines (::GtkTextIter* iter, gint count);
bool base::TextIterBase::forward_lines (gint count) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextIter* iter, gint count);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_forward_lines;
  auto count_to_c = count;
  auto _temp_ret = call_wrap_v ((::GtkTextIter*) (gobj_()), (gint) (count_to_c));
  return _temp_ret;
}

// gboolean gtk_text_iter_forward_search (const GtkTextIter* iter, const gchar* str, GtkTextSearchFlags flags, GtkTextIter* match_start, GtkTextIter* match_end, const GtkTextIter* limit);
// gboolean gtk_text_iter_forward_search (const ::GtkTextIter* iter, const char* str, ::GtkTextSearchFlags flags, ::GtkTextIter* match_start, ::GtkTextIter* match_end, const ::GtkTextIter* limit);
bool base::TextIterBase::forward_search (const std::string & str, Gtk::TextSearchFlags flags, Gtk::TextIter * match_start, Gtk::TextIter * match_end, const Gtk::TextIter & limit) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GtkTextIter* iter, const char* str, ::GtkTextSearchFlags flags, ::GtkTextIter* match_start, ::GtkTextIter* match_end, const ::GtkTextIter* limit);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_forward_search;
  auto limit_to_c = gi::unwrap (limit, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<::GtkTextIter>::type match_end_c;
  traits::unset_wrapper<::GtkTextIter>::type match_start_c;
  auto flags_to_c = gi::unwrap (flags);
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()), (const char*) (str_to_c), (::GtkTextSearchFlags) (flags_to_c), (::GtkTextIter*) (match_start ? (::GtkTextIter*) &match_start_c : nullptr), (::GtkTextIter*) (match_end ? (::GtkTextIter*) &match_end_c : nullptr), (const ::GtkTextIter*) (limit_to_c));
  if (match_end) *match_end = gi::wrap ((::GtkTextIter*) &match_end_c, gi::transfer_none, gi::direction_out);
  if (match_start) *match_start = gi::wrap ((::GtkTextIter*) &match_start_c, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
bool base::TextIterBase::forward_search (const std::string & str, Gtk::TextSearchFlags flags, Gtk::TextIter * match_start, Gtk::TextIter * match_end) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GtkTextIter* iter, const char* str, ::GtkTextSearchFlags flags, ::GtkTextIter* match_start, ::GtkTextIter* match_end, const ::GtkTextIter* limit);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_forward_search;
  auto limit_to_c = nullptr;
  traits::unset_wrapper<::GtkTextIter>::type match_end_c;
  traits::unset_wrapper<::GtkTextIter>::type match_start_c;
  auto flags_to_c = gi::unwrap (flags);
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()), (const char*) (str_to_c), (::GtkTextSearchFlags) (flags_to_c), (::GtkTextIter*) (match_start ? (::GtkTextIter*) &match_start_c : nullptr), (::GtkTextIter*) (match_end ? (::GtkTextIter*) &match_end_c : nullptr), (const ::GtkTextIter*) (limit_to_c));
  if (match_end) *match_end = gi::wrap ((::GtkTextIter*) &match_end_c, gi::transfer_none, gi::direction_out);
  if (match_start) *match_start = gi::wrap ((::GtkTextIter*) &match_start_c, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Gtk::TextIter, Gtk::TextIter> base::TextIterBase::forward_search (const std::string & str, Gtk::TextSearchFlags flags, const Gtk::TextIter & limit) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GtkTextIter* iter, const char* str, ::GtkTextSearchFlags flags, ::GtkTextIter* match_start, ::GtkTextIter* match_end, const ::GtkTextIter* limit);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_forward_search;
  auto limit_to_c = gi::unwrap (limit, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<::GtkTextIter>::type match_end_c;
  traits::unset_wrapper<::GtkTextIter>::type match_start_c;
  auto flags_to_c = gi::unwrap (flags);
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()), (const char*) (str_to_c), (::GtkTextSearchFlags) (flags_to_c), (::GtkTextIter*) ((::GtkTextIter*) &match_start_c), (::GtkTextIter*) ((::GtkTextIter*) &match_end_c), (const ::GtkTextIter*) (limit_to_c));
  return std::make_tuple (_temp_ret, gi::wrap ((::GtkTextIter*) &match_start_c, gi::transfer_none, gi::direction_out), gi::wrap ((::GtkTextIter*) &match_end_c, gi::transfer_none, gi::direction_out));
}
std::tuple<bool, Gtk::TextIter, Gtk::TextIter> base::TextIterBase::forward_search (const std::string & str, Gtk::TextSearchFlags flags) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GtkTextIter* iter, const char* str, ::GtkTextSearchFlags flags, ::GtkTextIter* match_start, ::GtkTextIter* match_end, const ::GtkTextIter* limit);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_forward_search;
  auto limit_to_c = nullptr;
  traits::unset_wrapper<::GtkTextIter>::type match_end_c;
  traits::unset_wrapper<::GtkTextIter>::type match_start_c;
  auto flags_to_c = gi::unwrap (flags);
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()), (const char*) (str_to_c), (::GtkTextSearchFlags) (flags_to_c), (::GtkTextIter*) ((::GtkTextIter*) &match_start_c), (::GtkTextIter*) ((::GtkTextIter*) &match_end_c), (const ::GtkTextIter*) (limit_to_c));
  return std::make_tuple (_temp_ret, gi::wrap ((::GtkTextIter*) &match_start_c, gi::transfer_none, gi::direction_out), gi::wrap ((::GtkTextIter*) &match_end_c, gi::transfer_none, gi::direction_out));
}

// gboolean gtk_text_iter_forward_sentence_end (GtkTextIter* iter);
// gboolean gtk_text_iter_forward_sentence_end (::GtkTextIter* iter);
bool base::TextIterBase::forward_sentence_end () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_forward_sentence_end;
  auto _temp_ret = call_wrap_v ((::GtkTextIter*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_text_iter_forward_sentence_ends (GtkTextIter* iter, gint count);
// gboolean gtk_text_iter_forward_sentence_ends (::GtkTextIter* iter, gint count);
bool base::TextIterBase::forward_sentence_ends (gint count) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextIter* iter, gint count);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_forward_sentence_ends;
  auto count_to_c = count;
  auto _temp_ret = call_wrap_v ((::GtkTextIter*) (gobj_()), (gint) (count_to_c));
  return _temp_ret;
}

// void gtk_text_iter_forward_to_end (GtkTextIter* iter);
// void gtk_text_iter_forward_to_end (::GtkTextIter* iter);
void base::TextIterBase::forward_to_end () noexcept
{
  typedef void (*call_wrap_t) (::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_forward_to_end;
  call_wrap_v ((::GtkTextIter*) (gobj_()));
}

// gboolean gtk_text_iter_forward_to_line_end (GtkTextIter* iter);
// gboolean gtk_text_iter_forward_to_line_end (::GtkTextIter* iter);
bool base::TextIterBase::forward_to_line_end () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_forward_to_line_end;
  auto _temp_ret = call_wrap_v ((::GtkTextIter*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_text_iter_forward_to_tag_toggle (GtkTextIter* iter, GtkTextTag* tag);
// gboolean gtk_text_iter_forward_to_tag_toggle (::GtkTextIter* iter, ::GtkTextTag* tag);
bool base::TextIterBase::forward_to_tag_toggle (Gtk::TextTag tag) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextIter* iter, ::GtkTextTag* tag);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_forward_to_tag_toggle;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTextIter*) (gobj_()), (::GtkTextTag*) (tag_to_c));
  return _temp_ret;
}
bool base::TextIterBase::forward_to_tag_toggle () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextIter* iter, ::GtkTextTag* tag);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_forward_to_tag_toggle;
  auto tag_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkTextIter*) (gobj_()), (::GtkTextTag*) (tag_to_c));
  return _temp_ret;
}

// gboolean gtk_text_iter_forward_visible_cursor_position (GtkTextIter* iter);
// gboolean gtk_text_iter_forward_visible_cursor_position (::GtkTextIter* iter);
bool base::TextIterBase::forward_visible_cursor_position () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_forward_visible_cursor_position;
  auto _temp_ret = call_wrap_v ((::GtkTextIter*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_text_iter_forward_visible_cursor_positions (GtkTextIter* iter, gint count);
// gboolean gtk_text_iter_forward_visible_cursor_positions (::GtkTextIter* iter, gint count);
bool base::TextIterBase::forward_visible_cursor_positions (gint count) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextIter* iter, gint count);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_forward_visible_cursor_positions;
  auto count_to_c = count;
  auto _temp_ret = call_wrap_v ((::GtkTextIter*) (gobj_()), (gint) (count_to_c));
  return _temp_ret;
}

// gboolean gtk_text_iter_forward_visible_line (GtkTextIter* iter);
// gboolean gtk_text_iter_forward_visible_line (::GtkTextIter* iter);
bool base::TextIterBase::forward_visible_line () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_forward_visible_line;
  auto _temp_ret = call_wrap_v ((::GtkTextIter*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_text_iter_forward_visible_lines (GtkTextIter* iter, gint count);
// gboolean gtk_text_iter_forward_visible_lines (::GtkTextIter* iter, gint count);
bool base::TextIterBase::forward_visible_lines (gint count) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextIter* iter, gint count);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_forward_visible_lines;
  auto count_to_c = count;
  auto _temp_ret = call_wrap_v ((::GtkTextIter*) (gobj_()), (gint) (count_to_c));
  return _temp_ret;
}

// gboolean gtk_text_iter_forward_visible_word_end (GtkTextIter* iter);
// gboolean gtk_text_iter_forward_visible_word_end (::GtkTextIter* iter);
bool base::TextIterBase::forward_visible_word_end () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_forward_visible_word_end;
  auto _temp_ret = call_wrap_v ((::GtkTextIter*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_text_iter_forward_visible_word_ends (GtkTextIter* iter, gint count);
// gboolean gtk_text_iter_forward_visible_word_ends (::GtkTextIter* iter, gint count);
bool base::TextIterBase::forward_visible_word_ends (gint count) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextIter* iter, gint count);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_forward_visible_word_ends;
  auto count_to_c = count;
  auto _temp_ret = call_wrap_v ((::GtkTextIter*) (gobj_()), (gint) (count_to_c));
  return _temp_ret;
}

// gboolean gtk_text_iter_forward_word_end (GtkTextIter* iter);
// gboolean gtk_text_iter_forward_word_end (::GtkTextIter* iter);
bool base::TextIterBase::forward_word_end () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_forward_word_end;
  auto _temp_ret = call_wrap_v ((::GtkTextIter*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_text_iter_forward_word_ends (GtkTextIter* iter, gint count);
// gboolean gtk_text_iter_forward_word_ends (::GtkTextIter* iter, gint count);
bool base::TextIterBase::forward_word_ends (gint count) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextIter* iter, gint count);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_forward_word_ends;
  auto count_to_c = count;
  auto _temp_ret = call_wrap_v ((::GtkTextIter*) (gobj_()), (gint) (count_to_c));
  return _temp_ret;
}

// void gtk_text_iter_free (GtkTextIter* iter);
// void gtk_text_iter_free (::GtkTextIter* iter);
// IGNORE; marked ignore

// gboolean gtk_text_iter_get_attributes (const GtkTextIter* iter, GtkTextAttributes* values);
// gboolean gtk_text_iter_get_attributes (const ::GtkTextIter* iter, ::GtkTextAttributes* values);
bool base::TextIterBase::get_attributes (Gtk::TextAttributes & values) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GtkTextIter* iter, ::GtkTextAttributes* values);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_get_attributes;
  traits::unset_wrapper<::GtkTextAttributes>::type values_c;
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()), (::GtkTextAttributes*) ((::GtkTextAttributes*) &values_c));
  values = gi::wrap ((::GtkTextAttributes*) &values_c, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Gtk::TextAttributes> base::TextIterBase::get_attributes () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GtkTextIter* iter, ::GtkTextAttributes* values);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_get_attributes;
  traits::unset_wrapper<::GtkTextAttributes>::type values_c;
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()), (::GtkTextAttributes*) ((::GtkTextAttributes*) &values_c));
  return std::make_tuple (_temp_ret, gi::wrap ((::GtkTextAttributes*) &values_c, gi::transfer_none, gi::direction_out));
}

// GtkTextBuffer* gtk_text_iter_get_buffer (const GtkTextIter* iter);
// ::GtkTextBuffer* gtk_text_iter_get_buffer (const ::GtkTextIter* iter);
Gtk::TextBuffer base::TextIterBase::get_buffer () const noexcept
{
  typedef ::GtkTextBuffer* (*call_wrap_t) (const ::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_get_buffer;
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gint gtk_text_iter_get_bytes_in_line (const GtkTextIter* iter);
// gint gtk_text_iter_get_bytes_in_line (const ::GtkTextIter* iter);
gint base::TextIterBase::get_bytes_in_line () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_get_bytes_in_line;
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()));
  return _temp_ret;
}

// gunichar gtk_text_iter_get_char (const GtkTextIter* iter);
// gunichar gtk_text_iter_get_char (const ::GtkTextIter* iter);
gunichar base::TextIterBase::get_char () const noexcept
{
  typedef gunichar (*call_wrap_t) (const ::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_get_char;
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()));
  return _temp_ret;
}

// gint gtk_text_iter_get_chars_in_line (const GtkTextIter* iter);
// gint gtk_text_iter_get_chars_in_line (const ::GtkTextIter* iter);
gint base::TextIterBase::get_chars_in_line () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_get_chars_in_line;
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()));
  return _temp_ret;
}

// GtkTextChildAnchor* gtk_text_iter_get_child_anchor (const GtkTextIter* iter);
// ::GtkTextChildAnchor* gtk_text_iter_get_child_anchor (const ::GtkTextIter* iter);
Gtk::TextChildAnchor base::TextIterBase::get_child_anchor () const noexcept
{
  typedef ::GtkTextChildAnchor* (*call_wrap_t) (const ::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_get_child_anchor;
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// PangoLanguage* gtk_text_iter_get_language (const GtkTextIter* iter);
// ::PangoLanguage* gtk_text_iter_get_language (const ::GtkTextIter* iter);
Pango::Language base::TextIterBase::get_language () const noexcept
{
  typedef ::PangoLanguage* (*call_wrap_t) (const ::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_get_language;
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gint gtk_text_iter_get_line (const GtkTextIter* iter);
// gint gtk_text_iter_get_line (const ::GtkTextIter* iter);
gint base::TextIterBase::get_line () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_get_line;
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()));
  return _temp_ret;
}

// gint gtk_text_iter_get_line_index (const GtkTextIter* iter);
// gint gtk_text_iter_get_line_index (const ::GtkTextIter* iter);
gint base::TextIterBase::get_line_index () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_get_line_index;
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()));
  return _temp_ret;
}

// gint gtk_text_iter_get_line_offset (const GtkTextIter* iter);
// gint gtk_text_iter_get_line_offset (const ::GtkTextIter* iter);
gint base::TextIterBase::get_line_offset () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_get_line_offset;
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()));
  return _temp_ret;
}

// GSList* gtk_text_iter_get_marks (const GtkTextIter* iter);
// ::GSList* gtk_text_iter_get_marks (const ::GtkTextIter* iter);
std::vector<Gtk::TextMark> base::TextIterBase::get_marks () const noexcept
{
  typedef ::GSList* (*call_wrap_t) (const ::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_get_marks;
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()));
  return gi::detail::wrap_list<Gtk::TextMark> (_temp_ret, gi::transfer_container);
}

// gint gtk_text_iter_get_offset (const GtkTextIter* iter);
// gint gtk_text_iter_get_offset (const ::GtkTextIter* iter);
gint base::TextIterBase::get_offset () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_get_offset;
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()));
  return _temp_ret;
}

// GdkPixbuf* gtk_text_iter_get_pixbuf (const GtkTextIter* iter);
// ::GdkPixbuf* gtk_text_iter_get_pixbuf (const ::GtkTextIter* iter);
GdkPixbuf::Pixbuf base::TextIterBase::get_pixbuf () const noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (const ::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_get_pixbuf;
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gchar* gtk_text_iter_get_slice (const GtkTextIter* start, const GtkTextIter* end);
// char* gtk_text_iter_get_slice (const ::GtkTextIter* start, const ::GtkTextIter* end);
std::string base::TextIterBase::get_slice (const Gtk::TextIter & end) const noexcept
{
  typedef char* (*call_wrap_t) (const ::GtkTextIter* start, const ::GtkTextIter* end);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_get_slice;
  auto end_to_c = gi::unwrap (end, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()), (const ::GtkTextIter*) (end_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GSList* gtk_text_iter_get_tags (const GtkTextIter* iter);
// ::GSList* gtk_text_iter_get_tags (const ::GtkTextIter* iter);
std::vector<Gtk::TextTag> base::TextIterBase::get_tags () const noexcept
{
  typedef ::GSList* (*call_wrap_t) (const ::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_get_tags;
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()));
  return gi::detail::wrap_list<Gtk::TextTag> (_temp_ret, gi::transfer_container);
}

// gchar* gtk_text_iter_get_text (const GtkTextIter* start, const GtkTextIter* end);
// char* gtk_text_iter_get_text (const ::GtkTextIter* start, const ::GtkTextIter* end);
std::string base::TextIterBase::get_text (const Gtk::TextIter & end) const noexcept
{
  typedef char* (*call_wrap_t) (const ::GtkTextIter* start, const ::GtkTextIter* end);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_get_text;
  auto end_to_c = gi::unwrap (end, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()), (const ::GtkTextIter*) (end_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GSList* gtk_text_iter_get_toggled_tags (const GtkTextIter* iter, gboolean toggled_on);
// ::GSList* gtk_text_iter_get_toggled_tags (const ::GtkTextIter* iter, gboolean toggled_on);
std::vector<Gtk::TextTag> base::TextIterBase::get_toggled_tags (gboolean toggled_on) const noexcept
{
  typedef ::GSList* (*call_wrap_t) (const ::GtkTextIter* iter, gboolean toggled_on);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_get_toggled_tags;
  auto toggled_on_to_c = toggled_on;
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()), (gboolean) (toggled_on_to_c));
  return gi::detail::wrap_list<Gtk::TextTag> (_temp_ret, gi::transfer_container);
}

// gint gtk_text_iter_get_visible_line_index (const GtkTextIter* iter);
// gint gtk_text_iter_get_visible_line_index (const ::GtkTextIter* iter);
gint base::TextIterBase::get_visible_line_index () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_get_visible_line_index;
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()));
  return _temp_ret;
}

// gint gtk_text_iter_get_visible_line_offset (const GtkTextIter* iter);
// gint gtk_text_iter_get_visible_line_offset (const ::GtkTextIter* iter);
gint base::TextIterBase::get_visible_line_offset () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_get_visible_line_offset;
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()));
  return _temp_ret;
}

// gchar* gtk_text_iter_get_visible_slice (const GtkTextIter* start, const GtkTextIter* end);
// char* gtk_text_iter_get_visible_slice (const ::GtkTextIter* start, const ::GtkTextIter* end);
std::string base::TextIterBase::get_visible_slice (const Gtk::TextIter & end) const noexcept
{
  typedef char* (*call_wrap_t) (const ::GtkTextIter* start, const ::GtkTextIter* end);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_get_visible_slice;
  auto end_to_c = gi::unwrap (end, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()), (const ::GtkTextIter*) (end_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* gtk_text_iter_get_visible_text (const GtkTextIter* start, const GtkTextIter* end);
// char* gtk_text_iter_get_visible_text (const ::GtkTextIter* start, const ::GtkTextIter* end);
std::string base::TextIterBase::get_visible_text (const Gtk::TextIter & end) const noexcept
{
  typedef char* (*call_wrap_t) (const ::GtkTextIter* start, const ::GtkTextIter* end);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_get_visible_text;
  auto end_to_c = gi::unwrap (end, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()), (const ::GtkTextIter*) (end_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gtk_text_iter_has_tag (const GtkTextIter* iter, GtkTextTag* tag);
// gboolean gtk_text_iter_has_tag (const ::GtkTextIter* iter, ::GtkTextTag* tag);
bool base::TextIterBase::has_tag (Gtk::TextTag tag) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GtkTextIter* iter, ::GtkTextTag* tag);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_has_tag;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()), (::GtkTextTag*) (tag_to_c));
  return _temp_ret;
}

// gboolean gtk_text_iter_in_range (const GtkTextIter* iter, const GtkTextIter* start, const GtkTextIter* end);
// gboolean gtk_text_iter_in_range (const ::GtkTextIter* iter, const ::GtkTextIter* start, const ::GtkTextIter* end);
bool base::TextIterBase::in_range (const Gtk::TextIter & start, const Gtk::TextIter & end) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GtkTextIter* iter, const ::GtkTextIter* start, const ::GtkTextIter* end);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_in_range;
  auto end_to_c = gi::unwrap (end, gi::transfer_none, gi::direction_in);
  auto start_to_c = gi::unwrap (start, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()), (const ::GtkTextIter*) (start_to_c), (const ::GtkTextIter*) (end_to_c));
  return _temp_ret;
}

// gboolean gtk_text_iter_inside_sentence (const GtkTextIter* iter);
// gboolean gtk_text_iter_inside_sentence (const ::GtkTextIter* iter);
bool base::TextIterBase::inside_sentence () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_inside_sentence;
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_text_iter_inside_word (const GtkTextIter* iter);
// gboolean gtk_text_iter_inside_word (const ::GtkTextIter* iter);
bool base::TextIterBase::inside_word () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_inside_word;
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_text_iter_is_cursor_position (const GtkTextIter* iter);
// gboolean gtk_text_iter_is_cursor_position (const ::GtkTextIter* iter);
bool base::TextIterBase::is_cursor_position () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_is_cursor_position;
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_text_iter_is_end (const GtkTextIter* iter);
// gboolean gtk_text_iter_is_end (const ::GtkTextIter* iter);
bool base::TextIterBase::is_end () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_is_end;
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_text_iter_is_start (const GtkTextIter* iter);
// gboolean gtk_text_iter_is_start (const ::GtkTextIter* iter);
bool base::TextIterBase::is_start () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_is_start;
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()));
  return _temp_ret;
}

// void gtk_text_iter_order (GtkTextIter* first, GtkTextIter* second);
// void gtk_text_iter_order (::GtkTextIter* first, ::GtkTextIter* second);
void base::TextIterBase::order (Gtk::TextIter second) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextIter* first, ::GtkTextIter* second);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_order;
  auto second_to_c = gi::unwrap (second, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTextIter*) (gobj_()), (::GtkTextIter*) (second_to_c));
}

// void gtk_text_iter_set_line (GtkTextIter* iter, gint line_number);
// void gtk_text_iter_set_line (::GtkTextIter* iter, gint line_number);
void base::TextIterBase::set_line (gint line_number) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextIter* iter, gint line_number);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_set_line;
  auto line_number_to_c = line_number;
  call_wrap_v ((::GtkTextIter*) (gobj_()), (gint) (line_number_to_c));
}

// void gtk_text_iter_set_line_index (GtkTextIter* iter, gint byte_on_line);
// void gtk_text_iter_set_line_index (::GtkTextIter* iter, gint byte_on_line);
void base::TextIterBase::set_line_index (gint byte_on_line) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextIter* iter, gint byte_on_line);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_set_line_index;
  auto byte_on_line_to_c = byte_on_line;
  call_wrap_v ((::GtkTextIter*) (gobj_()), (gint) (byte_on_line_to_c));
}

// void gtk_text_iter_set_line_offset (GtkTextIter* iter, gint char_on_line);
// void gtk_text_iter_set_line_offset (::GtkTextIter* iter, gint char_on_line);
void base::TextIterBase::set_line_offset (gint char_on_line) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextIter* iter, gint char_on_line);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_set_line_offset;
  auto char_on_line_to_c = char_on_line;
  call_wrap_v ((::GtkTextIter*) (gobj_()), (gint) (char_on_line_to_c));
}

// void gtk_text_iter_set_offset (GtkTextIter* iter, gint char_offset);
// void gtk_text_iter_set_offset (::GtkTextIter* iter, gint char_offset);
void base::TextIterBase::set_offset (gint char_offset) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextIter* iter, gint char_offset);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_set_offset;
  auto char_offset_to_c = char_offset;
  call_wrap_v ((::GtkTextIter*) (gobj_()), (gint) (char_offset_to_c));
}

// void gtk_text_iter_set_visible_line_index (GtkTextIter* iter, gint byte_on_line);
// void gtk_text_iter_set_visible_line_index (::GtkTextIter* iter, gint byte_on_line);
void base::TextIterBase::set_visible_line_index (gint byte_on_line) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextIter* iter, gint byte_on_line);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_set_visible_line_index;
  auto byte_on_line_to_c = byte_on_line;
  call_wrap_v ((::GtkTextIter*) (gobj_()), (gint) (byte_on_line_to_c));
}

// void gtk_text_iter_set_visible_line_offset (GtkTextIter* iter, gint char_on_line);
// void gtk_text_iter_set_visible_line_offset (::GtkTextIter* iter, gint char_on_line);
void base::TextIterBase::set_visible_line_offset (gint char_on_line) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextIter* iter, gint char_on_line);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_set_visible_line_offset;
  auto char_on_line_to_c = char_on_line;
  call_wrap_v ((::GtkTextIter*) (gobj_()), (gint) (char_on_line_to_c));
}

// gboolean gtk_text_iter_starts_line (const GtkTextIter* iter);
// gboolean gtk_text_iter_starts_line (const ::GtkTextIter* iter);
bool base::TextIterBase::starts_line () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_starts_line;
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_text_iter_starts_sentence (const GtkTextIter* iter);
// gboolean gtk_text_iter_starts_sentence (const ::GtkTextIter* iter);
bool base::TextIterBase::starts_sentence () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_starts_sentence;
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_text_iter_starts_tag (const GtkTextIter* iter, GtkTextTag* tag);
// gboolean gtk_text_iter_starts_tag (const ::GtkTextIter* iter, ::GtkTextTag* tag);
bool base::TextIterBase::starts_tag (Gtk::TextTag tag) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GtkTextIter* iter, ::GtkTextTag* tag);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_starts_tag;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()), (::GtkTextTag*) (tag_to_c));
  return _temp_ret;
}
bool base::TextIterBase::starts_tag () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GtkTextIter* iter, ::GtkTextTag* tag);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_starts_tag;
  auto tag_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()), (::GtkTextTag*) (tag_to_c));
  return _temp_ret;
}

// gboolean gtk_text_iter_starts_word (const GtkTextIter* iter);
// gboolean gtk_text_iter_starts_word (const ::GtkTextIter* iter);
bool base::TextIterBase::starts_word () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_starts_word;
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_text_iter_toggles_tag (const GtkTextIter* iter, GtkTextTag* tag);
// gboolean gtk_text_iter_toggles_tag (const ::GtkTextIter* iter, ::GtkTextTag* tag);
bool base::TextIterBase::toggles_tag (Gtk::TextTag tag) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GtkTextIter* iter, ::GtkTextTag* tag);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_toggles_tag;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()), (::GtkTextTag*) (tag_to_c));
  return _temp_ret;
}
bool base::TextIterBase::toggles_tag () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GtkTextIter* iter, ::GtkTextTag* tag);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_iter_toggles_tag;
  auto tag_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const ::GtkTextIter*) (gobj_()), (::GtkTextTag*) (tag_to_c));
  return _temp_ret;
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/textiter_extra_def_impl.hpp>)
#include <gtk/textiter_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/textiter_extra_impl.hpp>)
#include <gtk/textiter_extra_impl.hpp>
#endif
#endif

#endif
