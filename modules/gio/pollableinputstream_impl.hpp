// AUTO-GENERATED

#ifndef _GI_GIO_POLLABLEINPUTSTREAM_IMPL_HPP_
#define _GI_GIO_POLLABLEINPUTSTREAM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// gboolean g_pollable_input_stream_can_poll (GPollableInputStream* stream);
// gboolean g_pollable_input_stream_can_poll (::GPollableInputStream* stream);
bool base::PollableInputStreamBase::can_poll () noexcept
{
  typedef gboolean (*call_wrap_t) (::GPollableInputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) g_pollable_input_stream_can_poll;
  auto _temp_ret = call_wrap_v ((::GPollableInputStream*) (gobj_()));
  return _temp_ret;
}

// GSource* g_pollable_input_stream_create_source (GPollableInputStream* stream, GCancellable* cancellable);
// ::GSource* g_pollable_input_stream_create_source (::GPollableInputStream* stream, ::GCancellable* cancellable);
GLib::Source base::PollableInputStreamBase::create_source (Gio::Cancellable cancellable) noexcept
{
  typedef ::GSource* (*call_wrap_t) (::GPollableInputStream* stream, ::GCancellable* cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) g_pollable_input_stream_create_source;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GPollableInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::Source base::PollableInputStreamBase::create_source () noexcept
{
  typedef ::GSource* (*call_wrap_t) (::GPollableInputStream* stream, ::GCancellable* cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) g_pollable_input_stream_create_source;
  auto cancellable_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GPollableInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean g_pollable_input_stream_is_readable (GPollableInputStream* stream);
// gboolean g_pollable_input_stream_is_readable (::GPollableInputStream* stream);
bool base::PollableInputStreamBase::is_readable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GPollableInputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) g_pollable_input_stream_is_readable;
  auto _temp_ret = call_wrap_v ((::GPollableInputStream*) (gobj_()));
  return _temp_ret;
}

// gssize g_pollable_input_stream_read_nonblocking (GPollableInputStream* stream, void* buffer, gsize count, GCancellable* cancellable, GError ** error);
// gssize g_pollable_input_stream_read_nonblocking (::GPollableInputStream* stream, guint8* buffer, gsize count, ::GCancellable* cancellable, GError ** error);
gssize base::PollableInputStreamBase::read_nonblocking (guint8 * buffer, gsize count, Gio::Cancellable cancellable)
{
  typedef gssize (*call_wrap_t) (::GPollableInputStream* stream, guint8* buffer, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_pollable_input_stream_read_nonblocking;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GPollableInputStream*) (gobj_()), (guint8*) (buffer), (gsize) (count), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::PollableInputStreamBase::read_nonblocking (guint8 * buffer, gsize count)
{
  typedef gssize (*call_wrap_t) (::GPollableInputStream* stream, guint8* buffer, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_pollable_input_stream_read_nonblocking;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GPollableInputStream*) (gobj_()), (guint8*) (buffer), (gsize) (count), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::PollableInputStreamBase::read_nonblocking (guint8 * buffer, gsize count, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GPollableInputStream* stream, guint8* buffer, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_pollable_input_stream_read_nonblocking;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GPollableInputStream*) (gobj_()), (guint8*) (buffer), (gsize) (count), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
gssize base::PollableInputStreamBase::read_nonblocking (guint8 * buffer, gsize count, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GPollableInputStream* stream, guint8* buffer, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_pollable_input_stream_read_nonblocking;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GPollableInputStream*) (gobj_()), (guint8*) (buffer), (gsize) (count), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/pollableinputstream_extra_def_impl.hpp>)
#include <gio/pollableinputstream_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/pollableinputstream_extra_impl.hpp>)
#include <gio/pollableinputstream_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void PollableInputStreamInterfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GPollableInputStreamInterface *methods = (::GPollableInputStreamInterface *) interface_struct;
  (void) methods;

  methods->can_poll = (decltype (methods->can_poll)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::can_poll_>;
  methods->create_source = (decltype (methods->create_source)) detail::method_wrapper<self, GLib::Source (*) (Gio::Cancellable cancellable), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::create_source_>;
  methods->is_readable = (decltype (methods->is_readable)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::is_readable_>;
}

// gboolean PollableInputStream::can_poll (GPollableInputStream* stream);
// gboolean PollableInputStream::can_poll (::GPollableInputStream* stream);
bool PollableInputStreamInterfaceClassImpl::can_poll_ () noexcept
{
  if (!get_struct_()->can_poll) return bool{};
  typedef gboolean (*call_wrap_t) (::GPollableInputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->can_poll;
  auto _temp_ret = call_wrap_v ((::GPollableInputStream*) (gobj_()));
  return _temp_ret;
}

// GSource* PollableInputStream::create_source (GPollableInputStream* stream, GCancellable* cancellable);
// ::GSource* PollableInputStream::create_source (::GPollableInputStream* stream, ::GCancellable* cancellable);
GLib::Source PollableInputStreamInterfaceClassImpl::create_source_ (Gio::Cancellable cancellable) noexcept
{
  if (!get_struct_()->create_source) return GLib::Source{};
  typedef ::GSource* (*call_wrap_t) (::GPollableInputStream* stream, ::GCancellable* cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->create_source;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GPollableInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean PollableInputStream::is_readable (GPollableInputStream* stream);
// gboolean PollableInputStream::is_readable (::GPollableInputStream* stream);
bool PollableInputStreamInterfaceClassImpl::is_readable_ () noexcept
{
  if (!get_struct_()->is_readable) return bool{};
  typedef gboolean (*call_wrap_t) (::GPollableInputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->is_readable;
  auto _temp_ret = call_wrap_v ((::GPollableInputStream*) (gobj_()));
  return _temp_ret;
}

// gssize PollableInputStream::read_nonblocking (GPollableInputStream* stream, void* buffer, gsize count, GError ** error);
// gssize PollableInputStream::read_nonblocking (::GPollableInputStream* stream, guint8* buffer, gsize count, GError ** error);
// SKIP; virtual-method out parameter not supported, callee GError not supported

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
