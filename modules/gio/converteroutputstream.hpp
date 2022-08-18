// AUTO-GENERATED

#ifndef _GI_GIO_CONVERTEROUTPUTSTREAM_HPP_
#define _GI_GIO_CONVERTEROUTPUTSTREAM_HPP_

#include "filteroutputstream.hpp"

namespace gi {

namespace repository {

namespace Gio {

class Converter;
class OutputStream;
class PollableOutputStream;

class ConverterOutputStream;

namespace base {


#define GI_GIO_CONVERTEROUTPUTSTREAM_BASE base::ConverterOutputStreamBase
class ConverterOutputStreamBase : public Gio::FilterOutputStream
{
typedef Gio::FilterOutputStream super_type;
public:
typedef ::GConverterOutputStream BaseObjectType;

ConverterOutputStreamBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_converter_output_stream_get_type(); } 

GI_INLINE_DECL Gio::PollableOutputStream interface_ (gi::interface_tag<Gio::PollableOutputStream>);

GI_INLINE_DECL operator Gio::PollableOutputStream ();

// GOutputStream* g_converter_output_stream_new (GOutputStream* base_stream, GConverter* converter);
// ::GConverterOutputStream* g_converter_output_stream_new (::GOutputStream* base_stream, ::GConverter* converter);
static GI_INLINE_DECL Gio::ConverterOutputStream new_ (Gio::OutputStream base_stream, Gio::Converter converter) noexcept;

// GConverter* g_converter_output_stream_get_converter (GConverterOutputStream* converter_stream);
// ::GConverter* g_converter_output_stream_get_converter (::GConverterOutputStream* converter_stream);
GI_INLINE_DECL Gio::Converter get_converter () noexcept;

gi::property_proxy<Gio::Converter, base::ConverterOutputStreamBase> property_converter()
{ return gi::property_proxy<Gio::Converter, base::ConverterOutputStreamBase> (*this, "converter"); }
const gi::property_proxy<Gio::Converter, base::ConverterOutputStreamBase> property_converter() const
{ return gi::property_proxy<Gio::Converter, base::ConverterOutputStreamBase> (*this, "converter"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/converteroutputstream_extra_def.hpp>)
#include <gio/converteroutputstream_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/converteroutputstream_extra.hpp>)
#include <gio/converteroutputstream_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class ConverterOutputStream : public GI_GIO_CONVERTEROUTPUTSTREAM_BASE
{ typedef GI_GIO_CONVERTEROUTPUTSTREAM_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GConverterOutputStream>
{ typedef Gio::ConverterOutputStream type; }; 

} // namespace repository

} // namespace gi

#include "pollableoutputstream.hpp"

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class ConverterOutputStreamClassDef
{
typedef ConverterOutputStreamClassDef self;
public:
typedef Gio::ConverterOutputStream instance_type;
typedef ::GConverterOutputStreamClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ConverterOutputStreamClass: public detail::ClassTemplate<Gio::impl::internal::ConverterOutputStreamClassDef, Gio::impl::internal::FilterOutputStreamClass, Gio::impl::internal::PollableOutputStreamInterfaceClassImpl>
{
typedef ConverterOutputStreamClass self;
typedef detail::ClassTemplate<Gio::impl::internal::ConverterOutputStreamClassDef, Gio::impl::internal::FilterOutputStreamClass, Gio::impl::internal::PollableOutputStreamInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::PollableOutputStreamInterfaceClassImpl GPollableOutputStreamInterface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using ConverterOutputStreamImpl = detail::ObjectImpl<ConverterOutputStream, internal::ConverterOutputStreamClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
