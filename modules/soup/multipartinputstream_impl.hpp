// AUTO-GENERATED

#ifndef _GI_SOUP_MULTIPARTINPUTSTREAM_IMPL_HPP_
#define _GI_SOUP_MULTIPARTINPUTSTREAM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Soup {

namespace base {

Gio::PollableInputStream MultipartInputStreamBase::interface_ (gi::interface_tag<Gio::PollableInputStream>)
{ return gi::wrap ((Gio::PollableInputStream::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

MultipartInputStreamBase::operator Gio::PollableInputStream ()
{ return interface_ (gi::interface_tag<Gio::PollableInputStream>()); }

// SoupMultipartInputStream* soup_multipart_input_stream_new (SoupMessage* msg, GInputStream* base_stream);
// ::SoupMultipartInputStream* soup_multipart_input_stream_new (::SoupMessage* msg, ::GInputStream* base_stream);
Soup::MultipartInputStream base::MultipartInputStreamBase::new_ (Soup::Message msg, Gio::InputStream base_stream) noexcept
{
  typedef ::SoupMultipartInputStream* (*call_wrap_t) (::SoupMessage* msg, ::GInputStream* base_stream);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_multipart_input_stream_new;
  auto base_stream_to_c = gi::unwrap (base_stream, gi::transfer_none, gi::direction_in);
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupMessage*) (msg_to_c), (::GInputStream*) (base_stream_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// SoupMessageHeaders* soup_multipart_input_stream_get_headers (SoupMultipartInputStream* multipart);
// ::SoupMessageHeaders* soup_multipart_input_stream_get_headers (::SoupMultipartInputStream* multipart);
Soup::MessageHeaders base::MultipartInputStreamBase::get_headers () noexcept
{
  typedef ::SoupMessageHeaders* (*call_wrap_t) (::SoupMultipartInputStream* multipart);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_multipart_input_stream_get_headers;
  auto _temp_ret = call_wrap_v ((::SoupMultipartInputStream*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GInputStream* soup_multipart_input_stream_next_part (SoupMultipartInputStream* multipart, GCancellable* cancellable, GError ** error);
// ::GInputStream* soup_multipart_input_stream_next_part (::SoupMultipartInputStream* multipart, ::GCancellable* cancellable, GError ** error);
Gio::InputStream base::MultipartInputStreamBase::next_part (Gio::Cancellable cancellable)
{
  typedef ::GInputStream* (*call_wrap_t) (::SoupMultipartInputStream* multipart, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_multipart_input_stream_next_part;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SoupMultipartInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::InputStream base::MultipartInputStreamBase::next_part ()
{
  typedef ::GInputStream* (*call_wrap_t) (::SoupMultipartInputStream* multipart, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_multipart_input_stream_next_part;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SoupMultipartInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::InputStream base::MultipartInputStreamBase::next_part (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GInputStream* (*call_wrap_t) (::SoupMultipartInputStream* multipart, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_multipart_input_stream_next_part;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SoupMultipartInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::InputStream base::MultipartInputStreamBase::next_part (GLib::Error * _error) noexcept
{
  typedef ::GInputStream* (*call_wrap_t) (::SoupMultipartInputStream* multipart, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_multipart_input_stream_next_part;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SoupMultipartInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void soup_multipart_input_stream_next_part_async (SoupMultipartInputStream* multipart, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer data);
// void soup_multipart_input_stream_next_part_async (::SoupMultipartInputStream* multipart, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* data);
void base::MultipartInputStreamBase::next_part_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::SoupMultipartInputStream* multipart, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_multipart_input_stream_next_part_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::SoupMultipartInputStream*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::MultipartInputStreamBase::next_part_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::SoupMultipartInputStream* multipart, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_multipart_input_stream_next_part_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::SoupMultipartInputStream*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GInputStream* soup_multipart_input_stream_next_part_finish (SoupMultipartInputStream* multipart, GAsyncResult* result, GError ** error);
// ::GInputStream* soup_multipart_input_stream_next_part_finish (::SoupMultipartInputStream* multipart, ::GAsyncResult* result, GError ** error);
Gio::InputStream base::MultipartInputStreamBase::next_part_finish (Gio::AsyncResult result)
{
  typedef ::GInputStream* (*call_wrap_t) (::SoupMultipartInputStream* multipart, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_multipart_input_stream_next_part_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SoupMultipartInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::InputStream base::MultipartInputStreamBase::next_part_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GInputStream* (*call_wrap_t) (::SoupMultipartInputStream* multipart, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_multipart_input_stream_next_part_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SoupMultipartInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/multipartinputstream_extra_def_impl.hpp>)
#include <soup/multipartinputstream_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/multipartinputstream_extra_impl.hpp>)
#include <soup/multipartinputstream_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {

void MultipartInputStreamClassDef::class_init (gpointer class_struct, gpointer )
{
  ::SoupMultipartInputStreamClass *methods = (::SoupMultipartInputStreamClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
