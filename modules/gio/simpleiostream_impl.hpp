// AUTO-GENERATED

#ifndef _GI_GIO_SIMPLEIOSTREAM_IMPL_HPP_
#define _GI_GIO_SIMPLEIOSTREAM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GIOStream* g_simple_io_stream_new (GInputStream* input_stream, GOutputStream* output_stream);
// ::GSimpleIOStream* g_simple_io_stream_new (::GInputStream* input_stream, ::GOutputStream* output_stream);
Gio::SimpleIOStream base::SimpleIOStreamBase::new_ (Gio::InputStream input_stream, Gio::OutputStream output_stream) noexcept
{
  typedef ::GSimpleIOStream* (*call_wrap_t) (::GInputStream* input_stream, ::GOutputStream* output_stream);
  call_wrap_t call_wrap_v = (call_wrap_t) g_simple_io_stream_new;
  auto output_stream_to_c = gi::unwrap (output_stream, gi::transfer_none, gi::direction_in);
  auto input_stream_to_c = gi::unwrap (input_stream, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GInputStream*) (input_stream_to_c), (::GOutputStream*) (output_stream_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/simpleiostream_extra_def_impl.hpp>)
#include <gio/simpleiostream_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/simpleiostream_extra_impl.hpp>)
#include <gio/simpleiostream_extra_impl.hpp>
#endif
#endif

#endif
