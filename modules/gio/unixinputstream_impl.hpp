// AUTO-GENERATED

#ifndef _GI_GIO_UNIXINPUTSTREAM_IMPL_HPP_
#define _GI_GIO_UNIXINPUTSTREAM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::FileDescriptorBased UnixInputStreamBase::interface_ (gi::interface_tag<Gio::FileDescriptorBased>)
{ return gi::wrap ((Gio::FileDescriptorBased::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

UnixInputStreamBase::operator Gio::FileDescriptorBased ()
{ return interface_ (gi::interface_tag<Gio::FileDescriptorBased>()); }

Gio::PollableInputStream UnixInputStreamBase::interface_ (gi::interface_tag<Gio::PollableInputStream>)
{ return gi::wrap ((Gio::PollableInputStream::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

UnixInputStreamBase::operator Gio::PollableInputStream ()
{ return interface_ (gi::interface_tag<Gio::PollableInputStream>()); }

// GInputStream* g_unix_input_stream_new (gint fd, gboolean close_fd);
// ::GUnixInputStream* g_unix_input_stream_new (gint fd, gboolean close_fd);
Gio::UnixInputStream base::UnixInputStreamBase::new_ (gint fd, gboolean close_fd) noexcept
{
  typedef ::GUnixInputStream* (*call_wrap_t) (gint fd, gboolean close_fd);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_input_stream_new;
  auto close_fd_to_c = close_fd;
  auto fd_to_c = fd;
  auto _temp_ret = call_wrap_v ((gint) (fd_to_c), (gboolean) (close_fd_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean g_unix_input_stream_get_close_fd (GUnixInputStream* stream);
// gboolean g_unix_input_stream_get_close_fd (::GUnixInputStream* stream);
bool base::UnixInputStreamBase::get_close_fd () noexcept
{
  typedef gboolean (*call_wrap_t) (::GUnixInputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_input_stream_get_close_fd;
  auto _temp_ret = call_wrap_v ((::GUnixInputStream*) (gobj_()));
  return _temp_ret;
}

// gint g_unix_input_stream_get_fd (GUnixInputStream* stream);
// gint g_unix_input_stream_get_fd (::GUnixInputStream* stream);
gint base::UnixInputStreamBase::get_fd () noexcept
{
  typedef gint (*call_wrap_t) (::GUnixInputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_input_stream_get_fd;
  auto _temp_ret = call_wrap_v ((::GUnixInputStream*) (gobj_()));
  return _temp_ret;
}

// void g_unix_input_stream_set_close_fd (GUnixInputStream* stream, gboolean close_fd);
// void g_unix_input_stream_set_close_fd (::GUnixInputStream* stream, gboolean close_fd);
void base::UnixInputStreamBase::set_close_fd (gboolean close_fd) noexcept
{
  typedef void (*call_wrap_t) (::GUnixInputStream* stream, gboolean close_fd);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_input_stream_set_close_fd;
  auto close_fd_to_c = close_fd;
  call_wrap_v ((::GUnixInputStream*) (gobj_()), (gboolean) (close_fd_to_c));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/unixinputstream_extra_def_impl.hpp>)
#include <gio/unixinputstream_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/unixinputstream_extra_impl.hpp>)
#include <gio/unixinputstream_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void UnixInputStreamClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GUnixInputStreamClass *methods = (::GUnixInputStreamClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
