// AUTO-GENERATED

#ifndef _GI_SOUP_MULTIPART_HPP_
#define _GI_SOUP_MULTIPART_HPP_


namespace gi {

namespace repository {

namespace Soup {

class Buffer;
class MessageBody;
class MessageHeaders;

class Multipart;

namespace base {


#define GI_SOUP_MULTIPART_BASE base::MultipartBase
class MultipartBase : public gi::detail::GBoxedWrapper<MultipartBase, ::SoupMultipart>
{
typedef gi::detail::GBoxedWrapper<MultipartBase, ::SoupMultipart> super_type;
public:

MultipartBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return soup_multipart_get_type(); } 

// SoupMultipart* soup_multipart_new (const char* mime_type);
// ::SoupMultipart* soup_multipart_new (const char* mime_type);
static GI_INLINE_DECL Soup::Multipart new_ (const std::string & mime_type) noexcept;

// SoupMultipart* soup_multipart_new_from_message (SoupMessageHeaders* headers, SoupMessageBody* body);
// ::SoupMultipart* soup_multipart_new_from_message (::SoupMessageHeaders* headers, ::SoupMessageBody* body);
static GI_INLINE_DECL Soup::Multipart new_from_message (Soup::MessageHeaders headers, Soup::MessageBody body) noexcept;

// void soup_multipart_append_form_file (SoupMultipart* multipart, const char* control_name, const char* filename, const char* content_type, SoupBuffer* body);
// void soup_multipart_append_form_file (::SoupMultipart* multipart, const char* control_name, const char* filename, const char* content_type, ::SoupBuffer* body);
GI_INLINE_DECL void append_form_file (const std::string & control_name, const std::string & filename, const std::string & content_type, Soup::Buffer body) noexcept;

// void soup_multipart_append_form_string (SoupMultipart* multipart, const char* control_name, const char* data);
// void soup_multipart_append_form_string (::SoupMultipart* multipart, const char* control_name, const char* data);
GI_INLINE_DECL void append_form_string (const std::string & control_name, const std::string & data) noexcept;

// void soup_multipart_append_part (SoupMultipart* multipart, SoupMessageHeaders* headers, SoupBuffer* body);
// void soup_multipart_append_part (::SoupMultipart* multipart, ::SoupMessageHeaders* headers, ::SoupBuffer* body);
GI_INLINE_DECL void append_part (Soup::MessageHeaders headers, Soup::Buffer body) noexcept;

// void soup_multipart_free (SoupMultipart* multipart);
// void soup_multipart_free (::SoupMultipart* multipart);
// IGNORE; marked ignore

// int soup_multipart_get_length (SoupMultipart* multipart);
// gint soup_multipart_get_length (::SoupMultipart* multipart);
GI_INLINE_DECL gint get_length () noexcept;

// gboolean soup_multipart_get_part (SoupMultipart* multipart, int part, SoupMessageHeaders** headers, SoupBuffer** body);
// gboolean soup_multipart_get_part (::SoupMultipart* multipart, gint part, ::SoupMessageHeaders** headers, ::SoupBuffer** body);
GI_INLINE_DECL bool get_part (gint part, Soup::MessageHeaders & headers, Soup::Buffer & body) noexcept;
GI_INLINE_DECL std::tuple<bool, Soup::MessageHeaders, Soup::Buffer> get_part (gint part) noexcept;

// void soup_multipart_to_message (SoupMultipart* multipart, SoupMessageHeaders* dest_headers, SoupMessageBody* dest_body);
// void soup_multipart_to_message (::SoupMultipart* multipart, ::SoupMessageHeaders* dest_headers, ::SoupMessageBody* dest_body);
GI_INLINE_DECL void to_message (Soup::MessageHeaders dest_headers, Soup::MessageBody dest_body) noexcept;

}; // class

} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/multipart_extra_def.hpp>)
#include <soup/multipart_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/multipart_extra.hpp>)
#include <soup/multipart_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

class Multipart : public GI_SOUP_MULTIPART_BASE
{ typedef GI_SOUP_MULTIPART_BASE super_type; using super_type::super_type; };

} // namespace Soup

template<> struct declare_cpptype_of<::SoupMultipart>
{ typedef Soup::Multipart type; }; 

} // namespace repository

} // namespace gi

#endif
