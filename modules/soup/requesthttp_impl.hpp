// AUTO-GENERATED

#ifndef _GI_SOUP_REQUESTHTTP_IMPL_HPP_
#define _GI_SOUP_REQUESTHTTP_IMPL_HPP_

namespace gi {

namespace repository {

namespace Soup {

namespace base {

// SoupMessage* soup_request_http_get_message (SoupRequestHTTP* http);
// ::SoupMessage* soup_request_http_get_message (::SoupRequestHTTP* http);
Soup::Message base::RequestHTTPBase::get_message () noexcept
{
  typedef ::SoupMessage* (*call_wrap_t) (::SoupRequestHTTP* http);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_request_http_get_message;
  auto _temp_ret = call_wrap_v ((::SoupRequestHTTP*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/requesthttp_extra_def_impl.hpp>)
#include <soup/requesthttp_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/requesthttp_extra_impl.hpp>)
#include <soup/requesthttp_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {

void RequestHTTPClassDef::class_init (gpointer class_struct, gpointer )
{
  ::SoupRequestHTTPClass *methods = (::SoupRequestHTTPClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
