// AUTO-GENERATED

#ifndef _GI_SOUP_HSTSENFORCERDB_IMPL_HPP_
#define _GI_SOUP_HSTSENFORCERDB_IMPL_HPP_

namespace gi {

namespace repository {

namespace Soup {

namespace base {

// SoupHSTSEnforcer* soup_hsts_enforcer_db_new (const char* filename);
// ::SoupHSTSEnforcerDB* soup_hsts_enforcer_db_new (const char* filename);
Soup::HSTSEnforcerDB base::HSTSEnforcerDBBase::new_ (const std::string & filename) noexcept
{
  typedef ::SoupHSTSEnforcerDB* (*call_wrap_t) (const char* filename);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_hsts_enforcer_db_new;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/hstsenforcerdb_extra_def_impl.hpp>)
#include <soup/hstsenforcerdb_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/hstsenforcerdb_extra_impl.hpp>)
#include <soup/hstsenforcerdb_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {

void HSTSEnforcerDBClassDef::class_init (gpointer class_struct, gpointer )
{
  ::SoupHSTSEnforcerDBClass *methods = (::SoupHSTSEnforcerDBClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
