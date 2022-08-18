// AUTO-GENERATED

#ifndef _GI_GIO_ZLIBDECOMPRESSOR_HPP_
#define _GI_GIO_ZLIBDECOMPRESSOR_HPP_


namespace gi {

namespace repository {

namespace Gio {

class Converter;
class FileInfo;

class ZlibDecompressor;

namespace base {


#define GI_GIO_ZLIBDECOMPRESSOR_BASE base::ZlibDecompressorBase
class ZlibDecompressorBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GZlibDecompressor BaseObjectType;

ZlibDecompressorBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_zlib_decompressor_get_type(); } 

GI_INLINE_DECL Gio::Converter interface_ (gi::interface_tag<Gio::Converter>);

GI_INLINE_DECL operator Gio::Converter ();

// GZlibDecompressor* g_zlib_decompressor_new (GZlibCompressorFormat format);
// ::GZlibDecompressor* g_zlib_decompressor_new (::GZlibCompressorFormat format);
static GI_INLINE_DECL Gio::ZlibDecompressor new_ (Gio::ZlibCompressorFormat format) noexcept;

// GFileInfo* g_zlib_decompressor_get_file_info (GZlibDecompressor* decompressor);
// ::GFileInfo* g_zlib_decompressor_get_file_info (::GZlibDecompressor* decompressor);
GI_INLINE_DECL Gio::FileInfo get_file_info () noexcept;

gi::property_proxy<Gio::FileInfo, base::ZlibDecompressorBase> property_file_info()
{ return gi::property_proxy<Gio::FileInfo, base::ZlibDecompressorBase> (*this, "file-info"); }
const gi::property_proxy<Gio::FileInfo, base::ZlibDecompressorBase> property_file_info() const
{ return gi::property_proxy<Gio::FileInfo, base::ZlibDecompressorBase> (*this, "file-info"); }

gi::property_proxy<Gio::ZlibCompressorFormat, base::ZlibDecompressorBase> property_format()
{ return gi::property_proxy<Gio::ZlibCompressorFormat, base::ZlibDecompressorBase> (*this, "format"); }
const gi::property_proxy<Gio::ZlibCompressorFormat, base::ZlibDecompressorBase> property_format() const
{ return gi::property_proxy<Gio::ZlibCompressorFormat, base::ZlibDecompressorBase> (*this, "format"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/zlibdecompressor_extra_def.hpp>)
#include <gio/zlibdecompressor_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/zlibdecompressor_extra.hpp>)
#include <gio/zlibdecompressor_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class ZlibDecompressor : public GI_GIO_ZLIBDECOMPRESSOR_BASE
{ typedef GI_GIO_ZLIBDECOMPRESSOR_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GZlibDecompressor>
{ typedef Gio::ZlibDecompressor type; }; 

} // namespace repository

} // namespace gi

#include "converter.hpp"

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class ZlibDecompressorClassDef
{
typedef ZlibDecompressorClassDef self;
public:
typedef Gio::ZlibDecompressor instance_type;
typedef ::GZlibDecompressorClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ZlibDecompressorClass: public detail::ClassTemplate<Gio::impl::internal::ZlibDecompressorClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ConverterIfaceClassImpl>
{
typedef ZlibDecompressorClass self;
typedef detail::ClassTemplate<Gio::impl::internal::ZlibDecompressorClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ConverterIfaceClassImpl> super;

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

using ZlibDecompressorImpl = detail::ObjectImpl<ZlibDecompressor, internal::ZlibDecompressorClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
