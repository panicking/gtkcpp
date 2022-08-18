// AUTO-GENERATED

#ifndef _GI_GIO_POLLABLEOUTPUTSTREAM_IMPL_HPP_
#define _GI_GIO_POLLABLEOUTPUTSTREAM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// gboolean g_pollable_output_stream_can_poll (GPollableOutputStream* stream);
// gboolean g_pollable_output_stream_can_poll (::GPollableOutputStream* stream);
bool base::PollableOutputStreamBase::can_poll () noexcept
{
  typedef gboolean (*call_wrap_t) (::GPollableOutputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) g_pollable_output_stream_can_poll;
  auto _temp_ret = call_wrap_v ((::GPollableOutputStream*) (gobj_()));
  return _temp_ret;
}

// GSource* g_pollable_output_stream_create_source (GPollableOutputStream* stream, GCancellable* cancellable);
// ::GSource* g_pollable_output_stream_create_source (::GPollableOutputStream* stream, ::GCancellable* cancellable);
GLib::Source base::PollableOutputStreamBase::create_source (Gio::Cancellable cancellable) noexcept
{
  typedef ::GSource* (*call_wrap_t) (::GPollableOutputStream* stream, ::GCancellable* cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) g_pollable_output_stream_create_source;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GPollableOutputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::Source base::PollableOutputStreamBase::create_source () noexcept
{
  typedef ::GSource* (*call_wrap_t) (::GPollableOutputStream* stream, ::GCancellable* cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) g_pollable_output_stream_create_source;
  auto cancellable_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GPollableOutputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean g_pollable_output_stream_is_writable (GPollableOutputStream* stream);
// gboolean g_pollable_output_stream_is_writable (::GPollableOutputStream* stream);
bool base::PollableOutputStreamBase::is_writable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GPollableOutputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) g_pollable_output_stream_is_writable;
  auto _temp_ret = call_wrap_v ((::GPollableOutputStream*) (gobj_()));
  return _temp_ret;
}

// gssize g_pollable_output_stream_write_nonblocking (GPollableOutputStream* stream, void* buffer, gsize count, GCancellable* cancellable, GError ** error);
// gssize g_pollable_output_stream_write_nonblocking (::GPollableOutputStream* stream, guint8* buffer, gsize count, ::GCancellable* cancellable, GError ** error);
gssize base::PollableOutputStreamBase::write_nonblocking (guint8 * buffer, gsize count, Gio::Cancellable cancellable)
{
  typedef gssize (*call_wrap_t) (::GPollableOutputStream* stream, guint8* buffer, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_pollable_output_stream_write_nonblocking;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto buffer_i = detail::make_list_unwrap_range (buffer, count, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GPollableOutputStream*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::PollableOutputStreamBase::write_nonblocking (guint8 * buffer, gsize count)
{
  typedef gssize (*call_wrap_t) (::GPollableOutputStream* stream, guint8* buffer, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_pollable_output_stream_write_nonblocking;
  auto cancellable_to_c = nullptr;
  auto buffer_i = detail::make_list_unwrap_range (buffer, count, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GPollableOutputStream*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::PollableOutputStreamBase::write_nonblocking (guint8 * buffer, gsize count, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GPollableOutputStream* stream, guint8* buffer, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_pollable_output_stream_write_nonblocking;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto buffer_i = detail::make_list_unwrap_range (buffer, count, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GPollableOutputStream*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
gssize base::PollableOutputStreamBase::write_nonblocking (guint8 * buffer, gsize count, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GPollableOutputStream* stream, guint8* buffer, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_pollable_output_stream_write_nonblocking;
  auto cancellable_to_c = nullptr;
  auto buffer_i = detail::make_list_unwrap_range (buffer, count, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GPollableOutputStream*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// GPollableReturn g_pollable_output_stream_writev_nonblocking (GPollableOutputStream* stream, const GOutputVector* vectors, gsize n_vectors, gsize* bytes_written, GCancellable* cancellable, GError ** error);
// ::GPollableReturn g_pollable_output_stream_writev_nonblocking (::GPollableOutputStream* stream, const ::GOutputVector** vectors, gsize n_vectors, gsize* bytes_written, ::GCancellable* cancellable, GError ** error);
// SKIP; inconsistent in vectors pointer depth (1 vs 2)


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/pollableoutputstream_extra_def_impl.hpp>)
#include <gio/pollableoutputstream_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/pollableoutputstream_extra_impl.hpp>)
#include <gio/pollableoutputstream_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void PollableOutputStreamInterfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GPollableOutputStreamInterface *methods = (::GPollableOutputStreamInterface *) interface_struct;
  (void) methods;

  methods->can_poll = (decltype (methods->can_poll)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::can_poll_>;
  methods->create_source = (decltype (methods->create_source)) detail::method_wrapper<self, GLib::Source (*) (Gio::Cancellable cancellable), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::create_source_>;
  methods->is_writable = (decltype (methods->is_writable)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::is_writable_>;
}

// gboolean PollableOutputStream::can_poll (GPollableOutputStream* stream);
// gboolean PollableOutputStream::can_poll (::GPollableOutputStream* stream);
bool PollableOutputStreamInterfaceClassImpl::can_poll_ () noexcept
{
  if (!get_struct_()->can_poll) return bool{};
  typedef gboolean (*call_wrap_t) (::GPollableOutputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->can_poll;
  auto _temp_ret = call_wrap_v ((::GPollableOutputStream*) (gobj_()));
  return _temp_ret;
}

// GSource* PollableOutputStream::create_source (GPollableOutputStream* stream, GCancellable* cancellable);
// ::GSource* PollableOutputStream::create_source (::GPollableOutputStream* stream, ::GCancellable* cancellable);
GLib::Source PollableOutputStreamInterfaceClassImpl::create_source_ (Gio::Cancellable cancellable) noexcept
{
  if (!get_struct_()->create_source) return GLib::Source{};
  typedef ::GSource* (*call_wrap_t) (::GPollableOutputStream* stream, ::GCancellable* cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->create_source;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GPollableOutputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean PollableOutputStream::is_writable (GPollableOutputStream* stream);
// gboolean PollableOutputStream::is_writable (::GPollableOutputStream* stream);
bool PollableOutputStreamInterfaceClassImpl::is_writable_ () noexcept
{
  if (!get_struct_()->is_writable) return bool{};
  typedef gboolean (*call_wrap_t) (::GPollableOutputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->is_writable;
  auto _temp_ret = call_wrap_v ((::GPollableOutputStream*) (gobj_()));
  return _temp_ret;
}

// gssize PollableOutputStream::write_nonblocking (GPollableOutputStream* stream, void* buffer, gsize count, GError ** error);
// gssize PollableOutputStream::write_nonblocking (::GPollableOutputStream* stream, guint8* buffer, gsize count, GError ** error);
// SKIP; virtual-method container parameter not supported, callee GError not supported

// GPollableReturn PollableOutputStream::writev_nonblocking (GPollableOutputStream* stream, const GOutputVector* vectors, gsize n_vectors, gsize* bytes_written, GError ** error);
// ::GPollableReturn PollableOutputStream::writev_nonblocking (::GPollableOutputStream* stream, const ::GOutputVector** vectors, gsize n_vectors, gsize* bytes_written, GError ** error);
// SKIP; virtual-method container parameter not supported, virtual-method out parameter not supported, callee GError not supported

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
