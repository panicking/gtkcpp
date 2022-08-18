// AUTO-GENERATED

#ifndef _GI_GIO_FILTERINPUTSTREAM_IMPL_HPP_
#define _GI_GIO_FILTERINPUTSTREAM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GInputStream* g_filter_input_stream_get_base_stream (GFilterInputStream* stream);
// ::GInputStream* g_filter_input_stream_get_base_stream (::GFilterInputStream* stream);
Gio::InputStream base::FilterInputStreamBase::get_base_stream () noexcept
{
  typedef ::GInputStream* (*call_wrap_t) (::GFilterInputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) g_filter_input_stream_get_base_stream;
  auto _temp_ret = call_wrap_v ((::GFilterInputStream*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean g_filter_input_stream_get_close_base_stream (GFilterInputStream* stream);
// gboolean g_filter_input_stream_get_close_base_stream (::GFilterInputStream* stream);
bool base::FilterInputStreamBase::get_close_base_stream () noexcept
{
  typedef gboolean (*call_wrap_t) (::GFilterInputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) g_filter_input_stream_get_close_base_stream;
  auto _temp_ret = call_wrap_v ((::GFilterInputStream*) (gobj_()));
  return _temp_ret;
}

// void g_filter_input_stream_set_close_base_stream (GFilterInputStream* stream, gboolean close_base);
// void g_filter_input_stream_set_close_base_stream (::GFilterInputStream* stream, gboolean close_base);
void base::FilterInputStreamBase::set_close_base_stream (gboolean close_base) noexcept
{
  typedef void (*call_wrap_t) (::GFilterInputStream* stream, gboolean close_base);
  call_wrap_t call_wrap_v = (call_wrap_t) g_filter_input_stream_set_close_base_stream;
  auto close_base_to_c = close_base;
  call_wrap_v ((::GFilterInputStream*) (gobj_()), (gboolean) (close_base_to_c));
}

static ::GInputStream* _field_base_stream_get (const ::GFilterInputStream* obj) { return (::GInputStream*) obj->base_stream; }
// ::GInputStream* FilterInputStream::base_stream (const ::GFilterInputStream* obj);
// ::GInputStream* FilterInputStream::base_stream (const ::GFilterInputStream* obj);
Gio::InputStream base::FilterInputStreamBase::base_stream_ () const noexcept
{
  typedef ::GInputStream* (*call_wrap_t) (const ::GFilterInputStream* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_base_stream_get;
  auto _temp_ret = call_wrap_v ((const ::GFilterInputStream*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/filterinputstream_extra_def_impl.hpp>)
#include <gio/filterinputstream_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/filterinputstream_extra_impl.hpp>)
#include <gio/filterinputstream_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void FilterInputStreamClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GFilterInputStreamClass *methods = (::GFilterInputStreamClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
