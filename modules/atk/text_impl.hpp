// AUTO-GENERATED

#ifndef _GI_ATK_TEXT_IMPL_HPP_
#define _GI_ATK_TEXT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Atk {

namespace base {

// void atk_text_free_ranges ();
// void atk_text_free_ranges ();
// SKIP; inconsistent array info

// gboolean atk_text_add_selection (AtkText* text, gint start_offset, gint end_offset);
// gboolean atk_text_add_selection (::AtkText* text, gint start_offset, gint end_offset);
bool base::TextBase::add_selection (gint start_offset, gint end_offset) noexcept
{
  typedef gboolean (*call_wrap_t) (::AtkText* text, gint start_offset, gint end_offset);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_text_add_selection;
  auto end_offset_to_c = end_offset;
  auto start_offset_to_c = start_offset;
  auto _temp_ret = call_wrap_v ((::AtkText*) (gobj_()), (gint) (start_offset_to_c), (gint) (end_offset_to_c));
  return _temp_ret;
}

// AtkTextRange** atk_text_get_bounded_ranges (AtkText* text, AtkTextRectangle* rect, AtkCoordType coord_type, AtkTextClipType x_clip_type, AtkTextClipType y_clip_type);
// ::AtkTextRange** atk_text_get_bounded_ranges (::AtkText* text, ::AtkTextRectangle* rect, ::AtkCoordType coord_type, ::AtkTextClipType x_clip_type, ::AtkTextClipType y_clip_type);
std::vector<Atk::TextRange> base::TextBase::get_bounded_ranges (Atk::TextRectangle rect, Atk::CoordType coord_type, Atk::TextClipType x_clip_type, Atk::TextClipType y_clip_type) noexcept
{
  typedef ::AtkTextRange** (*call_wrap_t) (::AtkText* text, ::AtkTextRectangle* rect, ::AtkCoordType coord_type, ::AtkTextClipType x_clip_type, ::AtkTextClipType y_clip_type);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_text_get_bounded_ranges;
  auto y_clip_type_to_c = gi::unwrap (y_clip_type);
  auto x_clip_type_to_c = gi::unwrap (x_clip_type);
  auto coord_type_to_c = gi::unwrap (coord_type);
  auto rect_to_c = gi::unwrap (rect, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::AtkText*) (gobj_()), (::AtkTextRectangle*) (rect_to_c), (::AtkCoordType) (coord_type_to_c), (::AtkTextClipType) (x_clip_type_to_c), (::AtkTextClipType) (y_clip_type_to_c));
  return gi::detail::wrap_list<Atk::TextRange> (_temp_ret, gi::transfer_full);
}

// gint atk_text_get_caret_offset (AtkText* text);
// gint atk_text_get_caret_offset (::AtkText* text);
gint base::TextBase::get_caret_offset () noexcept
{
  typedef gint (*call_wrap_t) (::AtkText* text);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_text_get_caret_offset;
  auto _temp_ret = call_wrap_v ((::AtkText*) (gobj_()));
  return _temp_ret;
}

// gunichar atk_text_get_character_at_offset (AtkText* text, gint offset);
// gunichar atk_text_get_character_at_offset (::AtkText* text, gint offset);
gunichar base::TextBase::get_character_at_offset (gint offset) noexcept
{
  typedef gunichar (*call_wrap_t) (::AtkText* text, gint offset);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_text_get_character_at_offset;
  auto offset_to_c = offset;
  auto _temp_ret = call_wrap_v ((::AtkText*) (gobj_()), (gint) (offset_to_c));
  return _temp_ret;
}

// gint atk_text_get_character_count (AtkText* text);
// gint atk_text_get_character_count (::AtkText* text);
gint base::TextBase::get_character_count () noexcept
{
  typedef gint (*call_wrap_t) (::AtkText* text);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_text_get_character_count;
  auto _temp_ret = call_wrap_v ((::AtkText*) (gobj_()));
  return _temp_ret;
}

// void atk_text_get_character_extents (AtkText* text, gint offset, gint* x, gint* y, gint* width, gint* height, AtkCoordType coords);
// void atk_text_get_character_extents (::AtkText* text, gint offset, gint* x, gint* y, gint* width, gint* height, ::AtkCoordType coords);
void base::TextBase::get_character_extents (gint offset, gint * x, gint * y, gint * width, gint * height, Atk::CoordType coords) noexcept
{
  typedef void (*call_wrap_t) (::AtkText* text, gint offset, gint* x, gint* y, gint* width, gint* height, ::AtkCoordType coords);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_text_get_character_extents;
  auto coords_to_c = gi::unwrap (coords);
  gint height_o {};
  gint width_o {};
  gint y_o {};
  gint x_o {};
  auto offset_to_c = offset;
  call_wrap_v ((::AtkText*) (gobj_()), (gint) (offset_to_c), (gint*) (x ? &x_o : nullptr), (gint*) (y ? &y_o : nullptr), (gint*) (width ? &width_o : nullptr), (gint*) (height ? &height_o : nullptr), (::AtkCoordType) (coords_to_c));
  if (height) *height = height_o;
  if (width) *width = width_o;
  if (y) *y = y_o;
  if (x) *x = x_o;
}
std::tuple<gint, gint, gint, gint> base::TextBase::get_character_extents (gint offset, Atk::CoordType coords) noexcept
{
  typedef void (*call_wrap_t) (::AtkText* text, gint offset, gint* x, gint* y, gint* width, gint* height, ::AtkCoordType coords);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_text_get_character_extents;
  auto coords_to_c = gi::unwrap (coords);
  gint height_o {};
  gint width_o {};
  gint y_o {};
  gint x_o {};
  auto offset_to_c = offset;
  call_wrap_v ((::AtkText*) (gobj_()), (gint) (offset_to_c), (gint*) (&x_o), (gint*) (&y_o), (gint*) (&width_o), (gint*) (&height_o), (::AtkCoordType) (coords_to_c));
  return std::make_tuple (x_o, y_o, width_o, height_o);
}

//  atk_text_get_default_attributes (AtkText* text);
//  atk_text_get_default_attributes (::AtkText* text);
// SKIP; inconsistent list element info

// gint atk_text_get_n_selections (AtkText* text);
// gint atk_text_get_n_selections (::AtkText* text);
gint base::TextBase::get_n_selections () noexcept
{
  typedef gint (*call_wrap_t) (::AtkText* text);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_text_get_n_selections;
  auto _temp_ret = call_wrap_v ((::AtkText*) (gobj_()));
  return _temp_ret;
}

// gint atk_text_get_offset_at_point (AtkText* text, gint x, gint y, AtkCoordType coords);
// gint atk_text_get_offset_at_point (::AtkText* text, gint x, gint y, ::AtkCoordType coords);
gint base::TextBase::get_offset_at_point (gint x, gint y, Atk::CoordType coords) noexcept
{
  typedef gint (*call_wrap_t) (::AtkText* text, gint x, gint y, ::AtkCoordType coords);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_text_get_offset_at_point;
  auto coords_to_c = gi::unwrap (coords);
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::AtkText*) (gobj_()), (gint) (x_to_c), (gint) (y_to_c), (::AtkCoordType) (coords_to_c));
  return _temp_ret;
}

// void atk_text_get_range_extents (AtkText* text, gint start_offset, gint end_offset, AtkCoordType coord_type, AtkTextRectangle* rect);
// void atk_text_get_range_extents (::AtkText* text, gint start_offset, gint end_offset, ::AtkCoordType coord_type, ::AtkTextRectangle* rect);
void base::TextBase::get_range_extents (gint start_offset, gint end_offset, Atk::CoordType coord_type, Atk::TextRectangle & rect) noexcept
{
  typedef void (*call_wrap_t) (::AtkText* text, gint start_offset, gint end_offset, ::AtkCoordType coord_type, ::AtkTextRectangle* rect);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_text_get_range_extents;
  traits::unset_wrapper<::AtkTextRectangle>::type rect_c;
  auto coord_type_to_c = gi::unwrap (coord_type);
  auto end_offset_to_c = end_offset;
  auto start_offset_to_c = start_offset;
  call_wrap_v ((::AtkText*) (gobj_()), (gint) (start_offset_to_c), (gint) (end_offset_to_c), (::AtkCoordType) (coord_type_to_c), (::AtkTextRectangle*) ((::AtkTextRectangle*) &rect_c));
  rect = gi::wrap ((::AtkTextRectangle*) &rect_c, gi::transfer_none, gi::direction_out);
}
Atk::TextRectangle base::TextBase::get_range_extents (gint start_offset, gint end_offset, Atk::CoordType coord_type) noexcept
{
  typedef void (*call_wrap_t) (::AtkText* text, gint start_offset, gint end_offset, ::AtkCoordType coord_type, ::AtkTextRectangle* rect);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_text_get_range_extents;
  traits::unset_wrapper<::AtkTextRectangle>::type rect_c;
  auto coord_type_to_c = gi::unwrap (coord_type);
  auto end_offset_to_c = end_offset;
  auto start_offset_to_c = start_offset;
  call_wrap_v ((::AtkText*) (gobj_()), (gint) (start_offset_to_c), (gint) (end_offset_to_c), (::AtkCoordType) (coord_type_to_c), (::AtkTextRectangle*) ((::AtkTextRectangle*) &rect_c));
  return gi::wrap ((::AtkTextRectangle*) &rect_c, gi::transfer_none, gi::direction_out);
}

//  atk_text_get_run_attributes (AtkText* text, gint offset, gint* start_offset, gint* end_offset);
//  atk_text_get_run_attributes (::AtkText* text, gint offset, gint* start_offset, gint* end_offset);
// SKIP; inconsistent list element info

// gchar* atk_text_get_selection (AtkText* text, gint selection_num, gint* start_offset, gint* end_offset);
// char* atk_text_get_selection (::AtkText* text, gint selection_num, gint* start_offset, gint* end_offset);
std::string base::TextBase::get_selection (gint selection_num, gint & start_offset, gint & end_offset) noexcept
{
  typedef char* (*call_wrap_t) (::AtkText* text, gint selection_num, gint* start_offset, gint* end_offset);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_text_get_selection;
  gint end_offset_o {};
  gint start_offset_o {};
  auto selection_num_to_c = selection_num;
  auto _temp_ret = call_wrap_v ((::AtkText*) (gobj_()), (gint) (selection_num_to_c), (gint*) (&start_offset_o), (gint*) (&end_offset_o));
  end_offset = end_offset_o;
  start_offset = start_offset_o;
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::tuple<std::string, gint, gint> base::TextBase::get_selection (gint selection_num) noexcept
{
  typedef char* (*call_wrap_t) (::AtkText* text, gint selection_num, gint* start_offset, gint* end_offset);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_text_get_selection;
  gint end_offset_o {};
  gint start_offset_o {};
  auto selection_num_to_c = selection_num;
  auto _temp_ret = call_wrap_v ((::AtkText*) (gobj_()), (gint) (selection_num_to_c), (gint*) (&start_offset_o), (gint*) (&end_offset_o));
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), start_offset_o, end_offset_o);
}

// gchar* atk_text_get_string_at_offset (AtkText* text, gint offset, AtkTextGranularity granularity, gint* start_offset, gint* end_offset);
// char* atk_text_get_string_at_offset (::AtkText* text, gint offset, ::AtkTextGranularity granularity, gint* start_offset, gint* end_offset);
std::string base::TextBase::get_string_at_offset (gint offset, Atk::TextGranularity granularity, gint & start_offset, gint & end_offset) noexcept
{
  typedef char* (*call_wrap_t) (::AtkText* text, gint offset, ::AtkTextGranularity granularity, gint* start_offset, gint* end_offset);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_text_get_string_at_offset;
  gint end_offset_o {};
  gint start_offset_o {};
  auto granularity_to_c = gi::unwrap (granularity);
  auto offset_to_c = offset;
  auto _temp_ret = call_wrap_v ((::AtkText*) (gobj_()), (gint) (offset_to_c), (::AtkTextGranularity) (granularity_to_c), (gint*) (&start_offset_o), (gint*) (&end_offset_o));
  end_offset = end_offset_o;
  start_offset = start_offset_o;
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::tuple<std::string, gint, gint> base::TextBase::get_string_at_offset (gint offset, Atk::TextGranularity granularity) noexcept
{
  typedef char* (*call_wrap_t) (::AtkText* text, gint offset, ::AtkTextGranularity granularity, gint* start_offset, gint* end_offset);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_text_get_string_at_offset;
  gint end_offset_o {};
  gint start_offset_o {};
  auto granularity_to_c = gi::unwrap (granularity);
  auto offset_to_c = offset;
  auto _temp_ret = call_wrap_v ((::AtkText*) (gobj_()), (gint) (offset_to_c), (::AtkTextGranularity) (granularity_to_c), (gint*) (&start_offset_o), (gint*) (&end_offset_o));
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), start_offset_o, end_offset_o);
}

// gchar* atk_text_get_text (AtkText* text, gint start_offset, gint end_offset);
// char* atk_text_get_text (::AtkText* text, gint start_offset, gint end_offset);
std::string base::TextBase::get_text (gint start_offset, gint end_offset) noexcept
{
  typedef char* (*call_wrap_t) (::AtkText* text, gint start_offset, gint end_offset);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_text_get_text;
  auto end_offset_to_c = end_offset;
  auto start_offset_to_c = start_offset;
  auto _temp_ret = call_wrap_v ((::AtkText*) (gobj_()), (gint) (start_offset_to_c), (gint) (end_offset_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* atk_text_get_text_after_offset (AtkText* text, gint offset, AtkTextBoundary boundary_type, gint* start_offset, gint* end_offset);
// char* atk_text_get_text_after_offset (::AtkText* text, gint offset, ::AtkTextBoundary boundary_type, gint* start_offset, gint* end_offset);
// IGNORE; deprecated

// gchar* atk_text_get_text_at_offset (AtkText* text, gint offset, AtkTextBoundary boundary_type, gint* start_offset, gint* end_offset);
// char* atk_text_get_text_at_offset (::AtkText* text, gint offset, ::AtkTextBoundary boundary_type, gint* start_offset, gint* end_offset);
// IGNORE; deprecated

// gchar* atk_text_get_text_before_offset (AtkText* text, gint offset, AtkTextBoundary boundary_type, gint* start_offset, gint* end_offset);
// char* atk_text_get_text_before_offset (::AtkText* text, gint offset, ::AtkTextBoundary boundary_type, gint* start_offset, gint* end_offset);
// IGNORE; deprecated

// gboolean atk_text_remove_selection (AtkText* text, gint selection_num);
// gboolean atk_text_remove_selection (::AtkText* text, gint selection_num);
bool base::TextBase::remove_selection (gint selection_num) noexcept
{
  typedef gboolean (*call_wrap_t) (::AtkText* text, gint selection_num);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_text_remove_selection;
  auto selection_num_to_c = selection_num;
  auto _temp_ret = call_wrap_v ((::AtkText*) (gobj_()), (gint) (selection_num_to_c));
  return _temp_ret;
}

// gboolean atk_text_scroll_substring_to (AtkText* text, gint start_offset, gint end_offset, AtkScrollType type);
// gboolean atk_text_scroll_substring_to (::AtkText* text, gint start_offset, gint end_offset, ::AtkScrollType type);
bool base::TextBase::scroll_substring_to (gint start_offset, gint end_offset, Atk::ScrollType type) noexcept
{
  typedef gboolean (*call_wrap_t) (::AtkText* text, gint start_offset, gint end_offset, ::AtkScrollType type);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_text_scroll_substring_to;
  auto type_to_c = gi::unwrap (type);
  auto end_offset_to_c = end_offset;
  auto start_offset_to_c = start_offset;
  auto _temp_ret = call_wrap_v ((::AtkText*) (gobj_()), (gint) (start_offset_to_c), (gint) (end_offset_to_c), (::AtkScrollType) (type_to_c));
  return _temp_ret;
}

// gboolean atk_text_scroll_substring_to_point (AtkText* text, gint start_offset, gint end_offset, AtkCoordType coords, gint x, gint y);
// gboolean atk_text_scroll_substring_to_point (::AtkText* text, gint start_offset, gint end_offset, ::AtkCoordType coords, gint x, gint y);
bool base::TextBase::scroll_substring_to_point (gint start_offset, gint end_offset, Atk::CoordType coords, gint x, gint y) noexcept
{
  typedef gboolean (*call_wrap_t) (::AtkText* text, gint start_offset, gint end_offset, ::AtkCoordType coords, gint x, gint y);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_text_scroll_substring_to_point;
  auto y_to_c = y;
  auto x_to_c = x;
  auto coords_to_c = gi::unwrap (coords);
  auto end_offset_to_c = end_offset;
  auto start_offset_to_c = start_offset;
  auto _temp_ret = call_wrap_v ((::AtkText*) (gobj_()), (gint) (start_offset_to_c), (gint) (end_offset_to_c), (::AtkCoordType) (coords_to_c), (gint) (x_to_c), (gint) (y_to_c));
  return _temp_ret;
}

// gboolean atk_text_set_caret_offset (AtkText* text, gint offset);
// gboolean atk_text_set_caret_offset (::AtkText* text, gint offset);
bool base::TextBase::set_caret_offset (gint offset) noexcept
{
  typedef gboolean (*call_wrap_t) (::AtkText* text, gint offset);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_text_set_caret_offset;
  auto offset_to_c = offset;
  auto _temp_ret = call_wrap_v ((::AtkText*) (gobj_()), (gint) (offset_to_c));
  return _temp_ret;
}

// gboolean atk_text_set_selection (AtkText* text, gint selection_num, gint start_offset, gint end_offset);
// gboolean atk_text_set_selection (::AtkText* text, gint selection_num, gint start_offset, gint end_offset);
bool base::TextBase::set_selection (gint selection_num, gint start_offset, gint end_offset) noexcept
{
  typedef gboolean (*call_wrap_t) (::AtkText* text, gint selection_num, gint start_offset, gint end_offset);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_text_set_selection;
  auto end_offset_to_c = end_offset;
  auto start_offset_to_c = start_offset;
  auto selection_num_to_c = selection_num;
  auto _temp_ret = call_wrap_v ((::AtkText*) (gobj_()), (gint) (selection_num_to_c), (gint) (start_offset_to_c), (gint) (end_offset_to_c));
  return _temp_ret;
}



// IGNORE; deprecated





} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/text_extra_def_impl.hpp>)
#include <atk/text_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/text_extra_impl.hpp>)
#include <atk/text_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {

void TextIfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::AtkTextIface *methods = (::AtkTextIface *) interface_struct;
  (void) methods;

  methods->add_selection = (decltype (methods->add_selection)) detail::method_wrapper<self, bool (*) (gint start_offset, gint end_offset), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::add_selection_>;
  methods->get_caret_offset = (decltype (methods->get_caret_offset)) detail::method_wrapper<self, gint (*) (), gi::transfer_none_t>::wrapper<&self::get_caret_offset_>;
  methods->get_character_at_offset = (decltype (methods->get_character_at_offset)) detail::method_wrapper<self, gunichar (*) (gint offset), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::get_character_at_offset_>;
  methods->get_character_count = (decltype (methods->get_character_count)) detail::method_wrapper<self, gint (*) (), gi::transfer_none_t>::wrapper<&self::get_character_count_>;
  methods->get_n_selections = (decltype (methods->get_n_selections)) detail::method_wrapper<self, gint (*) (), gi::transfer_none_t>::wrapper<&self::get_n_selections_>;
  methods->get_offset_at_point = (decltype (methods->get_offset_at_point)) detail::method_wrapper<self, gint (*) (gint x, gint y, Atk::CoordType coords), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::get_offset_at_point_>;
  methods->get_text = (decltype (methods->get_text)) detail::method_wrapper<self, std::string (*) (gint start_offset, gint end_offset), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::get_text_>;
  methods->remove_selection = (decltype (methods->remove_selection)) detail::method_wrapper<self, bool (*) (gint selection_num), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::remove_selection_>;
  methods->scroll_substring_to = (decltype (methods->scroll_substring_to)) detail::method_wrapper<self, bool (*) (gint start_offset, gint end_offset, Atk::ScrollType type), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::scroll_substring_to_>;
  methods->scroll_substring_to_point = (decltype (methods->scroll_substring_to_point)) detail::method_wrapper<self, bool (*) (gint start_offset, gint end_offset, Atk::CoordType coords, gint x, gint y), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::scroll_substring_to_point_>;
  methods->set_caret_offset = (decltype (methods->set_caret_offset)) detail::method_wrapper<self, bool (*) (gint offset), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::set_caret_offset_>;
  methods->set_selection = (decltype (methods->set_selection)) detail::method_wrapper<self, bool (*) (gint selection_num, gint start_offset, gint end_offset), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::set_selection_>;
  methods->text_attributes_changed = (decltype (methods->text_attributes_changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::text_attributes_changed_>;
  methods->text_caret_moved = (decltype (methods->text_caret_moved)) detail::method_wrapper<self, void (*) (gint location), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::text_caret_moved_>;
  methods->text_changed = (decltype (methods->text_changed)) detail::method_wrapper<self, void (*) (gint position, gint length), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::text_changed_>;
  methods->text_selection_changed = (decltype (methods->text_selection_changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::text_selection_changed_>;
}

// gboolean Text::add_selection (AtkText* text, gint start_offset, gint end_offset);
// gboolean Text::add_selection (::AtkText* text, gint start_offset, gint end_offset);
bool TextIfaceClassImpl::add_selection_ (gint start_offset, gint end_offset) noexcept
{
  if (!get_struct_()->add_selection) return bool{};
  typedef gboolean (*call_wrap_t) (::AtkText* text, gint start_offset, gint end_offset);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->add_selection;
  auto end_offset_to_c = end_offset;
  auto start_offset_to_c = start_offset;
  auto _temp_ret = call_wrap_v ((::AtkText*) (gobj_()), (gint) (start_offset_to_c), (gint) (end_offset_to_c));
  return _temp_ret;
}

// AtkTextRange** Text::get_bounded_ranges (AtkText* text, AtkTextRectangle* rect, AtkCoordType coord_type, AtkTextClipType x_clip_type, AtkTextClipType y_clip_type);
// ::AtkTextRange** Text::get_bounded_ranges (::AtkText* text, ::AtkTextRectangle* rect, ::AtkCoordType coord_type, ::AtkTextClipType x_clip_type, ::AtkTextClipType y_clip_type);
// SKIP; container return not supported

// gint Text::get_caret_offset (AtkText* text);
// gint Text::get_caret_offset (::AtkText* text);
gint TextIfaceClassImpl::get_caret_offset_ () noexcept
{
  if (!get_struct_()->get_caret_offset) return gint{};
  typedef gint (*call_wrap_t) (::AtkText* text);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_caret_offset;
  auto _temp_ret = call_wrap_v ((::AtkText*) (gobj_()));
  return _temp_ret;
}

// gunichar Text::get_character_at_offset (AtkText* text, gint offset);
// gunichar Text::get_character_at_offset (::AtkText* text, gint offset);
gunichar TextIfaceClassImpl::get_character_at_offset_ (gint offset) noexcept
{
  if (!get_struct_()->get_character_at_offset) return gunichar{};
  typedef gunichar (*call_wrap_t) (::AtkText* text, gint offset);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_character_at_offset;
  auto offset_to_c = offset;
  auto _temp_ret = call_wrap_v ((::AtkText*) (gobj_()), (gint) (offset_to_c));
  return _temp_ret;
}

// gint Text::get_character_count (AtkText* text);
// gint Text::get_character_count (::AtkText* text);
gint TextIfaceClassImpl::get_character_count_ () noexcept
{
  if (!get_struct_()->get_character_count) return gint{};
  typedef gint (*call_wrap_t) (::AtkText* text);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_character_count;
  auto _temp_ret = call_wrap_v ((::AtkText*) (gobj_()));
  return _temp_ret;
}

// void Text::get_character_extents (AtkText* text, gint offset, gint* x, gint* y, gint* width, gint* height, AtkCoordType coords);
// void Text::get_character_extents (::AtkText* text, gint offset, gint* x, gint* y, gint* width, gint* height, ::AtkCoordType coords);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported

//  Text::get_default_attributes (AtkText* text);
//  Text::get_default_attributes (::AtkText* text);
// SKIP; inconsistent list element info

// gint Text::get_n_selections (AtkText* text);
// gint Text::get_n_selections (::AtkText* text);
gint TextIfaceClassImpl::get_n_selections_ () noexcept
{
  if (!get_struct_()->get_n_selections) return gint{};
  typedef gint (*call_wrap_t) (::AtkText* text);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_n_selections;
  auto _temp_ret = call_wrap_v ((::AtkText*) (gobj_()));
  return _temp_ret;
}

// gint Text::get_offset_at_point (AtkText* text, gint x, gint y, AtkCoordType coords);
// gint Text::get_offset_at_point (::AtkText* text, gint x, gint y, ::AtkCoordType coords);
gint TextIfaceClassImpl::get_offset_at_point_ (gint x, gint y, Atk::CoordType coords) noexcept
{
  if (!get_struct_()->get_offset_at_point) return gint{};
  typedef gint (*call_wrap_t) (::AtkText* text, gint x, gint y, ::AtkCoordType coords);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_offset_at_point;
  auto coords_to_c = gi::unwrap (coords);
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::AtkText*) (gobj_()), (gint) (x_to_c), (gint) (y_to_c), (::AtkCoordType) (coords_to_c));
  return _temp_ret;
}

// void Text::get_range_extents (AtkText* text, gint start_offset, gint end_offset, AtkCoordType coord_type, AtkTextRectangle* rect);
// void Text::get_range_extents (::AtkText* text, gint start_offset, gint end_offset, ::AtkCoordType coord_type, ::AtkTextRectangle* rect);
// SKIP; virtual-method out parameter not supported

//  Text::get_run_attributes (AtkText* text, gint offset, gint* start_offset, gint* end_offset);
//  Text::get_run_attributes (::AtkText* text, gint offset, gint* start_offset, gint* end_offset);
// SKIP; inconsistent list element info, virtual-method out parameter not supported, virtual-method out parameter not supported

// gchar* Text::get_selection (AtkText* text, gint selection_num, gint* start_offset, gint* end_offset);
// char* Text::get_selection (::AtkText* text, gint selection_num, gint* start_offset, gint* end_offset);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// gchar* Text::get_string_at_offset (AtkText* text, gint offset, AtkTextGranularity granularity, gint* start_offset, gint* end_offset);
// char* Text::get_string_at_offset (::AtkText* text, gint offset, ::AtkTextGranularity granularity, gint* start_offset, gint* end_offset);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// gchar* Text::get_text (AtkText* text, gint start_offset, gint end_offset);
// char* Text::get_text (::AtkText* text, gint start_offset, gint end_offset);
std::string TextIfaceClassImpl::get_text_ (gint start_offset, gint end_offset) noexcept
{
  if (!get_struct_()->get_text) return std::string{};
  typedef char* (*call_wrap_t) (::AtkText* text, gint start_offset, gint end_offset);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_text;
  auto end_offset_to_c = end_offset;
  auto start_offset_to_c = start_offset;
  auto _temp_ret = call_wrap_v ((::AtkText*) (gobj_()), (gint) (start_offset_to_c), (gint) (end_offset_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* Text::get_text_after_offset (AtkText* text, gint offset, AtkTextBoundary boundary_type, gint* start_offset, gint* end_offset);
// char* Text::get_text_after_offset (::AtkText* text, gint offset, ::AtkTextBoundary boundary_type, gint* start_offset, gint* end_offset);
// IGNORE; deprecated, virtual-method out parameter not supported, virtual-method out parameter not supported

// gchar* Text::get_text_at_offset (AtkText* text, gint offset, AtkTextBoundary boundary_type, gint* start_offset, gint* end_offset);
// char* Text::get_text_at_offset (::AtkText* text, gint offset, ::AtkTextBoundary boundary_type, gint* start_offset, gint* end_offset);
// IGNORE; deprecated, virtual-method out parameter not supported, virtual-method out parameter not supported

// gchar* Text::get_text_before_offset (AtkText* text, gint offset, AtkTextBoundary boundary_type, gint* start_offset, gint* end_offset);
// char* Text::get_text_before_offset (::AtkText* text, gint offset, ::AtkTextBoundary boundary_type, gint* start_offset, gint* end_offset);
// IGNORE; deprecated, virtual-method out parameter not supported, virtual-method out parameter not supported

// gboolean Text::remove_selection (AtkText* text, gint selection_num);
// gboolean Text::remove_selection (::AtkText* text, gint selection_num);
bool TextIfaceClassImpl::remove_selection_ (gint selection_num) noexcept
{
  if (!get_struct_()->remove_selection) return bool{};
  typedef gboolean (*call_wrap_t) (::AtkText* text, gint selection_num);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->remove_selection;
  auto selection_num_to_c = selection_num;
  auto _temp_ret = call_wrap_v ((::AtkText*) (gobj_()), (gint) (selection_num_to_c));
  return _temp_ret;
}

// gboolean Text::scroll_substring_to (AtkText* text, gint start_offset, gint end_offset, AtkScrollType type);
// gboolean Text::scroll_substring_to (::AtkText* text, gint start_offset, gint end_offset, ::AtkScrollType type);
bool TextIfaceClassImpl::scroll_substring_to_ (gint start_offset, gint end_offset, Atk::ScrollType type) noexcept
{
  if (!get_struct_()->scroll_substring_to) return bool{};
  typedef gboolean (*call_wrap_t) (::AtkText* text, gint start_offset, gint end_offset, ::AtkScrollType type);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->scroll_substring_to;
  auto type_to_c = gi::unwrap (type);
  auto end_offset_to_c = end_offset;
  auto start_offset_to_c = start_offset;
  auto _temp_ret = call_wrap_v ((::AtkText*) (gobj_()), (gint) (start_offset_to_c), (gint) (end_offset_to_c), (::AtkScrollType) (type_to_c));
  return _temp_ret;
}

// gboolean Text::scroll_substring_to_point (AtkText* text, gint start_offset, gint end_offset, AtkCoordType coords, gint x, gint y);
// gboolean Text::scroll_substring_to_point (::AtkText* text, gint start_offset, gint end_offset, ::AtkCoordType coords, gint x, gint y);
bool TextIfaceClassImpl::scroll_substring_to_point_ (gint start_offset, gint end_offset, Atk::CoordType coords, gint x, gint y) noexcept
{
  if (!get_struct_()->scroll_substring_to_point) return bool{};
  typedef gboolean (*call_wrap_t) (::AtkText* text, gint start_offset, gint end_offset, ::AtkCoordType coords, gint x, gint y);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->scroll_substring_to_point;
  auto y_to_c = y;
  auto x_to_c = x;
  auto coords_to_c = gi::unwrap (coords);
  auto end_offset_to_c = end_offset;
  auto start_offset_to_c = start_offset;
  auto _temp_ret = call_wrap_v ((::AtkText*) (gobj_()), (gint) (start_offset_to_c), (gint) (end_offset_to_c), (::AtkCoordType) (coords_to_c), (gint) (x_to_c), (gint) (y_to_c));
  return _temp_ret;
}

// gboolean Text::set_caret_offset (AtkText* text, gint offset);
// gboolean Text::set_caret_offset (::AtkText* text, gint offset);
bool TextIfaceClassImpl::set_caret_offset_ (gint offset) noexcept
{
  if (!get_struct_()->set_caret_offset) return bool{};
  typedef gboolean (*call_wrap_t) (::AtkText* text, gint offset);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_caret_offset;
  auto offset_to_c = offset;
  auto _temp_ret = call_wrap_v ((::AtkText*) (gobj_()), (gint) (offset_to_c));
  return _temp_ret;
}

// gboolean Text::set_selection (AtkText* text, gint selection_num, gint start_offset, gint end_offset);
// gboolean Text::set_selection (::AtkText* text, gint selection_num, gint start_offset, gint end_offset);
bool TextIfaceClassImpl::set_selection_ (gint selection_num, gint start_offset, gint end_offset) noexcept
{
  if (!get_struct_()->set_selection) return bool{};
  typedef gboolean (*call_wrap_t) (::AtkText* text, gint selection_num, gint start_offset, gint end_offset);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_selection;
  auto end_offset_to_c = end_offset;
  auto start_offset_to_c = start_offset;
  auto selection_num_to_c = selection_num;
  auto _temp_ret = call_wrap_v ((::AtkText*) (gobj_()), (gint) (selection_num_to_c), (gint) (start_offset_to_c), (gint) (end_offset_to_c));
  return _temp_ret;
}

// void Text::text_attributes_changed (AtkText* text);
// void Text::text_attributes_changed (::AtkText* text);
void TextIfaceClassImpl::text_attributes_changed_ () noexcept
{
  if (!get_struct_()->text_attributes_changed) return ;
  typedef void (*call_wrap_t) (::AtkText* text);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->text_attributes_changed;
  call_wrap_v ((::AtkText*) (gobj_()));
}

// void Text::text_caret_moved (AtkText* text, gint location);
// void Text::text_caret_moved (::AtkText* text, gint location);
void TextIfaceClassImpl::text_caret_moved_ (gint location) noexcept
{
  if (!get_struct_()->text_caret_moved) return ;
  typedef void (*call_wrap_t) (::AtkText* text, gint location);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->text_caret_moved;
  auto location_to_c = location;
  call_wrap_v ((::AtkText*) (gobj_()), (gint) (location_to_c));
}

// void Text::text_changed (AtkText* text, gint position, gint length);
// void Text::text_changed (::AtkText* text, gint position, gint length);
void TextIfaceClassImpl::text_changed_ (gint position, gint length) noexcept
{
  if (!get_struct_()->text_changed) return ;
  typedef void (*call_wrap_t) (::AtkText* text, gint position, gint length);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->text_changed;
  auto length_to_c = length;
  auto position_to_c = position;
  call_wrap_v ((::AtkText*) (gobj_()), (gint) (position_to_c), (gint) (length_to_c));
}

// void Text::text_selection_changed (AtkText* text);
// void Text::text_selection_changed (::AtkText* text);
void TextIfaceClassImpl::text_selection_changed_ () noexcept
{
  if (!get_struct_()->text_selection_changed) return ;
  typedef void (*call_wrap_t) (::AtkText* text);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->text_selection_changed;
  call_wrap_v ((::AtkText*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
