// AUTO-GENERATED

#ifndef _GI_SOUP_MESSAGEHEADERS_HPP_
#define _GI_SOUP_MESSAGEHEADERS_HPP_


namespace gi {

namespace repository {

namespace Soup {

class Range;

class MessageHeaders;

namespace base {


#define GI_SOUP_MESSAGEHEADERS_BASE base::MessageHeadersBase
class MessageHeadersBase : public gi::detail::GBoxedWrapper<MessageHeadersBase, ::SoupMessageHeaders>
{
typedef gi::detail::GBoxedWrapper<MessageHeadersBase, ::SoupMessageHeaders> super_type;
public:

MessageHeadersBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return soup_message_headers_get_type(); } 

// SoupMessageHeaders* soup_message_headers_new (SoupMessageHeadersType type);
// ::SoupMessageHeaders* soup_message_headers_new (::SoupMessageHeadersType type);
static GI_INLINE_DECL Soup::MessageHeaders new_ (Soup::MessageHeadersType type) noexcept;

// void soup_message_headers_append (SoupMessageHeaders* hdrs, const char* name, const char* value);
// void soup_message_headers_append (::SoupMessageHeaders* hdrs, const char* name, const char* value);
GI_INLINE_DECL void append (const std::string & name, const std::string & value) noexcept;

// void soup_message_headers_clean_connection_headers (SoupMessageHeaders* hdrs);
// void soup_message_headers_clean_connection_headers (::SoupMessageHeaders* hdrs);
GI_INLINE_DECL void clean_connection_headers () noexcept;

// void soup_message_headers_clear (SoupMessageHeaders* hdrs);
// void soup_message_headers_clear (::SoupMessageHeaders* hdrs);
GI_INLINE_DECL void clear () noexcept;

// void soup_message_headers_foreach (SoupMessageHeaders* hdrs, SoupMessageHeadersForeachFunc func, gpointer user_data);
// void soup_message_headers_foreach (::SoupMessageHeaders* hdrs, Soup::MessageHeadersForeachFunc::cfunction_type func, void* user_data);
GI_INLINE_DECL void foreach (Soup::MessageHeadersForeachFunc func) noexcept;

// void soup_message_headers_free (SoupMessageHeaders* hdrs);
// void soup_message_headers_free (::SoupMessageHeaders* hdrs);
// IGNORE; marked ignore

// void soup_message_headers_free_ranges (SoupMessageHeaders* hdrs, SoupRange* ranges);
// void soup_message_headers_free_ranges (::SoupMessageHeaders* hdrs, ::SoupRange* ranges);
GI_INLINE_DECL void free_ranges (Soup::Range ranges) noexcept;

// const char* soup_message_headers_get (SoupMessageHeaders* hdrs, const char* name);
// const char* soup_message_headers_get (::SoupMessageHeaders* hdrs, const char* name);
// IGNORE; deprecated

// gboolean soup_message_headers_get_content_disposition (SoupMessageHeaders* hdrs, char** disposition, GHashTable** params);
// gboolean soup_message_headers_get_content_disposition (::SoupMessageHeaders* hdrs, char** disposition, ::GHashTable** params);
GI_INLINE_DECL bool get_content_disposition (std::string & disposition, std::map<std::string, std::string> & params) noexcept;
GI_INLINE_DECL std::tuple<bool, std::string, std::map<std::string, std::string>> get_content_disposition () noexcept;

// goffset soup_message_headers_get_content_length (SoupMessageHeaders* hdrs);
// gint64 soup_message_headers_get_content_length (::SoupMessageHeaders* hdrs);
GI_INLINE_DECL gint64 get_content_length () noexcept;

// gboolean soup_message_headers_get_content_range (SoupMessageHeaders* hdrs, goffset* start, goffset* end, goffset* total_length);
// gboolean soup_message_headers_get_content_range (::SoupMessageHeaders* hdrs, gint64* start, gint64* end, gint64* total_length);
GI_INLINE_DECL bool get_content_range (gint64 & start, gint64 & end, gint64 * total_length = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, gint64, gint64, gint64> get_content_range () noexcept;

// const char* soup_message_headers_get_content_type (SoupMessageHeaders* hdrs, GHashTable** params);
// const char* soup_message_headers_get_content_type (::SoupMessageHeaders* hdrs, ::GHashTable** params);
GI_INLINE_DECL std::string get_content_type (std::map<std::string, std::string> * params = nullptr) noexcept;
GI_INLINE_DECL std::tuple<std::string, std::map<std::string, std::string>> get_content_type () noexcept;

// SoupEncoding soup_message_headers_get_encoding (SoupMessageHeaders* hdrs);
// ::SoupEncoding soup_message_headers_get_encoding (::SoupMessageHeaders* hdrs);
GI_INLINE_DECL Soup::Encoding get_encoding () noexcept;

// SoupExpectation soup_message_headers_get_expectations (SoupMessageHeaders* hdrs);
// ::SoupExpectation soup_message_headers_get_expectations (::SoupMessageHeaders* hdrs);
GI_INLINE_DECL Soup::Expectation get_expectations () noexcept;

// SoupMessageHeadersType soup_message_headers_get_headers_type (SoupMessageHeaders* hdrs);
// ::SoupMessageHeadersType soup_message_headers_get_headers_type (::SoupMessageHeaders* hdrs);
GI_INLINE_DECL Soup::MessageHeadersType get_headers_type () noexcept;

// const char* soup_message_headers_get_list (SoupMessageHeaders* hdrs, const char* name);
// const char* soup_message_headers_get_list (::SoupMessageHeaders* hdrs, const char* name);
GI_INLINE_DECL std::string get_list (const std::string & name) noexcept;

// const char* soup_message_headers_get_one (SoupMessageHeaders* hdrs, const char* name);
// const char* soup_message_headers_get_one (::SoupMessageHeaders* hdrs, const char* name);
GI_INLINE_DECL std::string get_one (const std::string & name) noexcept;

// gboolean soup_message_headers_get_ranges (SoupMessageHeaders* hdrs, goffset total_length, SoupRange** ranges, int* length);
// gboolean soup_message_headers_get_ranges (::SoupMessageHeaders* hdrs, gint64 total_length, ::SoupRange*** ranges, gint* length);
// SKIP; inconsistent out ranges pointer depth (2 vs 3)

// gboolean soup_message_headers_header_contains (SoupMessageHeaders* hdrs, const char* name, const char* token);
// gboolean soup_message_headers_header_contains (::SoupMessageHeaders* hdrs, const char* name, const char* token);
GI_INLINE_DECL bool header_contains (const std::string & name, const std::string & token) noexcept;

// gboolean soup_message_headers_header_equals (SoupMessageHeaders* hdrs, const char* name, const char* value);
// gboolean soup_message_headers_header_equals (::SoupMessageHeaders* hdrs, const char* name, const char* value);
GI_INLINE_DECL bool header_equals (const std::string & name, const std::string & value) noexcept;

// void soup_message_headers_remove (SoupMessageHeaders* hdrs, const char* name);
// void soup_message_headers_remove (::SoupMessageHeaders* hdrs, const char* name);
GI_INLINE_DECL void remove (const std::string & name) noexcept;

// void soup_message_headers_replace (SoupMessageHeaders* hdrs, const char* name, const char* value);
// void soup_message_headers_replace (::SoupMessageHeaders* hdrs, const char* name, const char* value);
GI_INLINE_DECL void replace (const std::string & name, const std::string & value) noexcept;

// void soup_message_headers_set_content_disposition (SoupMessageHeaders* hdrs, const char* disposition, GHashTable* params);
// void soup_message_headers_set_content_disposition (::SoupMessageHeaders* hdrs, const char* disposition, ::GHashTable* params);
GI_INLINE_DECL void set_content_disposition (const std::string & disposition, const std::map<std::string, std::string> & params) noexcept;

// void soup_message_headers_set_content_length (SoupMessageHeaders* hdrs, goffset content_length);
// void soup_message_headers_set_content_length (::SoupMessageHeaders* hdrs, gint64 content_length);
GI_INLINE_DECL void set_content_length (gint64 content_length) noexcept;

// void soup_message_headers_set_content_range (SoupMessageHeaders* hdrs, goffset start, goffset end, goffset total_length);
// void soup_message_headers_set_content_range (::SoupMessageHeaders* hdrs, gint64 start, gint64 end, gint64 total_length);
GI_INLINE_DECL void set_content_range (gint64 start, gint64 end, gint64 total_length) noexcept;

// void soup_message_headers_set_content_type (SoupMessageHeaders* hdrs, const char* content_type, GHashTable* params);
// void soup_message_headers_set_content_type (::SoupMessageHeaders* hdrs, const char* content_type, ::GHashTable* params);
GI_INLINE_DECL void set_content_type (const std::string & content_type, const std::map<std::string, std::string> & params) noexcept;

// void soup_message_headers_set_encoding (SoupMessageHeaders* hdrs, SoupEncoding encoding);
// void soup_message_headers_set_encoding (::SoupMessageHeaders* hdrs, ::SoupEncoding encoding);
GI_INLINE_DECL void set_encoding (Soup::Encoding encoding) noexcept;

// void soup_message_headers_set_expectations (SoupMessageHeaders* hdrs, SoupExpectation expectations);
// void soup_message_headers_set_expectations (::SoupMessageHeaders* hdrs, ::SoupExpectation expectations);
GI_INLINE_DECL void set_expectations (Soup::Expectation expectations) noexcept;

// void soup_message_headers_set_range (SoupMessageHeaders* hdrs, goffset start, goffset end);
// void soup_message_headers_set_range (::SoupMessageHeaders* hdrs, gint64 start, gint64 end);
GI_INLINE_DECL void set_range (gint64 start, gint64 end) noexcept;

// void soup_message_headers_set_ranges (SoupMessageHeaders* hdrs, SoupRange* ranges, int length);
// void soup_message_headers_set_ranges (::SoupMessageHeaders* hdrs, ::SoupRange* ranges, gint length);
GI_INLINE_DECL void set_ranges (Soup::Range ranges, gint length) noexcept;

}; // class

} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/messageheaders_extra_def.hpp>)
#include <soup/messageheaders_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/messageheaders_extra.hpp>)
#include <soup/messageheaders_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

class MessageHeaders : public GI_SOUP_MESSAGEHEADERS_BASE
{ typedef GI_SOUP_MESSAGEHEADERS_BASE super_type; using super_type::super_type; };

} // namespace Soup

template<> struct declare_cpptype_of<::SoupMessageHeaders>
{ typedef Soup::MessageHeaders type; }; 

} // namespace repository

} // namespace gi

#endif
