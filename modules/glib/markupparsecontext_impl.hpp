// AUTO-GENERATED

#ifndef _GI_GLIB_MARKUPPARSECONTEXT_IMPL_HPP_
#define _GI_GLIB_MARKUPPARSECONTEXT_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// GMarkupParseContext* g_markup_parse_context_new (const GMarkupParser* parser, GMarkupParseFlags flags, gpointer user_data, GDestroyNotify user_data_dnotify);
// ::GMarkupParseContext* g_markup_parse_context_new (const ::GMarkupParser* parser, ::GMarkupParseFlags flags, void* user_data, GLib::DestroyNotify::cfunction_type user_data_dnotify);
// SKIP; callback misses closure info

// gboolean g_markup_parse_context_end_parse (GMarkupParseContext* context, GError ** error);
// gboolean g_markup_parse_context_end_parse (::GMarkupParseContext* context, GError ** error);
bool base::MarkupParseContextBase::end_parse ()
{
  typedef gboolean (*call_wrap_t) (::GMarkupParseContext* context, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_markup_parse_context_end_parse;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GMarkupParseContext*) (gobj_()), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::MarkupParseContextBase::end_parse (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GMarkupParseContext* context, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_markup_parse_context_end_parse;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GMarkupParseContext*) (gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_markup_parse_context_free (GMarkupParseContext* context);
// void g_markup_parse_context_free (::GMarkupParseContext* context);
// IGNORE; marked ignore

// const gchar* g_markup_parse_context_get_element (GMarkupParseContext* context);
// const char* g_markup_parse_context_get_element (::GMarkupParseContext* context);
std::string base::MarkupParseContextBase::get_element () noexcept
{
  typedef const char* (*call_wrap_t) (::GMarkupParseContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) g_markup_parse_context_get_element;
  auto _temp_ret = call_wrap_v ((::GMarkupParseContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const GSList* g_markup_parse_context_get_element_stack (GMarkupParseContext* context);
// const ::GSList* g_markup_parse_context_get_element_stack (::GMarkupParseContext* context);
std::vector<gpointer> base::MarkupParseContextBase::get_element_stack () noexcept
{
  typedef const ::GSList* (*call_wrap_t) (::GMarkupParseContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) g_markup_parse_context_get_element_stack;
  auto _temp_ret = call_wrap_v ((::GMarkupParseContext*) (gobj_()));
  return gi::detail::wrap_list<gpointer> (_temp_ret, gi::transfer_none);
}

// void g_markup_parse_context_get_position (GMarkupParseContext* context, gint* line_number, gint* char_number);
// void g_markup_parse_context_get_position (::GMarkupParseContext* context, gint* line_number, gint* char_number);
void base::MarkupParseContextBase::get_position (gint * line_number, gint * char_number) noexcept
{
  typedef void (*call_wrap_t) (::GMarkupParseContext* context, gint* line_number, gint* char_number);
  call_wrap_t call_wrap_v = (call_wrap_t) g_markup_parse_context_get_position;
  gint char_number_o {};
  gint line_number_o {};
  call_wrap_v ((::GMarkupParseContext*) (gobj_()), (gint*) (line_number ? &line_number_o : nullptr), (gint*) (char_number ? &char_number_o : nullptr));
  if (char_number) *char_number = char_number_o;
  if (line_number) *line_number = line_number_o;
}
std::tuple<gint, gint> base::MarkupParseContextBase::get_position () noexcept
{
  typedef void (*call_wrap_t) (::GMarkupParseContext* context, gint* line_number, gint* char_number);
  call_wrap_t call_wrap_v = (call_wrap_t) g_markup_parse_context_get_position;
  gint char_number_o {};
  gint line_number_o {};
  call_wrap_v ((::GMarkupParseContext*) (gobj_()), (gint*) (&line_number_o), (gint*) (&char_number_o));
  return std::make_tuple (line_number_o, char_number_o);
}

// gpointer g_markup_parse_context_get_user_data (GMarkupParseContext* context);
// void* g_markup_parse_context_get_user_data (::GMarkupParseContext* context);
gpointer base::MarkupParseContextBase::get_user_data () noexcept
{
  typedef void* (*call_wrap_t) (::GMarkupParseContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) g_markup_parse_context_get_user_data;
  auto _temp_ret = call_wrap_v ((::GMarkupParseContext*) (gobj_()));
  return _temp_ret;
}

// gboolean g_markup_parse_context_parse (GMarkupParseContext* context, const gchar* text, gssize text_len, GError ** error);
// gboolean g_markup_parse_context_parse (::GMarkupParseContext* context, const char* text, gssize text_len, GError ** error);
bool base::MarkupParseContextBase::parse (const std::string & text, gssize text_len)
{
  typedef gboolean (*call_wrap_t) (::GMarkupParseContext* context, const char* text, gssize text_len, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_markup_parse_context_parse;
  auto text_len_to_c = text_len;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GMarkupParseContext*) (gobj_()), (const char*) (text_to_c), (gssize) (text_len_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::MarkupParseContextBase::parse (const std::string & text, gssize text_len, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GMarkupParseContext* context, const char* text, gssize text_len, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_markup_parse_context_parse;
  auto text_len_to_c = text_len;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GMarkupParseContext*) (gobj_()), (const char*) (text_to_c), (gssize) (text_len_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gpointer g_markup_parse_context_pop (GMarkupParseContext* context);
// void* g_markup_parse_context_pop (::GMarkupParseContext* context);
gpointer base::MarkupParseContextBase::pop () noexcept
{
  typedef void* (*call_wrap_t) (::GMarkupParseContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) g_markup_parse_context_pop;
  auto _temp_ret = call_wrap_v ((::GMarkupParseContext*) (gobj_()));
  return _temp_ret;
}

// void g_markup_parse_context_push (GMarkupParseContext* context, const GMarkupParser* parser, gpointer user_data);
// void g_markup_parse_context_push (::GMarkupParseContext* context, const ::GMarkupParser* parser, void* user_data);
void base::MarkupParseContextBase::push (const GLib::MarkupParser & parser, void* user_data) noexcept
{
  typedef void (*call_wrap_t) (::GMarkupParseContext* context, const ::GMarkupParser* parser, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_markup_parse_context_push;
  auto user_data_to_c = user_data;
  auto parser_to_c = gi::unwrap (parser, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GMarkupParseContext*) (gobj_()), (const ::GMarkupParser*) (parser_to_c), (void*) (user_data_to_c));
}

// GMarkupParseContext* g_markup_parse_context_ref (GMarkupParseContext* context);
// ::GMarkupParseContext* g_markup_parse_context_ref (::GMarkupParseContext* context);
// IGNORE; marked ignore

// void g_markup_parse_context_unref (GMarkupParseContext* context);
// void g_markup_parse_context_unref (::GMarkupParseContext* context);
// IGNORE; marked ignore


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/markupparsecontext_extra_def_impl.hpp>)
#include <glib/markupparsecontext_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/markupparsecontext_extra_impl.hpp>)
#include <glib/markupparsecontext_extra_impl.hpp>
#endif
#endif

#endif
