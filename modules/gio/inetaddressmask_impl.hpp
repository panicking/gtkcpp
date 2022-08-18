// AUTO-GENERATED

#ifndef _GI_GIO_INETADDRESSMASK_IMPL_HPP_
#define _GI_GIO_INETADDRESSMASK_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::Initable InetAddressMaskBase::interface_ (gi::interface_tag<Gio::Initable>)
{ return gi::wrap ((Gio::Initable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

InetAddressMaskBase::operator Gio::Initable ()
{ return interface_ (gi::interface_tag<Gio::Initable>()); }

// GInetAddressMask* g_inet_address_mask_new (GInetAddress* addr, guint length, GError ** error);
// ::GInetAddressMask* g_inet_address_mask_new (::GInetAddress* addr, guint length, GError ** error);
Gio::InetAddressMask base::InetAddressMaskBase::new_ (Gio::InetAddress addr, guint length)
{
  typedef ::GInetAddressMask* (*call_wrap_t) (::GInetAddress* addr, guint length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_inet_address_mask_new;
  auto length_to_c = length;
  auto addr_to_c = gi::unwrap (addr, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInetAddress*) (addr_to_c), (guint) (length_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::InetAddressMask base::InetAddressMaskBase::new_ (Gio::InetAddress addr, guint length, GLib::Error * _error) noexcept
{
  typedef ::GInetAddressMask* (*call_wrap_t) (::GInetAddress* addr, guint length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_inet_address_mask_new;
  auto length_to_c = length;
  auto addr_to_c = gi::unwrap (addr, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInetAddress*) (addr_to_c), (guint) (length_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GInetAddressMask* g_inet_address_mask_new_from_string (const gchar* mask_string, GError ** error);
// ::GInetAddressMask* g_inet_address_mask_new_from_string (const char* mask_string, GError ** error);
Gio::InetAddressMask base::InetAddressMaskBase::new_from_string (const std::string & mask_string)
{
  typedef ::GInetAddressMask* (*call_wrap_t) (const char* mask_string, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_inet_address_mask_new_from_string;
  auto mask_string_to_c = gi::unwrap (mask_string, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (mask_string_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::InetAddressMask base::InetAddressMaskBase::new_from_string (const std::string & mask_string, GLib::Error * _error) noexcept
{
  typedef ::GInetAddressMask* (*call_wrap_t) (const char* mask_string, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_inet_address_mask_new_from_string;
  auto mask_string_to_c = gi::unwrap (mask_string, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (mask_string_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean g_inet_address_mask_equal (GInetAddressMask* mask, GInetAddressMask* mask2);
// gboolean g_inet_address_mask_equal (::GInetAddressMask* mask, ::GInetAddressMask* mask2);
bool base::InetAddressMaskBase::equal (Gio::InetAddressMask mask2) noexcept
{
  typedef gboolean (*call_wrap_t) (::GInetAddressMask* mask, ::GInetAddressMask* mask2);
  call_wrap_t call_wrap_v = (call_wrap_t) g_inet_address_mask_equal;
  auto mask2_to_c = gi::unwrap (mask2, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GInetAddressMask*) (gobj_()), (::GInetAddressMask*) (mask2_to_c));
  return _temp_ret;
}

// GInetAddress* g_inet_address_mask_get_address (GInetAddressMask* mask);
// ::GInetAddress* g_inet_address_mask_get_address (::GInetAddressMask* mask);
Gio::InetAddress base::InetAddressMaskBase::get_address () noexcept
{
  typedef ::GInetAddress* (*call_wrap_t) (::GInetAddressMask* mask);
  call_wrap_t call_wrap_v = (call_wrap_t) g_inet_address_mask_get_address;
  auto _temp_ret = call_wrap_v ((::GInetAddressMask*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GSocketFamily g_inet_address_mask_get_family (GInetAddressMask* mask);
// ::GSocketFamily g_inet_address_mask_get_family (::GInetAddressMask* mask);
Gio::SocketFamily base::InetAddressMaskBase::get_family () noexcept
{
  typedef ::GSocketFamily (*call_wrap_t) (::GInetAddressMask* mask);
  call_wrap_t call_wrap_v = (call_wrap_t) g_inet_address_mask_get_family;
  auto _temp_ret = call_wrap_v ((::GInetAddressMask*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// guint g_inet_address_mask_get_length (GInetAddressMask* mask);
// guint g_inet_address_mask_get_length (::GInetAddressMask* mask);
guint base::InetAddressMaskBase::get_length () noexcept
{
  typedef guint (*call_wrap_t) (::GInetAddressMask* mask);
  call_wrap_t call_wrap_v = (call_wrap_t) g_inet_address_mask_get_length;
  auto _temp_ret = call_wrap_v ((::GInetAddressMask*) (gobj_()));
  return _temp_ret;
}

// gboolean g_inet_address_mask_matches (GInetAddressMask* mask, GInetAddress* address);
// gboolean g_inet_address_mask_matches (::GInetAddressMask* mask, ::GInetAddress* address);
bool base::InetAddressMaskBase::matches (Gio::InetAddress address) noexcept
{
  typedef gboolean (*call_wrap_t) (::GInetAddressMask* mask, ::GInetAddress* address);
  call_wrap_t call_wrap_v = (call_wrap_t) g_inet_address_mask_matches;
  auto address_to_c = gi::unwrap (address, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GInetAddressMask*) (gobj_()), (::GInetAddress*) (address_to_c));
  return _temp_ret;
}

// gchar* g_inet_address_mask_to_string (GInetAddressMask* mask);
// char* g_inet_address_mask_to_string (::GInetAddressMask* mask);
std::string base::InetAddressMaskBase::to_string () noexcept
{
  typedef char* (*call_wrap_t) (::GInetAddressMask* mask);
  call_wrap_t call_wrap_v = (call_wrap_t) g_inet_address_mask_to_string;
  auto _temp_ret = call_wrap_v ((::GInetAddressMask*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/inetaddressmask_extra_def_impl.hpp>)
#include <gio/inetaddressmask_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/inetaddressmask_extra_impl.hpp>)
#include <gio/inetaddressmask_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void InetAddressMaskClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GInetAddressMaskClass *methods = (::GInetAddressMaskClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
