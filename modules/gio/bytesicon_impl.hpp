// AUTO-GENERATED

#ifndef _GI_GIO_BYTESICON_IMPL_HPP_
#define _GI_GIO_BYTESICON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::Icon BytesIconBase::interface_ (gi::interface_tag<Gio::Icon>)
{ return gi::wrap ((Gio::Icon::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

BytesIconBase::operator Gio::Icon ()
{ return interface_ (gi::interface_tag<Gio::Icon>()); }

Gio::LoadableIcon BytesIconBase::interface_ (gi::interface_tag<Gio::LoadableIcon>)
{ return gi::wrap ((Gio::LoadableIcon::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

BytesIconBase::operator Gio::LoadableIcon ()
{ return interface_ (gi::interface_tag<Gio::LoadableIcon>()); }

// GIcon* g_bytes_icon_new (GBytes* bytes);
// ::GBytesIcon* g_bytes_icon_new (::GBytes* bytes);
Gio::BytesIcon base::BytesIconBase::new_ (GLib::Bytes bytes) noexcept
{
  typedef ::GBytesIcon* (*call_wrap_t) (::GBytes* bytes);
  call_wrap_t call_wrap_v = (call_wrap_t) g_bytes_icon_new;
  auto bytes_to_c = gi::unwrap (bytes, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GBytes*) (bytes_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GBytes* g_bytes_icon_get_bytes (GBytesIcon* icon);
// ::GBytes* g_bytes_icon_get_bytes (::GBytesIcon* icon);
GLib::Bytes base::BytesIconBase::get_bytes () noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::GBytesIcon* icon);
  call_wrap_t call_wrap_v = (call_wrap_t) g_bytes_icon_get_bytes;
  auto _temp_ret = call_wrap_v ((::GBytesIcon*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/bytesicon_extra_def_impl.hpp>)
#include <gio/bytesicon_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/bytesicon_extra_impl.hpp>)
#include <gio/bytesicon_extra_impl.hpp>
#endif
#endif

#endif
