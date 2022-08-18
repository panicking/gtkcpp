// AUTO-GENERATED

#ifndef _GI_GLIB_MARKUPPARSECONTEXT_HPP_
#define _GI_GLIB_MARKUPPARSECONTEXT_HPP_


namespace gi {

namespace repository {

namespace GLib {

class MarkupParser;

class MarkupParseContext;

namespace base {


#define GI_GLIB_MARKUPPARSECONTEXT_BASE base::MarkupParseContextBase
class MarkupParseContextBase : public gi::detail::GBoxedWrapper<MarkupParseContextBase, ::GMarkupParseContext>
{
typedef gi::detail::GBoxedWrapper<MarkupParseContextBase, ::GMarkupParseContext> super_type;
public:

MarkupParseContextBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_markup_parse_context_get_type(); } 

// GMarkupParseContext* g_markup_parse_context_new (const GMarkupParser* parser, GMarkupParseFlags flags, gpointer user_data, GDestroyNotify user_data_dnotify);
// ::GMarkupParseContext* g_markup_parse_context_new (const ::GMarkupParser* parser, ::GMarkupParseFlags flags, void* user_data, GLib::DestroyNotify::cfunction_type user_data_dnotify);
// SKIP; callback misses closure info

// gboolean g_markup_parse_context_end_parse (GMarkupParseContext* context, GError ** error);
// gboolean g_markup_parse_context_end_parse (::GMarkupParseContext* context, GError ** error);
GI_INLINE_DECL bool end_parse ();
GI_INLINE_DECL bool end_parse (GLib::Error * _error) noexcept;

// void g_markup_parse_context_free (GMarkupParseContext* context);
// void g_markup_parse_context_free (::GMarkupParseContext* context);
// IGNORE; marked ignore

// const gchar* g_markup_parse_context_get_element (GMarkupParseContext* context);
// const char* g_markup_parse_context_get_element (::GMarkupParseContext* context);
GI_INLINE_DECL std::string get_element () noexcept;

// const GSList* g_markup_parse_context_get_element_stack (GMarkupParseContext* context);
// const ::GSList* g_markup_parse_context_get_element_stack (::GMarkupParseContext* context);
GI_INLINE_DECL std::vector<gpointer> get_element_stack () noexcept;

// void g_markup_parse_context_get_position (GMarkupParseContext* context, gint* line_number, gint* char_number);
// void g_markup_parse_context_get_position (::GMarkupParseContext* context, gint* line_number, gint* char_number);
GI_INLINE_DECL void get_position (gint * line_number = nullptr, gint * char_number = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_position () noexcept;

// gpointer g_markup_parse_context_get_user_data (GMarkupParseContext* context);
// void* g_markup_parse_context_get_user_data (::GMarkupParseContext* context);
GI_INLINE_DECL gpointer get_user_data () noexcept;

// gboolean g_markup_parse_context_parse (GMarkupParseContext* context, const gchar* text, gssize text_len, GError ** error);
// gboolean g_markup_parse_context_parse (::GMarkupParseContext* context, const char* text, gssize text_len, GError ** error);
GI_INLINE_DECL bool parse (const std::string & text, gssize text_len);
GI_INLINE_DECL bool parse (const std::string & text, gssize text_len, GLib::Error * _error) noexcept;

// gpointer g_markup_parse_context_pop (GMarkupParseContext* context);
// void* g_markup_parse_context_pop (::GMarkupParseContext* context);
GI_INLINE_DECL gpointer pop () noexcept;

// void g_markup_parse_context_push (GMarkupParseContext* context, const GMarkupParser* parser, gpointer user_data);
// void g_markup_parse_context_push (::GMarkupParseContext* context, const ::GMarkupParser* parser, void* user_data);
GI_INLINE_DECL void push (const GLib::MarkupParser & parser, void* user_data) noexcept;

// GMarkupParseContext* g_markup_parse_context_ref (GMarkupParseContext* context);
// ::GMarkupParseContext* g_markup_parse_context_ref (::GMarkupParseContext* context);
// IGNORE; marked ignore

// void g_markup_parse_context_unref (GMarkupParseContext* context);
// void g_markup_parse_context_unref (::GMarkupParseContext* context);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/markupparsecontext_extra_def.hpp>)
#include <glib/markupparsecontext_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/markupparsecontext_extra.hpp>)
#include <glib/markupparsecontext_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class MarkupParseContext : public GI_GLIB_MARKUPPARSECONTEXT_BASE
{ typedef GI_GLIB_MARKUPPARSECONTEXT_BASE super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GMarkupParseContext>
{ typedef GLib::MarkupParseContext type; }; 

} // namespace repository

} // namespace gi

#endif
