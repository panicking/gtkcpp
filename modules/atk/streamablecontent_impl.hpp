// AUTO-GENERATED

#ifndef _GI_ATK_STREAMABLECONTENT_IMPL_HPP_
#define _GI_ATK_STREAMABLECONTENT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Atk {

namespace base {

// const gchar* atk_streamable_content_get_mime_type (AtkStreamableContent* streamable, gint i);
// const char* atk_streamable_content_get_mime_type (::AtkStreamableContent* streamable, gint i);
std::string base::StreamableContentBase::get_mime_type (gint i) noexcept
{
  typedef const char* (*call_wrap_t) (::AtkStreamableContent* streamable, gint i);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_streamable_content_get_mime_type;
  auto i_to_c = i;
  auto _temp_ret = call_wrap_v ((::AtkStreamableContent*) (gobj_()), (gint) (i_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gint atk_streamable_content_get_n_mime_types (AtkStreamableContent* streamable);
// gint atk_streamable_content_get_n_mime_types (::AtkStreamableContent* streamable);
gint base::StreamableContentBase::get_n_mime_types () noexcept
{
  typedef gint (*call_wrap_t) (::AtkStreamableContent* streamable);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_streamable_content_get_n_mime_types;
  auto _temp_ret = call_wrap_v ((::AtkStreamableContent*) (gobj_()));
  return _temp_ret;
}

// GIOChannel* atk_streamable_content_get_stream (AtkStreamableContent* streamable, const gchar* mime_type);
// ::GIOChannel* atk_streamable_content_get_stream (::AtkStreamableContent* streamable, const char* mime_type);
GLib::IOChannel base::StreamableContentBase::get_stream (const std::string & mime_type) noexcept
{
  typedef ::GIOChannel* (*call_wrap_t) (::AtkStreamableContent* streamable, const char* mime_type);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_streamable_content_get_stream;
  auto mime_type_to_c = gi::unwrap (mime_type, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::AtkStreamableContent*) (gobj_()), (const char*) (mime_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const gchar* atk_streamable_content_get_uri (AtkStreamableContent* streamable, const gchar* mime_type);
// const char* atk_streamable_content_get_uri (::AtkStreamableContent* streamable, const char* mime_type);
std::string base::StreamableContentBase::get_uri (const std::string & mime_type) noexcept
{
  typedef const char* (*call_wrap_t) (::AtkStreamableContent* streamable, const char* mime_type);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_streamable_content_get_uri;
  auto mime_type_to_c = gi::unwrap (mime_type, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::AtkStreamableContent*) (gobj_()), (const char*) (mime_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/streamablecontent_extra_def_impl.hpp>)
#include <atk/streamablecontent_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/streamablecontent_extra_impl.hpp>)
#include <atk/streamablecontent_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {

void StreamableContentIfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::AtkStreamableContentIface *methods = (::AtkStreamableContentIface *) interface_struct;
  (void) methods;

  methods->get_n_mime_types = (decltype (methods->get_n_mime_types)) detail::method_wrapper<self, gint (*) (), gi::transfer_none_t>::wrapper<&self::get_n_mime_types_>;
  methods->get_stream = (decltype (methods->get_stream)) detail::method_wrapper<self, GLib::IOChannel (*) (const std::string & mime_type), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::get_stream_>;
}

// const gchar* StreamableContent::get_mime_type (AtkStreamableContent* streamable, gint i);
// const char* StreamableContent::get_mime_type (::AtkStreamableContent* streamable, gint i);
// SKIP; invalid callback return transfer none

// gint StreamableContent::get_n_mime_types (AtkStreamableContent* streamable);
// gint StreamableContent::get_n_mime_types (::AtkStreamableContent* streamable);
gint StreamableContentIfaceClassImpl::get_n_mime_types_ () noexcept
{
  if (!get_struct_()->get_n_mime_types) return gint{};
  typedef gint (*call_wrap_t) (::AtkStreamableContent* streamable);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_n_mime_types;
  auto _temp_ret = call_wrap_v ((::AtkStreamableContent*) (gobj_()));
  return _temp_ret;
}

// GIOChannel* StreamableContent::get_stream (AtkStreamableContent* streamable, const gchar* mime_type);
// ::GIOChannel* StreamableContent::get_stream (::AtkStreamableContent* streamable, const char* mime_type);
GLib::IOChannel StreamableContentIfaceClassImpl::get_stream_ (const std::string & mime_type) noexcept
{
  if (!get_struct_()->get_stream) return GLib::IOChannel{};
  typedef ::GIOChannel* (*call_wrap_t) (::AtkStreamableContent* streamable, const char* mime_type);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_stream;
  auto mime_type_to_c = gi::unwrap (mime_type, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::AtkStreamableContent*) (gobj_()), (const char*) (mime_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const gchar* StreamableContent::get_uri (AtkStreamableContent* streamable, const gchar* mime_type);
// const char* StreamableContent::get_uri (::AtkStreamableContent* streamable, const char* mime_type);
// SKIP; invalid callback return transfer none

} // namespace internal

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
