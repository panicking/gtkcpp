// AUTO-GENERATED

#ifndef _GI_GIO_ZLIBCOMPRESSOR_HPP_
#define _GI_GIO_ZLIBCOMPRESSOR_HPP_


namespace gi {

namespace repository {

namespace Gio {

class Converter;
class FileInfo;

class ZlibCompressor;

namespace base {


#define GI_GIO_ZLIBCOMPRESSOR_BASE base::ZlibCompressorBase
class ZlibCompressorBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GZlibCompressor BaseObjectType;

ZlibCompressorBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_zlib_compressor_get_type(); } 

GI_INLINE_DECL Gio::Converter interface_ (gi::interface_tag<Gio::Converter>);

GI_INLINE_DECL operator Gio::Converter ();

// GZlibCompressor* g_zlib_compressor_new (GZlibCompressorFormat format, int level);
// ::GZlibCompressor* g_zlib_compressor_new (::GZlibCompressorFormat format, gint level);
static GI_INLINE_DECL Gio::ZlibCompressor new_ (Gio::ZlibCompressorFormat format, gint level) noexcept;

// GFileInfo* g_zlib_compressor_get_file_info (GZlibCompressor* compressor);
// ::GFileInfo* g_zlib_compressor_get_file_info (::GZlibCompressor* compressor);
GI_INLINE_DECL Gio::FileInfo get_file_info () noexcept;

// void g_zlib_compressor_set_file_info (GZlibCompressor* compressor, GFileInfo* file_info);
// void g_zlib_compressor_set_file_info (::GZlibCompressor* compressor, ::GFileInfo* file_info);
GI_INLINE_DECL void set_file_info (Gio::FileInfo file_info) noexcept;
GI_INLINE_DECL void set_file_info () noexcept;

gi::property_proxy<Gio::FileInfo, base::ZlibCompressorBase> property_file_info()
{ return gi::property_proxy<Gio::FileInfo, base::ZlibCompressorBase> (*this, "file-info"); }
const gi::property_proxy<Gio::FileInfo, base::ZlibCompressorBase> property_file_info() const
{ return gi::property_proxy<Gio::FileInfo, base::ZlibCompressorBase> (*this, "file-info"); }

gi::property_proxy<Gio::ZlibCompressorFormat, base::ZlibCompressorBase> property_format()
{ return gi::property_proxy<Gio::ZlibCompressorFormat, base::ZlibCompressorBase> (*this, "format"); }
const gi::property_proxy<Gio::ZlibCompressorFormat, base::ZlibCompressorBase> property_format() const
{ return gi::property_proxy<Gio::ZlibCompressorFormat, base::ZlibCompressorBase> (*this, "format"); }

gi::property_proxy<gint, base::ZlibCompressorBase> property_level()
{ return gi::property_proxy<gint, base::ZlibCompressorBase> (*this, "level"); }
const gi::property_proxy<gint, base::ZlibCompressorBase> property_level() const
{ return gi::property_proxy<gint, base::ZlibCompressorBase> (*this, "level"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/zlibcompressor_extra_def.hpp>)
#include <gio/zlibcompressor_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/zlibcompressor_extra.hpp>)
#include <gio/zlibcompressor_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class ZlibCompressor : public GI_GIO_ZLIBCOMPRESSOR_BASE
{ typedef GI_GIO_ZLIBCOMPRESSOR_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GZlibCompressor>
{ typedef Gio::ZlibCompressor type; }; 

} // namespace repository

} // namespace gi

#include "converter.hpp"

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class ZlibCompressorClassDef
{
typedef ZlibCompressorClassDef self;
public:
typedef Gio::ZlibCompressor instance_type;
typedef ::GZlibCompressorClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ZlibCompressorClass: public detail::ClassTemplate<Gio::impl::internal::ZlibCompressorClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ConverterIfaceClassImpl>
{
typedef ZlibCompressorClass self;
typedef detail::ClassTemplate<Gio::impl::internal::ZlibCompressorClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ConverterIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::ConverterIfaceClassImpl GConverterIface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using ZlibCompressorImpl = detail::ObjectImpl<ZlibCompressor, internal::ZlibCompressorClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
