// AUTO-GENERATED

#ifndef _GI_GIO_CONVERTER_IMPL_HPP_
#define _GI_GIO_CONVERTER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GConverterResult g_converter_convert (GConverter* converter, void* inbuf, gsize inbuf_size, void* outbuf, gsize outbuf_size, GConverterFlags flags, gsize* bytes_read, gsize* bytes_written, GError ** error);
// ::GConverterResult g_converter_convert (::GConverter* converter, guint8* inbuf, gsize inbuf_size, guint8* outbuf, gsize outbuf_size, ::GConverterFlags flags, gsize* bytes_read, gsize* bytes_written, GError ** error);
Gio::ConverterResult base::ConverterBase::convert (guint8 * inbuf, gsize inbuf_size, guint8 * outbuf, gsize outbuf_size, Gio::ConverterFlags flags, gsize & bytes_read, gsize & bytes_written)
{
  typedef ::GConverterResult (*call_wrap_t) (::GConverter* converter, guint8* inbuf, gsize inbuf_size, guint8* outbuf, gsize outbuf_size, ::GConverterFlags flags, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_converter_convert;
  gsize bytes_written_o {};
  gsize bytes_read_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto outbuf_i = detail::make_list_unwrap_range (outbuf, outbuf_size, false);
  auto outbuf_w = unwrap (outbuf_i, gi::transfer_none, direction_in);
  auto outbuf_to_c = outbuf_w.gobj_(false);
  auto inbuf_i = detail::make_list_unwrap_range (inbuf, inbuf_size, false);
  auto inbuf_w = unwrap (inbuf_i, gi::transfer_none, direction_in);
  auto inbuf_to_c = inbuf_w.gobj_(false);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GConverter*) (gobj_()), (guint8*) (inbuf_to_c), (gsize) (inbuf_w.size()), (guint8*) (outbuf_to_c), (gsize) (outbuf_w.size()), (::GConverterFlags) (flags_to_c), (gsize*) (&bytes_read_o), (gsize*) (&bytes_written_o), &error);
  bytes_written = bytes_written_o;
  bytes_read = bytes_read_o;
  gi::check_error (error);
  return gi::wrap (_temp_ret);
}
Gio::ConverterResult base::ConverterBase::convert (guint8 * inbuf, gsize inbuf_size, guint8 * outbuf, gsize outbuf_size, Gio::ConverterFlags flags, gsize & bytes_read, gsize & bytes_written, GLib::Error * _error) noexcept
{
  typedef ::GConverterResult (*call_wrap_t) (::GConverter* converter, guint8* inbuf, gsize inbuf_size, guint8* outbuf, gsize outbuf_size, ::GConverterFlags flags, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_converter_convert;
  gsize bytes_written_o {};
  gsize bytes_read_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto outbuf_i = detail::make_list_unwrap_range (outbuf, outbuf_size, false);
  auto outbuf_w = unwrap (outbuf_i, gi::transfer_none, direction_in);
  auto outbuf_to_c = outbuf_w.gobj_(false);
  auto inbuf_i = detail::make_list_unwrap_range (inbuf, inbuf_size, false);
  auto inbuf_w = unwrap (inbuf_i, gi::transfer_none, direction_in);
  auto inbuf_to_c = inbuf_w.gobj_(false);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GConverter*) (gobj_()), (guint8*) (inbuf_to_c), (gsize) (inbuf_w.size()), (guint8*) (outbuf_to_c), (gsize) (outbuf_w.size()), (::GConverterFlags) (flags_to_c), (gsize*) (&bytes_read_o), (gsize*) (&bytes_written_o), _error ? &_error_o : nullptr);
  bytes_written = bytes_written_o;
  bytes_read = bytes_read_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret);
}
std::tuple<Gio::ConverterResult, gsize, gsize> base::ConverterBase::convert (guint8 * inbuf, gsize inbuf_size, guint8 * outbuf, gsize outbuf_size, Gio::ConverterFlags flags)
{
  typedef ::GConverterResult (*call_wrap_t) (::GConverter* converter, guint8* inbuf, gsize inbuf_size, guint8* outbuf, gsize outbuf_size, ::GConverterFlags flags, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_converter_convert;
  gsize bytes_written_o {};
  gsize bytes_read_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto outbuf_i = detail::make_list_unwrap_range (outbuf, outbuf_size, false);
  auto outbuf_w = unwrap (outbuf_i, gi::transfer_none, direction_in);
  auto outbuf_to_c = outbuf_w.gobj_(false);
  auto inbuf_i = detail::make_list_unwrap_range (inbuf, inbuf_size, false);
  auto inbuf_w = unwrap (inbuf_i, gi::transfer_none, direction_in);
  auto inbuf_to_c = inbuf_w.gobj_(false);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GConverter*) (gobj_()), (guint8*) (inbuf_to_c), (gsize) (inbuf_w.size()), (guint8*) (outbuf_to_c), (gsize) (outbuf_w.size()), (::GConverterFlags) (flags_to_c), (gsize*) (&bytes_read_o), (gsize*) (&bytes_written_o), &error);
  gi::check_error (error);
  return std::make_tuple (gi::wrap (_temp_ret), bytes_read_o, bytes_written_o);
}
std::tuple<Gio::ConverterResult, gsize, gsize> base::ConverterBase::convert (guint8 * inbuf, gsize inbuf_size, guint8 * outbuf, gsize outbuf_size, Gio::ConverterFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GConverterResult (*call_wrap_t) (::GConverter* converter, guint8* inbuf, gsize inbuf_size, guint8* outbuf, gsize outbuf_size, ::GConverterFlags flags, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_converter_convert;
  gsize bytes_written_o {};
  gsize bytes_read_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto outbuf_i = detail::make_list_unwrap_range (outbuf, outbuf_size, false);
  auto outbuf_w = unwrap (outbuf_i, gi::transfer_none, direction_in);
  auto outbuf_to_c = outbuf_w.gobj_(false);
  auto inbuf_i = detail::make_list_unwrap_range (inbuf, inbuf_size, false);
  auto inbuf_w = unwrap (inbuf_i, gi::transfer_none, direction_in);
  auto inbuf_to_c = inbuf_w.gobj_(false);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GConverter*) (gobj_()), (guint8*) (inbuf_to_c), (gsize) (inbuf_w.size()), (guint8*) (outbuf_to_c), (gsize) (outbuf_w.size()), (::GConverterFlags) (flags_to_c), (gsize*) (&bytes_read_o), (gsize*) (&bytes_written_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::wrap (_temp_ret), bytes_read_o, bytes_written_o);
}

// void g_converter_reset (GConverter* converter);
// void g_converter_reset (::GConverter* converter);
void base::ConverterBase::reset () noexcept
{
  typedef void (*call_wrap_t) (::GConverter* converter);
  call_wrap_t call_wrap_v = (call_wrap_t) g_converter_reset;
  call_wrap_v ((::GConverter*) (gobj_()));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/converter_extra_def_impl.hpp>)
#include <gio/converter_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/converter_extra_impl.hpp>)
#include <gio/converter_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void ConverterIfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GConverterIface *methods = (::GConverterIface *) interface_struct;
  (void) methods;

  methods->reset = (decltype (methods->reset)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::reset_>;
}

// GConverterResult Converter::convert (GConverter* converter, void* inbuf, gsize inbuf_size, void* outbuf, gsize outbuf_size, GConverterFlags flags, gsize* bytes_read, gsize* bytes_written, GError ** error);
// ::GConverterResult Converter::convert (::GConverter* converter, guint8* inbuf, gsize inbuf_size, guint8* outbuf, gsize outbuf_size, ::GConverterFlags flags, gsize* bytes_read, gsize* bytes_written, GError ** error);
// SKIP; virtual-method container parameter not supported, virtual-method container parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported, callee GError not supported

// void Converter::reset (GConverter* converter);
// void Converter::reset (::GConverter* converter);
void ConverterIfaceClassImpl::reset_ () noexcept
{
  if (!get_struct_()->reset) return ;
  typedef void (*call_wrap_t) (::GConverter* converter);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->reset;
  call_wrap_v ((::GConverter*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
