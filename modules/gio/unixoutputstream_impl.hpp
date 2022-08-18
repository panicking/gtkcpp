// AUTO-GENERATED

#ifndef _GI_GIO_UNIXOUTPUTSTREAM_IMPL_HPP_
#define _GI_GIO_UNIXOUTPUTSTREAM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::FileDescriptorBased UnixOutputStreamBase::interface_ (gi::interface_tag<Gio::FileDescriptorBased>)
{ return gi::wrap ((Gio::FileDescriptorBased::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

UnixOutputStreamBase::operator Gio::FileDescriptorBased ()
{ return interface_ (gi::interface_tag<Gio::FileDescriptorBased>()); }

Gio::PollableOutputStream UnixOutputStreamBase::interface_ (gi::interface_tag<Gio::PollableOutputStream>)
{ return gi::wrap ((Gio::PollableOutputStream::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

UnixOutputStreamBase::operator Gio::PollableOutputStream ()
{ return interface_ (gi::interface_tag<Gio::PollableOutputStream>()); }

// GOutputStream* g_unix_output_stream_new (gint fd, gboolean close_fd);
// ::GUnixOutputStream* g_unix_output_stream_new (gint fd, gboolean close_fd);
Gio::UnixOutputStream base::UnixOutputStreamBase::new_ (gint fd, gboolean close_fd) noexcept
{
  typedef ::GUnixOutputStream* (*call_wrap_t) (gint fd, gboolean close_fd);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_output_stream_new;
  auto close_fd_to_c = close_fd;
  auto fd_to_c = fd;
  auto _temp_ret = call_wrap_v ((gint) (fd_to_c), (gboolean) (close_fd_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean g_unix_output_stream_get_close_fd (GUnixOutputStream* stream);
// gboolean g_unix_output_stream_get_close_fd (::GUnixOutputStream* stream);
bool base::UnixOutputStreamBase::get_close_fd () noexcept
{
  typedef gboolean (*call_wrap_t) (::GUnixOutputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_output_stream_get_close_fd;
  auto _temp_ret = call_wrap_v ((::GUnixOutputStream*) (gobj_()));
  return _temp_ret;
}

// gint g_unix_output_stream_get_fd (GUnixOutputStream* stream);
// gint g_unix_output_stream_get_fd (::GUnixOutputStream* stream);
gint base::UnixOutputStreamBase::get_fd () noexcept
{
  typedef gint (*call_wrap_t) (::GUnixOutputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_output_stream_get_fd;
  auto _temp_ret = call_wrap_v ((::GUnixOutputStream*) (gobj_()));
  return _temp_ret;
}

// void g_unix_output_stream_set_close_fd (GUnixOutputStream* stream, gboolean close_fd);
// void g_unix_output_stream_set_close_fd (::GUnixOutputStream* stream, gboolean close_fd);
void base::UnixOutputStreamBase::set_close_fd (gboolean close_fd) noexcept
{
  typedef void (*call_wrap_t) (::GUnixOutputStream* stream, gboolean close_fd);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_output_stream_set_close_fd;
  auto close_fd_to_c = close_fd;
  call_wrap_v ((::GUnixOutputStream*) (gobj_()), (gboolean) (close_fd_to_c));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/unixoutputstream_extra_def_impl.hpp>)
#include <gio/unixoutputstream_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/unixoutputstream_extra_impl.hpp>)
#include <gio/unixoutputstream_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void UnixOutputStreamClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GUnixOutputStreamClass *methods = (::GUnixOutputStreamClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
