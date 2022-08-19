// AUTO-GENERATED

#ifndef _GI_SOUP_MESSAGEHEADERSITER_IMPL_HPP_
#define _GI_SOUP_MESSAGEHEADERSITER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Soup {

namespace base {

// gboolean soup_message_headers_iter_next (SoupMessageHeadersIter* iter, const char** name, const char** value);
// gboolean soup_message_headers_iter_next (::SoupMessageHeadersIter** iter, const char** name, const char** value);
// SKIP; inconsistent inout iter pointer depth (1 vs 2)

// void soup_message_headers_iter_init (SoupMessageHeadersIter* iter, SoupMessageHeaders* hdrs);
// void soup_message_headers_iter_init (::SoupMessageHeadersIter* iter, ::SoupMessageHeaders* hdrs);
void base::MessageHeadersIterBase::init (Soup::MessageHeadersIter & iter, Soup::MessageHeaders hdrs) noexcept
{
  typedef void (*call_wrap_t) (::SoupMessageHeadersIter* iter, ::SoupMessageHeaders* hdrs);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_headers_iter_init;
  auto hdrs_to_c = gi::unwrap (hdrs, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<::SoupMessageHeadersIter>::type iter_c;
  call_wrap_v ((::SoupMessageHeadersIter*) ((::SoupMessageHeadersIter*) &iter_c), (::SoupMessageHeaders*) (hdrs_to_c));
  iter = gi::wrap ((::SoupMessageHeadersIter*) &iter_c, gi::transfer_none, gi::direction_out);
}
Soup::MessageHeadersIter base::MessageHeadersIterBase::init (Soup::MessageHeaders hdrs) noexcept
{
  typedef void (*call_wrap_t) (::SoupMessageHeadersIter* iter, ::SoupMessageHeaders* hdrs);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_headers_iter_init;
  auto hdrs_to_c = gi::unwrap (hdrs, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<::SoupMessageHeadersIter>::type iter_c;
  call_wrap_v ((::SoupMessageHeadersIter*) ((::SoupMessageHeadersIter*) &iter_c), (::SoupMessageHeaders*) (hdrs_to_c));
  return gi::wrap ((::SoupMessageHeadersIter*) &iter_c, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/messageheadersiter_extra_def_impl.hpp>)
#include <soup/messageheadersiter_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/messageheadersiter_extra_impl.hpp>)
#include <soup/messageheadersiter_extra_impl.hpp>
#endif
#endif

#endif
