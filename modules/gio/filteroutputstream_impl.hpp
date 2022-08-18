// AUTO-GENERATED

#ifndef _GI_GIO_FILTEROUTPUTSTREAM_IMPL_HPP_
#define _GI_GIO_FILTEROUTPUTSTREAM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GOutputStream* g_filter_output_stream_get_base_stream (GFilterOutputStream* stream);
// ::GOutputStream* g_filter_output_stream_get_base_stream (::GFilterOutputStream* stream);
Gio::OutputStream base::FilterOutputStreamBase::get_base_stream () noexcept
{
  typedef ::GOutputStream* (*call_wrap_t) (::GFilterOutputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) g_filter_output_stream_get_base_stream;
  auto _temp_ret = call_wrap_v ((::GFilterOutputStream*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean g_filter_output_stream_get_close_base_stream (GFilterOutputStream* stream);
// gboolean g_filter_output_stream_get_close_base_stream (::GFilterOutputStream* stream);
bool base::FilterOutputStreamBase::get_close_base_stream () noexcept
{
  typedef gboolean (*call_wrap_t) (::GFilterOutputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) g_filter_output_stream_get_close_base_stream;
  auto _temp_ret = call_wrap_v ((::GFilterOutputStream*) (gobj_()));
  return _temp_ret;
}

// void g_filter_output_stream_set_close_base_stream (GFilterOutputStream* stream, gboolean close_base);
// void g_filter_output_stream_set_close_base_stream (::GFilterOutputStream* stream, gboolean close_base);
void base::FilterOutputStreamBase::set_close_base_stream (gboolean close_base) noexcept
{
  typedef void (*call_wrap_t) (::GFilterOutputStream* stream, gboolean close_base);
  call_wrap_t call_wrap_v = (call_wrap_t) g_filter_output_stream_set_close_base_stream;
  auto close_base_to_c = close_base;
  call_wrap_v ((::GFilterOutputStream*) (gobj_()), (gboolean) (close_base_to_c));
}

static ::GOutputStream* _field_base_stream_get (const ::GFilterOutputStream* obj) { return (::GOutputStream*) obj->base_stream; }
// ::GOutputStream* FilterOutputStream::base_stream (const ::GFilterOutputStream* obj);
// ::GOutputStream* FilterOutputStream::base_stream (const ::GFilterOutputStream* obj);
Gio::OutputStream base::FilterOutputStreamBase::base_stream_ () const noexcept
{
  typedef ::GOutputStream* (*call_wrap_t) (const ::GFilterOutputStream* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_base_stream_get;
  auto _temp_ret = call_wrap_v ((const ::GFilterOutputStream*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/filteroutputstream_extra_def_impl.hpp>)
#include <gio/filteroutputstream_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/filteroutputstream_extra_impl.hpp>)
#include <gio/filteroutputstream_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void FilterOutputStreamClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GFilterOutputStreamClass *methods = (::GFilterOutputStreamClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
