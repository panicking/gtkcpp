// AUTO-GENERATED

#ifndef _GI_GIO_SIMPLEIOSTREAM_HPP_
#define _GI_GIO_SIMPLEIOSTREAM_HPP_

#include "iostream.hpp"

namespace gi {

namespace repository {

namespace Gio {

class InputStream;
class OutputStream;

class SimpleIOStream;

namespace base {


#define GI_GIO_SIMPLEIOSTREAM_BASE base::SimpleIOStreamBase
class SimpleIOStreamBase : public Gio::IOStream
{
typedef Gio::IOStream super_type;
public:
typedef ::GSimpleIOStream BaseObjectType;

SimpleIOStreamBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_simple_io_stream_get_type(); } 

// GIOStream* g_simple_io_stream_new (GInputStream* input_stream, GOutputStream* output_stream);
// ::GSimpleIOStream* g_simple_io_stream_new (::GInputStream* input_stream, ::GOutputStream* output_stream);
static GI_INLINE_DECL Gio::SimpleIOStream new_ (Gio::InputStream input_stream, Gio::OutputStream output_stream) noexcept;

gi::property_proxy<Gio::InputStream, base::SimpleIOStreamBase> property_input_stream()
{ return gi::property_proxy<Gio::InputStream, base::SimpleIOStreamBase> (*this, "input-stream"); }
const gi::property_proxy<Gio::InputStream, base::SimpleIOStreamBase> property_input_stream() const
{ return gi::property_proxy<Gio::InputStream, base::SimpleIOStreamBase> (*this, "input-stream"); }

gi::property_proxy<Gio::OutputStream, base::SimpleIOStreamBase> property_output_stream()
{ return gi::property_proxy<Gio::OutputStream, base::SimpleIOStreamBase> (*this, "output-stream"); }
const gi::property_proxy<Gio::OutputStream, base::SimpleIOStreamBase> property_output_stream() const
{ return gi::property_proxy<Gio::OutputStream, base::SimpleIOStreamBase> (*this, "output-stream"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/simpleiostream_extra_def.hpp>)
#include <gio/simpleiostream_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/simpleiostream_extra.hpp>)
#include <gio/simpleiostream_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class SimpleIOStream : public GI_GIO_SIMPLEIOSTREAM_BASE
{ typedef GI_GIO_SIMPLEIOSTREAM_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GSimpleIOStream>
{ typedef Gio::SimpleIOStream type; }; 

} // namespace repository

} // namespace gi

#endif
