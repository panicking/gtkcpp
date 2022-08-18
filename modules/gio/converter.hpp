// AUTO-GENERATED

#ifndef _GI_GIO_CONVERTER_HPP_
#define _GI_GIO_CONVERTER_HPP_


namespace gi {

namespace repository {

namespace Gio {


class Converter;

namespace base {


#define GI_GIO_CONVERTER_BASE base::ConverterBase
class ConverterBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GConverter BaseObjectType;

ConverterBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_converter_get_type(); } 

// GConverterResult g_converter_convert (GConverter* converter, void* inbuf, gsize inbuf_size, void* outbuf, gsize outbuf_size, GConverterFlags flags, gsize* bytes_read, gsize* bytes_written, GError ** error);
// ::GConverterResult g_converter_convert (::GConverter* converter, guint8* inbuf, gsize inbuf_size, guint8* outbuf, gsize outbuf_size, ::GConverterFlags flags, gsize* bytes_read, gsize* bytes_written, GError ** error);
GI_INLINE_DECL Gio::ConverterResult convert (guint8 * inbuf, gsize inbuf_size, guint8 * outbuf, gsize outbuf_size, Gio::ConverterFlags flags, gsize & bytes_read, gsize & bytes_written);
GI_INLINE_DECL Gio::ConverterResult convert (guint8 * inbuf, gsize inbuf_size, guint8 * outbuf, gsize outbuf_size, Gio::ConverterFlags flags, gsize & bytes_read, gsize & bytes_written, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<Gio::ConverterResult, gsize, gsize> convert (guint8 * inbuf, gsize inbuf_size, guint8 * outbuf, gsize outbuf_size, Gio::ConverterFlags flags);
GI_INLINE_DECL std::tuple<Gio::ConverterResult, gsize, gsize> convert (guint8 * inbuf, gsize inbuf_size, guint8 * outbuf, gsize outbuf_size, Gio::ConverterFlags flags, GLib::Error * _error) noexcept;

// void g_converter_reset (GConverter* converter);
// void g_converter_reset (::GConverter* converter);
GI_INLINE_DECL void reset () noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/converter_extra_def.hpp>)
#include <gio/converter_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/converter_extra.hpp>)
#include <gio/converter_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class Converter : public GI_GIO_CONVERTER_BASE
{ typedef GI_GIO_CONVERTER_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GConverter>
{ typedef Gio::Converter type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class ConverterIfaceDef
{
typedef ConverterIfaceDef self;
public:
typedef Gio::Converter instance_type;
typedef ::GConverterIface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// GConverterResult Converter::convert (GConverter* converter, void* inbuf, gsize inbuf_size, void* outbuf, gsize outbuf_size, GConverterFlags flags, gsize* bytes_read, gsize* bytes_written, GError ** error);
// ::GConverterResult Converter::convert (::GConverter* converter, guint8* inbuf, gsize inbuf_size, guint8* outbuf, gsize outbuf_size, ::GConverterFlags flags, gsize* bytes_read, gsize* bytes_written, GError ** error);
// SKIP; virtual-method container parameter not supported, virtual-method container parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported, callee GError not supported

// void Converter::reset (GConverter* converter);
// void Converter::reset (::GConverter* converter);
virtual void reset_ () noexcept = 0;


};

using ConverterImpl = detail::InterfaceImpl<ConverterIfaceDef>;

class ConverterIfaceClassImpl: public detail::InterfaceClassImpl<ConverterImpl>
{
typedef ConverterIfaceClassImpl self;
typedef detail::InterfaceClassImpl<ConverterImpl> super;

protected:
using super::super;

// GConverterResult Converter::convert (GConverter* converter, void* inbuf, gsize inbuf_size, void* outbuf, gsize outbuf_size, GConverterFlags flags, gsize* bytes_read, gsize* bytes_written, GError ** error);
// ::GConverterResult Converter::convert (::GConverter* converter, guint8* inbuf, gsize inbuf_size, guint8* outbuf, gsize outbuf_size, ::GConverterFlags flags, gsize* bytes_read, gsize* bytes_written, GError ** error);
// SKIP; virtual-method container parameter not supported, virtual-method container parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported, callee GError not supported

// void Converter::reset (GConverter* converter);
// void Converter::reset (::GConverter* converter);
GI_INLINE_DECL void reset_ () noexcept override;


};

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
