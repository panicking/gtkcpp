// AUTO-GENERATED

#ifndef _GI_SOUP_CACHE_IMPL_HPP_
#define _GI_SOUP_CACHE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Soup {

namespace base {

Soup::SessionFeature CacheBase::interface_ (gi::interface_tag<Soup::SessionFeature>)
{ return gi::wrap ((Soup::SessionFeature::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

CacheBase::operator Soup::SessionFeature ()
{ return interface_ (gi::interface_tag<Soup::SessionFeature>()); }

// SoupCache* soup_cache_new (const char* cache_dir, SoupCacheType cache_type);
// ::SoupCache* soup_cache_new (const char* cache_dir, ::SoupCacheType cache_type);
Soup::Cache base::CacheBase::new_ (const std::string & cache_dir, Soup::CacheType cache_type) noexcept
{
  typedef ::SoupCache* (*call_wrap_t) (const char* cache_dir, ::SoupCacheType cache_type);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cache_new;
  auto cache_type_to_c = gi::unwrap (cache_type);
  auto cache_dir_to_c = gi::unwrap (cache_dir, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (cache_dir_to_c), (::SoupCacheType) (cache_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Soup::Cache base::CacheBase::new_ (Soup::CacheType cache_type) noexcept
{
  typedef ::SoupCache* (*call_wrap_t) (const char* cache_dir, ::SoupCacheType cache_type);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cache_new;
  auto cache_type_to_c = gi::unwrap (cache_type);
  auto cache_dir_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (cache_dir_to_c), (::SoupCacheType) (cache_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void soup_cache_clear (SoupCache* cache);
// void soup_cache_clear (::SoupCache* cache);
void base::CacheBase::clear () noexcept
{
  typedef void (*call_wrap_t) (::SoupCache* cache);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cache_clear;
  call_wrap_v ((::SoupCache*) (gobj_()));
}

// void soup_cache_dump (SoupCache* cache);
// void soup_cache_dump (::SoupCache* cache);
void base::CacheBase::dump () noexcept
{
  typedef void (*call_wrap_t) (::SoupCache* cache);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cache_dump;
  call_wrap_v ((::SoupCache*) (gobj_()));
}

// void soup_cache_flush (SoupCache* cache);
// void soup_cache_flush (::SoupCache* cache);
void base::CacheBase::flush () noexcept
{
  typedef void (*call_wrap_t) (::SoupCache* cache);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cache_flush;
  call_wrap_v ((::SoupCache*) (gobj_()));
}

// guint soup_cache_get_max_size (SoupCache* cache);
// guint soup_cache_get_max_size (::SoupCache* cache);
guint base::CacheBase::get_max_size () noexcept
{
  typedef guint (*call_wrap_t) (::SoupCache* cache);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cache_get_max_size;
  auto _temp_ret = call_wrap_v ((::SoupCache*) (gobj_()));
  return _temp_ret;
}

// void soup_cache_load (SoupCache* cache);
// void soup_cache_load (::SoupCache* cache);
void base::CacheBase::load () noexcept
{
  typedef void (*call_wrap_t) (::SoupCache* cache);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cache_load;
  call_wrap_v ((::SoupCache*) (gobj_()));
}

// void soup_cache_set_max_size (SoupCache* cache, guint max_size);
// void soup_cache_set_max_size (::SoupCache* cache, guint max_size);
void base::CacheBase::set_max_size (guint max_size) noexcept
{
  typedef void (*call_wrap_t) (::SoupCache* cache, guint max_size);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cache_set_max_size;
  auto max_size_to_c = max_size;
  call_wrap_v ((::SoupCache*) (gobj_()), (guint) (max_size_to_c));
}


} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/cache_extra_def_impl.hpp>)
#include <soup/cache_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/cache_extra_impl.hpp>)
#include <soup/cache_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {

void CacheClassDef::class_init (gpointer class_struct, gpointer )
{
  ::SoupCacheClass *methods = (::SoupCacheClass *) class_struct;
  (void) methods;

  methods->get_cacheability = (decltype (methods->get_cacheability)) detail::method_wrapper<self, Soup::Cacheability (*) (Soup::Message msg), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::get_cacheability_>;
}

// SoupCacheability Cache::get_cacheability (SoupCache* cache, SoupMessage* msg);
// ::SoupCacheability Cache::get_cacheability (::SoupCache* cache, ::SoupMessage* msg);
Soup::Cacheability CacheClass::get_cacheability_ (Soup::Message msg) noexcept
{
  if (!get_struct_()->get_cacheability) return Soup::Cacheability{};
  typedef ::SoupCacheability (*call_wrap_t) (::SoupCache* cache, ::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_cacheability;
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupCache*) (gobj_()), (::SoupMessage*) (msg_to_c));
  return gi::wrap (_temp_ret);
}

} // namespace internal

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
