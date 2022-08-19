// AUTO-GENERATED

#ifndef _GI_SOUP_MULTIPART_IMPL_HPP_
#define _GI_SOUP_MULTIPART_IMPL_HPP_

namespace gi {

namespace repository {

namespace Soup {

namespace base {

// SoupMultipart* soup_multipart_new (const char* mime_type);
// ::SoupMultipart* soup_multipart_new (const char* mime_type);
Soup::Multipart base::MultipartBase::new_ (const std::string & mime_type) noexcept
{
  typedef ::SoupMultipart* (*call_wrap_t) (const char* mime_type);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_multipart_new;
  auto mime_type_to_c = gi::unwrap (mime_type, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (mime_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// SoupMultipart* soup_multipart_new_from_message (SoupMessageHeaders* headers, SoupMessageBody* body);
// ::SoupMultipart* soup_multipart_new_from_message (::SoupMessageHeaders* headers, ::SoupMessageBody* body);
Soup::Multipart base::MultipartBase::new_from_message (Soup::MessageHeaders headers, Soup::MessageBody body) noexcept
{
  typedef ::SoupMultipart* (*call_wrap_t) (::SoupMessageHeaders* headers, ::SoupMessageBody* body);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_multipart_new_from_message;
  auto body_to_c = gi::unwrap (body, gi::transfer_none, gi::direction_in);
  auto headers_to_c = gi::unwrap (headers, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupMessageHeaders*) (headers_to_c), (::SoupMessageBody*) (body_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void soup_multipart_append_form_file (SoupMultipart* multipart, const char* control_name, const char* filename, const char* content_type, SoupBuffer* body);
// void soup_multipart_append_form_file (::SoupMultipart* multipart, const char* control_name, const char* filename, const char* content_type, ::SoupBuffer* body);
void base::MultipartBase::append_form_file (const std::string & control_name, const std::string & filename, const std::string & content_type, Soup::Buffer body) noexcept
{
  typedef void (*call_wrap_t) (::SoupMultipart* multipart, const char* control_name, const char* filename, const char* content_type, ::SoupBuffer* body);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_multipart_append_form_file;
  auto body_to_c = gi::unwrap (body, gi::transfer_none, gi::direction_in);
  auto content_type_to_c = gi::unwrap (content_type, gi::transfer_none, gi::direction_in);
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  auto control_name_to_c = gi::unwrap (control_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupMultipart*) (gobj_()), (const char*) (control_name_to_c), (const char*) (filename_to_c), (const char*) (content_type_to_c), (::SoupBuffer*) (body_to_c));
}

// void soup_multipart_append_form_string (SoupMultipart* multipart, const char* control_name, const char* data);
// void soup_multipart_append_form_string (::SoupMultipart* multipart, const char* control_name, const char* data);
void base::MultipartBase::append_form_string (const std::string & control_name, const std::string & data) noexcept
{
  typedef void (*call_wrap_t) (::SoupMultipart* multipart, const char* control_name, const char* data);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_multipart_append_form_string;
  auto data_to_c = gi::unwrap (data, gi::transfer_none, gi::direction_in);
  auto control_name_to_c = gi::unwrap (control_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupMultipart*) (gobj_()), (const char*) (control_name_to_c), (const char*) (data_to_c));
}

// void soup_multipart_append_part (SoupMultipart* multipart, SoupMessageHeaders* headers, SoupBuffer* body);
// void soup_multipart_append_part (::SoupMultipart* multipart, ::SoupMessageHeaders* headers, ::SoupBuffer* body);
void base::MultipartBase::append_part (Soup::MessageHeaders headers, Soup::Buffer body) noexcept
{
  typedef void (*call_wrap_t) (::SoupMultipart* multipart, ::SoupMessageHeaders* headers, ::SoupBuffer* body);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_multipart_append_part;
  auto body_to_c = gi::unwrap (body, gi::transfer_none, gi::direction_in);
  auto headers_to_c = gi::unwrap (headers, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupMultipart*) (gobj_()), (::SoupMessageHeaders*) (headers_to_c), (::SoupBuffer*) (body_to_c));
}

// void soup_multipart_free (SoupMultipart* multipart);
// void soup_multipart_free (::SoupMultipart* multipart);
// IGNORE; marked ignore

// int soup_multipart_get_length (SoupMultipart* multipart);
// gint soup_multipart_get_length (::SoupMultipart* multipart);
gint base::MultipartBase::get_length () noexcept
{
  typedef gint (*call_wrap_t) (::SoupMultipart* multipart);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_multipart_get_length;
  auto _temp_ret = call_wrap_v ((::SoupMultipart*) (gobj_()));
  return _temp_ret;
}

// gboolean soup_multipart_get_part (SoupMultipart* multipart, int part, SoupMessageHeaders** headers, SoupBuffer** body);
// gboolean soup_multipart_get_part (::SoupMultipart* multipart, gint part, ::SoupMessageHeaders** headers, ::SoupBuffer** body);
bool base::MultipartBase::get_part (gint part, Soup::MessageHeaders & headers, Soup::Buffer & body) noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupMultipart* multipart, gint part, ::SoupMessageHeaders** headers, ::SoupBuffer** body);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_multipart_get_part;
  ::SoupBuffer* body_o {};
  ::SoupMessageHeaders* headers_o {};
  auto part_to_c = part;
  auto _temp_ret = call_wrap_v ((::SoupMultipart*) (gobj_()), (gint) (part_to_c), (::SoupMessageHeaders**) (&headers_o), (::SoupBuffer**) (&body_o));
  body = gi::wrap (body_o, gi::transfer_none, gi::direction_out);
  headers = gi::wrap (headers_o, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Soup::MessageHeaders, Soup::Buffer> base::MultipartBase::get_part (gint part) noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupMultipart* multipart, gint part, ::SoupMessageHeaders** headers, ::SoupBuffer** body);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_multipart_get_part;
  ::SoupBuffer* body_o {};
  ::SoupMessageHeaders* headers_o {};
  auto part_to_c = part;
  auto _temp_ret = call_wrap_v ((::SoupMultipart*) (gobj_()), (gint) (part_to_c), (::SoupMessageHeaders**) (&headers_o), (::SoupBuffer**) (&body_o));
  return std::make_tuple (_temp_ret, gi::wrap (headers_o, gi::transfer_none, gi::direction_out), gi::wrap (body_o, gi::transfer_none, gi::direction_out));
}

// void soup_multipart_to_message (SoupMultipart* multipart, SoupMessageHeaders* dest_headers, SoupMessageBody* dest_body);
// void soup_multipart_to_message (::SoupMultipart* multipart, ::SoupMessageHeaders* dest_headers, ::SoupMessageBody* dest_body);
void base::MultipartBase::to_message (Soup::MessageHeaders dest_headers, Soup::MessageBody dest_body) noexcept
{
  typedef void (*call_wrap_t) (::SoupMultipart* multipart, ::SoupMessageHeaders* dest_headers, ::SoupMessageBody* dest_body);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_multipart_to_message;
  auto dest_body_to_c = gi::unwrap (dest_body, gi::transfer_none, gi::direction_in);
  auto dest_headers_to_c = gi::unwrap (dest_headers, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupMultipart*) (gobj_()), (::SoupMessageHeaders*) (dest_headers_to_c), (::SoupMessageBody*) (dest_body_to_c));
}


} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/multipart_extra_def_impl.hpp>)
#include <soup/multipart_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/multipart_extra_impl.hpp>)
#include <soup/multipart_extra_impl.hpp>
#endif
#endif

#endif
