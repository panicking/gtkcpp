// AUTO-GENERATED

#ifndef _GI_GIO_ZLIBCOMPRESSOR_IMPL_HPP_
#define _GI_GIO_ZLIBCOMPRESSOR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::Converter ZlibCompressorBase::interface_ (gi::interface_tag<Gio::Converter>)
{ return gi::wrap ((Gio::Converter::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

ZlibCompressorBase::operator Gio::Converter ()
{ return interface_ (gi::interface_tag<Gio::Converter>()); }

// GZlibCompressor* g_zlib_compressor_new (GZlibCompressorFormat format, int level);
// ::GZlibCompressor* g_zlib_compressor_new (::GZlibCompressorFormat format, gint level);
Gio::ZlibCompressor base::ZlibCompressorBase::new_ (Gio::ZlibCompressorFormat format, gint level) noexcept
{
  typedef ::GZlibCompressor* (*call_wrap_t) (::GZlibCompressorFormat format, gint level);
  call_wrap_t call_wrap_v = (call_wrap_t) g_zlib_compressor_new;
  auto level_to_c = level;
  auto format_to_c = gi::unwrap (format);
  auto _temp_ret = call_wrap_v ((::GZlibCompressorFormat) (format_to_c), (gint) (level_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GFileInfo* g_zlib_compressor_get_file_info (GZlibCompressor* compressor);
// ::GFileInfo* g_zlib_compressor_get_file_info (::GZlibCompressor* compressor);
Gio::FileInfo base::ZlibCompressorBase::get_file_info () noexcept
{
  typedef ::GFileInfo* (*call_wrap_t) (::GZlibCompressor* compressor);
  call_wrap_t call_wrap_v = (call_wrap_t) g_zlib_compressor_get_file_info;
  auto _temp_ret = call_wrap_v ((::GZlibCompressor*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void g_zlib_compressor_set_file_info (GZlibCompressor* compressor, GFileInfo* file_info);
// void g_zlib_compressor_set_file_info (::GZlibCompressor* compressor, ::GFileInfo* file_info);
void base::ZlibCompressorBase::set_file_info (Gio::FileInfo file_info) noexcept
{
  typedef void (*call_wrap_t) (::GZlibCompressor* compressor, ::GFileInfo* file_info);
  call_wrap_t call_wrap_v = (call_wrap_t) g_zlib_compressor_set_file_info;
  auto file_info_to_c = gi::unwrap (file_info, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GZlibCompressor*) (gobj_()), (::GFileInfo*) (file_info_to_c));
}
void base::ZlibCompressorBase::set_file_info () noexcept
{
  typedef void (*call_wrap_t) (::GZlibCompressor* compressor, ::GFileInfo* file_info);
  call_wrap_t call_wrap_v = (call_wrap_t) g_zlib_compressor_set_file_info;
  auto file_info_to_c = nullptr;
  call_wrap_v ((::GZlibCompressor*) (gobj_()), (::GFileInfo*) (file_info_to_c));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/zlibcompressor_extra_def_impl.hpp>)
#include <gio/zlibcompressor_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/zlibcompressor_extra_impl.hpp>)
#include <gio/zlibcompressor_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void ZlibCompressorClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GZlibCompressorClass *methods = (::GZlibCompressorClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
