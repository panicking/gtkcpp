// AUTO-GENERATED

#ifndef _GI_GLIB_CHECKSUM_IMPL_HPP_
#define _GI_GLIB_CHECKSUM_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// GChecksum* g_checksum_new (GChecksumType checksum_type);
// ::GChecksum* g_checksum_new (::GChecksumType checksum_type);
GLib::Checksum base::ChecksumBase::new_ (GLib::ChecksumType checksum_type) noexcept
{
  typedef ::GChecksum* (*call_wrap_t) (::GChecksumType checksum_type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_checksum_new;
  auto checksum_type_to_c = gi::unwrap (checksum_type);
  auto _temp_ret = call_wrap_v ((::GChecksumType) (checksum_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GChecksum* g_checksum_copy (const GChecksum* checksum);
// ::GChecksum* g_checksum_copy (const ::GChecksum* checksum);
GLib::Checksum base::ChecksumBase::copy () const noexcept
{
  typedef ::GChecksum* (*call_wrap_t) (const ::GChecksum* checksum);
  call_wrap_t call_wrap_v = (call_wrap_t) g_checksum_copy;
  auto _temp_ret = call_wrap_v ((const ::GChecksum*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_checksum_free (GChecksum* checksum);
// void g_checksum_free (::GChecksum* checksum);
// IGNORE; marked ignore

// void g_checksum_get_digest (GChecksum* checksum, guint8* buffer, gsize* digest_len);
// void g_checksum_get_digest (::GChecksum* checksum, guint8* buffer, gsize* digest_len);
void base::ChecksumBase::get_digest (guint8 * buffer, gsize digest_len) noexcept
{
  typedef void (*call_wrap_t) (::GChecksum* checksum, guint8* buffer, gsize* digest_len);
  call_wrap_t call_wrap_v = (call_wrap_t) g_checksum_get_digest;
  auto buffer_i = detail::make_list_unwrap_range (buffer, digest_len, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  call_wrap_v ((::GChecksum*) (gobj_()), (guint8*) (buffer_to_c), (gsize*) (buffer_w.size()));
}

// const gchar* g_checksum_get_string (GChecksum* checksum);
// const char* g_checksum_get_string (::GChecksum* checksum);
std::string base::ChecksumBase::get_string () noexcept
{
  typedef const char* (*call_wrap_t) (::GChecksum* checksum);
  call_wrap_t call_wrap_v = (call_wrap_t) g_checksum_get_string;
  auto _temp_ret = call_wrap_v ((::GChecksum*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void g_checksum_reset (GChecksum* checksum);
// void g_checksum_reset (::GChecksum* checksum);
void base::ChecksumBase::reset () noexcept
{
  typedef void (*call_wrap_t) (::GChecksum* checksum);
  call_wrap_t call_wrap_v = (call_wrap_t) g_checksum_reset;
  call_wrap_v ((::GChecksum*) (gobj_()));
}

// void g_checksum_update (GChecksum* checksum, const guchar* data, gssize length);
// void g_checksum_update (::GChecksum* checksum, const guint8* data, gssize length);
void base::ChecksumBase::update (guint8 * data, gssize length) noexcept
{
  typedef void (*call_wrap_t) (::GChecksum* checksum, const guint8* data, gssize length);
  call_wrap_t call_wrap_v = (call_wrap_t) g_checksum_update;
  auto data_i = detail::make_list_unwrap_range (data, length, false);
  auto data_w = unwrap (data_i, gi::transfer_none, direction_in);
  auto data_to_c = data_w.gobj_(false);
  call_wrap_v ((::GChecksum*) (gobj_()), (const guint8*) (data_to_c), (gssize) (data_w.size()));
}

// gssize g_checksum_type_get_length (GChecksumType checksum_type);
// gssize g_checksum_type_get_length (::GChecksumType checksum_type);
gssize base::ChecksumBase::type_get_length (GLib::ChecksumType checksum_type) noexcept
{
  typedef gssize (*call_wrap_t) (::GChecksumType checksum_type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_checksum_type_get_length;
  auto checksum_type_to_c = gi::unwrap (checksum_type);
  auto _temp_ret = call_wrap_v ((::GChecksumType) (checksum_type_to_c));
  return _temp_ret;
}


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/checksum_extra_def_impl.hpp>)
#include <glib/checksum_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/checksum_extra_impl.hpp>)
#include <glib/checksum_extra_impl.hpp>
#endif
#endif

#endif
