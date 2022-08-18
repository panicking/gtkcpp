// AUTO-GENERATED

#ifndef _GI_GIO_MEMORYOUTPUTSTREAM_IMPL_HPP_
#define _GI_GIO_MEMORYOUTPUTSTREAM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::PollableOutputStream MemoryOutputStreamBase::interface_ (gi::interface_tag<Gio::PollableOutputStream>)
{ return gi::wrap ((Gio::PollableOutputStream::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

MemoryOutputStreamBase::operator Gio::PollableOutputStream ()
{ return interface_ (gi::interface_tag<Gio::PollableOutputStream>()); }

Gio::Seekable MemoryOutputStreamBase::interface_ (gi::interface_tag<Gio::Seekable>)
{ return gi::wrap ((Gio::Seekable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

MemoryOutputStreamBase::operator Gio::Seekable ()
{ return interface_ (gi::interface_tag<Gio::Seekable>()); }

// GOutputStream* g_memory_output_stream_new (gpointer data, gsize size, GReallocFunc realloc_function, GDestroyNotify destroy_function);
// ::GMemoryOutputStream* g_memory_output_stream_new (void* data, gsize size,  realloc_function, GLib::DestroyNotify::cfunction_type destroy_function);
// IGNORE; not introspectable, realloc_function type  not supported

// GOutputStream* g_memory_output_stream_new_resizable ();
// ::GMemoryOutputStream* g_memory_output_stream_new_resizable ();
Gio::MemoryOutputStream base::MemoryOutputStreamBase::new_resizable () noexcept
{
  typedef ::GMemoryOutputStream* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_memory_output_stream_new_resizable;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gpointer g_memory_output_stream_get_data (GMemoryOutputStream* ostream);
// void* g_memory_output_stream_get_data (::GMemoryOutputStream* ostream);
gpointer base::MemoryOutputStreamBase::get_data () noexcept
{
  typedef void* (*call_wrap_t) (::GMemoryOutputStream* ostream);
  call_wrap_t call_wrap_v = (call_wrap_t) g_memory_output_stream_get_data;
  auto _temp_ret = call_wrap_v ((::GMemoryOutputStream*) (gobj_()));
  return _temp_ret;
}

// gsize g_memory_output_stream_get_data_size (GMemoryOutputStream* ostream);
// gsize g_memory_output_stream_get_data_size (::GMemoryOutputStream* ostream);
gsize base::MemoryOutputStreamBase::get_data_size () noexcept
{
  typedef gsize (*call_wrap_t) (::GMemoryOutputStream* ostream);
  call_wrap_t call_wrap_v = (call_wrap_t) g_memory_output_stream_get_data_size;
  auto _temp_ret = call_wrap_v ((::GMemoryOutputStream*) (gobj_()));
  return _temp_ret;
}

// gsize g_memory_output_stream_get_size (GMemoryOutputStream* ostream);
// gsize g_memory_output_stream_get_size (::GMemoryOutputStream* ostream);
gsize base::MemoryOutputStreamBase::get_size () noexcept
{
  typedef gsize (*call_wrap_t) (::GMemoryOutputStream* ostream);
  call_wrap_t call_wrap_v = (call_wrap_t) g_memory_output_stream_get_size;
  auto _temp_ret = call_wrap_v ((::GMemoryOutputStream*) (gobj_()));
  return _temp_ret;
}

// GBytes* g_memory_output_stream_steal_as_bytes (GMemoryOutputStream* ostream);
// ::GBytes* g_memory_output_stream_steal_as_bytes (::GMemoryOutputStream* ostream);
GLib::Bytes base::MemoryOutputStreamBase::steal_as_bytes () noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::GMemoryOutputStream* ostream);
  call_wrap_t call_wrap_v = (call_wrap_t) g_memory_output_stream_steal_as_bytes;
  auto _temp_ret = call_wrap_v ((::GMemoryOutputStream*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gpointer g_memory_output_stream_steal_data (GMemoryOutputStream* ostream);
// void* g_memory_output_stream_steal_data (::GMemoryOutputStream* ostream);
gpointer base::MemoryOutputStreamBase::steal_data () noexcept
{
  typedef void* (*call_wrap_t) (::GMemoryOutputStream* ostream);
  call_wrap_t call_wrap_v = (call_wrap_t) g_memory_output_stream_steal_data;
  auto _temp_ret = call_wrap_v ((::GMemoryOutputStream*) (gobj_()));
  return _temp_ret;
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/memoryoutputstream_extra_def_impl.hpp>)
#include <gio/memoryoutputstream_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/memoryoutputstream_extra_impl.hpp>)
#include <gio/memoryoutputstream_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void MemoryOutputStreamClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GMemoryOutputStreamClass *methods = (::GMemoryOutputStreamClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
