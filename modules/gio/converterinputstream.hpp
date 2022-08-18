// AUTO-GENERATED

#ifndef _GI_GIO_CONVERTERINPUTSTREAM_HPP_
#define _GI_GIO_CONVERTERINPUTSTREAM_HPP_

#include "filterinputstream.hpp"

namespace gi {

namespace repository {

namespace Gio {

class Converter;
class InputStream;
class PollableInputStream;

class ConverterInputStream;

namespace base {


#define GI_GIO_CONVERTERINPUTSTREAM_BASE base::ConverterInputStreamBase
class ConverterInputStreamBase : public Gio::FilterInputStream
{
typedef Gio::FilterInputStream super_type;
public:
typedef ::GConverterInputStream BaseObjectType;

ConverterInputStreamBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_converter_input_stream_get_type(); } 

GI_INLINE_DECL Gio::PollableInputStream interface_ (gi::interface_tag<Gio::PollableInputStream>);

GI_INLINE_DECL operator Gio::PollableInputStream ();

// GInputStream* g_converter_input_stream_new (GInputStream* base_stream, GConverter* converter);
// ::GConverterInputStream* g_converter_input_stream_new (::GInputStream* base_stream, ::GConverter* converter);
static GI_INLINE_DECL Gio::ConverterInputStream new_ (Gio::InputStream base_stream, Gio::Converter converter) noexcept;

// GConverter* g_converter_input_stream_get_converter (GConverterInputStream* converter_stream);
// ::GConverter* g_converter_input_stream_get_converter (::GConverterInputStream* converter_stream);
GI_INLINE_DECL Gio::Converter get_converter () noexcept;

gi::property_proxy<Gio::Converter, base::ConverterInputStreamBase> property_converter()
{ return gi::property_proxy<Gio::Converter, base::ConverterInputStreamBase> (*this, "converter"); }
const gi::property_proxy<Gio::Converter, base::ConverterInputStreamBase> property_converter() const
{ return gi::property_proxy<Gio::Converter, base::ConverterInputStreamBase> (*this, "converter"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/converterinputstream_extra_def.hpp>)
#include <gio/converterinputstream_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/converterinputstream_extra.hpp>)
#include <gio/converterinputstream_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class ConverterInputStream : public GI_GIO_CONVERTERINPUTSTREAM_BASE
{ typedef GI_GIO_CONVERTERINPUTSTREAM_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GConverterInputStream>
{ typedef Gio::ConverterInputStream type; }; 

} // namespace repository

} // namespace gi

#include "pollableinputstream.hpp"

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class ConverterInputStreamClassDef
{
typedef ConverterInputStreamClassDef self;
public:
typedef Gio::ConverterInputStream instance_type;
typedef ::GConverterInputStreamClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ConverterInputStreamClass: public detail::ClassTemplate<Gio::impl::internal::ConverterInputStreamClassDef, Gio::impl::internal::FilterInputStreamClass, Gio::impl::internal::PollableInputStreamInterfaceClassImpl>
{
typedef ConverterInputStreamClass self;
typedef detail::ClassTemplate<Gio::impl::internal::ConverterInputStreamClassDef, Gio::impl::internal::FilterInputStreamClass, Gio::impl::internal::PollableInputStreamInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::PollableInputStreamInterfaceClassImpl GPollableInputStreamInterface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using ConverterInputStreamImpl = detail::ObjectImpl<ConverterInputStream, internal::ConverterInputStreamClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
