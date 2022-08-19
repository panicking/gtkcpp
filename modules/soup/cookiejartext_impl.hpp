// AUTO-GENERATED

#ifndef _GI_SOUP_COOKIEJARTEXT_IMPL_HPP_
#define _GI_SOUP_COOKIEJARTEXT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Soup {

namespace base {

// SoupCookieJar* soup_cookie_jar_text_new (const char* filename, gboolean read_only);
// ::SoupCookieJarText* soup_cookie_jar_text_new (const char* filename, gboolean read_only);
Soup::CookieJarText base::CookieJarTextBase::new_ (const std::string & filename, gboolean read_only) noexcept
{
  typedef ::SoupCookieJarText* (*call_wrap_t) (const char* filename, gboolean read_only);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cookie_jar_text_new;
  auto read_only_to_c = read_only;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (gboolean) (read_only_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/cookiejartext_extra_def_impl.hpp>)
#include <soup/cookiejartext_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/cookiejartext_extra_impl.hpp>)
#include <soup/cookiejartext_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {

void CookieJarTextClassDef::class_init (gpointer class_struct, gpointer )
{
  ::SoupCookieJarTextClass *methods = (::SoupCookieJarTextClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
