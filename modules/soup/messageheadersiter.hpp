// AUTO-GENERATED

#ifndef _GI_SOUP_MESSAGEHEADERSITER_HPP_
#define _GI_SOUP_MESSAGEHEADERSITER_HPP_


namespace gi {

namespace repository {

namespace Soup {

class MessageHeaders;

class MessageHeadersIter;

namespace base {


#define GI_SOUP_MESSAGEHEADERSITER_BASE base::MessageHeadersIterBase
class MessageHeadersIterBase : public gi::detail::CBoxedWrapper<MessageHeadersIterBase, ::SoupMessageHeadersIter>
{
typedef gi::detail::CBoxedWrapper<MessageHeadersIterBase, ::SoupMessageHeadersIter> super_type;
public:

MessageHeadersIterBase (std::nullptr_t = nullptr) : super_type() {}

// gboolean soup_message_headers_iter_next (SoupMessageHeadersIter* iter, const char** name, const char** value);
// gboolean soup_message_headers_iter_next (::SoupMessageHeadersIter** iter, const char** name, const char** value);
// SKIP; inconsistent inout iter pointer depth (1 vs 2)

// void soup_message_headers_iter_init (SoupMessageHeadersIter* iter, SoupMessageHeaders* hdrs);
// void soup_message_headers_iter_init (::SoupMessageHeadersIter* iter, ::SoupMessageHeaders* hdrs);
static GI_INLINE_DECL void init (Soup::MessageHeadersIter & iter, Soup::MessageHeaders hdrs) noexcept;
static GI_INLINE_DECL Soup::MessageHeadersIter init (Soup::MessageHeaders hdrs) noexcept;

}; // class

} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/messageheadersiter_extra_def.hpp>)
#include <soup/messageheadersiter_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/messageheadersiter_extra.hpp>)
#include <soup/messageheadersiter_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

class MessageHeadersIter : public GI_SOUP_MESSAGEHEADERSITER_BASE
{ typedef GI_SOUP_MESSAGEHEADERSITER_BASE super_type; using super_type::super_type; };

} // namespace Soup

template<> struct declare_cpptype_of<::SoupMessageHeadersIter>
{ typedef Soup::MessageHeadersIter type; }; 

} // namespace repository

} // namespace gi

#endif
