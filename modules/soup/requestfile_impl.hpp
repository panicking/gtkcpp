// AUTO-GENERATED

#ifndef _GI_SOUP_REQUESTFILE_IMPL_HPP_
#define _GI_SOUP_REQUESTFILE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Soup {

namespace base {

// GFile* soup_request_file_get_file (SoupRequestFile* file);
// ::GFile* soup_request_file_get_file (::SoupRequestFile* file);
Gio::File base::RequestFileBase::get_file () noexcept
{
  typedef ::GFile* (*call_wrap_t) (::SoupRequestFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_request_file_get_file;
  auto _temp_ret = call_wrap_v ((::SoupRequestFile*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/requestfile_extra_def_impl.hpp>)
#include <soup/requestfile_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/requestfile_extra_impl.hpp>)
#include <soup/requestfile_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {

void RequestFileClassDef::class_init (gpointer class_struct, gpointer )
{
  ::SoupRequestFileClass *methods = (::SoupRequestFileClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
