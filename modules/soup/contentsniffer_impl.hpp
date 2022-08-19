// AUTO-GENERATED

#ifndef _GI_SOUP_CONTENTSNIFFER_IMPL_HPP_
#define _GI_SOUP_CONTENTSNIFFER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Soup {

namespace base {

Soup::SessionFeature ContentSnifferBase::interface_ (gi::interface_tag<Soup::SessionFeature>)
{ return gi::wrap ((Soup::SessionFeature::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

ContentSnifferBase::operator Soup::SessionFeature ()
{ return interface_ (gi::interface_tag<Soup::SessionFeature>()); }

// SoupContentSniffer* soup_content_sniffer_new ();
// ::SoupContentSniffer* soup_content_sniffer_new ();
Soup::ContentSniffer base::ContentSnifferBase::new_ () noexcept
{
  typedef ::SoupContentSniffer* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) soup_content_sniffer_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gsize soup_content_sniffer_get_buffer_size (SoupContentSniffer* sniffer);
// gsize soup_content_sniffer_get_buffer_size (::SoupContentSniffer* sniffer);
gsize base::ContentSnifferBase::get_buffer_size () noexcept
{
  typedef gsize (*call_wrap_t) (::SoupContentSniffer* sniffer);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_content_sniffer_get_buffer_size;
  auto _temp_ret = call_wrap_v ((::SoupContentSniffer*) (gobj_()));
  return _temp_ret;
}

// char* soup_content_sniffer_sniff (SoupContentSniffer* sniffer, SoupMessage* msg, SoupBuffer* buffer, GHashTable** params);
// char* soup_content_sniffer_sniff (::SoupContentSniffer* sniffer, ::SoupMessage* msg, ::SoupBuffer* buffer, ::GHashTable** params);
std::string base::ContentSnifferBase::sniff (Soup::Message msg, Soup::Buffer buffer, std::map<std::string, std::string> * params) noexcept
{
  typedef char* (*call_wrap_t) (::SoupContentSniffer* sniffer, ::SoupMessage* msg, ::SoupBuffer* buffer, ::GHashTable** params);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_content_sniffer_sniff;
  ::GHashTable* params_o {};
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupContentSniffer*) (gobj_()), (::SoupMessage*) (msg_to_c), (::SoupBuffer*) (buffer_to_c), (::GHashTable**) (params ? &params_o : nullptr));
  if (params) *params = gi::detail::wrap_map<std::string, std::string> (params_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::tuple<std::string, std::map<std::string, std::string>> base::ContentSnifferBase::sniff (Soup::Message msg, Soup::Buffer buffer) noexcept
{
  typedef char* (*call_wrap_t) (::SoupContentSniffer* sniffer, ::SoupMessage* msg, ::SoupBuffer* buffer, ::GHashTable** params);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_content_sniffer_sniff;
  ::GHashTable* params_o {};
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupContentSniffer*) (gobj_()), (::SoupMessage*) (msg_to_c), (::SoupBuffer*) (buffer_to_c), (::GHashTable**) (&params_o));
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::detail::wrap_map<std::string, std::string> (params_o, gi::transfer_full));
}


} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/contentsniffer_extra_def_impl.hpp>)
#include <soup/contentsniffer_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/contentsniffer_extra_impl.hpp>)
#include <soup/contentsniffer_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {

void ContentSnifferClassDef::class_init (gpointer class_struct, gpointer )
{
  ::SoupContentSnifferClass *methods = (::SoupContentSnifferClass *) class_struct;
  (void) methods;

  methods->get_buffer_size = (decltype (methods->get_buffer_size)) detail::method_wrapper<self, gsize (*) (), gi::transfer_none_t>::wrapper<&self::get_buffer_size_>;
}

// gsize ContentSniffer::get_buffer_size (SoupContentSniffer* sniffer);
// gsize ContentSniffer::get_buffer_size (::SoupContentSniffer* sniffer);
gsize ContentSnifferClass::get_buffer_size_ () noexcept
{
  if (!get_struct_()->get_buffer_size) return gsize{};
  typedef gsize (*call_wrap_t) (::SoupContentSniffer* sniffer);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_buffer_size;
  auto _temp_ret = call_wrap_v ((::SoupContentSniffer*) (gobj_()));
  return _temp_ret;
}

// char* ContentSniffer::sniff (SoupContentSniffer* sniffer, SoupMessage* msg, SoupBuffer* buffer, GHashTable** params);
// char* ContentSniffer::sniff (::SoupContentSniffer* sniffer, ::SoupMessage* msg, ::SoupBuffer* buffer, ::GHashTable** params);
// SKIP; virtual-method out parameter not supported

} // namespace internal

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
